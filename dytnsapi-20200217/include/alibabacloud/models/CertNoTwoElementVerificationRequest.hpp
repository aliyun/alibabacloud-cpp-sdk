// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CERTNOTWOELEMENTVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CERTNOTWOELEMENTVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class CertNoTwoElementVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CertNoTwoElementVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CertNoTwoElementVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CertNoTwoElementVerificationRequest() = default ;
    CertNoTwoElementVerificationRequest(const CertNoTwoElementVerificationRequest &) = default ;
    CertNoTwoElementVerificationRequest(CertNoTwoElementVerificationRequest &&) = default ;
    CertNoTwoElementVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CertNoTwoElementVerificationRequest() = default ;
    CertNoTwoElementVerificationRequest& operator=(const CertNoTwoElementVerificationRequest &) = default ;
    CertNoTwoElementVerificationRequest& operator=(CertNoTwoElementVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->certName_ == nullptr && this->certNo_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline CertNoTwoElementVerificationRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline CertNoTwoElementVerificationRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline CertNoTwoElementVerificationRequest& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CertNoTwoElementVerificationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CertNoTwoElementVerificationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CertNoTwoElementVerificationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // This parameter is required.
    shared_ptr<string> certName_ {};
    // This parameter is required.
    shared_ptr<string> certNo_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
