import praw

r = praw.reddit(user_agent = "TutorialBot by Michael /u/thatburneydude")
r.login()

words_to_match = ['definately', 'defiantly', 'definantly', 'definetly', 'definatly']
cache = []

def run_bot():
    subreddit = r.get_subreddit("test")
    comments = subreddit.get_comments(limit=25)
    for comment in comments:
    	comment_text = comment.body.lower()
    	isMatch = any(string in comment_text for string in words_to_match)
    	if isMatch:
    	if comment.id not in cache and isMatch:
    		comment.reply('I think you meant to say "definitely" ')
    		cache.append(comment.id)

  while True:
  	run_bot()
  	time.sleep(50)
