// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDOMAINDKIMRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDOMAINDKIMRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ChangeDomainDkimRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDomainDkimRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DkimRsaLength, dkimRsaLength_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDomainDkimRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DkimRsaLength, dkimRsaLength_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ChangeDomainDkimRecordRequest() = default ;
    ChangeDomainDkimRecordRequest(const ChangeDomainDkimRecordRequest &) = default ;
    ChangeDomainDkimRecordRequest(ChangeDomainDkimRecordRequest &&) = default ;
    ChangeDomainDkimRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDomainDkimRecordRequest() = default ;
    ChangeDomainDkimRecordRequest& operator=(const ChangeDomainDkimRecordRequest &) = default ;
    ChangeDomainDkimRecordRequest& operator=(ChangeDomainDkimRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dkimRsaLength_ != nullptr
        && this->domain_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // dkimRsaLength Field Functions 
    bool hasDkimRsaLength() const { return this->dkimRsaLength_ != nullptr;};
    void deleteDkimRsaLength() { this->dkimRsaLength_ = nullptr;};
    inline int32_t dkimRsaLength() const { DARABONBA_PTR_GET_DEFAULT(dkimRsaLength_, 0) };
    inline ChangeDomainDkimRecordRequest& setDkimRsaLength(int32_t dkimRsaLength) { DARABONBA_PTR_SET_VALUE(dkimRsaLength_, dkimRsaLength) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ChangeDomainDkimRecordRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ChangeDomainDkimRecordRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ChangeDomainDkimRecordRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ChangeDomainDkimRecordRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    std::shared_ptr<int32_t> dkimRsaLength_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
