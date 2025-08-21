// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEEDBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FEEDBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class FeedbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FeedbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(FeedbackContent, feedbackContent_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, FeedbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(FeedbackContent, feedbackContent_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    FeedbackRequest() = default ;
    FeedbackRequest(const FeedbackRequest &) = default ;
    FeedbackRequest(FeedbackRequest &&) = default ;
    FeedbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FeedbackRequest() = default ;
    FeedbackRequest& operator=(const FeedbackRequest &) = default ;
    FeedbackRequest& operator=(FeedbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->feedback_ != nullptr && this->feedbackContent_ != nullptr && this->instanceId_ != nullptr && this->messageId_ != nullptr && this->sessionId_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline FeedbackRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline string feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
    inline FeedbackRequest& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // feedbackContent Field Functions 
    bool hasFeedbackContent() const { return this->feedbackContent_ != nullptr;};
    void deleteFeedbackContent() { this->feedbackContent_ = nullptr;};
    inline string feedbackContent() const { DARABONBA_PTR_GET_DEFAULT(feedbackContent_, "") };
    inline FeedbackRequest& setFeedbackContent(string feedbackContent) { DARABONBA_PTR_SET_VALUE(feedbackContent_, feedbackContent) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline FeedbackRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline FeedbackRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FeedbackRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> feedback_ = nullptr;
    std::shared_ptr<string> feedbackContent_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> messageId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
