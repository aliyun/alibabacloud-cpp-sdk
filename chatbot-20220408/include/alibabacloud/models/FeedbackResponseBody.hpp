// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEEDBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FEEDBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class FeedbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FeedbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, FeedbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    FeedbackResponseBody() = default ;
    FeedbackResponseBody(const FeedbackResponseBody &) = default ;
    FeedbackResponseBody(FeedbackResponseBody &&) = default ;
    FeedbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FeedbackResponseBody() = default ;
    FeedbackResponseBody& operator=(const FeedbackResponseBody &) = default ;
    FeedbackResponseBody& operator=(FeedbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->feedback_ != nullptr
        && this->messageId_ != nullptr && this->requestId_ != nullptr; };
    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline string feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
    inline FeedbackResponseBody& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline FeedbackResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FeedbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> feedback_ = nullptr;
    std::shared_ptr<string> messageId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
