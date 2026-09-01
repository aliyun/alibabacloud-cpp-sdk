// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTFEEDBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTFEEDBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentFeedbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentFeedbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(FeedbackContent, feedbackContent_);
      DARABONBA_PTR_TO_JSON(FeedbackType, feedbackType_);
      DARABONBA_PTR_TO_JSON(LikeValue, likeValue_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentFeedbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(FeedbackContent, feedbackContent_);
      DARABONBA_PTR_FROM_JSON(FeedbackType, feedbackType_);
      DARABONBA_PTR_FROM_JSON(LikeValue, likeValue_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataAgentFeedbackRequest() = default ;
    CreateDataAgentFeedbackRequest(const CreateDataAgentFeedbackRequest &) = default ;
    CreateDataAgentFeedbackRequest(CreateDataAgentFeedbackRequest &&) = default ;
    CreateDataAgentFeedbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentFeedbackRequest() = default ;
    CreateDataAgentFeedbackRequest& operator=(const CreateDataAgentFeedbackRequest &) = default ;
    CreateDataAgentFeedbackRequest& operator=(CreateDataAgentFeedbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->feedbackContent_ == nullptr && this->feedbackType_ == nullptr && this->likeValue_ == nullptr && this->sessionId_ == nullptr && this->targetId_ == nullptr
        && this->targetType_ == nullptr && this->workspaceId_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline CreateDataAgentFeedbackRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // feedbackContent Field Functions 
    bool hasFeedbackContent() const { return this->feedbackContent_ != nullptr;};
    void deleteFeedbackContent() { this->feedbackContent_ = nullptr;};
    inline string getFeedbackContent() const { DARABONBA_PTR_GET_DEFAULT(feedbackContent_, "") };
    inline CreateDataAgentFeedbackRequest& setFeedbackContent(string feedbackContent) { DARABONBA_PTR_SET_VALUE(feedbackContent_, feedbackContent) };


    // feedbackType Field Functions 
    bool hasFeedbackType() const { return this->feedbackType_ != nullptr;};
    void deleteFeedbackType() { this->feedbackType_ = nullptr;};
    inline string getFeedbackType() const { DARABONBA_PTR_GET_DEFAULT(feedbackType_, "") };
    inline CreateDataAgentFeedbackRequest& setFeedbackType(string feedbackType) { DARABONBA_PTR_SET_VALUE(feedbackType_, feedbackType) };


    // likeValue Field Functions 
    bool hasLikeValue() const { return this->likeValue_ != nullptr;};
    void deleteLikeValue() { this->likeValue_ = nullptr;};
    inline int32_t getLikeValue() const { DARABONBA_PTR_GET_DEFAULT(likeValue_, 0) };
    inline CreateDataAgentFeedbackRequest& setLikeValue(int32_t likeValue) { DARABONBA_PTR_SET_VALUE(likeValue_, likeValue) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateDataAgentFeedbackRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline CreateDataAgentFeedbackRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateDataAgentFeedbackRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDataAgentFeedbackRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<string> feedbackContent_ {};
    shared_ptr<string> feedbackType_ {};
    shared_ptr<int32_t> likeValue_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> targetId_ {};
    shared_ptr<string> targetType_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
