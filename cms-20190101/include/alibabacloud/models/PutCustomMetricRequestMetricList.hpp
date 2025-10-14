// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCUSTOMMETRICREQUESTMETRICLIST_HPP_
#define ALIBABACLOUD_MODELS_PUTCUSTOMMETRICREQUESTMETRICLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutCustomMetricRequestMetricList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutCustomMetricRequestMetricList& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, PutCustomMetricRequestMetricList& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    PutCustomMetricRequestMetricList() = default ;
    PutCustomMetricRequestMetricList(const PutCustomMetricRequestMetricList &) = default ;
    PutCustomMetricRequestMetricList(PutCustomMetricRequestMetricList &&) = default ;
    PutCustomMetricRequestMetricList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutCustomMetricRequestMetricList() = default ;
    PutCustomMetricRequestMetricList& operator=(const PutCustomMetricRequestMetricList &) = default ;
    PutCustomMetricRequestMetricList& operator=(PutCustomMetricRequestMetricList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dimensions_ == nullptr
        && return this->groupId_ == nullptr && return this->metricName_ == nullptr && return this->period_ == nullptr && return this->time_ == nullptr && return this->type_ == nullptr
        && return this->values_ == nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline PutCustomMetricRequestMetricList& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline PutCustomMetricRequestMetricList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutCustomMetricRequestMetricList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline PutCustomMetricRequestMetricList& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline PutCustomMetricRequestMetricList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PutCustomMetricRequestMetricList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string values() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline PutCustomMetricRequestMetricList& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    // The dimensions based on which the resources are queried. Valid values of N: 1 to 21.
    // 
    // Set this parameter to a collection of key-value pairs. Format: `{"Key":"Value"}`.
    // 
    // The key or value must be 1 to 64 bytes in length. Excessive characters are truncated.
    // 
    // The key or value can contain letters, digits, periods (.), hyphens (-), underscores (_), forward slashes (/), and backslashes (\\\\).
    // 
    // >  Dimensions must be formatted as a JSON string in a specified order.
    // 
    // This parameter is required.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The ID of the application group. Valid values of N: 1 to 21.
    // 
    // >  If the metric does not belong to any application group, enter 0.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The metric name. Valid values of N: 1 to 21. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The aggregation period. Valid values of N: 1 to 21. Unit: seconds. Valid values: 60 and 300.
    // 
    // >  If the Type parameter is set to 1, the Period parameter is required.
    std::shared_ptr<string> period_ = nullptr;
    // The timestamp when the metric data is generated. Valid values of N: 1 to 21. The timestamp can be in one of the following formats:
    // 
    // *   A UTC timestamp in the YYYY-MM-DDThh:mm:ssZ format. Example: 20171012T132456.888+0800.
    // *   A UNIX timestamp of the LONG type. Example: 1508136760000.
    std::shared_ptr<string> time_ = nullptr;
    // The type of the monitoring data. Valid values of N: 1 to 21. Valid values:
    // 
    // *   0: raw data
    // *   1: aggregate data
    // 
    // >  We recommend that you report aggregate data in both the aggregation periods of 60 seconds and 300 seconds. Otherwise, you cannot query monitoring data in a time span that is more than seven days.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The collection of metric values. Valid values of N: 1 to 21.
    // 
    // >  If the Type parameter is set to 0, the keys in this parameter must be set to the specified value. CloudMonitor aggregates raw data in each aggregation period to generate multiple statistical values, such as the maximum value, the count, and the total value.
    // 
    // This parameter is required.
    std::shared_ptr<string> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
