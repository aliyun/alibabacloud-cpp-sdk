// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEEDBACKDIALOGUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FEEDBACKDIALOGUEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class FeedbackDialogueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FeedbackDialogueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CustomerResponse, customerResponse_);
      DARABONBA_PTR_TO_JSON(GoodText, goodText_);
      DARABONBA_PTR_TO_JSON(ModifiedResponse, modifiedResponse_);
      DARABONBA_PTR_TO_JSON(Rating, rating_);
      DARABONBA_PTR_TO_JSON(RatingTags, ratingTags_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, FeedbackDialogueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CustomerResponse, customerResponse_);
      DARABONBA_PTR_FROM_JSON(GoodText, goodText_);
      DARABONBA_PTR_FROM_JSON(ModifiedResponse, modifiedResponse_);
      DARABONBA_PTR_FROM_JSON(Rating, rating_);
      DARABONBA_PTR_FROM_JSON(RatingTags, ratingTags_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    FeedbackDialogueRequest() = default ;
    FeedbackDialogueRequest(const FeedbackDialogueRequest &) = default ;
    FeedbackDialogueRequest(FeedbackDialogueRequest &&) = default ;
    FeedbackDialogueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FeedbackDialogueRequest() = default ;
    FeedbackDialogueRequest& operator=(const FeedbackDialogueRequest &) = default ;
    FeedbackDialogueRequest& operator=(FeedbackDialogueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->customerResponse_ == nullptr && this->goodText_ == nullptr && this->modifiedResponse_ == nullptr && this->rating_ == nullptr && this->ratingTags_ == nullptr
        && this->sessionId_ == nullptr && this->taskId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline FeedbackDialogueRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // customerResponse Field Functions 
    bool hasCustomerResponse() const { return this->customerResponse_ != nullptr;};
    void deleteCustomerResponse() { this->customerResponse_ = nullptr;};
    inline string getCustomerResponse() const { DARABONBA_PTR_GET_DEFAULT(customerResponse_, "") };
    inline FeedbackDialogueRequest& setCustomerResponse(string customerResponse) { DARABONBA_PTR_SET_VALUE(customerResponse_, customerResponse) };


    // goodText Field Functions 
    bool hasGoodText() const { return this->goodText_ != nullptr;};
    void deleteGoodText() { this->goodText_ = nullptr;};
    inline string getGoodText() const { DARABONBA_PTR_GET_DEFAULT(goodText_, "") };
    inline FeedbackDialogueRequest& setGoodText(string goodText) { DARABONBA_PTR_SET_VALUE(goodText_, goodText) };


    // modifiedResponse Field Functions 
    bool hasModifiedResponse() const { return this->modifiedResponse_ != nullptr;};
    void deleteModifiedResponse() { this->modifiedResponse_ = nullptr;};
    inline string getModifiedResponse() const { DARABONBA_PTR_GET_DEFAULT(modifiedResponse_, "") };
    inline FeedbackDialogueRequest& setModifiedResponse(string modifiedResponse) { DARABONBA_PTR_SET_VALUE(modifiedResponse_, modifiedResponse) };


    // rating Field Functions 
    bool hasRating() const { return this->rating_ != nullptr;};
    void deleteRating() { this->rating_ = nullptr;};
    inline string getRating() const { DARABONBA_PTR_GET_DEFAULT(rating_, "") };
    inline FeedbackDialogueRequest& setRating(string rating) { DARABONBA_PTR_SET_VALUE(rating_, rating) };


    // ratingTags Field Functions 
    bool hasRatingTags() const { return this->ratingTags_ != nullptr;};
    void deleteRatingTags() { this->ratingTags_ = nullptr;};
    inline const vector<string> & getRatingTags() const { DARABONBA_PTR_GET_CONST(ratingTags_, vector<string>) };
    inline vector<string> getRatingTags() { DARABONBA_PTR_GET(ratingTags_, vector<string>) };
    inline FeedbackDialogueRequest& setRatingTags(const vector<string> & ratingTags) { DARABONBA_PTR_SET_VALUE(ratingTags_, ratingTags) };
    inline FeedbackDialogueRequest& setRatingTags(vector<string> && ratingTags) { DARABONBA_PTR_SET_RVALUE(ratingTags_, ratingTags) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FeedbackDialogueRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline FeedbackDialogueRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<string> customerResponse_ {};
    shared_ptr<string> goodText_ {};
    shared_ptr<string> modifiedResponse_ {};
    shared_ptr<string> rating_ {};
    shared_ptr<vector<string>> ratingTags_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
