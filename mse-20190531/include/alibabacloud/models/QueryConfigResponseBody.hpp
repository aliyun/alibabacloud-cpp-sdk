// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryConfigResponseBody() = default ;
    QueryConfigResponseBody(const QueryConfigResponseBody &) = default ;
    QueryConfigResponseBody(QueryConfigResponseBody &&) = default ;
    QueryConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConfigResponseBody() = default ;
    QueryConfigResponseBody& operator=(const QueryConfigResponseBody &) = default ;
    QueryConfigResponseBody& operator=(QueryConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthEnabled, authEnabled_);
        DARABONBA_PTR_TO_JSON(AutopurgePurgeInterval, autopurgePurgeInterval_);
        DARABONBA_PTR_TO_JSON(AutopurgeSnapRetainCount, autopurgeSnapRetainCount_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ConfigAuthEnabled, configAuthEnabled_);
        DARABONBA_PTR_TO_JSON(ConfigAuthSupported, configAuthSupported_);
        DARABONBA_PTR_TO_JSON(ConfigContentLimit, configContentLimit_);
        DARABONBA_PTR_TO_JSON(ConfigSecretEnabled, configSecretEnabled_);
        DARABONBA_PTR_TO_JSON(ConfigSecretSupported, configSecretSupported_);
        DARABONBA_PTR_TO_JSON(ConsoleUIEnabled, consoleUIEnabled_);
        DARABONBA_PTR_TO_JSON(Enable4lw, enable4lw_);
        DARABONBA_PTR_TO_JSON(EurekaSupported, eurekaSupported_);
        DARABONBA_PTR_TO_JSON(ExtendedTypesEnable, extendedTypesEnable_);
        DARABONBA_PTR_TO_JSON(InitLimit, initLimit_);
        DARABONBA_PTR_TO_JSON(JuteMaxbuffer, juteMaxbuffer_);
        DARABONBA_PTR_TO_JSON(JvmFlagsCustom, jvmFlagsCustom_);
        DARABONBA_PTR_TO_JSON(MCPEnabled, MCPEnabled_);
        DARABONBA_PTR_TO_JSON(MCPSupported, MCPSupported_);
        DARABONBA_PTR_TO_JSON(MaxClientCnxns, maxClientCnxns_);
        DARABONBA_PTR_TO_JSON(MaxSessionTimeout, maxSessionTimeout_);
        DARABONBA_PTR_TO_JSON(MinSessionTimeout, minSessionTimeout_);
        DARABONBA_PTR_TO_JSON(NacosRunningEnv, nacosRunningEnv_);
        DARABONBA_PTR_TO_JSON(NamingAuthEnabled, namingAuthEnabled_);
        DARABONBA_PTR_TO_JSON(NamingAuthSupported, namingAuthSupported_);
        DARABONBA_PTR_TO_JSON(NamingCreateServiceSupported, namingCreateServiceSupported_);
        DARABONBA_PTR_TO_JSON(OpenSuperAcl, openSuperAcl_);
        DARABONBA_PTR_TO_JSON(PassWord, passWord_);
        DARABONBA_PTR_TO_JSON(PrometheusSdProtocolEnabled, prometheusSdProtocolEnabled_);
        DARABONBA_PTR_TO_JSON(RestartFlag, restartFlag_);
        DARABONBA_PTR_TO_JSON(SnapshotCount, snapshotCount_);
        DARABONBA_PTR_TO_JSON(SyncLimit, syncLimit_);
        DARABONBA_PTR_TO_JSON(TLSEnabled, TLSEnabled_);
        DARABONBA_PTR_TO_JSON(TickTime, tickTime_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthEnabled, authEnabled_);
        DARABONBA_PTR_FROM_JSON(AutopurgePurgeInterval, autopurgePurgeInterval_);
        DARABONBA_PTR_FROM_JSON(AutopurgeSnapRetainCount, autopurgeSnapRetainCount_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ConfigAuthEnabled, configAuthEnabled_);
        DARABONBA_PTR_FROM_JSON(ConfigAuthSupported, configAuthSupported_);
        DARABONBA_PTR_FROM_JSON(ConfigContentLimit, configContentLimit_);
        DARABONBA_PTR_FROM_JSON(ConfigSecretEnabled, configSecretEnabled_);
        DARABONBA_PTR_FROM_JSON(ConfigSecretSupported, configSecretSupported_);
        DARABONBA_PTR_FROM_JSON(ConsoleUIEnabled, consoleUIEnabled_);
        DARABONBA_PTR_FROM_JSON(Enable4lw, enable4lw_);
        DARABONBA_PTR_FROM_JSON(EurekaSupported, eurekaSupported_);
        DARABONBA_PTR_FROM_JSON(ExtendedTypesEnable, extendedTypesEnable_);
        DARABONBA_PTR_FROM_JSON(InitLimit, initLimit_);
        DARABONBA_PTR_FROM_JSON(JuteMaxbuffer, juteMaxbuffer_);
        DARABONBA_PTR_FROM_JSON(JvmFlagsCustom, jvmFlagsCustom_);
        DARABONBA_PTR_FROM_JSON(MCPEnabled, MCPEnabled_);
        DARABONBA_PTR_FROM_JSON(MCPSupported, MCPSupported_);
        DARABONBA_PTR_FROM_JSON(MaxClientCnxns, maxClientCnxns_);
        DARABONBA_PTR_FROM_JSON(MaxSessionTimeout, maxSessionTimeout_);
        DARABONBA_PTR_FROM_JSON(MinSessionTimeout, minSessionTimeout_);
        DARABONBA_PTR_FROM_JSON(NacosRunningEnv, nacosRunningEnv_);
        DARABONBA_PTR_FROM_JSON(NamingAuthEnabled, namingAuthEnabled_);
        DARABONBA_PTR_FROM_JSON(NamingAuthSupported, namingAuthSupported_);
        DARABONBA_PTR_FROM_JSON(NamingCreateServiceSupported, namingCreateServiceSupported_);
        DARABONBA_PTR_FROM_JSON(OpenSuperAcl, openSuperAcl_);
        DARABONBA_PTR_FROM_JSON(PassWord, passWord_);
        DARABONBA_PTR_FROM_JSON(PrometheusSdProtocolEnabled, prometheusSdProtocolEnabled_);
        DARABONBA_PTR_FROM_JSON(RestartFlag, restartFlag_);
        DARABONBA_PTR_FROM_JSON(SnapshotCount, snapshotCount_);
        DARABONBA_PTR_FROM_JSON(SyncLimit, syncLimit_);
        DARABONBA_PTR_FROM_JSON(TLSEnabled, TLSEnabled_);
        DARABONBA_PTR_FROM_JSON(TickTime, tickTime_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
      class NacosRunningEnv : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NacosRunningEnv& obj) { 
          DARABONBA_PTR_TO_JSON(emptyProtect, emptyProtect_);
          DARABONBA_PTR_TO_JSON(fenceEnabled, fenceEnabled_);
          DARABONBA_PTR_TO_JSON(fencePolicy, fencePolicy_);
          DARABONBA_PTR_TO_JSON(grayAuth, grayAuth_);
        };
        friend void from_json(const Darabonba::Json& j, NacosRunningEnv& obj) { 
          DARABONBA_PTR_FROM_JSON(emptyProtect, emptyProtect_);
          DARABONBA_PTR_FROM_JSON(fenceEnabled, fenceEnabled_);
          DARABONBA_PTR_FROM_JSON(fencePolicy, fencePolicy_);
          DARABONBA_PTR_FROM_JSON(grayAuth, grayAuth_);
        };
        NacosRunningEnv() = default ;
        NacosRunningEnv(const NacosRunningEnv &) = default ;
        NacosRunningEnv(NacosRunningEnv &&) = default ;
        NacosRunningEnv(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NacosRunningEnv() = default ;
        NacosRunningEnv& operator=(const NacosRunningEnv &) = default ;
        NacosRunningEnv& operator=(NacosRunningEnv &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FencePolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FencePolicy& obj) { 
            DARABONBA_PTR_TO_JSON(enabledModules, enabledModules_);
            DARABONBA_PTR_TO_JSON(interceptPolicy, interceptPolicy_);
            DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
          };
          friend void from_json(const Darabonba::Json& j, FencePolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(enabledModules, enabledModules_);
            DARABONBA_PTR_FROM_JSON(interceptPolicy, interceptPolicy_);
            DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
          };
          FencePolicy() = default ;
          FencePolicy(const FencePolicy &) = default ;
          FencePolicy(FencePolicy &&) = default ;
          FencePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FencePolicy() = default ;
          FencePolicy& operator=(const FencePolicy &) = default ;
          FencePolicy& operator=(FencePolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enabledModules_ == nullptr
        && this->interceptPolicy_ == nullptr && this->serviceName_ == nullptr; };
          // enabledModules Field Functions 
          bool hasEnabledModules() const { return this->enabledModules_ != nullptr;};
          void deleteEnabledModules() { this->enabledModules_ = nullptr;};
          inline const vector<string> & getEnabledModules() const { DARABONBA_PTR_GET_CONST(enabledModules_, vector<string>) };
          inline vector<string> getEnabledModules() { DARABONBA_PTR_GET(enabledModules_, vector<string>) };
          inline FencePolicy& setEnabledModules(const vector<string> & enabledModules) { DARABONBA_PTR_SET_VALUE(enabledModules_, enabledModules) };
          inline FencePolicy& setEnabledModules(vector<string> && enabledModules) { DARABONBA_PTR_SET_RVALUE(enabledModules_, enabledModules) };


          // interceptPolicy Field Functions 
          bool hasInterceptPolicy() const { return this->interceptPolicy_ != nullptr;};
          void deleteInterceptPolicy() { this->interceptPolicy_ = nullptr;};
          inline const map<string, string> & getInterceptPolicy() const { DARABONBA_PTR_GET_CONST(interceptPolicy_, map<string, string>) };
          inline map<string, string> getInterceptPolicy() { DARABONBA_PTR_GET(interceptPolicy_, map<string, string>) };
          inline FencePolicy& setInterceptPolicy(const map<string, string> & interceptPolicy) { DARABONBA_PTR_SET_VALUE(interceptPolicy_, interceptPolicy) };
          inline FencePolicy& setInterceptPolicy(map<string, string> && interceptPolicy) { DARABONBA_PTR_SET_RVALUE(interceptPolicy_, interceptPolicy) };


          // serviceName Field Functions 
          bool hasServiceName() const { return this->serviceName_ != nullptr;};
          void deleteServiceName() { this->serviceName_ = nullptr;};
          inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
          inline FencePolicy& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        protected:
          shared_ptr<vector<string>> enabledModules_ {};
          shared_ptr<map<string, string>> interceptPolicy_ {};
          shared_ptr<string> serviceName_ {};
        };

        virtual bool empty() const override { return this->emptyProtect_ == nullptr
        && this->fenceEnabled_ == nullptr && this->fencePolicy_ == nullptr && this->grayAuth_ == nullptr; };
        // emptyProtect Field Functions 
        bool hasEmptyProtect() const { return this->emptyProtect_ != nullptr;};
        void deleteEmptyProtect() { this->emptyProtect_ = nullptr;};
        inline bool getEmptyProtect() const { DARABONBA_PTR_GET_DEFAULT(emptyProtect_, false) };
        inline NacosRunningEnv& setEmptyProtect(bool emptyProtect) { DARABONBA_PTR_SET_VALUE(emptyProtect_, emptyProtect) };


        // fenceEnabled Field Functions 
        bool hasFenceEnabled() const { return this->fenceEnabled_ != nullptr;};
        void deleteFenceEnabled() { this->fenceEnabled_ = nullptr;};
        inline bool getFenceEnabled() const { DARABONBA_PTR_GET_DEFAULT(fenceEnabled_, false) };
        inline NacosRunningEnv& setFenceEnabled(bool fenceEnabled) { DARABONBA_PTR_SET_VALUE(fenceEnabled_, fenceEnabled) };


        // fencePolicy Field Functions 
        bool hasFencePolicy() const { return this->fencePolicy_ != nullptr;};
        void deleteFencePolicy() { this->fencePolicy_ = nullptr;};
        inline const NacosRunningEnv::FencePolicy & getFencePolicy() const { DARABONBA_PTR_GET_CONST(fencePolicy_, NacosRunningEnv::FencePolicy) };
        inline NacosRunningEnv::FencePolicy getFencePolicy() { DARABONBA_PTR_GET(fencePolicy_, NacosRunningEnv::FencePolicy) };
        inline NacosRunningEnv& setFencePolicy(const NacosRunningEnv::FencePolicy & fencePolicy) { DARABONBA_PTR_SET_VALUE(fencePolicy_, fencePolicy) };
        inline NacosRunningEnv& setFencePolicy(NacosRunningEnv::FencePolicy && fencePolicy) { DARABONBA_PTR_SET_RVALUE(fencePolicy_, fencePolicy) };


        // grayAuth Field Functions 
        bool hasGrayAuth() const { return this->grayAuth_ != nullptr;};
        void deleteGrayAuth() { this->grayAuth_ = nullptr;};
        inline string getGrayAuth() const { DARABONBA_PTR_GET_DEFAULT(grayAuth_, "") };
        inline NacosRunningEnv& setGrayAuth(string grayAuth) { DARABONBA_PTR_SET_VALUE(grayAuth_, grayAuth) };


      protected:
        // Indicates whether empty list protection is enabled.
        shared_ptr<bool> emptyProtect_ {};
        shared_ptr<bool> fenceEnabled_ {};
        shared_ptr<NacosRunningEnv::FencePolicy> fencePolicy_ {};
        shared_ptr<string> grayAuth_ {};
      };

      virtual bool empty() const override { return this->authEnabled_ == nullptr
        && this->autopurgePurgeInterval_ == nullptr && this->autopurgeSnapRetainCount_ == nullptr && this->clusterName_ == nullptr && this->configAuthEnabled_ == nullptr && this->configAuthSupported_ == nullptr
        && this->configContentLimit_ == nullptr && this->configSecretEnabled_ == nullptr && this->configSecretSupported_ == nullptr && this->consoleUIEnabled_ == nullptr && this->enable4lw_ == nullptr
        && this->eurekaSupported_ == nullptr && this->extendedTypesEnable_ == nullptr && this->initLimit_ == nullptr && this->juteMaxbuffer_ == nullptr && this->jvmFlagsCustom_ == nullptr
        && this->MCPEnabled_ == nullptr && this->MCPSupported_ == nullptr && this->maxClientCnxns_ == nullptr && this->maxSessionTimeout_ == nullptr && this->minSessionTimeout_ == nullptr
        && this->nacosRunningEnv_ == nullptr && this->namingAuthEnabled_ == nullptr && this->namingAuthSupported_ == nullptr && this->namingCreateServiceSupported_ == nullptr && this->openSuperAcl_ == nullptr
        && this->passWord_ == nullptr && this->prometheusSdProtocolEnabled_ == nullptr && this->restartFlag_ == nullptr && this->snapshotCount_ == nullptr && this->syncLimit_ == nullptr
        && this->TLSEnabled_ == nullptr && this->tickTime_ == nullptr && this->userName_ == nullptr; };
      // authEnabled Field Functions 
      bool hasAuthEnabled() const { return this->authEnabled_ != nullptr;};
      void deleteAuthEnabled() { this->authEnabled_ = nullptr;};
      inline bool getAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(authEnabled_, false) };
      inline Data& setAuthEnabled(bool authEnabled) { DARABONBA_PTR_SET_VALUE(authEnabled_, authEnabled) };


      // autopurgePurgeInterval Field Functions 
      bool hasAutopurgePurgeInterval() const { return this->autopurgePurgeInterval_ != nullptr;};
      void deleteAutopurgePurgeInterval() { this->autopurgePurgeInterval_ = nullptr;};
      inline string getAutopurgePurgeInterval() const { DARABONBA_PTR_GET_DEFAULT(autopurgePurgeInterval_, "") };
      inline Data& setAutopurgePurgeInterval(string autopurgePurgeInterval) { DARABONBA_PTR_SET_VALUE(autopurgePurgeInterval_, autopurgePurgeInterval) };


      // autopurgeSnapRetainCount Field Functions 
      bool hasAutopurgeSnapRetainCount() const { return this->autopurgeSnapRetainCount_ != nullptr;};
      void deleteAutopurgeSnapRetainCount() { this->autopurgeSnapRetainCount_ = nullptr;};
      inline string getAutopurgeSnapRetainCount() const { DARABONBA_PTR_GET_DEFAULT(autopurgeSnapRetainCount_, "") };
      inline Data& setAutopurgeSnapRetainCount(string autopurgeSnapRetainCount) { DARABONBA_PTR_SET_VALUE(autopurgeSnapRetainCount_, autopurgeSnapRetainCount) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // configAuthEnabled Field Functions 
      bool hasConfigAuthEnabled() const { return this->configAuthEnabled_ != nullptr;};
      void deleteConfigAuthEnabled() { this->configAuthEnabled_ = nullptr;};
      inline bool getConfigAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(configAuthEnabled_, false) };
      inline Data& setConfigAuthEnabled(bool configAuthEnabled) { DARABONBA_PTR_SET_VALUE(configAuthEnabled_, configAuthEnabled) };


      // configAuthSupported Field Functions 
      bool hasConfigAuthSupported() const { return this->configAuthSupported_ != nullptr;};
      void deleteConfigAuthSupported() { this->configAuthSupported_ = nullptr;};
      inline bool getConfigAuthSupported() const { DARABONBA_PTR_GET_DEFAULT(configAuthSupported_, false) };
      inline Data& setConfigAuthSupported(bool configAuthSupported) { DARABONBA_PTR_SET_VALUE(configAuthSupported_, configAuthSupported) };


      // configContentLimit Field Functions 
      bool hasConfigContentLimit() const { return this->configContentLimit_ != nullptr;};
      void deleteConfigContentLimit() { this->configContentLimit_ = nullptr;};
      inline int64_t getConfigContentLimit() const { DARABONBA_PTR_GET_DEFAULT(configContentLimit_, 0L) };
      inline Data& setConfigContentLimit(int64_t configContentLimit) { DARABONBA_PTR_SET_VALUE(configContentLimit_, configContentLimit) };


      // configSecretEnabled Field Functions 
      bool hasConfigSecretEnabled() const { return this->configSecretEnabled_ != nullptr;};
      void deleteConfigSecretEnabled() { this->configSecretEnabled_ = nullptr;};
      inline bool getConfigSecretEnabled() const { DARABONBA_PTR_GET_DEFAULT(configSecretEnabled_, false) };
      inline Data& setConfigSecretEnabled(bool configSecretEnabled) { DARABONBA_PTR_SET_VALUE(configSecretEnabled_, configSecretEnabled) };


      // configSecretSupported Field Functions 
      bool hasConfigSecretSupported() const { return this->configSecretSupported_ != nullptr;};
      void deleteConfigSecretSupported() { this->configSecretSupported_ = nullptr;};
      inline bool getConfigSecretSupported() const { DARABONBA_PTR_GET_DEFAULT(configSecretSupported_, false) };
      inline Data& setConfigSecretSupported(bool configSecretSupported) { DARABONBA_PTR_SET_VALUE(configSecretSupported_, configSecretSupported) };


      // consoleUIEnabled Field Functions 
      bool hasConsoleUIEnabled() const { return this->consoleUIEnabled_ != nullptr;};
      void deleteConsoleUIEnabled() { this->consoleUIEnabled_ = nullptr;};
      inline bool getConsoleUIEnabled() const { DARABONBA_PTR_GET_DEFAULT(consoleUIEnabled_, false) };
      inline Data& setConsoleUIEnabled(bool consoleUIEnabled) { DARABONBA_PTR_SET_VALUE(consoleUIEnabled_, consoleUIEnabled) };


      // enable4lw Field Functions 
      bool hasEnable4lw() const { return this->enable4lw_ != nullptr;};
      void deleteEnable4lw() { this->enable4lw_ = nullptr;};
      inline bool getEnable4lw() const { DARABONBA_PTR_GET_DEFAULT(enable4lw_, false) };
      inline Data& setEnable4lw(bool enable4lw) { DARABONBA_PTR_SET_VALUE(enable4lw_, enable4lw) };


      // eurekaSupported Field Functions 
      bool hasEurekaSupported() const { return this->eurekaSupported_ != nullptr;};
      void deleteEurekaSupported() { this->eurekaSupported_ = nullptr;};
      inline bool getEurekaSupported() const { DARABONBA_PTR_GET_DEFAULT(eurekaSupported_, false) };
      inline Data& setEurekaSupported(bool eurekaSupported) { DARABONBA_PTR_SET_VALUE(eurekaSupported_, eurekaSupported) };


      // extendedTypesEnable Field Functions 
      bool hasExtendedTypesEnable() const { return this->extendedTypesEnable_ != nullptr;};
      void deleteExtendedTypesEnable() { this->extendedTypesEnable_ = nullptr;};
      inline bool getExtendedTypesEnable() const { DARABONBA_PTR_GET_DEFAULT(extendedTypesEnable_, false) };
      inline Data& setExtendedTypesEnable(bool extendedTypesEnable) { DARABONBA_PTR_SET_VALUE(extendedTypesEnable_, extendedTypesEnable) };


      // initLimit Field Functions 
      bool hasInitLimit() const { return this->initLimit_ != nullptr;};
      void deleteInitLimit() { this->initLimit_ = nullptr;};
      inline string getInitLimit() const { DARABONBA_PTR_GET_DEFAULT(initLimit_, "") };
      inline Data& setInitLimit(string initLimit) { DARABONBA_PTR_SET_VALUE(initLimit_, initLimit) };


      // juteMaxbuffer Field Functions 
      bool hasJuteMaxbuffer() const { return this->juteMaxbuffer_ != nullptr;};
      void deleteJuteMaxbuffer() { this->juteMaxbuffer_ = nullptr;};
      inline string getJuteMaxbuffer() const { DARABONBA_PTR_GET_DEFAULT(juteMaxbuffer_, "") };
      inline Data& setJuteMaxbuffer(string juteMaxbuffer) { DARABONBA_PTR_SET_VALUE(juteMaxbuffer_, juteMaxbuffer) };


      // jvmFlagsCustom Field Functions 
      bool hasJvmFlagsCustom() const { return this->jvmFlagsCustom_ != nullptr;};
      void deleteJvmFlagsCustom() { this->jvmFlagsCustom_ = nullptr;};
      inline string getJvmFlagsCustom() const { DARABONBA_PTR_GET_DEFAULT(jvmFlagsCustom_, "") };
      inline Data& setJvmFlagsCustom(string jvmFlagsCustom) { DARABONBA_PTR_SET_VALUE(jvmFlagsCustom_, jvmFlagsCustom) };


      // MCPEnabled Field Functions 
      bool hasMCPEnabled() const { return this->MCPEnabled_ != nullptr;};
      void deleteMCPEnabled() { this->MCPEnabled_ = nullptr;};
      inline bool getMCPEnabled() const { DARABONBA_PTR_GET_DEFAULT(MCPEnabled_, false) };
      inline Data& setMCPEnabled(bool MCPEnabled) { DARABONBA_PTR_SET_VALUE(MCPEnabled_, MCPEnabled) };


      // MCPSupported Field Functions 
      bool hasMCPSupported() const { return this->MCPSupported_ != nullptr;};
      void deleteMCPSupported() { this->MCPSupported_ = nullptr;};
      inline bool getMCPSupported() const { DARABONBA_PTR_GET_DEFAULT(MCPSupported_, false) };
      inline Data& setMCPSupported(bool MCPSupported) { DARABONBA_PTR_SET_VALUE(MCPSupported_, MCPSupported) };


      // maxClientCnxns Field Functions 
      bool hasMaxClientCnxns() const { return this->maxClientCnxns_ != nullptr;};
      void deleteMaxClientCnxns() { this->maxClientCnxns_ = nullptr;};
      inline string getMaxClientCnxns() const { DARABONBA_PTR_GET_DEFAULT(maxClientCnxns_, "") };
      inline Data& setMaxClientCnxns(string maxClientCnxns) { DARABONBA_PTR_SET_VALUE(maxClientCnxns_, maxClientCnxns) };


      // maxSessionTimeout Field Functions 
      bool hasMaxSessionTimeout() const { return this->maxSessionTimeout_ != nullptr;};
      void deleteMaxSessionTimeout() { this->maxSessionTimeout_ = nullptr;};
      inline string getMaxSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(maxSessionTimeout_, "") };
      inline Data& setMaxSessionTimeout(string maxSessionTimeout) { DARABONBA_PTR_SET_VALUE(maxSessionTimeout_, maxSessionTimeout) };


      // minSessionTimeout Field Functions 
      bool hasMinSessionTimeout() const { return this->minSessionTimeout_ != nullptr;};
      void deleteMinSessionTimeout() { this->minSessionTimeout_ = nullptr;};
      inline string getMinSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(minSessionTimeout_, "") };
      inline Data& setMinSessionTimeout(string minSessionTimeout) { DARABONBA_PTR_SET_VALUE(minSessionTimeout_, minSessionTimeout) };


      // nacosRunningEnv Field Functions 
      bool hasNacosRunningEnv() const { return this->nacosRunningEnv_ != nullptr;};
      void deleteNacosRunningEnv() { this->nacosRunningEnv_ = nullptr;};
      inline const Data::NacosRunningEnv & getNacosRunningEnv() const { DARABONBA_PTR_GET_CONST(nacosRunningEnv_, Data::NacosRunningEnv) };
      inline Data::NacosRunningEnv getNacosRunningEnv() { DARABONBA_PTR_GET(nacosRunningEnv_, Data::NacosRunningEnv) };
      inline Data& setNacosRunningEnv(const Data::NacosRunningEnv & nacosRunningEnv) { DARABONBA_PTR_SET_VALUE(nacosRunningEnv_, nacosRunningEnv) };
      inline Data& setNacosRunningEnv(Data::NacosRunningEnv && nacosRunningEnv) { DARABONBA_PTR_SET_RVALUE(nacosRunningEnv_, nacosRunningEnv) };


      // namingAuthEnabled Field Functions 
      bool hasNamingAuthEnabled() const { return this->namingAuthEnabled_ != nullptr;};
      void deleteNamingAuthEnabled() { this->namingAuthEnabled_ = nullptr;};
      inline bool getNamingAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(namingAuthEnabled_, false) };
      inline Data& setNamingAuthEnabled(bool namingAuthEnabled) { DARABONBA_PTR_SET_VALUE(namingAuthEnabled_, namingAuthEnabled) };


      // namingAuthSupported Field Functions 
      bool hasNamingAuthSupported() const { return this->namingAuthSupported_ != nullptr;};
      void deleteNamingAuthSupported() { this->namingAuthSupported_ = nullptr;};
      inline bool getNamingAuthSupported() const { DARABONBA_PTR_GET_DEFAULT(namingAuthSupported_, false) };
      inline Data& setNamingAuthSupported(bool namingAuthSupported) { DARABONBA_PTR_SET_VALUE(namingAuthSupported_, namingAuthSupported) };


      // namingCreateServiceSupported Field Functions 
      bool hasNamingCreateServiceSupported() const { return this->namingCreateServiceSupported_ != nullptr;};
      void deleteNamingCreateServiceSupported() { this->namingCreateServiceSupported_ = nullptr;};
      inline bool getNamingCreateServiceSupported() const { DARABONBA_PTR_GET_DEFAULT(namingCreateServiceSupported_, false) };
      inline Data& setNamingCreateServiceSupported(bool namingCreateServiceSupported) { DARABONBA_PTR_SET_VALUE(namingCreateServiceSupported_, namingCreateServiceSupported) };


      // openSuperAcl Field Functions 
      bool hasOpenSuperAcl() const { return this->openSuperAcl_ != nullptr;};
      void deleteOpenSuperAcl() { this->openSuperAcl_ = nullptr;};
      inline bool getOpenSuperAcl() const { DARABONBA_PTR_GET_DEFAULT(openSuperAcl_, false) };
      inline Data& setOpenSuperAcl(bool openSuperAcl) { DARABONBA_PTR_SET_VALUE(openSuperAcl_, openSuperAcl) };


      // passWord Field Functions 
      bool hasPassWord() const { return this->passWord_ != nullptr;};
      void deletePassWord() { this->passWord_ = nullptr;};
      inline string getPassWord() const { DARABONBA_PTR_GET_DEFAULT(passWord_, "") };
      inline Data& setPassWord(string passWord) { DARABONBA_PTR_SET_VALUE(passWord_, passWord) };


      // prometheusSdProtocolEnabled Field Functions 
      bool hasPrometheusSdProtocolEnabled() const { return this->prometheusSdProtocolEnabled_ != nullptr;};
      void deletePrometheusSdProtocolEnabled() { this->prometheusSdProtocolEnabled_ = nullptr;};
      inline string getPrometheusSdProtocolEnabled() const { DARABONBA_PTR_GET_DEFAULT(prometheusSdProtocolEnabled_, "") };
      inline Data& setPrometheusSdProtocolEnabled(string prometheusSdProtocolEnabled) { DARABONBA_PTR_SET_VALUE(prometheusSdProtocolEnabled_, prometheusSdProtocolEnabled) };


      // restartFlag Field Functions 
      bool hasRestartFlag() const { return this->restartFlag_ != nullptr;};
      void deleteRestartFlag() { this->restartFlag_ = nullptr;};
      inline bool getRestartFlag() const { DARABONBA_PTR_GET_DEFAULT(restartFlag_, false) };
      inline Data& setRestartFlag(bool restartFlag) { DARABONBA_PTR_SET_VALUE(restartFlag_, restartFlag) };


      // snapshotCount Field Functions 
      bool hasSnapshotCount() const { return this->snapshotCount_ != nullptr;};
      void deleteSnapshotCount() { this->snapshotCount_ = nullptr;};
      inline string getSnapshotCount() const { DARABONBA_PTR_GET_DEFAULT(snapshotCount_, "") };
      inline Data& setSnapshotCount(string snapshotCount) { DARABONBA_PTR_SET_VALUE(snapshotCount_, snapshotCount) };


      // syncLimit Field Functions 
      bool hasSyncLimit() const { return this->syncLimit_ != nullptr;};
      void deleteSyncLimit() { this->syncLimit_ = nullptr;};
      inline string getSyncLimit() const { DARABONBA_PTR_GET_DEFAULT(syncLimit_, "") };
      inline Data& setSyncLimit(string syncLimit) { DARABONBA_PTR_SET_VALUE(syncLimit_, syncLimit) };


      // TLSEnabled Field Functions 
      bool hasTLSEnabled() const { return this->TLSEnabled_ != nullptr;};
      void deleteTLSEnabled() { this->TLSEnabled_ = nullptr;};
      inline bool getTLSEnabled() const { DARABONBA_PTR_GET_DEFAULT(TLSEnabled_, false) };
      inline Data& setTLSEnabled(bool TLSEnabled) { DARABONBA_PTR_SET_VALUE(TLSEnabled_, TLSEnabled) };


      // tickTime Field Functions 
      bool hasTickTime() const { return this->tickTime_ != nullptr;};
      void deleteTickTime() { this->tickTime_ = nullptr;};
      inline string getTickTime() const { DARABONBA_PTR_GET_DEFAULT(tickTime_, "") };
      inline Data& setTickTime(string tickTime) { DARABONBA_PTR_SET_VALUE(tickTime_, tickTime) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Data& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // Indicates whether Simple Authentication and Security Layer (SASL) forced identity authentication is enabled for the ZooKeeper instance.
      shared_ptr<bool> authEnabled_ {};
      // A reserved parameter.
      shared_ptr<string> autopurgePurgeInterval_ {};
      // A reserved parameter.
      shared_ptr<string> autopurgeSnapRetainCount_ {};
      // The name of the instance.
      shared_ptr<string> clusterName_ {};
      // Indicates whether RAM authentication of a configuration center is enabled. This parameter is valid for Nacos instances. Valid values:
      // 
      // *   `true`: enabled.
      // *   `false`: disabled.
      shared_ptr<bool> configAuthEnabled_ {};
      // Indicates whether RAM authentication is supported by a configuration center of the instance. This parameter is valid for Nacos instances. Valid values:
      // 
      // *   `true`: supported.
      // *   `false`: not supported.
      shared_ptr<bool> configAuthSupported_ {};
      // The maximum size of contents in a configuration. Unit: KB.
      shared_ptr<int64_t> configContentLimit_ {};
      // Indicates whether configuration encryption of a configuration center is enabled by the instance. This parameter is valid for Nacos instances. Valid values:
      // 
      // *   `true`: enabled.
      // *   `false`: disabled.
      shared_ptr<bool> configSecretEnabled_ {};
      // Indicates whether configuration encryption of a configuration center is supported by the instance. This parameter is valid for Nacos instances. Valid values:
      // 
      // *   `true`: supported.
      // *   `false`: not supported.
      shared_ptr<bool> configSecretSupported_ {};
      // Indicates whether the Nacos open source console is enabled.
      shared_ptr<bool> consoleUIEnabled_ {};
      shared_ptr<bool> enable4lw_ {};
      // Indicates whether access port 8761 was enabled for Eureka. If this port is disabled, applications cannot use the Eureka protocol for service registration and discovery.
      shared_ptr<bool> eurekaSupported_ {};
      // Indicates whether the time to live (TTL) configuration is enabled. This parameter is valid for ZooKeeper instances.
      shared_ptr<bool> extendedTypesEnable_ {};
      // The maximum connection duration of the instance. Unit: seconds. This parameter is valid for ZooKeeper instances.
      shared_ptr<string> initLimit_ {};
      // The maximum amount of data on each node. This parameter is valid for ZooKeeper instances. Unit: bytes.
      shared_ptr<string> juteMaxbuffer_ {};
      // A reserved parameter.
      shared_ptr<string> jvmFlagsCustom_ {};
      // Indicates whether Mesh Configuration Protocol (MCP) is enabled. This parameter is valid for Nacos instances. Valid values:
      // 
      // *   `true`: enabled.
      // *   `false`: disabled.
      shared_ptr<bool> MCPEnabled_ {};
      // Indicates whether MCP is supported. This parameter is valid for Nacos instances. Valid values:
      // 
      // *   `true`: supported.
      // *   `false`: not supported.
      shared_ptr<bool> MCPSupported_ {};
      // The number of connections between a client and a server. This parameter is valid for ZooKeeper instances.\\
      // If this parameter is set to 0, no limits are imposed on the number of connections.
      shared_ptr<string> maxClientCnxns_ {};
      // The maximum timeout period. This parameter is valid for ZooKeeper instances.
      shared_ptr<string> maxSessionTimeout_ {};
      // The minimum timeout period. This parameter is valid for ZooKeeper instances.
      shared_ptr<string> minSessionTimeout_ {};
      // The runtime configuration of the Nacos instance.
      shared_ptr<Data::NacosRunningEnv> nacosRunningEnv_ {};
      // Indicates whether RAM authentication of a registry is enabled. This parameter is valid for Nacos instances. Valid values:
      // 
      // *   `true`: enabled.
      // *   `false`: disabled.
      shared_ptr<bool> namingAuthEnabled_ {};
      // Indicates whether RAM authentication of services is supported by the instance. This parameter is valid for Nacos instances. Valid values:
      // 
      // *   `true`: supported.
      // *   `false`: not supported.
      shared_ptr<bool> namingAuthSupported_ {};
      // Indicates whether service creation is supported for the instance. This parameter is valid for Nacos instances. Valid values:
      // 
      // *   `true`: supported.
      // *   `false`: not supported.
      shared_ptr<bool> namingCreateServiceSupported_ {};
      // Indicates whether super permissions are enabled. This parameter is valid for ZooKeeper instances. Valid values:
      // 
      // *   `true`: enabled.
      // *   `false`: disabled.
      shared_ptr<bool> openSuperAcl_ {};
      // The password that corresponds to the username. This parameter is valid only if OpenSuperAcl is set to true.
      shared_ptr<string> passWord_ {};
      shared_ptr<string> prometheusSdProtocolEnabled_ {};
      // Indicates whether the instance was restarted and new configurations have taken effect. Valid values:
      // 
      // *   `true`: The restart was successful.
      // *   `false`: The restart failed.
      shared_ptr<bool> restartFlag_ {};
      // The frequency for generating snapshots. This parameter is valid for ZooKeeper instances.
      shared_ptr<string> snapshotCount_ {};
      // The connection timeout period of the instance. This parameter is valid for ZooKeeper instances. Unit: seconds.
      shared_ptr<string> syncLimit_ {};
      // MSE Nacos supports TLS transmission link encryption since version 2.1.2.1. Nacos clients must be upgraded to version 2.2.1 or later. After TLS is enabled, the system performance will decrease by about 10%. You must evaluate the system capacity. For more information about the relevant operations, see Nacos TLS transmission encryption.
      shared_ptr<bool> TLSEnabled_ {};
      // The time unit of the engine. This parameter is valid for ZooKeeper instances. Default value: 2000. Unit: milliseconds.
      shared_ptr<string> tickTime_ {};
      // The username of the user. This parameter is valid only if OpenSuperAcl is set to true.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryConfigResponseBody::Data) };
    inline QueryConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryConfigResponseBody::Data) };
    inline QueryConfigResponseBody& setData(const QueryConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryConfigResponseBody& setData(QueryConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<QueryConfigResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
