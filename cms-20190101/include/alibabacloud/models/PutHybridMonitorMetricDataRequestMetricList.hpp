// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATAREQUESTMETRICLIST_HPP_
#define ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATAREQUESTMETRICLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutHybridMonitorMetricDataRequestMetricListLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutHybridMonitorMetricDataRequestMetricList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutHybridMonitorMetricDataRequestMetricList& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TS, TS_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PutHybridMonitorMetricDataRequestMetricList& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TS, TS_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    PutHybridMonitorMetricDataRequestMetricList() = default ;
    PutHybridMonitorMetricDataRequestMetricList(const PutHybridMonitorMetricDataRequestMetricList &) = default ;
    PutHybridMonitorMetricDataRequestMetricList(PutHybridMonitorMetricDataRequestMetricList &&) = default ;
    PutHybridMonitorMetricDataRequestMetricList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutHybridMonitorMetricDataRequestMetricList() = default ;
    PutHybridMonitorMetricDataRequestMetricList& operator=(const PutHybridMonitorMetricDataRequestMetricList &) = default ;
    PutHybridMonitorMetricDataRequestMetricList& operator=(PutHybridMonitorMetricDataRequestMetricList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr
        && return this->name_ == nullptr && return this->TS_ == nullptr && return this->value_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::PutHybridMonitorMetricDataRequestMetricListLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::PutHybridMonitorMetricDataRequestMetricListLabels>) };
    inline vector<Models::PutHybridMonitorMetricDataRequestMetricListLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::PutHybridMonitorMetricDataRequestMetricListLabels>) };
    inline PutHybridMonitorMetricDataRequestMetricList& setLabels(const vector<Models::PutHybridMonitorMetricDataRequestMetricListLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline PutHybridMonitorMetricDataRequestMetricList& setLabels(vector<Models::PutHybridMonitorMetricDataRequestMetricListLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PutHybridMonitorMetricDataRequestMetricList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // TS Field Functions 
    bool hasTS() const { return this->TS_ != nullptr;};
    void deleteTS() { this->TS_ = nullptr;};
    inline int64_t TS() const { DARABONBA_PTR_GET_DEFAULT(TS_, 0L) };
    inline PutHybridMonitorMetricDataRequestMetricList& setTS(int64_t TS) { DARABONBA_PTR_SET_VALUE(TS_, TS) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PutHybridMonitorMetricDataRequestMetricList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tags of the metric.
    // 
    // Valid values of N: 1 to 100.
    std::shared_ptr<vector<Models::PutHybridMonitorMetricDataRequestMetricListLabels>> labels_ = nullptr;
    // The metric name.
    // 
    // Valid values of N: 1 to 100.
    // 
    // The name can contain letters, digits, and underscores (_). The name must start with a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the monitoring data is imported. The value is a timestamp.
    // 
    // Valid values of N: 1 to 100.
    // 
    // Unit: milliseconds. By default, the current time is used.
    std::shared_ptr<int64_t> TS_ = nullptr;
    // The value of the metric.
    // 
    // Valid values of N: 1 to 100.
    // 
    // The value must be an integer or a floating-point number.
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
