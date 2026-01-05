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
      // 证件图片标识的osskey
      shared_ptr<string> licensePic_ {};
      // 企业证件类型，businessLicense:营业执照;organizationCodeLicense:组织机构代码证;taxRegistrationLicense:税务登记证;socialCreditLicense:社会信用代码证书;newStyleBusinessLicense:三证合一;signLegalLicense:签名归属方的事业单位法人证书;otherLicense:其他类型执照证书
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
    // 经办人身份证有效期，格式示例2023-01-01~2033-01-01
    shared_ptr<string> adminIDCardExpDate_ {};
    // 经办人身份证照片国徽面
    shared_ptr<string> adminIDCardFrontFace_ {};
    // 经办人身份证号码
    shared_ptr<string> adminIDCardNo_ {};
    // 经办人身份证照片人像面
    shared_ptr<string> adminIDCardPic_ {};
    // 管理员身份证类型。identityCard:中国居民身份证;passport:护照;homeReturnPermit:港澳居民来往内地通行证;TaiwanCompatriotPermit:台湾居民来往大陆通行证;residencePermit:港澳台居民居住证";other:其他
    shared_ptr<string> adminIDCardType_ {};
    // 经办人姓名
    shared_ptr<string> adminName_ {};
    // 经办人手机号码
    // 
    // This parameter is required.
    shared_ptr<string> adminPhoneNo_ {};
    // 企业证件信息
    shared_ptr<vector<UpdateSmsQualificationRequest::BusinessLicensePics>> businessLicensePics_ {};
    // 企业营业时间开始和结束字符串，格式示例2023-01-01~2033-01-01
    shared_ptr<string> bussinessLicenseExpDate_ {};
    // 手机号验证码
    // 
    // This parameter is required.
    shared_ptr<string> certifyCode_ {};
    // 公司名称
    shared_ptr<string> companyName_ {};
    // 法人身份证号码
    shared_ptr<string> legalPersonIDCardNo_ {};
    // 法人身份证类型。identityCard:中国居民身份证;passport:护照;homeReturnPermit:港澳居民来往内地通行证;TaiwanCompatriotPermit:台湾居民来往大陆通行证;residencePermit:港澳台居民居住证";other:其他
    shared_ptr<string> legalPersonIDCardType_ {};
    // 法人身份证照片人像面
    shared_ptr<string> legalPersonIdCardBackSide_ {};
    // 法人身份证有效期，格式示例2023-01-01~2033-01-01
    shared_ptr<string> legalPersonIdCardEffTime_ {};
    // 法人身份照片证国徽面
    shared_ptr<string> legalPersonIdCardFrontSide_ {};
    // 法人姓名
    shared_ptr<string> legalPersonName_ {};
    // 工单ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // 更多资料
    shared_ptr<vector<UpdateSmsQualificationRequest::OtherFiles>> otherFiles_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 资质组ID
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
