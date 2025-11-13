// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVISITORCHATMESSAGESRESPONSEBODYDATAMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTVISITORCHATMESSAGESRESPONSEBODYDATAMESSAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListVisitorChatMessagesResponseBodyDataMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVisitorChatMessagesResponseBodyDataMessages& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(SenderAvatarUrl, senderAvatarUrl_);
      DARABONBA_PTR_TO_JSON(SenderId, senderId_);
      DARABONBA_PTR_TO_JSON(SenderName, senderName_);
      DARABONBA_PTR_TO_JSON(SenderType, senderType_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListVisitorChatMessagesResponseBodyDataMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(SenderAvatarUrl, senderAvatarUrl_);
      DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
      DARABONBA_PTR_FROM_JSON(SenderName, senderName_);
      DARABONBA_PTR_FROM_JSON(SenderType, senderType_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    ListVisitorChatMessagesResponseBodyDataMessages() = default ;
    ListVisitorChatMessagesResponseBodyDataMessages(const ListVisitorChatMessagesResponseBodyDataMessages &) = default ;
    ListVisitorChatMessagesResponseBodyDataMessages(ListVisitorChatMessagesResponseBodyDataMessages &&) = default ;
    ListVisitorChatMessagesResponseBodyDataMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVisitorChatMessagesResponseBodyDataMessages() = default ;
    ListVisitorChatMessagesResponseBodyDataMessages& operator=(const ListVisitorChatMessagesResponseBodyDataMessages &) = default ;
    ListVisitorChatMessagesResponseBodyDataMessages& operator=(ListVisitorChatMessagesResponseBodyDataMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->jobId_ == nullptr && return this->senderAvatarUrl_ == nullptr && return this->senderId_ == nullptr && return this->senderName_ == nullptr && return this->senderType_ == nullptr
        && return this->timestamp_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListVisitorChatMessagesResponseBodyDataMessages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListVisitorChatMessagesResponseBodyDataMessages& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // senderAvatarUrl Field Functions 
    bool hasSenderAvatarUrl() const { return this->senderAvatarUrl_ != nullptr;};
    void deleteSenderAvatarUrl() { this->senderAvatarUrl_ = nullptr;};
    inline string senderAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(senderAvatarUrl_, "") };
    inline ListVisitorChatMessagesResponseBodyDataMessages& setSenderAvatarUrl(string senderAvatarUrl) { DARABONBA_PTR_SET_VALUE(senderAvatarUrl_, senderAvatarUrl) };


    // senderId Field Functions 
    bool hasSenderId() const { return this->senderId_ != nullptr;};
    void deleteSenderId() { this->senderId_ = nullptr;};
    inline string senderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
    inline ListVisitorChatMessagesResponseBodyDataMessages& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


    // senderName Field Functions 
    bool hasSenderName() const { return this->senderName_ != nullptr;};
    void deleteSenderName() { this->senderName_ = nullptr;};
    inline string senderName() const { DARABONBA_PTR_GET_DEFAULT(senderName_, "") };
    inline ListVisitorChatMessagesResponseBodyDataMessages& setSenderName(string senderName) { DARABONBA_PTR_SET_VALUE(senderName_, senderName) };


    // senderType Field Functions 
    bool hasSenderType() const { return this->senderType_ != nullptr;};
    void deleteSenderType() { this->senderType_ = nullptr;};
    inline string senderType() const { DARABONBA_PTR_GET_DEFAULT(senderType_, "") };
    inline ListVisitorChatMessagesResponseBodyDataMessages& setSenderType(string senderType) { DARABONBA_PTR_SET_VALUE(senderType_, senderType) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ListVisitorChatMessagesResponseBodyDataMessages& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> senderAvatarUrl_ = nullptr;
    std::shared_ptr<string> senderId_ = nullptr;
    std::shared_ptr<string> senderName_ = nullptr;
    std::shared_ptr<string> senderType_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
