<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <div class="view-grouping-header view-grouping-header-2">
      <a id="<?php print $css_id; ?>" class="oag-blog-archive-title" href="<?php print $full_url; ?>"><?php print $title ?></a>
      <span class="oag-blog-archive-toggle collapsed" data-toggle="collapse" data-target="#view-grouping-<?php print $year . '-' . $month ?>">
        <span class="sr-only">Collapsed</span>
      </span>
    </div>
  <?php endif; ?>
  <ul id="view-grouping-<?php print $year . '-' . $month ?>" class="view-grouping-content collapse">
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
    <?php endforeach; ?>
  </ul>
<?php print $wrapper_suffix; ?>
