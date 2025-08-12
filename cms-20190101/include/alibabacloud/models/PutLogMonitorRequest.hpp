// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTLOGMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTLOGMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutLogMonitorRequestAggregates.hpp>
#include <alibabacloud/models/PutLogMonitorRequestGroupbys.hpp>
#include <alibabacloud/models/PutLogMonitorRequestValueFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutLogMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutLogMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregates, aggregates_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Groupbys, groupbys_);
      DARABONBA_PTR_TO_JSON(LogId, logId_);
      DARABONBA_PTR_TO_JSON(MetricExpress, metricExpress_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsLogstore, slsLogstore_);
      DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_TO_JSON(Tumblingwindows, tumblingwindows_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(ValueFilter, valueFilter_);
      DARABONBA_PTR_TO_JSON(ValueFilterRelation, valueFilterRelation_);
    };
    friend void from_json(const Darabonba::Json& j, PutLogMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregates, aggregates_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Groupbys, groupbys_);
      DARABONBA_PTR_FROM_JSON(LogId, logId_);
      DARABONBA_PTR_FROM_JSON(MetricExpress, metricExpress_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsLogstore, slsLogstore_);
      DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_FROM_JSON(Tumblingwindows, tumblingwindows_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(ValueFilter, valueFilter_);
      DARABONBA_PTR_FROM_JSON(ValueFilterRelation, valueFilterRelation_);
    };
    PutLogMonitorRequest() = default ;
    PutLogMonitorRequest(const PutLogMonitorRequest &) = default ;
    PutLogMonitorRequest(PutLogMonitorRequest &&) = default ;
    PutLogMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutLogMonitorRequest() = default ;
    PutLogMonitorRequest& operator=(const PutLogMonitorRequest &) = default ;
    PutLogMonitorRequest& operator=(PutLogMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregates_ != nullptr
        && this->groupId_ != nullptr && this->groupbys_ != nullptr && this->logId_ != nullptr && this->metricExpress_ != nullptr && this->metricName_ != nullptr
        && this->regionId_ != nullptr && this->slsLogstore_ != nullptr && this->slsProject_ != nullptr && this->slsRegionId_ != nullptr && this->tumblingwindows_ != nullptr
        && this->unit_ != nullptr && this->valueFilter_ != nullptr && this->valueFilterRelation_ != nullptr; };
    // aggregates Field Functions 
    bool hasAggregates() const { return this->aggregates_ != nullptr;};
    void deleteAggregates() { this->aggregates_ = nullptr;};
    inline const vector<PutLogMonitorRequestAggregates> & aggregates() const { DARABONBA_PTR_GET_CONST(aggregates_, vector<PutLogMonitorRequestAggregates>) };
    inline vector<PutLogMonitorRequestAggregates> aggregates() { DARABONBA_PTR_GET(aggregates_, vector<PutLogMonitorRequestAggregates>) };
    inline PutLogMonitorRequest& setAggregates(const vector<PutLogMonitorRequestAggregates> & aggregates) { DARABONBA_PTR_SET_VALUE(aggregates_, aggregates) };
    inline PutLogMonitorRequest& setAggregates(vector<PutLogMonitorRequestAggregates> && aggregates) { DARABONBA_PTR_SET_RVALUE(aggregates_, aggregates) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline PutLogMonitorRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupbys Field Functions 
    bool hasGroupbys() const { return this->groupbys_ != nullptr;};
    void deleteGroupbys() { this->groupbys_ = nullptr;};
    inline const vector<PutLogMonitorRequestGroupbys> & groupbys() const { DARABONBA_PTR_GET_CONST(groupbys_, vector<PutLogMonitorRequestGroupbys>) };
    inline vector<PutLogMonitorRequestGroupbys> groupbys() { DARABONBA_PTR_GET(groupbys_, vector<PutLogMonitorRequestGroupbys>) };
    inline PutLogMonitorRequest& setGroupbys(const vector<PutLogMonitorRequestGroupbys> & groupbys) { DARABONBA_PTR_SET_VALUE(groupbys_, groupbys) };
    inline PutLogMonitorRequest& setGroupbys(vector<PutLogMonitorRequestGroupbys> && groupbys) { DARABONBA_PTR_SET_RVALUE(groupbys_, groupbys) };


    // logId Field Functions 
    bool hasLogId() const { return this->logId_ != nullptr;};
    void deleteLogId() { this->logId_ = nullptr;};
    inline string logId() const { DARABONBA_PTR_GET_DEFAULT(logId_, "") };
    inline PutLogMonitorRequest& setLogId(string logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


    // metricExpress Field Functions 
    bool hasMetricExpress() const { return this->metricExpress_ != nullptr;};
    void deleteMetricExpress() { this->metricExpress_ = nullptr;};
    inline string metricExpress() const { DARABONBA_PTR_GET_DEFAULT(metricExpress_, "") };
    inline PutLogMonitorRequest& setMetricExpress(string metricExpress) { DARABONBA_PTR_SET_VALUE(metricExpress_, metricExpress) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutLogMonitorRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutLogMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsLogstore Field Functions 
    bool hasSlsLogstore() const { return this->slsLogstore_ != nullptr;};
    void deleteSlsLogstore() { this->slsLogstore_ = nullptr;};
    inline string slsLogstore() const { DARABONBA_PTR_GET_DEFAULT(slsLogstore_, "") };
    inline PutLogMonitorRequest& setSlsLogstore(string slsLogstore) { DARABONBA_PTR_SET_VALUE(slsLogstore_, slsLogstore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline PutLogMonitorRequest& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // slsRegionId Field Functions 
    bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
    void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
    inline string slsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
    inline PutLogMonitorRequest& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


    // tumblingwindows Field Functions 
    bool hasTumblingwindows() const { return this->tumblingwindows_ != nullptr;};
    void deleteTumblingwindows() { this->tumblingwindows_ = nullptr;};
    inline string tumblingwindows() const { DARABONBA_PTR_GET_DEFAULT(tumblingwindows_, "") };
    inline PutLogMonitorRequest& setTumblingwindows(string tumblingwindows) { DARABONBA_PTR_SET_VALUE(tumblingwindows_, tumblingwindows) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline PutLogMonitorRequest& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // valueFilter Field Functions 
    bool hasValueFilter() const { return this->valueFilter_ != nullptr;};
    void deleteValueFilter() { this->valueFilter_ = nullptr;};
    inline const vector<PutLogMonitorRequestValueFilter> & valueFilter() const { DARABONBA_PTR_GET_CONST(valueFilter_, vector<PutLogMonitorRequestValueFilter>) };
    inline vector<PutLogMonitorRequestValueFilter> valueFilter() { DARABONBA_PTR_GET(valueFilter_, vector<PutLogMonitorRequestValueFilter>) };
    inline PutLogMonitorRequest& setValueFilter(const vector<PutLogMonitorRequestValueFilter> & valueFilter) { DARABONBA_PTR_SET_VALUE(valueFilter_, valueFilter) };
    inline PutLogMonitorRequest& setValueFilter(vector<PutLogMonitorRequestValueFilter> && valueFilter) { DARABONBA_PTR_SET_RVALUE(valueFilter_, valueFilter) };


    // valueFilterRelation Field Functions 
    bool hasValueFilterRelation() const { return this->valueFilterRelation_ != nullptr;};
    void deleteValueFilterRelation() { this->valueFilterRelation_ = nullptr;};
    inline string valueFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(valueFilterRelation_, "") };
    inline PutLogMonitorRequest& setValueFilterRelation(string valueFilterRelation) { DARABONBA_PTR_SET_VALUE(valueFilterRelation_, valueFilterRelation) };


  protected:
    // The aggregation logic.
    // 
    // This parameter is required.
    std::shared_ptr<vector<PutLogMonitorRequestAggregates>> aggregates_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The dimension based on which the data is grouped. This parameter is equivalent to the GROUP BY clause in SQL statements. If no dimension is specified, all data is aggregated based on the aggregate function.
    std::shared_ptr<vector<PutLogMonitorRequestGroupbys>> groupbys_ = nullptr;
    // The ID of the log monitoring metric.
    std::shared_ptr<string> logId_ = nullptr;
    // The extended field. The extended field allows you to perform basic operations on the aggregation results.
    // 
    // For example, you have calculated TotalNumber and 5XXNumber by aggregating the data. TotalNumber indicates the total number of HTTP requests, and 5XXNumber indicates the number of HTTP requests whose status code is greater than 499. You can calculate the server error rate by adding the following formula to the extended field: 5XXNumber/TotalNumber\\*100.
    // 
    // JSON format: {"extend":{"errorPercent":"5XXNumber/TotalNumber\\*100"}}. Description:
    // 
    // *   extend: required.
    // *   errorPercent: the alias of the field generated in the calculation result. You can specify the alias as needed.
    // *   5XXNumber/TotalNumber\\*100: the calculation expression.
    std::shared_ptr<string> metricExpress_ = nullptr;
    // The metric name. For more information about the metrics for cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the Simple Log Service Logstore.
    // 
    // This parameter is required.
    std::shared_ptr<string> slsLogstore_ = nullptr;
    // The name of the Simple Log Service project.
    // 
    // This parameter is required.
    std::shared_ptr<string> slsProject_ = nullptr;
    // The region in which the Simple Log Service project resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> slsRegionId_ = nullptr;
    // The size of the tumbling window for calculation. Unit: seconds. CloudMonitor performs aggregation for each tumbling window.
    std::shared_ptr<string> tumblingwindows_ = nullptr;
    // The unit.
    std::shared_ptr<string> unit_ = nullptr;
    // The condition that is used to filter logs. The ValueFilter and ValueFilterRelation parameters are used in pair. The filter condition is equivalent to the WHERE clause in SQL statements. If no filter condition is specified, all logs are processed. For example, logs contain the Level and Error fields. If you need to calculate the number of times that logs of the Error level appear every minute, you can set the filter condition to Level=Error and count the number of logs that meet this condition.
    std::shared_ptr<vector<PutLogMonitorRequestValueFilter>> valueFilter_ = nullptr;
    // The logical operator that is used between log filter conditions. Valid values:
    // 
    // *   and
    // *   or
    // 
    // >  The ValueFilterRelation and `ValueFilter.N.Key` parameters must be used in pair.
    // 
    // This parameter is required.
    std::shared_ptr<string> valueFilterRelation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
