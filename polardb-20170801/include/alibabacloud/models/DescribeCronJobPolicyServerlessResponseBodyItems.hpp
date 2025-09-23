// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECRONJOBPOLICYSERVERLESSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECRONJOBPOLICYSERVERLESSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCronJobPolicyServerlessResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCronJobPolicyServerlessResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
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
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCronJobPolicyServerlessResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCronJobPolicyServerlessResponseBodyItems() = default ;
    DescribeCronJobPolicyServerlessResponseBodyItems(const DescribeCronJobPolicyServerlessResponseBodyItems &) = default ;
    DescribeCronJobPolicyServerlessResponseBodyItems(DescribeCronJobPolicyServerlessResponseBodyItems &&) = default ;
    DescribeCronJobPolicyServerlessResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCronJobPolicyServerlessResponseBodyItems() = default ;
    DescribeCronJobPolicyServerlessResponseBodyItems& operator=(const DescribeCronJobPolicyServerlessResponseBodyItems &) = default ;
    DescribeCronJobPolicyServerlessResponseBodyItems& operator=(DescribeCronJobPolicyServerlessResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->allowShutDown_ != nullptr && this->cronExpression_ != nullptr && this->DBClusterId_ != nullptr && this->endTime_ != nullptr && this->jobId_ != nullptr
        && this->orderId_ != nullptr && this->regionId_ != nullptr && this->scaleApRoNumMax_ != nullptr && this->scaleApRoNumMin_ != nullptr && this->scaleMax_ != nullptr
        && this->scaleMin_ != nullptr && this->scaleRoNumMax_ != nullptr && this->scaleRoNumMin_ != nullptr && this->secondsUntilAutoPause_ != nullptr && this->serverlessRuleCpuEnlargeThreshold_ != nullptr
        && this->serverlessRuleCpuShrinkThreshold_ != nullptr && this->serverlessRuleMode_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // allowShutDown Field Functions 
    bool hasAllowShutDown() const { return this->allowShutDown_ != nullptr;};
    void deleteAllowShutDown() { this->allowShutDown_ = nullptr;};
    inline string allowShutDown() const { DARABONBA_PTR_GET_DEFAULT(allowShutDown_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setAllowShutDown(string allowShutDown) { DARABONBA_PTR_SET_VALUE(allowShutDown_, allowShutDown) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scaleApRoNumMax Field Functions 
    bool hasScaleApRoNumMax() const { return this->scaleApRoNumMax_ != nullptr;};
    void deleteScaleApRoNumMax() { this->scaleApRoNumMax_ = nullptr;};
    inline string scaleApRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleApRoNumMax_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setScaleApRoNumMax(string scaleApRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleApRoNumMax_, scaleApRoNumMax) };


    // scaleApRoNumMin Field Functions 
    bool hasScaleApRoNumMin() const { return this->scaleApRoNumMin_ != nullptr;};
    void deleteScaleApRoNumMin() { this->scaleApRoNumMin_ = nullptr;};
    inline string scaleApRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleApRoNumMin_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setScaleApRoNumMin(string scaleApRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleApRoNumMin_, scaleApRoNumMin) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline string scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline string scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // scaleRoNumMax Field Functions 
    bool hasScaleRoNumMax() const { return this->scaleRoNumMax_ != nullptr;};
    void deleteScaleRoNumMax() { this->scaleRoNumMax_ = nullptr;};
    inline string scaleRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMax_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setScaleRoNumMax(string scaleRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleRoNumMax_, scaleRoNumMax) };


    // scaleRoNumMin Field Functions 
    bool hasScaleRoNumMin() const { return this->scaleRoNumMin_ != nullptr;};
    void deleteScaleRoNumMin() { this->scaleRoNumMin_ = nullptr;};
    inline string scaleRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMin_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setScaleRoNumMin(string scaleRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleRoNumMin_, scaleRoNumMin) };


    // secondsUntilAutoPause Field Functions 
    bool hasSecondsUntilAutoPause() const { return this->secondsUntilAutoPause_ != nullptr;};
    void deleteSecondsUntilAutoPause() { this->secondsUntilAutoPause_ = nullptr;};
    inline string secondsUntilAutoPause() const { DARABONBA_PTR_GET_DEFAULT(secondsUntilAutoPause_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setSecondsUntilAutoPause(string secondsUntilAutoPause) { DARABONBA_PTR_SET_VALUE(secondsUntilAutoPause_, secondsUntilAutoPause) };


    // serverlessRuleCpuEnlargeThreshold Field Functions 
    bool hasServerlessRuleCpuEnlargeThreshold() const { return this->serverlessRuleCpuEnlargeThreshold_ != nullptr;};
    void deleteServerlessRuleCpuEnlargeThreshold() { this->serverlessRuleCpuEnlargeThreshold_ = nullptr;};
    inline string serverlessRuleCpuEnlargeThreshold() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleCpuEnlargeThreshold_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setServerlessRuleCpuEnlargeThreshold(string serverlessRuleCpuEnlargeThreshold) { DARABONBA_PTR_SET_VALUE(serverlessRuleCpuEnlargeThreshold_, serverlessRuleCpuEnlargeThreshold) };


    // serverlessRuleCpuShrinkThreshold Field Functions 
    bool hasServerlessRuleCpuShrinkThreshold() const { return this->serverlessRuleCpuShrinkThreshold_ != nullptr;};
    void deleteServerlessRuleCpuShrinkThreshold() { this->serverlessRuleCpuShrinkThreshold_ = nullptr;};
    inline string serverlessRuleCpuShrinkThreshold() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleCpuShrinkThreshold_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setServerlessRuleCpuShrinkThreshold(string serverlessRuleCpuShrinkThreshold) { DARABONBA_PTR_SET_VALUE(serverlessRuleCpuShrinkThreshold_, serverlessRuleCpuShrinkThreshold) };


    // serverlessRuleMode Field Functions 
    bool hasServerlessRuleMode() const { return this->serverlessRuleMode_ != nullptr;};
    void deleteServerlessRuleMode() { this->serverlessRuleMode_ = nullptr;};
    inline string serverlessRuleMode() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleMode_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setServerlessRuleMode(string serverlessRuleMode) { DARABONBA_PTR_SET_VALUE(serverlessRuleMode_, serverlessRuleMode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCronJobPolicyServerlessResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> allowShutDown_ = nullptr;
    std::shared_ptr<string> cronExpression_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
