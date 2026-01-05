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
      DARABONBA_PTR_TO_JSON(AppServiceName, appServiceName_);
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
      DARABONBA_PTR_FROM_JSON(AppServiceName, appServiceName_);
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
        && this->appIcpLicenseNumber_ == nullptr && this->appIcpRecordPic_ == nullptr && this->appPrincipalUnitName_ == nullptr && this->appServiceName_ == nullptr && this->domain_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
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


    // appServiceName Field Functions 
    bool hasAppServiceName() const { return this->appServiceName_ != nullptr;};
    void deleteAppServiceName() { this->appServiceName_ = nullptr;};
    inline string getAppServiceName() const { DARABONBA_PTR_GET_DEFAULT(appServiceName_, "") };
    inline CreateSmsAppIcpRecordRequest& setAppServiceName(string appServiceName) { DARABONBA_PTR_SET_VALUE(appServiceName_, appServiceName) };


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
    // 审核通过日期，示例2025-09-01
    // 
    // This parameter is required.
    shared_ptr<string> appApprovalDate_ {};
    // ICP备案/许可证号
    // 
    // This parameter is required.
    shared_ptr<string> appIcpLicenseNumber_ {};
    // app-icp备案详情截图osskey
    // 
    // This parameter is required.
    shared_ptr<string> appIcpRecordPic_ {};
    // 主办单位名称
    // 
    // This parameter is required.
    shared_ptr<string> appPrincipalUnitName_ {};
    // app服务名称
    // 
    // This parameter is required.
    shared_ptr<string> appServiceName_ {};
    // APP应用商店链接
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
