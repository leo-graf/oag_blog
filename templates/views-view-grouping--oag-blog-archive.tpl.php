<?php

/**
 * @file
 * This template is used to print a single grouping in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $grouping: The grouping instruction.
 * - $grouping_level: Integer indicating the hierarchical level of the grouping.
 * - $rows: The rows contained in this grouping.
 * - $title: The title of this grouping.
 * - $content: The processed content output that will normally be used.
 */
?>
<div class="view-grouping">
  <div class="view-grouping-header view-grouping-header-1">
    <a id="<?php print $css_id; ?>" class="oag-blog-archive-title" href="<?php print $full_url; ?>"><?php print $title; ?></a>
    <span class="oag-blog-archive-toggle collapsed" data-toggle="collapse" data-target="#view-grouping-<?php print $year; ?>"><span class="sr-only">Collapsed</span></span>
  </div>
  <div id="view-grouping-<?php print $year; ?>" class="view-grouping-content collapse">
    <?php print $content; ?>
  </div>
</div>
