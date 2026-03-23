// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAPGROUPSSIDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEAPGROUPSSIDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class SaveApgroupSsidConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveApgroupSsidConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcctPort, acctPort_);
      DARABONBA_PTR_TO_JSON(AcctSecret, acctSecret_);
      DARABONBA_PTR_TO_JSON(AcctServer, acctServer_);
      DARABONBA_PTR_TO_JSON(ApgroupId, apgroupId_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AuthCache, authCache_);
      DARABONBA_PTR_TO_JSON(AuthPort, authPort_);
      DARABONBA_PTR_TO_JSON(AuthSecret, authSecret_);
      DARABONBA_PTR_TO_JSON(AuthServer, authServer_);
      DARABONBA_PTR_TO_JSON(Binding, binding_);
      DARABONBA_PTR_TO_JSON(Cir, cir_);
      DARABONBA_PTR_TO_JSON(DaeClient, daeClient_);
      DARABONBA_PTR_TO_JSON(DaePort, daePort_);
      DARABONBA_PTR_TO_JSON(DaeSecret, daeSecret_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(DisassocLowAck, disassocLowAck_);
      DARABONBA_PTR_TO_JSON(DisassocWeakRssi, disassocWeakRssi_);
      DARABONBA_PTR_TO_JSON(DynamicVlan, dynamicVlan_);
      DARABONBA_PTR_TO_JSON(Effect, effect_);
      DARABONBA_PTR_TO_JSON(EncKey, encKey_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(Hidden, hidden_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ieee80211w, ieee80211w_);
      DARABONBA_PTR_TO_JSON(IgnoreWeakProbe, ignoreWeakProbe_);
      DARABONBA_PTR_TO_JSON(Isolate, isolate_);
      DARABONBA_PTR_TO_JSON(LiteEffect, liteEffect_);
      DARABONBA_PTR_TO_JSON(MaxInactivity, maxInactivity_);
      DARABONBA_PTR_TO_JSON(Maxassoc, maxassoc_);
      DARABONBA_PTR_TO_JSON(MulticastForward, multicastForward_);
      DARABONBA_PTR_TO_JSON(Nasid, nasid_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NewSsid, newSsid_);
      DARABONBA_PTR_TO_JSON(Ownip, ownip_);
      DARABONBA_PTR_TO_JSON(SecondaryAcctPort, secondaryAcctPort_);
      DARABONBA_PTR_TO_JSON(SecondaryAcctSecret, secondaryAcctSecret_);
      DARABONBA_PTR_TO_JSON(SecondaryAcctServer, secondaryAcctServer_);
      DARABONBA_PTR_TO_JSON(SecondaryAuthPort, secondaryAuthPort_);
      DARABONBA_PTR_TO_JSON(SecondaryAuthSecret, secondaryAuthSecret_);
      DARABONBA_PTR_TO_JSON(SecondaryAuthServer, secondaryAuthServer_);
      DARABONBA_PTR_TO_JSON(ShortPreamble, shortPreamble_);
      DARABONBA_PTR_TO_JSON(Ssid, ssid_);
      DARABONBA_PTR_TO_JSON(SsidLb, ssidLb_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VlanDhcp, vlanDhcp_);
      DARABONBA_PTR_TO_JSON(Wmm, wmm_);
    };
    friend void from_json(const Darabonba::Json& j, SaveApgroupSsidConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcctPort, acctPort_);
      DARABONBA_PTR_FROM_JSON(AcctSecret, acctSecret_);
      DARABONBA_PTR_FROM_JSON(AcctServer, acctServer_);
      DARABONBA_PTR_FROM_JSON(ApgroupId, apgroupId_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AuthCache, authCache_);
      DARABONBA_PTR_FROM_JSON(AuthPort, authPort_);
      DARABONBA_PTR_FROM_JSON(AuthSecret, authSecret_);
      DARABONBA_PTR_FROM_JSON(AuthServer, authServer_);
      DARABONBA_PTR_FROM_JSON(Binding, binding_);
      DARABONBA_PTR_FROM_JSON(Cir, cir_);
      DARABONBA_PTR_FROM_JSON(DaeClient, daeClient_);
      DARABONBA_PTR_FROM_JSON(DaePort, daePort_);
      DARABONBA_PTR_FROM_JSON(DaeSecret, daeSecret_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(DisassocLowAck, disassocLowAck_);
      DARABONBA_PTR_FROM_JSON(DisassocWeakRssi, disassocWeakRssi_);
      DARABONBA_PTR_FROM_JSON(DynamicVlan, dynamicVlan_);
      DARABONBA_PTR_FROM_JSON(Effect, effect_);
      DARABONBA_PTR_FROM_JSON(EncKey, encKey_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(Hidden, hidden_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ieee80211w, ieee80211w_);
      DARABONBA_PTR_FROM_JSON(IgnoreWeakProbe, ignoreWeakProbe_);
      DARABONBA_PTR_FROM_JSON(Isolate, isolate_);
      DARABONBA_PTR_FROM_JSON(LiteEffect, liteEffect_);
      DARABONBA_PTR_FROM_JSON(MaxInactivity, maxInactivity_);
      DARABONBA_PTR_FROM_JSON(Maxassoc, maxassoc_);
      DARABONBA_PTR_FROM_JSON(MulticastForward, multicastForward_);
      DARABONBA_PTR_FROM_JSON(Nasid, nasid_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NewSsid, newSsid_);
      DARABONBA_PTR_FROM_JSON(Ownip, ownip_);
      DARABONBA_PTR_FROM_JSON(SecondaryAcctPort, secondaryAcctPort_);
      DARABONBA_PTR_FROM_JSON(SecondaryAcctSecret, secondaryAcctSecret_);
      DARABONBA_PTR_FROM_JSON(SecondaryAcctServer, secondaryAcctServer_);
      DARABONBA_PTR_FROM_JSON(SecondaryAuthPort, secondaryAuthPort_);
      DARABONBA_PTR_FROM_JSON(SecondaryAuthSecret, secondaryAuthSecret_);
      DARABONBA_PTR_FROM_JSON(SecondaryAuthServer, secondaryAuthServer_);
      DARABONBA_PTR_FROM_JSON(ShortPreamble, shortPreamble_);
      DARABONBA_PTR_FROM_JSON(Ssid, ssid_);
      DARABONBA_PTR_FROM_JSON(SsidLb, ssidLb_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VlanDhcp, vlanDhcp_);
      DARABONBA_PTR_FROM_JSON(Wmm, wmm_);
    };
    SaveApgroupSsidConfigRequest() = default ;
    SaveApgroupSsidConfigRequest(const SaveApgroupSsidConfigRequest &) = default ;
    SaveApgroupSsidConfigRequest(SaveApgroupSsidConfigRequest &&) = default ;
    SaveApgroupSsidConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveApgroupSsidConfigRequest() = default ;
    SaveApgroupSsidConfigRequest& operator=(const SaveApgroupSsidConfigRequest &) = default ;
    SaveApgroupSsidConfigRequest& operator=(SaveApgroupSsidConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acctPort_ == nullptr
        && this->acctSecret_ == nullptr && this->acctServer_ == nullptr && this->apgroupId_ == nullptr && this->appCode_ == nullptr && this->appName_ == nullptr
        && this->authCache_ == nullptr && this->authPort_ == nullptr && this->authSecret_ == nullptr && this->authServer_ == nullptr && this->binding_ == nullptr
        && this->cir_ == nullptr && this->daeClient_ == nullptr && this->daePort_ == nullptr && this->daeSecret_ == nullptr && this->disabled_ == nullptr
        && this->disassocLowAck_ == nullptr && this->disassocWeakRssi_ == nullptr && this->dynamicVlan_ == nullptr && this->effect_ == nullptr && this->encKey_ == nullptr
        && this->encryption_ == nullptr && this->hidden_ == nullptr && this->id_ == nullptr && this->ieee80211w_ == nullptr && this->ignoreWeakProbe_ == nullptr
        && this->isolate_ == nullptr && this->liteEffect_ == nullptr && this->maxInactivity_ == nullptr && this->maxassoc_ == nullptr && this->multicastForward_ == nullptr
        && this->nasid_ == nullptr && this->network_ == nullptr && this->newSsid_ == nullptr && this->ownip_ == nullptr && this->secondaryAcctPort_ == nullptr
        && this->secondaryAcctSecret_ == nullptr && this->secondaryAcctServer_ == nullptr && this->secondaryAuthPort_ == nullptr && this->secondaryAuthSecret_ == nullptr && this->secondaryAuthServer_ == nullptr
        && this->shortPreamble_ == nullptr && this->ssid_ == nullptr && this->ssidLb_ == nullptr && this->type_ == nullptr && this->vlanDhcp_ == nullptr
        && this->wmm_ == nullptr; };
    // acctPort Field Functions 
    bool hasAcctPort() const { return this->acctPort_ != nullptr;};
    void deleteAcctPort() { this->acctPort_ = nullptr;};
    inline int32_t getAcctPort() const { DARABONBA_PTR_GET_DEFAULT(acctPort_, 0) };
    inline SaveApgroupSsidConfigRequest& setAcctPort(int32_t acctPort) { DARABONBA_PTR_SET_VALUE(acctPort_, acctPort) };


    // acctSecret Field Functions 
    bool hasAcctSecret() const { return this->acctSecret_ != nullptr;};
    void deleteAcctSecret() { this->acctSecret_ = nullptr;};
    inline string getAcctSecret() const { DARABONBA_PTR_GET_DEFAULT(acctSecret_, "") };
    inline SaveApgroupSsidConfigRequest& setAcctSecret(string acctSecret) { DARABONBA_PTR_SET_VALUE(acctSecret_, acctSecret) };


    // acctServer Field Functions 
    bool hasAcctServer() const { return this->acctServer_ != nullptr;};
    void deleteAcctServer() { this->acctServer_ = nullptr;};
    inline string getAcctServer() const { DARABONBA_PTR_GET_DEFAULT(acctServer_, "") };
    inline SaveApgroupSsidConfigRequest& setAcctServer(string acctServer) { DARABONBA_PTR_SET_VALUE(acctServer_, acctServer) };


    // apgroupId Field Functions 
    bool hasApgroupId() const { return this->apgroupId_ != nullptr;};
    void deleteApgroupId() { this->apgroupId_ = nullptr;};
    inline string getApgroupId() const { DARABONBA_PTR_GET_DEFAULT(apgroupId_, "") };
    inline SaveApgroupSsidConfigRequest& setApgroupId(string apgroupId) { DARABONBA_PTR_SET_VALUE(apgroupId_, apgroupId) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline SaveApgroupSsidConfigRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SaveApgroupSsidConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // authCache Field Functions 
    bool hasAuthCache() const { return this->authCache_ != nullptr;};
    void deleteAuthCache() { this->authCache_ = nullptr;};
    inline string getAuthCache() const { DARABONBA_PTR_GET_DEFAULT(authCache_, "") };
    inline SaveApgroupSsidConfigRequest& setAuthCache(string authCache) { DARABONBA_PTR_SET_VALUE(authCache_, authCache) };


    // authPort Field Functions 
    bool hasAuthPort() const { return this->authPort_ != nullptr;};
    void deleteAuthPort() { this->authPort_ = nullptr;};
    inline int32_t getAuthPort() const { DARABONBA_PTR_GET_DEFAULT(authPort_, 0) };
    inline SaveApgroupSsidConfigRequest& setAuthPort(int32_t authPort) { DARABONBA_PTR_SET_VALUE(authPort_, authPort) };


    // authSecret Field Functions 
    bool hasAuthSecret() const { return this->authSecret_ != nullptr;};
    void deleteAuthSecret() { this->authSecret_ = nullptr;};
    inline string getAuthSecret() const { DARABONBA_PTR_GET_DEFAULT(authSecret_, "") };
    inline SaveApgroupSsidConfigRequest& setAuthSecret(string authSecret) { DARABONBA_PTR_SET_VALUE(authSecret_, authSecret) };


    // authServer Field Functions 
    bool hasAuthServer() const { return this->authServer_ != nullptr;};
    void deleteAuthServer() { this->authServer_ = nullptr;};
    inline string getAuthServer() const { DARABONBA_PTR_GET_DEFAULT(authServer_, "") };
    inline SaveApgroupSsidConfigRequest& setAuthServer(string authServer) { DARABONBA_PTR_SET_VALUE(authServer_, authServer) };


    // binding Field Functions 
    bool hasBinding() const { return this->binding_ != nullptr;};
    void deleteBinding() { this->binding_ = nullptr;};
    inline string getBinding() const { DARABONBA_PTR_GET_DEFAULT(binding_, "") };
    inline SaveApgroupSsidConfigRequest& setBinding(string binding) { DARABONBA_PTR_SET_VALUE(binding_, binding) };


    // cir Field Functions 
    bool hasCir() const { return this->cir_ != nullptr;};
    void deleteCir() { this->cir_ = nullptr;};
    inline int64_t getCir() const { DARABONBA_PTR_GET_DEFAULT(cir_, 0L) };
    inline SaveApgroupSsidConfigRequest& setCir(int64_t cir) { DARABONBA_PTR_SET_VALUE(cir_, cir) };


    // daeClient Field Functions 
    bool hasDaeClient() const { return this->daeClient_ != nullptr;};
    void deleteDaeClient() { this->daeClient_ = nullptr;};
    inline string getDaeClient() const { DARABONBA_PTR_GET_DEFAULT(daeClient_, "") };
    inline SaveApgroupSsidConfigRequest& setDaeClient(string daeClient) { DARABONBA_PTR_SET_VALUE(daeClient_, daeClient) };


    // daePort Field Functions 
    bool hasDaePort() const { return this->daePort_ != nullptr;};
    void deleteDaePort() { this->daePort_ = nullptr;};
    inline int32_t getDaePort() const { DARABONBA_PTR_GET_DEFAULT(daePort_, 0) };
    inline SaveApgroupSsidConfigRequest& setDaePort(int32_t daePort) { DARABONBA_PTR_SET_VALUE(daePort_, daePort) };


    // daeSecret Field Functions 
    bool hasDaeSecret() const { return this->daeSecret_ != nullptr;};
    void deleteDaeSecret() { this->daeSecret_ = nullptr;};
    inline string getDaeSecret() const { DARABONBA_PTR_GET_DEFAULT(daeSecret_, "") };
    inline SaveApgroupSsidConfigRequest& setDaeSecret(string daeSecret) { DARABONBA_PTR_SET_VALUE(daeSecret_, daeSecret) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline string getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, "") };
    inline SaveApgroupSsidConfigRequest& setDisabled(string disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // disassocLowAck Field Functions 
    bool hasDisassocLowAck() const { return this->disassocLowAck_ != nullptr;};
    void deleteDisassocLowAck() { this->disassocLowAck_ = nullptr;};
    inline string getDisassocLowAck() const { DARABONBA_PTR_GET_DEFAULT(disassocLowAck_, "") };
    inline SaveApgroupSsidConfigRequest& setDisassocLowAck(string disassocLowAck) { DARABONBA_PTR_SET_VALUE(disassocLowAck_, disassocLowAck) };


    // disassocWeakRssi Field Functions 
    bool hasDisassocWeakRssi() const { return this->disassocWeakRssi_ != nullptr;};
    void deleteDisassocWeakRssi() { this->disassocWeakRssi_ = nullptr;};
    inline int32_t getDisassocWeakRssi() const { DARABONBA_PTR_GET_DEFAULT(disassocWeakRssi_, 0) };
    inline SaveApgroupSsidConfigRequest& setDisassocWeakRssi(int32_t disassocWeakRssi) { DARABONBA_PTR_SET_VALUE(disassocWeakRssi_, disassocWeakRssi) };


    // dynamicVlan Field Functions 
    bool hasDynamicVlan() const { return this->dynamicVlan_ != nullptr;};
    void deleteDynamicVlan() { this->dynamicVlan_ = nullptr;};
    inline int32_t getDynamicVlan() const { DARABONBA_PTR_GET_DEFAULT(dynamicVlan_, 0) };
    inline SaveApgroupSsidConfigRequest& setDynamicVlan(int32_t dynamicVlan) { DARABONBA_PTR_SET_VALUE(dynamicVlan_, dynamicVlan) };


    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline bool getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, false) };
    inline SaveApgroupSsidConfigRequest& setEffect(bool effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // encKey Field Functions 
    bool hasEncKey() const { return this->encKey_ != nullptr;};
    void deleteEncKey() { this->encKey_ = nullptr;};
    inline string getEncKey() const { DARABONBA_PTR_GET_DEFAULT(encKey_, "") };
    inline SaveApgroupSsidConfigRequest& setEncKey(string encKey) { DARABONBA_PTR_SET_VALUE(encKey_, encKey) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline string getEncryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
    inline SaveApgroupSsidConfigRequest& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


    // hidden Field Functions 
    bool hasHidden() const { return this->hidden_ != nullptr;};
    void deleteHidden() { this->hidden_ = nullptr;};
    inline string getHidden() const { DARABONBA_PTR_GET_DEFAULT(hidden_, "") };
    inline SaveApgroupSsidConfigRequest& setHidden(string hidden) { DARABONBA_PTR_SET_VALUE(hidden_, hidden) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SaveApgroupSsidConfigRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ieee80211w Field Functions 
    bool hasIeee80211w() const { return this->ieee80211w_ != nullptr;};
    void deleteIeee80211w() { this->ieee80211w_ = nullptr;};
    inline string getIeee80211w() const { DARABONBA_PTR_GET_DEFAULT(ieee80211w_, "") };
    inline SaveApgroupSsidConfigRequest& setIeee80211w(string ieee80211w) { DARABONBA_PTR_SET_VALUE(ieee80211w_, ieee80211w) };


    // ignoreWeakProbe Field Functions 
    bool hasIgnoreWeakProbe() const { return this->ignoreWeakProbe_ != nullptr;};
    void deleteIgnoreWeakProbe() { this->ignoreWeakProbe_ = nullptr;};
    inline int32_t getIgnoreWeakProbe() const { DARABONBA_PTR_GET_DEFAULT(ignoreWeakProbe_, 0) };
    inline SaveApgroupSsidConfigRequest& setIgnoreWeakProbe(int32_t ignoreWeakProbe) { DARABONBA_PTR_SET_VALUE(ignoreWeakProbe_, ignoreWeakProbe) };


    // isolate Field Functions 
    bool hasIsolate() const { return this->isolate_ != nullptr;};
    void deleteIsolate() { this->isolate_ = nullptr;};
    inline string getIsolate() const { DARABONBA_PTR_GET_DEFAULT(isolate_, "") };
    inline SaveApgroupSsidConfigRequest& setIsolate(string isolate) { DARABONBA_PTR_SET_VALUE(isolate_, isolate) };


    // liteEffect Field Functions 
    bool hasLiteEffect() const { return this->liteEffect_ != nullptr;};
    void deleteLiteEffect() { this->liteEffect_ = nullptr;};
    inline bool getLiteEffect() const { DARABONBA_PTR_GET_DEFAULT(liteEffect_, false) };
    inline SaveApgroupSsidConfigRequest& setLiteEffect(bool liteEffect) { DARABONBA_PTR_SET_VALUE(liteEffect_, liteEffect) };


    // maxInactivity Field Functions 
    bool hasMaxInactivity() const { return this->maxInactivity_ != nullptr;};
    void deleteMaxInactivity() { this->maxInactivity_ = nullptr;};
    inline int32_t getMaxInactivity() const { DARABONBA_PTR_GET_DEFAULT(maxInactivity_, 0) };
    inline SaveApgroupSsidConfigRequest& setMaxInactivity(int32_t maxInactivity) { DARABONBA_PTR_SET_VALUE(maxInactivity_, maxInactivity) };


    // maxassoc Field Functions 
    bool hasMaxassoc() const { return this->maxassoc_ != nullptr;};
    void deleteMaxassoc() { this->maxassoc_ = nullptr;};
    inline string getMaxassoc() const { DARABONBA_PTR_GET_DEFAULT(maxassoc_, "") };
    inline SaveApgroupSsidConfigRequest& setMaxassoc(string maxassoc) { DARABONBA_PTR_SET_VALUE(maxassoc_, maxassoc) };


    // multicastForward Field Functions 
    bool hasMulticastForward() const { return this->multicastForward_ != nullptr;};
    void deleteMulticastForward() { this->multicastForward_ = nullptr;};
    inline int32_t getMulticastForward() const { DARABONBA_PTR_GET_DEFAULT(multicastForward_, 0) };
    inline SaveApgroupSsidConfigRequest& setMulticastForward(int32_t multicastForward) { DARABONBA_PTR_SET_VALUE(multicastForward_, multicastForward) };


    // nasid Field Functions 
    bool hasNasid() const { return this->nasid_ != nullptr;};
    void deleteNasid() { this->nasid_ = nullptr;};
    inline string getNasid() const { DARABONBA_PTR_GET_DEFAULT(nasid_, "") };
    inline SaveApgroupSsidConfigRequest& setNasid(string nasid) { DARABONBA_PTR_SET_VALUE(nasid_, nasid) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline int32_t getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, 0) };
    inline SaveApgroupSsidConfigRequest& setNetwork(int32_t network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // newSsid Field Functions 
    bool hasNewSsid() const { return this->newSsid_ != nullptr;};
    void deleteNewSsid() { this->newSsid_ = nullptr;};
    inline string getNewSsid() const { DARABONBA_PTR_GET_DEFAULT(newSsid_, "") };
    inline SaveApgroupSsidConfigRequest& setNewSsid(string newSsid) { DARABONBA_PTR_SET_VALUE(newSsid_, newSsid) };


    // ownip Field Functions 
    bool hasOwnip() const { return this->ownip_ != nullptr;};
    void deleteOwnip() { this->ownip_ = nullptr;};
    inline string getOwnip() const { DARABONBA_PTR_GET_DEFAULT(ownip_, "") };
    inline SaveApgroupSsidConfigRequest& setOwnip(string ownip) { DARABONBA_PTR_SET_VALUE(ownip_, ownip) };


    // secondaryAcctPort Field Functions 
    bool hasSecondaryAcctPort() const { return this->secondaryAcctPort_ != nullptr;};
    void deleteSecondaryAcctPort() { this->secondaryAcctPort_ = nullptr;};
    inline int32_t getSecondaryAcctPort() const { DARABONBA_PTR_GET_DEFAULT(secondaryAcctPort_, 0) };
    inline SaveApgroupSsidConfigRequest& setSecondaryAcctPort(int32_t secondaryAcctPort) { DARABONBA_PTR_SET_VALUE(secondaryAcctPort_, secondaryAcctPort) };


    // secondaryAcctSecret Field Functions 
    bool hasSecondaryAcctSecret() const { return this->secondaryAcctSecret_ != nullptr;};
    void deleteSecondaryAcctSecret() { this->secondaryAcctSecret_ = nullptr;};
    inline string getSecondaryAcctSecret() const { DARABONBA_PTR_GET_DEFAULT(secondaryAcctSecret_, "") };
    inline SaveApgroupSsidConfigRequest& setSecondaryAcctSecret(string secondaryAcctSecret) { DARABONBA_PTR_SET_VALUE(secondaryAcctSecret_, secondaryAcctSecret) };


    // secondaryAcctServer Field Functions 
    bool hasSecondaryAcctServer() const { return this->secondaryAcctServer_ != nullptr;};
    void deleteSecondaryAcctServer() { this->secondaryAcctServer_ = nullptr;};
    inline string getSecondaryAcctServer() const { DARABONBA_PTR_GET_DEFAULT(secondaryAcctServer_, "") };
    inline SaveApgroupSsidConfigRequest& setSecondaryAcctServer(string secondaryAcctServer) { DARABONBA_PTR_SET_VALUE(secondaryAcctServer_, secondaryAcctServer) };


    // secondaryAuthPort Field Functions 
    bool hasSecondaryAuthPort() const { return this->secondaryAuthPort_ != nullptr;};
    void deleteSecondaryAuthPort() { this->secondaryAuthPort_ = nullptr;};
    inline int32_t getSecondaryAuthPort() const { DARABONBA_PTR_GET_DEFAULT(secondaryAuthPort_, 0) };
    inline SaveApgroupSsidConfigRequest& setSecondaryAuthPort(int32_t secondaryAuthPort) { DARABONBA_PTR_SET_VALUE(secondaryAuthPort_, secondaryAuthPort) };


    // secondaryAuthSecret Field Functions 
    bool hasSecondaryAuthSecret() const { return this->secondaryAuthSecret_ != nullptr;};
    void deleteSecondaryAuthSecret() { this->secondaryAuthSecret_ = nullptr;};
    inline string getSecondaryAuthSecret() const { DARABONBA_PTR_GET_DEFAULT(secondaryAuthSecret_, "") };
    inline SaveApgroupSsidConfigRequest& setSecondaryAuthSecret(string secondaryAuthSecret) { DARABONBA_PTR_SET_VALUE(secondaryAuthSecret_, secondaryAuthSecret) };


    // secondaryAuthServer Field Functions 
    bool hasSecondaryAuthServer() const { return this->secondaryAuthServer_ != nullptr;};
    void deleteSecondaryAuthServer() { this->secondaryAuthServer_ = nullptr;};
    inline string getSecondaryAuthServer() const { DARABONBA_PTR_GET_DEFAULT(secondaryAuthServer_, "") };
    inline SaveApgroupSsidConfigRequest& setSecondaryAuthServer(string secondaryAuthServer) { DARABONBA_PTR_SET_VALUE(secondaryAuthServer_, secondaryAuthServer) };


    // shortPreamble Field Functions 
    bool hasShortPreamble() const { return this->shortPreamble_ != nullptr;};
    void deleteShortPreamble() { this->shortPreamble_ = nullptr;};
    inline string getShortPreamble() const { DARABONBA_PTR_GET_DEFAULT(shortPreamble_, "") };
    inline SaveApgroupSsidConfigRequest& setShortPreamble(string shortPreamble) { DARABONBA_PTR_SET_VALUE(shortPreamble_, shortPreamble) };


    // ssid Field Functions 
    bool hasSsid() const { return this->ssid_ != nullptr;};
    void deleteSsid() { this->ssid_ = nullptr;};
    inline string getSsid() const { DARABONBA_PTR_GET_DEFAULT(ssid_, "") };
    inline SaveApgroupSsidConfigRequest& setSsid(string ssid) { DARABONBA_PTR_SET_VALUE(ssid_, ssid) };


    // ssidLb Field Functions 
    bool hasSsidLb() const { return this->ssidLb_ != nullptr;};
    void deleteSsidLb() { this->ssidLb_ = nullptr;};
    inline int32_t getSsidLb() const { DARABONBA_PTR_GET_DEFAULT(ssidLb_, 0) };
    inline SaveApgroupSsidConfigRequest& setSsidLb(int32_t ssidLb) { DARABONBA_PTR_SET_VALUE(ssidLb_, ssidLb) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline SaveApgroupSsidConfigRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vlanDhcp Field Functions 
    bool hasVlanDhcp() const { return this->vlanDhcp_ != nullptr;};
    void deleteVlanDhcp() { this->vlanDhcp_ = nullptr;};
    inline int32_t getVlanDhcp() const { DARABONBA_PTR_GET_DEFAULT(vlanDhcp_, 0) };
    inline SaveApgroupSsidConfigRequest& setVlanDhcp(int32_t vlanDhcp) { DARABONBA_PTR_SET_VALUE(vlanDhcp_, vlanDhcp) };


    // wmm Field Functions 
    bool hasWmm() const { return this->wmm_ != nullptr;};
    void deleteWmm() { this->wmm_ = nullptr;};
    inline string getWmm() const { DARABONBA_PTR_GET_DEFAULT(wmm_, "") };
    inline SaveApgroupSsidConfigRequest& setWmm(string wmm) { DARABONBA_PTR_SET_VALUE(wmm_, wmm) };


  protected:
    shared_ptr<int32_t> acctPort_ {};
    shared_ptr<string> acctSecret_ {};
    shared_ptr<string> acctServer_ {};
    // This parameter is required.
    shared_ptr<string> apgroupId_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<string> authCache_ {};
    shared_ptr<int32_t> authPort_ {};
    shared_ptr<string> authSecret_ {};
    shared_ptr<string> authServer_ {};
    // This parameter is required.
    shared_ptr<string> binding_ {};
    shared_ptr<int64_t> cir_ {};
    shared_ptr<string> daeClient_ {};
    shared_ptr<int32_t> daePort_ {};
    shared_ptr<string> daeSecret_ {};
    shared_ptr<string> disabled_ {};
    shared_ptr<string> disassocLowAck_ {};
    shared_ptr<int32_t> disassocWeakRssi_ {};
    shared_ptr<int32_t> dynamicVlan_ {};
    shared_ptr<bool> effect_ {};
    shared_ptr<string> encKey_ {};
    // This parameter is required.
    shared_ptr<string> encryption_ {};
    shared_ptr<string> hidden_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> ieee80211w_ {};
    shared_ptr<int32_t> ignoreWeakProbe_ {};
    shared_ptr<string> isolate_ {};
    shared_ptr<bool> liteEffect_ {};
    shared_ptr<int32_t> maxInactivity_ {};
    shared_ptr<string> maxassoc_ {};
    shared_ptr<int32_t> multicastForward_ {};
    shared_ptr<string> nasid_ {};
    // This parameter is required.
    shared_ptr<int32_t> network_ {};
    // This parameter is required.
    shared_ptr<string> newSsid_ {};
    shared_ptr<string> ownip_ {};
    shared_ptr<int32_t> secondaryAcctPort_ {};
    shared_ptr<string> secondaryAcctSecret_ {};
    shared_ptr<string> secondaryAcctServer_ {};
    shared_ptr<int32_t> secondaryAuthPort_ {};
    shared_ptr<string> secondaryAuthSecret_ {};
    shared_ptr<string> secondaryAuthServer_ {};
    shared_ptr<string> shortPreamble_ {};
    // This parameter is required.
    shared_ptr<string> ssid_ {};
    shared_ptr<int32_t> ssidLb_ {};
    shared_ptr<int32_t> type_ {};
    shared_ptr<int32_t> vlanDhcp_ {};
    shared_ptr<string> wmm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
