// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityRuleTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityRuleTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_TO_JSON(VisibleScope, visibleScope_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityRuleTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_FROM_JSON(VisibleScope, visibleScope_);
    };
    CreateDataQualityRuleTemplateRequest() = default ;
    CreateDataQualityRuleTemplateRequest(const CreateDataQualityRuleTemplateRequest &) = default ;
    CreateDataQualityRuleTemplateRequest(CreateDataQualityRuleTemplateRequest &&) = default ;
    CreateDataQualityRuleTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityRuleTemplateRequest() = default ;
    CreateDataQualityRuleTemplateRequest& operator=(const CreateDataQualityRuleTemplateRequest &) = default ;
    CreateDataQualityRuleTemplateRequest& operator=(CreateDataQualityRuleTemplateRequest &&) = default ;
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
      // The name of the metric to sample:
      // - Count: number of table rows
      // - Min: minimum field value
      // - Max: maximum field value
      // - Avg: average field value
      // - DistinctCount: number of distinct field values
      // - DistinctPercent: ratio of the number of distinct field values to the number of data rows
      // - DuplicatedCount: number of duplicate field values
      // - DuplicatedPercent: ratio of the number of duplicate field values to the number of data rows
      // - TableSize: table size
      // - NullValueCount: number of rows where the field is null
      // - NullValuePercent: ratio of rows where the field is null
      // - GroupCount: each value and the corresponding number of data rows after aggregating by field value
      // - CountNotIn: number of rows whose enum value does not match
      // - CountDistinctNotIn: number of distinct values whose enum value does not match
      // - UserDefinedSql: sample collection via a custom SQL statement
      shared_ptr<string> metric_ {};
      // The parameters required for sample collection.
      shared_ptr<string> metricParameters_ {};
      // Runtime parameter setting statements to be inserted and executed before the sampling statement is executed. The maximum length is 1000 characters. Currently only MaxCompute is supported.
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
      // Some threshold types require querying reference samples and then aggregating the values of those reference samples to derive the threshold used for comparison. An expression is used here to describe how the reference samples are queried.
      shared_ptr<string> referencedSamplesFilter_ {};
      // The threshold calculation method:
      // - Fixed
      // - Fluctation
      // - FluctationDiscreate
      // - Auto
      // - Average
      // - Variance
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && this->directoryPath_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->samplingConfig_ == nullptr && this->visibleScope_ == nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const CreateDataQualityRuleTemplateRequest::CheckingConfig & getCheckingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, CreateDataQualityRuleTemplateRequest::CheckingConfig) };
    inline CreateDataQualityRuleTemplateRequest::CheckingConfig getCheckingConfig() { DARABONBA_PTR_GET(checkingConfig_, CreateDataQualityRuleTemplateRequest::CheckingConfig) };
    inline CreateDataQualityRuleTemplateRequest& setCheckingConfig(const CreateDataQualityRuleTemplateRequest::CheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline CreateDataQualityRuleTemplateRequest& setCheckingConfig(CreateDataQualityRuleTemplateRequest::CheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // directoryPath Field Functions 
    bool hasDirectoryPath() const { return this->directoryPath_ != nullptr;};
    void deleteDirectoryPath() { this->directoryPath_ = nullptr;};
    inline string getDirectoryPath() const { DARABONBA_PTR_GET_DEFAULT(directoryPath_, "") };
    inline CreateDataQualityRuleTemplateRequest& setDirectoryPath(string directoryPath) { DARABONBA_PTR_SET_VALUE(directoryPath_, directoryPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityRuleTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityRuleTemplateRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const CreateDataQualityRuleTemplateRequest::SamplingConfig & getSamplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, CreateDataQualityRuleTemplateRequest::SamplingConfig) };
    inline CreateDataQualityRuleTemplateRequest::SamplingConfig getSamplingConfig() { DARABONBA_PTR_GET(samplingConfig_, CreateDataQualityRuleTemplateRequest::SamplingConfig) };
    inline CreateDataQualityRuleTemplateRequest& setSamplingConfig(const CreateDataQualityRuleTemplateRequest::SamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline CreateDataQualityRuleTemplateRequest& setSamplingConfig(CreateDataQualityRuleTemplateRequest::SamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


    // visibleScope Field Functions 
    bool hasVisibleScope() const { return this->visibleScope_ != nullptr;};
    void deleteVisibleScope() { this->visibleScope_ = nullptr;};
    inline string getVisibleScope() const { DARABONBA_PTR_GET_DEFAULT(visibleScope_, "") };
    inline CreateDataQualityRuleTemplateRequest& setVisibleScope(string visibleScope) { DARABONBA_PTR_SET_VALUE(visibleScope_, visibleScope) };


  protected:
    // The sample validation settings.
    shared_ptr<CreateDataQualityRuleTemplateRequest::CheckingConfig> checkingConfig_ {};
    // The category directory where the custom template is stored. Hierarchy levels are separated by slashes. Each level name can be up to 1024 characters long and cannot contain whitespace characters or slashes.
    shared_ptr<string> directoryPath_ {};
    // The name of the rule template. It can be a combination of digits, English letters, Chinese characters, and half-width or full-width punctuation marks. The maximum length is 512 characters.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The settings required for sample collection.
    shared_ptr<CreateDataQualityRuleTemplateRequest::SamplingConfig> samplingConfig_ {};
    // The visibility scope of the template:
    // - Tenant: available to the entire tenant
    // - Project: available only in the current project
    shared_ptr<string> visibleScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
