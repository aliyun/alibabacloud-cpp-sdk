// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMARKETINGFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMARKETINGFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class AddMarketingFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMarketingFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityDesc, activityDesc_);
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_ANY_TO_JSON(BizExtend, bizExtend_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExecutionType, executionType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParamFlag, paramFlag_);
      DARABONBA_ANY_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RelatedFlowCode, relatedFlowCode_);
      DARABONBA_PTR_TO_JSON(RelatedFlowName, relatedFlowName_);
      DARABONBA_PTR_TO_JSON(RelatedGroupId, relatedGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, AddMarketingFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityDesc, activityDesc_);
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_ANY_FROM_JSON(BizExtend, bizExtend_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExecutionType, executionType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParamFlag, paramFlag_);
      DARABONBA_ANY_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RelatedFlowCode, relatedFlowCode_);
      DARABONBA_PTR_FROM_JSON(RelatedFlowName, relatedFlowName_);
      DARABONBA_PTR_FROM_JSON(RelatedGroupId, relatedGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    AddMarketingFlowRequest() = default ;
    AddMarketingFlowRequest(const AddMarketingFlowRequest &) = default ;
    AddMarketingFlowRequest(AddMarketingFlowRequest &&) = default ;
    AddMarketingFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMarketingFlowRequest() = default ;
    AddMarketingFlowRequest& operator=(const AddMarketingFlowRequest &) = default ;
    AddMarketingFlowRequest& operator=(AddMarketingFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityDesc_ == nullptr
        && this->activityName_ == nullptr && this->bizCode_ == nullptr && this->bizExtend_ == nullptr && this->cronExpression_ == nullptr && this->endDate_ == nullptr
        && this->executionType_ == nullptr && this->ownerId_ == nullptr && this->paramFlag_ == nullptr && this->params_ == nullptr && this->relatedFlowCode_ == nullptr
        && this->relatedFlowName_ == nullptr && this->relatedGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startDate_ == nullptr; };
    // activityDesc Field Functions 
    bool hasActivityDesc() const { return this->activityDesc_ != nullptr;};
    void deleteActivityDesc() { this->activityDesc_ = nullptr;};
    inline string getActivityDesc() const { DARABONBA_PTR_GET_DEFAULT(activityDesc_, "") };
    inline AddMarketingFlowRequest& setActivityDesc(string activityDesc) { DARABONBA_PTR_SET_VALUE(activityDesc_, activityDesc) };


    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline AddMarketingFlowRequest& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline AddMarketingFlowRequest& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // bizExtend Field Functions 
    bool hasBizExtend() const { return this->bizExtend_ != nullptr;};
    void deleteBizExtend() { this->bizExtend_ = nullptr;};
    inline     const Darabonba::Json & getBizExtend() const { DARABONBA_GET(bizExtend_) };
    Darabonba::Json & getBizExtend() { DARABONBA_GET(bizExtend_) };
    inline AddMarketingFlowRequest& setBizExtend(const Darabonba::Json & bizExtend) { DARABONBA_SET_VALUE(bizExtend_, bizExtend) };
    inline AddMarketingFlowRequest& setBizExtend(Darabonba::Json && bizExtend) { DARABONBA_SET_RVALUE(bizExtend_, bizExtend) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline AddMarketingFlowRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline AddMarketingFlowRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // executionType Field Functions 
    bool hasExecutionType() const { return this->executionType_ != nullptr;};
    void deleteExecutionType() { this->executionType_ = nullptr;};
    inline string getExecutionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
    inline AddMarketingFlowRequest& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddMarketingFlowRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paramFlag Field Functions 
    bool hasParamFlag() const { return this->paramFlag_ != nullptr;};
    void deleteParamFlag() { this->paramFlag_ = nullptr;};
    inline string getParamFlag() const { DARABONBA_PTR_GET_DEFAULT(paramFlag_, "") };
    inline AddMarketingFlowRequest& setParamFlag(string paramFlag) { DARABONBA_PTR_SET_VALUE(paramFlag_, paramFlag) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
    Darabonba::Json & getParams() { DARABONBA_GET(params_) };
    inline AddMarketingFlowRequest& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline AddMarketingFlowRequest& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


    // relatedFlowCode Field Functions 
    bool hasRelatedFlowCode() const { return this->relatedFlowCode_ != nullptr;};
    void deleteRelatedFlowCode() { this->relatedFlowCode_ = nullptr;};
    inline string getRelatedFlowCode() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowCode_, "") };
    inline AddMarketingFlowRequest& setRelatedFlowCode(string relatedFlowCode) { DARABONBA_PTR_SET_VALUE(relatedFlowCode_, relatedFlowCode) };


    // relatedFlowName Field Functions 
    bool hasRelatedFlowName() const { return this->relatedFlowName_ != nullptr;};
    void deleteRelatedFlowName() { this->relatedFlowName_ = nullptr;};
    inline string getRelatedFlowName() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowName_, "") };
    inline AddMarketingFlowRequest& setRelatedFlowName(string relatedFlowName) { DARABONBA_PTR_SET_VALUE(relatedFlowName_, relatedFlowName) };


    // relatedGroupId Field Functions 
    bool hasRelatedGroupId() const { return this->relatedGroupId_ != nullptr;};
    void deleteRelatedGroupId() { this->relatedGroupId_ = nullptr;};
    inline int64_t getRelatedGroupId() const { DARABONBA_PTR_GET_DEFAULT(relatedGroupId_, 0L) };
    inline AddMarketingFlowRequest& setRelatedGroupId(int64_t relatedGroupId) { DARABONBA_PTR_SET_VALUE(relatedGroupId_, relatedGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddMarketingFlowRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddMarketingFlowRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline AddMarketingFlowRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    shared_ptr<string> activityDesc_ {};
    // This parameter is required.
    shared_ptr<string> activityName_ {};
    shared_ptr<string> bizCode_ {};
    Darabonba::Json bizExtend_ {};
    shared_ptr<string> cronExpression_ {};
    shared_ptr<string> endDate_ {};
    // This parameter is required.
    shared_ptr<string> executionType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> paramFlag_ {};
    Darabonba::Json params_ {};
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
