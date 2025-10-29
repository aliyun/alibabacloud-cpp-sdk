// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODYPAGINGINFODATAQUALITYRESULTSRULESAMPLINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODYPAGINGINFODATAQUALITYRESULTSRULESAMPLINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(MetricParameters, metricParameters_);
      DARABONBA_PTR_TO_JSON(SamplingFilter, samplingFilter_);
      DARABONBA_PTR_TO_JSON(SettingConfig, settingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(MetricParameters, metricParameters_);
      DARABONBA_PTR_FROM_JSON(SamplingFilter, samplingFilter_);
      DARABONBA_PTR_FROM_JSON(SettingConfig, settingConfig_);
    };
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig() = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig(const ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig &) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig(ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig &&) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig() = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig& operator=(const ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig &) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig& operator=(ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metric_ == nullptr
        && return this->metricParameters_ == nullptr && return this->samplingFilter_ == nullptr && return this->settingConfig_ == nullptr; };
    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // metricParameters Field Functions 
    bool hasMetricParameters() const { return this->metricParameters_ != nullptr;};
    void deleteMetricParameters() { this->metricParameters_ = nullptr;};
    inline string metricParameters() const { DARABONBA_PTR_GET_DEFAULT(metricParameters_, "") };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig& setMetricParameters(string metricParameters) { DARABONBA_PTR_SET_VALUE(metricParameters_, metricParameters) };


    // samplingFilter Field Functions 
    bool hasSamplingFilter() const { return this->samplingFilter_ != nullptr;};
    void deleteSamplingFilter() { this->samplingFilter_ = nullptr;};
    inline string samplingFilter() const { DARABONBA_PTR_GET_DEFAULT(samplingFilter_, "") };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig& setSamplingFilter(string samplingFilter) { DARABONBA_PTR_SET_VALUE(samplingFilter_, samplingFilter) };


    // settingConfig Field Functions 
    bool hasSettingConfig() const { return this->settingConfig_ != nullptr;};
    void deleteSettingConfig() { this->settingConfig_ = nullptr;};
    inline string settingConfig() const { DARABONBA_PTR_GET_DEFAULT(settingConfig_, "") };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleSamplingConfig& setSettingConfig(string settingConfig) { DARABONBA_PTR_SET_VALUE(settingConfig_, settingConfig) };


  protected:
    // The metrics used for sampling. Valid values:
    // 
    // *   Count: the number of rows in the table.
    // *   Min: the minimum value of the field.
    // *   Max: the maximum value of the field.
    // *   Avg: the average value of the field.
    // *   DistinctCount: the number of unique values of the field after deduplication.
    // *   DistinctPercent: the proportion of the number of unique values of the field after deduplication to the number of rows in the table.
    // *   DuplicatedCount: the number of duplicated values of the field.
    // *   DuplicatedPercent: the proportion of the number of duplicated values of the field to the number of rows in the table.
    // *   TableSize: the table size.
    // *   NullValueCount: the number of rows in which the field value is null.
    // *   NullValuePercent: the proportion of the number of rows in which the field value is null to the number of rows in the table.
    // *   GroupCount: the field value and the number of rows for each field value.
    // *   CountNotIn: the number of rows in which the field values are different from the referenced values that you specified in the rule.
    // *   CountDistinctNotIn: the number of unique values that are different from the referenced values that you specified in the rule after deduplication.
    // *   UserDefinedSql: indicates that data is sampled by executing custom SQL statements.
    std::shared_ptr<string> metric_ = nullptr;
    // The parameters required for sampling.
    std::shared_ptr<string> metricParameters_ = nullptr;
    // The statements that are used to filter unnecessary data during sampling. The statements can be up to 16,777,215 characters in length.
    std::shared_ptr<string> samplingFilter_ = nullptr;
    // The statements that are used to configure the parameters required for sampling before you execute the sampling statements. The statements can be up to 1,000 characters in length. Only the MaxCompute database is supported.
    std::shared_ptr<string> settingConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
