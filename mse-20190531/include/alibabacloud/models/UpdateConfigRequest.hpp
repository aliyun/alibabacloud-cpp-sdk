// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AuthEnabled, authEnabled_);
      DARABONBA_PTR_TO_JSON(AutopurgePurgeInterval, autopurgePurgeInterval_);
      DARABONBA_PTR_TO_JSON(AutopurgeSnapRetainCount, autopurgeSnapRetainCount_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConfigAuthEnabled, configAuthEnabled_);
      DARABONBA_PTR_TO_JSON(ConfigSecretEnabled, configSecretEnabled_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(ConsoleUIEnabled, consoleUIEnabled_);
      DARABONBA_PTR_TO_JSON(Enable4lw, enable4lw_);
      DARABONBA_PTR_TO_JSON(EurekaSupported, eurekaSupported_);
      DARABONBA_PTR_TO_JSON(ExtendedTypesEnable, extendedTypesEnable_);
      DARABONBA_PTR_TO_JSON(InitLimit, initLimit_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JuteMaxbuffer, juteMaxbuffer_);
      DARABONBA_PTR_TO_JSON(MCPEnabled, MCPEnabled_);
      DARABONBA_PTR_TO_JSON(MaxClientCnxns, maxClientCnxns_);
      DARABONBA_PTR_TO_JSON(MaxSessionTimeout, maxSessionTimeout_);
      DARABONBA_PTR_TO_JSON(MinSessionTimeout, minSessionTimeout_);
      DARABONBA_PTR_TO_JSON(NamingAuthEnabled, namingAuthEnabled_);
      DARABONBA_PTR_TO_JSON(OpenSuperAcl, openSuperAcl_);
      DARABONBA_PTR_TO_JSON(PassWord, passWord_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(SnapshotCount, snapshotCount_);
      DARABONBA_PTR_TO_JSON(SyncLimit, syncLimit_);
      DARABONBA_PTR_TO_JSON(TLSEnabled, TLSEnabled_);
      DARABONBA_PTR_TO_JSON(TickTime, tickTime_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AuthEnabled, authEnabled_);
      DARABONBA_PTR_FROM_JSON(AutopurgePurgeInterval, autopurgePurgeInterval_);
      DARABONBA_PTR_FROM_JSON(AutopurgeSnapRetainCount, autopurgeSnapRetainCount_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConfigAuthEnabled, configAuthEnabled_);
      DARABONBA_PTR_FROM_JSON(ConfigSecretEnabled, configSecretEnabled_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(ConsoleUIEnabled, consoleUIEnabled_);
      DARABONBA_PTR_FROM_JSON(Enable4lw, enable4lw_);
      DARABONBA_PTR_FROM_JSON(EurekaSupported, eurekaSupported_);
      DARABONBA_PTR_FROM_JSON(ExtendedTypesEnable, extendedTypesEnable_);
      DARABONBA_PTR_FROM_JSON(InitLimit, initLimit_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JuteMaxbuffer, juteMaxbuffer_);
      DARABONBA_PTR_FROM_JSON(MCPEnabled, MCPEnabled_);
      DARABONBA_PTR_FROM_JSON(MaxClientCnxns, maxClientCnxns_);
      DARABONBA_PTR_FROM_JSON(MaxSessionTimeout, maxSessionTimeout_);
      DARABONBA_PTR_FROM_JSON(MinSessionTimeout, minSessionTimeout_);
      DARABONBA_PTR_FROM_JSON(NamingAuthEnabled, namingAuthEnabled_);
      DARABONBA_PTR_FROM_JSON(OpenSuperAcl, openSuperAcl_);
      DARABONBA_PTR_FROM_JSON(PassWord, passWord_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(SnapshotCount, snapshotCount_);
      DARABONBA_PTR_FROM_JSON(SyncLimit, syncLimit_);
      DARABONBA_PTR_FROM_JSON(TLSEnabled, TLSEnabled_);
      DARABONBA_PTR_FROM_JSON(TickTime, tickTime_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    UpdateConfigRequest() = default ;
    UpdateConfigRequest(const UpdateConfigRequest &) = default ;
    UpdateConfigRequest(UpdateConfigRequest &&) = default ;
    UpdateConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigRequest() = default ;
    UpdateConfigRequest& operator=(const UpdateConfigRequest &) = default ;
    UpdateConfigRequest& operator=(UpdateConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->authEnabled_ == nullptr && this->autopurgePurgeInterval_ == nullptr && this->autopurgeSnapRetainCount_ == nullptr && this->clusterId_ == nullptr && this->configAuthEnabled_ == nullptr
        && this->configSecretEnabled_ == nullptr && this->configType_ == nullptr && this->consoleUIEnabled_ == nullptr && this->enable4lw_ == nullptr && this->eurekaSupported_ == nullptr
        && this->extendedTypesEnable_ == nullptr && this->initLimit_ == nullptr && this->instanceId_ == nullptr && this->juteMaxbuffer_ == nullptr && this->MCPEnabled_ == nullptr
        && this->maxClientCnxns_ == nullptr && this->maxSessionTimeout_ == nullptr && this->minSessionTimeout_ == nullptr && this->namingAuthEnabled_ == nullptr && this->openSuperAcl_ == nullptr
        && this->passWord_ == nullptr && this->requestPars_ == nullptr && this->snapshotCount_ == nullptr && this->syncLimit_ == nullptr && this->TLSEnabled_ == nullptr
        && this->tickTime_ == nullptr && this->userName_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // authEnabled Field Functions 
    bool hasAuthEnabled() const { return this->authEnabled_ != nullptr;};
    void deleteAuthEnabled() { this->authEnabled_ = nullptr;};
    inline bool getAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(authEnabled_, false) };
    inline UpdateConfigRequest& setAuthEnabled(bool authEnabled) { DARABONBA_PTR_SET_VALUE(authEnabled_, authEnabled) };


    // autopurgePurgeInterval Field Functions 
    bool hasAutopurgePurgeInterval() const { return this->autopurgePurgeInterval_ != nullptr;};
    void deleteAutopurgePurgeInterval() { this->autopurgePurgeInterval_ = nullptr;};
    inline string getAutopurgePurgeInterval() const { DARABONBA_PTR_GET_DEFAULT(autopurgePurgeInterval_, "") };
    inline UpdateConfigRequest& setAutopurgePurgeInterval(string autopurgePurgeInterval) { DARABONBA_PTR_SET_VALUE(autopurgePurgeInterval_, autopurgePurgeInterval) };


    // autopurgeSnapRetainCount Field Functions 
    bool hasAutopurgeSnapRetainCount() const { return this->autopurgeSnapRetainCount_ != nullptr;};
    void deleteAutopurgeSnapRetainCount() { this->autopurgeSnapRetainCount_ = nullptr;};
    inline string getAutopurgeSnapRetainCount() const { DARABONBA_PTR_GET_DEFAULT(autopurgeSnapRetainCount_, "") };
    inline UpdateConfigRequest& setAutopurgeSnapRetainCount(string autopurgeSnapRetainCount) { DARABONBA_PTR_SET_VALUE(autopurgeSnapRetainCount_, autopurgeSnapRetainCount) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateConfigRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configAuthEnabled Field Functions 
    bool hasConfigAuthEnabled() const { return this->configAuthEnabled_ != nullptr;};
    void deleteConfigAuthEnabled() { this->configAuthEnabled_ = nullptr;};
    inline bool getConfigAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(configAuthEnabled_, false) };
    inline UpdateConfigRequest& setConfigAuthEnabled(bool configAuthEnabled) { DARABONBA_PTR_SET_VALUE(configAuthEnabled_, configAuthEnabled) };


    // configSecretEnabled Field Functions 
    bool hasConfigSecretEnabled() const { return this->configSecretEnabled_ != nullptr;};
    void deleteConfigSecretEnabled() { this->configSecretEnabled_ = nullptr;};
    inline bool getConfigSecretEnabled() const { DARABONBA_PTR_GET_DEFAULT(configSecretEnabled_, false) };
    inline UpdateConfigRequest& setConfigSecretEnabled(bool configSecretEnabled) { DARABONBA_PTR_SET_VALUE(configSecretEnabled_, configSecretEnabled) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline UpdateConfigRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // consoleUIEnabled Field Functions 
    bool hasConsoleUIEnabled() const { return this->consoleUIEnabled_ != nullptr;};
    void deleteConsoleUIEnabled() { this->consoleUIEnabled_ = nullptr;};
    inline bool getConsoleUIEnabled() const { DARABONBA_PTR_GET_DEFAULT(consoleUIEnabled_, false) };
    inline UpdateConfigRequest& setConsoleUIEnabled(bool consoleUIEnabled) { DARABONBA_PTR_SET_VALUE(consoleUIEnabled_, consoleUIEnabled) };


    // enable4lw Field Functions 
    bool hasEnable4lw() const { return this->enable4lw_ != nullptr;};
    void deleteEnable4lw() { this->enable4lw_ = nullptr;};
    inline bool getEnable4lw() const { DARABONBA_PTR_GET_DEFAULT(enable4lw_, false) };
    inline UpdateConfigRequest& setEnable4lw(bool enable4lw) { DARABONBA_PTR_SET_VALUE(enable4lw_, enable4lw) };


    // eurekaSupported Field Functions 
    bool hasEurekaSupported() const { return this->eurekaSupported_ != nullptr;};
    void deleteEurekaSupported() { this->eurekaSupported_ = nullptr;};
    inline bool getEurekaSupported() const { DARABONBA_PTR_GET_DEFAULT(eurekaSupported_, false) };
    inline UpdateConfigRequest& setEurekaSupported(bool eurekaSupported) { DARABONBA_PTR_SET_VALUE(eurekaSupported_, eurekaSupported) };


    // extendedTypesEnable Field Functions 
    bool hasExtendedTypesEnable() const { return this->extendedTypesEnable_ != nullptr;};
    void deleteExtendedTypesEnable() { this->extendedTypesEnable_ = nullptr;};
    inline string getExtendedTypesEnable() const { DARABONBA_PTR_GET_DEFAULT(extendedTypesEnable_, "") };
    inline UpdateConfigRequest& setExtendedTypesEnable(string extendedTypesEnable) { DARABONBA_PTR_SET_VALUE(extendedTypesEnable_, extendedTypesEnable) };


    // initLimit Field Functions 
    bool hasInitLimit() const { return this->initLimit_ != nullptr;};
    void deleteInitLimit() { this->initLimit_ = nullptr;};
    inline string getInitLimit() const { DARABONBA_PTR_GET_DEFAULT(initLimit_, "") };
    inline UpdateConfigRequest& setInitLimit(string initLimit) { DARABONBA_PTR_SET_VALUE(initLimit_, initLimit) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // juteMaxbuffer Field Functions 
    bool hasJuteMaxbuffer() const { return this->juteMaxbuffer_ != nullptr;};
    void deleteJuteMaxbuffer() { this->juteMaxbuffer_ = nullptr;};
    inline string getJuteMaxbuffer() const { DARABONBA_PTR_GET_DEFAULT(juteMaxbuffer_, "") };
    inline UpdateConfigRequest& setJuteMaxbuffer(string juteMaxbuffer) { DARABONBA_PTR_SET_VALUE(juteMaxbuffer_, juteMaxbuffer) };


    // MCPEnabled Field Functions 
    bool hasMCPEnabled() const { return this->MCPEnabled_ != nullptr;};
    void deleteMCPEnabled() { this->MCPEnabled_ = nullptr;};
    inline bool getMCPEnabled() const { DARABONBA_PTR_GET_DEFAULT(MCPEnabled_, false) };
    inline UpdateConfigRequest& setMCPEnabled(bool MCPEnabled) { DARABONBA_PTR_SET_VALUE(MCPEnabled_, MCPEnabled) };


    // maxClientCnxns Field Functions 
    bool hasMaxClientCnxns() const { return this->maxClientCnxns_ != nullptr;};
    void deleteMaxClientCnxns() { this->maxClientCnxns_ = nullptr;};
    inline string getMaxClientCnxns() const { DARABONBA_PTR_GET_DEFAULT(maxClientCnxns_, "") };
    inline UpdateConfigRequest& setMaxClientCnxns(string maxClientCnxns) { DARABONBA_PTR_SET_VALUE(maxClientCnxns_, maxClientCnxns) };


    // maxSessionTimeout Field Functions 
    bool hasMaxSessionTimeout() const { return this->maxSessionTimeout_ != nullptr;};
    void deleteMaxSessionTimeout() { this->maxSessionTimeout_ = nullptr;};
    inline string getMaxSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(maxSessionTimeout_, "") };
    inline UpdateConfigRequest& setMaxSessionTimeout(string maxSessionTimeout) { DARABONBA_PTR_SET_VALUE(maxSessionTimeout_, maxSessionTimeout) };


    // minSessionTimeout Field Functions 
    bool hasMinSessionTimeout() const { return this->minSessionTimeout_ != nullptr;};
    void deleteMinSessionTimeout() { this->minSessionTimeout_ = nullptr;};
    inline string getMinSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(minSessionTimeout_, "") };
    inline UpdateConfigRequest& setMinSessionTimeout(string minSessionTimeout) { DARABONBA_PTR_SET_VALUE(minSessionTimeout_, minSessionTimeout) };


    // namingAuthEnabled Field Functions 
    bool hasNamingAuthEnabled() const { return this->namingAuthEnabled_ != nullptr;};
    void deleteNamingAuthEnabled() { this->namingAuthEnabled_ = nullptr;};
    inline bool getNamingAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(namingAuthEnabled_, false) };
    inline UpdateConfigRequest& setNamingAuthEnabled(bool namingAuthEnabled) { DARABONBA_PTR_SET_VALUE(namingAuthEnabled_, namingAuthEnabled) };


    // openSuperAcl Field Functions 
    bool hasOpenSuperAcl() const { return this->openSuperAcl_ != nullptr;};
    void deleteOpenSuperAcl() { this->openSuperAcl_ = nullptr;};
    inline string getOpenSuperAcl() const { DARABONBA_PTR_GET_DEFAULT(openSuperAcl_, "") };
    inline UpdateConfigRequest& setOpenSuperAcl(string openSuperAcl) { DARABONBA_PTR_SET_VALUE(openSuperAcl_, openSuperAcl) };


    // passWord Field Functions 
    bool hasPassWord() const { return this->passWord_ != nullptr;};
    void deletePassWord() { this->passWord_ = nullptr;};
    inline string getPassWord() const { DARABONBA_PTR_GET_DEFAULT(passWord_, "") };
    inline UpdateConfigRequest& setPassWord(string passWord) { DARABONBA_PTR_SET_VALUE(passWord_, passWord) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string getRequestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline UpdateConfigRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // snapshotCount Field Functions 
    bool hasSnapshotCount() const { return this->snapshotCount_ != nullptr;};
    void deleteSnapshotCount() { this->snapshotCount_ = nullptr;};
    inline string getSnapshotCount() const { DARABONBA_PTR_GET_DEFAULT(snapshotCount_, "") };
    inline UpdateConfigRequest& setSnapshotCount(string snapshotCount) { DARABONBA_PTR_SET_VALUE(snapshotCount_, snapshotCount) };


    // syncLimit Field Functions 
    bool hasSyncLimit() const { return this->syncLimit_ != nullptr;};
    void deleteSyncLimit() { this->syncLimit_ = nullptr;};
    inline string getSyncLimit() const { DARABONBA_PTR_GET_DEFAULT(syncLimit_, "") };
    inline UpdateConfigRequest& setSyncLimit(string syncLimit) { DARABONBA_PTR_SET_VALUE(syncLimit_, syncLimit) };


    // TLSEnabled Field Functions 
    bool hasTLSEnabled() const { return this->TLSEnabled_ != nullptr;};
    void deleteTLSEnabled() { this->TLSEnabled_ = nullptr;};
    inline bool getTLSEnabled() const { DARABONBA_PTR_GET_DEFAULT(TLSEnabled_, false) };
    inline UpdateConfigRequest& setTLSEnabled(bool TLSEnabled) { DARABONBA_PTR_SET_VALUE(TLSEnabled_, TLSEnabled) };


    // tickTime Field Functions 
    bool hasTickTime() const { return this->tickTime_ != nullptr;};
    void deleteTickTime() { this->tickTime_ = nullptr;};
    inline string getTickTime() const { DARABONBA_PTR_GET_DEFAULT(tickTime_, "") };
    inline UpdateConfigRequest& setTickTime(string tickTime) { DARABONBA_PTR_SET_VALUE(tickTime_, tickTime) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UpdateConfigRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<bool> authEnabled_ {};
    // A reserved parameter.
    shared_ptr<string> autopurgePurgeInterval_ {};
    // A reserved parameter.
    shared_ptr<string> autopurgeSnapRetainCount_ {};
    // The ID of the cluster.
    shared_ptr<string> clusterId_ {};
    // Specifies whether to enable Resource Access Management (RAM) authentication for a configuration center. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: enabled.
    // *   `false`: disabled.
    // 
    // > Before you configure this parameter, you must call the QueryConfig operation to obtain the ConfigAuthSupported parameter value to check whether the instance supports the RAM authentication feature.
    shared_ptr<bool> configAuthEnabled_ {};
    // Specifies whether to enable configuration encryption for a configuration center. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: enabled.
    // *   `false`: disabled.
    // 
    // > Before you configure this parameter, you must call the QueryConfig operation to obtain the ConfigSecretSupported parameter value to check whether the instance supports configuration encryption.
    shared_ptr<bool> configSecretEnabled_ {};
    // The format of the configuration. Supported formats include TEXT, JSON, XML, and HTML.
    shared_ptr<string> configType_ {};
    shared_ptr<bool> consoleUIEnabled_ {};
    shared_ptr<bool> enable4lw_ {};
    shared_ptr<bool> eurekaSupported_ {};
    // Specifies whether to enable the time to live (TTL) configuration. This parameter is valid for ZooKeeper instances.
    shared_ptr<string> extendedTypesEnable_ {};
    // The maximum connection duration of the instance. This parameter is valid for ZooKeeper instances. Unit: seconds.
    shared_ptr<string> initLimit_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The maximum amount of data on each node. This parameter is valid for ZooKeeper instances. The default maximum data amount on each node is 1 megabyte. Unit: bytes.
    shared_ptr<string> juteMaxbuffer_ {};
    // Specifies whether to enable Mesh Configuration Protocol (MCP). This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: enabled.
    // *   `false`: disabled.
    // 
    // > Before you configure this parameter, you must call the QueryConfig operation to obtain the MCPSupported parameter value to check whether the instance supports MCP.
    shared_ptr<bool> MCPEnabled_ {};
    // The number of connections between a client and a server. This parameter is valid for ZooKeeper instances.\\
    // If this parameter is set to 0, no limits are imposed on the number of connections.
    shared_ptr<string> maxClientCnxns_ {};
    // The maximum timeout period. This parameter is valid for ZooKeeper instances. Unit: seconds.
    shared_ptr<string> maxSessionTimeout_ {};
    // The minimum timeout period. This parameter is valid for ZooKeeper instances. Unit: seconds.
    shared_ptr<string> minSessionTimeout_ {};
    // Specifies whether to enable RAM authentication for a registry. This parameter is valid for Nacos instances. Valid values:
    // 
    // *   `true`: enabled.
    // *   `false`: disabled.
    // 
    // > Before you configure this parameter, you must call the QueryConfig operation to obtain the NamingAuthSupporte parameter value to check whether the instance supports the RAM authentication feature.
    shared_ptr<bool> namingAuthEnabled_ {};
    // Specifies whether to enable super permissions. This parameter is valid for ZooKeeper instances. Valid values:
    // 
    // *   `true`: enabled
    // *   `false`: disabled
    shared_ptr<string> openSuperAcl_ {};
    // The password that corresponds to the username.
    // 
    // > You must specify this parameter if OpenSuperAcl is set to true.
    shared_ptr<string> passWord_ {};
    // The extended request parameters in the JSON format.
    shared_ptr<string> requestPars_ {};
    // The frequency for generating snapshots. This parameter is valid for ZooKeeper instances.
    shared_ptr<string> snapshotCount_ {};
    // The connection timeout period of the instance. This parameter is valid for ZooKeeper instances. Unit: seconds.
    shared_ptr<string> syncLimit_ {};
    shared_ptr<bool> TLSEnabled_ {};
    // The time unit. This parameter is valid for ZooKeeper instances. Default value: 2000. Unit: milliseconds.
    shared_ptr<string> tickTime_ {};
    // The name of the user.
    // 
    // > You must specify this parameter if OpenSuperAcl is set to true.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
