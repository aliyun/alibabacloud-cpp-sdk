// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityRuleTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityRuleTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityRuleTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
    };
    UpdateDataQualityRuleTemplateRequest() = default ;
    UpdateDataQualityRuleTemplateRequest(const UpdateDataQualityRuleTemplateRequest &) = default ;
    UpdateDataQualityRuleTemplateRequest(UpdateDataQualityRuleTemplateRequest &&) = default ;
    UpdateDataQualityRuleTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityRuleTemplateRequest() = default ;
    UpdateDataQualityRuleTemplateRequest& operator=(const UpdateDataQualityRuleTemplateRequest &) = default ;
    UpdateDataQualityRuleTemplateRequest& operator=(UpdateDataQualityRuleTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SamplingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SamplingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Metric, metric_);
        DARABONBA_PTR_TO_JSON(MetricParameters, metricParameters_);
        DARABONBA_PTR_TO_JSON(SettingConfig, settingConfig_);
      };
      friend void from_json(const Darabonba::Json& j, SamplingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Metric, metric_);
        DARABONBA_PTR_FROM_JSON(MetricParameters, metricParameters_);
        DARABONBA_PTR_FROM_JSON(SettingConfig, settingConfig_);
      };
      SamplingConfig() = default ;
      SamplingConfig(const SamplingConfig &) = default ;
      SamplingConfig(SamplingConfig &&) = default ;
      SamplingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SamplingConfig() = default ;
      SamplingConfig& operator=(const SamplingConfig &) = default ;
      SamplingConfig& operator=(SamplingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metric_ == nullptr
        && this->metricParameters_ == nullptr && this->settingConfig_ == nullptr; };
      // metric Field Functions 
      bool hasMetric() const { return this->metric_ != nullptr;};
      void deleteMetric() { this->metric_ = nullptr;};
      inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
      inline SamplingConfig& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


      // metricParameters Field Functions 
      bool hasMetricParameters() const { return this->metricParameters_ != nullptr;};
      void deleteMetricParameters() { this->metricParameters_ = nullptr;};
      inline string getMetricParameters() const { DARABONBA_PTR_GET_DEFAULT(metricParameters_, "") };
      inline SamplingConfig& setMetricParameters(string metricParameters) { DARABONBA_PTR_SET_VALUE(metricParameters_, metricParameters) };


      // settingConfig Field Functions 
      bool hasSettingConfig() const { return this->settingConfig_ != nullptr;};
      void deleteSettingConfig() { this->settingConfig_ = nullptr;};
      inline string getSettingConfig() const { DARABONBA_PTR_GET_DEFAULT(settingConfig_, "") };
      inline SamplingConfig& setSettingConfig(string settingConfig) { DARABONBA_PTR_SET_VALUE(settingConfig_, settingConfig) };


    protected:
      // The name of the metric to be sampled. Valid values:
      // - Count: the number of table rows.
      // - Min: the minimum value of a field.
      // - Max: the maximum value of a field.
      // - Avg: the average value of a field.
      // - DistinctCount: the number of distinct values of a field.
      // - DistinctPercent: the ratio of the number of distinct values of a field to the number of data rows.
      // - DuplicatedCount: the number of duplicate values of a field.
      // - DuplicatedPercent: the ratio of the number of duplicate values of a field to the number of data rows.
      // - TableSize: the size of the table.
      // - NullValueCount: the number of rows in which the field is null.
      // - NullValuePercent: the percentage of rows in which the field is null.
      // - GroupCount: the number of data rows corresponding to each value after the field values are aggregated.
      // - CountNotIn: the number of rows whose values do not match the enumerated values.
      // - CountDistinctNotIn: the number of distinct values that do not match the enumerated values.
      // - UserDefinedSql: sample collection by using custom SQL.
      shared_ptr<string> metric_ {};
      // The parameters required for sample collection.
      shared_ptr<string> metricParameters_ {};
      // The runtime parameter setting statements that are inserted and executed before the sampling statements are executed. The statements can be up to 1,000 characters in length. Only MaxCompute is supported.
      shared_ptr<string> settingConfig_ {};
    };

    class CheckingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CheckingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      CheckingConfig() = default ;
      CheckingConfig(const CheckingConfig &) = default ;
      CheckingConfig(CheckingConfig &&) = default ;
      CheckingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckingConfig() = default ;
      CheckingConfig& operator=(const CheckingConfig &) = default ;
      CheckingConfig& operator=(CheckingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->referencedSamplesFilter_ == nullptr
        && this->type_ == nullptr; };
      // referencedSamplesFilter Field Functions 
      bool hasReferencedSamplesFilter() const { return this->referencedSamplesFilter_ != nullptr;};
      void deleteReferencedSamplesFilter() { this->referencedSamplesFilter_ = nullptr;};
      inline string getReferencedSamplesFilter() const { DARABONBA_PTR_GET_DEFAULT(referencedSamplesFilter_, "") };
      inline CheckingConfig& setReferencedSamplesFilter(string referencedSamplesFilter) { DARABONBA_PTR_SET_VALUE(referencedSamplesFilter_, referencedSamplesFilter) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CheckingConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // For some types of thresholds, you must query reference samples and then aggregate the values of the reference samples to obtain the threshold used for comparison. An expression is used here to indicate the query method of reference samples.
      shared_ptr<string> referencedSamplesFilter_ {};
      // The type of the monitored object. Valid values:
      // 
      // - Table
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && this->code_ == nullptr && this->directoryPath_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->samplingConfig_ == nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const UpdateDataQualityRuleTemplateRequest::CheckingConfig & getCheckingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, UpdateDataQualityRuleTemplateRequest::CheckingConfig) };
    inline UpdateDataQualityRuleTemplateRequest::CheckingConfig getCheckingConfig() { DARABONBA_PTR_GET(checkingConfig_, UpdateDataQualityRuleTemplateRequest::CheckingConfig) };
    inline UpdateDataQualityRuleTemplateRequest& setCheckingConfig(const UpdateDataQualityRuleTemplateRequest::CheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline UpdateDataQualityRuleTemplateRequest& setCheckingConfig(UpdateDataQualityRuleTemplateRequest::CheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateDataQualityRuleTemplateRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directoryPath Field Functions 
    bool hasDirectoryPath() const { return this->directoryPath_ != nullptr;};
    void deleteDirectoryPath() { this->directoryPath_ = nullptr;};
    inline string getDirectoryPath() const { DARABONBA_PTR_GET_DEFAULT(directoryPath_, "") };
    inline UpdateDataQualityRuleTemplateRequest& setDirectoryPath(string directoryPath) { DARABONBA_PTR_SET_VALUE(directoryPath_, directoryPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataQualityRuleTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityRuleTemplateRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const UpdateDataQualityRuleTemplateRequest::SamplingConfig & getSamplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, UpdateDataQualityRuleTemplateRequest::SamplingConfig) };
    inline UpdateDataQualityRuleTemplateRequest::SamplingConfig getSamplingConfig() { DARABONBA_PTR_GET(samplingConfig_, UpdateDataQualityRuleTemplateRequest::SamplingConfig) };
    inline UpdateDataQualityRuleTemplateRequest& setSamplingConfig(const UpdateDataQualityRuleTemplateRequest::SamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline UpdateDataQualityRuleTemplateRequest& setSamplingConfig(UpdateDataQualityRuleTemplateRequest::SamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


  protected:
    // The settings for sample validation.
    shared_ptr<UpdateDataQualityRuleTemplateRequest::CheckingConfig> checkingConfig_ {};
    // The code of the rule template.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The category directory in which the custom template is stored. Levels are separated by forward slashes (/). The name of each level can be up to 1024 characters in length and cannot contain whitespace characters or forward slashes (/).
    shared_ptr<string> directoryPath_ {};
    // The name of the rule template. The name can contain digits, letters, Chinese characters, and half-width and full-width punctuation marks. The name can be up to 512 characters in length.
    shared_ptr<string> name_ {};
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace Management page to obtain the ID.
    // 
    // This parameter specifies the DataWorks workspace used for this API call.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The settings required for sample collection.
    shared_ptr<UpdateDataQualityRuleTemplateRequest::SamplingConfig> samplingConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
