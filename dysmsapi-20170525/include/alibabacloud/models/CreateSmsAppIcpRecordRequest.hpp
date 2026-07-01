// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSAPPICPRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSAPPICPRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateSmsAppIcpRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsAppIcpRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppApprovalDate, appApprovalDate_);
      DARABONBA_PTR_TO_JSON(AppIcpLicenseNumber, appIcpLicenseNumber_);
      DARABONBA_PTR_TO_JSON(AppIcpRecordPic, appIcpRecordPic_);
      DARABONBA_PTR_TO_JSON(AppPrincipalUnitName, appPrincipalUnitName_);
      DARABONBA_PTR_TO_JSON(AppRuntimePic, appRuntimePic_);
      DARABONBA_PTR_TO_JSON(AppServiceName, appServiceName_);
      DARABONBA_PTR_TO_JSON(AppStoreDownloadPic, appStoreDownloadPic_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsAppIcpRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppApprovalDate, appApprovalDate_);
      DARABONBA_PTR_FROM_JSON(AppIcpLicenseNumber, appIcpLicenseNumber_);
      DARABONBA_PTR_FROM_JSON(AppIcpRecordPic, appIcpRecordPic_);
      DARABONBA_PTR_FROM_JSON(AppPrincipalUnitName, appPrincipalUnitName_);
      DARABONBA_PTR_FROM_JSON(AppRuntimePic, appRuntimePic_);
      DARABONBA_PTR_FROM_JSON(AppServiceName, appServiceName_);
      DARABONBA_PTR_FROM_JSON(AppStoreDownloadPic, appStoreDownloadPic_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateSmsAppIcpRecordRequest() = default ;
    CreateSmsAppIcpRecordRequest(const CreateSmsAppIcpRecordRequest &) = default ;
    CreateSmsAppIcpRecordRequest(CreateSmsAppIcpRecordRequest &&) = default ;
    CreateSmsAppIcpRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsAppIcpRecordRequest() = default ;
    CreateSmsAppIcpRecordRequest& operator=(const CreateSmsAppIcpRecordRequest &) = default ;
    CreateSmsAppIcpRecordRequest& operator=(CreateSmsAppIcpRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appApprovalDate_ == nullptr
        && this->appIcpLicenseNumber_ == nullptr && this->appIcpRecordPic_ == nullptr && this->appPrincipalUnitName_ == nullptr && this->appRuntimePic_ == nullptr && this->appServiceName_ == nullptr
        && this->appStoreDownloadPic_ == nullptr && this->domain_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // appApprovalDate Field Functions 
    bool hasAppApprovalDate() const { return this->appApprovalDate_ != nullptr;};
    void deleteAppApprovalDate() { this->appApprovalDate_ = nullptr;};
    inline string getAppApprovalDate() const { DARABONBA_PTR_GET_DEFAULT(appApprovalDate_, "") };
    inline CreateSmsAppIcpRecordRequest& setAppApprovalDate(string appApprovalDate) { DARABONBA_PTR_SET_VALUE(appApprovalDate_, appApprovalDate) };


    // appIcpLicenseNumber Field Functions 
    bool hasAppIcpLicenseNumber() const { return this->appIcpLicenseNumber_ != nullptr;};
    void deleteAppIcpLicenseNumber() { this->appIcpLicenseNumber_ = nullptr;};
    inline string getAppIcpLicenseNumber() const { DARABONBA_PTR_GET_DEFAULT(appIcpLicenseNumber_, "") };
    inline CreateSmsAppIcpRecordRequest& setAppIcpLicenseNumber(string appIcpLicenseNumber) { DARABONBA_PTR_SET_VALUE(appIcpLicenseNumber_, appIcpLicenseNumber) };


    // appIcpRecordPic Field Functions 
    bool hasAppIcpRecordPic() const { return this->appIcpRecordPic_ != nullptr;};
    void deleteAppIcpRecordPic() { this->appIcpRecordPic_ = nullptr;};
    inline string getAppIcpRecordPic() const { DARABONBA_PTR_GET_DEFAULT(appIcpRecordPic_, "") };
    inline CreateSmsAppIcpRecordRequest& setAppIcpRecordPic(string appIcpRecordPic) { DARABONBA_PTR_SET_VALUE(appIcpRecordPic_, appIcpRecordPic) };


    // appPrincipalUnitName Field Functions 
    bool hasAppPrincipalUnitName() const { return this->appPrincipalUnitName_ != nullptr;};
    void deleteAppPrincipalUnitName() { this->appPrincipalUnitName_ = nullptr;};
    inline string getAppPrincipalUnitName() const { DARABONBA_PTR_GET_DEFAULT(appPrincipalUnitName_, "") };
    inline CreateSmsAppIcpRecordRequest& setAppPrincipalUnitName(string appPrincipalUnitName) { DARABONBA_PTR_SET_VALUE(appPrincipalUnitName_, appPrincipalUnitName) };


    // appRuntimePic Field Functions 
    bool hasAppRuntimePic() const { return this->appRuntimePic_ != nullptr;};
    void deleteAppRuntimePic() { this->appRuntimePic_ = nullptr;};
    inline string getAppRuntimePic() const { DARABONBA_PTR_GET_DEFAULT(appRuntimePic_, "") };
    inline CreateSmsAppIcpRecordRequest& setAppRuntimePic(string appRuntimePic) { DARABONBA_PTR_SET_VALUE(appRuntimePic_, appRuntimePic) };


    // appServiceName Field Functions 
    bool hasAppServiceName() const { return this->appServiceName_ != nullptr;};
    void deleteAppServiceName() { this->appServiceName_ = nullptr;};
    inline string getAppServiceName() const { DARABONBA_PTR_GET_DEFAULT(appServiceName_, "") };
    inline CreateSmsAppIcpRecordRequest& setAppServiceName(string appServiceName) { DARABONBA_PTR_SET_VALUE(appServiceName_, appServiceName) };


    // appStoreDownloadPic Field Functions 
    bool hasAppStoreDownloadPic() const { return this->appStoreDownloadPic_ != nullptr;};
    void deleteAppStoreDownloadPic() { this->appStoreDownloadPic_ = nullptr;};
    inline string getAppStoreDownloadPic() const { DARABONBA_PTR_GET_DEFAULT(appStoreDownloadPic_, "") };
    inline CreateSmsAppIcpRecordRequest& setAppStoreDownloadPic(string appStoreDownloadPic) { DARABONBA_PTR_SET_VALUE(appStoreDownloadPic_, appStoreDownloadPic) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateSmsAppIcpRecordRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmsAppIcpRecordRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmsAppIcpRecordRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmsAppIcpRecordRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ICP filing approval date.
    // 
    // This parameter is required.
    shared_ptr<string> appApprovalDate_ {};
    // The ICP record/license number. The number must not exceed 15 characters.
    // 
    // This parameter is required.
    shared_ptr<string> appIcpLicenseNumber_ {};
    // The fileKey for the screenshot of your app\\"s ICP filing details.
    // 
    // 1. To look up your ICP filing, go to the [MIIT service platform](https://beian.miit.gov.cn/#/Integrated/recordQuery), search for your filing, and open its details page.
    // 
    // 2. The ICP filing screenshot must be uploaded to OSS and meet the following requirements:
    // 
    // - The filename cannot contain Chinese characters or special characters.
    // 
    // - The file must be an image in `jpg`, `png`, `gif`, or `jpeg` format. The file size cannot exceed 5 MB.
    // 
    // - The screenshot must show the full URL.
    // 
    // - For **Record Type**, select "APP".
    // 
    // - The **principal unit name** must be identical to the company or institution name on the qualification documents associated with the signature.
    // 
    // - The screenshot must clearly show the complete ICP record/license number.
    // 
    // - The **service name** must be identical to the **signature name**.
    // 
    // 3. To obtain the fileKey, see [Upload files through OSS](https://help.aliyun.com/document_detail/2833114.html).
    // 
    // This parameter is required.
    shared_ptr<string> appIcpRecordPic_ {};
    // The principal unit name from your ICP filing. The name must not exceed 50 characters.
    // 
    // This parameter is required.
    shared_ptr<string> appPrincipalUnitName_ {};
    // APP实际运行截图osskey
    shared_ptr<string> appRuntimePic_ {};
    // The service name from your ICP filing. The name must not exceed 15 characters.
    // 
    // This parameter is required.
    shared_ptr<string> appServiceName_ {};
    // APP应用商店下载截图osskey
    shared_ptr<string> appStoreDownloadPic_ {};
    // The app store link.
    // 
    // > - The link must start with `http://` or `https://`.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
