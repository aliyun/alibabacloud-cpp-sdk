// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMARKETINGFLOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMARKETINGFLOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class UpdateMarketingFLowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMarketingFLowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityCode, activityCode_);
      DARABONBA_PTR_TO_JSON(ActivityDesc, activityDesc_);
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExecutionType, executionType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParamFlag, paramFlag_);
      DARABONBA_PTR_TO_JSON(Params, paramsShrink_);
      DARABONBA_PTR_TO_JSON(RelatedFlowCode, relatedFlowCode_);
      DARABONBA_PTR_TO_JSON(RelatedFlowName, relatedFlowName_);
      DARABONBA_PTR_TO_JSON(RelatedGroupId, relatedGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMarketingFLowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityCode, activityCode_);
      DARABONBA_PTR_FROM_JSON(ActivityDesc, activityDesc_);
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExecutionType, executionType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParamFlag, paramFlag_);
      DARABONBA_PTR_FROM_JSON(Params, paramsShrink_);
      DARABONBA_PTR_FROM_JSON(RelatedFlowCode, relatedFlowCode_);
      DARABONBA_PTR_FROM_JSON(RelatedFlowName, relatedFlowName_);
      DARABONBA_PTR_FROM_JSON(RelatedGroupId, relatedGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    UpdateMarketingFLowShrinkRequest() = default ;
    UpdateMarketingFLowShrinkRequest(const UpdateMarketingFLowShrinkRequest &) = default ;
    UpdateMarketingFLowShrinkRequest(UpdateMarketingFLowShrinkRequest &&) = default ;
    UpdateMarketingFLowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMarketingFLowShrinkRequest() = default ;
    UpdateMarketingFLowShrinkRequest& operator=(const UpdateMarketingFLowShrinkRequest &) = default ;
    UpdateMarketingFLowShrinkRequest& operator=(UpdateMarketingFLowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityCode_ == nullptr
        && this->activityDesc_ == nullptr && this->activityId_ == nullptr && this->activityName_ == nullptr && this->cronExpression_ == nullptr && this->endDate_ == nullptr
        && this->executionType_ == nullptr && this->ownerId_ == nullptr && this->paramFlag_ == nullptr && this->paramsShrink_ == nullptr && this->relatedFlowCode_ == nullptr
        && this->relatedFlowName_ == nullptr && this->relatedGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startDate_ == nullptr; };
    // activityCode Field Functions 
    bool hasActivityCode() const { return this->activityCode_ != nullptr;};
    void deleteActivityCode() { this->activityCode_ = nullptr;};
    inline string getActivityCode() const { DARABONBA_PTR_GET_DEFAULT(activityCode_, "") };
    inline UpdateMarketingFLowShrinkRequest& setActivityCode(string activityCode) { DARABONBA_PTR_SET_VALUE(activityCode_, activityCode) };


    // activityDesc Field Functions 
    bool hasActivityDesc() const { return this->activityDesc_ != nullptr;};
    void deleteActivityDesc() { this->activityDesc_ = nullptr;};
    inline string getActivityDesc() const { DARABONBA_PTR_GET_DEFAULT(activityDesc_, "") };
    inline UpdateMarketingFLowShrinkRequest& setActivityDesc(string activityDesc) { DARABONBA_PTR_SET_VALUE(activityDesc_, activityDesc) };


    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline UpdateMarketingFLowShrinkRequest& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline UpdateMarketingFLowShrinkRequest& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline UpdateMarketingFLowShrinkRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline UpdateMarketingFLowShrinkRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // executionType Field Functions 
    bool hasExecutionType() const { return this->executionType_ != nullptr;};
    void deleteExecutionType() { this->executionType_ = nullptr;};
    inline string getExecutionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
    inline UpdateMarketingFLowShrinkRequest& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateMarketingFLowShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paramFlag Field Functions 
    bool hasParamFlag() const { return this->paramFlag_ != nullptr;};
    void deleteParamFlag() { this->paramFlag_ = nullptr;};
    inline string getParamFlag() const { DARABONBA_PTR_GET_DEFAULT(paramFlag_, "") };
    inline UpdateMarketingFLowShrinkRequest& setParamFlag(string paramFlag) { DARABONBA_PTR_SET_VALUE(paramFlag_, paramFlag) };


    // paramsShrink Field Functions 
    bool hasParamsShrink() const { return this->paramsShrink_ != nullptr;};
    void deleteParamsShrink() { this->paramsShrink_ = nullptr;};
    inline string getParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(paramsShrink_, "") };
    inline UpdateMarketingFLowShrinkRequest& setParamsShrink(string paramsShrink) { DARABONBA_PTR_SET_VALUE(paramsShrink_, paramsShrink) };


    // relatedFlowCode Field Functions 
    bool hasRelatedFlowCode() const { return this->relatedFlowCode_ != nullptr;};
    void deleteRelatedFlowCode() { this->relatedFlowCode_ = nullptr;};
    inline string getRelatedFlowCode() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowCode_, "") };
    inline UpdateMarketingFLowShrinkRequest& setRelatedFlowCode(string relatedFlowCode) { DARABONBA_PTR_SET_VALUE(relatedFlowCode_, relatedFlowCode) };


    // relatedFlowName Field Functions 
    bool hasRelatedFlowName() const { return this->relatedFlowName_ != nullptr;};
    void deleteRelatedFlowName() { this->relatedFlowName_ = nullptr;};
    inline string getRelatedFlowName() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowName_, "") };
    inline UpdateMarketingFLowShrinkRequest& setRelatedFlowName(string relatedFlowName) { DARABONBA_PTR_SET_VALUE(relatedFlowName_, relatedFlowName) };


    // relatedGroupId Field Functions 
    bool hasRelatedGroupId() const { return this->relatedGroupId_ != nullptr;};
    void deleteRelatedGroupId() { this->relatedGroupId_ = nullptr;};
    inline int64_t getRelatedGroupId() const { DARABONBA_PTR_GET_DEFAULT(relatedGroupId_, 0L) };
    inline UpdateMarketingFLowShrinkRequest& setRelatedGroupId(int64_t relatedGroupId) { DARABONBA_PTR_SET_VALUE(relatedGroupId_, relatedGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateMarketingFLowShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateMarketingFLowShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline UpdateMarketingFLowShrinkRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    shared_ptr<string> activityCode_ {};
    shared_ptr<string> activityDesc_ {};
    shared_ptr<string> activityId_ {};
    shared_ptr<string> activityName_ {};
    shared_ptr<string> cronExpression_ {};
    shared_ptr<string> endDate_ {};
    // This parameter is required.
    shared_ptr<string> executionType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> paramFlag_ {};
    shared_ptr<string> paramsShrink_ {};
    shared_ptr<string> relatedFlowCode_ {};
    shared_ptr<string> relatedFlowName_ {};
    shared_ptr<int64_t> relatedGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
