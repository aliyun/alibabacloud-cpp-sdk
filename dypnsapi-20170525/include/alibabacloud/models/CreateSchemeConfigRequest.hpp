// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEMECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEMECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class CreateSchemeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSchemeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidPackageName, androidPackageName_);
      DARABONBA_PTR_TO_JSON(AndroidPackageSign, androidPackageSign_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(H5Origin, h5Origin_);
      DARABONBA_PTR_TO_JSON(H5Url, h5Url_);
      DARABONBA_PTR_TO_JSON(IosBundleId, iosBundleId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SchemeName, schemeName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSchemeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidPackageName, androidPackageName_);
      DARABONBA_PTR_FROM_JSON(AndroidPackageSign, androidPackageSign_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(H5Origin, h5Origin_);
      DARABONBA_PTR_FROM_JSON(H5Url, h5Url_);
      DARABONBA_PTR_FROM_JSON(IosBundleId, iosBundleId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SchemeName, schemeName_);
    };
    CreateSchemeConfigRequest() = default ;
    CreateSchemeConfigRequest(const CreateSchemeConfigRequest &) = default ;
    CreateSchemeConfigRequest(CreateSchemeConfigRequest &&) = default ;
    CreateSchemeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSchemeConfigRequest() = default ;
    CreateSchemeConfigRequest& operator=(const CreateSchemeConfigRequest &) = default ;
    CreateSchemeConfigRequest& operator=(CreateSchemeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->androidPackageName_ != nullptr
        && this->androidPackageSign_ != nullptr && this->appName_ != nullptr && this->h5Origin_ != nullptr && this->h5Url_ != nullptr && this->iosBundleId_ != nullptr
        && this->ownerId_ != nullptr && this->platform_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->schemeName_ != nullptr; };
    // androidPackageName Field Functions 
    bool hasAndroidPackageName() const { return this->androidPackageName_ != nullptr;};
    void deleteAndroidPackageName() { this->androidPackageName_ = nullptr;};
    inline string androidPackageName() const { DARABONBA_PTR_GET_DEFAULT(androidPackageName_, "") };
    inline CreateSchemeConfigRequest& setAndroidPackageName(string androidPackageName) { DARABONBA_PTR_SET_VALUE(androidPackageName_, androidPackageName) };


    // androidPackageSign Field Functions 
    bool hasAndroidPackageSign() const { return this->androidPackageSign_ != nullptr;};
    void deleteAndroidPackageSign() { this->androidPackageSign_ = nullptr;};
    inline string androidPackageSign() const { DARABONBA_PTR_GET_DEFAULT(androidPackageSign_, "") };
    inline CreateSchemeConfigRequest& setAndroidPackageSign(string androidPackageSign) { DARABONBA_PTR_SET_VALUE(androidPackageSign_, androidPackageSign) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateSchemeConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // h5Origin Field Functions 
    bool hasH5Origin() const { return this->h5Origin_ != nullptr;};
    void deleteH5Origin() { this->h5Origin_ = nullptr;};
    inline string h5Origin() const { DARABONBA_PTR_GET_DEFAULT(h5Origin_, "") };
    inline CreateSchemeConfigRequest& setH5Origin(string h5Origin) { DARABONBA_PTR_SET_VALUE(h5Origin_, h5Origin) };


    // h5Url Field Functions 
    bool hasH5Url() const { return this->h5Url_ != nullptr;};
    void deleteH5Url() { this->h5Url_ = nullptr;};
    inline string h5Url() const { DARABONBA_PTR_GET_DEFAULT(h5Url_, "") };
    inline CreateSchemeConfigRequest& setH5Url(string h5Url) { DARABONBA_PTR_SET_VALUE(h5Url_, h5Url) };


    // iosBundleId Field Functions 
    bool hasIosBundleId() const { return this->iosBundleId_ != nullptr;};
    void deleteIosBundleId() { this->iosBundleId_ = nullptr;};
    inline string iosBundleId() const { DARABONBA_PTR_GET_DEFAULT(iosBundleId_, "") };
    inline CreateSchemeConfigRequest& setIosBundleId(string iosBundleId) { DARABONBA_PTR_SET_VALUE(iosBundleId_, iosBundleId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSchemeConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateSchemeConfigRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSchemeConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSchemeConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // schemeName Field Functions 
    bool hasSchemeName() const { return this->schemeName_ != nullptr;};
    void deleteSchemeName() { this->schemeName_ = nullptr;};
    inline string schemeName() const { DARABONBA_PTR_GET_DEFAULT(schemeName_, "") };
    inline CreateSchemeConfigRequest& setSchemeName(string schemeName) { DARABONBA_PTR_SET_VALUE(schemeName_, schemeName) };


  protected:
    // The package name. This parameter is required when Platform is set to Android. The name must be 1 to 128 characters in length and can contain digits, letters, hyphens (-), underscores (_), and periods (.).
    std::shared_ptr<string> androidPackageName_ = nullptr;
    // The package signature. This parameter is required when Platform is set to Android. The signature must be 32 characters in length and can contain digits and letters.
    std::shared_ptr<string> androidPackageSign_ = nullptr;
    // The app name, which can be up to 20 characters in length and can contain letters.
    std::shared_ptr<string> appName_ = nullptr;
    // The reserved field. HTML5 apps are not supported.
    std::shared_ptr<string> h5Origin_ = nullptr;
    // The reserved field. HTML5 apps are not supported.
    std::shared_ptr<string> h5Url_ = nullptr;
    // The bundle ID. This parameter is required when OsType is set to iOS. The bundle ID must be 1 to 128 characters in length and can contain digits, letters, hyphens (-), underscores (_), and periods (.).
    std::shared_ptr<string> iosBundleId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The app platform.
    // 
    // Valid values:
    // 
    // *   Android
    // *   iOS
    // 
    // This parameter is required.
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The service name, which can be up to 10 characters in length and can contain letters.
    // 
    // This parameter is required.
    std::shared_ptr<string> schemeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
