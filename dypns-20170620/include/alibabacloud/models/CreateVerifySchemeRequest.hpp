// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVERIFYSCHEMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVERIFYSCHEMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class CreateVerifySchemeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVerifySchemeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(CmApiCode, cmApiCode_);
      DARABONBA_PTR_TO_JSON(CtApiCode, ctApiCode_);
      DARABONBA_PTR_TO_JSON(CuApiCode, cuApiCode_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(HmAppIdentifier, hmAppIdentifier_);
      DARABONBA_PTR_TO_JSON(HmPackageName, hmPackageName_);
      DARABONBA_PTR_TO_JSON(HmSignName, hmSignName_);
      DARABONBA_PTR_TO_JSON(IpWhiteList, ipWhiteList_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PackName, packName_);
      DARABONBA_PTR_TO_JSON(PackSign, packSign_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
      DARABONBA_PTR_TO_JSON(SchemeName, schemeName_);
      DARABONBA_PTR_TO_JSON(SmsSignName, smsSignName_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVerifySchemeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(CmApiCode, cmApiCode_);
      DARABONBA_PTR_FROM_JSON(CtApiCode, ctApiCode_);
      DARABONBA_PTR_FROM_JSON(CuApiCode, cuApiCode_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(HmAppIdentifier, hmAppIdentifier_);
      DARABONBA_PTR_FROM_JSON(HmPackageName, hmPackageName_);
      DARABONBA_PTR_FROM_JSON(HmSignName, hmSignName_);
      DARABONBA_PTR_FROM_JSON(IpWhiteList, ipWhiteList_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PackName, packName_);
      DARABONBA_PTR_FROM_JSON(PackSign, packSign_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
      DARABONBA_PTR_FROM_JSON(SchemeName, schemeName_);
      DARABONBA_PTR_FROM_JSON(SmsSignName, smsSignName_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateVerifySchemeRequest() = default ;
    CreateVerifySchemeRequest(const CreateVerifySchemeRequest &) = default ;
    CreateVerifySchemeRequest(CreateVerifySchemeRequest &&) = default ;
    CreateVerifySchemeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVerifySchemeRequest() = default ;
    CreateVerifySchemeRequest& operator=(const CreateVerifySchemeRequest &) = default ;
    CreateVerifySchemeRequest& operator=(CreateVerifySchemeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->authType_ == nullptr && this->bundleId_ == nullptr && this->cmApiCode_ == nullptr && this->ctApiCode_ == nullptr && this->cuApiCode_ == nullptr
        && this->email_ == nullptr && this->hmAppIdentifier_ == nullptr && this->hmPackageName_ == nullptr && this->hmSignName_ == nullptr && this->ipWhiteList_ == nullptr
        && this->origin_ == nullptr && this->osType_ == nullptr && this->ownerId_ == nullptr && this->packName_ == nullptr && this->packSign_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sceneType_ == nullptr && this->schemeName_ == nullptr && this->smsSignName_ == nullptr
        && this->url_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateVerifySchemeRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline CreateVerifySchemeRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string getBundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline CreateVerifySchemeRequest& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // cmApiCode Field Functions 
    bool hasCmApiCode() const { return this->cmApiCode_ != nullptr;};
    void deleteCmApiCode() { this->cmApiCode_ = nullptr;};
    inline int64_t getCmApiCode() const { DARABONBA_PTR_GET_DEFAULT(cmApiCode_, 0L) };
    inline CreateVerifySchemeRequest& setCmApiCode(int64_t cmApiCode) { DARABONBA_PTR_SET_VALUE(cmApiCode_, cmApiCode) };


    // ctApiCode Field Functions 
    bool hasCtApiCode() const { return this->ctApiCode_ != nullptr;};
    void deleteCtApiCode() { this->ctApiCode_ = nullptr;};
    inline int64_t getCtApiCode() const { DARABONBA_PTR_GET_DEFAULT(ctApiCode_, 0L) };
    inline CreateVerifySchemeRequest& setCtApiCode(int64_t ctApiCode) { DARABONBA_PTR_SET_VALUE(ctApiCode_, ctApiCode) };


    // cuApiCode Field Functions 
    bool hasCuApiCode() const { return this->cuApiCode_ != nullptr;};
    void deleteCuApiCode() { this->cuApiCode_ = nullptr;};
    inline int64_t getCuApiCode() const { DARABONBA_PTR_GET_DEFAULT(cuApiCode_, 0L) };
    inline CreateVerifySchemeRequest& setCuApiCode(int64_t cuApiCode) { DARABONBA_PTR_SET_VALUE(cuApiCode_, cuApiCode) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateVerifySchemeRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // hmAppIdentifier Field Functions 
    bool hasHmAppIdentifier() const { return this->hmAppIdentifier_ != nullptr;};
    void deleteHmAppIdentifier() { this->hmAppIdentifier_ = nullptr;};
    inline string getHmAppIdentifier() const { DARABONBA_PTR_GET_DEFAULT(hmAppIdentifier_, "") };
    inline CreateVerifySchemeRequest& setHmAppIdentifier(string hmAppIdentifier) { DARABONBA_PTR_SET_VALUE(hmAppIdentifier_, hmAppIdentifier) };


    // hmPackageName Field Functions 
    bool hasHmPackageName() const { return this->hmPackageName_ != nullptr;};
    void deleteHmPackageName() { this->hmPackageName_ = nullptr;};
    inline string getHmPackageName() const { DARABONBA_PTR_GET_DEFAULT(hmPackageName_, "") };
    inline CreateVerifySchemeRequest& setHmPackageName(string hmPackageName) { DARABONBA_PTR_SET_VALUE(hmPackageName_, hmPackageName) };


    // hmSignName Field Functions 
    bool hasHmSignName() const { return this->hmSignName_ != nullptr;};
    void deleteHmSignName() { this->hmSignName_ = nullptr;};
    inline string getHmSignName() const { DARABONBA_PTR_GET_DEFAULT(hmSignName_, "") };
    inline CreateVerifySchemeRequest& setHmSignName(string hmSignName) { DARABONBA_PTR_SET_VALUE(hmSignName_, hmSignName) };


    // ipWhiteList Field Functions 
    bool hasIpWhiteList() const { return this->ipWhiteList_ != nullptr;};
    void deleteIpWhiteList() { this->ipWhiteList_ = nullptr;};
    inline string getIpWhiteList() const { DARABONBA_PTR_GET_DEFAULT(ipWhiteList_, "") };
    inline CreateVerifySchemeRequest& setIpWhiteList(string ipWhiteList) { DARABONBA_PTR_SET_VALUE(ipWhiteList_, ipWhiteList) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline CreateVerifySchemeRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline CreateVerifySchemeRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateVerifySchemeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // packName Field Functions 
    bool hasPackName() const { return this->packName_ != nullptr;};
    void deletePackName() { this->packName_ = nullptr;};
    inline string getPackName() const { DARABONBA_PTR_GET_DEFAULT(packName_, "") };
    inline CreateVerifySchemeRequest& setPackName(string packName) { DARABONBA_PTR_SET_VALUE(packName_, packName) };


    // packSign Field Functions 
    bool hasPackSign() const { return this->packSign_ != nullptr;};
    void deletePackSign() { this->packSign_ = nullptr;};
    inline string getPackSign() const { DARABONBA_PTR_GET_DEFAULT(packSign_, "") };
    inline CreateVerifySchemeRequest& setPackSign(string packSign) { DARABONBA_PTR_SET_VALUE(packSign_, packSign) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateVerifySchemeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateVerifySchemeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline string getSceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, "") };
    inline CreateVerifySchemeRequest& setSceneType(string sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


    // schemeName Field Functions 
    bool hasSchemeName() const { return this->schemeName_ != nullptr;};
    void deleteSchemeName() { this->schemeName_ = nullptr;};
    inline string getSchemeName() const { DARABONBA_PTR_GET_DEFAULT(schemeName_, "") };
    inline CreateVerifySchemeRequest& setSchemeName(string schemeName) { DARABONBA_PTR_SET_VALUE(schemeName_, schemeName) };


    // smsSignName Field Functions 
    bool hasSmsSignName() const { return this->smsSignName_ != nullptr;};
    void deleteSmsSignName() { this->smsSignName_ = nullptr;};
    inline string getSmsSignName() const { DARABONBA_PTR_GET_DEFAULT(smsSignName_, "") };
    inline CreateVerifySchemeRequest& setSmsSignName(string smsSignName) { DARABONBA_PTR_SET_VALUE(smsSignName_, smsSignName) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateVerifySchemeRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<string> authType_ {};
    shared_ptr<string> bundleId_ {};
    shared_ptr<int64_t> cmApiCode_ {};
    shared_ptr<int64_t> ctApiCode_ {};
    shared_ptr<int64_t> cuApiCode_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> hmAppIdentifier_ {};
    shared_ptr<string> hmPackageName_ {};
    shared_ptr<string> hmSignName_ {};
    shared_ptr<string> ipWhiteList_ {};
    shared_ptr<string> origin_ {};
    // This parameter is required.
    shared_ptr<string> osType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> packName_ {};
    shared_ptr<string> packSign_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> sceneType_ {};
    // This parameter is required.
    shared_ptr<string> schemeName_ {};
    shared_ptr<string> smsSignName_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
