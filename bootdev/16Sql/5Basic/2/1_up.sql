CREATE TABLE transactions (
  id INTEGER,
  recipient_id INTEGER,
  sender_id INTEGER,
  note TEXT,
  amount REAL,
  was_successful BOOLEAN
);

INSERT INTO
  transactions (
    id,
    recipient_id,
    sender_id,
    note,
    amount,
    was_successful
  )
VALUES
  (1, 9, 4, 'Testing transaction!', 10.50, true);

INSERT INTO
  transactions (
    id,
    recipient_id,
    sender_id,
    note,
    amount,
    was_successful
  )
VALUES
  (2, 5, 10, 'Thanks for lunch!', 9.56, true);

INSERT INTO
  transactions (
    id,
    recipient_id,
    sender_id,
    note,
    amount,
    was_successful
  )
VALUES
  (3, 6, 2, 'Car problems', 256.21, true);

INSERT INTO
  transactions (
    id,
    recipient_id,
    sender_id,
    note,
    amount,
    was_successful
  )
VALUES
  (4, 7, 8, 'Happy birthday!!', 50, true);

INSERT INTO
  transactions (
    id,
    recipient_id,
    sender_id,
    note,
    amount,
    was_successful
  )
VALUES
  (5, 9, 11, 'MTG Draft', 50, false);

INSERT INTO
  transactions (
    id,
    recipient_id,
    sender_id,
    note,
    amount,
    was_successful
  )
VALUES
  (6, 3, 14, 'Electric bill split', 73.24, true);

INSERT INTO
  transactions (
    id,
    recipient_id,
    sender_id,
    note,
    amount,
    was_successful
  )
VALUES
  (
    7,
    12,
    1,
    'Weekend trip reimbursement',
    189.99,
    false
  );

INSERT INTO
  transactions (
    id,
    recipient_id,
    sender_id,
    note,
    amount,
    was_successful
  )
VALUES
  (8, 4, 6, 'Coffee and pastries', 14.75, true);

INSERT INTO
  transactions (
    id,
    recipient_id,
    sender_id,
    note,
    amount,
    was_successful
  )
VALUES
  (9, 15, 2, 'Concert tickets', 320.00, false);

INSERT INTO
  transactions (
    id,
    recipient_id,
    sender_id,
    note,
    amount,
    was_successful
  )
VALUES
  (10, 8, 13, 'Gym membership', 45.00, true);
