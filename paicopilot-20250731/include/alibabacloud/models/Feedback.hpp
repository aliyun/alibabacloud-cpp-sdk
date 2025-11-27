// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEEDBACK_HPP_
#define ALIBABACLOUD_MODELS_FEEDBACK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class Feedback : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Feedback& obj) { 
      DARABONBA_PTR_TO_JSON(ChatId, chatId_);
      DARABONBA_PTR_TO_JSON(FeedbackAction, feedbackAction_);
      DARABONBA_PTR_TO_JSON(FeedbackId, feedbackId_);
      DARABONBA_PTR_TO_JSON(FeedbackMessage, feedbackMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, Feedback& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatId, chatId_);
      DARABONBA_PTR_FROM_JSON(FeedbackAction, feedbackAction_);
      DARABONBA_PTR_FROM_JSON(FeedbackId, feedbackId_);
      DARABONBA_PTR_FROM_JSON(FeedbackMessage, feedbackMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    Feedback() = default ;
    Feedback(const Feedback &) = default ;
    Feedback(Feedback &&) = default ;
    Feedback(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Feedback() = default ;
    Feedback& operator=(const Feedback &) = default ;
    Feedback& operator=(Feedback &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatId_ == nullptr
        && return this->feedbackAction_ == nullptr && return this->feedbackId_ == nullptr && return this->feedbackMessage_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModified_ == nullptr
        && return this->ownerId_ == nullptr && return this->sessionId_ == nullptr && return this->userId_ == nullptr; };
    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string chatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline Feedback& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // feedbackAction Field Functions 
    bool hasFeedbackAction() const { return this->feedbackAction_ != nullptr;};
    void deleteFeedbackAction() { this->feedbackAction_ = nullptr;};
    inline string feedbackAction() const { DARABONBA_PTR_GET_DEFAULT(feedbackAction_, "") };
    inline Feedback& setFeedbackAction(string feedbackAction) { DARABONBA_PTR_SET_VALUE(feedbackAction_, feedbackAction) };


    // feedbackId Field Functions 
    bool hasFeedbackId() const { return this->feedbackId_ != nullptr;};
    void deleteFeedbackId() { this->feedbackId_ = nullptr;};
    inline string feedbackId() const { DARABONBA_PTR_GET_DEFAULT(feedbackId_, "") };
    inline Feedback& setFeedbackId(string feedbackId) { DARABONBA_PTR_SET_VALUE(feedbackId_, feedbackId) };


    // feedbackMessage Field Functions 
    bool hasFeedbackMessage() const { return this->feedbackMessage_ != nullptr;};
    void deleteFeedbackMessage() { this->feedbackMessage_ = nullptr;};
    inline string feedbackMessage() const { DARABONBA_PTR_GET_DEFAULT(feedbackMessage_, "") };
    inline Feedback& setFeedbackMessage(string feedbackMessage) { DARABONBA_PTR_SET_VALUE(feedbackMessage_, feedbackMessage) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Feedback& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline Feedback& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline Feedback& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline Feedback& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline Feedback& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> chatId_ = nullptr;
    std::shared_ptr<string> feedbackAction_ = nullptr;
    std::shared_ptr<string> feedbackId_ = nullptr;
    std::shared_ptr<string> feedbackMessage_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
