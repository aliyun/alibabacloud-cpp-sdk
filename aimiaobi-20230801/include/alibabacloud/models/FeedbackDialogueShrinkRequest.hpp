// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEEDBACKDIALOGUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FEEDBACKDIALOGUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class FeedbackDialogueShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FeedbackDialogueShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CustomerResponse, customerResponse_);
      DARABONBA_PTR_TO_JSON(GoodText, goodText_);
      DARABONBA_PTR_TO_JSON(ModifiedResponse, modifiedResponse_);
      DARABONBA_PTR_TO_JSON(Rating, rating_);
      DARABONBA_PTR_TO_JSON(RatingTags, ratingTagsShrink_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, FeedbackDialogueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CustomerResponse, customerResponse_);
      DARABONBA_PTR_FROM_JSON(GoodText, goodText_);
      DARABONBA_PTR_FROM_JSON(ModifiedResponse, modifiedResponse_);
      DARABONBA_PTR_FROM_JSON(Rating, rating_);
      DARABONBA_PTR_FROM_JSON(RatingTags, ratingTagsShrink_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    FeedbackDialogueShrinkRequest() = default ;
    FeedbackDialogueShrinkRequest(const FeedbackDialogueShrinkRequest &) = default ;
    FeedbackDialogueShrinkRequest(FeedbackDialogueShrinkRequest &&) = default ;
    FeedbackDialogueShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FeedbackDialogueShrinkRequest() = default ;
    FeedbackDialogueShrinkRequest& operator=(const FeedbackDialogueShrinkRequest &) = default ;
    FeedbackDialogueShrinkRequest& operator=(FeedbackDialogueShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->customerResponse_ == nullptr && return this->goodText_ == nullptr && return this->modifiedResponse_ == nullptr && return this->rating_ == nullptr && return this->ratingTagsShrink_ == nullptr
        && return this->sessionId_ == nullptr && return this->taskId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline FeedbackDialogueShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // customerResponse Field Functions 
    bool hasCustomerResponse() const { return this->customerResponse_ != nullptr;};
    void deleteCustomerResponse() { this->customerResponse_ = nullptr;};
    inline string customerResponse() const { DARABONBA_PTR_GET_DEFAULT(customerResponse_, "") };
    inline FeedbackDialogueShrinkRequest& setCustomerResponse(string customerResponse) { DARABONBA_PTR_SET_VALUE(customerResponse_, customerResponse) };


    // goodText Field Functions 
    bool hasGoodText() const { return this->goodText_ != nullptr;};
    void deleteGoodText() { this->goodText_ = nullptr;};
    inline string goodText() const { DARABONBA_PTR_GET_DEFAULT(goodText_, "") };
    inline FeedbackDialogueShrinkRequest& setGoodText(string goodText) { DARABONBA_PTR_SET_VALUE(goodText_, goodText) };


    // modifiedResponse Field Functions 
    bool hasModifiedResponse() const { return this->modifiedResponse_ != nullptr;};
    void deleteModifiedResponse() { this->modifiedResponse_ = nullptr;};
    inline string modifiedResponse() const { DARABONBA_PTR_GET_DEFAULT(modifiedResponse_, "") };
    inline FeedbackDialogueShrinkRequest& setModifiedResponse(string modifiedResponse) { DARABONBA_PTR_SET_VALUE(modifiedResponse_, modifiedResponse) };


    // rating Field Functions 
    bool hasRating() const { return this->rating_ != nullptr;};
    void deleteRating() { this->rating_ = nullptr;};
    inline string rating() const { DARABONBA_PTR_GET_DEFAULT(rating_, "") };
    inline FeedbackDialogueShrinkRequest& setRating(string rating) { DARABONBA_PTR_SET_VALUE(rating_, rating) };


    // ratingTagsShrink Field Functions 
    bool hasRatingTagsShrink() const { return this->ratingTagsShrink_ != nullptr;};
    void deleteRatingTagsShrink() { this->ratingTagsShrink_ = nullptr;};
    inline string ratingTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(ratingTagsShrink_, "") };
    inline FeedbackDialogueShrinkRequest& setRatingTagsShrink(string ratingTagsShrink) { DARABONBA_PTR_SET_VALUE(ratingTagsShrink_, ratingTagsShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FeedbackDialogueShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline FeedbackDialogueShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> customerResponse_ = nullptr;
    std::shared_ptr<string> goodText_ = nullptr;
    std::shared_ptr<string> modifiedResponse_ = nullptr;
    std::shared_ptr<string> rating_ = nullptr;
    std::shared_ptr<string> ratingTagsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
