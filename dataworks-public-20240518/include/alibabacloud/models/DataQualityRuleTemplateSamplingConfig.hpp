// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRULETEMPLATESAMPLINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRULETEMPLATESAMPLINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityRuleTemplateSamplingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityRuleTemplateSamplingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(MetricParameters, metricParameters_);
      DARABONBA_PTR_TO_JSON(SettingConfig, settingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityRuleTemplateSamplingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(MetricParameters, metricParameters_);
      DARABONBA_PTR_FROM_JSON(SettingConfig, settingConfig_);
    };
    DataQualityRuleTemplateSamplingConfig() = default ;
    DataQualityRuleTemplateSamplingConfig(const DataQualityRuleTemplateSamplingConfig &) = default ;
    DataQualityRuleTemplateSamplingConfig(DataQualityRuleTemplateSamplingConfig &&) = default ;
    DataQualityRuleTemplateSamplingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityRuleTemplateSamplingConfig() = default ;
    DataQualityRuleTemplateSamplingConfig& operator=(const DataQualityRuleTemplateSamplingConfig &) = default ;
    DataQualityRuleTemplateSamplingConfig& operator=(DataQualityRuleTemplateSamplingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metric_ != nullptr
        && this->metricParameters_ != nullptr && this->settingConfig_ != nullptr; };
    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DataQualityRuleTemplateSamplingConfig& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // metricParameters Field Functions 
    bool hasMetricParameters() const { return this->metricParameters_ != nullptr;};
    void deleteMetricParameters() { this->metricParameters_ = nullptr;};
    inline string metricParameters() const { DARABONBA_PTR_GET_DEFAULT(metricParameters_, "") };
    inline DataQualityRuleTemplateSamplingConfig& setMetricParameters(string metricParameters) { DARABONBA_PTR_SET_VALUE(metricParameters_, metricParameters) };


    // settingConfig Field Functions 
    bool hasSettingConfig() const { return this->settingConfig_ != nullptr;};
    void deleteSettingConfig() { this->settingConfig_ = nullptr;};
    inline string settingConfig() const { DARABONBA_PTR_GET_DEFAULT(settingConfig_, "") };
    inline DataQualityRuleTemplateSamplingConfig& setSettingConfig(string settingConfig) { DARABONBA_PTR_SET_VALUE(settingConfig_, settingConfig) };


  protected:
    std::shared_ptr<string> metric_ = nullptr;
    std::shared_ptr<string> metricParameters_ = nullptr;
    std::shared_ptr<string> settingConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
