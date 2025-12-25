// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLYTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLYTICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ReplyTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplyTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Encrypt, encrypt_);
      DARABONBA_PTR_TO_JSON(FileNameList, fileNameList_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ReplyTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Encrypt, encrypt_);
      DARABONBA_PTR_FROM_JSON(FileNameList, fileNameList_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ReplyTicketRequest() = default ;
    ReplyTicketRequest(const ReplyTicketRequest &) = default ;
    ReplyTicketRequest(ReplyTicketRequest &&) = default ;
    ReplyTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplyTicketRequest() = default ;
    ReplyTicketRequest& operator=(const ReplyTicketRequest &) = default ;
    ReplyTicketRequest& operator=(ReplyTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->encrypt_ == nullptr && return this->fileNameList_ == nullptr && return this->ticketId_ == nullptr && return this->uid_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ReplyTicketRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // encrypt Field Functions 
    bool hasEncrypt() const { return this->encrypt_ != nullptr;};
    void deleteEncrypt() { this->encrypt_ = nullptr;};
    inline bool encrypt() const { DARABONBA_PTR_GET_DEFAULT(encrypt_, false) };
    inline ReplyTicketRequest& setEncrypt(bool encrypt) { DARABONBA_PTR_SET_VALUE(encrypt_, encrypt) };


    // fileNameList Field Functions 
    bool hasFileNameList() const { return this->fileNameList_ != nullptr;};
    void deleteFileNameList() { this->fileNameList_ = nullptr;};
    inline const vector<string> & fileNameList() const { DARABONBA_PTR_GET_CONST(fileNameList_, vector<string>) };
    inline vector<string> fileNameList() { DARABONBA_PTR_GET(fileNameList_, vector<string>) };
    inline ReplyTicketRequest& setFileNameList(const vector<string> & fileNameList) { DARABONBA_PTR_SET_VALUE(fileNameList_, fileNameList) };
    inline ReplyTicketRequest& setFileNameList(vector<string> && fileNameList) { DARABONBA_PTR_SET_RVALUE(fileNameList_, fileNameList) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline ReplyTicketRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ReplyTicketRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


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
    std::shared_ptr<vector<string>> fileNameList_ = nullptr;
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
