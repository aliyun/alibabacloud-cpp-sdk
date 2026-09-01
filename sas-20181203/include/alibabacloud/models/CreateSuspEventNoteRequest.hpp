// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUSPEVENTNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUSPEVENTNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateSuspEventNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSuspEventNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSuspEventNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    CreateSuspEventNoteRequest() = default ;
    CreateSuspEventNoteRequest(const CreateSuspEventNoteRequest &) = default ;
    CreateSuspEventNoteRequest(CreateSuspEventNoteRequest &&) = default ;
    CreateSuspEventNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSuspEventNoteRequest() = default ;
    CreateSuspEventNoteRequest& operator=(const CreateSuspEventNoteRequest &) = default ;
    CreateSuspEventNoteRequest& operator=(CreateSuspEventNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && this->note_ == nullptr && this->resourceDirectoryAccountId_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline CreateSuspEventNoteRequest& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline CreateSuspEventNoteRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline CreateSuspEventNoteRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


  protected:
    // The ID of the security alert event to which you want to add a note. Call [DescribeSuspEvents](https://help.aliyun.com/document_detail/251497.html) to obtain the ID of the alert event.
    // 
    // This parameter is required.
    shared_ptr<int64_t> eventId_ {};
    // The note to add.
    // 
    // This parameter is required.
    shared_ptr<string> note_ {};
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
