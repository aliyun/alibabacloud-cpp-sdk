// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYRULETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYRULETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityRuleTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityRuleTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityRuleTemplate, dataQualityRuleTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityRuleTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityRuleTemplate, dataQualityRuleTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityRuleTemplateResponseBody() = default ;
    GetDataQualityRuleTemplateResponseBody(const GetDataQualityRuleTemplateResponseBody &) = default ;
    GetDataQualityRuleTemplateResponseBody(GetDataQualityRuleTemplateResponseBody &&) = default ;
    GetDataQualityRuleTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityRuleTemplateResponseBody() = default ;
    GetDataQualityRuleTemplateResponseBody& operator=(const GetDataQualityRuleTemplateResponseBody &) = default ;
    GetDataQualityRuleTemplateResponseBody& operator=(GetDataQualityRuleTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataQualityRuleTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataQualityRuleTemplate& obj) { 
        DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DirectoryPath, directoryPath_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
        DARABONBA_PTR_TO_JSON(VisibleScope, visibleScope_);
      };
      friend void from_json(const Darabonba::Json& j, DataQualityRuleTemplate& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DirectoryPath, directoryPath_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
        DARABONBA_PTR_FROM_JSON(VisibleScope, visibleScope_);
      };
      DataQualityRuleTemplate() = default ;
      DataQualityRuleTemplate(const DataQualityRuleTemplate &) = default ;
      DataQualityRuleTemplate(DataQualityRuleTemplate &&) = default ;
      DataQualityRuleTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataQualityRuleTemplate() = default ;
      DataQualityRuleTemplate& operator=(const DataQualityRuleTemplate &) = default ;
      DataQualityRuleTemplate& operator=(DataQualityRuleTemplate &&) = default ;
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
        shared_ptr<string> metric_ {};
        // The parameters required for sampling.
        shared_ptr<string> metricParameters_ {};
        // The statements that are used to configure the parameters required for sampling before you execute the sampling statements. The statements can be up to 1,000 characters in length. Only the MaxCompute database is supported.
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
        // The method that is used to query the referenced samples. To obtain some types of thresholds, you need to query reference samples and perform aggregate operations on the reference values. In this example, an expression is used to indicate the query method of referenced samples.
        shared_ptr<string> referencedSamplesFilter_ {};
        // The threshold calculation method. Valid values:
        // 
        // *   Fixed
        // *   Fluctation
        // *   FluctationDiscreate
        // *   Auto
        // *   Average
        // *   Variance
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && this->code_ == nullptr && this->directoryPath_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->samplingConfig_ == nullptr
        && this->visibleScope_ == nullptr; };
      // checkingConfig Field Functions 
      bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
      void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
      inline const DataQualityRuleTemplate::CheckingConfig & getCheckingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, DataQualityRuleTemplate::CheckingConfig) };
      inline DataQualityRuleTemplate::CheckingConfig getCheckingConfig() { DARABONBA_PTR_GET(checkingConfig_, DataQualityRuleTemplate::CheckingConfig) };
      inline DataQualityRuleTemplate& setCheckingConfig(const DataQualityRuleTemplate::CheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
      inline DataQualityRuleTemplate& setCheckingConfig(DataQualityRuleTemplate::CheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline DataQualityRuleTemplate& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // directoryPath Field Functions 
      bool hasDirectoryPath() const { return this->directoryPath_ != nullptr;};
      void deleteDirectoryPath() { this->directoryPath_ = nullptr;};
      inline string getDirectoryPath() const { DARABONBA_PTR_GET_DEFAULT(directoryPath_, "") };
      inline DataQualityRuleTemplate& setDirectoryPath(string directoryPath) { DARABONBA_PTR_SET_VALUE(directoryPath_, directoryPath) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DataQualityRuleTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline DataQualityRuleTemplate& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // samplingConfig Field Functions 
      bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
      void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
      inline const DataQualityRuleTemplate::SamplingConfig & getSamplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, DataQualityRuleTemplate::SamplingConfig) };
      inline DataQualityRuleTemplate::SamplingConfig getSamplingConfig() { DARABONBA_PTR_GET(samplingConfig_, DataQualityRuleTemplate::SamplingConfig) };
      inline DataQualityRuleTemplate& setSamplingConfig(const DataQualityRuleTemplate::SamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
      inline DataQualityRuleTemplate& setSamplingConfig(DataQualityRuleTemplate::SamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


      // visibleScope Field Functions 
      bool hasVisibleScope() const { return this->visibleScope_ != nullptr;};
      void deleteVisibleScope() { this->visibleScope_ = nullptr;};
      inline string getVisibleScope() const { DARABONBA_PTR_GET_DEFAULT(visibleScope_, "") };
      inline DataQualityRuleTemplate& setVisibleScope(string visibleScope) { DARABONBA_PTR_SET_VALUE(visibleScope_, visibleScope) };


    protected:
      // The check settings for sample data.
      shared_ptr<DataQualityRuleTemplate::CheckingConfig> checkingConfig_ {};
      // The code for the template.
      shared_ptr<string> code_ {};
      // The directory in which the template is stored. Slashes (/) are used to separate directory levels. The name of each directory level can be up to 1,024 characters in length. It cannot contain whitespace characters or slashes (/).
      shared_ptr<string> directoryPath_ {};
      // The name of the template. The name can be up to 512 characters in length and can contain digits, letters, and punctuation marks.
      shared_ptr<string> name_ {};
      // The DataWorks workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The sampling settings.
      shared_ptr<DataQualityRuleTemplate::SamplingConfig> samplingConfig_ {};
      // Available range of templates:
      // - Tenant: all tenants are available
      // - Project: only available in the current Project
      shared_ptr<string> visibleScope_ {};
    };

    virtual bool empty() const override { return this->dataQualityRuleTemplate_ == nullptr
        && this->requestId_ == nullptr; };
    // dataQualityRuleTemplate Field Functions 
    bool hasDataQualityRuleTemplate() const { return this->dataQualityRuleTemplate_ != nullptr;};
    void deleteDataQualityRuleTemplate() { this->dataQualityRuleTemplate_ = nullptr;};
    inline const GetDataQualityRuleTemplateResponseBody::DataQualityRuleTemplate & getDataQualityRuleTemplate() const { DARABONBA_PTR_GET_CONST(dataQualityRuleTemplate_, GetDataQualityRuleTemplateResponseBody::DataQualityRuleTemplate) };
    inline GetDataQualityRuleTemplateResponseBody::DataQualityRuleTemplate getDataQualityRuleTemplate() { DARABONBA_PTR_GET(dataQualityRuleTemplate_, GetDataQualityRuleTemplateResponseBody::DataQualityRuleTemplate) };
    inline GetDataQualityRuleTemplateResponseBody& setDataQualityRuleTemplate(const GetDataQualityRuleTemplateResponseBody::DataQualityRuleTemplate & dataQualityRuleTemplate) { DARABONBA_PTR_SET_VALUE(dataQualityRuleTemplate_, dataQualityRuleTemplate) };
    inline GetDataQualityRuleTemplateResponseBody& setDataQualityRuleTemplate(GetDataQualityRuleTemplateResponseBody::DataQualityRuleTemplate && dataQualityRuleTemplate) { DARABONBA_PTR_SET_RVALUE(dataQualityRuleTemplate_, dataQualityRuleTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityRuleTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the template.
    shared_ptr<GetDataQualityRuleTemplateResponseBody::DataQualityRuleTemplate> dataQualityRuleTemplate_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
