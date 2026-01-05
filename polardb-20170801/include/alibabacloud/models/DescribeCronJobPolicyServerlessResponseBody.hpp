// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECRONJOBPOLICYSERVERLESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECRONJOBPOLICYSERVERLESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCronJobPolicyServerlessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCronJobPolicyServerlessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCronJobPolicyServerlessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeCronJobPolicyServerlessResponseBody() = default ;
    DescribeCronJobPolicyServerlessResponseBody(const DescribeCronJobPolicyServerlessResponseBody &) = default ;
    DescribeCronJobPolicyServerlessResponseBody(DescribeCronJobPolicyServerlessResponseBody &&) = default ;
    DescribeCronJobPolicyServerlessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCronJobPolicyServerlessResponseBody() = default ;
    DescribeCronJobPolicyServerlessResponseBody& operator=(const DescribeCronJobPolicyServerlessResponseBody &) = default ;
    DescribeCronJobPolicyServerlessResponseBody& operator=(DescribeCronJobPolicyServerlessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->allowShutDown_ == nullptr && this->cronExpression_ == nullptr && this->DBClusterId_ == nullptr && this->endTime_ == nullptr && this->jobId_ == nullptr
        && this->orderId_ == nullptr && this->regionId_ == nullptr && this->scaleApRoNumMax_ == nullptr && this->scaleApRoNumMin_ == nullptr && this->scaleMax_ == nullptr
        && this->scaleMin_ == nullptr && this->scaleRoNumMax_ == nullptr && this->scaleRoNumMin_ == nullptr && this->secondsUntilAutoPause_ == nullptr && this->serverlessRuleCpuEnlargeThreshold_ == nullptr
        && this->serverlessRuleCpuShrinkThreshold_ == nullptr && this->serverlessRuleMode_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Items& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // allowShutDown Field Functions 
      bool hasAllowShutDown() const { return this->allowShutDown_ != nullptr;};
      void deleteAllowShutDown() { this->allowShutDown_ = nullptr;};
      inline string getAllowShutDown() const { DARABONBA_PTR_GET_DEFAULT(allowShutDown_, "") };
      inline Items& setAllowShutDown(string allowShutDown) { DARABONBA_PTR_SET_VALUE(allowShutDown_, allowShutDown) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline Items& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Items& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Items& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Items& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // scaleApRoNumMax Field Functions 
      bool hasScaleApRoNumMax() const { return this->scaleApRoNumMax_ != nullptr;};
      void deleteScaleApRoNumMax() { this->scaleApRoNumMax_ = nullptr;};
      inline string getScaleApRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleApRoNumMax_, "") };
      inline Items& setScaleApRoNumMax(string scaleApRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleApRoNumMax_, scaleApRoNumMax) };


      // scaleApRoNumMin Field Functions 
      bool hasScaleApRoNumMin() const { return this->scaleApRoNumMin_ != nullptr;};
      void deleteScaleApRoNumMin() { this->scaleApRoNumMin_ = nullptr;};
      inline string getScaleApRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleApRoNumMin_, "") };
      inline Items& setScaleApRoNumMin(string scaleApRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleApRoNumMin_, scaleApRoNumMin) };


      // scaleMax Field Functions 
      bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
      void deleteScaleMax() { this->scaleMax_ = nullptr;};
      inline string getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
      inline Items& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


      // scaleMin Field Functions 
      bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
      void deleteScaleMin() { this->scaleMin_ = nullptr;};
      inline string getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
      inline Items& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


      // scaleRoNumMax Field Functions 
      bool hasScaleRoNumMax() const { return this->scaleRoNumMax_ != nullptr;};
      void deleteScaleRoNumMax() { this->scaleRoNumMax_ = nullptr;};
      inline string getScaleRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMax_, "") };
      inline Items& setScaleRoNumMax(string scaleRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleRoNumMax_, scaleRoNumMax) };


      // scaleRoNumMin Field Functions 
      bool hasScaleRoNumMin() const { return this->scaleRoNumMin_ != nullptr;};
      void deleteScaleRoNumMin() { this->scaleRoNumMin_ = nullptr;};
      inline string getScaleRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMin_, "") };
      inline Items& setScaleRoNumMin(string scaleRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleRoNumMin_, scaleRoNumMin) };


      // secondsUntilAutoPause Field Functions 
      bool hasSecondsUntilAutoPause() const { return this->secondsUntilAutoPause_ != nullptr;};
      void deleteSecondsUntilAutoPause() { this->secondsUntilAutoPause_ = nullptr;};
      inline string getSecondsUntilAutoPause() const { DARABONBA_PTR_GET_DEFAULT(secondsUntilAutoPause_, "") };
      inline Items& setSecondsUntilAutoPause(string secondsUntilAutoPause) { DARABONBA_PTR_SET_VALUE(secondsUntilAutoPause_, secondsUntilAutoPause) };


      // serverlessRuleCpuEnlargeThreshold Field Functions 
      bool hasServerlessRuleCpuEnlargeThreshold() const { return this->serverlessRuleCpuEnlargeThreshold_ != nullptr;};
      void deleteServerlessRuleCpuEnlargeThreshold() { this->serverlessRuleCpuEnlargeThreshold_ = nullptr;};
      inline string getServerlessRuleCpuEnlargeThreshold() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleCpuEnlargeThreshold_, "") };
      inline Items& setServerlessRuleCpuEnlargeThreshold(string serverlessRuleCpuEnlargeThreshold) { DARABONBA_PTR_SET_VALUE(serverlessRuleCpuEnlargeThreshold_, serverlessRuleCpuEnlargeThreshold) };


      // serverlessRuleCpuShrinkThreshold Field Functions 
      bool hasServerlessRuleCpuShrinkThreshold() const { return this->serverlessRuleCpuShrinkThreshold_ != nullptr;};
      void deleteServerlessRuleCpuShrinkThreshold() { this->serverlessRuleCpuShrinkThreshold_ = nullptr;};
      inline string getServerlessRuleCpuShrinkThreshold() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleCpuShrinkThreshold_, "") };
      inline Items& setServerlessRuleCpuShrinkThreshold(string serverlessRuleCpuShrinkThreshold) { DARABONBA_PTR_SET_VALUE(serverlessRuleCpuShrinkThreshold_, serverlessRuleCpuShrinkThreshold) };


      // serverlessRuleMode Field Functions 
      bool hasServerlessRuleMode() const { return this->serverlessRuleMode_ != nullptr;};
      void deleteServerlessRuleMode() { this->serverlessRuleMode_ = nullptr;};
      inline string getServerlessRuleMode() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleMode_, "") };
      inline Items& setServerlessRuleMode(string serverlessRuleMode) { DARABONBA_PTR_SET_VALUE(serverlessRuleMode_, serverlessRuleMode) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> allowShutDown_ {};
      shared_ptr<string> cronExpression_ {};
      shared_ptr<string> DBClusterId_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<string> orderId_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> scaleApRoNumMax_ {};
      shared_ptr<string> scaleApRoNumMin_ {};
      shared_ptr<string> scaleMax_ {};
      shared_ptr<string> scaleMin_ {};
      shared_ptr<string> scaleRoNumMax_ {};
      shared_ptr<string> scaleRoNumMin_ {};
      shared_ptr<string> secondsUntilAutoPause_ {};
      shared_ptr<string> serverlessRuleCpuEnlargeThreshold_ {};
      shared_ptr<string> serverlessRuleCpuShrinkThreshold_ {};
      shared_ptr<string> serverlessRuleMode_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeCronJobPolicyServerlessResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeCronJobPolicyServerlessResponseBody::Items>) };
    inline vector<DescribeCronJobPolicyServerlessResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeCronJobPolicyServerlessResponseBody::Items>) };
    inline DescribeCronJobPolicyServerlessResponseBody& setItems(const vector<DescribeCronJobPolicyServerlessResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCronJobPolicyServerlessResponseBody& setItems(vector<DescribeCronJobPolicyServerlessResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCronJobPolicyServerlessResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCronJobPolicyServerlessResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCronJobPolicyServerlessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeCronJobPolicyServerlessResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<vector<DescribeCronJobPolicyServerlessResponseBody::Items>> items_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
