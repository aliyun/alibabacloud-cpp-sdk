// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPANYFOURELEMENTSVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPANYFOURELEMENTSVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class CompanyFourElementsVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompanyFourElementsVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(EpCertName, epCertName_);
      DARABONBA_PTR_TO_JSON(EpCertNo, epCertNo_);
      DARABONBA_PTR_TO_JSON(LegalPersonCertName, legalPersonCertName_);
      DARABONBA_PTR_TO_JSON(LegalPersonCertNo, legalPersonCertNo_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CompanyFourElementsVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(EpCertName, epCertName_);
      DARABONBA_PTR_FROM_JSON(EpCertNo, epCertNo_);
      DARABONBA_PTR_FROM_JSON(LegalPersonCertName, legalPersonCertName_);
      DARABONBA_PTR_FROM_JSON(LegalPersonCertNo, legalPersonCertNo_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CompanyFourElementsVerificationRequest() = default ;
    CompanyFourElementsVerificationRequest(const CompanyFourElementsVerificationRequest &) = default ;
    CompanyFourElementsVerificationRequest(CompanyFourElementsVerificationRequest &&) = default ;
    CompanyFourElementsVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompanyFourElementsVerificationRequest() = default ;
    CompanyFourElementsVerificationRequest& operator=(const CompanyFourElementsVerificationRequest &) = default ;
    CompanyFourElementsVerificationRequest& operator=(CompanyFourElementsVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->epCertName_ == nullptr && this->epCertNo_ == nullptr && this->legalPersonCertName_ == nullptr && this->legalPersonCertNo_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline CompanyFourElementsVerificationRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // epCertName Field Functions 
    bool hasEpCertName() const { return this->epCertName_ != nullptr;};
    void deleteEpCertName() { this->epCertName_ = nullptr;};
    inline string getEpCertName() const { DARABONBA_PTR_GET_DEFAULT(epCertName_, "") };
    inline CompanyFourElementsVerificationRequest& setEpCertName(string epCertName) { DARABONBA_PTR_SET_VALUE(epCertName_, epCertName) };


    // epCertNo Field Functions 
    bool hasEpCertNo() const { return this->epCertNo_ != nullptr;};
    void deleteEpCertNo() { this->epCertNo_ = nullptr;};
    inline string getEpCertNo() const { DARABONBA_PTR_GET_DEFAULT(epCertNo_, "") };
    inline CompanyFourElementsVerificationRequest& setEpCertNo(string epCertNo) { DARABONBA_PTR_SET_VALUE(epCertNo_, epCertNo) };


    // legalPersonCertName Field Functions 
    bool hasLegalPersonCertName() const { return this->legalPersonCertName_ != nullptr;};
    void deleteLegalPersonCertName() { this->legalPersonCertName_ = nullptr;};
    inline string getLegalPersonCertName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonCertName_, "") };
    inline CompanyFourElementsVerificationRequest& setLegalPersonCertName(string legalPersonCertName) { DARABONBA_PTR_SET_VALUE(legalPersonCertName_, legalPersonCertName) };


    // legalPersonCertNo Field Functions 
    bool hasLegalPersonCertNo() const { return this->legalPersonCertNo_ != nullptr;};
    void deleteLegalPersonCertNo() { this->legalPersonCertNo_ = nullptr;};
    inline string getLegalPersonCertNo() const { DARABONBA_PTR_GET_DEFAULT(legalPersonCertNo_, "") };
    inline CompanyFourElementsVerificationRequest& setLegalPersonCertNo(string legalPersonCertNo) { DARABONBA_PTR_SET_VALUE(legalPersonCertNo_, legalPersonCertNo) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CompanyFourElementsVerificationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CompanyFourElementsVerificationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CompanyFourElementsVerificationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The authorization code.
    // 
    // >  On the [My Applications](https://dytns.console.aliyun.com/analysis/apply) page in the [Cell Phone Number Service console](https://dytns.console.aliyun.com/overview?spm=a2c4g.608385.0.0.79847f8b3awqUC), you can obtain the authorization code (also known as authorization ID).
    // 
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // The enterprise name.
    shared_ptr<string> epCertName_ {};
    // The business license number.
    // 
    // This parameter is required.
    shared_ptr<string> epCertNo_ {};
    // The name of the legal representative.
    // 
    // >  If an enterprise has multiple legal representatives, separate them with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> legalPersonCertName_ {};
    // The ID card number of the legal representative.
    // 
    // >  If an enterprise has multiple legal representatives, separate the ID card numbers with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> legalPersonCertNo_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
