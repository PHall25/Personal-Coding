-- Calculate the total number of users
SELECT COUNT(*) AS total_users FROM users;

-- Calculate the average length of usernames
SELECT AVG(LENGTH(username)) AS avg_username_length FROM users;
