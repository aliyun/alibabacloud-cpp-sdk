// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAPSSIDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEAPSSIDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class SaveApSsidConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveApSsidConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcctPort, acctPort_);
      DARABONBA_PTR_TO_JSON(AcctSecret, acctSecret_);
      DARABONBA_PTR_TO_JSON(AcctServer, acctServer_);
      DARABONBA_PTR_TO_JSON(AcctStatusServerWork, acctStatusServerWork_);
      DARABONBA_PTR_TO_JSON(ApAssetId, apAssetId_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ArpProxyEnable, arpProxyEnable_);
      DARABONBA_PTR_TO_JSON(AuthCache, authCache_);
      DARABONBA_PTR_TO_JSON(AuthPort, authPort_);
      DARABONBA_PTR_TO_JSON(AuthSecret, authSecret_);
      DARABONBA_PTR_TO_JSON(AuthServer, authServer_);
      DARABONBA_PTR_TO_JSON(AuthStatusServerWork, authStatusServerWork_);
      DARABONBA_PTR_TO_JSON(Cir, cir_);
      DARABONBA_PTR_TO_JSON(CirStep, cirStep_);
      DARABONBA_PTR_TO_JSON(CirType, cirType_);
      DARABONBA_PTR_TO_JSON(CirUl, cirUl_);
      DARABONBA_PTR_TO_JSON(DaeClient, daeClient_);
      DARABONBA_PTR_TO_JSON(DaePort, daePort_);
      DARABONBA_PTR_TO_JSON(DaeSecret, daeSecret_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(DisassocLowAck, disassocLowAck_);
      DARABONBA_PTR_TO_JSON(DisassocWeakRssi, disassocWeakRssi_);
      DARABONBA_PTR_TO_JSON(DynamicVlan, dynamicVlan_);
      DARABONBA_PTR_TO_JSON(EncKey, encKey_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(FourthAuthPort, fourthAuthPort_);
      DARABONBA_PTR_TO_JSON(FourthAuthSecret, fourthAuthSecret_);
      DARABONBA_PTR_TO_JSON(FourthAuthServer, fourthAuthServer_);
      DARABONBA_PTR_TO_JSON(FtOverDs, ftOverDs_);
      DARABONBA_PTR_TO_JSON(Hidden, hidden_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ieee80211r, ieee80211r_);
      DARABONBA_PTR_TO_JSON(Ieee80211w, ieee80211w_);
      DARABONBA_PTR_TO_JSON(IgnoreWeakProbe, ignoreWeakProbe_);
      DARABONBA_PTR_TO_JSON(Isolate, isolate_);
      DARABONBA_PTR_TO_JSON(LiteEffect, liteEffect_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(MaxInactivity, maxInactivity_);
      DARABONBA_PTR_TO_JSON(Maxassoc, maxassoc_);
      DARABONBA_PTR_TO_JSON(MobilityDomain, mobilityDomain_);
      DARABONBA_PTR_TO_JSON(MulticastForward, multicastForward_);
      DARABONBA_PTR_TO_JSON(Nasid, nasid_);
      DARABONBA_PTR_TO_JSON(NdProxyWork, ndProxyWork_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Ownip, ownip_);
      DARABONBA_PTR_TO_JSON(RadioIndex, radioIndex_);
      DARABONBA_PTR_TO_JSON(SecondaryAcctPort, secondaryAcctPort_);
      DARABONBA_PTR_TO_JSON(SecondaryAcctSecret, secondaryAcctSecret_);
      DARABONBA_PTR_TO_JSON(SecondaryAcctServer, secondaryAcctServer_);
      DARABONBA_PTR_TO_JSON(SecondaryAuthPort, secondaryAuthPort_);
      DARABONBA_PTR_TO_JSON(SecondaryAuthSecret, secondaryAuthSecret_);
      DARABONBA_PTR_TO_JSON(SecondaryAuthServer, secondaryAuthServer_);
      DARABONBA_PTR_TO_JSON(SendConfigToAp, sendConfigToAp_);
      DARABONBA_PTR_TO_JSON(ShortPreamble, shortPreamble_);
      DARABONBA_PTR_TO_JSON(Ssid, ssid_);
      DARABONBA_PTR_TO_JSON(SsidLb, ssidLb_);
      DARABONBA_PTR_TO_JSON(ThirdAuthPort, thirdAuthPort_);
      DARABONBA_PTR_TO_JSON(ThirdAuthSecret, thirdAuthSecret_);
      DARABONBA_PTR_TO_JSON(ThirdAuthServer, thirdAuthServer_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VlanDhcp, vlanDhcp_);
      DARABONBA_PTR_TO_JSON(Wmm, wmm_);
    };
    friend void from_json(const Darabonba::Json& j, SaveApSsidConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcctPort, acctPort_);
      DARABONBA_PTR_FROM_JSON(AcctSecret, acctSecret_);
      DARABONBA_PTR_FROM_JSON(AcctServer, acctServer_);
      DARABONBA_PTR_FROM_JSON(AcctStatusServerWork, acctStatusServerWork_);
      DARABONBA_PTR_FROM_JSON(ApAssetId, apAssetId_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ArpProxyEnable, arpProxyEnable_);
      DARABONBA_PTR_FROM_JSON(AuthCache, authCache_);
      DARABONBA_PTR_FROM_JSON(AuthPort, authPort_);
      DARABONBA_PTR_FROM_JSON(AuthSecret, authSecret_);
      DARABONBA_PTR_FROM_JSON(AuthServer, authServer_);
      DARABONBA_PTR_FROM_JSON(AuthStatusServerWork, authStatusServerWork_);
      DARABONBA_PTR_FROM_JSON(Cir, cir_);
      DARABONBA_PTR_FROM_JSON(CirStep, cirStep_);
      DARABONBA_PTR_FROM_JSON(CirType, cirType_);
      DARABONBA_PTR_FROM_JSON(CirUl, cirUl_);
      DARABONBA_PTR_FROM_JSON(DaeClient, daeClient_);
      DARABONBA_PTR_FROM_JSON(DaePort, daePort_);
      DARABONBA_PTR_FROM_JSON(DaeSecret, daeSecret_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(DisassocLowAck, disassocLowAck_);
      DARABONBA_PTR_FROM_JSON(DisassocWeakRssi, disassocWeakRssi_);
      DARABONBA_PTR_FROM_JSON(DynamicVlan, dynamicVlan_);
      DARABONBA_PTR_FROM_JSON(EncKey, encKey_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(FourthAuthPort, fourthAuthPort_);
      DARABONBA_PTR_FROM_JSON(FourthAuthSecret, fourthAuthSecret_);
      DARABONBA_PTR_FROM_JSON(FourthAuthServer, fourthAuthServer_);
      DARABONBA_PTR_FROM_JSON(FtOverDs, ftOverDs_);
      DARABONBA_PTR_FROM_JSON(Hidden, hidden_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ieee80211r, ieee80211r_);
      DARABONBA_PTR_FROM_JSON(Ieee80211w, ieee80211w_);
      DARABONBA_PTR_FROM_JSON(IgnoreWeakProbe, ignoreWeakProbe_);
      DARABONBA_PTR_FROM_JSON(Isolate, isolate_);
      DARABONBA_PTR_FROM_JSON(LiteEffect, liteEffect_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(MaxInactivity, maxInactivity_);
      DARABONBA_PTR_FROM_JSON(Maxassoc, maxassoc_);
      DARABONBA_PTR_FROM_JSON(MobilityDomain, mobilityDomain_);
      DARABONBA_PTR_FROM_JSON(MulticastForward, multicastForward_);
      DARABONBA_PTR_FROM_JSON(Nasid, nasid_);
      DARABONBA_PTR_FROM_JSON(NdProxyWork, ndProxyWork_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Ownip, ownip_);
      DARABONBA_PTR_FROM_JSON(RadioIndex, radioIndex_);
      DARABONBA_PTR_FROM_JSON(SecondaryAcctPort, secondaryAcctPort_);
      DARABONBA_PTR_FROM_JSON(SecondaryAcctSecret, secondaryAcctSecret_);
      DARABONBA_PTR_FROM_JSON(SecondaryAcctServer, secondaryAcctServer_);
      DARABONBA_PTR_FROM_JSON(SecondaryAuthPort, secondaryAuthPort_);
      DARABONBA_PTR_FROM_JSON(SecondaryAuthSecret, secondaryAuthSecret_);
      DARABONBA_PTR_FROM_JSON(SecondaryAuthServer, secondaryAuthServer_);
      DARABONBA_PTR_FROM_JSON(SendConfigToAp, sendConfigToAp_);
      DARABONBA_PTR_FROM_JSON(ShortPreamble, shortPreamble_);
      DARABONBA_PTR_FROM_JSON(Ssid, ssid_);
      DARABONBA_PTR_FROM_JSON(SsidLb, ssidLb_);
      DARABONBA_PTR_FROM_JSON(ThirdAuthPort, thirdAuthPort_);
      DARABONBA_PTR_FROM_JSON(ThirdAuthSecret, thirdAuthSecret_);
      DARABONBA_PTR_FROM_JSON(ThirdAuthServer, thirdAuthServer_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VlanDhcp, vlanDhcp_);
      DARABONBA_PTR_FROM_JSON(Wmm, wmm_);
    };
    SaveApSsidConfigRequest() = default ;
    SaveApSsidConfigRequest(const SaveApSsidConfigRequest &) = default ;
    SaveApSsidConfigRequest(SaveApSsidConfigRequest &&) = default ;
    SaveApSsidConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveApSsidConfigRequest() = default ;
    SaveApSsidConfigRequest& operator=(const SaveApSsidConfigRequest &) = default ;
    SaveApSsidConfigRequest& operator=(SaveApSsidConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acctPort_ == nullptr
        && this->acctSecret_ == nullptr && this->acctServer_ == nullptr && this->acctStatusServerWork_ == nullptr && this->apAssetId_ == nullptr && this->appCode_ == nullptr
        && this->appName_ == nullptr && this->arpProxyEnable_ == nullptr && this->authCache_ == nullptr && this->authPort_ == nullptr && this->authSecret_ == nullptr
        && this->authServer_ == nullptr && this->authStatusServerWork_ == nullptr && this->cir_ == nullptr && this->cirStep_ == nullptr && this->cirType_ == nullptr
        && this->cirUl_ == nullptr && this->daeClient_ == nullptr && this->daePort_ == nullptr && this->daeSecret_ == nullptr && this->disabled_ == nullptr
        && this->disassocLowAck_ == nullptr && this->disassocWeakRssi_ == nullptr && this->dynamicVlan_ == nullptr && this->encKey_ == nullptr && this->encryption_ == nullptr
        && this->fourthAuthPort_ == nullptr && this->fourthAuthSecret_ == nullptr && this->fourthAuthServer_ == nullptr && this->ftOverDs_ == nullptr && this->hidden_ == nullptr
        && this->id_ == nullptr && this->ieee80211r_ == nullptr && this->ieee80211w_ == nullptr && this->ignoreWeakProbe_ == nullptr && this->isolate_ == nullptr
        && this->liteEffect_ == nullptr && this->mac_ == nullptr && this->maxInactivity_ == nullptr && this->maxassoc_ == nullptr && this->mobilityDomain_ == nullptr
        && this->multicastForward_ == nullptr && this->nasid_ == nullptr && this->ndProxyWork_ == nullptr && this->network_ == nullptr && this->ownip_ == nullptr
        && this->radioIndex_ == nullptr && this->secondaryAcctPort_ == nullptr && this->secondaryAcctSecret_ == nullptr && this->secondaryAcctServer_ == nullptr && this->secondaryAuthPort_ == nullptr
        && this->secondaryAuthSecret_ == nullptr && this->secondaryAuthServer_ == nullptr && this->sendConfigToAp_ == nullptr && this->shortPreamble_ == nullptr && this->ssid_ == nullptr
        && this->ssidLb_ == nullptr && this->thirdAuthPort_ == nullptr && this->thirdAuthSecret_ == nullptr && this->thirdAuthServer_ == nullptr && this->type_ == nullptr
        && this->vlanDhcp_ == nullptr && this->wmm_ == nullptr; };
    // acctPort Field Functions 
    bool hasAcctPort() const { return this->acctPort_ != nullptr;};
    void deleteAcctPort() { this->acctPort_ = nullptr;};
    inline int32_t getAcctPort() const { DARABONBA_PTR_GET_DEFAULT(acctPort_, 0) };
    inline SaveApSsidConfigRequest& setAcctPort(int32_t acctPort) { DARABONBA_PTR_SET_VALUE(acctPort_, acctPort) };


    // acctSecret Field Functions 
    bool hasAcctSecret() const { return this->acctSecret_ != nullptr;};
    void deleteAcctSecret() { this->acctSecret_ = nullptr;};
    inline string getAcctSecret() const { DARABONBA_PTR_GET_DEFAULT(acctSecret_, "") };
    inline SaveApSsidConfigRequest& setAcctSecret(string acctSecret) { DARABONBA_PTR_SET_VALUE(acctSecret_, acctSecret) };


    // acctServer Field Functions 
    bool hasAcctServer() const { return this->acctServer_ != nullptr;};
    void deleteAcctServer() { this->acctServer_ = nullptr;};
    inline string getAcctServer() const { DARABONBA_PTR_GET_DEFAULT(acctServer_, "") };
    inline SaveApSsidConfigRequest& setAcctServer(string acctServer) { DARABONBA_PTR_SET_VALUE(acctServer_, acctServer) };


    // acctStatusServerWork Field Functions 
    bool hasAcctStatusServerWork() const { return this->acctStatusServerWork_ != nullptr;};
    void deleteAcctStatusServerWork() { this->acctStatusServerWork_ = nullptr;};
    inline int32_t getAcctStatusServerWork() const { DARABONBA_PTR_GET_DEFAULT(acctStatusServerWork_, 0) };
    inline SaveApSsidConfigRequest& setAcctStatusServerWork(int32_t acctStatusServerWork) { DARABONBA_PTR_SET_VALUE(acctStatusServerWork_, acctStatusServerWork) };


    // apAssetId Field Functions 
    bool hasApAssetId() const { return this->apAssetId_ != nullptr;};
    void deleteApAssetId() { this->apAssetId_ = nullptr;};
    inline int64_t getApAssetId() const { DARABONBA_PTR_GET_DEFAULT(apAssetId_, 0L) };
    inline SaveApSsidConfigRequest& setApAssetId(int64_t apAssetId) { DARABONBA_PTR_SET_VALUE(apAssetId_, apAssetId) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline SaveApSsidConfigRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SaveApSsidConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // arpProxyEnable Field Functions 
    bool hasArpProxyEnable() const { return this->arpProxyEnable_ != nullptr;};
    void deleteArpProxyEnable() { this->arpProxyEnable_ = nullptr;};
    inline int32_t getArpProxyEnable() const { DARABONBA_PTR_GET_DEFAULT(arpProxyEnable_, 0) };
    inline SaveApSsidConfigRequest& setArpProxyEnable(int32_t arpProxyEnable) { DARABONBA_PTR_SET_VALUE(arpProxyEnable_, arpProxyEnable) };


    // authCache Field Functions 
    bool hasAuthCache() const { return this->authCache_ != nullptr;};
    void deleteAuthCache() { this->authCache_ = nullptr;};
    inline string getAuthCache() const { DARABONBA_PTR_GET_DEFAULT(authCache_, "") };
    inline SaveApSsidConfigRequest& setAuthCache(string authCache) { DARABONBA_PTR_SET_VALUE(authCache_, authCache) };


    // authPort Field Functions 
    bool hasAuthPort() const { return this->authPort_ != nullptr;};
    void deleteAuthPort() { this->authPort_ = nullptr;};
    inline int32_t getAuthPort() const { DARABONBA_PTR_GET_DEFAULT(authPort_, 0) };
    inline SaveApSsidConfigRequest& setAuthPort(int32_t authPort) { DARABONBA_PTR_SET_VALUE(authPort_, authPort) };


    // authSecret Field Functions 
    bool hasAuthSecret() const { return this->authSecret_ != nullptr;};
    void deleteAuthSecret() { this->authSecret_ = nullptr;};
    inline string getAuthSecret() const { DARABONBA_PTR_GET_DEFAULT(authSecret_, "") };
    inline SaveApSsidConfigRequest& setAuthSecret(string authSecret) { DARABONBA_PTR_SET_VALUE(authSecret_, authSecret) };


    // authServer Field Functions 
    bool hasAuthServer() const { return this->authServer_ != nullptr;};
    void deleteAuthServer() { this->authServer_ = nullptr;};
    inline string getAuthServer() const { DARABONBA_PTR_GET_DEFAULT(authServer_, "") };
    inline SaveApSsidConfigRequest& setAuthServer(string authServer) { DARABONBA_PTR_SET_VALUE(authServer_, authServer) };


    // authStatusServerWork Field Functions 
    bool hasAuthStatusServerWork() const { return this->authStatusServerWork_ != nullptr;};
    void deleteAuthStatusServerWork() { this->authStatusServerWork_ = nullptr;};
    inline int32_t getAuthStatusServerWork() const { DARABONBA_PTR_GET_DEFAULT(authStatusServerWork_, 0) };
    inline SaveApSsidConfigRequest& setAuthStatusServerWork(int32_t authStatusServerWork) { DARABONBA_PTR_SET_VALUE(authStatusServerWork_, authStatusServerWork) };


    // cir Field Functions 
    bool hasCir() const { return this->cir_ != nullptr;};
    void deleteCir() { this->cir_ = nullptr;};
    inline int64_t getCir() const { DARABONBA_PTR_GET_DEFAULT(cir_, 0L) };
    inline SaveApSsidConfigRequest& setCir(int64_t cir) { DARABONBA_PTR_SET_VALUE(cir_, cir) };


    // cirStep Field Functions 
    bool hasCirStep() const { return this->cirStep_ != nullptr;};
    void deleteCirStep() { this->cirStep_ = nullptr;};
    inline int64_t getCirStep() const { DARABONBA_PTR_GET_DEFAULT(cirStep_, 0L) };
    inline SaveApSsidConfigRequest& setCirStep(int64_t cirStep) { DARABONBA_PTR_SET_VALUE(cirStep_, cirStep) };


    // cirType Field Functions 
    bool hasCirType() const { return this->cirType_ != nullptr;};
    void deleteCirType() { this->cirType_ = nullptr;};
    inline int32_t getCirType() const { DARABONBA_PTR_GET_DEFAULT(cirType_, 0) };
    inline SaveApSsidConfigRequest& setCirType(int32_t cirType) { DARABONBA_PTR_SET_VALUE(cirType_, cirType) };


    // cirUl Field Functions 
    bool hasCirUl() const { return this->cirUl_ != nullptr;};
    void deleteCirUl() { this->cirUl_ = nullptr;};
    inline int64_t getCirUl() const { DARABONBA_PTR_GET_DEFAULT(cirUl_, 0L) };
    inline SaveApSsidConfigRequest& setCirUl(int64_t cirUl) { DARABONBA_PTR_SET_VALUE(cirUl_, cirUl) };


    // daeClient Field Functions 
    bool hasDaeClient() const { return this->daeClient_ != nullptr;};
    void deleteDaeClient() { this->daeClient_ = nullptr;};
    inline string getDaeClient() const { DARABONBA_PTR_GET_DEFAULT(daeClient_, "") };
    inline SaveApSsidConfigRequest& setDaeClient(string daeClient) { DARABONBA_PTR_SET_VALUE(daeClient_, daeClient) };


    // daePort Field Functions 
    bool hasDaePort() const { return this->daePort_ != nullptr;};
    void deleteDaePort() { this->daePort_ = nullptr;};
    inline int32_t getDaePort() const { DARABONBA_PTR_GET_DEFAULT(daePort_, 0) };
    inline SaveApSsidConfigRequest& setDaePort(int32_t daePort) { DARABONBA_PTR_SET_VALUE(daePort_, daePort) };


    // daeSecret Field Functions 
    bool hasDaeSecret() const { return this->daeSecret_ != nullptr;};
    void deleteDaeSecret() { this->daeSecret_ = nullptr;};
    inline string getDaeSecret() const { DARABONBA_PTR_GET_DEFAULT(daeSecret_, "") };
    inline SaveApSsidConfigRequest& setDaeSecret(string daeSecret) { DARABONBA_PTR_SET_VALUE(daeSecret_, daeSecret) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline string getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, "") };
    inline SaveApSsidConfigRequest& setDisabled(string disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // disassocLowAck Field Functions 
    bool hasDisassocLowAck() const { return this->disassocLowAck_ != nullptr;};
    void deleteDisassocLowAck() { this->disassocLowAck_ = nullptr;};
    inline string getDisassocLowAck() const { DARABONBA_PTR_GET_DEFAULT(disassocLowAck_, "") };
    inline SaveApSsidConfigRequest& setDisassocLowAck(string disassocLowAck) { DARABONBA_PTR_SET_VALUE(disassocLowAck_, disassocLowAck) };


    // disassocWeakRssi Field Functions 
    bool hasDisassocWeakRssi() const { return this->disassocWeakRssi_ != nullptr;};
    void deleteDisassocWeakRssi() { this->disassocWeakRssi_ = nullptr;};
    inline int32_t getDisassocWeakRssi() const { DARABONBA_PTR_GET_DEFAULT(disassocWeakRssi_, 0) };
    inline SaveApSsidConfigRequest& setDisassocWeakRssi(int32_t disassocWeakRssi) { DARABONBA_PTR_SET_VALUE(disassocWeakRssi_, disassocWeakRssi) };


    // dynamicVlan Field Functions 
    bool hasDynamicVlan() const { return this->dynamicVlan_ != nullptr;};
    void deleteDynamicVlan() { this->dynamicVlan_ = nullptr;};
    inline int32_t getDynamicVlan() const { DARABONBA_PTR_GET_DEFAULT(dynamicVlan_, 0) };
    inline SaveApSsidConfigRequest& setDynamicVlan(int32_t dynamicVlan) { DARABONBA_PTR_SET_VALUE(dynamicVlan_, dynamicVlan) };


    // encKey Field Functions 
    bool hasEncKey() const { return this->encKey_ != nullptr;};
    void deleteEncKey() { this->encKey_ = nullptr;};
    inline string getEncKey() const { DARABONBA_PTR_GET_DEFAULT(encKey_, "") };
    inline SaveApSsidConfigRequest& setEncKey(string encKey) { DARABONBA_PTR_SET_VALUE(encKey_, encKey) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline string getEncryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
    inline SaveApSsidConfigRequest& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


    // fourthAuthPort Field Functions 
    bool hasFourthAuthPort() const { return this->fourthAuthPort_ != nullptr;};
    void deleteFourthAuthPort() { this->fourthAuthPort_ = nullptr;};
    inline int32_t getFourthAuthPort() const { DARABONBA_PTR_GET_DEFAULT(fourthAuthPort_, 0) };
    inline SaveApSsidConfigRequest& setFourthAuthPort(int32_t fourthAuthPort) { DARABONBA_PTR_SET_VALUE(fourthAuthPort_, fourthAuthPort) };


    // fourthAuthSecret Field Functions 
    bool hasFourthAuthSecret() const { return this->fourthAuthSecret_ != nullptr;};
    void deleteFourthAuthSecret() { this->fourthAuthSecret_ = nullptr;};
    inline string getFourthAuthSecret() const { DARABONBA_PTR_GET_DEFAULT(fourthAuthSecret_, "") };
    inline SaveApSsidConfigRequest& setFourthAuthSecret(string fourthAuthSecret) { DARABONBA_PTR_SET_VALUE(fourthAuthSecret_, fourthAuthSecret) };


    // fourthAuthServer Field Functions 
    bool hasFourthAuthServer() const { return this->fourthAuthServer_ != nullptr;};
    void deleteFourthAuthServer() { this->fourthAuthServer_ = nullptr;};
    inline string getFourthAuthServer() const { DARABONBA_PTR_GET_DEFAULT(fourthAuthServer_, "") };
    inline SaveApSsidConfigRequest& setFourthAuthServer(string fourthAuthServer) { DARABONBA_PTR_SET_VALUE(fourthAuthServer_, fourthAuthServer) };


    // ftOverDs Field Functions 
    bool hasFtOverDs() const { return this->ftOverDs_ != nullptr;};
    void deleteFtOverDs() { this->ftOverDs_ = nullptr;};
    inline int32_t getFtOverDs() const { DARABONBA_PTR_GET_DEFAULT(ftOverDs_, 0) };
    inline SaveApSsidConfigRequest& setFtOverDs(int32_t ftOverDs) { DARABONBA_PTR_SET_VALUE(ftOverDs_, ftOverDs) };


    // hidden Field Functions 
    bool hasHidden() const { return this->hidden_ != nullptr;};
    void deleteHidden() { this->hidden_ = nullptr;};
    inline string getHidden() const { DARABONBA_PTR_GET_DEFAULT(hidden_, "") };
    inline SaveApSsidConfigRequest& setHidden(string hidden) { DARABONBA_PTR_SET_VALUE(hidden_, hidden) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SaveApSsidConfigRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ieee80211r Field Functions 
    bool hasIeee80211r() const { return this->ieee80211r_ != nullptr;};
    void deleteIeee80211r() { this->ieee80211r_ = nullptr;};
    inline int32_t getIeee80211r() const { DARABONBA_PTR_GET_DEFAULT(ieee80211r_, 0) };
    inline SaveApSsidConfigRequest& setIeee80211r(int32_t ieee80211r) { DARABONBA_PTR_SET_VALUE(ieee80211r_, ieee80211r) };


    // ieee80211w Field Functions 
    bool hasIeee80211w() const { return this->ieee80211w_ != nullptr;};
    void deleteIeee80211w() { this->ieee80211w_ = nullptr;};
    inline string getIeee80211w() const { DARABONBA_PTR_GET_DEFAULT(ieee80211w_, "") };
    inline SaveApSsidConfigRequest& setIeee80211w(string ieee80211w) { DARABONBA_PTR_SET_VALUE(ieee80211w_, ieee80211w) };


    // ignoreWeakProbe Field Functions 
    bool hasIgnoreWeakProbe() const { return this->ignoreWeakProbe_ != nullptr;};
    void deleteIgnoreWeakProbe() { this->ignoreWeakProbe_ = nullptr;};
    inline int32_t getIgnoreWeakProbe() const { DARABONBA_PTR_GET_DEFAULT(ignoreWeakProbe_, 0) };
    inline SaveApSsidConfigRequest& setIgnoreWeakProbe(int32_t ignoreWeakProbe) { DARABONBA_PTR_SET_VALUE(ignoreWeakProbe_, ignoreWeakProbe) };


    // isolate Field Functions 
    bool hasIsolate() const { return this->isolate_ != nullptr;};
    void deleteIsolate() { this->isolate_ = nullptr;};
    inline string getIsolate() const { DARABONBA_PTR_GET_DEFAULT(isolate_, "") };
    inline SaveApSsidConfigRequest& setIsolate(string isolate) { DARABONBA_PTR_SET_VALUE(isolate_, isolate) };


    // liteEffect Field Functions 
    bool hasLiteEffect() const { return this->liteEffect_ != nullptr;};
    void deleteLiteEffect() { this->liteEffect_ = nullptr;};
    inline bool getLiteEffect() const { DARABONBA_PTR_GET_DEFAULT(liteEffect_, false) };
    inline SaveApSsidConfigRequest& setLiteEffect(bool liteEffect) { DARABONBA_PTR_SET_VALUE(liteEffect_, liteEffect) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline SaveApSsidConfigRequest& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // maxInactivity Field Functions 
    bool hasMaxInactivity() const { return this->maxInactivity_ != nullptr;};
    void deleteMaxInactivity() { this->maxInactivity_ = nullptr;};
    inline int32_t getMaxInactivity() const { DARABONBA_PTR_GET_DEFAULT(maxInactivity_, 0) };
    inline SaveApSsidConfigRequest& setMaxInactivity(int32_t maxInactivity) { DARABONBA_PTR_SET_VALUE(maxInactivity_, maxInactivity) };


    // maxassoc Field Functions 
    bool hasMaxassoc() const { return this->maxassoc_ != nullptr;};
    void deleteMaxassoc() { this->maxassoc_ = nullptr;};
    inline int32_t getMaxassoc() const { DARABONBA_PTR_GET_DEFAULT(maxassoc_, 0) };
    inline SaveApSsidConfigRequest& setMaxassoc(int32_t maxassoc) { DARABONBA_PTR_SET_VALUE(maxassoc_, maxassoc) };


    // mobilityDomain Field Functions 
    bool hasMobilityDomain() const { return this->mobilityDomain_ != nullptr;};
    void deleteMobilityDomain() { this->mobilityDomain_ = nullptr;};
    inline string getMobilityDomain() const { DARABONBA_PTR_GET_DEFAULT(mobilityDomain_, "") };
    inline SaveApSsidConfigRequest& setMobilityDomain(string mobilityDomain) { DARABONBA_PTR_SET_VALUE(mobilityDomain_, mobilityDomain) };


    // multicastForward Field Functions 
    bool hasMulticastForward() const { return this->multicastForward_ != nullptr;};
    void deleteMulticastForward() { this->multicastForward_ = nullptr;};
    inline int32_t getMulticastForward() const { DARABONBA_PTR_GET_DEFAULT(multicastForward_, 0) };
    inline SaveApSsidConfigRequest& setMulticastForward(int32_t multicastForward) { DARABONBA_PTR_SET_VALUE(multicastForward_, multicastForward) };


    // nasid Field Functions 
    bool hasNasid() const { return this->nasid_ != nullptr;};
    void deleteNasid() { this->nasid_ = nullptr;};
    inline string getNasid() const { DARABONBA_PTR_GET_DEFAULT(nasid_, "") };
    inline SaveApSsidConfigRequest& setNasid(string nasid) { DARABONBA_PTR_SET_VALUE(nasid_, nasid) };


    // ndProxyWork Field Functions 
    bool hasNdProxyWork() const { return this->ndProxyWork_ != nullptr;};
    void deleteNdProxyWork() { this->ndProxyWork_ = nullptr;};
    inline int32_t getNdProxyWork() const { DARABONBA_PTR_GET_DEFAULT(ndProxyWork_, 0) };
    inline SaveApSsidConfigRequest& setNdProxyWork(int32_t ndProxyWork) { DARABONBA_PTR_SET_VALUE(ndProxyWork_, ndProxyWork) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline int32_t getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, 0) };
    inline SaveApSsidConfigRequest& setNetwork(int32_t network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // ownip Field Functions 
    bool hasOwnip() const { return this->ownip_ != nullptr;};
    void deleteOwnip() { this->ownip_ = nullptr;};
    inline string getOwnip() const { DARABONBA_PTR_GET_DEFAULT(ownip_, "") };
    inline SaveApSsidConfigRequest& setOwnip(string ownip) { DARABONBA_PTR_SET_VALUE(ownip_, ownip) };


    // radioIndex Field Functions 
    bool hasRadioIndex() const { return this->radioIndex_ != nullptr;};
    void deleteRadioIndex() { this->radioIndex_ = nullptr;};
    inline string getRadioIndex() const { DARABONBA_PTR_GET_DEFAULT(radioIndex_, "") };
    inline SaveApSsidConfigRequest& setRadioIndex(string radioIndex) { DARABONBA_PTR_SET_VALUE(radioIndex_, radioIndex) };


    // secondaryAcctPort Field Functions 
    bool hasSecondaryAcctPort() const { return this->secondaryAcctPort_ != nullptr;};
    void deleteSecondaryAcctPort() { this->secondaryAcctPort_ = nullptr;};
    inline int32_t getSecondaryAcctPort() const { DARABONBA_PTR_GET_DEFAULT(secondaryAcctPort_, 0) };
    inline SaveApSsidConfigRequest& setSecondaryAcctPort(int32_t secondaryAcctPort) { DARABONBA_PTR_SET_VALUE(secondaryAcctPort_, secondaryAcctPort) };


    // secondaryAcctSecret Field Functions 
    bool hasSecondaryAcctSecret() const { return this->secondaryAcctSecret_ != nullptr;};
    void deleteSecondaryAcctSecret() { this->secondaryAcctSecret_ = nullptr;};
    inline string getSecondaryAcctSecret() const { DARABONBA_PTR_GET_DEFAULT(secondaryAcctSecret_, "") };
    inline SaveApSsidConfigRequest& setSecondaryAcctSecret(string secondaryAcctSecret) { DARABONBA_PTR_SET_VALUE(secondaryAcctSecret_, secondaryAcctSecret) };


    // secondaryAcctServer Field Functions 
    bool hasSecondaryAcctServer() const { return this->secondaryAcctServer_ != nullptr;};
    void deleteSecondaryAcctServer() { this->secondaryAcctServer_ = nullptr;};
    inline string getSecondaryAcctServer() const { DARABONBA_PTR_GET_DEFAULT(secondaryAcctServer_, "") };
    inline SaveApSsidConfigRequest& setSecondaryAcctServer(string secondaryAcctServer) { DARABONBA_PTR_SET_VALUE(secondaryAcctServer_, secondaryAcctServer) };


    // secondaryAuthPort Field Functions 
    bool hasSecondaryAuthPort() const { return this->secondaryAuthPort_ != nullptr;};
    void deleteSecondaryAuthPort() { this->secondaryAuthPort_ = nullptr;};
    inline int32_t getSecondaryAuthPort() const { DARABONBA_PTR_GET_DEFAULT(secondaryAuthPort_, 0) };
    inline SaveApSsidConfigRequest& setSecondaryAuthPort(int32_t secondaryAuthPort) { DARABONBA_PTR_SET_VALUE(secondaryAuthPort_, secondaryAuthPort) };


    // secondaryAuthSecret Field Functions 
    bool hasSecondaryAuthSecret() const { return this->secondaryAuthSecret_ != nullptr;};
    void deleteSecondaryAuthSecret() { this->secondaryAuthSecret_ = nullptr;};
    inline string getSecondaryAuthSecret() const { DARABONBA_PTR_GET_DEFAULT(secondaryAuthSecret_, "") };
    inline SaveApSsidConfigRequest& setSecondaryAuthSecret(string secondaryAuthSecret) { DARABONBA_PTR_SET_VALUE(secondaryAuthSecret_, secondaryAuthSecret) };


    // secondaryAuthServer Field Functions 
    bool hasSecondaryAuthServer() const { return this->secondaryAuthServer_ != nullptr;};
    void deleteSecondaryAuthServer() { this->secondaryAuthServer_ = nullptr;};
    inline string getSecondaryAuthServer() const { DARABONBA_PTR_GET_DEFAULT(secondaryAuthServer_, "") };
    inline SaveApSsidConfigRequest& setSecondaryAuthServer(string secondaryAuthServer) { DARABONBA_PTR_SET_VALUE(secondaryAuthServer_, secondaryAuthServer) };


    // sendConfigToAp Field Functions 
    bool hasSendConfigToAp() const { return this->sendConfigToAp_ != nullptr;};
    void deleteSendConfigToAp() { this->sendConfigToAp_ = nullptr;};
    inline bool getSendConfigToAp() const { DARABONBA_PTR_GET_DEFAULT(sendConfigToAp_, false) };
    inline SaveApSsidConfigRequest& setSendConfigToAp(bool sendConfigToAp) { DARABONBA_PTR_SET_VALUE(sendConfigToAp_, sendConfigToAp) };


    // shortPreamble Field Functions 
    bool hasShortPreamble() const { return this->shortPreamble_ != nullptr;};
    void deleteShortPreamble() { this->shortPreamble_ = nullptr;};
    inline string getShortPreamble() const { DARABONBA_PTR_GET_DEFAULT(shortPreamble_, "") };
    inline SaveApSsidConfigRequest& setShortPreamble(string shortPreamble) { DARABONBA_PTR_SET_VALUE(shortPreamble_, shortPreamble) };


    // ssid Field Functions 
    bool hasSsid() const { return this->ssid_ != nullptr;};
    void deleteSsid() { this->ssid_ = nullptr;};
    inline string getSsid() const { DARABONBA_PTR_GET_DEFAULT(ssid_, "") };
    inline SaveApSsidConfigRequest& setSsid(string ssid) { DARABONBA_PTR_SET_VALUE(ssid_, ssid) };


    // ssidLb Field Functions 
    bool hasSsidLb() const { return this->ssidLb_ != nullptr;};
    void deleteSsidLb() { this->ssidLb_ = nullptr;};
    inline int32_t getSsidLb() const { DARABONBA_PTR_GET_DEFAULT(ssidLb_, 0) };
    inline SaveApSsidConfigRequest& setSsidLb(int32_t ssidLb) { DARABONBA_PTR_SET_VALUE(ssidLb_, ssidLb) };


    // thirdAuthPort Field Functions 
    bool hasThirdAuthPort() const { return this->thirdAuthPort_ != nullptr;};
    void deleteThirdAuthPort() { this->thirdAuthPort_ = nullptr;};
    inline int32_t getThirdAuthPort() const { DARABONBA_PTR_GET_DEFAULT(thirdAuthPort_, 0) };
    inline SaveApSsidConfigRequest& setThirdAuthPort(int32_t thirdAuthPort) { DARABONBA_PTR_SET_VALUE(thirdAuthPort_, thirdAuthPort) };


    // thirdAuthSecret Field Functions 
    bool hasThirdAuthSecret() const { return this->thirdAuthSecret_ != nullptr;};
    void deleteThirdAuthSecret() { this->thirdAuthSecret_ = nullptr;};
    inline string getThirdAuthSecret() const { DARABONBA_PTR_GET_DEFAULT(thirdAuthSecret_, "") };
    inline SaveApSsidConfigRequest& setThirdAuthSecret(string thirdAuthSecret) { DARABONBA_PTR_SET_VALUE(thirdAuthSecret_, thirdAuthSecret) };


    // thirdAuthServer Field Functions 
    bool hasThirdAuthServer() const { return this->thirdAuthServer_ != nullptr;};
    void deleteThirdAuthServer() { this->thirdAuthServer_ = nullptr;};
    inline string getThirdAuthServer() const { DARABONBA_PTR_GET_DEFAULT(thirdAuthServer_, "") };
    inline SaveApSsidConfigRequest& setThirdAuthServer(string thirdAuthServer) { DARABONBA_PTR_SET_VALUE(thirdAuthServer_, thirdAuthServer) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline SaveApSsidConfigRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vlanDhcp Field Functions 
    bool hasVlanDhcp() const { return this->vlanDhcp_ != nullptr;};
    void deleteVlanDhcp() { this->vlanDhcp_ = nullptr;};
    inline int32_t getVlanDhcp() const { DARABONBA_PTR_GET_DEFAULT(vlanDhcp_, 0) };
    inline SaveApSsidConfigRequest& setVlanDhcp(int32_t vlanDhcp) { DARABONBA_PTR_SET_VALUE(vlanDhcp_, vlanDhcp) };


    // wmm Field Functions 
    bool hasWmm() const { return this->wmm_ != nullptr;};
    void deleteWmm() { this->wmm_ = nullptr;};
    inline string getWmm() const { DARABONBA_PTR_GET_DEFAULT(wmm_, "") };
    inline SaveApSsidConfigRequest& setWmm(string wmm) { DARABONBA_PTR_SET_VALUE(wmm_, wmm) };


  protected:
    shared_ptr<int32_t> acctPort_ {};
    shared_ptr<string> acctSecret_ {};
    shared_ptr<string> acctServer_ {};
    shared_ptr<int32_t> acctStatusServerWork_ {};
    shared_ptr<int64_t> apAssetId_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<int32_t> arpProxyEnable_ {};
    // This parameter is required.
    shared_ptr<string> authCache_ {};
    shared_ptr<int32_t> authPort_ {};
    shared_ptr<string> authSecret_ {};
    shared_ptr<string> authServer_ {};
    shared_ptr<int32_t> authStatusServerWork_ {};
    shared_ptr<int64_t> cir_ {};
    shared_ptr<int64_t> cirStep_ {};
    shared_ptr<int32_t> cirType_ {};
    shared_ptr<int64_t> cirUl_ {};
    shared_ptr<string> daeClient_ {};
    shared_ptr<int32_t> daePort_ {};
    shared_ptr<string> daeSecret_ {};
    // This parameter is required.
    shared_ptr<string> disabled_ {};
    // This parameter is required.
    shared_ptr<string> disassocLowAck_ {};
    // This parameter is required.
    shared_ptr<int32_t> disassocWeakRssi_ {};
    // This parameter is required.
    shared_ptr<int32_t> dynamicVlan_ {};
    shared_ptr<string> encKey_ {};
    // This parameter is required.
    shared_ptr<string> encryption_ {};
    shared_ptr<int32_t> fourthAuthPort_ {};
    shared_ptr<string> fourthAuthSecret_ {};
    shared_ptr<string> fourthAuthServer_ {};
    shared_ptr<int32_t> ftOverDs_ {};
    // This parameter is required.
    shared_ptr<string> hidden_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int32_t> ieee80211r_ {};
    // This parameter is required.
    shared_ptr<string> ieee80211w_ {};
    shared_ptr<int32_t> ignoreWeakProbe_ {};
    // This parameter is required.
    shared_ptr<string> isolate_ {};
    shared_ptr<bool> liteEffect_ {};
    // This parameter is required.
    shared_ptr<string> mac_ {};
    // This parameter is required.
    shared_ptr<int32_t> maxInactivity_ {};
    // This parameter is required.
    shared_ptr<int32_t> maxassoc_ {};
    shared_ptr<string> mobilityDomain_ {};
    shared_ptr<int32_t> multicastForward_ {};
    shared_ptr<string> nasid_ {};
    shared_ptr<int32_t> ndProxyWork_ {};
    // This parameter is required.
    shared_ptr<int32_t> network_ {};
    shared_ptr<string> ownip_ {};
    // This parameter is required.
    shared_ptr<string> radioIndex_ {};
    shared_ptr<int32_t> secondaryAcctPort_ {};
    shared_ptr<string> secondaryAcctSecret_ {};
    shared_ptr<string> secondaryAcctServer_ {};
    shared_ptr<int32_t> secondaryAuthPort_ {};
    shared_ptr<string> secondaryAuthSecret_ {};
    shared_ptr<string> secondaryAuthServer_ {};
    shared_ptr<bool> sendConfigToAp_ {};
    // This parameter is required.
    shared_ptr<string> shortPreamble_ {};
    // This parameter is required.
    shared_ptr<string> ssid_ {};
    // This parameter is required.
    shared_ptr<int32_t> ssidLb_ {};
    shared_ptr<int32_t> thirdAuthPort_ {};
    shared_ptr<string> thirdAuthSecret_ {};
    shared_ptr<string> thirdAuthServer_ {};
    shared_ptr<int32_t> type_ {};
    // This parameter is required.
    shared_ptr<int32_t> vlanDhcp_ {};
    // This parameter is required.
    shared_ptr<string> wmm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
