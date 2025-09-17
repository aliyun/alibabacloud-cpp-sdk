// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMSQUALIFICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMSQUALIFICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SubmitSmsQualificationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmsQualificationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdminIDCardExpDate, adminIDCardExpDate_);
      DARABONBA_PTR_TO_JSON(AdminIDCardFrontFace, adminIDCardFrontFace_);
      DARABONBA_PTR_TO_JSON(AdminIDCardNo, adminIDCardNo_);
      DARABONBA_PTR_TO_JSON(AdminIDCardPic, adminIDCardPic_);
      DARABONBA_PTR_TO_JSON(AdminIDCardType, adminIDCardType_);
      DARABONBA_PTR_TO_JSON(AdminName, adminName_);
      DARABONBA_PTR_TO_JSON(AdminPhoneNo, adminPhoneNo_);
      DARABONBA_PTR_TO_JSON(BusinessLicensePics, businessLicensePicsShrink_);
      DARABONBA_PTR_TO_JSON(BussinessLicenseExpDate, bussinessLicenseExpDate_);
      DARABONBA_PTR_TO_JSON(CertifyCode, certifyCode_);
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(CompanyType, companyType_);
      DARABONBA_PTR_TO_JSON(LegalPersonIDCardNo, legalPersonIDCardNo_);
      DARABONBA_PTR_TO_JSON(LegalPersonIDCardType, legalPersonIDCardType_);
      DARABONBA_PTR_TO_JSON(LegalPersonIdCardBackSide, legalPersonIdCardBackSide_);
      DARABONBA_PTR_TO_JSON(LegalPersonIdCardEffTime, legalPersonIdCardEffTime_);
      DARABONBA_PTR_TO_JSON(LegalPersonIdCardFrontSide, legalPersonIdCardFrontSide_);
      DARABONBA_PTR_TO_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_TO_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_TO_JSON(OtherFiles, otherFilesShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QualificationName, qualificationName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UseBySelf, useBySelf_);
      DARABONBA_PTR_TO_JSON(WhetherShare, whetherShare_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmsQualificationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminIDCardExpDate, adminIDCardExpDate_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardFrontFace, adminIDCardFrontFace_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardNo, adminIDCardNo_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardPic, adminIDCardPic_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardType, adminIDCardType_);
      DARABONBA_PTR_FROM_JSON(AdminName, adminName_);
      DARABONBA_PTR_FROM_JSON(AdminPhoneNo, adminPhoneNo_);
      DARABONBA_PTR_FROM_JSON(BusinessLicensePics, businessLicensePicsShrink_);
      DARABONBA_PTR_FROM_JSON(BussinessLicenseExpDate, bussinessLicenseExpDate_);
      DARABONBA_PTR_FROM_JSON(CertifyCode, certifyCode_);
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(CompanyType, companyType_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIDCardNo, legalPersonIDCardNo_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIDCardType, legalPersonIDCardType_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIdCardBackSide, legalPersonIdCardBackSide_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIdCardEffTime, legalPersonIdCardEffTime_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIdCardFrontSide, legalPersonIdCardFrontSide_);
      DARABONBA_PTR_FROM_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_FROM_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_FROM_JSON(OtherFiles, otherFilesShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QualificationName, qualificationName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UseBySelf, useBySelf_);
      DARABONBA_PTR_FROM_JSON(WhetherShare, whetherShare_);
    };
    SubmitSmsQualificationShrinkRequest() = default ;
    SubmitSmsQualificationShrinkRequest(const SubmitSmsQualificationShrinkRequest &) = default ;
    SubmitSmsQualificationShrinkRequest(SubmitSmsQualificationShrinkRequest &&) = default ;
    SubmitSmsQualificationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmsQualificationShrinkRequest() = default ;
    SubmitSmsQualificationShrinkRequest& operator=(const SubmitSmsQualificationShrinkRequest &) = default ;
    SubmitSmsQualificationShrinkRequest& operator=(SubmitSmsQualificationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adminIDCardExpDate_ != nullptr
        && this->adminIDCardFrontFace_ != nullptr && this->adminIDCardNo_ != nullptr && this->adminIDCardPic_ != nullptr && this->adminIDCardType_ != nullptr && this->adminName_ != nullptr
        && this->adminPhoneNo_ != nullptr && this->businessLicensePicsShrink_ != nullptr && this->bussinessLicenseExpDate_ != nullptr && this->certifyCode_ != nullptr && this->companyName_ != nullptr
        && this->companyType_ != nullptr && this->legalPersonIDCardNo_ != nullptr && this->legalPersonIDCardType_ != nullptr && this->legalPersonIdCardBackSide_ != nullptr && this->legalPersonIdCardEffTime_ != nullptr
        && this->legalPersonIdCardFrontSide_ != nullptr && this->legalPersonName_ != nullptr && this->organizationCode_ != nullptr && this->otherFilesShrink_ != nullptr && this->ownerId_ != nullptr
        && this->qualificationName_ != nullptr && this->remark_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->useBySelf_ != nullptr
        && this->whetherShare_ != nullptr; };
    // adminIDCardExpDate Field Functions 
    bool hasAdminIDCardExpDate() const { return this->adminIDCardExpDate_ != nullptr;};
    void deleteAdminIDCardExpDate() { this->adminIDCardExpDate_ = nullptr;};
    inline string adminIDCardExpDate() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardExpDate_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminIDCardExpDate(string adminIDCardExpDate) { DARABONBA_PTR_SET_VALUE(adminIDCardExpDate_, adminIDCardExpDate) };


    // adminIDCardFrontFace Field Functions 
    bool hasAdminIDCardFrontFace() const { return this->adminIDCardFrontFace_ != nullptr;};
    void deleteAdminIDCardFrontFace() { this->adminIDCardFrontFace_ = nullptr;};
    inline string adminIDCardFrontFace() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardFrontFace_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminIDCardFrontFace(string adminIDCardFrontFace) { DARABONBA_PTR_SET_VALUE(adminIDCardFrontFace_, adminIDCardFrontFace) };


    // adminIDCardNo Field Functions 
    bool hasAdminIDCardNo() const { return this->adminIDCardNo_ != nullptr;};
    void deleteAdminIDCardNo() { this->adminIDCardNo_ = nullptr;};
    inline string adminIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardNo_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminIDCardNo(string adminIDCardNo) { DARABONBA_PTR_SET_VALUE(adminIDCardNo_, adminIDCardNo) };


    // adminIDCardPic Field Functions 
    bool hasAdminIDCardPic() const { return this->adminIDCardPic_ != nullptr;};
    void deleteAdminIDCardPic() { this->adminIDCardPic_ = nullptr;};
    inline string adminIDCardPic() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardPic_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminIDCardPic(string adminIDCardPic) { DARABONBA_PTR_SET_VALUE(adminIDCardPic_, adminIDCardPic) };


    // adminIDCardType Field Functions 
    bool hasAdminIDCardType() const { return this->adminIDCardType_ != nullptr;};
    void deleteAdminIDCardType() { this->adminIDCardType_ = nullptr;};
    inline string adminIDCardType() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardType_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminIDCardType(string adminIDCardType) { DARABONBA_PTR_SET_VALUE(adminIDCardType_, adminIDCardType) };


    // adminName Field Functions 
    bool hasAdminName() const { return this->adminName_ != nullptr;};
    void deleteAdminName() { this->adminName_ = nullptr;};
    inline string adminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


    // adminPhoneNo Field Functions 
    bool hasAdminPhoneNo() const { return this->adminPhoneNo_ != nullptr;};
    void deleteAdminPhoneNo() { this->adminPhoneNo_ = nullptr;};
    inline string adminPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(adminPhoneNo_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminPhoneNo(string adminPhoneNo) { DARABONBA_PTR_SET_VALUE(adminPhoneNo_, adminPhoneNo) };


    // businessLicensePicsShrink Field Functions 
    bool hasBusinessLicensePicsShrink() const { return this->businessLicensePicsShrink_ != nullptr;};
    void deleteBusinessLicensePicsShrink() { this->businessLicensePicsShrink_ = nullptr;};
    inline string businessLicensePicsShrink() const { DARABONBA_PTR_GET_DEFAULT(businessLicensePicsShrink_, "") };
    inline SubmitSmsQualificationShrinkRequest& setBusinessLicensePicsShrink(string businessLicensePicsShrink) { DARABONBA_PTR_SET_VALUE(businessLicensePicsShrink_, businessLicensePicsShrink) };


    // bussinessLicenseExpDate Field Functions 
    bool hasBussinessLicenseExpDate() const { return this->bussinessLicenseExpDate_ != nullptr;};
    void deleteBussinessLicenseExpDate() { this->bussinessLicenseExpDate_ = nullptr;};
    inline string bussinessLicenseExpDate() const { DARABONBA_PTR_GET_DEFAULT(bussinessLicenseExpDate_, "") };
    inline SubmitSmsQualificationShrinkRequest& setBussinessLicenseExpDate(string bussinessLicenseExpDate) { DARABONBA_PTR_SET_VALUE(bussinessLicenseExpDate_, bussinessLicenseExpDate) };


    // certifyCode Field Functions 
    bool hasCertifyCode() const { return this->certifyCode_ != nullptr;};
    void deleteCertifyCode() { this->certifyCode_ = nullptr;};
    inline string certifyCode() const { DARABONBA_PTR_GET_DEFAULT(certifyCode_, "") };
    inline SubmitSmsQualificationShrinkRequest& setCertifyCode(string certifyCode) { DARABONBA_PTR_SET_VALUE(certifyCode_, certifyCode) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline SubmitSmsQualificationShrinkRequest& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // companyType Field Functions 
    bool hasCompanyType() const { return this->companyType_ != nullptr;};
    void deleteCompanyType() { this->companyType_ = nullptr;};
    inline string companyType() const { DARABONBA_PTR_GET_DEFAULT(companyType_, "") };
    inline SubmitSmsQualificationShrinkRequest& setCompanyType(string companyType) { DARABONBA_PTR_SET_VALUE(companyType_, companyType) };


    // legalPersonIDCardNo Field Functions 
    bool hasLegalPersonIDCardNo() const { return this->legalPersonIDCardNo_ != nullptr;};
    void deleteLegalPersonIDCardNo() { this->legalPersonIDCardNo_ = nullptr;};
    inline string legalPersonIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardNo_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonIDCardNo(string legalPersonIDCardNo) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardNo_, legalPersonIDCardNo) };


    // legalPersonIDCardType Field Functions 
    bool hasLegalPersonIDCardType() const { return this->legalPersonIDCardType_ != nullptr;};
    void deleteLegalPersonIDCardType() { this->legalPersonIDCardType_ = nullptr;};
    inline string legalPersonIDCardType() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardType_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonIDCardType(string legalPersonIDCardType) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardType_, legalPersonIDCardType) };


    // legalPersonIdCardBackSide Field Functions 
    bool hasLegalPersonIdCardBackSide() const { return this->legalPersonIdCardBackSide_ != nullptr;};
    void deleteLegalPersonIdCardBackSide() { this->legalPersonIdCardBackSide_ = nullptr;};
    inline string legalPersonIdCardBackSide() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardBackSide_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonIdCardBackSide(string legalPersonIdCardBackSide) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardBackSide_, legalPersonIdCardBackSide) };


    // legalPersonIdCardEffTime Field Functions 
    bool hasLegalPersonIdCardEffTime() const { return this->legalPersonIdCardEffTime_ != nullptr;};
    void deleteLegalPersonIdCardEffTime() { this->legalPersonIdCardEffTime_ = nullptr;};
    inline string legalPersonIdCardEffTime() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardEffTime_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonIdCardEffTime(string legalPersonIdCardEffTime) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardEffTime_, legalPersonIdCardEffTime) };


    // legalPersonIdCardFrontSide Field Functions 
    bool hasLegalPersonIdCardFrontSide() const { return this->legalPersonIdCardFrontSide_ != nullptr;};
    void deleteLegalPersonIdCardFrontSide() { this->legalPersonIdCardFrontSide_ = nullptr;};
    inline string legalPersonIdCardFrontSide() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardFrontSide_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonIdCardFrontSide(string legalPersonIdCardFrontSide) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardFrontSide_, legalPersonIdCardFrontSide) };


    // legalPersonName Field Functions 
    bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
    void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
    inline string legalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


    // organizationCode Field Functions 
    bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
    void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
    inline string organizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
    inline SubmitSmsQualificationShrinkRequest& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


    // otherFilesShrink Field Functions 
    bool hasOtherFilesShrink() const { return this->otherFilesShrink_ != nullptr;};
    void deleteOtherFilesShrink() { this->otherFilesShrink_ = nullptr;};
    inline string otherFilesShrink() const { DARABONBA_PTR_GET_DEFAULT(otherFilesShrink_, "") };
    inline SubmitSmsQualificationShrinkRequest& setOtherFilesShrink(string otherFilesShrink) { DARABONBA_PTR_SET_VALUE(otherFilesShrink_, otherFilesShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SubmitSmsQualificationShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qualificationName Field Functions 
    bool hasQualificationName() const { return this->qualificationName_ != nullptr;};
    void deleteQualificationName() { this->qualificationName_ = nullptr;};
    inline string qualificationName() const { DARABONBA_PTR_GET_DEFAULT(qualificationName_, "") };
    inline SubmitSmsQualificationShrinkRequest& setQualificationName(string qualificationName) { DARABONBA_PTR_SET_VALUE(qualificationName_, qualificationName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline SubmitSmsQualificationShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitSmsQualificationShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SubmitSmsQualificationShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // useBySelf Field Functions 
    bool hasUseBySelf() const { return this->useBySelf_ != nullptr;};
    void deleteUseBySelf() { this->useBySelf_ = nullptr;};
    inline bool useBySelf() const { DARABONBA_PTR_GET_DEFAULT(useBySelf_, false) };
    inline SubmitSmsQualificationShrinkRequest& setUseBySelf(bool useBySelf) { DARABONBA_PTR_SET_VALUE(useBySelf_, useBySelf) };


    // whetherShare Field Functions 
    bool hasWhetherShare() const { return this->whetherShare_ != nullptr;};
    void deleteWhetherShare() { this->whetherShare_ = nullptr;};
    inline bool whetherShare() const { DARABONBA_PTR_GET_DEFAULT(whetherShare_, false) };
    inline SubmitSmsQualificationShrinkRequest& setWhetherShare(bool whetherShare) { DARABONBA_PTR_SET_VALUE(whetherShare_, whetherShare) };


  protected:
    // 经办人身份证有效期，格式示例2023-01-01~2033-01-01
    // 
    // This parameter is required.
    std::shared_ptr<string> adminIDCardExpDate_ = nullptr;
    // 经办人身份证照片国徽面
    // 
    // This parameter is required.
    std::shared_ptr<string> adminIDCardFrontFace_ = nullptr;
    // 经办人身份证号码
    // 
    // This parameter is required.
    std::shared_ptr<string> adminIDCardNo_ = nullptr;
    // 经办人身份证照片人像面
    // 
    // This parameter is required.
    std::shared_ptr<string> adminIDCardPic_ = nullptr;
    // 管理员身份证类型。identityCard:中国居民身份证;passport:护照;homeReturnPermit:港澳居民来往内地通行证;TaiwanCompatriotPermit:台湾居民来往大陆通行证;residencePermit:港澳台居民居住证";other:其他
    // 
    // This parameter is required.
    std::shared_ptr<string> adminIDCardType_ = nullptr;
    // 经办人姓名
    // 
    // This parameter is required.
    std::shared_ptr<string> adminName_ = nullptr;
    // 经办人手机号码
    // 
    // This parameter is required.
    std::shared_ptr<string> adminPhoneNo_ = nullptr;
    // 企业营业证件信息，非大客户必填
    std::shared_ptr<string> businessLicensePicsShrink_ = nullptr;
    // 企业营业时间开始和结束字符串，格式示例2023-01-01~2033-01-01
    // 
    // This parameter is required.
    std::shared_ptr<string> bussinessLicenseExpDate_ = nullptr;
    // 手机号验证码
    // 
    // This parameter is required.
    std::shared_ptr<string> certifyCode_ = nullptr;
    // 公司名称
    // 
    // This parameter is required.
    std::shared_ptr<string> companyName_ = nullptr;
    // 企业类型, COMPANY:公司;NON_PROFIT_ORGANIZATION:政府或者事业单位
    // 
    // This parameter is required.
    std::shared_ptr<string> companyType_ = nullptr;
    // 法人身份证号码
    // 
    // This parameter is required.
    std::shared_ptr<string> legalPersonIDCardNo_ = nullptr;
    // 法人身份证类型。identityCard:中国居民身份证;passport:护照;homeReturnPermit:港澳居民来往内地通行证;TaiwanCompatriotPermit:台湾居民来往大陆通行证;residencePermit:港澳台居民居住证";other:其他
    // 
    // This parameter is required.
    std::shared_ptr<string> legalPersonIDCardType_ = nullptr;
    // 法人身份证照片人像面
    std::shared_ptr<string> legalPersonIdCardBackSide_ = nullptr;
    // 法人身份证有效期
    // 
    // This parameter is required.
    std::shared_ptr<string> legalPersonIdCardEffTime_ = nullptr;
    // 法人身份证照片国徽面
    std::shared_ptr<string> legalPersonIdCardFrontSide_ = nullptr;
    // 法人姓名
    // 
    // This parameter is required.
    std::shared_ptr<string> legalPersonName_ = nullptr;
    // 社会统一信用代码
    // 
    // This parameter is required.
    std::shared_ptr<string> organizationCode_ = nullptr;
    // 更多资料
    std::shared_ptr<string> otherFilesShrink_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // 资质名称,名称不能重复
    // 
    // This parameter is required.
    std::shared_ptr<string> qualificationName_ = nullptr;
    // 备注
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // 资质是自用还是他用，true：自用，false：他用
    // 
    // This parameter is required.
    std::shared_ptr<bool> useBySelf_ = nullptr;
    // 是否同意与其他业务线共享
    // 
    // This parameter is required.
    std::shared_ptr<bool> whetherShare_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
