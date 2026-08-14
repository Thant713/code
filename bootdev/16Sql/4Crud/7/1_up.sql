CREATE TABLE transactions (
  id INTEGER PRIMARY KEY,
  user_id INTEGER,
  recipient_id INTEGER,
  sender_id INTEGER,
  amount REAL
);

INSERT INTO
  transactions (user_id, recipient_id, sender_id, amount)
VALUES
  (1, 2, NULL, -10);

INSERT INTO
  transactions (user_id, recipient_id, sender_id, amount)
VALUES
  (1, NULL, 2, 25);

INSERT INTO
  transactions (user_id, recipient_id, sender_id, amount)
VALUES
  (1, 5, NULL, -20);

INSERT INTO
  transactions (user_id, recipient_id, sender_id, amount)
VALUES
  (1, NULL, 3, 10);

INSERT INTO
  transactions (user_id, recipient_id, sender_id, amount)
VALUES
  (2, 4, NULL, -15);

INSERT INTO
  transactions (user_id, recipient_id, sender_id, amount)
VALUES
  (2, NULL, 1, 60);

INSERT INTO
  transactions (user_id, recipient_id, sender_id, amount)
VALUES
  (3, 1, NULL, -7);

INSERT INTO
  transactions (user_id, recipient_id, sender_id, amount)
VALUES
  (3, NULL, 5, 42);

INSERT INTO
  transactions (user_id, recipient_id, sender_id, amount)
VALUES
  (4, NULL, 2, 100);

INSERT INTO
  transactions (user_id, recipient_id, sender_id, amount)
VALUES
  (5, 3, NULL, -33);
