<?php

function cwrc_dashboards_user_dashboard($user) {
  return '';
}

function cwrc_dashboards_project_dashboard($node) {
  drupal_set_title($node->title);
  return '';
}