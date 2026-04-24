// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeMonitorDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeyName, apiKeyName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyName, apiKeyName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeMonitorDataRequest() = default ;
    DescribeMonitorDataRequest(const DescribeMonitorDataRequest &) = default ;
    DescribeMonitorDataRequest(DescribeMonitorDataRequest &&) = default ;
    DescribeMonitorDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorDataRequest() = default ;
    DescribeMonitorDataRequest& operator=(const DescribeMonitorDataRequest &) = default ;
    DescribeMonitorDataRequest& operator=(DescribeMonitorDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyName_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->interval_ == nullptr && this->metric_ == nullptr && this->startTime_ == nullptr; };
    // apiKeyName Field Functions 
    bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
    void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
    inline const vector<string> & getApiKeyName() const { DARABONBA_PTR_GET_CONST(apiKeyName_, vector<string>) };
    inline vector<string> getApiKeyName() { DARABONBA_PTR_GET(apiKeyName_, vector<string>) };
    inline DescribeMonitorDataRequest& setApiKeyName(const vector<string> & apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };
    inline DescribeMonitorDataRequest& setApiKeyName(vector<string> && apiKeyName) { DARABONBA_PTR_SET_RVALUE(apiKeyName_, apiKeyName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeMonitorDataRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMonitorDataRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeMonitorDataRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeMonitorDataRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeMonitorDataRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<vector<string>> apiKeyName_ {};
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> interval_ {};
    // This parameter is required.
    shared_ptr<string> metric_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
