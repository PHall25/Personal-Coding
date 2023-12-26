-- Create another table for storing user roles
CREATE TABLE user_roles (
    user_id INT,
    role VARCHAR(20)
);

-- Join the 'users' and 'user_roles' tables
SELECT users.username, user_roles.role
FROM users
INNER JOIN user_roles ON users.user_id = user_roles.user_id;
