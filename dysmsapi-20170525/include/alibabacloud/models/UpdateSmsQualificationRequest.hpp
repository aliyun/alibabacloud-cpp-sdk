// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMSQUALIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMSQUALIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateSmsQualificationRequestBusinessLicensePics.hpp>
#include <alibabacloud/models/UpdateSmsQualificationRequestOtherFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class UpdateSmsQualificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmsQualificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdminIDCardExpDate, adminIDCardExpDate_);
      DARABONBA_PTR_TO_JSON(AdminIDCardFrontFace, adminIDCardFrontFace_);
      DARABONBA_PTR_TO_JSON(AdminIDCardNo, adminIDCardNo_);
      DARABONBA_PTR_TO_JSON(AdminIDCardPic, adminIDCardPic_);
      DARABONBA_PTR_TO_JSON(AdminIDCardType, adminIDCardType_);
      DARABONBA_PTR_TO_JSON(AdminName, adminName_);
      DARABONBA_PTR_TO_JSON(AdminPhoneNo, adminPhoneNo_);
      DARABONBA_PTR_TO_JSON(BusinessLicensePics, businessLicensePics_);
      DARABONBA_PTR_TO_JSON(BussinessLicenseExpDate, bussinessLicenseExpDate_);
      DARABONBA_PTR_TO_JSON(CertifyCode, certifyCode_);
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(LegalPersonIDCardNo, legalPersonIDCardNo_);
      DARABONBA_PTR_TO_JSON(LegalPersonIDCardType, legalPersonIDCardType_);
      DARABONBA_PTR_TO_JSON(LegalPersonIdCardBackSide, legalPersonIdCardBackSide_);
      DARABONBA_PTR_TO_JSON(LegalPersonIdCardEffTime, legalPersonIdCardEffTime_);
      DARABONBA_PTR_TO_JSON(LegalPersonIdCardFrontSide, legalPersonIdCardFrontSide_);
      DARABONBA_PTR_TO_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OtherFiles, otherFiles_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QualificationGroupId, qualificationGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmsQualificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminIDCardExpDate, adminIDCardExpDate_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardFrontFace, adminIDCardFrontFace_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardNo, adminIDCardNo_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardPic, adminIDCardPic_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardType, adminIDCardType_);
      DARABONBA_PTR_FROM_JSON(AdminName, adminName_);
      DARABONBA_PTR_FROM_JSON(AdminPhoneNo, adminPhoneNo_);
      DARABONBA_PTR_FROM_JSON(BusinessLicensePics, businessLicensePics_);
      DARABONBA_PTR_FROM_JSON(BussinessLicenseExpDate, bussinessLicenseExpDate_);
      DARABONBA_PTR_FROM_JSON(CertifyCode, certifyCode_);
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIDCardNo, legalPersonIDCardNo_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIDCardType, legalPersonIDCardType_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIdCardBackSide, legalPersonIdCardBackSide_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIdCardEffTime, legalPersonIdCardEffTime_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIdCardFrontSide, legalPersonIdCardFrontSide_);
      DARABONBA_PTR_FROM_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OtherFiles, otherFiles_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QualificationGroupId, qualificationGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateSmsQualificationRequest() = default ;
    UpdateSmsQualificationRequest(const UpdateSmsQualificationRequest &) = default ;
    UpdateSmsQualificationRequest(UpdateSmsQualificationRequest &&) = default ;
    UpdateSmsQualificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmsQualificationRequest() = default ;
    UpdateSmsQualificationRequest& operator=(const UpdateSmsQualificationRequest &) = default ;
    UpdateSmsQualificationRequest& operator=(UpdateSmsQualificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminIDCardExpDate_ == nullptr
        && return this->adminIDCardFrontFace_ == nullptr && return this->adminIDCardNo_ == nullptr && return this->adminIDCardPic_ == nullptr && return this->adminIDCardType_ == nullptr && return this->adminName_ == nullptr
        && return this->adminPhoneNo_ == nullptr && return this->businessLicensePics_ == nullptr && return this->bussinessLicenseExpDate_ == nullptr && return this->certifyCode_ == nullptr && return this->companyName_ == nullptr
        && return this->legalPersonIDCardNo_ == nullptr && return this->legalPersonIDCardType_ == nullptr && return this->legalPersonIdCardBackSide_ == nullptr && return this->legalPersonIdCardEffTime_ == nullptr && return this->legalPersonIdCardFrontSide_ == nullptr
        && return this->legalPersonName_ == nullptr && return this->orderId_ == nullptr && return this->otherFiles_ == nullptr && return this->ownerId_ == nullptr && return this->qualificationGroupId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // adminIDCardExpDate Field Functions 
    bool hasAdminIDCardExpDate() const { return this->adminIDCardExpDate_ != nullptr;};
    void deleteAdminIDCardExpDate() { this->adminIDCardExpDate_ = nullptr;};
    inline string adminIDCardExpDate() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardExpDate_, "") };
    inline UpdateSmsQualificationRequest& setAdminIDCardExpDate(string adminIDCardExpDate) { DARABONBA_PTR_SET_VALUE(adminIDCardExpDate_, adminIDCardExpDate) };


    // adminIDCardFrontFace Field Functions 
    bool hasAdminIDCardFrontFace() const { return this->adminIDCardFrontFace_ != nullptr;};
    void deleteAdminIDCardFrontFace() { this->adminIDCardFrontFace_ = nullptr;};
    inline string adminIDCardFrontFace() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardFrontFace_, "") };
    inline UpdateSmsQualificationRequest& setAdminIDCardFrontFace(string adminIDCardFrontFace) { DARABONBA_PTR_SET_VALUE(adminIDCardFrontFace_, adminIDCardFrontFace) };


    // adminIDCardNo Field Functions 
    bool hasAdminIDCardNo() const { return this->adminIDCardNo_ != nullptr;};
    void deleteAdminIDCardNo() { this->adminIDCardNo_ = nullptr;};
    inline string adminIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardNo_, "") };
    inline UpdateSmsQualificationRequest& setAdminIDCardNo(string adminIDCardNo) { DARABONBA_PTR_SET_VALUE(adminIDCardNo_, adminIDCardNo) };


    // adminIDCardPic Field Functions 
    bool hasAdminIDCardPic() const { return this->adminIDCardPic_ != nullptr;};
    void deleteAdminIDCardPic() { this->adminIDCardPic_ = nullptr;};
    inline string adminIDCardPic() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardPic_, "") };
    inline UpdateSmsQualificationRequest& setAdminIDCardPic(string adminIDCardPic) { DARABONBA_PTR_SET_VALUE(adminIDCardPic_, adminIDCardPic) };


    // adminIDCardType Field Functions 
    bool hasAdminIDCardType() const { return this->adminIDCardType_ != nullptr;};
    void deleteAdminIDCardType() { this->adminIDCardType_ = nullptr;};
    inline string adminIDCardType() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardType_, "") };
    inline UpdateSmsQualificationRequest& setAdminIDCardType(string adminIDCardType) { DARABONBA_PTR_SET_VALUE(adminIDCardType_, adminIDCardType) };


    // adminName Field Functions 
    bool hasAdminName() const { return this->adminName_ != nullptr;};
    void deleteAdminName() { this->adminName_ = nullptr;};
    inline string adminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
    inline UpdateSmsQualificationRequest& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


    // adminPhoneNo Field Functions 
    bool hasAdminPhoneNo() const { return this->adminPhoneNo_ != nullptr;};
    void deleteAdminPhoneNo() { this->adminPhoneNo_ = nullptr;};
    inline string adminPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(adminPhoneNo_, "") };
    inline UpdateSmsQualificationRequest& setAdminPhoneNo(string adminPhoneNo) { DARABONBA_PTR_SET_VALUE(adminPhoneNo_, adminPhoneNo) };


    // businessLicensePics Field Functions 
    bool hasBusinessLicensePics() const { return this->businessLicensePics_ != nullptr;};
    void deleteBusinessLicensePics() { this->businessLicensePics_ = nullptr;};
    inline const vector<UpdateSmsQualificationRequestBusinessLicensePics> & businessLicensePics() const { DARABONBA_PTR_GET_CONST(businessLicensePics_, vector<UpdateSmsQualificationRequestBusinessLicensePics>) };
    inline vector<UpdateSmsQualificationRequestBusinessLicensePics> businessLicensePics() { DARABONBA_PTR_GET(businessLicensePics_, vector<UpdateSmsQualificationRequestBusinessLicensePics>) };
    inline UpdateSmsQualificationRequest& setBusinessLicensePics(const vector<UpdateSmsQualificationRequestBusinessLicensePics> & businessLicensePics) { DARABONBA_PTR_SET_VALUE(businessLicensePics_, businessLicensePics) };
    inline UpdateSmsQualificationRequest& setBusinessLicensePics(vector<UpdateSmsQualificationRequestBusinessLicensePics> && businessLicensePics) { DARABONBA_PTR_SET_RVALUE(businessLicensePics_, businessLicensePics) };


    // bussinessLicenseExpDate Field Functions 
    bool hasBussinessLicenseExpDate() const { return this->bussinessLicenseExpDate_ != nullptr;};
    void deleteBussinessLicenseExpDate() { this->bussinessLicenseExpDate_ = nullptr;};
    inline string bussinessLicenseExpDate() const { DARABONBA_PTR_GET_DEFAULT(bussinessLicenseExpDate_, "") };
    inline UpdateSmsQualificationRequest& setBussinessLicenseExpDate(string bussinessLicenseExpDate) { DARABONBA_PTR_SET_VALUE(bussinessLicenseExpDate_, bussinessLicenseExpDate) };


    // certifyCode Field Functions 
    bool hasCertifyCode() const { return this->certifyCode_ != nullptr;};
    void deleteCertifyCode() { this->certifyCode_ = nullptr;};
    inline string certifyCode() const { DARABONBA_PTR_GET_DEFAULT(certifyCode_, "") };
    inline UpdateSmsQualificationRequest& setCertifyCode(string certifyCode) { DARABONBA_PTR_SET_VALUE(certifyCode_, certifyCode) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline UpdateSmsQualificationRequest& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // legalPersonIDCardNo Field Functions 
    bool hasLegalPersonIDCardNo() const { return this->legalPersonIDCardNo_ != nullptr;};
    void deleteLegalPersonIDCardNo() { this->legalPersonIDCardNo_ = nullptr;};
    inline string legalPersonIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardNo_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonIDCardNo(string legalPersonIDCardNo) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardNo_, legalPersonIDCardNo) };


    // legalPersonIDCardType Field Functions 
    bool hasLegalPersonIDCardType() const { return this->legalPersonIDCardType_ != nullptr;};
    void deleteLegalPersonIDCardType() { this->legalPersonIDCardType_ = nullptr;};
    inline string legalPersonIDCardType() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardType_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonIDCardType(string legalPersonIDCardType) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardType_, legalPersonIDCardType) };


    // legalPersonIdCardBackSide Field Functions 
    bool hasLegalPersonIdCardBackSide() const { return this->legalPersonIdCardBackSide_ != nullptr;};
    void deleteLegalPersonIdCardBackSide() { this->legalPersonIdCardBackSide_ = nullptr;};
    inline string legalPersonIdCardBackSide() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardBackSide_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonIdCardBackSide(string legalPersonIdCardBackSide) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardBackSide_, legalPersonIdCardBackSide) };


    // legalPersonIdCardEffTime Field Functions 
    bool hasLegalPersonIdCardEffTime() const { return this->legalPersonIdCardEffTime_ != nullptr;};
    void deleteLegalPersonIdCardEffTime() { this->legalPersonIdCardEffTime_ = nullptr;};
    inline string legalPersonIdCardEffTime() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardEffTime_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonIdCardEffTime(string legalPersonIdCardEffTime) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardEffTime_, legalPersonIdCardEffTime) };


    // legalPersonIdCardFrontSide Field Functions 
    bool hasLegalPersonIdCardFrontSide() const { return this->legalPersonIdCardFrontSide_ != nullptr;};
    void deleteLegalPersonIdCardFrontSide() { this->legalPersonIdCardFrontSide_ = nullptr;};
    inline string legalPersonIdCardFrontSide() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardFrontSide_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonIdCardFrontSide(string legalPersonIdCardFrontSide) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardFrontSide_, legalPersonIdCardFrontSide) };


    // legalPersonName Field Functions 
    bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
    void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
    inline string legalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline UpdateSmsQualificationRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // otherFiles Field Functions 
    bool hasOtherFiles() const { return this->otherFiles_ != nullptr;};
    void deleteOtherFiles() { this->otherFiles_ = nullptr;};
    inline const vector<UpdateSmsQualificationRequestOtherFiles> & otherFiles() const { DARABONBA_PTR_GET_CONST(otherFiles_, vector<UpdateSmsQualificationRequestOtherFiles>) };
    inline vector<UpdateSmsQualificationRequestOtherFiles> otherFiles() { DARABONBA_PTR_GET(otherFiles_, vector<UpdateSmsQualificationRequestOtherFiles>) };
    inline UpdateSmsQualificationRequest& setOtherFiles(const vector<UpdateSmsQualificationRequestOtherFiles> & otherFiles) { DARABONBA_PTR_SET_VALUE(otherFiles_, otherFiles) };
    inline UpdateSmsQualificationRequest& setOtherFiles(vector<UpdateSmsQualificationRequestOtherFiles> && otherFiles) { DARABONBA_PTR_SET_RVALUE(otherFiles_, otherFiles) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateSmsQualificationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qualificationGroupId Field Functions 
    bool hasQualificationGroupId() const { return this->qualificationGroupId_ != nullptr;};
    void deleteQualificationGroupId() { this->qualificationGroupId_ = nullptr;};
    inline int64_t qualificationGroupId() const { DARABONBA_PTR_GET_DEFAULT(qualificationGroupId_, 0L) };
    inline UpdateSmsQualificationRequest& setQualificationGroupId(int64_t qualificationGroupId) { DARABONBA_PTR_SET_VALUE(qualificationGroupId_, qualificationGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateSmsQualificationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateSmsQualificationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // 经办人身份证有效期，格式示例2023-01-01~2033-01-01
    std::shared_ptr<string> adminIDCardExpDate_ = nullptr;
    // 经办人身份证照片国徽面
    std::shared_ptr<string> adminIDCardFrontFace_ = nullptr;
    // 经办人身份证号码
    std::shared_ptr<string> adminIDCardNo_ = nullptr;
    // 经办人身份证照片人像面
    std::shared_ptr<string> adminIDCardPic_ = nullptr;
    // 管理员身份证类型。identityCard:中国居民身份证;passport:护照;homeReturnPermit:港澳居民来往内地通行证;TaiwanCompatriotPermit:台湾居民来往大陆通行证;residencePermit:港澳台居民居住证";other:其他
    std::shared_ptr<string> adminIDCardType_ = nullptr;
    // 经办人姓名
    std::shared_ptr<string> adminName_ = nullptr;
    // 经办人手机号码
    // 
    // This parameter is required.
    std::shared_ptr<string> adminPhoneNo_ = nullptr;
    // 企业证件信息
    std::shared_ptr<vector<UpdateSmsQualificationRequestBusinessLicensePics>> businessLicensePics_ = nullptr;
    // 企业营业时间开始和结束字符串，格式示例2023-01-01~2033-01-01
    std::shared_ptr<string> bussinessLicenseExpDate_ = nullptr;
    // 手机号验证码
    // 
    // This parameter is required.
    std::shared_ptr<string> certifyCode_ = nullptr;
    // 公司名称
    std::shared_ptr<string> companyName_ = nullptr;
    // 法人身份证号码
    std::shared_ptr<string> legalPersonIDCardNo_ = nullptr;
    // 法人身份证类型。identityCard:中国居民身份证;passport:护照;homeReturnPermit:港澳居民来往内地通行证;TaiwanCompatriotPermit:台湾居民来往大陆通行证;residencePermit:港澳台居民居住证";other:其他
    std::shared_ptr<string> legalPersonIDCardType_ = nullptr;
    // 法人身份证照片人像面
    std::shared_ptr<string> legalPersonIdCardBackSide_ = nullptr;
    // 法人身份证有效期，格式示例2023-01-01~2033-01-01
    std::shared_ptr<string> legalPersonIdCardEffTime_ = nullptr;
    // 法人身份照片证国徽面
    std::shared_ptr<string> legalPersonIdCardFrontSide_ = nullptr;
    // 法人姓名
    std::shared_ptr<string> legalPersonName_ = nullptr;
    // 工单ID
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // 更多资料
    std::shared_ptr<vector<UpdateSmsQualificationRequestOtherFiles>> otherFiles_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // 资质组ID
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> qualificationGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
