// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACHMENTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACHMENTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20200801
{
namespace Models
{
  class GetAttachmentUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttachmentUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachName, attachName_);
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttachmentUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachName, attachName_);
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
    };
    GetAttachmentUrlRequest() = default ;
    GetAttachmentUrlRequest(const GetAttachmentUrlRequest &) = default ;
    GetAttachmentUrlRequest(GetAttachmentUrlRequest &&) = default ;
    GetAttachmentUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttachmentUrlRequest() = default ;
    GetAttachmentUrlRequest& operator=(const GetAttachmentUrlRequest &) = default ;
    GetAttachmentUrlRequest& operator=(GetAttachmentUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachName_ == nullptr
        && this->noteId_ == nullptr && this->ticketId_ == nullptr; };
    // attachName Field Functions 
    bool hasAttachName() const { return this->attachName_ != nullptr;};
    void deleteAttachName() { this->attachName_ = nullptr;};
    inline string getAttachName() const { DARABONBA_PTR_GET_DEFAULT(attachName_, "") };
    inline GetAttachmentUrlRequest& setAttachName(string attachName) { DARABONBA_PTR_SET_VALUE(attachName_, attachName) };


    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline string getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
    inline GetAttachmentUrlRequest& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline GetAttachmentUrlRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


  protected:
    // This parameter is required.
    shared_ptr<string> attachName_ {};
    // This parameter is required.
    shared_ptr<string> noteId_ {};
    // This parameter is required.
    shared_ptr<string> ticketId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20200801
#endif
