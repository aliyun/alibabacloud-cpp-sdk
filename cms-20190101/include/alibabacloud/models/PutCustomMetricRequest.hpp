// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCUSTOMMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTCUSTOMMETRICREQUEST_HPP_
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
  class PutCustomMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutCustomMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MetricList, metricList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutCustomMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricList, metricList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutCustomMetricRequest() = default ;
    PutCustomMetricRequest(const PutCustomMetricRequest &) = default ;
    PutCustomMetricRequest(PutCustomMetricRequest &&) = default ;
    PutCustomMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutCustomMetricRequest() = default ;
    PutCustomMetricRequest& operator=(const PutCustomMetricRequest &) = default ;
    PutCustomMetricRequest& operator=(PutCustomMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetricList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricList& obj) { 
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, MetricList& obj) { 
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      MetricList() = default ;
      MetricList(const MetricList &) = default ;
      MetricList(MetricList &&) = default ;
      MetricList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricList() = default ;
      MetricList& operator=(const MetricList &) = default ;
      MetricList& operator=(MetricList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->groupId_ == nullptr && this->metricName_ == nullptr && this->period_ == nullptr && this->time_ == nullptr && this->type_ == nullptr
        && this->values_ == nullptr; };
      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
      inline MetricList& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline MetricList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline MetricList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
      inline MetricList& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline MetricList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MetricList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
      inline MetricList& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


    protected:
      // The dimension map, which is used to query monitoring data of a specified resource. Valid values of N: 1 to 21.
      // 
      // Format: a collection of key-value pairs. A commonly used key-value pair collection is: `{"Key":"Value"}`.
      // 
      // The length of Key and Value is 1 to 64 characters. Characters beyond the first 64 are truncated.
      // 
      // The values of Key and Value can contain letters, digits, periods (.), hyphens (-), underscores (_), forward slashes (/), and backslashes (\\).
      // 
      // > Dimensions must be passed in as a JSON string that represents the map object, and must be passed in order.
      // 
      // This parameter is required.
      shared_ptr<string> dimensions_ {};
      // The ID of the application group. Valid values of N: 1 to 21.
      // 
      // > If the metric does not belong to any application group, enter 0.
      // 
      // This parameter is required.
      shared_ptr<string> groupId_ {};
      // The name of the metric. Valid values of N: 1 to 21. For more information, see [Metrics of cloud services](https://help.aliyun.com/document_detail/163515.html).
      // 
      // This parameter is required.
      shared_ptr<string> metricName_ {};
      // The aggregation period. Valid values of N: 1 to 21. Unit: seconds. Valid values: 60 and 300.
      // 
      // > If the type of the reported value is 1, you must set this parameter.
      shared_ptr<string> period_ {};
      // The time when the metric occurred. Valid values of N: 1 to 21. The following two types of values are supported:
      // - UTC time. Format: YYYY-MM-DDThh:mm:ssZ. For example: 20171012T132456.888+0800.
      // - A Long-type timestamp. For example: 1508136760000.
      shared_ptr<string> time_ {};
      // The type of the reported value. Valid values of N: 1 to 21. Valid values:
      // 
      // - 0: raw data.
      // - 1: aggregate data.
      // 
      // > When you report aggregate data, we recommend that you report both data with a period of 60 seconds and data with a period of 300 seconds. Otherwise, monitoring data cannot be queried for a time span of more than 7 days.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The collection of metric values. Valid values of N: 1 to 21.
      // 
      // > If the type of the reported value is 0, the raw values are reported. CloudMonitor aggregates raw values into multiple values, such as maximum, count, and sum, by period.
      // 
      // This parameter is required.
      shared_ptr<string> values_ {};
    };

    virtual bool empty() const override { return this->metricList_ == nullptr
        && this->regionId_ == nullptr; };
    // metricList Field Functions 
    bool hasMetricList() const { return this->metricList_ != nullptr;};
    void deleteMetricList() { this->metricList_ = nullptr;};
    inline const vector<PutCustomMetricRequest::MetricList> & getMetricList() const { DARABONBA_PTR_GET_CONST(metricList_, vector<PutCustomMetricRequest::MetricList>) };
    inline vector<PutCustomMetricRequest::MetricList> getMetricList() { DARABONBA_PTR_GET(metricList_, vector<PutCustomMetricRequest::MetricList>) };
    inline PutCustomMetricRequest& setMetricList(const vector<PutCustomMetricRequest::MetricList> & metricList) { DARABONBA_PTR_SET_VALUE(metricList_, metricList) };
    inline PutCustomMetricRequest& setMetricList(vector<PutCustomMetricRequest::MetricList> && metricList) { DARABONBA_PTR_SET_RVALUE(metricList_, metricList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutCustomMetricRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The list of monitoring data.
    // 
    // This parameter is required.
    shared_ptr<vector<PutCustomMetricRequest::MetricList>> metricList_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
