// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMALICIOUSNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMALICIOUSNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateMaliciousNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMaliciousNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Note, note_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMaliciousNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
    };
    CreateMaliciousNoteRequest() = default ;
    CreateMaliciousNoteRequest(const CreateMaliciousNoteRequest &) = default ;
    CreateMaliciousNoteRequest(CreateMaliciousNoteRequest &&) = default ;
    CreateMaliciousNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMaliciousNoteRequest() = default ;
    CreateMaliciousNoteRequest& operator=(const CreateMaliciousNoteRequest &) = default ;
    CreateMaliciousNoteRequest& operator=(CreateMaliciousNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && this->note_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline CreateMaliciousNoteRequest& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline CreateMaliciousNoteRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


  protected:
    // The ID of the alert event to which you want to add remarks.
    // 
    // >  You can call the [ListAgentlessMaliciousFiles](~~ListAgentlessMaliciousFiles~~) operation to obtain the ID of the alert event from the NoteId parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> eventId_ {};
    // The remarks that you want to add.
    // 
    // This parameter is required.
    shared_ptr<string> note_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
