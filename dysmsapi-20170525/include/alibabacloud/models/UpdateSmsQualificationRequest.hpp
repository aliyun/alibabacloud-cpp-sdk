// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMSQUALIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMSQUALIFICATIONREQUEST_HPP_
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
      // Additional material file. Only png, jpg, jpeg, doc, docx, and pdf formats are supported, and the file must not exceed 5 MB. Please provide the path of the file uploaded to OSS. The file name to be uploaded must not contain Chinese characters or special characters. For upload operations, see [Upload Files via OSS](https://help.aliyun.com/document_detail/2833114.html).
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
      // Business license image. Only jpg, png, gif, and jpeg image formats are supported, and the image must not exceed 5 MB. Please provide the path of the file uploaded to OSS. The file name to be uploaded must not contain Chinese characters or special characters. For upload operations, see [Upload Files via OSS](https://help.aliyun.com/document_detail/2833114.html).
      // 
      // >Notice: 
      // No stamp is required for color originals of the certificate. If you upload a photocopy or black-and-white photo, you must affix the enterprise red seal to the photocopy and take a photo to upload.
      shared_ptr<string> licensePic_ {};
      // Business license type. Valid values:
      // 
      // - socialCreditLicense: Social credit code certificate.
      // - businessLicense: Enterprise business license.
      // - signLegalLicense: Public institution legal person certificate.
      // - otherLicense: Other.
      // 
      // Choose one to upload. The certificate must contain: enterprise name, unified social credit code, and certificate validity period.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->adminIDCardExpDate_ == nullptr
        && this->adminIDCardFrontFace_ == nullptr && this->adminIDCardNo_ == nullptr && this->adminIDCardPic_ == nullptr && this->adminIDCardType_ == nullptr && this->adminName_ == nullptr
        && this->adminPhoneNo_ == nullptr && this->businessLicensePics_ == nullptr && this->bussinessLicenseExpDate_ == nullptr && this->certifyCode_ == nullptr && this->companyName_ == nullptr
        && this->legalPersonIDCardNo_ == nullptr && this->legalPersonIDCardType_ == nullptr && this->legalPersonIdCardBackSide_ == nullptr && this->legalPersonIdCardEffTime_ == nullptr && this->legalPersonIdCardFrontSide_ == nullptr
        && this->legalPersonName_ == nullptr && this->orderId_ == nullptr && this->otherFiles_ == nullptr && this->ownerId_ == nullptr && this->qualificationGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // adminIDCardExpDate Field Functions 
    bool hasAdminIDCardExpDate() const { return this->adminIDCardExpDate_ != nullptr;};
    void deleteAdminIDCardExpDate() { this->adminIDCardExpDate_ = nullptr;};
    inline string getAdminIDCardExpDate() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardExpDate_, "") };
    inline UpdateSmsQualificationRequest& setAdminIDCardExpDate(string adminIDCardExpDate) { DARABONBA_PTR_SET_VALUE(adminIDCardExpDate_, adminIDCardExpDate) };


    // adminIDCardFrontFace Field Functions 
    bool hasAdminIDCardFrontFace() const { return this->adminIDCardFrontFace_ != nullptr;};
    void deleteAdminIDCardFrontFace() { this->adminIDCardFrontFace_ = nullptr;};
    inline string getAdminIDCardFrontFace() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardFrontFace_, "") };
    inline UpdateSmsQualificationRequest& setAdminIDCardFrontFace(string adminIDCardFrontFace) { DARABONBA_PTR_SET_VALUE(adminIDCardFrontFace_, adminIDCardFrontFace) };


    // adminIDCardNo Field Functions 
    bool hasAdminIDCardNo() const { return this->adminIDCardNo_ != nullptr;};
    void deleteAdminIDCardNo() { this->adminIDCardNo_ = nullptr;};
    inline string getAdminIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardNo_, "") };
    inline UpdateSmsQualificationRequest& setAdminIDCardNo(string adminIDCardNo) { DARABONBA_PTR_SET_VALUE(adminIDCardNo_, adminIDCardNo) };


    // adminIDCardPic Field Functions 
    bool hasAdminIDCardPic() const { return this->adminIDCardPic_ != nullptr;};
    void deleteAdminIDCardPic() { this->adminIDCardPic_ = nullptr;};
    inline string getAdminIDCardPic() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardPic_, "") };
    inline UpdateSmsQualificationRequest& setAdminIDCardPic(string adminIDCardPic) { DARABONBA_PTR_SET_VALUE(adminIDCardPic_, adminIDCardPic) };


    // adminIDCardType Field Functions 
    bool hasAdminIDCardType() const { return this->adminIDCardType_ != nullptr;};
    void deleteAdminIDCardType() { this->adminIDCardType_ = nullptr;};
    inline string getAdminIDCardType() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardType_, "") };
    inline UpdateSmsQualificationRequest& setAdminIDCardType(string adminIDCardType) { DARABONBA_PTR_SET_VALUE(adminIDCardType_, adminIDCardType) };


    // adminName Field Functions 
    bool hasAdminName() const { return this->adminName_ != nullptr;};
    void deleteAdminName() { this->adminName_ = nullptr;};
    inline string getAdminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
    inline UpdateSmsQualificationRequest& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


    // adminPhoneNo Field Functions 
    bool hasAdminPhoneNo() const { return this->adminPhoneNo_ != nullptr;};
    void deleteAdminPhoneNo() { this->adminPhoneNo_ = nullptr;};
    inline string getAdminPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(adminPhoneNo_, "") };
    inline UpdateSmsQualificationRequest& setAdminPhoneNo(string adminPhoneNo) { DARABONBA_PTR_SET_VALUE(adminPhoneNo_, adminPhoneNo) };


    // businessLicensePics Field Functions 
    bool hasBusinessLicensePics() const { return this->businessLicensePics_ != nullptr;};
    void deleteBusinessLicensePics() { this->businessLicensePics_ = nullptr;};
    inline const vector<UpdateSmsQualificationRequest::BusinessLicensePics> & getBusinessLicensePics() const { DARABONBA_PTR_GET_CONST(businessLicensePics_, vector<UpdateSmsQualificationRequest::BusinessLicensePics>) };
    inline vector<UpdateSmsQualificationRequest::BusinessLicensePics> getBusinessLicensePics() { DARABONBA_PTR_GET(businessLicensePics_, vector<UpdateSmsQualificationRequest::BusinessLicensePics>) };
    inline UpdateSmsQualificationRequest& setBusinessLicensePics(const vector<UpdateSmsQualificationRequest::BusinessLicensePics> & businessLicensePics) { DARABONBA_PTR_SET_VALUE(businessLicensePics_, businessLicensePics) };
    inline UpdateSmsQualificationRequest& setBusinessLicensePics(vector<UpdateSmsQualificationRequest::BusinessLicensePics> && businessLicensePics) { DARABONBA_PTR_SET_RVALUE(businessLicensePics_, businessLicensePics) };


    // bussinessLicenseExpDate Field Functions 
    bool hasBussinessLicenseExpDate() const { return this->bussinessLicenseExpDate_ != nullptr;};
    void deleteBussinessLicenseExpDate() { this->bussinessLicenseExpDate_ = nullptr;};
    inline string getBussinessLicenseExpDate() const { DARABONBA_PTR_GET_DEFAULT(bussinessLicenseExpDate_, "") };
    inline UpdateSmsQualificationRequest& setBussinessLicenseExpDate(string bussinessLicenseExpDate) { DARABONBA_PTR_SET_VALUE(bussinessLicenseExpDate_, bussinessLicenseExpDate) };


    // certifyCode Field Functions 
    bool hasCertifyCode() const { return this->certifyCode_ != nullptr;};
    void deleteCertifyCode() { this->certifyCode_ = nullptr;};
    inline string getCertifyCode() const { DARABONBA_PTR_GET_DEFAULT(certifyCode_, "") };
    inline UpdateSmsQualificationRequest& setCertifyCode(string certifyCode) { DARABONBA_PTR_SET_VALUE(certifyCode_, certifyCode) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline UpdateSmsQualificationRequest& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // legalPersonIDCardNo Field Functions 
    bool hasLegalPersonIDCardNo() const { return this->legalPersonIDCardNo_ != nullptr;};
    void deleteLegalPersonIDCardNo() { this->legalPersonIDCardNo_ = nullptr;};
    inline string getLegalPersonIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardNo_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonIDCardNo(string legalPersonIDCardNo) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardNo_, legalPersonIDCardNo) };


    // legalPersonIDCardType Field Functions 
    bool hasLegalPersonIDCardType() const { return this->legalPersonIDCardType_ != nullptr;};
    void deleteLegalPersonIDCardType() { this->legalPersonIDCardType_ = nullptr;};
    inline string getLegalPersonIDCardType() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardType_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonIDCardType(string legalPersonIDCardType) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardType_, legalPersonIDCardType) };


    // legalPersonIdCardBackSide Field Functions 
    bool hasLegalPersonIdCardBackSide() const { return this->legalPersonIdCardBackSide_ != nullptr;};
    void deleteLegalPersonIdCardBackSide() { this->legalPersonIdCardBackSide_ = nullptr;};
    inline string getLegalPersonIdCardBackSide() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardBackSide_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonIdCardBackSide(string legalPersonIdCardBackSide) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardBackSide_, legalPersonIdCardBackSide) };


    // legalPersonIdCardEffTime Field Functions 
    bool hasLegalPersonIdCardEffTime() const { return this->legalPersonIdCardEffTime_ != nullptr;};
    void deleteLegalPersonIdCardEffTime() { this->legalPersonIdCardEffTime_ = nullptr;};
    inline string getLegalPersonIdCardEffTime() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardEffTime_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonIdCardEffTime(string legalPersonIdCardEffTime) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardEffTime_, legalPersonIdCardEffTime) };


    // legalPersonIdCardFrontSide Field Functions 
    bool hasLegalPersonIdCardFrontSide() const { return this->legalPersonIdCardFrontSide_ != nullptr;};
    void deleteLegalPersonIdCardFrontSide() { this->legalPersonIdCardFrontSide_ = nullptr;};
    inline string getLegalPersonIdCardFrontSide() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardFrontSide_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonIdCardFrontSide(string legalPersonIdCardFrontSide) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardFrontSide_, legalPersonIdCardFrontSide) };


    // legalPersonName Field Functions 
    bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
    void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
    inline string getLegalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
    inline UpdateSmsQualificationRequest& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline UpdateSmsQualificationRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // otherFiles Field Functions 
    bool hasOtherFiles() const { return this->otherFiles_ != nullptr;};
    void deleteOtherFiles() { this->otherFiles_ = nullptr;};
    inline const vector<UpdateSmsQualificationRequest::OtherFiles> & getOtherFiles() const { DARABONBA_PTR_GET_CONST(otherFiles_, vector<UpdateSmsQualificationRequest::OtherFiles>) };
    inline vector<UpdateSmsQualificationRequest::OtherFiles> getOtherFiles() { DARABONBA_PTR_GET(otherFiles_, vector<UpdateSmsQualificationRequest::OtherFiles>) };
    inline UpdateSmsQualificationRequest& setOtherFiles(const vector<UpdateSmsQualificationRequest::OtherFiles> & otherFiles) { DARABONBA_PTR_SET_VALUE(otherFiles_, otherFiles) };
    inline UpdateSmsQualificationRequest& setOtherFiles(vector<UpdateSmsQualificationRequest::OtherFiles> && otherFiles) { DARABONBA_PTR_SET_RVALUE(otherFiles_, otherFiles) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateSmsQualificationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qualificationGroupId Field Functions 
    bool hasQualificationGroupId() const { return this->qualificationGroupId_ != nullptr;};
    void deleteQualificationGroupId() { this->qualificationGroupId_ = nullptr;};
    inline int64_t getQualificationGroupId() const { DARABONBA_PTR_GET_DEFAULT(qualificationGroupId_, 0L) };
    inline UpdateSmsQualificationRequest& setQualificationGroupId(int64_t qualificationGroupId) { DARABONBA_PTR_SET_VALUE(qualificationGroupId_, qualificationGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateSmsQualificationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateSmsQualificationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Validity period of the administrator ID card. Format: YYYY-MM-DD~YYYY-MM-DD.
    // > When the certificate validity period is long-term, the end date can be set to 2099-12-31.
    shared_ptr<string> adminIDCardExpDate_ {};
    // Photo of the front of the administrator\\"s ID card (national emblem side). Only jpg, png, gif, and jpeg image formats are supported, and the image must not exceed 5 MB. Please provide the path of the file uploaded to OSS. The file name to be uploaded must not contain Chinese characters or special characters. For upload operations, see [Upload Files via OSS](https://help.aliyun.com/document_detail/2833114.html).
    // 
    // >Notice: 
    // No stamp is required for color originals of the certificate. If you upload a photocopy or black-and-white photo, you must affix the enterprise red seal to the photocopy and take a photo to upload.
    shared_ptr<string> adminIDCardFrontFace_ {};
    // Administrator\\"s ID number.
    shared_ptr<string> adminIDCardNo_ {};
    // Photo of the back of the administrator\\"s ID card (portrait side). Only jpg, png, gif, and jpeg image formats are supported, and the image must not exceed 5 MB. Please provide the path of the file uploaded to OSS. The file name to be uploaded must not contain Chinese characters or special characters. For upload operations, see [Upload Files via OSS](https://help.aliyun.com/document_detail/2833114.html).
    // 
    // >Notice: 
    //  No stamp is required for color originals of the certificate. If you upload a photocopy or black-and-white photo, you must affix the enterprise red seal to the photocopy and take a photo to upload.
    shared_ptr<string> adminIDCardPic_ {};
    // Administrator ID card type. Valid values:
    // 
    // - identityCard: ID card.
    // - passport: Passport.
    // - homeReturnPermit: Mainland Travel Permit for Hong Kong and Macao Residents.
    // - TaiwanCompatriotPermit: Mainland Travel Permit for Taiwan Residents.
    // - residencePermit: Residence Permit for Hong Kong, Macao, and Taiwan Residents.
    // - other: Other.
    shared_ptr<string> adminIDCardType_ {};
    // Administrator name.
    // 
    // > The administrator (also known as the operator) refers to the person who logs in to the Alibaba Cloud account and manages the SMS service. Generally, this is the operations personnel who manages qualifications, signatures, and templates and sends SMS messages under this Alibaba Cloud account, and whose phone number can receive verification codes. The administrator is not necessarily the administrator of this Alibaba Cloud account. The administrator can be the same person as the enterprise\\"s legal representative.
    shared_ptr<string> adminName_ {};
    // Administrator\\"s mobile phone number. Format: +/+86/0086/86 prefix or a phone number without any prefix, for example, 1390000****.
    // 
    // This parameter is required.
    shared_ptr<string> adminPhoneNo_ {};
    // Enterprise business license information. This parameter is required when the purpose of the qualification to be modified is for use by others.
    shared_ptr<vector<UpdateSmsQualificationRequest::BusinessLicensePics>> businessLicensePics_ {};
    // Validity period of the business license. Format: YYYY-MM-DD~YYYY-MM-DD.
    // > When the certificate validity period is long-term, the end date can be set to 2099-12-31.
    shared_ptr<string> bussinessLicenseExpDate_ {};
    // Phone verification code. Please call the [RequiredPhoneCode](~~RequiredPhoneCode~~) API and pass in the **administrator\\"s phone number**, then enter the SMS verification code you receive here.
    // 
    // > You can use [ValidPhoneCode](~~ValidPhoneCode~~) to verify whether the SMS verification code is correct before passing it in.
    // 
    // This parameter is required.
    shared_ptr<string> certifyCode_ {};
    // Enterprise name. Supported symbols are only the middle dot `·`, the Chinese symbols `【】（）`, the English symbols `()`, and the `space`. Other symbols or pure numbers are not allowed. The length must not exceed 150 characters.
    shared_ptr<string> companyName_ {};
    // Legal person\\"s ID number.
    shared_ptr<string> legalPersonIDCardNo_ {};
    // Legal person ID card type. Valid values:
    // 
    // - identityCard: ID card.
    // - passport: Passport.
    // - homeReturnPermit: Mainland Travel Permit for Hong Kong and Macao Residents.
    // - TaiwanCompatriotPermit: Mainland Travel Permit for Taiwan Residents.
    // - residencePermit: Residence Permit for Hong Kong, Macao, and Taiwan Residents.
    // - other: Other.
    shared_ptr<string> legalPersonIDCardType_ {};
    // Photo of the back of the legal representative\\"s ID card (portrait side). Only jpg, png, gif, and jpeg image formats are supported, and the image must not exceed 5 MB. Please provide the path of the file uploaded to OSS. The file name to be uploaded must not contain Chinese characters or special characters. For upload operations, see [Upload Files via OSS](https://help.aliyun.com/document_detail/2833114.html).
    // > The system will use the legal person name and ID number you provide for verification. If the verification fails, you need to upload a photo of the legal representative\\"s ID card.
    shared_ptr<string> legalPersonIdCardBackSide_ {};
    // Validity period of the legal person ID card. Format: YYYY-MM-DD~YYYY-MM-DD.
    // > When the certificate validity period is long-term, the end date can be set to 2099-12-31.
    shared_ptr<string> legalPersonIdCardEffTime_ {};
    // Photo of the front of the legal representative\\"s ID card (national emblem side). Only jpg, png, gif, and jpeg image formats are supported, and the image must not exceed 5 MB. Please provide the path of the file uploaded to OSS. The file name to be uploaded must not contain Chinese characters or special characters. For upload operations, see [Upload Files via OSS](https://help.aliyun.com/document_detail/2833114.html).
    // > The system will use the legal person name and ID number you provide for verification. If the verification fails, you need to upload a photo of the legal representative\\"s ID card.
    shared_ptr<string> legalPersonIdCardFrontSide_ {};
    // Name of the legal representative.
    // 
    // > - If there is no legal representative information on the organization\\"s certificate, but there is information about a person in charge / chief representative or similar, please prepare the ID card photo of the corresponding person in charge or chief representative listed on the certificate.
    // > - If there is no legal representative information on the organization\\"s certificate, and there is no information about any person in charge, please prepare the name and ID card photo of the main business contact person.
    shared_ptr<string> legalPersonName_ {};
    // The review order ID. You can obtain the qualifications and their corresponding review order IDs under the current account by calling [Query Qualification List](~~QuerySmsQualificationRecord~~).
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // Additional materials. If you have other supporting or supplementary materials, photos, etc., you can upload them here.
    shared_ptr<vector<UpdateSmsQualificationRequest::OtherFiles>> otherFiles_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The qualification ID, that is, the ID returned when you [apply for SMS qualification](~~SubmitSmsQualification~~). You can obtain the qualification IDs under the current account by calling [Query Qualification List](~~QuerySmsQualificationRecord~~).
    // 
    // This parameter is required.
    shared_ptr<int64_t> qualificationGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
