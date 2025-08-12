// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATAREQUESTMETRICLISTLABELS_HPP_
#define ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATAREQUESTMETRICLISTLABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutHybridMonitorMetricDataRequestMetricListLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutHybridMonitorMetricDataRequestMetricListLabels& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PutHybridMonitorMetricDataRequestMetricListLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    PutHybridMonitorMetricDataRequestMetricListLabels() = default ;
    PutHybridMonitorMetricDataRequestMetricListLabels(const PutHybridMonitorMetricDataRequestMetricListLabels &) = default ;
    PutHybridMonitorMetricDataRequestMetricListLabels(PutHybridMonitorMetricDataRequestMetricListLabels &&) = default ;
    PutHybridMonitorMetricDataRequestMetricListLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutHybridMonitorMetricDataRequestMetricListLabels() = default ;
    PutHybridMonitorMetricDataRequestMetricListLabels& operator=(const PutHybridMonitorMetricDataRequestMetricListLabels &) = default ;
    PutHybridMonitorMetricDataRequestMetricListLabels& operator=(PutHybridMonitorMetricDataRequestMetricListLabels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline PutHybridMonitorMetricDataRequestMetricListLabels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PutHybridMonitorMetricDataRequestMetricListLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key of the metric.
    // 
    // Valid values of N: 1 to 100.
    // 
    // The key can contain letters, digits, and underscores (_). The key must start with a letter or an underscore (_).
    // 
    // >  You must specify both the Key and Value parameters.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value of the metric.
    // 
    // Valid values of N: 1 to 100.
    // 
    // >  You must specify both the Key and Value parameters.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
