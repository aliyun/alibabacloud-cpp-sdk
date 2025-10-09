// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRULESAMPLINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRULESAMPLINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityRuleSamplingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityRuleSamplingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(MetricParameters, metricParameters_);
      DARABONBA_PTR_TO_JSON(SamplingFilter, samplingFilter_);
      DARABONBA_PTR_TO_JSON(SettingConfig, settingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityRuleSamplingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(MetricParameters, metricParameters_);
      DARABONBA_PTR_FROM_JSON(SamplingFilter, samplingFilter_);
      DARABONBA_PTR_FROM_JSON(SettingConfig, settingConfig_);
    };
    DataQualityRuleSamplingConfig() = default ;
    DataQualityRuleSamplingConfig(const DataQualityRuleSamplingConfig &) = default ;
    DataQualityRuleSamplingConfig(DataQualityRuleSamplingConfig &&) = default ;
    DataQualityRuleSamplingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityRuleSamplingConfig() = default ;
    DataQualityRuleSamplingConfig& operator=(const DataQualityRuleSamplingConfig &) = default ;
    DataQualityRuleSamplingConfig& operator=(DataQualityRuleSamplingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metric_ != nullptr
        && this->metricParameters_ != nullptr && this->samplingFilter_ != nullptr && this->settingConfig_ != nullptr; };
    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DataQualityRuleSamplingConfig& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // metricParameters Field Functions 
    bool hasMetricParameters() const { return this->metricParameters_ != nullptr;};
    void deleteMetricParameters() { this->metricParameters_ = nullptr;};
    inline string metricParameters() const { DARABONBA_PTR_GET_DEFAULT(metricParameters_, "") };
    inline DataQualityRuleSamplingConfig& setMetricParameters(string metricParameters) { DARABONBA_PTR_SET_VALUE(metricParameters_, metricParameters) };


    // samplingFilter Field Functions 
    bool hasSamplingFilter() const { return this->samplingFilter_ != nullptr;};
    void deleteSamplingFilter() { this->samplingFilter_ = nullptr;};
    inline string samplingFilter() const { DARABONBA_PTR_GET_DEFAULT(samplingFilter_, "") };
    inline DataQualityRuleSamplingConfig& setSamplingFilter(string samplingFilter) { DARABONBA_PTR_SET_VALUE(samplingFilter_, samplingFilter) };


    // settingConfig Field Functions 
    bool hasSettingConfig() const { return this->settingConfig_ != nullptr;};
    void deleteSettingConfig() { this->settingConfig_ = nullptr;};
    inline string settingConfig() const { DARABONBA_PTR_GET_DEFAULT(settingConfig_, "") };
    inline DataQualityRuleSamplingConfig& setSettingConfig(string settingConfig) { DARABONBA_PTR_SET_VALUE(settingConfig_, settingConfig) };


  protected:
    std::shared_ptr<string> metric_ = nullptr;
    std::shared_ptr<string> metricParameters_ = nullptr;
    std::shared_ptr<string> samplingFilter_ = nullptr;
    std::shared_ptr<string> settingConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
