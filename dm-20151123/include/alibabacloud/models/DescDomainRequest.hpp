// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DescDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RequireRealTimeDnsRecords, requireRealTimeDnsRecords_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RequireRealTimeDnsRecords, requireRealTimeDnsRecords_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescDomainRequest() = default ;
    DescDomainRequest(const DescDomainRequest &) = default ;
    DescDomainRequest(DescDomainRequest &&) = default ;
    DescDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescDomainRequest() = default ;
    DescDomainRequest& operator=(const DescDomainRequest &) = default ;
    DescDomainRequest& operator=(DescDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainId_ == nullptr
        && this->ownerId_ == nullptr && this->requireRealTimeDnsRecords_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int32_t getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0) };
    inline DescDomainRequest& setDomainId(int32_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // requireRealTimeDnsRecords Field Functions 
    bool hasRequireRealTimeDnsRecords() const { return this->requireRealTimeDnsRecords_ != nullptr;};
    void deleteRequireRealTimeDnsRecords() { this->requireRealTimeDnsRecords_ = nullptr;};
    inline bool getRequireRealTimeDnsRecords() const { DARABONBA_PTR_GET_DEFAULT(requireRealTimeDnsRecords_, false) };
    inline DescDomainRequest& setRequireRealTimeDnsRecords(bool requireRealTimeDnsRecords) { DARABONBA_PTR_SET_VALUE(requireRealTimeDnsRecords_, requireRealTimeDnsRecords) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescDomainRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescDomainRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Domain ID. Can be obtained through QueryDomainByParam.
    // 
    // This parameter is required.
    shared_ptr<int32_t> domainId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Determines whether to perform real-time DNS resolution
    shared_ptr<bool> requireRealTimeDnsRecords_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
