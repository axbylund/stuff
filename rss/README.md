# RSS Generator

Generate an RSS feed with cron and add items by writing a .item (txt) file

# Notes

* Change the paths to where you put all the stuff
* You could make it check for new items as a requirement to build the feed
* To add a new RSS item from the console: `rss-add http://example.link "Check out the latest info"`
* You could also just have it rebuild the feed when you add a new item

```
 # Example cron.d to refresh the feed every 5 mins

   */5 * * * * root /home/alex/bin/rss-build
```