// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAPGROUPBASICCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEAPGROUPBASICCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class SaveApgroupBasicConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveApgroupBasicConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Dai, dai_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EchoInt, echoInt_);
      DARABONBA_PTR_TO_JSON(Failover, failover_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InsecureAllowed, insecureAllowed_);
      DARABONBA_PTR_TO_JSON(IsConfigStrongConsistency, isConfigStrongConsistency_);
      DARABONBA_PTR_TO_JSON(LanIp, lanIp_);
      DARABONBA_PTR_TO_JSON(LanMask, lanMask_);
      DARABONBA_PTR_TO_JSON(LanStatus, lanStatus_);
      DARABONBA_PTR_TO_JSON(LogIp, logIp_);
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentApgroupId, parentApgroupId_);
      DARABONBA_PTR_TO_JSON(Passwd, passwd_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Route, route_);
      DARABONBA_PTR_TO_JSON(Scan, scan_);
      DARABONBA_PTR_TO_JSON(TokenServer, tokenServer_);
      DARABONBA_PTR_TO_JSON(Vpn, vpn_);
      DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, SaveApgroupBasicConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Dai, dai_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EchoInt, echoInt_);
      DARABONBA_PTR_FROM_JSON(Failover, failover_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InsecureAllowed, insecureAllowed_);
      DARABONBA_PTR_FROM_JSON(IsConfigStrongConsistency, isConfigStrongConsistency_);
      DARABONBA_PTR_FROM_JSON(LanIp, lanIp_);
      DARABONBA_PTR_FROM_JSON(LanMask, lanMask_);
      DARABONBA_PTR_FROM_JSON(LanStatus, lanStatus_);
      DARABONBA_PTR_FROM_JSON(LogIp, logIp_);
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentApgroupId, parentApgroupId_);
      DARABONBA_PTR_FROM_JSON(Passwd, passwd_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Route, route_);
      DARABONBA_PTR_FROM_JSON(Scan, scan_);
      DARABONBA_PTR_FROM_JSON(TokenServer, tokenServer_);
      DARABONBA_PTR_FROM_JSON(Vpn, vpn_);
      DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
    };
    SaveApgroupBasicConfigRequest() = default ;
    SaveApgroupBasicConfigRequest(const SaveApgroupBasicConfigRequest &) = default ;
    SaveApgroupBasicConfigRequest(SaveApgroupBasicConfigRequest &&) = default ;
    SaveApgroupBasicConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveApgroupBasicConfigRequest() = default ;
    SaveApgroupBasicConfigRequest& operator=(const SaveApgroupBasicConfigRequest &) = default ;
    SaveApgroupBasicConfigRequest& operator=(SaveApgroupBasicConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->country_ == nullptr && this->dai_ == nullptr && this->description_ == nullptr && this->echoInt_ == nullptr
        && this->failover_ == nullptr && this->id_ == nullptr && this->insecureAllowed_ == nullptr && this->isConfigStrongConsistency_ == nullptr && this->lanIp_ == nullptr
        && this->lanMask_ == nullptr && this->lanStatus_ == nullptr && this->logIp_ == nullptr && this->logLevel_ == nullptr && this->name_ == nullptr
        && this->parentApgroupId_ == nullptr && this->passwd_ == nullptr && this->protocol_ == nullptr && this->route_ == nullptr && this->scan_ == nullptr
        && this->tokenServer_ == nullptr && this->vpn_ == nullptr && this->workMode_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline SaveApgroupBasicConfigRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SaveApgroupBasicConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline SaveApgroupBasicConfigRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // dai Field Functions 
    bool hasDai() const { return this->dai_ != nullptr;};
    void deleteDai() { this->dai_ = nullptr;};
    inline string getDai() const { DARABONBA_PTR_GET_DEFAULT(dai_, "") };
    inline SaveApgroupBasicConfigRequest& setDai(string dai) { DARABONBA_PTR_SET_VALUE(dai_, dai) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SaveApgroupBasicConfigRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // echoInt Field Functions 
    bool hasEchoInt() const { return this->echoInt_ != nullptr;};
    void deleteEchoInt() { this->echoInt_ = nullptr;};
    inline int32_t getEchoInt() const { DARABONBA_PTR_GET_DEFAULT(echoInt_, 0) };
    inline SaveApgroupBasicConfigRequest& setEchoInt(int32_t echoInt) { DARABONBA_PTR_SET_VALUE(echoInt_, echoInt) };


    // failover Field Functions 
    bool hasFailover() const { return this->failover_ != nullptr;};
    void deleteFailover() { this->failover_ = nullptr;};
    inline int32_t getFailover() const { DARABONBA_PTR_GET_DEFAULT(failover_, 0) };
    inline SaveApgroupBasicConfigRequest& setFailover(int32_t failover) { DARABONBA_PTR_SET_VALUE(failover_, failover) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SaveApgroupBasicConfigRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // insecureAllowed Field Functions 
    bool hasInsecureAllowed() const { return this->insecureAllowed_ != nullptr;};
    void deleteInsecureAllowed() { this->insecureAllowed_ = nullptr;};
    inline int32_t getInsecureAllowed() const { DARABONBA_PTR_GET_DEFAULT(insecureAllowed_, 0) };
    inline SaveApgroupBasicConfigRequest& setInsecureAllowed(int32_t insecureAllowed) { DARABONBA_PTR_SET_VALUE(insecureAllowed_, insecureAllowed) };


    // isConfigStrongConsistency Field Functions 
    bool hasIsConfigStrongConsistency() const { return this->isConfigStrongConsistency_ != nullptr;};
    void deleteIsConfigStrongConsistency() { this->isConfigStrongConsistency_ = nullptr;};
    inline bool getIsConfigStrongConsistency() const { DARABONBA_PTR_GET_DEFAULT(isConfigStrongConsistency_, false) };
    inline SaveApgroupBasicConfigRequest& setIsConfigStrongConsistency(bool isConfigStrongConsistency) { DARABONBA_PTR_SET_VALUE(isConfigStrongConsistency_, isConfigStrongConsistency) };


    // lanIp Field Functions 
    bool hasLanIp() const { return this->lanIp_ != nullptr;};
    void deleteLanIp() { this->lanIp_ = nullptr;};
    inline string getLanIp() const { DARABONBA_PTR_GET_DEFAULT(lanIp_, "") };
    inline SaveApgroupBasicConfigRequest& setLanIp(string lanIp) { DARABONBA_PTR_SET_VALUE(lanIp_, lanIp) };


    // lanMask Field Functions 
    bool hasLanMask() const { return this->lanMask_ != nullptr;};
    void deleteLanMask() { this->lanMask_ = nullptr;};
    inline string getLanMask() const { DARABONBA_PTR_GET_DEFAULT(lanMask_, "") };
    inline SaveApgroupBasicConfigRequest& setLanMask(string lanMask) { DARABONBA_PTR_SET_VALUE(lanMask_, lanMask) };


    // lanStatus Field Functions 
    bool hasLanStatus() const { return this->lanStatus_ != nullptr;};
    void deleteLanStatus() { this->lanStatus_ = nullptr;};
    inline int32_t getLanStatus() const { DARABONBA_PTR_GET_DEFAULT(lanStatus_, 0) };
    inline SaveApgroupBasicConfigRequest& setLanStatus(int32_t lanStatus) { DARABONBA_PTR_SET_VALUE(lanStatus_, lanStatus) };


    // logIp Field Functions 
    bool hasLogIp() const { return this->logIp_ != nullptr;};
    void deleteLogIp() { this->logIp_ = nullptr;};
    inline string getLogIp() const { DARABONBA_PTR_GET_DEFAULT(logIp_, "") };
    inline SaveApgroupBasicConfigRequest& setLogIp(string logIp) { DARABONBA_PTR_SET_VALUE(logIp_, logIp) };


    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline int32_t getLogLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, 0) };
    inline SaveApgroupBasicConfigRequest& setLogLevel(int32_t logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SaveApgroupBasicConfigRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentApgroupId Field Functions 
    bool hasParentApgroupId() const { return this->parentApgroupId_ != nullptr;};
    void deleteParentApgroupId() { this->parentApgroupId_ = nullptr;};
    inline int64_t getParentApgroupId() const { DARABONBA_PTR_GET_DEFAULT(parentApgroupId_, 0L) };
    inline SaveApgroupBasicConfigRequest& setParentApgroupId(int64_t parentApgroupId) { DARABONBA_PTR_SET_VALUE(parentApgroupId_, parentApgroupId) };


    // passwd Field Functions 
    bool hasPasswd() const { return this->passwd_ != nullptr;};
    void deletePasswd() { this->passwd_ = nullptr;};
    inline string getPasswd() const { DARABONBA_PTR_GET_DEFAULT(passwd_, "") };
    inline SaveApgroupBasicConfigRequest& setPasswd(string passwd) { DARABONBA_PTR_SET_VALUE(passwd_, passwd) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline SaveApgroupBasicConfigRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // route Field Functions 
    bool hasRoute() const { return this->route_ != nullptr;};
    void deleteRoute() { this->route_ = nullptr;};
    inline string getRoute() const { DARABONBA_PTR_GET_DEFAULT(route_, "") };
    inline SaveApgroupBasicConfigRequest& setRoute(string route) { DARABONBA_PTR_SET_VALUE(route_, route) };


    // scan Field Functions 
    bool hasScan() const { return this->scan_ != nullptr;};
    void deleteScan() { this->scan_ = nullptr;};
    inline int32_t getScan() const { DARABONBA_PTR_GET_DEFAULT(scan_, 0) };
    inline SaveApgroupBasicConfigRequest& setScan(int32_t scan) { DARABONBA_PTR_SET_VALUE(scan_, scan) };


    // tokenServer Field Functions 
    bool hasTokenServer() const { return this->tokenServer_ != nullptr;};
    void deleteTokenServer() { this->tokenServer_ = nullptr;};
    inline string getTokenServer() const { DARABONBA_PTR_GET_DEFAULT(tokenServer_, "") };
    inline SaveApgroupBasicConfigRequest& setTokenServer(string tokenServer) { DARABONBA_PTR_SET_VALUE(tokenServer_, tokenServer) };


    // vpn Field Functions 
    bool hasVpn() const { return this->vpn_ != nullptr;};
    void deleteVpn() { this->vpn_ = nullptr;};
    inline string getVpn() const { DARABONBA_PTR_GET_DEFAULT(vpn_, "") };
    inline SaveApgroupBasicConfigRequest& setVpn(string vpn) { DARABONBA_PTR_SET_VALUE(vpn_, vpn) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline int32_t getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, 0) };
    inline SaveApgroupBasicConfigRequest& setWorkMode(int32_t workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> country_ {};
    shared_ptr<string> dai_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<int32_t> echoInt_ {};
    shared_ptr<int32_t> failover_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<int32_t> insecureAllowed_ {};
    // This parameter is required.
    shared_ptr<bool> isConfigStrongConsistency_ {};
    shared_ptr<string> lanIp_ {};
    shared_ptr<string> lanMask_ {};
    shared_ptr<int32_t> lanStatus_ {};
    shared_ptr<string> logIp_ {};
    shared_ptr<int32_t> logLevel_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> parentApgroupId_ {};
    shared_ptr<string> passwd_ {};
    shared_ptr<string> protocol_ {};
    shared_ptr<string> route_ {};
    shared_ptr<int32_t> scan_ {};
    shared_ptr<string> tokenServer_ {};
    shared_ptr<string> vpn_ {};
    shared_ptr<int32_t> workMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
