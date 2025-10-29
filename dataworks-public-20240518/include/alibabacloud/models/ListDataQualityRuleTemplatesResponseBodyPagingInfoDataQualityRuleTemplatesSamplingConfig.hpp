// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRULETEMPLATESRESPONSEBODYPAGINGINFODATAQUALITYRULETEMPLATESSAMPLINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRULETEMPLATESRESPONSEBODYPAGINGINFODATAQUALITYRULETEMPLATESSAMPLINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(MetricParameters, metricParameters_);
      DARABONBA_PTR_TO_JSON(SettingConfig, settingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(MetricParameters, metricParameters_);
      DARABONBA_PTR_FROM_JSON(SettingConfig, settingConfig_);
    };
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig() = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig(const ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig &) = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig(ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig &&) = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig() = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig& operator=(const ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig &) = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig& operator=(ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metric_ == nullptr
        && return this->metricParameters_ == nullptr && return this->settingConfig_ == nullptr; };
    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // metricParameters Field Functions 
    bool hasMetricParameters() const { return this->metricParameters_ != nullptr;};
    void deleteMetricParameters() { this->metricParameters_ = nullptr;};
    inline string metricParameters() const { DARABONBA_PTR_GET_DEFAULT(metricParameters_, "") };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig& setMetricParameters(string metricParameters) { DARABONBA_PTR_SET_VALUE(metricParameters_, metricParameters) };


    // settingConfig Field Functions 
    bool hasSettingConfig() const { return this->settingConfig_ != nullptr;};
    void deleteSettingConfig() { this->settingConfig_ = nullptr;};
    inline string settingConfig() const { DARABONBA_PTR_GET_DEFAULT(settingConfig_, "") };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplatesSamplingConfig& setSettingConfig(string settingConfig) { DARABONBA_PTR_SET_VALUE(settingConfig_, settingConfig) };


  protected:
    // The name of the sampled metric.
    // - Count: number of table rows
    // - Min: minimum value of the field
    // - Max: The maximum value of the field.
    // - Avg: field mean
    // - DistinctCount: number of unique field values
    // - DistinctPercent: the ratio of the number of unique field values to the number of data rows.
    // - DuplicatedCount: number of duplicate field values
    // - DuplicatedPercent: the ratio of the number of duplicate field values to the number of data rows.
    // - TableSize: table size
    // - NullValueCount: number of rows with empty fields
    // - NullValuePercent: the proportion of fields that are empty.
    // - GroupCount: aggregate each value by field value and the corresponding number of data rows
    // - CountNotIn: the enumerated value does not match the number of rows.
    // - CountDistinctNotIn: the number of unique values that the enumerated values do not match.
    // - UserDefinedSql: use custom SQL to collect samples
    std::shared_ptr<string> metric_ = nullptr;
    // Parameters required for sample collection
    std::shared_ptr<string> metricParameters_ = nullptr;
    // Before executing the sample statement, insert some runtime parameter setting statements, which can be up to 1000 characters in length. Currently, only MaxCompute are supported.
    std::shared_ptr<string> settingConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
