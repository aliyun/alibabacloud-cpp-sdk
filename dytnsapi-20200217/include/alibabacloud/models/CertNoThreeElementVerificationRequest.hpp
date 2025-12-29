// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CERTNOTHREEELEMENTVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CERTNOTHREEELEMENTVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class CertNoThreeElementVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CertNoThreeElementVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(CertPicture, certPicture_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CertNoThreeElementVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(CertPicture, certPicture_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CertNoThreeElementVerificationRequest() = default ;
    CertNoThreeElementVerificationRequest(const CertNoThreeElementVerificationRequest &) = default ;
    CertNoThreeElementVerificationRequest(CertNoThreeElementVerificationRequest &&) = default ;
    CertNoThreeElementVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CertNoThreeElementVerificationRequest() = default ;
    CertNoThreeElementVerificationRequest& operator=(const CertNoThreeElementVerificationRequest &) = default ;
    CertNoThreeElementVerificationRequest& operator=(CertNoThreeElementVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->certName_ == nullptr && this->certNo_ == nullptr && this->certPicture_ == nullptr && this->mask_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline CertNoThreeElementVerificationRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline CertNoThreeElementVerificationRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline CertNoThreeElementVerificationRequest& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certPicture Field Functions 
    bool hasCertPicture() const { return this->certPicture_ != nullptr;};
    void deleteCertPicture() { this->certPicture_ = nullptr;};
    inline string getCertPicture() const { DARABONBA_PTR_GET_DEFAULT(certPicture_, "") };
    inline CertNoThreeElementVerificationRequest& setCertPicture(string certPicture) { DARABONBA_PTR_SET_VALUE(certPicture_, certPicture) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline CertNoThreeElementVerificationRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CertNoThreeElementVerificationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CertNoThreeElementVerificationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CertNoThreeElementVerificationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // This parameter is required.
    shared_ptr<string> certName_ {};
    // This parameter is required.
    shared_ptr<string> certNo_ {};
    // This parameter is required.
    shared_ptr<string> certPicture_ {};
    shared_ptr<string> mask_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
