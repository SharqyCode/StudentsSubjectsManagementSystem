CREATE TABLE IF NOT EXISTS admin(id integer PRIMARY KEY AUTOINCREMENT, username text NOT NULL unique, name text NOT NULL, password text NOT NULL);

CREATE TABLE IF NOT EXISTS student(id integer PRIMARY KEY, name text NOT NULL, password text NOT NULL, academic_year text NOT NULL, admin_id integer, foreign key(admin_id) references admin(id) ON delete cascade ON UPDATE no action);

CREATE TABLE IF NOT EXISTS course(code integer PRIMARY KEY, hours integer NOT NULL, name text NOT NULL, max_num_of_students integer NOT NULL, admin_id integer, foreign key(admin_id) references admin(id)ON delete cascade ON UPDATE no action);

CREATE TABLE IF NOT EXISTS prereq(course integer, req_course integer, PRIMARY KEY(course, req_course), FOREIGN KEY(course) REFERENCES course(code) ON DELETE CASCADE ON UPDATE NO ACTION, FOREIGN KEY(req_course) REFERENCES course(code) ON DELETE CASCADE ON UPDATE NO ACTION);

CREATE TABLE IF NOT EXISTS enrolled(stud_id integer, course_code integer, status integer, PRIMARY KEY(stud_id, course_code), FOREIGN KEY(stud_id) REFERENCES student(id) ON DELETE CASCADE ON UPDATE NO ACTION, FOREIGN KEY(course_code) REFERENCES course(code) ON DELETE CASCADE ON UPDATE NO ACTION);