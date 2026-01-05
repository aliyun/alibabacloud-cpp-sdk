// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMSQUALIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMSQUALIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SubmitSmsQualificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmsQualificationRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(CompanyType, companyType_);
      DARABONBA_PTR_TO_JSON(LegalPersonIDCardNo, legalPersonIDCardNo_);
      DARABONBA_PTR_TO_JSON(LegalPersonIDCardType, legalPersonIDCardType_);
      DARABONBA_PTR_TO_JSON(LegalPersonIdCardBackSide, legalPersonIdCardBackSide_);
      DARABONBA_PTR_TO_JSON(LegalPersonIdCardEffTime, legalPersonIdCardEffTime_);
      DARABONBA_PTR_TO_JSON(LegalPersonIdCardFrontSide, legalPersonIdCardFrontSide_);
      DARABONBA_PTR_TO_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_TO_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_TO_JSON(OtherFiles, otherFiles_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QualificationName, qualificationName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UseBySelf, useBySelf_);
      DARABONBA_PTR_TO_JSON(WhetherShare, whetherShare_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmsQualificationRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(CompanyType, companyType_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIDCardNo, legalPersonIDCardNo_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIDCardType, legalPersonIDCardType_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIdCardBackSide, legalPersonIdCardBackSide_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIdCardEffTime, legalPersonIdCardEffTime_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIdCardFrontSide, legalPersonIdCardFrontSide_);
      DARABONBA_PTR_FROM_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_FROM_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_FROM_JSON(OtherFiles, otherFiles_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QualificationName, qualificationName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UseBySelf, useBySelf_);
      DARABONBA_PTR_FROM_JSON(WhetherShare, whetherShare_);
    };
    SubmitSmsQualificationRequest() = default ;
    SubmitSmsQualificationRequest(const SubmitSmsQualificationRequest &) = default ;
    SubmitSmsQualificationRequest(SubmitSmsQualificationRequest &&) = default ;
    SubmitSmsQualificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmsQualificationRequest() = default ;
    SubmitSmsQualificationRequest& operator=(const SubmitSmsQualificationRequest &) = default ;
    SubmitSmsQualificationRequest& operator=(SubmitSmsQualificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OtherFiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OtherFiles& obj) { 
        DARABONBA_PTR_TO_JSON(LicensePic, licensePic_);
      };
      friend void from_json(const Darabonba::Json& j, OtherFiles& obj) { 
        DARABONBA_PTR_FROM_JSON(LicensePic, licensePic_);
      };
      OtherFiles() = default ;
      OtherFiles(const OtherFiles &) = default ;
      OtherFiles(OtherFiles &&) = default ;
      OtherFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OtherFiles() = default ;
      OtherFiles& operator=(const OtherFiles &) = default ;
      OtherFiles& operator=(OtherFiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->licensePic_ == nullptr; };
      // licensePic Field Functions 
      bool hasLicensePic() const { return this->licensePic_ != nullptr;};
      void deleteLicensePic() { this->licensePic_ = nullptr;};
      inline string getLicensePic() const { DARABONBA_PTR_GET_DEFAULT(licensePic_, "") };
      inline OtherFiles& setLicensePic(string licensePic) { DARABONBA_PTR_SET_VALUE(licensePic_, licensePic) };


    protected:
      shared_ptr<string> licensePic_ {};
    };

    class BusinessLicensePics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BusinessLicensePics& obj) { 
        DARABONBA_PTR_TO_JSON(LicensePic, licensePic_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, BusinessLicensePics& obj) { 
        DARABONBA_PTR_FROM_JSON(LicensePic, licensePic_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      BusinessLicensePics() = default ;
      BusinessLicensePics(const BusinessLicensePics &) = default ;
      BusinessLicensePics(BusinessLicensePics &&) = default ;
      BusinessLicensePics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BusinessLicensePics() = default ;
      BusinessLicensePics& operator=(const BusinessLicensePics &) = default ;
      BusinessLicensePics& operator=(BusinessLicensePics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->licensePic_ == nullptr
        && this->type_ == nullptr; };
      // licensePic Field Functions 
      bool hasLicensePic() const { return this->licensePic_ != nullptr;};
      void deleteLicensePic() { this->licensePic_ = nullptr;};
      inline string getLicensePic() const { DARABONBA_PTR_GET_DEFAULT(licensePic_, "") };
      inline BusinessLicensePics& setLicensePic(string licensePic) { DARABONBA_PTR_SET_VALUE(licensePic_, licensePic) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline BusinessLicensePics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // 营业证件图片标识的osskey
      shared_ptr<string> licensePic_ {};
      // 营业证件类型，businessLicense:营业执照;organizationCodeLicense:组织机构代码证;taxRegistrationLicense:税务登记证;socialCreditLicense:社会信用代码证书;newStyleBusinessLicense:三证合一;signLegalLicense:签名归属方的事业单位法人证书;otherLicense:其他类型执照证书
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->adminIDCardExpDate_ == nullptr
        && this->adminIDCardFrontFace_ == nullptr && this->adminIDCardNo_ == nullptr && this->adminIDCardPic_ == nullptr && this->adminIDCardType_ == nullptr && this->adminName_ == nullptr
        && this->adminPhoneNo_ == nullptr && this->businessLicensePics_ == nullptr && this->bussinessLicenseExpDate_ == nullptr && this->certifyCode_ == nullptr && this->companyName_ == nullptr
        && this->companyType_ == nullptr && this->legalPersonIDCardNo_ == nullptr && this->legalPersonIDCardType_ == nullptr && this->legalPersonIdCardBackSide_ == nullptr && this->legalPersonIdCardEffTime_ == nullptr
        && this->legalPersonIdCardFrontSide_ == nullptr && this->legalPersonName_ == nullptr && this->organizationCode_ == nullptr && this->otherFiles_ == nullptr && this->ownerId_ == nullptr
        && this->qualificationName_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->useBySelf_ == nullptr
        && this->whetherShare_ == nullptr; };
    // adminIDCardExpDate Field Functions 
    bool hasAdminIDCardExpDate() const { return this->adminIDCardExpDate_ != nullptr;};
    void deleteAdminIDCardExpDate() { this->adminIDCardExpDate_ = nullptr;};
    inline string getAdminIDCardExpDate() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardExpDate_, "") };
    inline SubmitSmsQualificationRequest& setAdminIDCardExpDate(string adminIDCardExpDate) { DARABONBA_PTR_SET_VALUE(adminIDCardExpDate_, adminIDCardExpDate) };


    // adminIDCardFrontFace Field Functions 
    bool hasAdminIDCardFrontFace() const { return this->adminIDCardFrontFace_ != nullptr;};
    void deleteAdminIDCardFrontFace() { this->adminIDCardFrontFace_ = nullptr;};
    inline string getAdminIDCardFrontFace() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardFrontFace_, "") };
    inline SubmitSmsQualificationRequest& setAdminIDCardFrontFace(string adminIDCardFrontFace) { DARABONBA_PTR_SET_VALUE(adminIDCardFrontFace_, adminIDCardFrontFace) };


    // adminIDCardNo Field Functions 
    bool hasAdminIDCardNo() const { return this->adminIDCardNo_ != nullptr;};
    void deleteAdminIDCardNo() { this->adminIDCardNo_ = nullptr;};
    inline string getAdminIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardNo_, "") };
    inline SubmitSmsQualificationRequest& setAdminIDCardNo(string adminIDCardNo) { DARABONBA_PTR_SET_VALUE(adminIDCardNo_, adminIDCardNo) };


    // adminIDCardPic Field Functions 
    bool hasAdminIDCardPic() const { return this->adminIDCardPic_ != nullptr;};
    void deleteAdminIDCardPic() { this->adminIDCardPic_ = nullptr;};
    inline string getAdminIDCardPic() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardPic_, "") };
    inline SubmitSmsQualificationRequest& setAdminIDCardPic(string adminIDCardPic) { DARABONBA_PTR_SET_VALUE(adminIDCardPic_, adminIDCardPic) };


    // adminIDCardType Field Functions 
    bool hasAdminIDCardType() const { return this->adminIDCardType_ != nullptr;};
    void deleteAdminIDCardType() { this->adminIDCardType_ = nullptr;};
    inline string getAdminIDCardType() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardType_, "") };
    inline SubmitSmsQualificationRequest& setAdminIDCardType(string adminIDCardType) { DARABONBA_PTR_SET_VALUE(adminIDCardType_, adminIDCardType) };


    // adminName Field Functions 
    bool hasAdminName() const { return this->adminName_ != nullptr;};
    void deleteAdminName() { this->adminName_ = nullptr;};
    inline string getAdminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
    inline SubmitSmsQualificationRequest& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


    // adminPhoneNo Field Functions 
    bool hasAdminPhoneNo() const { return this->adminPhoneNo_ != nullptr;};
    void deleteAdminPhoneNo() { this->adminPhoneNo_ = nullptr;};
    inline string getAdminPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(adminPhoneNo_, "") };
    inline SubmitSmsQualificationRequest& setAdminPhoneNo(string adminPhoneNo) { DARABONBA_PTR_SET_VALUE(adminPhoneNo_, adminPhoneNo) };


    // businessLicensePics Field Functions 
    bool hasBusinessLicensePics() const { return this->businessLicensePics_ != nullptr;};
    void deleteBusinessLicensePics() { this->businessLicensePics_ = nullptr;};
    inline const vector<SubmitSmsQualificationRequest::BusinessLicensePics> & getBusinessLicensePics() const { DARABONBA_PTR_GET_CONST(businessLicensePics_, vector<SubmitSmsQualificationRequest::BusinessLicensePics>) };
    inline vector<SubmitSmsQualificationRequest::BusinessLicensePics> getBusinessLicensePics() { DARABONBA_PTR_GET(businessLicensePics_, vector<SubmitSmsQualificationRequest::BusinessLicensePics>) };
    inline SubmitSmsQualificationRequest& setBusinessLicensePics(const vector<SubmitSmsQualificationRequest::BusinessLicensePics> & businessLicensePics) { DARABONBA_PTR_SET_VALUE(businessLicensePics_, businessLicensePics) };
    inline SubmitSmsQualificationRequest& setBusinessLicensePics(vector<SubmitSmsQualificationRequest::BusinessLicensePics> && businessLicensePics) { DARABONBA_PTR_SET_RVALUE(businessLicensePics_, businessLicensePics) };


    // bussinessLicenseExpDate Field Functions 
    bool hasBussinessLicenseExpDate() const { return this->bussinessLicenseExpDate_ != nullptr;};
    void deleteBussinessLicenseExpDate() { this->bussinessLicenseExpDate_ = nullptr;};
    inline string getBussinessLicenseExpDate() const { DARABONBA_PTR_GET_DEFAULT(bussinessLicenseExpDate_, "") };
    inline SubmitSmsQualificationRequest& setBussinessLicenseExpDate(string bussinessLicenseExpDate) { DARABONBA_PTR_SET_VALUE(bussinessLicenseExpDate_, bussinessLicenseExpDate) };


    // certifyCode Field Functions 
    bool hasCertifyCode() const { return this->certifyCode_ != nullptr;};
    void deleteCertifyCode() { this->certifyCode_ = nullptr;};
    inline string getCertifyCode() const { DARABONBA_PTR_GET_DEFAULT(certifyCode_, "") };
    inline SubmitSmsQualificationRequest& setCertifyCode(string certifyCode) { DARABONBA_PTR_SET_VALUE(certifyCode_, certifyCode) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline SubmitSmsQualificationRequest& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // companyType Field Functions 
    bool hasCompanyType() const { return this->companyType_ != nullptr;};
    void deleteCompanyType() { this->companyType_ = nullptr;};
    inline string getCompanyType() const { DARABONBA_PTR_GET_DEFAULT(companyType_, "") };
    inline SubmitSmsQualificationRequest& setCompanyType(string companyType) { DARABONBA_PTR_SET_VALUE(companyType_, companyType) };


    // legalPersonIDCardNo Field Functions 
    bool hasLegalPersonIDCardNo() const { return this->legalPersonIDCardNo_ != nullptr;};
    void deleteLegalPersonIDCardNo() { this->legalPersonIDCardNo_ = nullptr;};
    inline string getLegalPersonIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardNo_, "") };
    inline SubmitSmsQualificationRequest& setLegalPersonIDCardNo(string legalPersonIDCardNo) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardNo_, legalPersonIDCardNo) };


    // legalPersonIDCardType Field Functions 
    bool hasLegalPersonIDCardType() const { return this->legalPersonIDCardType_ != nullptr;};
    void deleteLegalPersonIDCardType() { this->legalPersonIDCardType_ = nullptr;};
    inline string getLegalPersonIDCardType() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardType_, "") };
    inline SubmitSmsQualificationRequest& setLegalPersonIDCardType(string legalPersonIDCardType) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardType_, legalPersonIDCardType) };


    // legalPersonIdCardBackSide Field Functions 
    bool hasLegalPersonIdCardBackSide() const { return this->legalPersonIdCardBackSide_ != nullptr;};
    void deleteLegalPersonIdCardBackSide() { this->legalPersonIdCardBackSide_ = nullptr;};
    inline string getLegalPersonIdCardBackSide() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardBackSide_, "") };
    inline SubmitSmsQualificationRequest& setLegalPersonIdCardBackSide(string legalPersonIdCardBackSide) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardBackSide_, legalPersonIdCardBackSide) };


    // legalPersonIdCardEffTime Field Functions 
    bool hasLegalPersonIdCardEffTime() const { return this->legalPersonIdCardEffTime_ != nullptr;};
    void deleteLegalPersonIdCardEffTime() { this->legalPersonIdCardEffTime_ = nullptr;};
    inline string getLegalPersonIdCardEffTime() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardEffTime_, "") };
    inline SubmitSmsQualificationRequest& setLegalPersonIdCardEffTime(string legalPersonIdCardEffTime) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardEffTime_, legalPersonIdCardEffTime) };


    // legalPersonIdCardFrontSide Field Functions 
    bool hasLegalPersonIdCardFrontSide() const { return this->legalPersonIdCardFrontSide_ != nullptr;};
    void deleteLegalPersonIdCardFrontSide() { this->legalPersonIdCardFrontSide_ = nullptr;};
    inline string getLegalPersonIdCardFrontSide() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardFrontSide_, "") };
    inline SubmitSmsQualificationRequest& setLegalPersonIdCardFrontSide(string legalPersonIdCardFrontSide) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardFrontSide_, legalPersonIdCardFrontSide) };


    // legalPersonName Field Functions 
    bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
    void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
    inline string getLegalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
    inline SubmitSmsQualificationRequest& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


    // organizationCode Field Functions 
    bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
    void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
    inline string getOrganizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
    inline SubmitSmsQualificationRequest& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


    // otherFiles Field Functions 
    bool hasOtherFiles() const { return this->otherFiles_ != nullptr;};
    void deleteOtherFiles() { this->otherFiles_ = nullptr;};
    inline const vector<SubmitSmsQualificationRequest::OtherFiles> & getOtherFiles() const { DARABONBA_PTR_GET_CONST(otherFiles_, vector<SubmitSmsQualificationRequest::OtherFiles>) };
    inline vector<SubmitSmsQualificationRequest::OtherFiles> getOtherFiles() { DARABONBA_PTR_GET(otherFiles_, vector<SubmitSmsQualificationRequest::OtherFiles>) };
    inline SubmitSmsQualificationRequest& setOtherFiles(const vector<SubmitSmsQualificationRequest::OtherFiles> & otherFiles) { DARABONBA_PTR_SET_VALUE(otherFiles_, otherFiles) };
    inline SubmitSmsQualificationRequest& setOtherFiles(vector<SubmitSmsQualificationRequest::OtherFiles> && otherFiles) { DARABONBA_PTR_SET_RVALUE(otherFiles_, otherFiles) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SubmitSmsQualificationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qualificationName Field Functions 
    bool hasQualificationName() const { return this->qualificationName_ != nullptr;};
    void deleteQualificationName() { this->qualificationName_ = nullptr;};
    inline string getQualificationName() const { DARABONBA_PTR_GET_DEFAULT(qualificationName_, "") };
    inline SubmitSmsQualificationRequest& setQualificationName(string qualificationName) { DARABONBA_PTR_SET_VALUE(qualificationName_, qualificationName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline SubmitSmsQualificationRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitSmsQualificationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SubmitSmsQualificationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // useBySelf Field Functions 
    bool hasUseBySelf() const { return this->useBySelf_ != nullptr;};
    void deleteUseBySelf() { this->useBySelf_ = nullptr;};
    inline bool getUseBySelf() const { DARABONBA_PTR_GET_DEFAULT(useBySelf_, false) };
    inline SubmitSmsQualificationRequest& setUseBySelf(bool useBySelf) { DARABONBA_PTR_SET_VALUE(useBySelf_, useBySelf) };


    // whetherShare Field Functions 
    bool hasWhetherShare() const { return this->whetherShare_ != nullptr;};
    void deleteWhetherShare() { this->whetherShare_ = nullptr;};
    inline bool getWhetherShare() const { DARABONBA_PTR_GET_DEFAULT(whetherShare_, false) };
    inline SubmitSmsQualificationRequest& setWhetherShare(bool whetherShare) { DARABONBA_PTR_SET_VALUE(whetherShare_, whetherShare) };


  protected:
    // 经办人身份证有效期，格式示例2023-01-01~2033-01-01
    // 
    // This parameter is required.
    shared_ptr<string> adminIDCardExpDate_ {};
    // 经办人身份证照片国徽面
    // 
    // This parameter is required.
    shared_ptr<string> adminIDCardFrontFace_ {};
    // 经办人身份证号码
    // 
    // This parameter is required.
    shared_ptr<string> adminIDCardNo_ {};
    // 经办人身份证照片人像面
    // 
    // This parameter is required.
    shared_ptr<string> adminIDCardPic_ {};
    // 管理员身份证类型。identityCard:中国居民身份证;passport:护照;homeReturnPermit:港澳居民来往内地通行证;TaiwanCompatriotPermit:台湾居民来往大陆通行证;residencePermit:港澳台居民居住证";other:其他
    // 
    // This parameter is required.
    shared_ptr<string> adminIDCardType_ {};
    // 经办人姓名
    // 
    // This parameter is required.
    shared_ptr<string> adminName_ {};
    // 经办人手机号码
    // 
    // This parameter is required.
    shared_ptr<string> adminPhoneNo_ {};
    // 企业营业证件信息，非大客户必填
    shared_ptr<vector<SubmitSmsQualificationRequest::BusinessLicensePics>> businessLicensePics_ {};
    // 企业营业时间开始和结束字符串，格式示例2023-01-01~2033-01-01
    // 
    // This parameter is required.
    shared_ptr<string> bussinessLicenseExpDate_ {};
    // 手机号验证码
    // 
    // This parameter is required.
    shared_ptr<string> certifyCode_ {};
    // 公司名称
    // 
    // This parameter is required.
    shared_ptr<string> companyName_ {};
    // 企业类型, COMPANY:公司;NON_PROFIT_ORGANIZATION:政府或者事业单位
    // 
    // This parameter is required.
    shared_ptr<string> companyType_ {};
    // 法人身份证号码
    // 
    // This parameter is required.
    shared_ptr<string> legalPersonIDCardNo_ {};
    // 法人身份证类型。identityCard:中国居民身份证;passport:护照;homeReturnPermit:港澳居民来往内地通行证;TaiwanCompatriotPermit:台湾居民来往大陆通行证;residencePermit:港澳台居民居住证";other:其他
    // 
    // This parameter is required.
    shared_ptr<string> legalPersonIDCardType_ {};
    // 法人身份证照片人像面
    shared_ptr<string> legalPersonIdCardBackSide_ {};
    // 法人身份证有效期
    // 
    // This parameter is required.
    shared_ptr<string> legalPersonIdCardEffTime_ {};
    // 法人身份证照片国徽面
    shared_ptr<string> legalPersonIdCardFrontSide_ {};
    // 法人姓名
    // 
    // This parameter is required.
    shared_ptr<string> legalPersonName_ {};
    // 社会统一信用代码
    // 
    // This parameter is required.
    shared_ptr<string> organizationCode_ {};
    // 更多资料
    shared_ptr<vector<SubmitSmsQualificationRequest::OtherFiles>> otherFiles_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 资质名称,名称不能重复
    // 
    // This parameter is required.
    shared_ptr<string> qualificationName_ {};
    // 备注
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 资质是自用还是他用，true：自用，false：他用
    // 
    // This parameter is required.
    shared_ptr<bool> useBySelf_ {};
    // 是否同意与其他业务线共享
    // 
    // This parameter is required.
    shared_ptr<bool> whetherShare_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
