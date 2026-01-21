// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTLOGMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTLOGMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ValueFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ValueFilter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ValueFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ValueFilter() = default ;
      ValueFilter(const ValueFilter &) = default ;
      ValueFilter(ValueFilter &&) = default ;
      ValueFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ValueFilter() = default ;
      ValueFilter& operator=(const ValueFilter &) = default ;
      ValueFilter& operator=(ValueFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ValueFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline ValueFilter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ValueFilter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the log field that is used for matching in the filter condition. Valid values of N: 1 to 10.
      shared_ptr<string> key_ {};
      // The method that is used to match the field value. Valid values of N: 1 to 10. Valid values:
      // 
      // *   `contain`: contains
      // *   `notContain`: does not contain
      // *   `>`: greater than
      // *   `<`: less than
      // *   `>=`: greater than or equal to
      // *   `<=`: less than or equal to
      shared_ptr<string> operator_ {};
      // The field value to be matched in the filter condition. Valid values of N: 1 to 10.
      shared_ptr<string> value_ {};
    };

    class Groupbys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groupbys& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      };
      friend void from_json(const Darabonba::Json& j, Groupbys& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      };
      Groupbys() = default ;
      Groupbys(const Groupbys &) = default ;
      Groupbys(Groupbys &&) = default ;
      Groupbys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groupbys() = default ;
      Groupbys& operator=(const Groupbys &) = default ;
      Groupbys& operator=(Groupbys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->fieldName_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Groupbys& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline Groupbys& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    protected:
      // The alias of the dimension based on which the data is grouped. Valid values of N: 1 to 10.
      shared_ptr<string> alias_ {};
      // The name of the field that is specified as the dimension. Valid values of N: 1 to 10.
      shared_ptr<string> fieldName_ {};
    };

    class Aggregates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Aggregates& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(Function, function_);
      };
      friend void from_json(const Darabonba::Json& j, Aggregates& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(Function, function_);
      };
      Aggregates() = default ;
      Aggregates(const Aggregates &) = default ;
      Aggregates(Aggregates &&) = default ;
      Aggregates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Aggregates() = default ;
      Aggregates& operator=(const Aggregates &) = default ;
      Aggregates& operator=(Aggregates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->fieldName_ == nullptr && this->function_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Aggregates& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline Aggregates& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // function Field Functions 
      bool hasFunction() const { return this->function_ != nullptr;};
      void deleteFunction() { this->function_ = nullptr;};
      inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
      inline Aggregates& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    protected:
      // The alias of the aggregate function. Valid values of N: 1 to 10.
      // 
      // This parameter is required.
      shared_ptr<string> alias_ {};
      // The name of the field to be aggregated. Valid values of N: 1 to 10.
      // 
      // This parameter is required.
      shared_ptr<string> fieldName_ {};
      // The function that is used to aggregate log data within a statistical period. Valid values of N: 1 to 10. Valid values:
      // 
      // *   count: counts the number.
      // *   sum: calculates the total value.
      // *   avg: calculates the average value.
      // *   max: calculates the maximum value.
      // *   min: calculates the minimum value.
      // *   countps: calculates the number of values of the specified field divided by the total number of seconds within a statistical period.
      // *   sumps: calculates the sum of the values of the specified field divided by the total number of seconds within a statistical period.
      // *   distinct: calculates the number of unique values of the specified field within a statistical period.
      // 
      // This parameter is required.
      shared_ptr<string> function_ {};
    };

    virtual bool empty() const override { return this->aggregates_ == nullptr
        && this->groupId_ == nullptr && this->groupbys_ == nullptr && this->logId_ == nullptr && this->metricExpress_ == nullptr && this->metricName_ == nullptr
        && this->regionId_ == nullptr && this->slsLogstore_ == nullptr && this->slsProject_ == nullptr && this->slsRegionId_ == nullptr && this->tumblingwindows_ == nullptr
        && this->unit_ == nullptr && this->valueFilter_ == nullptr && this->valueFilterRelation_ == nullptr; };
    // aggregates Field Functions 
    bool hasAggregates() const { return this->aggregates_ != nullptr;};
    void deleteAggregates() { this->aggregates_ = nullptr;};
    inline const vector<PutLogMonitorRequest::Aggregates> & getAggregates() const { DARABONBA_PTR_GET_CONST(aggregates_, vector<PutLogMonitorRequest::Aggregates>) };
    inline vector<PutLogMonitorRequest::Aggregates> getAggregates() { DARABONBA_PTR_GET(aggregates_, vector<PutLogMonitorRequest::Aggregates>) };
    inline PutLogMonitorRequest& setAggregates(const vector<PutLogMonitorRequest::Aggregates> & aggregates) { DARABONBA_PTR_SET_VALUE(aggregates_, aggregates) };
    inline PutLogMonitorRequest& setAggregates(vector<PutLogMonitorRequest::Aggregates> && aggregates) { DARABONBA_PTR_SET_RVALUE(aggregates_, aggregates) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline PutLogMonitorRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupbys Field Functions 
    bool hasGroupbys() const { return this->groupbys_ != nullptr;};
    void deleteGroupbys() { this->groupbys_ = nullptr;};
    inline const vector<PutLogMonitorRequest::Groupbys> & getGroupbys() const { DARABONBA_PTR_GET_CONST(groupbys_, vector<PutLogMonitorRequest::Groupbys>) };
    inline vector<PutLogMonitorRequest::Groupbys> getGroupbys() { DARABONBA_PTR_GET(groupbys_, vector<PutLogMonitorRequest::Groupbys>) };
    inline PutLogMonitorRequest& setGroupbys(const vector<PutLogMonitorRequest::Groupbys> & groupbys) { DARABONBA_PTR_SET_VALUE(groupbys_, groupbys) };
    inline PutLogMonitorRequest& setGroupbys(vector<PutLogMonitorRequest::Groupbys> && groupbys) { DARABONBA_PTR_SET_RVALUE(groupbys_, groupbys) };


    // logId Field Functions 
    bool hasLogId() const { return this->logId_ != nullptr;};
    void deleteLogId() { this->logId_ = nullptr;};
    inline string getLogId() const { DARABONBA_PTR_GET_DEFAULT(logId_, "") };
    inline PutLogMonitorRequest& setLogId(string logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


    // metricExpress Field Functions 
    bool hasMetricExpress() const { return this->metricExpress_ != nullptr;};
    void deleteMetricExpress() { this->metricExpress_ = nullptr;};
    inline string getMetricExpress() const { DARABONBA_PTR_GET_DEFAULT(metricExpress_, "") };
    inline PutLogMonitorRequest& setMetricExpress(string metricExpress) { DARABONBA_PTR_SET_VALUE(metricExpress_, metricExpress) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutLogMonitorRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutLogMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsLogstore Field Functions 
    bool hasSlsLogstore() const { return this->slsLogstore_ != nullptr;};
    void deleteSlsLogstore() { this->slsLogstore_ = nullptr;};
    inline string getSlsLogstore() const { DARABONBA_PTR_GET_DEFAULT(slsLogstore_, "") };
    inline PutLogMonitorRequest& setSlsLogstore(string slsLogstore) { DARABONBA_PTR_SET_VALUE(slsLogstore_, slsLogstore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline PutLogMonitorRequest& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // slsRegionId Field Functions 
    bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
    void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
    inline string getSlsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
    inline PutLogMonitorRequest& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


    // tumblingwindows Field Functions 
    bool hasTumblingwindows() const { return this->tumblingwindows_ != nullptr;};
    void deleteTumblingwindows() { this->tumblingwindows_ = nullptr;};
    inline string getTumblingwindows() const { DARABONBA_PTR_GET_DEFAULT(tumblingwindows_, "") };
    inline PutLogMonitorRequest& setTumblingwindows(string tumblingwindows) { DARABONBA_PTR_SET_VALUE(tumblingwindows_, tumblingwindows) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline PutLogMonitorRequest& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // valueFilter Field Functions 
    bool hasValueFilter() const { return this->valueFilter_ != nullptr;};
    void deleteValueFilter() { this->valueFilter_ = nullptr;};
    inline const vector<PutLogMonitorRequest::ValueFilter> & getValueFilter() const { DARABONBA_PTR_GET_CONST(valueFilter_, vector<PutLogMonitorRequest::ValueFilter>) };
    inline vector<PutLogMonitorRequest::ValueFilter> getValueFilter() { DARABONBA_PTR_GET(valueFilter_, vector<PutLogMonitorRequest::ValueFilter>) };
    inline PutLogMonitorRequest& setValueFilter(const vector<PutLogMonitorRequest::ValueFilter> & valueFilter) { DARABONBA_PTR_SET_VALUE(valueFilter_, valueFilter) };
    inline PutLogMonitorRequest& setValueFilter(vector<PutLogMonitorRequest::ValueFilter> && valueFilter) { DARABONBA_PTR_SET_RVALUE(valueFilter_, valueFilter) };


    // valueFilterRelation Field Functions 
    bool hasValueFilterRelation() const { return this->valueFilterRelation_ != nullptr;};
    void deleteValueFilterRelation() { this->valueFilterRelation_ = nullptr;};
    inline string getValueFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(valueFilterRelation_, "") };
    inline PutLogMonitorRequest& setValueFilterRelation(string valueFilterRelation) { DARABONBA_PTR_SET_VALUE(valueFilterRelation_, valueFilterRelation) };


  protected:
    // The aggregation logic.
    // 
    // This parameter is required.
    shared_ptr<vector<PutLogMonitorRequest::Aggregates>> aggregates_ {};
    // The ID of the application group.
    shared_ptr<string> groupId_ {};
    // The dimension based on which the data is grouped. This parameter is equivalent to the GROUP BY clause in SQL statements. If no dimension is specified, all data is aggregated based on the aggregate function.
    shared_ptr<vector<PutLogMonitorRequest::Groupbys>> groupbys_ {};
    // The ID of the log monitoring metric.
    shared_ptr<string> logId_ {};
    // The extended field. The extended field allows you to perform basic operations on the aggregation results.
    // 
    // For example, you have calculated TotalNumber and 5XXNumber by aggregating the data. TotalNumber indicates the total number of HTTP requests, and 5XXNumber indicates the number of HTTP requests whose status code is greater than 499. You can calculate the server error rate by adding the following formula to the extended field: 5XXNumber/TotalNumber\\*100.
    // 
    // JSON format: {"extend":{"errorPercent":"5XXNumber/TotalNumber\\*100"}}. Description:
    // 
    // *   extend: required.
    // *   errorPercent: the alias of the field generated in the calculation result. You can specify the alias as needed.
    // *   5XXNumber/TotalNumber\\*100: the calculation expression.
    shared_ptr<string> metricExpress_ {};
    // The metric name. For more information about the metrics for cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    shared_ptr<string> regionId_ {};
    // The name of the Simple Log Service Logstore.
    // 
    // This parameter is required.
    shared_ptr<string> slsLogstore_ {};
    // The name of the Simple Log Service project.
    // 
    // This parameter is required.
    shared_ptr<string> slsProject_ {};
    // The region in which the Simple Log Service project resides.
    // 
    // This parameter is required.
    shared_ptr<string> slsRegionId_ {};
    // The size of the tumbling window for calculation. Unit: seconds. CloudMonitor performs aggregation for each tumbling window.
    shared_ptr<string> tumblingwindows_ {};
    // The unit.
    shared_ptr<string> unit_ {};
    // The condition that is used to filter logs. The ValueFilter and ValueFilterRelation parameters are used in pair. The filter condition is equivalent to the WHERE clause in SQL statements. If no filter condition is specified, all logs are processed. For example, logs contain the Level and Error fields. If you need to calculate the number of times that logs of the Error level appear every minute, you can set the filter condition to Level=Error and count the number of logs that meet this condition.
    shared_ptr<vector<PutLogMonitorRequest::ValueFilter>> valueFilter_ {};
    // The logical operator that is used between log filter conditions. Valid values:
    // 
    // *   and
    // *   or
    // 
    // >  The ValueFilterRelation and `ValueFilter.N.Key` parameters must be used in pair.
    // 
    // This parameter is required.
    shared_ptr<string> valueFilterRelation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
