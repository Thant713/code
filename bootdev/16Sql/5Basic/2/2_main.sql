SELECT
  *,
  iff (
    was_successful = true,
    'No action required',
    'Perform an audit'
  ) AS audit
FROM
  transactions
