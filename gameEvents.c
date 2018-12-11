#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "gameInfo.h"
#include "hud.h"

gameInfo mainMenu(gameInfo _eventInfo) {

    int lines = 6;
    const char *line[lines];
    int choice = 0;
    line[0] = "Welcome to Doki Doki CMSC Club!";
    line[1] = "Where your college love story awaits!";
    line[2] = "";
    line[3] = "Use the ARROW KEYS to move between options";
    line[4] = "Press ENTER to select!";
    line[5] = "";

    //Setting Options
    int options = 3;
    const char *option[options];
    option[0] = "Start Game";
    option[1] = "Exit Game";
    option[2] = "Debug";

    choice = createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice) {
        case 0:
            _eventInfo.nextEvent = 100;
            _eventInfo.end = 1;
            break;
        case 1:
            _eventInfo.nextEvent = 100000;
            _eventInfo.end = 1;
            break;
        case 2:
            _eventInfo.nextEvent = 10;
            _eventInfo.end = 1;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }

    return _eventInfo;
}

gameInfo dayOne(gameInfo _eventInfo){

//---> INSERT BATTLE 

    int lines = 53;
    const char *line[lines];
    int choice = 0;

    line[0] = "Welcome to P University, the premier university in the country!";
    line[1] = "";
    line[2] = "It's your first day as a BS Computer Science major and oh no! You're late!";
    line[3] = "Quick get into your classroom!";
    line[4] = "";
    line[5] = "You rush in and sit in a random seat near the back.";
    line[6] = "Everyone's already here.";
    line[7] = "";
    line[8] = "In your hurry, you didn't notice you sat beside a girl.";
    line[9] = "";
    line[10] = "'Wow, she's pretty', you think to yourself.";
    line[11] = "";
    line[12] = "You notice that she's sitting a little unconfomfortably.";
    line[13] = "Like maybe she doesn't want to be here";
    line[14] = "";
    line[15] = "'Maybe she's a little shy...'";
    line[16] = "";
    line[17] = "The door bursts open and a young man - probably still in his early twenties -";
    line[18] = "trudges in. His hair is unkempt and sticking up at weird places.";
    line[19] = "Like he just rolled out of bed before coming in.";
    line[20] = "";
    line[21] = "'Is this supposed to be our teacher?'";
    line[22] = "";
    line[23] = "Teacher: Yes, I am in fact your teacher, children... Unfortunately.";
    line[24] = "";
    line[25] = "'Did I say that out loud?'";
    line[26] = "";
    line[27] = "Teacher: No, you did not.";
    line[28] = "";
    line[29] = "'DOES THIS DUDE READ MINDS?'";
    line[30] = "";
    line[31] = "Teacher: I also do not read minds. I just know that's what you're all thinking.";
    line[32] = "I don't really care what you all think though. I'm just here to do my job.";
    line[33] = "";
    line[34] = "Teacher: My name is Mr. K. Don't ask. Just call me Mr. K.";
    line[35] = "";
    line[36] = "Mr. K: I'll be your adviser and your Computer Science teacher for this semester.";
    line[37] = "";
    line[38] = "Mr. K: I like a lot of things. I dislike a lot more things.";
    line[39] = "Now I think that's enough about me.";
    line[40] = "";
    line[41] = "Mr.K: It's time for you to introduce yourselves.";
    line[42] = "";
    line[43] = "He scans the room with his droopy dull black eyes.";
    line[44] = "They come to rest on the girl sitting beside you.";
    line[45] = "";
    line[46] = "Mr. K: Let's start with you. The girl at the back.";
    line[47] = "";
    line[48] = "All eyes in the class turn to her.";
    line[49] = "Her eyes in turn widen. She looks absolutely terrified!";
    line[50] = "";
    line[51] = "Maybe you should say something. What do you want to say?";
    line[52] = "";

    //Setting Options
    int options = 3;
    const char *option[options];
    option[0] = "Pssst. Don't be scared. You can do it!";
    option[1] = ".......";
    option[2] = "Hey, hurry up.";

    choice = createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice) {
        case 0:
            _eventInfo.nextEvent = 201;
            _eventInfo.end = 0;
            break;
        case 1:
            _eventInfo.nextEvent = 202;
            _eventInfo.end = 0;
            break;
        case 2:
            _eventInfo.nextEvent = 203;
            _eventInfo.end = 0;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }

    return _eventInfo;
}

gameInfo onePathOne(gameInfo _eventInfo){
    int lines = 15;
    const char *line[lines];
    int choice = 0;

    line[0] = "The girl startles and jumps up in her seat,";
    line[1] = "as if a ghost poked her in the ribs.";
    line[2] = "";
    line[3] = "Determination flashes in her eyes as she opens her mouth to squeak.";
    line[4] = "";
    line[5] = "Girl: Good morning, everyone! My name is Chi-chi Santiago.";
    line[6] = "Please call me Chi-chi! Thank you!";
    line[7] = "";
    line[8] = "Chi-chi then sits down in a hurry with color in her cheeks.";
    line[9] = "She looks at you from under her lashes and flashes you a small grateful smile.";
    line[10] = "";
    line[11] = "Chi-Chi: Thank you.";
    line[12] = "";
    line[13] = "She looks really pretty when she smiles.";
    line[14] = "";

//Setting Options
    int options = 2;
    const char *option[options];
    option[0] = "Smile back to her";
    option[1] = ".......";

    createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice){
        case 0:
            _eventInfo.nextEvent = 101;
            _eventInfo.end = 0;
            break;
        case 1:
            _eventInfo.nextEvent = 101;
            _eventInfo.end = 0;
            break;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }

return _eventInfo;
}

gameInfo onePathTwo(gameInfo _eventInfo){
    int lines = 9;
    const char *line[lines];
    int choice = 0;

    line[0] = "The girl slowly gets up from her seat and speaks in a quiet voice.";
    line[1] = "";
    line[2] = "Girl: Umm... My.. name is.. Chi-chi Santiago. It'snicetomeetyou!";
    line[3] = "";
    line[4] = "With that, she falls back into her seat.";
    line[5] = "She dips her head to hide behind her hair.";
    line[6] = "";
    line[7] = "'Wow she's really shy...'";
    line[8] = "";

//Setting Options
    int options = 2;
    const char *option[options];
    option[0] = "Ignore her.";
    option[1] = ".......";

    createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice){
        case 0:
            _eventInfo.nextEvent = 101;
            _eventInfo.end = 0;
            break;
        case 1:
            _eventInfo.nextEvent = 101;
            _eventInfo.end = 0;
            break;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }
return _eventInfo;
}

gameInfo onePathThree(gameInfo _eventInfo){
    int lines = 9;
    const char *line[lines];
    int choice = 0;

    line[0] = "She looks even more scared and jumps in her seat all started.";
    line[1] = "";
    line[2] = "Girl: Ah! Um, I'm sorry! M-my name is Chi-chi.. Chi-chi Santiago!";
    line[3] = "It's nice to meet you all!";
    line[4] = "";
    line[5] = "She sits and hides behind her hair. She looks slightly red.";
    line[6] = "";
    line[7] = "'I have a feeling I should have said something nicer...'";
    line[8] = "";

//Setting Options
    int options = 2;
    const char *option[options];
    option[0] = "'Sorry, you did good.'";
    option[1] = ".......";

    createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice){
        case 0:
            _eventInfo.nextEvent = 101;
            _eventInfo.end = 0;
            break;
        case 1:
            _eventInfo.nextEvent = 101;
            _eventInfo.end = 0;
            break;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }
  return _eventInfo;
}

gameInfo dayOneCont(gameInfo _eventInfo){
    int lines = 32;
    const char *line[lines];
    int choice = 0;

    line[0] = "Mr. K: Okay, uh, thank you, Chichi.";
    line[1] = "Onto the next person.";
    line[2] = "";
    line[3] = "He looks at you as expectantly as his lazy eyes could. You begin to stand.";
    line[4] = "";
    line[5] = "Knock! Knock!";
    line[6] = "";
    line[7] = "The door opens and reveals a handsome dark haired boy.";
    line[8] = "He looks at Mr. K with a scowl.";
    line[10] = "";
    line[11] = "Boy: Yo, Mr. K,  got a minute? It's about the CMSC Club.";
    line[12] = "";
    line[13] = "Mr. K: Good of you to barge in, Jeff. We're kind of in the middle of something.";
    line[14] = "Btw, everyone, this trespasser is Jeff Papadopolis, the CMSC Club president.";
    line[15] = "";
    line[16] = "Jeff: Yeah, my name's Jeff and this bum is the CMSC Club Adviser.";
    line[17] = "";
    line[18] = "Mr. K sighs defeatedly and mumbles to himself.";
    line[19] = "Mr. K: So rude so early in the morning...";
    line[20] = "";
    line[21] = "Jeff looks around and notices you're the only one standing.";
    line[22] = "Jeff chuckles.";
    line[23] = "";
    line[24] = "Jeff: What's this dumbface doing?";
    line[25] = "";
    line[26] = "Mr. K: We were in the middle of introductions when you barged in...";
    line[27] = "";
    line[28] = "Jeff: Then by all means, go ahead, dumbface.";
    line[29] = "";
    line[30] = "Wow, he's rude. What do you want to do?";
    line[31] = "";

    //Setting Options
    int options = 2;
    const char *option[options];
    option[0] = "Introduce yourself nicely.";
    option[1] = "Be rude back";

    choice = createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice) {
        case 0:
            _eventInfo.nextEvent = 204;
            interestPoints[1] += 25;
            _eventInfo.end = 0;
            break;
        case 1:
            _eventInfo.nextEvent = 205;
            interestPoints[0] += 25;
            _eventInfo.end = 0;
            break;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }
    return _eventInfo;
}

gameInfo onePathFour(gameInfo _eventInfo){
    int lines = 7;
    const char *line[lines];
    int choice = 0;

    line[0] = "You introduce yourself - your name and age - normally.";
    line[1] = "";
    line[2] = "Jeff looks slightly disappointed you didn't rise to his taunts.";
    line[3] = "";
    line[4] = "Mr. K looks relieved.";
    line[5] = "";
    line[6] = "You sit back down, satisfied.";

//Setting Options
    int options = 1;
    const char *option[options];
    option[0] = "........";

    createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice) {
        case 0:
            _eventInfo.nextEvent = 102;
            _eventInfo.end = 0;
            break;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }
  return _eventInfo;
}

gameInfo onePathFive(gameInfo _eventInfo){
    int lines = 16;
    const char *line[lines];
    int choice = 0;

    line[0] = "You introduce yourself - including your name, likes, and dislikes.";
    line[1] = "You: I like pineapples on pizza and dislike people who barge in uninvited.";
    line[2] = "";
    line[3] = "The whole class stirs in their seats while Jeff just bursts out laughing.";
    line[4] = "";
    line[5] = "Chi-chi besides you squeaks. Was that a laugh?";
    line[6] = "";
    line[7] = "Mr. K sighs in defeat yet again.";
    line[8] = "He looks like he would rather be at home right now.";
    line[9] = "";
    line[10] = "Jeff: I like your spunk, dumbface.";
    line[11] = "";
    line[12] = "For some reason, the grin on his face is more menacing than endearing.";
    line[13] = "";
    line[14] = "You sit back down with a smirk.";
    line[15] = "";

//Setting Options
    int options = 1;
    const char *option[options];
    option[0] = "........";

    createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice) {
        case 0:
            _eventInfo.nextEvent = 102;
            _eventInfo.end = 0;
            break;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }
  return _eventInfo;
}

gameInfo dayOneContTwo(gameInfo _eventInfo){
    int lines = 31;
    const char *line[lines];
    int choice = 0;

    line[0] = "Jeff turns to the rest of the class.";
    line[1] = "";
    line[2] = "Jeff: Come join the CMSC club. It's open to all CMSC majors.";
    line[3] = "We're having a meeting later this afternoon. Yall better come if you want to";
    line[4] = "get good at this course because trust me yall need the help.";
    line[5] = "";
    line[6] = "Mr. K clears his throat. He's starting to look annoyed.";
    line[7] = "";
    line[8] = "Mr. K: Ooookay, thank you very much for the commercial break, Jeff.";
    line[9] = "Now shoo, I'm teaching. See me later.";
    line[10] = "";
    line[11] = "Jeff: Whatever, I'm out. Bye.";
    line[12] = "";
    line[13] = "Jeff finally leaves and Mr. K heaves a sigh of relief.";
    line[14] = "You think you've lost count of how many times he's sighed today.";
    line[15] = "";
    line[16] = "Mr. K: Okay now that that public disturbance has left, let's continue.";
    line[17] = "Next person please.";
    line[18] = "";
    line[19] = "Class continues for the rest of the day.";
    line[20] = "You listen as everyone introduces themselves.";
    line[21] = "";
    line[22] = "At some point, you notice Mr. K has not so discreetly taken out a book";
    line[23] = "and has begun reading.";
    line[24] = "";
    line[25] = "The clock is as slow as ever but yes! The day's finally over!";
    line[26] = "";
    line[27] = "Mr. K stands to leave without so much as a word";
    line[28] = "The rest of the class follows";
    line[29] = "";
    line[30] = "Congratulations on completing your first day in college!";
    line[31] = "";
    line[32] = "!";
    line[33] = "It's the CMSC Club's first meeting later.";
    line[34] = "Do you want to go?";

//Setting Options
    int options = 1;
    const char *option[options];
    option[0] = "Go to CMSC Club meeting";

    createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice){
        case 0:
            _eventInfo.nextEvent = 500;
            _eventInfo.end = 0;
            break;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }
  return _eventInfo;
} 

gameInfo clubOne(gameInfo _eventInfo){
    int lines = 3;
    const char *line[lines];
    int choice = 0;

    line[0] = "On your way to look for the CMSC Club room,";
    line[1] = "A horde of upperclassmen suddenly descend on you.";
    line[2] = "'Join our club!'";

    // >>>>> BATTLE HERE PLS 
}

gameInfo clubOneCont(gameInfo _eventInfo){
    int lines = 14;
    const char *line[lines];
    int choice = 0;

    line[0] = "Phew! You finally got away from all those club recruiters.";
    line[1] = "";
    line[2] = "In your effort to look for the CMSC Club room,";
    line[3] = "you notice all the bondpaper signs haphazardly taped to the walls.";
    line[4] = "";
    line[5] = "'This way to the CMSC Club, losers >>>>'";
    line[6] = "Well isn't it awfully obvious who made these..";
    line[7] = "";
    line[8] = "The signs lead you to a room in Building C";
    line[9] = "and the door is cracked wide open for visitors.";
    line[10] = "";
    line[11] = "You peek inside, and the only person there is Jeff.";
    line[12] = "He's sitting in one of the desks, doing something on his laptop.";
    line[13] = "Go in?"

    //Setting Options
    int options = 3;
    const char *option[options];
    option[0] = "Sure.";
    option[1] = "Why not?";
    option[2] = "Really though, do I have a choice?";

    createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice){
        case 0:
            _eventInfo.nextEvent = 502;
            _eventInfo.end = 0;
            break;
        case 1:
            _eventInfo.nextEvent = 502;
            _eventInfo.end = 0;
            break;
        case 2:
            _eventInfo.nextEvent = 502;
            _eventInfo.end = 0;
            break;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }
  return _eventInfo;
} 

gameInfo clubOneContTwo(gameInfo _eventInfo){
    int lines = 5;
    const char *line[lines];
    int choice = 0;

    line[0] = "You: Knock, knock.";
    line[1] = "";
    line[2] = "Jeff looks up and his face immediately turns sour.";
    line[3] = "";
    line[4] = "Jeff: So you actually decide to show up.";

    //Setting Options
    int options = 2;
    const char *option[options];
    option[0] = "Why wouldn't I when you literally threatened our entire class..";
    option[1] = "I wanna learn. Thought this was the place I could do that.";

    createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice){
        case 0:
            _eventInfo.nextEvent = 503;
            interestPoints[0] += 25
            _eventInfo.end = 0;
            break;
        case 1:
            _eventInfo.nextEvent = 503;
            interestPoints += 50
            _eventInfo.end = 0;
            break;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }
  return _eventInfo;
}

gameInfo clubOneContThree(gameInfo _eventInfo){
    int lines = 6;
    const char *line[lines];
    int choice = 0;

    line[0] = "Jeff hums to himself and smirks."
    line[1] = "Jeff: Seems you're not as dumb as you look.";
    line[2] = "He turns his attention back to his laptop.";
    line[3] = "";
    line[4] = "You take this moment to look around you.";
    line[5] = "The only people in the room are you and him.";

    //Setting Options
    int options = 2;
    const char *option[options];
    option[0] = "There doesn't seem to be a lot of people..";
    option[1] = "Is this really the club? There aren't a lot of people.";

    createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice){
        case 0:
            _eventInfo.nextEvent = 504;
            _eventInfo.end = 0;
            break;
        case 1:
            _eventInfo.nextEvent = 504;
            _eventInfo.end = 0;
            break;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }
  return _eventInfo;
}

gameInfo clubOneContFour(gameInfo _eventInfo){
    int lines = 30;
    const char *line[lines];
    int choice = 0;

    line[0] = "Jeff's right eye twitches.";
    line[1] = "Jeff: Wow, thank you, Captain Obvious.";
    line[2] = "But yeah, even though we're a major club,";
    line[3] = "We've been having trouble bringing actual active members in.";
    line[4] = "";
    line[5] = "You: *under your breath* I wonder why that is";
    line[6] = "Jeff: What was that?";
    line[7] = "You: Nothing. Anyway, that sucks.";
    line[8] = "";
    line[9] = "You peek at his laptop screen and -";
    line[10] = "You: Wait, is that TECCEN?!";
    line[11] = "";
    line[12] = "Jeff: Yeah, now scram.";
    line[13] = "You ignore him.";
    line[14] = "";
    line[15] = "You: Let's play! I have another controller..";
    line[16] = "Jeff looks at you as if you grew another head.";
    line[17] = "Jeff: What part about scram did you not understand?";
    line[18] = "You: Hey, I'm just another TECCEN lover here...";
    line[19] = "";
    line[20] = "Jeff looks thoughtful for a moment.";
    line[21] = "Jeff: Okay, let's make a deal. If you beat me, I buy snacks";
    line[22] = "for the meeting this afternoon. Right out of my own pocket.";
    line[23] = "";
    line[24] = "You: Sweet! Let's go!";
    line[25] = "Jeff: Ah! But if I win, you'll go on a date with me tomorrow evening.";
    line[26] = "";
    line[27] = "WHAT?";
    line[28] = "You: What? What do you mean date-?";
    line[29] = "Jeff: Too late! Here we go~!";

    // >>>>> INSERT BATTLE HERE, PLS RIG THAT JEFF WINS
}

gameInfo clubOneContFive(gameInfo _eventInfo){
    int lines = 
    const char *line[lines];
    int choice = 0;

    line[0] = "Jeff: YES!";
    line[1] = "You: NOOOO!";
    line[2] = "";
    line[3] = "The defeat wouldn't be as embarrassing as it is if Jeff didn't";
    line[4] = "laugh so much. There's also the prospect of going on a date with him..";
    line[5] = "";
    line[6] = "Jeff: "

}

gameInfo dayTwo(gameInfo _eventInfo){
    int lines = 6;
    const char *line[lines];
    int choice = 0;

    line[0] = "It's the 2nd day of classes in PU.";
    line[1] = "";
    line[2] = "This time, you're early for school";
    line[3] = "and it won't be another hour until classes start.";
    line[4] = "";
    line[5] = "Chichi: HI!";
    
    //Setting Options
    int options = 1;
    const char *option[options];
    option[0] = "Hi!";
    option[1] = "AH! You scared me.";

    createGameScreen(line, lines, option, options, _eventInfo);

    switch (choice){
        case 0:
            _eventInfo.nextEvent = 206;
            _eventInfo.end = 0;
            break;
        case 1:
            _eventInfo.nextEvent = 207;
            _eventInfo.end = 0
            break;
        default:
            _eventInfo.errorCode = 2;
            _eventInfo.end = 1;
    }
  return _eventInfo;
} 

gameInfo twoPathOne(gameInfo _eventInfo){
    int lines =
    const char *line[lines];
    int choice = 0

    line[] = 
}