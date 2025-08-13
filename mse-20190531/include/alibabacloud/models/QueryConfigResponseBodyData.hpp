// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryConfigResponseBodyDataNacosRunningEnv.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConfigResponseBodyData& obj) { 
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
      DARABONBA_PTR_TO_JSON(RestartFlag, restartFlag_);
      DARABONBA_PTR_TO_JSON(SnapshotCount, snapshotCount_);
      DARABONBA_PTR_TO_JSON(SyncLimit, syncLimit_);
      DARABONBA_PTR_TO_JSON(TLSEnabled, TLSEnabled_);
      DARABONBA_PTR_TO_JSON(TickTime, tickTime_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConfigResponseBodyData& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RestartFlag, restartFlag_);
      DARABONBA_PTR_FROM_JSON(SnapshotCount, snapshotCount_);
      DARABONBA_PTR_FROM_JSON(SyncLimit, syncLimit_);
      DARABONBA_PTR_FROM_JSON(TLSEnabled, TLSEnabled_);
      DARABONBA_PTR_FROM_JSON(TickTime, tickTime_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    QueryConfigResponseBodyData() = default ;
    QueryConfigResponseBodyData(const QueryConfigResponseBodyData &) = default ;
    QueryConfigResponseBodyData(QueryConfigResponseBodyData &&) = default ;
    QueryConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConfigResponseBodyData() = default ;
    QueryConfigResponseBodyData& operator=(const QueryConfigResponseBodyData &) = default ;
    QueryConfigResponseBodyData& operator=(QueryConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authEnabled_ != nullptr
        && this->autopurgePurgeInterval_ != nullptr && this->autopurgeSnapRetainCount_ != nullptr && this->clusterName_ != nullptr && this->configAuthEnabled_ != nullptr && this->configAuthSupported_ != nullptr
        && this->configContentLimit_ != nullptr && this->configSecretEnabled_ != nullptr && this->configSecretSupported_ != nullptr && this->consoleUIEnabled_ != nullptr && this->enable4lw_ != nullptr
        && this->eurekaSupported_ != nullptr && this->extendedTypesEnable_ != nullptr && this->initLimit_ != nullptr && this->juteMaxbuffer_ != nullptr && this->jvmFlagsCustom_ != nullptr
        && this->MCPEnabled_ != nullptr && this->MCPSupported_ != nullptr && this->maxClientCnxns_ != nullptr && this->maxSessionTimeout_ != nullptr && this->minSessionTimeout_ != nullptr
        && this->nacosRunningEnv_ != nullptr && this->namingAuthEnabled_ != nullptr && this->namingAuthSupported_ != nullptr && this->namingCreateServiceSupported_ != nullptr && this->openSuperAcl_ != nullptr
        && this->passWord_ != nullptr && this->restartFlag_ != nullptr && this->snapshotCount_ != nullptr && this->syncLimit_ != nullptr && this->TLSEnabled_ != nullptr
        && this->tickTime_ != nullptr && this->userName_ != nullptr; };
    // authEnabled Field Functions 
    bool hasAuthEnabled() const { return this->authEnabled_ != nullptr;};
    void deleteAuthEnabled() { this->authEnabled_ = nullptr;};
    inline bool authEnabled() const { DARABONBA_PTR_GET_DEFAULT(authEnabled_, false) };
    inline QueryConfigResponseBodyData& setAuthEnabled(bool authEnabled) { DARABONBA_PTR_SET_VALUE(authEnabled_, authEnabled) };


    // autopurgePurgeInterval Field Functions 
    bool hasAutopurgePurgeInterval() const { return this->autopurgePurgeInterval_ != nullptr;};
    void deleteAutopurgePurgeInterval() { this->autopurgePurgeInterval_ = nullptr;};
    inline string autopurgePurgeInterval() const { DARABONBA_PTR_GET_DEFAULT(autopurgePurgeInterval_, "") };
    inline QueryConfigResponseBodyData& setAutopurgePurgeInterval(string autopurgePurgeInterval) { DARABONBA_PTR_SET_VALUE(autopurgePurgeInterval_, autopurgePurgeInterval) };


    // autopurgeSnapRetainCount Field Functions 
    bool hasAutopurgeSnapRetainCount() const { return this->autopurgeSnapRetainCount_ != nullptr;};
    void deleteAutopurgeSnapRetainCount() { this->autopurgeSnapRetainCount_ = nullptr;};
    inline string autopurgeSnapRetainCount() const { DARABONBA_PTR_GET_DEFAULT(autopurgeSnapRetainCount_, "") };
    inline QueryConfigResponseBodyData& setAutopurgeSnapRetainCount(string autopurgeSnapRetainCount) { DARABONBA_PTR_SET_VALUE(autopurgeSnapRetainCount_, autopurgeSnapRetainCount) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline QueryConfigResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // configAuthEnabled Field Functions 
    bool hasConfigAuthEnabled() const { return this->configAuthEnabled_ != nullptr;};
    void deleteConfigAuthEnabled() { this->configAuthEnabled_ = nullptr;};
    inline bool configAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(configAuthEnabled_, false) };
    inline QueryConfigResponseBodyData& setConfigAuthEnabled(bool configAuthEnabled) { DARABONBA_PTR_SET_VALUE(configAuthEnabled_, configAuthEnabled) };


    // configAuthSupported Field Functions 
    bool hasConfigAuthSupported() const { return this->configAuthSupported_ != nullptr;};
    void deleteConfigAuthSupported() { this->configAuthSupported_ = nullptr;};
    inline bool configAuthSupported() const { DARABONBA_PTR_GET_DEFAULT(configAuthSupported_, false) };
    inline QueryConfigResponseBodyData& setConfigAuthSupported(bool configAuthSupported) { DARABONBA_PTR_SET_VALUE(configAuthSupported_, configAuthSupported) };


    // configContentLimit Field Functions 
    bool hasConfigContentLimit() const { return this->configContentLimit_ != nullptr;};
    void deleteConfigContentLimit() { this->configContentLimit_ = nullptr;};
    inline int64_t configContentLimit() const { DARABONBA_PTR_GET_DEFAULT(configContentLimit_, 0L) };
    inline QueryConfigResponseBodyData& setConfigContentLimit(int64_t configContentLimit) { DARABONBA_PTR_SET_VALUE(configContentLimit_, configContentLimit) };


    // configSecretEnabled Field Functions 
    bool hasConfigSecretEnabled() const { return this->configSecretEnabled_ != nullptr;};
    void deleteConfigSecretEnabled() { this->configSecretEnabled_ = nullptr;};
    inline bool configSecretEnabled() const { DARABONBA_PTR_GET_DEFAULT(configSecretEnabled_, false) };
    inline QueryConfigResponseBodyData& setConfigSecretEnabled(bool configSecretEnabled) { DARABONBA_PTR_SET_VALUE(configSecretEnabled_, configSecretEnabled) };


    // configSecretSupported Field Functions 
    bool hasConfigSecretSupported() const { return this->configSecretSupported_ != nullptr;};
    void deleteConfigSecretSupported() { this->configSecretSupported_ = nullptr;};
    inline bool configSecretSupported() const { DARABONBA_PTR_GET_DEFAULT(configSecretSupported_, false) };
    inline QueryConfigResponseBodyData& setConfigSecretSupported(bool configSecretSupported) { DARABONBA_PTR_SET_VALUE(configSecretSupported_, configSecretSupported) };


    // consoleUIEnabled Field Functions 
    bool hasConsoleUIEnabled() const { return this->consoleUIEnabled_ != nullptr;};
    void deleteConsoleUIEnabled() { this->consoleUIEnabled_ = nullptr;};
    inline bool consoleUIEnabled() const { DARABONBA_PTR_GET_DEFAULT(consoleUIEnabled_, false) };
    inline QueryConfigResponseBodyData& setConsoleUIEnabled(bool consoleUIEnabled) { DARABONBA_PTR_SET_VALUE(consoleUIEnabled_, consoleUIEnabled) };


    // enable4lw Field Functions 
    bool hasEnable4lw() const { return this->enable4lw_ != nullptr;};
    void deleteEnable4lw() { this->enable4lw_ = nullptr;};
    inline bool enable4lw() const { DARABONBA_PTR_GET_DEFAULT(enable4lw_, false) };
    inline QueryConfigResponseBodyData& setEnable4lw(bool enable4lw) { DARABONBA_PTR_SET_VALUE(enable4lw_, enable4lw) };


    // eurekaSupported Field Functions 
    bool hasEurekaSupported() const { return this->eurekaSupported_ != nullptr;};
    void deleteEurekaSupported() { this->eurekaSupported_ = nullptr;};
    inline bool eurekaSupported() const { DARABONBA_PTR_GET_DEFAULT(eurekaSupported_, false) };
    inline QueryConfigResponseBodyData& setEurekaSupported(bool eurekaSupported) { DARABONBA_PTR_SET_VALUE(eurekaSupported_, eurekaSupported) };


    // extendedTypesEnable Field Functions 
    bool hasExtendedTypesEnable() const { return this->extendedTypesEnable_ != nullptr;};
    void deleteExtendedTypesEnable() { this->extendedTypesEnable_ = nullptr;};
    inline bool extendedTypesEnable() const { DARABONBA_PTR_GET_DEFAULT(extendedTypesEnable_, false) };
    inline QueryConfigResponseBodyData& setExtendedTypesEnable(bool extendedTypesEnable) { DARABONBA_PTR_SET_VALUE(extendedTypesEnable_, extendedTypesEnable) };


    // initLimit Field Functions 
    bool hasInitLimit() const { return this->initLimit_ != nullptr;};
    void deleteInitLimit() { this->initLimit_ = nullptr;};
    inline string initLimit() const { DARABONBA_PTR_GET_DEFAULT(initLimit_, "") };
    inline QueryConfigResponseBodyData& setInitLimit(string initLimit) { DARABONBA_PTR_SET_VALUE(initLimit_, initLimit) };


    // juteMaxbuffer Field Functions 
    bool hasJuteMaxbuffer() const { return this->juteMaxbuffer_ != nullptr;};
    void deleteJuteMaxbuffer() { this->juteMaxbuffer_ = nullptr;};
    inline string juteMaxbuffer() const { DARABONBA_PTR_GET_DEFAULT(juteMaxbuffer_, "") };
    inline QueryConfigResponseBodyData& setJuteMaxbuffer(string juteMaxbuffer) { DARABONBA_PTR_SET_VALUE(juteMaxbuffer_, juteMaxbuffer) };


    // jvmFlagsCustom Field Functions 
    bool hasJvmFlagsCustom() const { return this->jvmFlagsCustom_ != nullptr;};
    void deleteJvmFlagsCustom() { this->jvmFlagsCustom_ = nullptr;};
    inline string jvmFlagsCustom() const { DARABONBA_PTR_GET_DEFAULT(jvmFlagsCustom_, "") };
    inline QueryConfigResponseBodyData& setJvmFlagsCustom(string jvmFlagsCustom) { DARABONBA_PTR_SET_VALUE(jvmFlagsCustom_, jvmFlagsCustom) };


    // MCPEnabled Field Functions 
    bool hasMCPEnabled() const { return this->MCPEnabled_ != nullptr;};
    void deleteMCPEnabled() { this->MCPEnabled_ = nullptr;};
    inline bool MCPEnabled() const { DARABONBA_PTR_GET_DEFAULT(MCPEnabled_, false) };
    inline QueryConfigResponseBodyData& setMCPEnabled(bool MCPEnabled) { DARABONBA_PTR_SET_VALUE(MCPEnabled_, MCPEnabled) };


    // MCPSupported Field Functions 
    bool hasMCPSupported() const { return this->MCPSupported_ != nullptr;};
    void deleteMCPSupported() { this->MCPSupported_ = nullptr;};
    inline bool MCPSupported() const { DARABONBA_PTR_GET_DEFAULT(MCPSupported_, false) };
    inline QueryConfigResponseBodyData& setMCPSupported(bool MCPSupported) { DARABONBA_PTR_SET_VALUE(MCPSupported_, MCPSupported) };


    // maxClientCnxns Field Functions 
    bool hasMaxClientCnxns() const { return this->maxClientCnxns_ != nullptr;};
    void deleteMaxClientCnxns() { this->maxClientCnxns_ = nullptr;};
    inline string maxClientCnxns() const { DARABONBA_PTR_GET_DEFAULT(maxClientCnxns_, "") };
    inline QueryConfigResponseBodyData& setMaxClientCnxns(string maxClientCnxns) { DARABONBA_PTR_SET_VALUE(maxClientCnxns_, maxClientCnxns) };


    // maxSessionTimeout Field Functions 
    bool hasMaxSessionTimeout() const { return this->maxSessionTimeout_ != nullptr;};
    void deleteMaxSessionTimeout() { this->maxSessionTimeout_ = nullptr;};
    inline string maxSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(maxSessionTimeout_, "") };
    inline QueryConfigResponseBodyData& setMaxSessionTimeout(string maxSessionTimeout) { DARABONBA_PTR_SET_VALUE(maxSessionTimeout_, maxSessionTimeout) };


    // minSessionTimeout Field Functions 
    bool hasMinSessionTimeout() const { return this->minSessionTimeout_ != nullptr;};
    void deleteMinSessionTimeout() { this->minSessionTimeout_ = nullptr;};
    inline string minSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(minSessionTimeout_, "") };
    inline QueryConfigResponseBodyData& setMinSessionTimeout(string minSessionTimeout) { DARABONBA_PTR_SET_VALUE(minSessionTimeout_, minSessionTimeout) };


    // nacosRunningEnv Field Functions 
    bool hasNacosRunningEnv() const { return this->nacosRunningEnv_ != nullptr;};
    void deleteNacosRunningEnv() { this->nacosRunningEnv_ = nullptr;};
    inline const Models::QueryConfigResponseBodyDataNacosRunningEnv & nacosRunningEnv() const { DARABONBA_PTR_GET_CONST(nacosRunningEnv_, Models::QueryConfigResponseBodyDataNacosRunningEnv) };
    inline Models::QueryConfigResponseBodyDataNacosRunningEnv nacosRunningEnv() { DARABONBA_PTR_GET(nacosRunningEnv_, Models::QueryConfigResponseBodyDataNacosRunningEnv) };
    inline QueryConfigResponseBodyData& setNacosRunningEnv(const Models::QueryConfigResponseBodyDataNacosRunningEnv & nacosRunningEnv) { DARABONBA_PTR_SET_VALUE(nacosRunningEnv_, nacosRunningEnv) };
    inline QueryConfigResponseBodyData& setNacosRunningEnv(Models::QueryConfigResponseBodyDataNacosRunningEnv && nacosRunningEnv) { DARABONBA_PTR_SET_RVALUE(nacosRunningEnv_, nacosRunningEnv) };


    // namingAuthEnabled Field Functions 
    bool hasNamingAuthEnabled() const { return this->namingAuthEnabled_ != nullptr;};
    void deleteNamingAuthEnabled() { this->namingAuthEnabled_ = nullptr;};
    inline bool namingAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(namingAuthEnabled_, false) };
    inline QueryConfigResponseBodyData& setNamingAuthEnabled(bool namingAuthEnabled) { DARABONBA_PTR_SET_VALUE(namingAuthEnabled_, namingAuthEnabled) };


    // namingAuthSupported Field Functions 
    bool hasNamingAuthSupported() const { return this->namingAuthSupported_ != nullptr;};
    void deleteNamingAuthSupported() { this->namingAuthSupported_ = nullptr;};
    inline bool namingAuthSupported() const { DARABONBA_PTR_GET_DEFAULT(namingAuthSupported_, false) };
    inline QueryConfigResponseBodyData& setNamingAuthSupported(bool namingAuthSupported) { DARABONBA_PTR_SET_VALUE(namingAuthSupported_, namingAuthSupported) };


    // namingCreateServiceSupported Field Functions 
    bool hasNamingCreateServiceSupported() const { return this->namingCreateServiceSupported_ != nullptr;};
    void deleteNamingCreateServiceSupported() { this->namingCreateServiceSupported_ = nullptr;};
    inline bool namingCreateServiceSupported() const { DARABONBA_PTR_GET_DEFAULT(namingCreateServiceSupported_, false) };
    inline QueryConfigResponseBodyData& setNamingCreateServiceSupported(bool namingCreateServiceSupported) { DARABONBA_PTR_SET_VALUE(namingCreateServiceSupported_, namingCreateServiceSupported) };


    // openSuperAcl Field Functions 
    bool hasOpenSuperAcl() const { return this->openSuperAcl_ != nullptr;};
    void deleteOpenSuperAcl() { this->openSuperAcl_ = nullptr;};
    inline bool openSuperAcl() const { DARABONBA_PTR_GET_DEFAULT(openSuperAcl_, false) };
    inline QueryConfigResponseBodyData& setOpenSuperAcl(bool openSuperAcl) { DARABONBA_PTR_SET_VALUE(openSuperAcl_, openSuperAcl) };


    // passWord Field Functions 
    bool hasPassWord() const { return this->passWord_ != nullptr;};
    void deletePassWord() { this->passWord_ = nullptr;};
    inline string passWord() const { DARABONBA_PTR_GET_DEFAULT(passWord_, "") };
    inline QueryConfigResponseBodyData& setPassWord(string passWord) { DARABONBA_PTR_SET_VALUE(passWord_, passWord) };


    // restartFlag Field Functions 
    bool hasRestartFlag() const { return this->restartFlag_ != nullptr;};
    void deleteRestartFlag() { this->restartFlag_ = nullptr;};
    inline bool restartFlag() const { DARABONBA_PTR_GET_DEFAULT(restartFlag_, false) };
    inline QueryConfigResponseBodyData& setRestartFlag(bool restartFlag) { DARABONBA_PTR_SET_VALUE(restartFlag_, restartFlag) };


    // snapshotCount Field Functions 
    bool hasSnapshotCount() const { return this->snapshotCount_ != nullptr;};
    void deleteSnapshotCount() { this->snapshotCount_ = nullptr;};
    inline string snapshotCount() const { DARABONBA_PTR_GET_DEFAULT(snapshotCount_, "") };
    inline QueryConfigResponseBodyData& setSnapshotCount(string snapshotCount) { DARABONBA_PTR_SET_VALUE(snapshotCount_, snapshotCount) };


    // syncLimit Field Functions 
    bool hasSyncLimit() const { return this->syncLimit_ != nullptr;};
    void deleteSyncLimit() { this->syncLimit_ = nullptr;};
    inline string syncLimit() const { DARABONBA_PTR_GET_DEFAULT(syncLimit_, "") };
    inline QueryConfigResponseBodyData& setSyncLimit(string syncLimit) { DARABONBA_PTR_SET_VALUE(syncLimit_, syncLimit) };


    // TLSEnabled Field Functions 
    bool hasTLSEnabled() const { return this->TLSEnabled_ != nullptr;};
    void deleteTLSEnabled() { this->TLSEnabled_ = nullptr;};
    inline bool TLSEnabled() const { DARABONBA_PTR_GET_DEFAULT(TLSEnabled_, false) };
    inline QueryConfigResponseBodyData& setTLSEnabled(bool TLSEnabled) { DARABONBA_PTR_SET_VALUE(TLSEnabled_, TLSEnabled) };


    // tickTime Field Functions 
    bool hasTickTime() const { return this->tickTime_ != nullptr;};
    void deleteTickTime() { this->tickTime_ = nullptr;};
    inline string tickTime() const { DARABONBA_PTR_GET_DEFAULT(tickTime_, "") };
    inline QueryConfigResponseBodyData& setTickTime(string tickTime) { DARABONBA_PTR_SET_VALUE(tickTime_, tickTime) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline QueryConfigResponseBodyData& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Indicates whether Simple Authentication and Security Layer (SASL) forced identity authentication is enabled for the ZooKeeper instance.
    std::shared_ptr<bool> authEnabled_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> autopurgePurgeInterval_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> autopurgeSnapRetainCount_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> clusterName_ = nullptr;
    // Indicates whether RAM authentication of a configuration center is enabled. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: enabled.
    // *   `false`: disabled.
    std::shared_ptr<bool> configAuthEnabled_ = nullptr;
    // Indicates whether RAM authentication is supported by a configuration center of the instance. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: supported.
    // *   `false`: not supported.
    std::shared_ptr<bool> configAuthSupported_ = nullptr;
    // The maximum size of contents in a configuration. Unit: KB.
    std::shared_ptr<int64_t> configContentLimit_ = nullptr;
    // Indicates whether configuration encryption of a configuration center is enabled by the instance. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: enabled.
    // *   `false`: disabled.
    std::shared_ptr<bool> configSecretEnabled_ = nullptr;
    // Indicates whether configuration encryption of a configuration center is supported by the instance. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: supported.
    // *   `false`: not supported.
    std::shared_ptr<bool> configSecretSupported_ = nullptr;
    // Indicates whether the Nacos open source console is enabled.
    std::shared_ptr<bool> consoleUIEnabled_ = nullptr;
    std::shared_ptr<bool> enable4lw_ = nullptr;
    // Indicates whether access port 8761 was enabled for Eureka. If this port is disabled, applications cannot use the Eureka protocol for service registration and discovery.
    std::shared_ptr<bool> eurekaSupported_ = nullptr;
    // Indicates whether the time to live (TTL) configuration is enabled. This parameter is valid for ZooKeeper instances.
    std::shared_ptr<bool> extendedTypesEnable_ = nullptr;
    // The maximum connection duration of the instance. Unit: seconds. This parameter is valid for ZooKeeper instances.
    std::shared_ptr<string> initLimit_ = nullptr;
    // The maximum amount of data on each node. This parameter is valid for ZooKeeper instances. Unit: bytes.
    std::shared_ptr<string> juteMaxbuffer_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> jvmFlagsCustom_ = nullptr;
    // Indicates whether Mesh Configuration Protocol (MCP) is enabled. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: enabled.
    // *   `false`: disabled.
    std::shared_ptr<bool> MCPEnabled_ = nullptr;
    // Indicates whether MCP is supported. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: supported.
    // *   `false`: not supported.
    std::shared_ptr<bool> MCPSupported_ = nullptr;
    // The number of connections between a client and a server. This parameter is valid for ZooKeeper instances.\\
    // If this parameter is set to 0, no limits are imposed on the number of connections.
    std::shared_ptr<string> maxClientCnxns_ = nullptr;
    // The maximum timeout period. This parameter is valid for ZooKeeper instances.
    std::shared_ptr<string> maxSessionTimeout_ = nullptr;
    // The minimum timeout period. This parameter is valid for ZooKeeper instances.
    std::shared_ptr<string> minSessionTimeout_ = nullptr;
    // The runtime configuration of the Nacos instance.
    std::shared_ptr<Models::QueryConfigResponseBodyDataNacosRunningEnv> nacosRunningEnv_ = nullptr;
    // Indicates whether RAM authentication of a registry is enabled. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: enabled.
    // *   `false`: disabled.
    std::shared_ptr<bool> namingAuthEnabled_ = nullptr;
    // Indicates whether RAM authentication of services is supported by the instance. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: supported.
    // *   `false`: not supported.
    std::shared_ptr<bool> namingAuthSupported_ = nullptr;
    // Indicates whether service creation is supported for the instance. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: supported.
    // *   `false`: not supported.
    std::shared_ptr<bool> namingCreateServiceSupported_ = nullptr;
    // Indicates whether super permissions are enabled. This parameter is valid for ZooKeeper instances. Valid values:
    // 
    // *   `true`: enabled.
    // *   `false`: disabled.
    std::shared_ptr<bool> openSuperAcl_ = nullptr;
    // The password that corresponds to the username. This parameter is valid only if OpenSuperAcl is set to true.
    std::shared_ptr<string> passWord_ = nullptr;
    // Indicates whether the instance was restarted and new configurations have taken effect. Valid values:
    // 
    // *   `true`: The restart was successful.
    // *   `false`: The restart failed.
    std::shared_ptr<bool> restartFlag_ = nullptr;
    // The frequency for generating snapshots. This parameter is valid for ZooKeeper instances.
    std::shared_ptr<string> snapshotCount_ = nullptr;
    // The connection timeout period of the instance. This parameter is valid for ZooKeeper instances. Unit: seconds.
    std::shared_ptr<string> syncLimit_ = nullptr;
    // MSE Nacos supports TLS transmission link encryption since version 2.1.2.1. Nacos clients must be upgraded to version 2.2.1 or later. After TLS is enabled, the system performance will decrease by about 10%. You must evaluate the system capacity. For more information about the relevant operations, see Nacos TLS transmission encryption.
    std::shared_ptr<bool> TLSEnabled_ = nullptr;
    // The time unit of the engine. This parameter is valid for ZooKeeper instances. Default value: 2000. Unit: milliseconds.
    std::shared_ptr<string> tickTime_ = nullptr;
    // The username of the user. This parameter is valid only if OpenSuperAcl is set to true.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
