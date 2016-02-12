/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#ifndef Q_ZYRE_EVENT_H
#define Q_ZYRE_EVENT_H

#include "qzyre.h"

class QT_ZYRE_EXPORT QZyreEvent : public QObject
{
    Q_OBJECT
public:

    //  Copy-construct to return the proper wrapped c types
    QZyreEvent (zyre_event_t *self, QObject *qObjParent = 0);

    //  Constructor: receive an event from the zyre node, wraps zyre_recv.
    //  The event may be a control message (ENTER, EXIT, JOIN, LEAVE) or  
    //  data (WHISPER, SHOUT).                                            
    explicit QZyreEvent (QZyre *node, QObject *qObjParent = 0);

    //  Destructor; destroys an event instance
    ~QZyreEvent ();

    //  Returns event type, which is a zyre_event_type_t
    zyre_event_type_t type ();

    //  Return the sending peer's uuid as a string
    const QString peerUuid ();

    //  Return the sending peer's public name as a string
    const QString peerName ();

    //  Return the sending peer's ipaddress as a string
    const QString peerAddr ();

    //  Returns the event headers, or NULL if there are none
    QZhash * headers ();

    //  Returns value of a header from the message headers   
    //  obtained by ENTER. Return NULL if no value was found.
    const QString header (const QString &name);

    //  Returns the group name that a SHOUT event was sent to
    const QString group ();

    //  Returns the incoming message payload
    QZmsg * msg ();

    //  Print event to zsys log
    void print ();

    //  Self test of this class.
    static void test (bool verbose);

    zyre_event_t *self;
};
#endif //  Q_ZYRE_EVENT_H
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
