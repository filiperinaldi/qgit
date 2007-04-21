/* Help content is generated automatically from README by helpgen script */

static const char* helpInfo =
"<qt>\n"
"<center><h1>QGit Handbook</h1></center>\n"
"<h2>Command line arguments</h2>\n"
"<p>Run qgit from a git working directory, command line arguments\n"
"are filtered by <em>git rev-list</em>. Some examples:</p>\n"
"<pre>qgit v2.6.12-rc5..v2.6.12-rc6\n"
"qgit v2.6.12-rc6\n"
"qgit --all\n"
"qgit --after=\"Aug 10\" --before=\"Aug 15\"</pre>\n"
"<p>If qgit is launched without arguments or if you change archive with\n"
"<em>open</em> menu, a dialog for range select is shown.\n"
"You can select top and bottom rev tags from the list or paste a\n"
"specific revision. Values are passed to <em>git rev-list</em> to narrow\n"
"data loading to chosen revisions.</p>\n"
"<hr />\n"
"<h2>Main view</h2>\n"
"<p>You can navigate through logs, file names, file history, archive tree.\n"
"All the views will be updated accordingly.</p>\n"
"<p>Copy/paste is supported on all fields. Copy (CTRL+C) is supported on\n"
"all views.</p>\n"
"<p>All the references found recursively under .git/refs/ directory are\n"
"highlighted according to their type: current branch(HEAD), branch, tag,\n"
"other. Reference names and any associated messages can be viewed in status\n"
"bar when a tagged revision is selected.</p>\n"
"<p>When you right click on main view a context sensitive pop-up menu is shows\n"
"available commands and a <em>quick jump</em> tag list.</p>\n"
"<dl>\n"
"<dt>\n"
"<strong>Key bindings</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"</p>\n"
"</dd>\n"
"</dl>\n"
"<table rules=\"none\"\n"
"frame=\"hsides\"\n"
"cellspacing=\"0\" cellpadding=\"4\">\n"
"<tbody>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    r\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Go to revisions list page\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    p\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Go to patch page\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    f\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Go to file page\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;Alt+wheel&gt;\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Go to next/previous page\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    t\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Toggle tree view\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    s\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Toggle view of secondary panes\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    h\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Toggle view of revision header\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;Home&gt;\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Move to first revision\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;End&gt;\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Move to last revision\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;Up&gt;, i\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Move up one revision\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;Down&gt;, n, k\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Move down one revision\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;Shift-Up&gt;\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Move to previous highlighted line\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;Shift-Down&gt;\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Move to next highlighted line\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;Left&gt;\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Go back in history list\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;Right&gt;\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Go forward in history list\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;CTRL-plus&gt;\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Increase font size\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;CTRL-minus&gt;\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Decrease font size\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;Delete&gt;, b\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Scroll content up one page\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;Backspace&gt;\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Scroll content up one page\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    &lt;Space&gt;\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Scroll content down one page\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    u\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Scroll content up 18 lines\n"
"    </td>\n"
"  </tr>\n"
"  <tr>\n"
"    <td align=\"left\" width=\"160\" valign=\"top\">\n"
"    d\n"
"    </td>\n"
"    <td align=\"left\" width=\"400\" valign=\"top\">\n"
"    Scroll content down 18 lines\n"
"    </td>\n"
"  </tr>\n"
"</tbody>\n"
"</table>\n"
"<dl>\n"
"<dt>\n"
"<strong>Directory tree</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"From menu or toolbar button it is possible to show a side panel with\n"
"tree view of repository files and directories.\n"
"</p>\n"
"<p>Double clicking on a file opens file annotation window. With <em>filter by tree</em>\n"
"button it is possible to compress revision list to show only selected\n"
"files/directories in tree view.</p>\n"
"<p>Tree view supports multi-selection. When you right click on a file on tree\n"
"view a context sensitive pop-up menu is shows with available commands.</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Working dir changes</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"When <em>Check working dir</em> flag is set, as example from main view context\n"
"pop-up menu, a pseudo-revision is shown and highlighted at the top of the\n"
"list. Highlight and revision name reflect current working dir status:\n"
"<em>Nothing to commit</em> or <em>Working dir changes</em> respectively.\n"
"</p>\n"
"<p>To check for working dir modified files set corresponding preference in\n"
"Edit-&gt;Settings-&gt;<em>Working dir</em>. QGit checks for possible new files added in\n"
"working directory using ignoring rules according to git ls-files\n"
"specifications, see menu Edit-&gt;Settings-&gt;<em>Working dir</em>.</p>\n"
"<p><b>Tip:</b> If you don't need to see modified files in working dir, disable\n"
"corresponding setting and start-up time will be shorter.</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Lane info</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"Selecting a lane with mouse right button will display a pop-up\n"
"with the list of children and parent. Select one and you jump to it.\n"
"</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Filter</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"Use the combo box to select where you want to filter on. Currently\n"
"supported are: log header, log message, revision author, revision SHA1,\n"
"file name and patch content.\n"
"</p>\n"
"<p>Write a filter string, press filter button and the view\n"
"will update showing only commits that contains the filter string,\n"
"case insensitive. Toggle filter button to release the filter.</p>\n"
"<p><b>Note:</b> In case of patch content regexp filtering, the given string is\n"
"interpreted as a POSIX regular expression, not as a simple substring.</p>\n"
"<p><b>Tip:</b> Very useful to quick retrieve a sha writing only first 3-4\n"
"digits and filtering on revision sha. The sha value can then be\n"
"copied from SHA field.</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Format patch series</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"After mouse selecting the chosen revisions (use standard CTRL+left click)\n"
"for single select or SHIFT+left click for range select), press <em>format\n"
"patch</em> button or use file menu and a dialog will let you choose patches\n"
"destination directory. Then <em>git format-patch-script</em> will be called and\n"
"patches created. It is possible to specify additional options with\n"
"Edit-&gt;Settings menu.\n"
"</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Apply patch</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"This menu entry is complementary to format patch and it's an interface\n"
"to <em>git am</em>.\n"
"</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Drag and drop</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"It is possible to drag some selected revs from one instance of qgit to another\n"
"open on a different archive. In this case <em>git format-patch</em> is used in the\n"
"dragging archive to create temporary patches imported in the dropping archive\n"
"by <em>git am</em>.\n"
"</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Make tag</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"Select a revision and open Edit-&gt;<em>Make Tag</em> or use right click context\n"
"pop-up menu. Two dialogs will be shown, the first asking for a tag name, the\n"
"second for a tag message (not mandatory). If a non empty message is written,\n"
"this will be saved together with the tag. Tags and tag messages can be viewed\n"
"in status bar when a tagged revision is selected.\n"
"</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Delete tag</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"Select a tagged revision and open Edit-&gt;<em>Delete Tag</em> or use right click\n"
"context pop-up menu. After confirmation the selected revision will be\n"
"untagged.\n"
"</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Save file</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"Select a file from tree or file list and open File-&gt;<em>Save file as</em> or use the\n"
"tree view context sensitive pop-up menu (right click), a dialog will be shown\n"
"asking for a file name (default to current) and destination directory. Input\n"
"a valid name, press OK and the file will be saved.\n"
"</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Commit changes</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"When enabled with Edit-&gt;Settings-&gt;<em>Working dir</em>-&gt;<em>Diff against working dir</em>\n"
"and there is something committable, a special highlighted first revision is\n"
"shown, with the status of the archive and the possible pending stuff.\n"
"From Edit-&gt;Commit it is then possible to invoke the commit dialog.\n"
"</p>\n"
"<p>In commit dialog select the files to commit or, simply, to sync with index\n"
"(call <em>git update-index</em> on them). A proper commit message may be entered and,\n"
"after confirmation, changes are committed and a new revision is created.</p>\n"
"<p>The core commit function is performed by <em>git commit</em>.</p>\n"
"<p><b>Tip:</b> It is possible to use a template for commit message, use\n"
"Edit-&gt;Settings-&gt;Commit to define template file path.</p>\n"
"</dd>\n"
"</dl>\n"
"<hr />\n"
"<h2>Patch viewer</h2>\n"
"<p>To open patch tab use context menu, double click on a revision or file in\n"
"main view or select View-&gt;<em>View patch</em> menu (CTRL+P). The patch shown is\n"
"the diff of current selected commit against:</p>\n"
"<ul>\n"
"<li>\n"
"<p>\n"
"Parent (default)\n"
"</p>\n"
"</li>\n"
"<li>\n"
"<p>\n"
"HEAD\n"
"</p>\n"
"</li>\n"
"<li>\n"
"<p>\n"
"Selected SHA or reference name\n"
"</p>\n"
"</li>\n"
"</ul>\n"
"<p>In the last case SHA is chosen by writing or pasting a tree-ish or a reference\n"
"names in the corresponding field and pressing return. You get the same result\n"
"also with a CTRL+right click on a revision in main list. Selected target\n"
"will be highlighted. CTRL+right click again on the highlighted revision to\n"
"release the filter.</p>\n"
"<p>With the <em>filter</em> button at the right of the tool bar it is possible to\n"
"toggle the display of removed code lines. This can be useful to easy\n"
"reading of the patch.</p>\n"
"<hr />\n"
"<h2>External diff viewer</h2>\n"
"<p>From <em>View-&gt;External diff</em> it is possible to invoke an external diff viewer,\n"
"as example to view the diffs in a two vertical tiled windows.</p>\n"
"<p>External diff viewer shows the diffs between two files.\n"
"First file is the current selected file of current revision.\n"
"Second file is the same file of the parent revision or of a specific revision\n"
"if <em>diff to sha</em> feature is enabled (diff target is highlighted, see above).</p>\n"
"<p>Default external viewer is kompare, but it is possible to set a preferred one\n"
"from <em>Edit-&gt;Settings-&gt;External Diff Viewer</em>.</p>\n"
"<hr />\n"
"<h2>File viewer</h2>\n"
"<p>It is possible to view file contents of any file at any revision time in\n"
"history.</p>\n"
"<dl>\n"
"<dt>\n"
"<strong>File list panel</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"In the bottom right of main view a list of files modified by current\n"
"revision is shown. Selecting a file name will update the patch view\n"
"to center on the file. File names colors use the following convention\n"
"</p>\n"
"<ul>\n"
"<li>\n"
"<p>\n"
"black for modified files\n"
"</p>\n"
"</li>\n"
"<li>\n"
"<p>\n"
"green for new files\n"
"</p>\n"
"</li>\n"
"<li>\n"
"<p>\n"
"red for removed files\n"
"</p>\n"
"</li>\n"
"<li>\n"
"<p>\n"
"dark blue for renamed/copied files\n"
"</p>\n"
"</li>\n"
"</ul>\n"
"</dd>\n"
"<dt>\n"
"<strong>Merge files</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"In case of merges the groups of files corresponding to each merge parent\n"
"are separated by two empty lines.\n"
"</p>\n"
"<p>In case of merges you can chose between to see all the merge files or only\n"
"the interesting ones (default), i.e. the files modified by more then one\n"
"merge parent.</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>File content</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"To view file content double click on a file name in tree view, or use context\n"
"menu in file list or select View-&gt;<em>View file</em> menu (CTRL+A).\n"
"</p>\n"
"<p>In file view page will be shown current revision's file content and file\n"
"history.</p>\n"
"<p>It is possible to copy to the clipboard the selected content with CTRL+C or\n"
"with the corresponding button. Any line header will be automatically removed.</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>File annotations</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"On opening or updating file viewer, file history will be retrieved from archive\n"
"together with file content. Annotations are then calculated in background\n"
"and the view is updated when ready.\n"
"</p>\n"
"<p>Double clicking on an annotation index number will update history list\n"
"to point to corresponding revision.</p>\n"
"<p>File content will change too, to show new selected revision file. To keep\n"
"the same view content after double clicking, probably what you want, just pin\n"
"it with <em>Pin view</em> check button. Next to the check button there is a spinbox\n"
"to show/select the current revision number.</p>\n"
"<p>Double click on history list entry to update main, patch and tree views to\n"
"corresponding revision.</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Code region filter</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"When annotation info is available the <em>filter</em> button is enabled and it is\n"
"possible to mouse select a region of file content. Then, when pressing\n"
"the filter button, only revisions that modify the selected region will be\n"
"visible. Selected code region is highlighted and a shrunken history is\n"
"shown. Filter button is a toggle button, so just press it again to\n"
"release the filter.\n"
"</p>\n"
"</dd>\n"
"<dt>\n"
"<strong>Syntax highlighter</strong>\n"
"</dt>\n"
"<dd>\n"
"<p>\n"
"If GNU Source-highlight (http://www.gnu.org/software/src-highlite/) is\n"
"installed and in PATH then it is possible to toggle source code highlight\n"
"pressing the <em>Color text</em> tool button. Please refer to Source-highlight\n"
"site for the list of supported languages and additional documentation.\n"
"</p>\n"
"</dd>\n"
"</dl>\n"
"<hr />\n"
"<h2>Actions</h2>\n"
"<p>Actions can be added/removed using a dedicated dialog invoked\n"
"from <em>Actions-&gt;Setup actions&#8230;</em> menu. Actions can be activated\n"
"clicking on their name from the Actions menu.</p>\n"
"<p>Each action can be associated to a list of any type of git or shell\n"
"commands or to an external script.</p>\n"
"<p>While an action is running a terminal window is shown to display the\n"
"corresponding output.</p>\n"
"<p>An action can also ask for command line arguments before to run so\n"
"to allow for maximum flexibility.</p>\n"
"<p><b>Note:</b> command line arguments are always appended to the first command only.\n"
"This lets you define an action like:</p>\n"
"<pre>git fetch\n"
"git merge</pre>\n"
"<p>And if you type <em>origin</em> when prompted, the action executed will be:</p>\n"
"<pre>git fetch origin\n"
"git merge</pre>\n"
"<p>If you need a more complex arguments passing with a shell like notation\n"
"define a script and associate your action to it.</p>\n"
"<hr />\n"
"<h2>Integration with StGIT</h2>\n"
"<p>When a StGIT stack is found on top of a git archive, qgit transparently\n"
"handles the added information.</p>\n"
"<p>Integration with StGIT is implemented both by new and modified functions.</p>\n"
"<p><b>New functions are automatically activated:</b></p><ul>\n"
"<li>\n"
"<p>\n"
"Visualization of applied and unapplied patches in main view.\n"
"</p>\n"
"</li>\n"
"<li>\n"
"<p>\n"
"Interface to push/pop patches by a mouse right click on selected items.\n"
"   Push supports also multi-selection.\n"
"</p>\n"
"</li>\n"
"</ul>\n"
"<p><b>Existing functions change behavior:</b></p><ul>\n"
"<li>\n"
"<p>\n"
"Commit dialog refreshes top stack patch with modified files instead\n"
"   of sync the cache.\n"
"</p>\n"
"</li>\n"
"<li>\n"
"<p>\n"
"Commit dialog creates a new patch on the top of the stack filled with\n"
"   modified working directory content instead of commit a new revision to\n"
"   git repository.\n"
"</p>\n"
"</li>\n"
"<li>\n"
"<p>\n"
"Apply patch changes to interface StGIT import and fold commands instead\n"
"   of applying patch directly on the git repository.\n"
"</p>\n"
"</li>\n"
"</ul>\n"
"<qt>\n";
