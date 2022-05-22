<?php

//to reduce code duplication
include "../db.php";

//Needs to be = as in form in C#
$unitName = $_POST['unitName'];
$unitPowerCost = $_POST['unitPowerCost'];
$unitPointCost = $_POST['unitPointCost'];
$unitMove = $_POST['unitMove'];
$unitWeaponSkill = $_POST['unitWeaponSkill'];
$unitBallisticSkill = $_POST['unitBallisticSkill'];
$unitStrength = $_POST['unitStrength'];
$unitToughness = $_POST['unitToughness'];
$unitWounds = $_POST['unitWounds'];
$unitAttacks = $_POST['unitAttacks'];
$unitLeadership = $_POST['unitLeadership'];
$unitSave = $_POST['unitSave'];
$codexField = $_POST['codexField'];

//TODO: Add SELECT & INSERT Queries and success and error echoes