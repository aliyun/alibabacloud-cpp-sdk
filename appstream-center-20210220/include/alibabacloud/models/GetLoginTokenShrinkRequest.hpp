// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINTOKENSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINTOKENSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class GetLoginTokenShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginTokenShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AreaSite, areaSite_);
      DARABONBA_PTR_TO_JSON(AuthenticationCode, authenticationCode_);
      DARABONBA_PTR_TO_JSON(AvailableFeatures, availableFeaturesShrink_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(CipherEndUserId, cipherEndUserId_);
      DARABONBA_PTR_TO_JSON(CipherPassword, cipherPassword_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientName, clientName_);
      DARABONBA_PTR_TO_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(CurrentStage, currentStage_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EncryptedFingerPrintData, encryptedFingerPrintData_);
      DARABONBA_PTR_TO_JSON(EncryptedKey, encryptedKey_);
      DARABONBA_PTR_TO_JSON(EncryptedPassword, encryptedPassword_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FingerPrintData, fingerPrintData_);
      DARABONBA_PTR_TO_JSON(IdpId, idpId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_TO_JSON(KeepAliveToken, keepAliveToken_);
      DARABONBA_PTR_TO_JSON(LoginIdentifier, loginIdentifier_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(MfaType, mfaType_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OldPassword, oldPassword_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(PhoneVerifyCode, phoneVerifyCode_);
      DARABONBA_PTR_TO_JSON(ProfileRegion, profileRegion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SsoExtendsCookies, ssoExtendsCookies_);
      DARABONBA_PTR_TO_JSON(SsoSessionToken, ssoSessionToken_);
      DARABONBA_PTR_TO_JSON(TokenCode, tokenCode_);
      DARABONBA_PTR_TO_JSON(UmidToken, umidToken_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginTokenShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaSite, areaSite_);
      DARABONBA_PTR_FROM_JSON(AuthenticationCode, authenticationCode_);
      DARABONBA_PTR_FROM_JSON(AvailableFeatures, availableFeaturesShrink_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(CipherEndUserId, cipherEndUserId_);
      DARABONBA_PTR_FROM_JSON(CipherPassword, cipherPassword_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
      DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(CurrentStage, currentStage_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EncryptedFingerPrintData, encryptedFingerPrintData_);
      DARABONBA_PTR_FROM_JSON(EncryptedKey, encryptedKey_);
      DARABONBA_PTR_FROM_JSON(EncryptedPassword, encryptedPassword_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FingerPrintData, fingerPrintData_);
      DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_FROM_JSON(KeepAliveToken, keepAliveToken_);
      DARABONBA_PTR_FROM_JSON(LoginIdentifier, loginIdentifier_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(MfaType, mfaType_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OldPassword, oldPassword_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(PhoneVerifyCode, phoneVerifyCode_);
      DARABONBA_PTR_FROM_JSON(ProfileRegion, profileRegion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SsoExtendsCookies, ssoExtendsCookies_);
      DARABONBA_PTR_FROM_JSON(SsoSessionToken, ssoSessionToken_);
      DARABONBA_PTR_FROM_JSON(TokenCode, tokenCode_);
      DARABONBA_PTR_FROM_JSON(UmidToken, umidToken_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetLoginTokenShrinkRequest() = default ;
    GetLoginTokenShrinkRequest(const GetLoginTokenShrinkRequest &) = default ;
    GetLoginTokenShrinkRequest(GetLoginTokenShrinkRequest &&) = default ;
    GetLoginTokenShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginTokenShrinkRequest() = default ;
    GetLoginTokenShrinkRequest& operator=(const GetLoginTokenShrinkRequest &) = default ;
    GetLoginTokenShrinkRequest& operator=(GetLoginTokenShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaSite_ == nullptr
        && this->authenticationCode_ == nullptr && this->availableFeaturesShrink_ == nullptr && this->channel_ == nullptr && this->cipherEndUserId_ == nullptr && this->cipherPassword_ == nullptr
        && this->clientId_ == nullptr && this->clientName_ == nullptr && this->clientOS_ == nullptr && this->clientType_ == nullptr && this->clientVersion_ == nullptr
        && this->currentStage_ == nullptr && this->directoryId_ == nullptr && this->encryptedFingerPrintData_ == nullptr && this->encryptedKey_ == nullptr && this->encryptedPassword_ == nullptr
        && this->endUserId_ == nullptr && this->fingerPrintData_ == nullptr && this->idpId_ == nullptr && this->imageUrl_ == nullptr && this->keepAlive_ == nullptr
        && this->keepAliveToken_ == nullptr && this->loginIdentifier_ == nullptr && this->loginName_ == nullptr && this->mfaType_ == nullptr && this->networkType_ == nullptr
        && this->newPassword_ == nullptr && this->officeSiteId_ == nullptr && this->oldPassword_ == nullptr && this->password_ == nullptr && this->phone_ == nullptr
        && this->phoneVerifyCode_ == nullptr && this->profileRegion_ == nullptr && this->regionId_ == nullptr && this->sessionId_ == nullptr && this->ssoExtendsCookies_ == nullptr
        && this->ssoSessionToken_ == nullptr && this->tokenCode_ == nullptr && this->umidToken_ == nullptr && this->uuid_ == nullptr; };
    // areaSite Field Functions 
    bool hasAreaSite() const { return this->areaSite_ != nullptr;};
    void deleteAreaSite() { this->areaSite_ = nullptr;};
    inline string getAreaSite() const { DARABONBA_PTR_GET_DEFAULT(areaSite_, "") };
    inline GetLoginTokenShrinkRequest& setAreaSite(string areaSite) { DARABONBA_PTR_SET_VALUE(areaSite_, areaSite) };


    // authenticationCode Field Functions 
    bool hasAuthenticationCode() const { return this->authenticationCode_ != nullptr;};
    void deleteAuthenticationCode() { this->authenticationCode_ = nullptr;};
    inline string getAuthenticationCode() const { DARABONBA_PTR_GET_DEFAULT(authenticationCode_, "") };
    inline GetLoginTokenShrinkRequest& setAuthenticationCode(string authenticationCode) { DARABONBA_PTR_SET_VALUE(authenticationCode_, authenticationCode) };


    // availableFeaturesShrink Field Functions 
    bool hasAvailableFeaturesShrink() const { return this->availableFeaturesShrink_ != nullptr;};
    void deleteAvailableFeaturesShrink() { this->availableFeaturesShrink_ = nullptr;};
    inline string getAvailableFeaturesShrink() const { DARABONBA_PTR_GET_DEFAULT(availableFeaturesShrink_, "") };
    inline GetLoginTokenShrinkRequest& setAvailableFeaturesShrink(string availableFeaturesShrink) { DARABONBA_PTR_SET_VALUE(availableFeaturesShrink_, availableFeaturesShrink) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetLoginTokenShrinkRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // cipherEndUserId Field Functions 
    bool hasCipherEndUserId() const { return this->cipherEndUserId_ != nullptr;};
    void deleteCipherEndUserId() { this->cipherEndUserId_ = nullptr;};
    inline string getCipherEndUserId() const { DARABONBA_PTR_GET_DEFAULT(cipherEndUserId_, "") };
    inline GetLoginTokenShrinkRequest& setCipherEndUserId(string cipherEndUserId) { DARABONBA_PTR_SET_VALUE(cipherEndUserId_, cipherEndUserId) };


    // cipherPassword Field Functions 
    bool hasCipherPassword() const { return this->cipherPassword_ != nullptr;};
    void deleteCipherPassword() { this->cipherPassword_ = nullptr;};
    inline string getCipherPassword() const { DARABONBA_PTR_GET_DEFAULT(cipherPassword_, "") };
    inline GetLoginTokenShrinkRequest& setCipherPassword(string cipherPassword) { DARABONBA_PTR_SET_VALUE(cipherPassword_, cipherPassword) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetLoginTokenShrinkRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline GetLoginTokenShrinkRequest& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // clientOS Field Functions 
    bool hasClientOS() const { return this->clientOS_ != nullptr;};
    void deleteClientOS() { this->clientOS_ = nullptr;};
    inline string getClientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
    inline GetLoginTokenShrinkRequest& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline GetLoginTokenShrinkRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline GetLoginTokenShrinkRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // currentStage Field Functions 
    bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
    void deleteCurrentStage() { this->currentStage_ = nullptr;};
    inline string getCurrentStage() const { DARABONBA_PTR_GET_DEFAULT(currentStage_, "") };
    inline GetLoginTokenShrinkRequest& setCurrentStage(string currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetLoginTokenShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // encryptedFingerPrintData Field Functions 
    bool hasEncryptedFingerPrintData() const { return this->encryptedFingerPrintData_ != nullptr;};
    void deleteEncryptedFingerPrintData() { this->encryptedFingerPrintData_ = nullptr;};
    inline string getEncryptedFingerPrintData() const { DARABONBA_PTR_GET_DEFAULT(encryptedFingerPrintData_, "") };
    inline GetLoginTokenShrinkRequest& setEncryptedFingerPrintData(string encryptedFingerPrintData) { DARABONBA_PTR_SET_VALUE(encryptedFingerPrintData_, encryptedFingerPrintData) };


    // encryptedKey Field Functions 
    bool hasEncryptedKey() const { return this->encryptedKey_ != nullptr;};
    void deleteEncryptedKey() { this->encryptedKey_ = nullptr;};
    inline string getEncryptedKey() const { DARABONBA_PTR_GET_DEFAULT(encryptedKey_, "") };
    inline GetLoginTokenShrinkRequest& setEncryptedKey(string encryptedKey) { DARABONBA_PTR_SET_VALUE(encryptedKey_, encryptedKey) };


    // encryptedPassword Field Functions 
    bool hasEncryptedPassword() const { return this->encryptedPassword_ != nullptr;};
    void deleteEncryptedPassword() { this->encryptedPassword_ = nullptr;};
    inline string getEncryptedPassword() const { DARABONBA_PTR_GET_DEFAULT(encryptedPassword_, "") };
    inline GetLoginTokenShrinkRequest& setEncryptedPassword(string encryptedPassword) { DARABONBA_PTR_SET_VALUE(encryptedPassword_, encryptedPassword) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline GetLoginTokenShrinkRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fingerPrintData Field Functions 
    bool hasFingerPrintData() const { return this->fingerPrintData_ != nullptr;};
    void deleteFingerPrintData() { this->fingerPrintData_ = nullptr;};
    inline string getFingerPrintData() const { DARABONBA_PTR_GET_DEFAULT(fingerPrintData_, "") };
    inline GetLoginTokenShrinkRequest& setFingerPrintData(string fingerPrintData) { DARABONBA_PTR_SET_VALUE(fingerPrintData_, fingerPrintData) };


    // idpId Field Functions 
    bool hasIdpId() const { return this->idpId_ != nullptr;};
    void deleteIdpId() { this->idpId_ = nullptr;};
    inline string getIdpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, "") };
    inline GetLoginTokenShrinkRequest& setIdpId(string idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline GetLoginTokenShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // keepAlive Field Functions 
    bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
    void deleteKeepAlive() { this->keepAlive_ = nullptr;};
    inline bool getKeepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, false) };
    inline GetLoginTokenShrinkRequest& setKeepAlive(bool keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


    // keepAliveToken Field Functions 
    bool hasKeepAliveToken() const { return this->keepAliveToken_ != nullptr;};
    void deleteKeepAliveToken() { this->keepAliveToken_ = nullptr;};
    inline string getKeepAliveToken() const { DARABONBA_PTR_GET_DEFAULT(keepAliveToken_, "") };
    inline GetLoginTokenShrinkRequest& setKeepAliveToken(string keepAliveToken) { DARABONBA_PTR_SET_VALUE(keepAliveToken_, keepAliveToken) };


    // loginIdentifier Field Functions 
    bool hasLoginIdentifier() const { return this->loginIdentifier_ != nullptr;};
    void deleteLoginIdentifier() { this->loginIdentifier_ = nullptr;};
    inline string getLoginIdentifier() const { DARABONBA_PTR_GET_DEFAULT(loginIdentifier_, "") };
    inline GetLoginTokenShrinkRequest& setLoginIdentifier(string loginIdentifier) { DARABONBA_PTR_SET_VALUE(loginIdentifier_, loginIdentifier) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline GetLoginTokenShrinkRequest& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // mfaType Field Functions 
    bool hasMfaType() const { return this->mfaType_ != nullptr;};
    void deleteMfaType() { this->mfaType_ = nullptr;};
    inline string getMfaType() const { DARABONBA_PTR_GET_DEFAULT(mfaType_, "") };
    inline GetLoginTokenShrinkRequest& setMfaType(string mfaType) { DARABONBA_PTR_SET_VALUE(mfaType_, mfaType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline GetLoginTokenShrinkRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // newPassword Field Functions 
    bool hasNewPassword() const { return this->newPassword_ != nullptr;};
    void deleteNewPassword() { this->newPassword_ = nullptr;};
    inline string getNewPassword() const { DARABONBA_PTR_GET_DEFAULT(newPassword_, "") };
    inline GetLoginTokenShrinkRequest& setNewPassword(string newPassword) { DARABONBA_PTR_SET_VALUE(newPassword_, newPassword) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline GetLoginTokenShrinkRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // oldPassword Field Functions 
    bool hasOldPassword() const { return this->oldPassword_ != nullptr;};
    void deleteOldPassword() { this->oldPassword_ = nullptr;};
    inline string getOldPassword() const { DARABONBA_PTR_GET_DEFAULT(oldPassword_, "") };
    inline GetLoginTokenShrinkRequest& setOldPassword(string oldPassword) { DARABONBA_PTR_SET_VALUE(oldPassword_, oldPassword) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetLoginTokenShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetLoginTokenShrinkRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // phoneVerifyCode Field Functions 
    bool hasPhoneVerifyCode() const { return this->phoneVerifyCode_ != nullptr;};
    void deletePhoneVerifyCode() { this->phoneVerifyCode_ = nullptr;};
    inline string getPhoneVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(phoneVerifyCode_, "") };
    inline GetLoginTokenShrinkRequest& setPhoneVerifyCode(string phoneVerifyCode) { DARABONBA_PTR_SET_VALUE(phoneVerifyCode_, phoneVerifyCode) };


    // profileRegion Field Functions 
    bool hasProfileRegion() const { return this->profileRegion_ != nullptr;};
    void deleteProfileRegion() { this->profileRegion_ = nullptr;};
    inline string getProfileRegion() const { DARABONBA_PTR_GET_DEFAULT(profileRegion_, "") };
    inline GetLoginTokenShrinkRequest& setProfileRegion(string profileRegion) { DARABONBA_PTR_SET_VALUE(profileRegion_, profileRegion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLoginTokenShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetLoginTokenShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // ssoExtendsCookies Field Functions 
    bool hasSsoExtendsCookies() const { return this->ssoExtendsCookies_ != nullptr;};
    void deleteSsoExtendsCookies() { this->ssoExtendsCookies_ = nullptr;};
    inline string getSsoExtendsCookies() const { DARABONBA_PTR_GET_DEFAULT(ssoExtendsCookies_, "") };
    inline GetLoginTokenShrinkRequest& setSsoExtendsCookies(string ssoExtendsCookies) { DARABONBA_PTR_SET_VALUE(ssoExtendsCookies_, ssoExtendsCookies) };


    // ssoSessionToken Field Functions 
    bool hasSsoSessionToken() const { return this->ssoSessionToken_ != nullptr;};
    void deleteSsoSessionToken() { this->ssoSessionToken_ = nullptr;};
    inline string getSsoSessionToken() const { DARABONBA_PTR_GET_DEFAULT(ssoSessionToken_, "") };
    inline GetLoginTokenShrinkRequest& setSsoSessionToken(string ssoSessionToken) { DARABONBA_PTR_SET_VALUE(ssoSessionToken_, ssoSessionToken) };


    // tokenCode Field Functions 
    bool hasTokenCode() const { return this->tokenCode_ != nullptr;};
    void deleteTokenCode() { this->tokenCode_ = nullptr;};
    inline string getTokenCode() const { DARABONBA_PTR_GET_DEFAULT(tokenCode_, "") };
    inline GetLoginTokenShrinkRequest& setTokenCode(string tokenCode) { DARABONBA_PTR_SET_VALUE(tokenCode_, tokenCode) };


    // umidToken Field Functions 
    bool hasUmidToken() const { return this->umidToken_ != nullptr;};
    void deleteUmidToken() { this->umidToken_ = nullptr;};
    inline string getUmidToken() const { DARABONBA_PTR_GET_DEFAULT(umidToken_, "") };
    inline GetLoginTokenShrinkRequest& setUmidToken(string umidToken) { DARABONBA_PTR_SET_VALUE(umidToken_, umidToken) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetLoginTokenShrinkRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> areaSite_ {};
    shared_ptr<string> authenticationCode_ {};
    shared_ptr<string> availableFeaturesShrink_ {};
    shared_ptr<string> channel_ {};
    shared_ptr<string> cipherEndUserId_ {};
    shared_ptr<string> cipherPassword_ {};
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    shared_ptr<string> clientName_ {};
    shared_ptr<string> clientOS_ {};
    shared_ptr<string> clientType_ {};
    shared_ptr<string> clientVersion_ {};
    shared_ptr<string> currentStage_ {};
    shared_ptr<string> directoryId_ {};
    shared_ptr<string> encryptedFingerPrintData_ {};
    shared_ptr<string> encryptedKey_ {};
    shared_ptr<string> encryptedPassword_ {};
    shared_ptr<string> endUserId_ {};
    shared_ptr<string> fingerPrintData_ {};
    shared_ptr<string> idpId_ {};
    shared_ptr<string> imageUrl_ {};
    shared_ptr<bool> keepAlive_ {};
    shared_ptr<string> keepAliveToken_ {};
    shared_ptr<string> loginIdentifier_ {};
    shared_ptr<string> loginName_ {};
    shared_ptr<string> mfaType_ {};
    shared_ptr<string> networkType_ {};
    shared_ptr<string> newPassword_ {};
    shared_ptr<string> officeSiteId_ {};
    shared_ptr<string> oldPassword_ {};
    shared_ptr<string> password_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> phoneVerifyCode_ {};
    shared_ptr<string> profileRegion_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> ssoExtendsCookies_ {};
    shared_ptr<string> ssoSessionToken_ {};
    shared_ptr<string> tokenCode_ {};
    shared_ptr<string> umidToken_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
