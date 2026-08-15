CREATE TABLE transactions (
  id INTEGER PRIMARY KEY,
  user_id INTEGER NOT NULL,
  recipient_id INTEGER,
  sender_id INTEGER,
  note TEXT,
  amount REAL,
  was_successful BOOLEAN
);

INSERT INTO
  transactions (user_id, sender_id, note, amount, was_successful)
VALUES
  (
    2,
    10,
    'Happy Birthday! Gramma loves you!',
    20.00,
    true
  );

INSERT INTO
  transactions (user_id, sender_id, note, amount, was_successful)
VALUES
  (2, 10, 'Happy Birthday from Gramma!', 20.00, true);

INSERT INTO
  transactions (user_id, sender_id, note, amount, was_successful)
VALUES
  (2, 2, 'Car problems', 256.21, true);

INSERT INTO
  transactions (user_id, sender_id, note, amount, was_successful)
VALUES
  (2, 4, 'Dinner split', 24.40, true);

INSERT INTO
  transactions (user_id, sender_id, note, amount, was_successful)
VALUES
  (2, 7, 'Concert tickets', 65.00, false);

INSERT INTO
  transactions (user_id, sender_id, note, amount, was_successful)
VALUES
  (2, 12, 'Rent for April', 900.00, true);

INSERT INTO
  transactions (user_id, sender_id, note, amount, was_successful)
VALUES
  (2, NULL, 'Cashback reward', 5.25, true);

INSERT INTO
  transactions (user_id, sender_id, note, amount, was_successful)
VALUES
  (2, 10, 'Birthday bonus from Gramma!', 75.00, true);

INSERT INTO
  transactions (user_id, sender_id, note, amount, was_successful)
VALUES
  (
    2,
    10,
    'Happy birthday! Proud of you always. Love, Gramma.',
    15.75,
    true
  );
