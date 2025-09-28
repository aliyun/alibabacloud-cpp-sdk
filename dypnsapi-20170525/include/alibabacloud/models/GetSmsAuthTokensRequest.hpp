// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSAUTHTOKENSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSMSAUTHTOKENSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class GetSmsAuthTokensRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsAuthTokensRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(SmsCodeExpire, smsCodeExpire_);
      DARABONBA_PTR_TO_JSON(SmsTemplateCode, smsTemplateCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsAuthTokensRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(SmsCodeExpire, smsCodeExpire_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateCode, smsTemplateCode_);
    };
    GetSmsAuthTokensRequest() = default ;
    GetSmsAuthTokensRequest(const GetSmsAuthTokensRequest &) = default ;
    GetSmsAuthTokensRequest(GetSmsAuthTokensRequest &&) = default ;
    GetSmsAuthTokensRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsAuthTokensRequest() = default ;
    GetSmsAuthTokensRequest& operator=(const GetSmsAuthTokensRequest &) = default ;
    GetSmsAuthTokensRequest& operator=(GetSmsAuthTokensRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bundleId_ != nullptr
        && this->expire_ != nullptr && this->osType_ != nullptr && this->ownerId_ != nullptr && this->packageName_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->sceneCode_ != nullptr && this->signName_ != nullptr && this->smsCodeExpire_ != nullptr && this->smsTemplateCode_ != nullptr; };
    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline GetSmsAuthTokensRequest& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline GetSmsAuthTokensRequest& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline GetSmsAuthTokensRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetSmsAuthTokensRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline GetSmsAuthTokensRequest& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetSmsAuthTokensRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetSmsAuthTokensRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline GetSmsAuthTokensRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline GetSmsAuthTokensRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // smsCodeExpire Field Functions 
    bool hasSmsCodeExpire() const { return this->smsCodeExpire_ != nullptr;};
    void deleteSmsCodeExpire() { this->smsCodeExpire_ = nullptr;};
    inline int32_t smsCodeExpire() const { DARABONBA_PTR_GET_DEFAULT(smsCodeExpire_, 0) };
    inline GetSmsAuthTokensRequest& setSmsCodeExpire(int32_t smsCodeExpire) { DARABONBA_PTR_SET_VALUE(smsCodeExpire_, smsCodeExpire) };


    // smsTemplateCode Field Functions 
    bool hasSmsTemplateCode() const { return this->smsTemplateCode_ != nullptr;};
    void deleteSmsTemplateCode() { this->smsTemplateCode_ = nullptr;};
    inline string smsTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateCode_, "") };
    inline GetSmsAuthTokensRequest& setSmsTemplateCode(string smsTemplateCode) { DARABONBA_PTR_SET_VALUE(smsTemplateCode_, smsTemplateCode) };


  protected:
    // The ID of the iOS application. This parameter is required if OsType is set to **iOS**.
    std::shared_ptr<string> bundleId_ = nullptr;
    // The validity period of the token. Unit: seconds. Valid values: 900 to 43200.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> expire_ = nullptr;
    // The type of the operating system. Valid values: **Android** and **iOS**.
    // 
    // This parameter is required.
    std::shared_ptr<string> osType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The package name. This parameter is required if OsType is set to **Android**.
    std::shared_ptr<string> packageName_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The service code.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneCode_ = nullptr;
    // The signature. This parameter is required if OsType is set to **Android**.
    std::shared_ptr<string> signName_ = nullptr;
    // The validity period of the SMS verification code. Unit: seconds. Default value: 180.
    std::shared_ptr<int32_t> smsCodeExpire_ = nullptr;
    // The code of the text message template.
    // 
    // This parameter is required.
    std::shared_ptr<string> smsTemplateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
