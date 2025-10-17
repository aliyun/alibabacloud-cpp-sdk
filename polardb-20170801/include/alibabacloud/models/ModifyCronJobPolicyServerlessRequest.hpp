// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCRONJOBPOLICYSERVERLESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCRONJOBPOLICYSERVERLESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyCronJobPolicyServerlessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCronJobPolicyServerlessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScaleApRoNumMax, scaleApRoNumMax_);
      DARABONBA_PTR_TO_JSON(ScaleApRoNumMin, scaleApRoNumMin_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(ScaleRoNumMax, scaleRoNumMax_);
      DARABONBA_PTR_TO_JSON(ScaleRoNumMin, scaleRoNumMin_);
      DARABONBA_PTR_TO_JSON(SecondsUntilAutoPause, secondsUntilAutoPause_);
      DARABONBA_PTR_TO_JSON(ServerlessRuleCpuEnlargeThreshold, serverlessRuleCpuEnlargeThreshold_);
      DARABONBA_PTR_TO_JSON(ServerlessRuleCpuShrinkThreshold, serverlessRuleCpuShrinkThreshold_);
      DARABONBA_PTR_TO_JSON(ServerlessRuleMode, serverlessRuleMode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCronJobPolicyServerlessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScaleApRoNumMax, scaleApRoNumMax_);
      DARABONBA_PTR_FROM_JSON(ScaleApRoNumMin, scaleApRoNumMin_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(ScaleRoNumMax, scaleRoNumMax_);
      DARABONBA_PTR_FROM_JSON(ScaleRoNumMin, scaleRoNumMin_);
      DARABONBA_PTR_FROM_JSON(SecondsUntilAutoPause, secondsUntilAutoPause_);
      DARABONBA_PTR_FROM_JSON(ServerlessRuleCpuEnlargeThreshold, serverlessRuleCpuEnlargeThreshold_);
      DARABONBA_PTR_FROM_JSON(ServerlessRuleCpuShrinkThreshold, serverlessRuleCpuShrinkThreshold_);
      DARABONBA_PTR_FROM_JSON(ServerlessRuleMode, serverlessRuleMode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ModifyCronJobPolicyServerlessRequest() = default ;
    ModifyCronJobPolicyServerlessRequest(const ModifyCronJobPolicyServerlessRequest &) = default ;
    ModifyCronJobPolicyServerlessRequest(ModifyCronJobPolicyServerlessRequest &&) = default ;
    ModifyCronJobPolicyServerlessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCronJobPolicyServerlessRequest() = default ;
    ModifyCronJobPolicyServerlessRequest& operator=(const ModifyCronJobPolicyServerlessRequest &) = default ;
    ModifyCronJobPolicyServerlessRequest& operator=(ModifyCronJobPolicyServerlessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowShutDown_ == nullptr
        && return this->cronExpression_ == nullptr && return this->DBClusterId_ == nullptr && return this->endTime_ == nullptr && return this->jobId_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->scaleApRoNumMax_ == nullptr
        && return this->scaleApRoNumMin_ == nullptr && return this->scaleMax_ == nullptr && return this->scaleMin_ == nullptr && return this->scaleRoNumMax_ == nullptr && return this->scaleRoNumMin_ == nullptr
        && return this->secondsUntilAutoPause_ == nullptr && return this->serverlessRuleCpuEnlargeThreshold_ == nullptr && return this->serverlessRuleCpuShrinkThreshold_ == nullptr && return this->serverlessRuleMode_ == nullptr && return this->startTime_ == nullptr; };
    // allowShutDown Field Functions 
    bool hasAllowShutDown() const { return this->allowShutDown_ != nullptr;};
    void deleteAllowShutDown() { this->allowShutDown_ = nullptr;};
    inline string allowShutDown() const { DARABONBA_PTR_GET_DEFAULT(allowShutDown_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setAllowShutDown(string allowShutDown) { DARABONBA_PTR_SET_VALUE(allowShutDown_, allowShutDown) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCronJobPolicyServerlessRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyCronJobPolicyServerlessRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scaleApRoNumMax Field Functions 
    bool hasScaleApRoNumMax() const { return this->scaleApRoNumMax_ != nullptr;};
    void deleteScaleApRoNumMax() { this->scaleApRoNumMax_ = nullptr;};
    inline string scaleApRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleApRoNumMax_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setScaleApRoNumMax(string scaleApRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleApRoNumMax_, scaleApRoNumMax) };


    // scaleApRoNumMin Field Functions 
    bool hasScaleApRoNumMin() const { return this->scaleApRoNumMin_ != nullptr;};
    void deleteScaleApRoNumMin() { this->scaleApRoNumMin_ = nullptr;};
    inline string scaleApRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleApRoNumMin_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setScaleApRoNumMin(string scaleApRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleApRoNumMin_, scaleApRoNumMin) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline string scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline string scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // scaleRoNumMax Field Functions 
    bool hasScaleRoNumMax() const { return this->scaleRoNumMax_ != nullptr;};
    void deleteScaleRoNumMax() { this->scaleRoNumMax_ = nullptr;};
    inline string scaleRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMax_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setScaleRoNumMax(string scaleRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleRoNumMax_, scaleRoNumMax) };


    // scaleRoNumMin Field Functions 
    bool hasScaleRoNumMin() const { return this->scaleRoNumMin_ != nullptr;};
    void deleteScaleRoNumMin() { this->scaleRoNumMin_ = nullptr;};
    inline string scaleRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMin_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setScaleRoNumMin(string scaleRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleRoNumMin_, scaleRoNumMin) };


    // secondsUntilAutoPause Field Functions 
    bool hasSecondsUntilAutoPause() const { return this->secondsUntilAutoPause_ != nullptr;};
    void deleteSecondsUntilAutoPause() { this->secondsUntilAutoPause_ = nullptr;};
    inline string secondsUntilAutoPause() const { DARABONBA_PTR_GET_DEFAULT(secondsUntilAutoPause_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setSecondsUntilAutoPause(string secondsUntilAutoPause) { DARABONBA_PTR_SET_VALUE(secondsUntilAutoPause_, secondsUntilAutoPause) };


    // serverlessRuleCpuEnlargeThreshold Field Functions 
    bool hasServerlessRuleCpuEnlargeThreshold() const { return this->serverlessRuleCpuEnlargeThreshold_ != nullptr;};
    void deleteServerlessRuleCpuEnlargeThreshold() { this->serverlessRuleCpuEnlargeThreshold_ = nullptr;};
    inline string serverlessRuleCpuEnlargeThreshold() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleCpuEnlargeThreshold_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setServerlessRuleCpuEnlargeThreshold(string serverlessRuleCpuEnlargeThreshold) { DARABONBA_PTR_SET_VALUE(serverlessRuleCpuEnlargeThreshold_, serverlessRuleCpuEnlargeThreshold) };


    // serverlessRuleCpuShrinkThreshold Field Functions 
    bool hasServerlessRuleCpuShrinkThreshold() const { return this->serverlessRuleCpuShrinkThreshold_ != nullptr;};
    void deleteServerlessRuleCpuShrinkThreshold() { this->serverlessRuleCpuShrinkThreshold_ = nullptr;};
    inline string serverlessRuleCpuShrinkThreshold() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleCpuShrinkThreshold_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setServerlessRuleCpuShrinkThreshold(string serverlessRuleCpuShrinkThreshold) { DARABONBA_PTR_SET_VALUE(serverlessRuleCpuShrinkThreshold_, serverlessRuleCpuShrinkThreshold) };


    // serverlessRuleMode Field Functions 
    bool hasServerlessRuleMode() const { return this->serverlessRuleMode_ != nullptr;};
    void deleteServerlessRuleMode() { this->serverlessRuleMode_ = nullptr;};
    inline string serverlessRuleMode() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleMode_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setServerlessRuleMode(string serverlessRuleMode) { DARABONBA_PTR_SET_VALUE(serverlessRuleMode_, serverlessRuleMode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ModifyCronJobPolicyServerlessRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> allowShutDown_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cronExpression_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> scaleApRoNumMax_ = nullptr;
    std::shared_ptr<string> scaleApRoNumMin_ = nullptr;
    std::shared_ptr<string> scaleMax_ = nullptr;
    std::shared_ptr<string> scaleMin_ = nullptr;
    std::shared_ptr<string> scaleRoNumMax_ = nullptr;
    std::shared_ptr<string> scaleRoNumMin_ = nullptr;
    std::shared_ptr<string> secondsUntilAutoPause_ = nullptr;
    std::shared_ptr<string> serverlessRuleCpuEnlargeThreshold_ = nullptr;
    std::shared_ptr<string> serverlessRuleCpuShrinkThreshold_ = nullptr;
    std::shared_ptr<string> serverlessRuleMode_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
