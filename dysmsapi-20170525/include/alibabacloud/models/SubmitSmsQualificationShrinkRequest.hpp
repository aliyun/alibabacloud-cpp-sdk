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
    virtual bool empty() const override { return this->adminIDCardExpDate_ == nullptr
        && this->adminIDCardFrontFace_ == nullptr && this->adminIDCardNo_ == nullptr && this->adminIDCardPic_ == nullptr && this->adminIDCardType_ == nullptr && this->adminName_ == nullptr
        && this->adminPhoneNo_ == nullptr && this->businessLicensePicsShrink_ == nullptr && this->bussinessLicenseExpDate_ == nullptr && this->certifyCode_ == nullptr && this->companyName_ == nullptr
        && this->companyType_ == nullptr && this->legalPersonIDCardNo_ == nullptr && this->legalPersonIDCardType_ == nullptr && this->legalPersonIdCardBackSide_ == nullptr && this->legalPersonIdCardEffTime_ == nullptr
        && this->legalPersonIdCardFrontSide_ == nullptr && this->legalPersonName_ == nullptr && this->organizationCode_ == nullptr && this->otherFilesShrink_ == nullptr && this->ownerId_ == nullptr
        && this->qualificationName_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->useBySelf_ == nullptr
        && this->whetherShare_ == nullptr; };
    // adminIDCardExpDate Field Functions 
    bool hasAdminIDCardExpDate() const { return this->adminIDCardExpDate_ != nullptr;};
    void deleteAdminIDCardExpDate() { this->adminIDCardExpDate_ = nullptr;};
    inline string getAdminIDCardExpDate() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardExpDate_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminIDCardExpDate(string adminIDCardExpDate) { DARABONBA_PTR_SET_VALUE(adminIDCardExpDate_, adminIDCardExpDate) };


    // adminIDCardFrontFace Field Functions 
    bool hasAdminIDCardFrontFace() const { return this->adminIDCardFrontFace_ != nullptr;};
    void deleteAdminIDCardFrontFace() { this->adminIDCardFrontFace_ = nullptr;};
    inline string getAdminIDCardFrontFace() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardFrontFace_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminIDCardFrontFace(string adminIDCardFrontFace) { DARABONBA_PTR_SET_VALUE(adminIDCardFrontFace_, adminIDCardFrontFace) };


    // adminIDCardNo Field Functions 
    bool hasAdminIDCardNo() const { return this->adminIDCardNo_ != nullptr;};
    void deleteAdminIDCardNo() { this->adminIDCardNo_ = nullptr;};
    inline string getAdminIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardNo_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminIDCardNo(string adminIDCardNo) { DARABONBA_PTR_SET_VALUE(adminIDCardNo_, adminIDCardNo) };


    // adminIDCardPic Field Functions 
    bool hasAdminIDCardPic() const { return this->adminIDCardPic_ != nullptr;};
    void deleteAdminIDCardPic() { this->adminIDCardPic_ = nullptr;};
    inline string getAdminIDCardPic() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardPic_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminIDCardPic(string adminIDCardPic) { DARABONBA_PTR_SET_VALUE(adminIDCardPic_, adminIDCardPic) };


    // adminIDCardType Field Functions 
    bool hasAdminIDCardType() const { return this->adminIDCardType_ != nullptr;};
    void deleteAdminIDCardType() { this->adminIDCardType_ = nullptr;};
    inline string getAdminIDCardType() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardType_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminIDCardType(string adminIDCardType) { DARABONBA_PTR_SET_VALUE(adminIDCardType_, adminIDCardType) };


    // adminName Field Functions 
    bool hasAdminName() const { return this->adminName_ != nullptr;};
    void deleteAdminName() { this->adminName_ = nullptr;};
    inline string getAdminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


    // adminPhoneNo Field Functions 
    bool hasAdminPhoneNo() const { return this->adminPhoneNo_ != nullptr;};
    void deleteAdminPhoneNo() { this->adminPhoneNo_ = nullptr;};
    inline string getAdminPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(adminPhoneNo_, "") };
    inline SubmitSmsQualificationShrinkRequest& setAdminPhoneNo(string adminPhoneNo) { DARABONBA_PTR_SET_VALUE(adminPhoneNo_, adminPhoneNo) };


    // businessLicensePicsShrink Field Functions 
    bool hasBusinessLicensePicsShrink() const { return this->businessLicensePicsShrink_ != nullptr;};
    void deleteBusinessLicensePicsShrink() { this->businessLicensePicsShrink_ = nullptr;};
    inline string getBusinessLicensePicsShrink() const { DARABONBA_PTR_GET_DEFAULT(businessLicensePicsShrink_, "") };
    inline SubmitSmsQualificationShrinkRequest& setBusinessLicensePicsShrink(string businessLicensePicsShrink) { DARABONBA_PTR_SET_VALUE(businessLicensePicsShrink_, businessLicensePicsShrink) };


    // bussinessLicenseExpDate Field Functions 
    bool hasBussinessLicenseExpDate() const { return this->bussinessLicenseExpDate_ != nullptr;};
    void deleteBussinessLicenseExpDate() { this->bussinessLicenseExpDate_ = nullptr;};
    inline string getBussinessLicenseExpDate() const { DARABONBA_PTR_GET_DEFAULT(bussinessLicenseExpDate_, "") };
    inline SubmitSmsQualificationShrinkRequest& setBussinessLicenseExpDate(string bussinessLicenseExpDate) { DARABONBA_PTR_SET_VALUE(bussinessLicenseExpDate_, bussinessLicenseExpDate) };


    // certifyCode Field Functions 
    bool hasCertifyCode() const { return this->certifyCode_ != nullptr;};
    void deleteCertifyCode() { this->certifyCode_ = nullptr;};
    inline string getCertifyCode() const { DARABONBA_PTR_GET_DEFAULT(certifyCode_, "") };
    inline SubmitSmsQualificationShrinkRequest& setCertifyCode(string certifyCode) { DARABONBA_PTR_SET_VALUE(certifyCode_, certifyCode) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline SubmitSmsQualificationShrinkRequest& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // companyType Field Functions 
    bool hasCompanyType() const { return this->companyType_ != nullptr;};
    void deleteCompanyType() { this->companyType_ = nullptr;};
    inline string getCompanyType() const { DARABONBA_PTR_GET_DEFAULT(companyType_, "") };
    inline SubmitSmsQualificationShrinkRequest& setCompanyType(string companyType) { DARABONBA_PTR_SET_VALUE(companyType_, companyType) };


    // legalPersonIDCardNo Field Functions 
    bool hasLegalPersonIDCardNo() const { return this->legalPersonIDCardNo_ != nullptr;};
    void deleteLegalPersonIDCardNo() { this->legalPersonIDCardNo_ = nullptr;};
    inline string getLegalPersonIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardNo_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonIDCardNo(string legalPersonIDCardNo) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardNo_, legalPersonIDCardNo) };


    // legalPersonIDCardType Field Functions 
    bool hasLegalPersonIDCardType() const { return this->legalPersonIDCardType_ != nullptr;};
    void deleteLegalPersonIDCardType() { this->legalPersonIDCardType_ = nullptr;};
    inline string getLegalPersonIDCardType() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardType_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonIDCardType(string legalPersonIDCardType) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardType_, legalPersonIDCardType) };


    // legalPersonIdCardBackSide Field Functions 
    bool hasLegalPersonIdCardBackSide() const { return this->legalPersonIdCardBackSide_ != nullptr;};
    void deleteLegalPersonIdCardBackSide() { this->legalPersonIdCardBackSide_ = nullptr;};
    inline string getLegalPersonIdCardBackSide() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardBackSide_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonIdCardBackSide(string legalPersonIdCardBackSide) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardBackSide_, legalPersonIdCardBackSide) };


    // legalPersonIdCardEffTime Field Functions 
    bool hasLegalPersonIdCardEffTime() const { return this->legalPersonIdCardEffTime_ != nullptr;};
    void deleteLegalPersonIdCardEffTime() { this->legalPersonIdCardEffTime_ = nullptr;};
    inline string getLegalPersonIdCardEffTime() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardEffTime_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonIdCardEffTime(string legalPersonIdCardEffTime) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardEffTime_, legalPersonIdCardEffTime) };


    // legalPersonIdCardFrontSide Field Functions 
    bool hasLegalPersonIdCardFrontSide() const { return this->legalPersonIdCardFrontSide_ != nullptr;};
    void deleteLegalPersonIdCardFrontSide() { this->legalPersonIdCardFrontSide_ = nullptr;};
    inline string getLegalPersonIdCardFrontSide() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardFrontSide_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonIdCardFrontSide(string legalPersonIdCardFrontSide) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardFrontSide_, legalPersonIdCardFrontSide) };


    // legalPersonName Field Functions 
    bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
    void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
    inline string getLegalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
    inline SubmitSmsQualificationShrinkRequest& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


    // organizationCode Field Functions 
    bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
    void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
    inline string getOrganizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
    inline SubmitSmsQualificationShrinkRequest& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


    // otherFilesShrink Field Functions 
    bool hasOtherFilesShrink() const { return this->otherFilesShrink_ != nullptr;};
    void deleteOtherFilesShrink() { this->otherFilesShrink_ = nullptr;};
    inline string getOtherFilesShrink() const { DARABONBA_PTR_GET_DEFAULT(otherFilesShrink_, "") };
    inline SubmitSmsQualificationShrinkRequest& setOtherFilesShrink(string otherFilesShrink) { DARABONBA_PTR_SET_VALUE(otherFilesShrink_, otherFilesShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SubmitSmsQualificationShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qualificationName Field Functions 
    bool hasQualificationName() const { return this->qualificationName_ != nullptr;};
    void deleteQualificationName() { this->qualificationName_ = nullptr;};
    inline string getQualificationName() const { DARABONBA_PTR_GET_DEFAULT(qualificationName_, "") };
    inline SubmitSmsQualificationShrinkRequest& setQualificationName(string qualificationName) { DARABONBA_PTR_SET_VALUE(qualificationName_, qualificationName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline SubmitSmsQualificationShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitSmsQualificationShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SubmitSmsQualificationShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // useBySelf Field Functions 
    bool hasUseBySelf() const { return this->useBySelf_ != nullptr;};
    void deleteUseBySelf() { this->useBySelf_ = nullptr;};
    inline bool getUseBySelf() const { DARABONBA_PTR_GET_DEFAULT(useBySelf_, false) };
    inline SubmitSmsQualificationShrinkRequest& setUseBySelf(bool useBySelf) { DARABONBA_PTR_SET_VALUE(useBySelf_, useBySelf) };


    // whetherShare Field Functions 
    bool hasWhetherShare() const { return this->whetherShare_ != nullptr;};
    void deleteWhetherShare() { this->whetherShare_ = nullptr;};
    inline bool getWhetherShare() const { DARABONBA_PTR_GET_DEFAULT(whetherShare_, false) };
    inline SubmitSmsQualificationShrinkRequest& setWhetherShare(bool whetherShare) { DARABONBA_PTR_SET_VALUE(whetherShare_, whetherShare) };


  protected:
    // The administrator\\"s ID card validity period. Format: YYYY-MM-DD~YYYY-MM-DD.
    // > If the ID card has a long-term validity period, set the end date to 2099-12-31.
    // 
    // This parameter is required.
    shared_ptr<string> adminIDCardExpDate_ {};
    // The front photo of the administrator\\"s ID card (national emblem side). Only jpg, png, gif, and jpeg formats are supported. The image must not exceed 5 MB. Specify the file path uploaded to OSS. The file name must not contain Chinese characters or special characters. For upload instructions, see [Upload files through OSS](https://help.aliyun.com/document_detail/2833114.html).
    // 
    // >Notice: 
    // Color originals do not require a stamp. If you upload a photocopy or black-and-white photo, stamp the photocopy with the company seal and take a photo to upload.
    // 
    // .
    // 
    // This parameter is required.
    shared_ptr<string> adminIDCardFrontFace_ {};
    // The administrator\\"s ID card number.
    // 
    // This parameter is required.
    shared_ptr<string> adminIDCardNo_ {};
    // The back photo of the administrator\\"s ID card (portrait side). Only jpg, png, gif, and jpeg formats are supported. The image must not exceed 5 MB. Specify the file path uploaded to OSS. The file name must not contain Chinese characters or special characters. For upload instructions, see [Upload files through OSS](https://help.aliyun.com/document_detail/2833114.html).
    // 
    // >Notice: 
    // Color originals do not require a stamp. If you upload a photocopy or black-and-white photo, stamp the photocopy with the company seal and take a photo to upload.
    // 
    // .
    // 
    // This parameter is required.
    shared_ptr<string> adminIDCardPic_ {};
    // The administrator\\"s ID card type. Valid values:
    // 
    // - identityCard: ID card.
    // - passport: passport.
    // - homeReturnPermit: Hong Kong/Macao resident travel permit to mainland.
    // - TaiwanCompatriotPermit: Taiwan resident travel permit to mainland.
    // - residencePermit: Hong Kong/Macao/Taiwan resident residence permit.
    // - other: other.
    // 
    // This parameter is required.
    shared_ptr<string> adminIDCardType_ {};
    // The administrator\\"s name. Maximum length: 50 characters. **Under the current [SMS signature real-name requirements](https://help.aliyun.com/document_detail/2873145.html), if the same administrator applies for qualifications for multiple different enterprises, carrier registration will fail. Ensure one administrator per enterprise to improve the registration success rate.**
    // 
    // > The administrator (also called the handler) is the person who logs on to the Alibaba Cloud account and manages SMS services. This person typically manages qualifications, signatures, and templates under this Alibaba Cloud account and performs SMS sending operations. This person\\"s phone number must be able to receive verification codes. The administrator does not have to be the Alibaba Cloud account administrator and can be the same person as the legal representative.
    // 
    // This parameter is required.
    shared_ptr<string> adminName_ {};
    // The administrator\\"s phone number. Format: +/+86/0086/86 or a phone number without any prefix, such as 1390000****.
    // 
    // This parameter is required.
    shared_ptr<string> adminPhoneNo_ {};
    // The business license information. This parameter is required when the qualification purpose `UseBySelf` is set to `false` (third-party use).
    // > - Based on carrier real-name registration regulatory requirements, we strongly recommend that you provide the relevant field information. Otherwise, the probability of "review rejection or carrier registration failure" increases significantly.
    shared_ptr<string> businessLicensePicsShrink_ {};
    // The business license validity period. Format: YYYY-MM-DD~YYYY-MM-DD.
    // > If the certificate has a long-term validity period, set the end date to 2099-12-31.
    // 
    // This parameter is required.
    shared_ptr<string> bussinessLicenseExpDate_ {};
    // The phone verification code. Call the [RequiredPhoneCode](~~RequiredPhoneCode~~) operation with the **administrator\\"s phone number**, and then enter the SMS verification code received.
    // 
    // > You can use [ValidPhoneCode](~~ValidPhoneCode~~) to verify whether the SMS verification code is correct before passing it in.
    // 
    // This parameter is required.
    shared_ptr<string> certifyCode_ {};
    // The enterprise name. Only the middle dot `·`, Chinese brackets `【】（）`, English parentheses `()`, and `spaces` are supported as symbols. Other symbols or pure digits are not allowed. Maximum length: 150 characters.
    // 
    // This parameter is required.
    shared_ptr<string> companyName_ {};
    // The enterprise type. Valid values:
    // 
    // - COMPANY: enterprise.
    // 
    // - NON_PROFIT_ORGANIZATION: government agency or public institution.
    // 
    // This parameter is required.
    shared_ptr<string> companyType_ {};
    // The legal representative\\"s ID card number.
    // 
    // This parameter is required.
    shared_ptr<string> legalPersonIDCardNo_ {};
    // The legal representative\\"s ID card type. Valid values:
    // 
    // - identityCard: ID card.
    // - passport: passport.
    // - homeReturnPermit: Hong Kong/Macao resident travel permit to mainland.
    // - TaiwanCompatriotPermit: Taiwan resident travel permit to mainland.
    // - residencePermit: Hong Kong/Macao/Taiwan resident residence permit.
    // - other: other.
    // 
    // This parameter is required.
    shared_ptr<string> legalPersonIDCardType_ {};
    // The back photo of the legal representative\\"s ID card (portrait side). Only jpg, png, gif, and jpeg formats are supported. The image must not exceed 5 MB. Specify the file path uploaded to OSS. The file name must not contain Chinese characters or special characters. For upload instructions, see [Upload files through OSS](https://help.aliyun.com/document_detail/2833114.html).
    // 
    // > The system verifies the legal representative\\"s name and ID number you provide. If verification fails, you must upload photos of the legal representative\\"s ID card.
    shared_ptr<string> legalPersonIdCardBackSide_ {};
    // The legal representative\\"s ID card validity period. Format: YYYY-MM-DD~YYYY-MM-DD.
    // > If the ID card has a long-term validity period, set the end date to 2099-12-31.
    // 
    // This parameter is required.
    shared_ptr<string> legalPersonIdCardEffTime_ {};
    // The front photo of the legal representative\\"s ID card (national emblem side). Only jpg, png, gif, and jpeg formats are supported. The image must not exceed 5 MB. Specify the file path uploaded to OSS. The file name must not contain Chinese characters or special characters. For upload instructions, see [Upload files through OSS](https://help.aliyun.com/document_detail/2833114.html).
    // 
    // 
    // > The system verifies the legal representative\\"s name and ID number you provide. If verification fails, you must upload photos of the legal representative\\"s ID card.
    shared_ptr<string> legalPersonIdCardFrontSide_ {};
    // The legal representative\\"s name. Maximum length: 50 characters.
    // 
    // > - If the organization certificate does not contain legal representative information but includes a person in charge or chief representative, prepare the ID card photos of the corresponding person in charge or chief representative listed on the certificate.
    // > - If the organization certificate contains neither legal representative information nor any person in charge, prepare the name and ID card photos of the primary business contact.
    // 
    // This parameter is required.
    shared_ptr<string> legalPersonName_ {};
    // The unified social credit code. Maximum length: 150 characters.
    // 
    // This parameter is required.
    shared_ptr<string> organizationCode_ {};
    // Additional materials. If you have other supporting documents, notes, or photos, upload them here.
    shared_ptr<string> otherFilesShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The qualification name, used to manage and distinguish multiple qualifications you apply for. It does not appear in SMS content. The name must be unique among your existing qualifications. Only Chinese characters, English letters, or combinations with digits are supported. Symbols or pure digits are not supported. Maximum length: 100 characters.
    // 
    // This parameter is required.
    shared_ptr<string> qualificationName_ {};
    // Remarks. If you have additional information to provide or notes for the qualification verification reviewer, add a description here.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The purpose of the qualification application. Valid values:
    // 
    // - **true**: **Self-use**. The entity that owns the signature is the same as the entity verified for this account.
    // - **false**: **Third-party use**. The entity that owns the signature is different from the entity verified for this account.
    // 
    // This parameter is required.
    shared_ptr<bool> useBySelf_ {};
    // Qualification authorization. Specifies whether to share the qualification with other cloud communication products (such as domestic voice services and domestic number privacy protection). Sharing is available only when you apply for a **self-use qualification** and the qualification information **matches the enterprise information verified for the current Alibaba Cloud account**. Otherwise, this setting has no effect. Valid values:
    // 
    // - true: Agree. Your qualification information can be referenced during the qualification verification process of other cloud communication products, eliminating redundant verification.
    // - false: Disagree.
    // 
    // This parameter is required.
    shared_ptr<bool> whetherShare_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
