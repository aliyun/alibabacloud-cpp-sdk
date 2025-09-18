// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICUNITVALUE_HPP_
#define ALIBABACLOUD_MODELS_METRICUNITVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class MetricUnitValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricUnitValue& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(MetricUnit, metricUnit_);
    };
    friend void from_json(const Darabonba::Json& j, MetricUnitValue& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(MetricUnit, metricUnit_);
    };
    MetricUnitValue() = default ;
    MetricUnitValue(const MetricUnitValue &) = default ;
    MetricUnitValue(MetricUnitValue &&) = default ;
    MetricUnitValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricUnitValue() = default ;
    MetricUnitValue& operator=(const MetricUnitValue &) = default ;
    MetricUnitValue& operator=(MetricUnitValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricName_ != nullptr
        && this->metricUnit_ != nullptr; };
    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline MetricUnitValue& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricUnit Field Functions 
    bool hasMetricUnit() const { return this->metricUnit_ != nullptr;};
    void deleteMetricUnit() { this->metricUnit_ = nullptr;};
    inline string metricUnit() const { DARABONBA_PTR_GET_DEFAULT(metricUnit_, "") };
    inline MetricUnitValue& setMetricUnit(string metricUnit) { DARABONBA_PTR_SET_VALUE(metricUnit_, metricUnit) };


  protected:
    // 指标名称。
    std::shared_ptr<string> metricName_ = nullptr;
    // 指标单位。
    std::shared_ptr<string> metricUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
