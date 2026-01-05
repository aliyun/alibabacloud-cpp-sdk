// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRULETEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRULETEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityRuleTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityRuleTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(VisibleScope, visibleScope_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityRuleTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
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
      shared_ptr<string> metric_ {};
      shared_ptr<string> metricParameters_ {};
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
      shared_ptr<string> referencedSamplesFilter_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && this->code_ == nullptr && this->directoryPath_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->samplingConfig_ == nullptr
        && this->tenantId_ == nullptr && this->visibleScope_ == nullptr; };
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


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline DataQualityRuleTemplate& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // visibleScope Field Functions 
    bool hasVisibleScope() const { return this->visibleScope_ != nullptr;};
    void deleteVisibleScope() { this->visibleScope_ = nullptr;};
    inline string getVisibleScope() const { DARABONBA_PTR_GET_DEFAULT(visibleScope_, "") };
    inline DataQualityRuleTemplate& setVisibleScope(string visibleScope) { DARABONBA_PTR_SET_VALUE(visibleScope_, visibleScope) };


  protected:
    shared_ptr<DataQualityRuleTemplate::CheckingConfig> checkingConfig_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> directoryPath_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> projectId_ {};
    shared_ptr<DataQualityRuleTemplate::SamplingConfig> samplingConfig_ {};
    shared_ptr<int64_t> tenantId_ {};
    shared_ptr<string> visibleScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
