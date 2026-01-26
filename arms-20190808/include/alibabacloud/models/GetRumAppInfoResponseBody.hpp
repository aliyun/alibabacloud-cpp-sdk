// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DataBonreeSDKConfigModuleConfigDefaultConfigValue.hpp>
#include <alibabacloud/models/DataBonreeSDKConfigModuleConfigVersionConfigsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumAppInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumAppInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumAppInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRumAppInfoResponseBody() = default ;
    GetRumAppInfoResponseBody(const GetRumAppInfoResponseBody &) = default ;
    GetRumAppInfoResponseBody(GetRumAppInfoResponseBody &&) = default ;
    GetRumAppInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumAppInfoResponseBody() = default ;
    GetRumAppInfoResponseBody& operator=(const GetRumAppInfoResponseBody &) = default ;
    GetRumAppInfoResponseBody& operator=(GetRumAppInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
        DARABONBA_PTR_TO_JSON(AppGroup, appGroup_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(BackendServiceTraceRegion, backendServiceTraceRegion_);
        DARABONBA_PTR_TO_JSON(BonreeSDKConfig, bonreeSDKConfig_);
        DARABONBA_PTR_TO_JSON(CdnDomain, cdnDomain_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(IsSubscription, isSubscription_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(PackageName, packageName_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ServiceDomainConfigs, serviceDomainConfigs_);
        DARABONBA_PTR_TO_JSON(SlsLogstore, slsLogstore_);
        DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(WebSDKConfigJson, webSDKConfigJson_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
        DARABONBA_PTR_FROM_JSON(AppGroup, appGroup_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(BackendServiceTraceRegion, backendServiceTraceRegion_);
        DARABONBA_PTR_FROM_JSON(BonreeSDKConfig, bonreeSDKConfig_);
        DARABONBA_PTR_FROM_JSON(CdnDomain, cdnDomain_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(IsSubscription, isSubscription_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ServiceDomainConfigs, serviceDomainConfigs_);
        DARABONBA_PTR_FROM_JSON(SlsLogstore, slsLogstore_);
        DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(WebSDKConfigJson, webSDKConfigJson_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class ServiceDomainConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceDomainConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(PropagatorTypes, propagatorTypes_);
          DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
          DARABONBA_PTR_TO_JSON(Tracing, tracing_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceDomainConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(PropagatorTypes, propagatorTypes_);
          DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
          DARABONBA_PTR_FROM_JSON(Tracing, tracing_);
        };
        ServiceDomainConfigs() = default ;
        ServiceDomainConfigs(const ServiceDomainConfigs &) = default ;
        ServiceDomainConfigs(ServiceDomainConfigs &&) = default ;
        ServiceDomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceDomainConfigs() = default ;
        ServiceDomainConfigs& operator=(const ServiceDomainConfigs &) = default ;
        ServiceDomainConfigs& operator=(ServiceDomainConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->domain_ == nullptr && this->propagatorTypes_ == nullptr && this->samplingRate_ == nullptr && this->tracing_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ServiceDomainConfigs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline ServiceDomainConfigs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // propagatorTypes Field Functions 
        bool hasPropagatorTypes() const { return this->propagatorTypes_ != nullptr;};
        void deletePropagatorTypes() { this->propagatorTypes_ = nullptr;};
        inline const vector<string> & getPropagatorTypes() const { DARABONBA_PTR_GET_CONST(propagatorTypes_, vector<string>) };
        inline vector<string> getPropagatorTypes() { DARABONBA_PTR_GET(propagatorTypes_, vector<string>) };
        inline ServiceDomainConfigs& setPropagatorTypes(const vector<string> & propagatorTypes) { DARABONBA_PTR_SET_VALUE(propagatorTypes_, propagatorTypes) };
        inline ServiceDomainConfigs& setPropagatorTypes(vector<string> && propagatorTypes) { DARABONBA_PTR_SET_RVALUE(propagatorTypes_, propagatorTypes) };


        // samplingRate Field Functions 
        bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
        void deleteSamplingRate() { this->samplingRate_ = nullptr;};
        inline int32_t getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0) };
        inline ServiceDomainConfigs& setSamplingRate(int32_t samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


        // tracing Field Functions 
        bool hasTracing() const { return this->tracing_ != nullptr;};
        void deleteTracing() { this->tracing_ = nullptr;};
        inline bool getTracing() const { DARABONBA_PTR_GET_DEFAULT(tracing_, false) };
        inline ServiceDomainConfigs& setTracing(bool tracing) { DARABONBA_PTR_SET_VALUE(tracing_, tracing) };


      protected:
        // The description.
        shared_ptr<string> description_ {};
        // The domain name or IP address.
        shared_ptr<string> domain_ {};
        // The trace propagation protocols. This parameter is required if the tracing analysis feature is enabled.
        shared_ptr<vector<string>> propagatorTypes_ {};
        // The sampling rate of a trace. Valid values: (0, 100].
        shared_ptr<int32_t> samplingRate_ {};
        // Indicates whether the tracing analysis feature is enabled. To enable the tracing analysis feature, you must activate Managed Service for OpenTelemetry. Valid values:
        // 
        // *   `true`: enables the tracing analysis feature. If you enable the tracing analysis feature, related headers are inserted into requests for the domain name.
        // *   `false`: disables the tracing analysis feature.
        shared_ptr<bool> tracing_ {};
      };

      class BonreeSDKConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BonreeSDKConfig& obj) { 
          DARABONBA_PTR_TO_JSON(moduleConfig, moduleConfig_);
          DARABONBA_PTR_TO_JSON(samplingConfig, samplingConfig_);
        };
        friend void from_json(const Darabonba::Json& j, BonreeSDKConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(moduleConfig, moduleConfig_);
          DARABONBA_PTR_FROM_JSON(samplingConfig, samplingConfig_);
        };
        BonreeSDKConfig() = default ;
        BonreeSDKConfig(const BonreeSDKConfig &) = default ;
        BonreeSDKConfig(BonreeSDKConfig &&) = default ;
        BonreeSDKConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BonreeSDKConfig() = default ;
        BonreeSDKConfig& operator=(const BonreeSDKConfig &) = default ;
        BonreeSDKConfig& operator=(BonreeSDKConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SamplingConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SamplingConfig& obj) { 
            DARABONBA_PTR_TO_JSON(samplingRate, samplingRate_);
            DARABONBA_PTR_TO_JSON(samplingType, samplingType_);
          };
          friend void from_json(const Darabonba::Json& j, SamplingConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(samplingRate, samplingRate_);
            DARABONBA_PTR_FROM_JSON(samplingType, samplingType_);
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
          virtual bool empty() const override { return this->samplingRate_ == nullptr
        && this->samplingType_ == nullptr; };
          // samplingRate Field Functions 
          bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
          void deleteSamplingRate() { this->samplingRate_ = nullptr;};
          inline int32_t getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0) };
          inline SamplingConfig& setSamplingRate(int32_t samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


          // samplingType Field Functions 
          bool hasSamplingType() const { return this->samplingType_ != nullptr;};
          void deleteSamplingType() { this->samplingType_ = nullptr;};
          inline int32_t getSamplingType() const { DARABONBA_PTR_GET_DEFAULT(samplingType_, 0) };
          inline SamplingConfig& setSamplingType(int32_t samplingType) { DARABONBA_PTR_SET_VALUE(samplingType_, samplingType) };


        protected:
          // Sampling rate: between (0, 1000], a thousandth.
          shared_ptr<int32_t> samplingRate_ {};
          // Sampling type, currently only session random sampling is supported, that is, fixed transmission: 1.
          shared_ptr<int32_t> samplingType_ {};
        };

        class ModuleConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModuleConfig& obj) { 
            DARABONBA_PTR_TO_JSON(defaultConfig, defaultConfig_);
            DARABONBA_PTR_TO_JSON(enable, enable_);
            DARABONBA_PTR_TO_JSON(versionConfigs, versionConfigs_);
          };
          friend void from_json(const Darabonba::Json& j, ModuleConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(defaultConfig, defaultConfig_);
            DARABONBA_PTR_FROM_JSON(enable, enable_);
            DARABONBA_PTR_FROM_JSON(versionConfigs, versionConfigs_);
          };
          ModuleConfig() = default ;
          ModuleConfig(const ModuleConfig &) = default ;
          ModuleConfig(ModuleConfig &&) = default ;
          ModuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModuleConfig() = default ;
          ModuleConfig& operator=(const ModuleConfig &) = default ;
          ModuleConfig& operator=(ModuleConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->defaultConfig_ == nullptr
        && this->enable_ == nullptr && this->versionConfigs_ == nullptr; };
          // defaultConfig Field Functions 
          bool hasDefaultConfig() const { return this->defaultConfig_ != nullptr;};
          void deleteDefaultConfig() { this->defaultConfig_ = nullptr;};
          inline const map<string, DataBonreeSDKConfigModuleConfigDefaultConfigValue> & getDefaultConfig() const { DARABONBA_PTR_GET_CONST(defaultConfig_, map<string, DataBonreeSDKConfigModuleConfigDefaultConfigValue>) };
          inline map<string, DataBonreeSDKConfigModuleConfigDefaultConfigValue> getDefaultConfig() { DARABONBA_PTR_GET(defaultConfig_, map<string, DataBonreeSDKConfigModuleConfigDefaultConfigValue>) };
          inline ModuleConfig& setDefaultConfig(const map<string, DataBonreeSDKConfigModuleConfigDefaultConfigValue> & defaultConfig) { DARABONBA_PTR_SET_VALUE(defaultConfig_, defaultConfig) };
          inline ModuleConfig& setDefaultConfig(map<string, DataBonreeSDKConfigModuleConfigDefaultConfigValue> && defaultConfig) { DARABONBA_PTR_SET_RVALUE(defaultConfig_, defaultConfig) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline ModuleConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // versionConfigs Field Functions 
          bool hasVersionConfigs() const { return this->versionConfigs_ != nullptr;};
          void deleteVersionConfigs() { this->versionConfigs_ = nullptr;};
          inline const map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValue> & getVersionConfigs() const { DARABONBA_PTR_GET_CONST(versionConfigs_, map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValue>) };
          inline map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValue> getVersionConfigs() { DARABONBA_PTR_GET(versionConfigs_, map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValue>) };
          inline ModuleConfig& setVersionConfigs(const map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValue> & versionConfigs) { DARABONBA_PTR_SET_VALUE(versionConfigs_, versionConfigs) };
          inline ModuleConfig& setVersionConfigs(map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValue> && versionConfigs) { DARABONBA_PTR_SET_RVALUE(versionConfigs_, versionConfigs) };


        protected:
          // The default configuration of the application.
          shared_ptr<map<string, DataBonreeSDKConfigModuleConfigDefaultConfigValue>> defaultConfig_ {};
          // Indicates whether the configuration is enabled.
          shared_ptr<bool> enable_ {};
          // The version configurations of the application.
          shared_ptr<map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValue>> versionConfigs_ {};
        };

        virtual bool empty() const override { return this->moduleConfig_ == nullptr
        && this->samplingConfig_ == nullptr; };
        // moduleConfig Field Functions 
        bool hasModuleConfig() const { return this->moduleConfig_ != nullptr;};
        void deleteModuleConfig() { this->moduleConfig_ = nullptr;};
        inline const BonreeSDKConfig::ModuleConfig & getModuleConfig() const { DARABONBA_PTR_GET_CONST(moduleConfig_, BonreeSDKConfig::ModuleConfig) };
        inline BonreeSDKConfig::ModuleConfig getModuleConfig() { DARABONBA_PTR_GET(moduleConfig_, BonreeSDKConfig::ModuleConfig) };
        inline BonreeSDKConfig& setModuleConfig(const BonreeSDKConfig::ModuleConfig & moduleConfig) { DARABONBA_PTR_SET_VALUE(moduleConfig_, moduleConfig) };
        inline BonreeSDKConfig& setModuleConfig(BonreeSDKConfig::ModuleConfig && moduleConfig) { DARABONBA_PTR_SET_RVALUE(moduleConfig_, moduleConfig) };


        // samplingConfig Field Functions 
        bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
        void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
        inline const BonreeSDKConfig::SamplingConfig & getSamplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, BonreeSDKConfig::SamplingConfig) };
        inline BonreeSDKConfig::SamplingConfig getSamplingConfig() { DARABONBA_PTR_GET(samplingConfig_, BonreeSDKConfig::SamplingConfig) };
        inline BonreeSDKConfig& setSamplingConfig(const BonreeSDKConfig::SamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
        inline BonreeSDKConfig& setSamplingConfig(BonreeSDKConfig::SamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


      protected:
        // The module configuration.
        shared_ptr<BonreeSDKConfig::ModuleConfig> moduleConfig_ {};
        // Sampling configuration.
        shared_ptr<BonreeSDKConfig::SamplingConfig> samplingConfig_ {};
      };

      virtual bool empty() const override { return this->appConfig_ == nullptr
        && this->appGroup_ == nullptr && this->appType_ == nullptr && this->backendServiceTraceRegion_ == nullptr && this->bonreeSDKConfig_ == nullptr && this->cdnDomain_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->endpoint_ == nullptr && this->isSubscription_ == nullptr && this->name_ == nullptr
        && this->nickName_ == nullptr && this->packageName_ == nullptr && this->pid_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->serviceDomainConfigs_ == nullptr && this->slsLogstore_ == nullptr && this->slsProject_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->type_ == nullptr && this->webSDKConfigJson_ == nullptr; };
      // appConfig Field Functions 
      bool hasAppConfig() const { return this->appConfig_ != nullptr;};
      void deleteAppConfig() { this->appConfig_ = nullptr;};
      inline string getAppConfig() const { DARABONBA_PTR_GET_DEFAULT(appConfig_, "") };
      inline Data& setAppConfig(string appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };


      // appGroup Field Functions 
      bool hasAppGroup() const { return this->appGroup_ != nullptr;};
      void deleteAppGroup() { this->appGroup_ = nullptr;};
      inline string getAppGroup() const { DARABONBA_PTR_GET_DEFAULT(appGroup_, "") };
      inline Data& setAppGroup(string appGroup) { DARABONBA_PTR_SET_VALUE(appGroup_, appGroup) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Data& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // backendServiceTraceRegion Field Functions 
      bool hasBackendServiceTraceRegion() const { return this->backendServiceTraceRegion_ != nullptr;};
      void deleteBackendServiceTraceRegion() { this->backendServiceTraceRegion_ = nullptr;};
      inline string getBackendServiceTraceRegion() const { DARABONBA_PTR_GET_DEFAULT(backendServiceTraceRegion_, "") };
      inline Data& setBackendServiceTraceRegion(string backendServiceTraceRegion) { DARABONBA_PTR_SET_VALUE(backendServiceTraceRegion_, backendServiceTraceRegion) };


      // bonreeSDKConfig Field Functions 
      bool hasBonreeSDKConfig() const { return this->bonreeSDKConfig_ != nullptr;};
      void deleteBonreeSDKConfig() { this->bonreeSDKConfig_ = nullptr;};
      inline const Data::BonreeSDKConfig & getBonreeSDKConfig() const { DARABONBA_PTR_GET_CONST(bonreeSDKConfig_, Data::BonreeSDKConfig) };
      inline Data::BonreeSDKConfig getBonreeSDKConfig() { DARABONBA_PTR_GET(bonreeSDKConfig_, Data::BonreeSDKConfig) };
      inline Data& setBonreeSDKConfig(const Data::BonreeSDKConfig & bonreeSDKConfig) { DARABONBA_PTR_SET_VALUE(bonreeSDKConfig_, bonreeSDKConfig) };
      inline Data& setBonreeSDKConfig(Data::BonreeSDKConfig && bonreeSDKConfig) { DARABONBA_PTR_SET_RVALUE(bonreeSDKConfig_, bonreeSDKConfig) };


      // cdnDomain Field Functions 
      bool hasCdnDomain() const { return this->cdnDomain_ != nullptr;};
      void deleteCdnDomain() { this->cdnDomain_ = nullptr;};
      inline string getCdnDomain() const { DARABONBA_PTR_GET_DEFAULT(cdnDomain_, "") };
      inline Data& setCdnDomain(string cdnDomain) { DARABONBA_PTR_SET_VALUE(cdnDomain_, cdnDomain) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // isSubscription Field Functions 
      bool hasIsSubscription() const { return this->isSubscription_ != nullptr;};
      void deleteIsSubscription() { this->isSubscription_ = nullptr;};
      inline string getIsSubscription() const { DARABONBA_PTR_GET_DEFAULT(isSubscription_, "") };
      inline Data& setIsSubscription(string isSubscription) { DARABONBA_PTR_SET_VALUE(isSubscription_, isSubscription) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline Data& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // packageName Field Functions 
      bool hasPackageName() const { return this->packageName_ != nullptr;};
      void deletePackageName() { this->packageName_ = nullptr;};
      inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
      inline Data& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline Data& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // serviceDomainConfigs Field Functions 
      bool hasServiceDomainConfigs() const { return this->serviceDomainConfigs_ != nullptr;};
      void deleteServiceDomainConfigs() { this->serviceDomainConfigs_ = nullptr;};
      inline const vector<Data::ServiceDomainConfigs> & getServiceDomainConfigs() const { DARABONBA_PTR_GET_CONST(serviceDomainConfigs_, vector<Data::ServiceDomainConfigs>) };
      inline vector<Data::ServiceDomainConfigs> getServiceDomainConfigs() { DARABONBA_PTR_GET(serviceDomainConfigs_, vector<Data::ServiceDomainConfigs>) };
      inline Data& setServiceDomainConfigs(const vector<Data::ServiceDomainConfigs> & serviceDomainConfigs) { DARABONBA_PTR_SET_VALUE(serviceDomainConfigs_, serviceDomainConfigs) };
      inline Data& setServiceDomainConfigs(vector<Data::ServiceDomainConfigs> && serviceDomainConfigs) { DARABONBA_PTR_SET_RVALUE(serviceDomainConfigs_, serviceDomainConfigs) };


      // slsLogstore Field Functions 
      bool hasSlsLogstore() const { return this->slsLogstore_ != nullptr;};
      void deleteSlsLogstore() { this->slsLogstore_ = nullptr;};
      inline string getSlsLogstore() const { DARABONBA_PTR_GET_DEFAULT(slsLogstore_, "") };
      inline Data& setSlsLogstore(string slsLogstore) { DARABONBA_PTR_SET_VALUE(slsLogstore_, slsLogstore) };


      // slsProject Field Functions 
      bool hasSlsProject() const { return this->slsProject_ != nullptr;};
      void deleteSlsProject() { this->slsProject_ = nullptr;};
      inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
      inline Data& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // webSDKConfigJson Field Functions 
      bool hasWebSDKConfigJson() const { return this->webSDKConfigJson_ != nullptr;};
      void deleteWebSDKConfigJson() { this->webSDKConfigJson_ = nullptr;};
      inline string getWebSDKConfigJson() const { DARABONBA_PTR_GET_DEFAULT(webSDKConfigJson_, "") };
      inline Data& setWebSDKConfigJson(string webSDKConfigJson) { DARABONBA_PTR_SET_VALUE(webSDKConfigJson_, webSDKConfigJson) };


    protected:
      // The application configurations in the JSON format. This parameter is deprecated.
      shared_ptr<string> appConfig_ {};
      // The group to which the application belongs.
      shared_ptr<string> appGroup_ {};
      // The application type. Valid values: web, miniapp, ios, and android.
      shared_ptr<string> appType_ {};
      // The region where the backend is deployed.
      shared_ptr<string> backendServiceTraceRegion_ {};
      // The collection configurations.
      shared_ptr<Data::BonreeSDKConfig> bonreeSDKConfig_ {};
      // The domain name of the SDK.
      shared_ptr<string> cdnDomain_ {};
      // The time when the application was created. The value is a timestamp. Unit: milliseconds.
      shared_ptr<string> createTime_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The endpoint that is used to report application data.
      shared_ptr<string> endpoint_ {};
      // Indicates whether the application is subscribed. Valid values: true and false.
      shared_ptr<string> isSubscription_ {};
      // The application name.
      shared_ptr<string> name_ {};
      // The alias of the application.
      shared_ptr<string> nickName_ {};
      // The name of the application package.
      shared_ptr<string> packageName_ {};
      // The application ID.
      shared_ptr<string> pid_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The list of service domain configurations. Only mobile applications are supported.
      shared_ptr<vector<Data::ServiceDomainConfigs>> serviceDomainConfigs_ {};
      // The name of the Simple Log Service Logstore that stores application data.
      shared_ptr<string> slsLogstore_ {};
      // The name of the Simple Log Service project that stores application data.
      shared_ptr<string> slsProject_ {};
      // The status of the application. Valid values: created, running, and stopped.
      shared_ptr<string> status_ {};
      // The tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The type of the application. Valid value: RUM.
      shared_ptr<string> type_ {};
      shared_ptr<string> webSDKConfigJson_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetRumAppInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRumAppInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRumAppInfoResponseBody::Data) };
    inline GetRumAppInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRumAppInfoResponseBody::Data) };
    inline GetRumAppInfoResponseBody& setData(const GetRumAppInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRumAppInfoResponseBody& setData(GetRumAppInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetRumAppInfoResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRumAppInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRumAppInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRumAppInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The application details.
    shared_ptr<GetRumAppInfoResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
