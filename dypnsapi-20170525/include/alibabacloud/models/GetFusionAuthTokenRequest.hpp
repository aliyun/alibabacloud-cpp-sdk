// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUSIONAUTHTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUSIONAUTHTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class GetFusionAuthTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFusionAuthTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
      DARABONBA_PTR_TO_JSON(PackageSign, packageSign_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SchemeCode, schemeCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetFusionAuthTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
      DARABONBA_PTR_FROM_JSON(PackageSign, packageSign_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SchemeCode, schemeCode_);
    };
    GetFusionAuthTokenRequest() = default ;
    GetFusionAuthTokenRequest(const GetFusionAuthTokenRequest &) = default ;
    GetFusionAuthTokenRequest(GetFusionAuthTokenRequest &&) = default ;
    GetFusionAuthTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFusionAuthTokenRequest() = default ;
    GetFusionAuthTokenRequest& operator=(const GetFusionAuthTokenRequest &) = default ;
    GetFusionAuthTokenRequest& operator=(GetFusionAuthTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bundleId_ != nullptr
        && this->durationSeconds_ != nullptr && this->ownerId_ != nullptr && this->packageName_ != nullptr && this->packageSign_ != nullptr && this->platform_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->schemeCode_ != nullptr; };
    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline GetFusionAuthTokenRequest& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // durationSeconds Field Functions 
    bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
    void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
    inline int64_t durationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0L) };
    inline GetFusionAuthTokenRequest& setDurationSeconds(int64_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetFusionAuthTokenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline GetFusionAuthTokenRequest& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // packageSign Field Functions 
    bool hasPackageSign() const { return this->packageSign_ != nullptr;};
    void deletePackageSign() { this->packageSign_ = nullptr;};
    inline string packageSign() const { DARABONBA_PTR_GET_DEFAULT(packageSign_, "") };
    inline GetFusionAuthTokenRequest& setPackageSign(string packageSign) { DARABONBA_PTR_SET_VALUE(packageSign_, packageSign) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetFusionAuthTokenRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetFusionAuthTokenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetFusionAuthTokenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // schemeCode Field Functions 
    bool hasSchemeCode() const { return this->schemeCode_ != nullptr;};
    void deleteSchemeCode() { this->schemeCode_ = nullptr;};
    inline string schemeCode() const { DARABONBA_PTR_GET_DEFAULT(schemeCode_, "") };
    inline GetFusionAuthTokenRequest& setSchemeCode(string schemeCode) { DARABONBA_PTR_SET_VALUE(schemeCode_, schemeCode) };


  protected:
    // The bundle ID of the app. This parameter is required when Platform is set to iOS.
    std::shared_ptr<string> bundleId_ = nullptr;
    // The validity period of the token. Unit: seconds. Valid values: 900 to 43200.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> durationSeconds_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The package name of the app. This parameter is required when Platform is set to Android.
    std::shared_ptr<string> packageName_ = nullptr;
    // The package signature of the app. This parameter is required when Platform is set to Android.
    std::shared_ptr<string> packageSign_ = nullptr;
    // The platform type. Valid values: Android and iOS.
    // 
    // This parameter is required.
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The service code.
    // 
    // This parameter is required.
    std::shared_ptr<string> schemeCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
