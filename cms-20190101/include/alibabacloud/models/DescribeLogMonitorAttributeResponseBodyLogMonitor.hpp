// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGMONITORATTRIBUTERESPONSEBODYLOGMONITOR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGMONITORATTRIBUTERESPONSEBODYLOGMONITOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates.hpp>
#include <alibabacloud/models/DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeLogMonitorAttributeResponseBodyLogMonitor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogMonitorAttributeResponseBodyLogMonitor& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregates, aggregates_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Groupbys, groupbys_);
      DARABONBA_PTR_TO_JSON(LogId, logId_);
      DARABONBA_PTR_TO_JSON(MetricExpress, metricExpress_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(SlsLogstore, slsLogstore_);
      DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_TO_JSON(Tumblingwindows, tumblingwindows_);
      DARABONBA_PTR_TO_JSON(ValueFilter, valueFilter_);
      DARABONBA_PTR_TO_JSON(ValueFilterRelation, valueFilterRelation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogMonitorAttributeResponseBodyLogMonitor& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregates, aggregates_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Groupbys, groupbys_);
      DARABONBA_PTR_FROM_JSON(LogId, logId_);
      DARABONBA_PTR_FROM_JSON(MetricExpress, metricExpress_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(SlsLogstore, slsLogstore_);
      DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_FROM_JSON(Tumblingwindows, tumblingwindows_);
      DARABONBA_PTR_FROM_JSON(ValueFilter, valueFilter_);
      DARABONBA_PTR_FROM_JSON(ValueFilterRelation, valueFilterRelation_);
    };
    DescribeLogMonitorAttributeResponseBodyLogMonitor() = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitor(const DescribeLogMonitorAttributeResponseBodyLogMonitor &) = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitor(DescribeLogMonitorAttributeResponseBodyLogMonitor &&) = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogMonitorAttributeResponseBodyLogMonitor() = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitor& operator=(const DescribeLogMonitorAttributeResponseBodyLogMonitor &) = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitor& operator=(DescribeLogMonitorAttributeResponseBodyLogMonitor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregates_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->groupId_ == nullptr && return this->groupbys_ == nullptr && return this->logId_ == nullptr && return this->metricExpress_ == nullptr
        && return this->metricName_ == nullptr && return this->slsLogstore_ == nullptr && return this->slsProject_ == nullptr && return this->slsRegionId_ == nullptr && return this->tumblingwindows_ == nullptr
        && return this->valueFilter_ == nullptr && return this->valueFilterRelation_ == nullptr; };
    // aggregates Field Functions 
    bool hasAggregates() const { return this->aggregates_ != nullptr;};
    void deleteAggregates() { this->aggregates_ = nullptr;};
    inline const vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates> & aggregates() const { DARABONBA_PTR_GET_CONST(aggregates_, vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates>) };
    inline vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates> aggregates() { DARABONBA_PTR_GET(aggregates_, vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates>) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setAggregates(const vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates> & aggregates) { DARABONBA_PTR_SET_VALUE(aggregates_, aggregates) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setAggregates(vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates> && aggregates) { DARABONBA_PTR_SET_RVALUE(aggregates_, aggregates) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupbys Field Functions 
    bool hasGroupbys() const { return this->groupbys_ != nullptr;};
    void deleteGroupbys() { this->groupbys_ = nullptr;};
    inline const vector<string> & groupbys() const { DARABONBA_PTR_GET_CONST(groupbys_, vector<string>) };
    inline vector<string> groupbys() { DARABONBA_PTR_GET(groupbys_, vector<string>) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setGroupbys(const vector<string> & groupbys) { DARABONBA_PTR_SET_VALUE(groupbys_, groupbys) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setGroupbys(vector<string> && groupbys) { DARABONBA_PTR_SET_RVALUE(groupbys_, groupbys) };


    // logId Field Functions 
    bool hasLogId() const { return this->logId_ != nullptr;};
    void deleteLogId() { this->logId_ = nullptr;};
    inline int64_t logId() const { DARABONBA_PTR_GET_DEFAULT(logId_, 0L) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setLogId(int64_t logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


    // metricExpress Field Functions 
    bool hasMetricExpress() const { return this->metricExpress_ != nullptr;};
    void deleteMetricExpress() { this->metricExpress_ = nullptr;};
    inline string metricExpress() const { DARABONBA_PTR_GET_DEFAULT(metricExpress_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setMetricExpress(string metricExpress) { DARABONBA_PTR_SET_VALUE(metricExpress_, metricExpress) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // slsLogstore Field Functions 
    bool hasSlsLogstore() const { return this->slsLogstore_ != nullptr;};
    void deleteSlsLogstore() { this->slsLogstore_ = nullptr;};
    inline string slsLogstore() const { DARABONBA_PTR_GET_DEFAULT(slsLogstore_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setSlsLogstore(string slsLogstore) { DARABONBA_PTR_SET_VALUE(slsLogstore_, slsLogstore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // slsRegionId Field Functions 
    bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
    void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
    inline string slsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


    // tumblingwindows Field Functions 
    bool hasTumblingwindows() const { return this->tumblingwindows_ != nullptr;};
    void deleteTumblingwindows() { this->tumblingwindows_ = nullptr;};
    inline const vector<string> & tumblingwindows() const { DARABONBA_PTR_GET_CONST(tumblingwindows_, vector<string>) };
    inline vector<string> tumblingwindows() { DARABONBA_PTR_GET(tumblingwindows_, vector<string>) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setTumblingwindows(const vector<string> & tumblingwindows) { DARABONBA_PTR_SET_VALUE(tumblingwindows_, tumblingwindows) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setTumblingwindows(vector<string> && tumblingwindows) { DARABONBA_PTR_SET_RVALUE(tumblingwindows_, tumblingwindows) };


    // valueFilter Field Functions 
    bool hasValueFilter() const { return this->valueFilter_ != nullptr;};
    void deleteValueFilter() { this->valueFilter_ = nullptr;};
    inline const vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter> & valueFilter() const { DARABONBA_PTR_GET_CONST(valueFilter_, vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter>) };
    inline vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter> valueFilter() { DARABONBA_PTR_GET(valueFilter_, vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter>) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setValueFilter(const vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter> & valueFilter) { DARABONBA_PTR_SET_VALUE(valueFilter_, valueFilter) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setValueFilter(vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter> && valueFilter) { DARABONBA_PTR_SET_RVALUE(valueFilter_, valueFilter) };


    // valueFilterRelation Field Functions 
    bool hasValueFilterRelation() const { return this->valueFilterRelation_ != nullptr;};
    void deleteValueFilterRelation() { this->valueFilterRelation_ = nullptr;};
    inline string valueFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(valueFilterRelation_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor& setValueFilterRelation(string valueFilterRelation) { DARABONBA_PTR_SET_VALUE(valueFilterRelation_, valueFilterRelation) };


  protected:
    // The aggregation logic.
    std::shared_ptr<vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorAggregates>> aggregates_ = nullptr;
    // The time when the metric was created.
    // 
    // This value is a UNIX timestamp that represents the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<vector<string>> groupbys_ = nullptr;
    // The ID of the log.
    std::shared_ptr<int64_t> logId_ = nullptr;
    // The extended field. The extended field allows you to perform basic operations on the aggregation results.
    // 
    // For example, if you have calculated TotalNumber and 5XXNumber by aggregating the data. TotalNumber indicates the total number of HTTP requests, and 5XXNumber indicates the number of HTTP requests whose status code is greater than 499. You can calculate the server error rate by adding the following formula to the extended field: 5XXNumber/TotalNumber\\*100.
    std::shared_ptr<string> metricExpress_ = nullptr;
    // The metric name. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> metricName_ = nullptr;
    // The name of the Simple Log Service Logstore.
    std::shared_ptr<string> slsLogstore_ = nullptr;
    // The name of the SLS project.
    std::shared_ptr<string> slsProject_ = nullptr;
    // The ID of the region where the Simple Log Service (SLS) Logstore resides.
    std::shared_ptr<string> slsRegionId_ = nullptr;
    std::shared_ptr<vector<string>> tumblingwindows_ = nullptr;
    // The condition that is used to filter logs. The ValueFilter and ValueFilterRelation parameters are used in pair. The filter condition is equivalent to the WHERE clause in SQL statements.
    // 
    // If no filter condition is specified, all logs are processed. For example, logs contain the Level and Error fields. If you need to calculate the number of times that logs of the Error level appear every minute, you can set the filter condition to Level=Error and count the number of logs that meet this condition.
    std::shared_ptr<vector<Models::DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter>> valueFilter_ = nullptr;
    // The logical operator that is used between log filter conditions. The ValueFilter and ValueFilterRelation parameters must be used in pair. Valid values:
    // 
    // *   and
    // *   or
    std::shared_ptr<string> valueFilterRelation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
