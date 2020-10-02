<?php

// dpm($schools);
// name, address, zip
?>


<div class="school_list">
  <?php foreach($schools as $school): ?>
    <div class="school">
      <div class="school__name"><?= $school['name'] ?></div>
      <div class="b-school-address">
        <div class="address__title">Address</div>
        <div class="address__street"><?= $school['address'] ?></div>
        <div class="address__zip"><?= $school['zip'] ?></div>
      </div>
      <div class="school__actions">
        <a class="school__edit" href='/schools/<?= $school['school_id'] ?>'>Edit</a>
        <a class="school__delete" href='/schools/<?= $school['school_id'] ?>'>Delete</a>
      </div>
    </div>
  <?php endforeach; ?>
</div>