// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITENTERPRISEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITENTERPRISEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class SubmitEnterpriseInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEnterpriseInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessLicenseAddress, businessLicenseAddress_);
      DARABONBA_PTR_TO_JSON(BusinessLicensePicture, businessLicensePicture_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(EnterpriseName, enterpriseName_);
      DARABONBA_PTR_TO_JSON(LegalPersonCertNumber, legalPersonCertNumber_);
      DARABONBA_PTR_TO_JSON(LegalPersonCertPicture, legalPersonCertPicture_);
      DARABONBA_PTR_TO_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_TO_JSON(ManagerCertNumber, managerCertNumber_);
      DARABONBA_PTR_TO_JSON(ManagerCertPicture, managerCertPicture_);
      DARABONBA_PTR_TO_JSON(ManagerContactNumber, managerContactNumber_);
      DARABONBA_PTR_TO_JSON(ManagerName, managerName_);
      DARABONBA_PTR_TO_JSON(NumberApplicationLetterPicture, numberApplicationLetterPicture_);
      DARABONBA_PTR_TO_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UndertakingPicture, undertakingPicture_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEnterpriseInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessLicenseAddress, businessLicenseAddress_);
      DARABONBA_PTR_FROM_JSON(BusinessLicensePicture, businessLicensePicture_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(EnterpriseName, enterpriseName_);
      DARABONBA_PTR_FROM_JSON(LegalPersonCertNumber, legalPersonCertNumber_);
      DARABONBA_PTR_FROM_JSON(LegalPersonCertPicture, legalPersonCertPicture_);
      DARABONBA_PTR_FROM_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_FROM_JSON(ManagerCertNumber, managerCertNumber_);
      DARABONBA_PTR_FROM_JSON(ManagerCertPicture, managerCertPicture_);
      DARABONBA_PTR_FROM_JSON(ManagerContactNumber, managerContactNumber_);
      DARABONBA_PTR_FROM_JSON(ManagerName, managerName_);
      DARABONBA_PTR_FROM_JSON(NumberApplicationLetterPicture, numberApplicationLetterPicture_);
      DARABONBA_PTR_FROM_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UndertakingPicture, undertakingPicture_);
    };
    SubmitEnterpriseInfoRequest() = default ;
    SubmitEnterpriseInfoRequest(const SubmitEnterpriseInfoRequest &) = default ;
    SubmitEnterpriseInfoRequest(SubmitEnterpriseInfoRequest &&) = default ;
    SubmitEnterpriseInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEnterpriseInfoRequest() = default ;
    SubmitEnterpriseInfoRequest& operator=(const SubmitEnterpriseInfoRequest &) = default ;
    SubmitEnterpriseInfoRequest& operator=(SubmitEnterpriseInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessLicenseAddress_ == nullptr
        && this->businessLicensePicture_ == nullptr && this->enterpriseId_ == nullptr && this->enterpriseName_ == nullptr && this->legalPersonCertNumber_ == nullptr && this->legalPersonCertPicture_ == nullptr
        && this->legalPersonName_ == nullptr && this->managerCertNumber_ == nullptr && this->managerCertPicture_ == nullptr && this->managerContactNumber_ == nullptr && this->managerName_ == nullptr
        && this->numberApplicationLetterPicture_ == nullptr && this->organizationCode_ == nullptr && this->ownerId_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->undertakingPicture_ == nullptr; };
    // businessLicenseAddress Field Functions 
    bool hasBusinessLicenseAddress() const { return this->businessLicenseAddress_ != nullptr;};
    void deleteBusinessLicenseAddress() { this->businessLicenseAddress_ = nullptr;};
    inline string getBusinessLicenseAddress() const { DARABONBA_PTR_GET_DEFAULT(businessLicenseAddress_, "") };
    inline SubmitEnterpriseInfoRequest& setBusinessLicenseAddress(string businessLicenseAddress) { DARABONBA_PTR_SET_VALUE(businessLicenseAddress_, businessLicenseAddress) };


    // businessLicensePicture Field Functions 
    bool hasBusinessLicensePicture() const { return this->businessLicensePicture_ != nullptr;};
    void deleteBusinessLicensePicture() { this->businessLicensePicture_ = nullptr;};
    inline string getBusinessLicensePicture() const { DARABONBA_PTR_GET_DEFAULT(businessLicensePicture_, "") };
    inline SubmitEnterpriseInfoRequest& setBusinessLicensePicture(string businessLicensePicture) { DARABONBA_PTR_SET_VALUE(businessLicensePicture_, businessLicensePicture) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline SubmitEnterpriseInfoRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // enterpriseName Field Functions 
    bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
    void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
    inline string getEnterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
    inline SubmitEnterpriseInfoRequest& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


    // legalPersonCertNumber Field Functions 
    bool hasLegalPersonCertNumber() const { return this->legalPersonCertNumber_ != nullptr;};
    void deleteLegalPersonCertNumber() { this->legalPersonCertNumber_ = nullptr;};
    inline string getLegalPersonCertNumber() const { DARABONBA_PTR_GET_DEFAULT(legalPersonCertNumber_, "") };
    inline SubmitEnterpriseInfoRequest& setLegalPersonCertNumber(string legalPersonCertNumber) { DARABONBA_PTR_SET_VALUE(legalPersonCertNumber_, legalPersonCertNumber) };


    // legalPersonCertPicture Field Functions 
    bool hasLegalPersonCertPicture() const { return this->legalPersonCertPicture_ != nullptr;};
    void deleteLegalPersonCertPicture() { this->legalPersonCertPicture_ = nullptr;};
    inline string getLegalPersonCertPicture() const { DARABONBA_PTR_GET_DEFAULT(legalPersonCertPicture_, "") };
    inline SubmitEnterpriseInfoRequest& setLegalPersonCertPicture(string legalPersonCertPicture) { DARABONBA_PTR_SET_VALUE(legalPersonCertPicture_, legalPersonCertPicture) };


    // legalPersonName Field Functions 
    bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
    void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
    inline string getLegalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
    inline SubmitEnterpriseInfoRequest& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


    // managerCertNumber Field Functions 
    bool hasManagerCertNumber() const { return this->managerCertNumber_ != nullptr;};
    void deleteManagerCertNumber() { this->managerCertNumber_ = nullptr;};
    inline string getManagerCertNumber() const { DARABONBA_PTR_GET_DEFAULT(managerCertNumber_, "") };
    inline SubmitEnterpriseInfoRequest& setManagerCertNumber(string managerCertNumber) { DARABONBA_PTR_SET_VALUE(managerCertNumber_, managerCertNumber) };


    // managerCertPicture Field Functions 
    bool hasManagerCertPicture() const { return this->managerCertPicture_ != nullptr;};
    void deleteManagerCertPicture() { this->managerCertPicture_ = nullptr;};
    inline string getManagerCertPicture() const { DARABONBA_PTR_GET_DEFAULT(managerCertPicture_, "") };
    inline SubmitEnterpriseInfoRequest& setManagerCertPicture(string managerCertPicture) { DARABONBA_PTR_SET_VALUE(managerCertPicture_, managerCertPicture) };


    // managerContactNumber Field Functions 
    bool hasManagerContactNumber() const { return this->managerContactNumber_ != nullptr;};
    void deleteManagerContactNumber() { this->managerContactNumber_ = nullptr;};
    inline string getManagerContactNumber() const { DARABONBA_PTR_GET_DEFAULT(managerContactNumber_, "") };
    inline SubmitEnterpriseInfoRequest& setManagerContactNumber(string managerContactNumber) { DARABONBA_PTR_SET_VALUE(managerContactNumber_, managerContactNumber) };


    // managerName Field Functions 
    bool hasManagerName() const { return this->managerName_ != nullptr;};
    void deleteManagerName() { this->managerName_ = nullptr;};
    inline string getManagerName() const { DARABONBA_PTR_GET_DEFAULT(managerName_, "") };
    inline SubmitEnterpriseInfoRequest& setManagerName(string managerName) { DARABONBA_PTR_SET_VALUE(managerName_, managerName) };


    // numberApplicationLetterPicture Field Functions 
    bool hasNumberApplicationLetterPicture() const { return this->numberApplicationLetterPicture_ != nullptr;};
    void deleteNumberApplicationLetterPicture() { this->numberApplicationLetterPicture_ = nullptr;};
    inline string getNumberApplicationLetterPicture() const { DARABONBA_PTR_GET_DEFAULT(numberApplicationLetterPicture_, "") };
    inline SubmitEnterpriseInfoRequest& setNumberApplicationLetterPicture(string numberApplicationLetterPicture) { DARABONBA_PTR_SET_VALUE(numberApplicationLetterPicture_, numberApplicationLetterPicture) };


    // organizationCode Field Functions 
    bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
    void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
    inline string getOrganizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
    inline SubmitEnterpriseInfoRequest& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SubmitEnterpriseInfoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline SubmitEnterpriseInfoRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitEnterpriseInfoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SubmitEnterpriseInfoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // undertakingPicture Field Functions 
    bool hasUndertakingPicture() const { return this->undertakingPicture_ != nullptr;};
    void deleteUndertakingPicture() { this->undertakingPicture_ = nullptr;};
    inline string getUndertakingPicture() const { DARABONBA_PTR_GET_DEFAULT(undertakingPicture_, "") };
    inline SubmitEnterpriseInfoRequest& setUndertakingPicture(string undertakingPicture) { DARABONBA_PTR_SET_VALUE(undertakingPicture_, undertakingPicture) };


  protected:
    // This parameter is required.
    shared_ptr<string> businessLicenseAddress_ {};
    // This parameter is required.
    shared_ptr<string> businessLicensePicture_ {};
    shared_ptr<int64_t> enterpriseId_ {};
    // This parameter is required.
    shared_ptr<string> enterpriseName_ {};
    // This parameter is required.
    shared_ptr<string> legalPersonCertNumber_ {};
    // This parameter is required.
    shared_ptr<string> legalPersonCertPicture_ {};
    // This parameter is required.
    shared_ptr<string> legalPersonName_ {};
    // This parameter is required.
    shared_ptr<string> managerCertNumber_ {};
    // This parameter is required.
    shared_ptr<string> managerCertPicture_ {};
    // This parameter is required.
    shared_ptr<string> managerContactNumber_ {};
    // This parameter is required.
    shared_ptr<string> managerName_ {};
    // This parameter is required.
    shared_ptr<string> numberApplicationLetterPicture_ {};
    // This parameter is required.
    shared_ptr<string> organizationCode_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> undertakingPicture_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
