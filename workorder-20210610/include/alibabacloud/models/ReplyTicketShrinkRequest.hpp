// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLYTICKETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLYTICKETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ReplyTicketShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplyTicketShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Encrypt, encrypt_);
      DARABONBA_PTR_TO_JSON(FileNameList, fileNameListShrink_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ReplyTicketShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Encrypt, encrypt_);
      DARABONBA_PTR_FROM_JSON(FileNameList, fileNameListShrink_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ReplyTicketShrinkRequest() = default ;
    ReplyTicketShrinkRequest(const ReplyTicketShrinkRequest &) = default ;
    ReplyTicketShrinkRequest(ReplyTicketShrinkRequest &&) = default ;
    ReplyTicketShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplyTicketShrinkRequest() = default ;
    ReplyTicketShrinkRequest& operator=(const ReplyTicketShrinkRequest &) = default ;
    ReplyTicketShrinkRequest& operator=(ReplyTicketShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->encrypt_ == nullptr && return this->fileNameListShrink_ == nullptr && return this->ticketId_ == nullptr && return this->uid_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ReplyTicketShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // encrypt Field Functions 
    bool hasEncrypt() const { return this->encrypt_ != nullptr;};
    void deleteEncrypt() { this->encrypt_ = nullptr;};
    inline bool encrypt() const { DARABONBA_PTR_GET_DEFAULT(encrypt_, false) };
    inline ReplyTicketShrinkRequest& setEncrypt(bool encrypt) { DARABONBA_PTR_SET_VALUE(encrypt_, encrypt) };


    // fileNameListShrink Field Functions 
    bool hasFileNameListShrink() const { return this->fileNameListShrink_ != nullptr;};
    void deleteFileNameListShrink() { this->fileNameListShrink_ = nullptr;};
    inline string fileNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(fileNameListShrink_, "") };
    inline ReplyTicketShrinkRequest& setFileNameListShrink(string fileNameListShrink) { DARABONBA_PTR_SET_VALUE(fileNameListShrink_, fileNameListShrink) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline ReplyTicketShrinkRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ReplyTicketShrinkRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Content of the ticket reply
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // Encryption status
    // 
    // This parameter is required.
    std::shared_ptr<bool> encrypt_ = nullptr;
    // The list of attachment names, GetAttachmentUploadUrl the ObjectKey field returned by the interface.
    std::shared_ptr<string> fileNameListShrink_ = nullptr;
    // The ID of the ticket.
    // 
    // This parameter is required.
    std::shared_ptr<string> ticketId_ = nullptr;
    // Alibaba Cloud UID
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
