// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIPV6TRANSLATORACLLISTENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIPV6TRANSLATORACLLISTENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AddIPv6TranslatorAclListEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIPv6TranslatorAclListEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntryComment, aclEntryComment_);
      DARABONBA_PTR_TO_JSON(AclEntryIp, aclEntryIp_);
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddIPv6TranslatorAclListEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntryComment, aclEntryComment_);
      DARABONBA_PTR_FROM_JSON(AclEntryIp, aclEntryIp_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AddIPv6TranslatorAclListEntryRequest() = default ;
    AddIPv6TranslatorAclListEntryRequest(const AddIPv6TranslatorAclListEntryRequest &) = default ;
    AddIPv6TranslatorAclListEntryRequest(AddIPv6TranslatorAclListEntryRequest &&) = default ;
    AddIPv6TranslatorAclListEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIPv6TranslatorAclListEntryRequest() = default ;
    AddIPv6TranslatorAclListEntryRequest& operator=(const AddIPv6TranslatorAclListEntryRequest &) = default ;
    AddIPv6TranslatorAclListEntryRequest& operator=(AddIPv6TranslatorAclListEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEntryComment_ == nullptr
        && this->aclEntryIp_ == nullptr && this->aclId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // aclEntryComment Field Functions 
    bool hasAclEntryComment() const { return this->aclEntryComment_ != nullptr;};
    void deleteAclEntryComment() { this->aclEntryComment_ = nullptr;};
    inline string getAclEntryComment() const { DARABONBA_PTR_GET_DEFAULT(aclEntryComment_, "") };
    inline AddIPv6TranslatorAclListEntryRequest& setAclEntryComment(string aclEntryComment) { DARABONBA_PTR_SET_VALUE(aclEntryComment_, aclEntryComment) };


    // aclEntryIp Field Functions 
    bool hasAclEntryIp() const { return this->aclEntryIp_ != nullptr;};
    void deleteAclEntryIp() { this->aclEntryIp_ = nullptr;};
    inline string getAclEntryIp() const { DARABONBA_PTR_GET_DEFAULT(aclEntryIp_, "") };
    inline AddIPv6TranslatorAclListEntryRequest& setAclEntryIp(string aclEntryIp) { DARABONBA_PTR_SET_VALUE(aclEntryIp_, aclEntryIp) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline AddIPv6TranslatorAclListEntryRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddIPv6TranslatorAclListEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddIPv6TranslatorAclListEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddIPv6TranslatorAclListEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddIPv6TranslatorAclListEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddIPv6TranslatorAclListEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The description of the access control policy group entry.
    // 
    // The description must be 2 to 100 characters in length and must start with an uppercase letter, lowercase letter, or Chinese character. It can contain digits, underscores (_), and hyphens (-).
    shared_ptr<string> aclEntryComment_ {};
    // The IPv6 address or IPv6 CIDR block to add to the access control policy group entry. Example: 12XX:0:0:XXXX::0102 or 12XX:0:0:XXXX::/60.
    // 
    // This parameter is required.
    shared_ptr<string> aclEntryIp_ {};
    // The ID of the access control policy group to which the IP entry belongs.
    // 
    // This parameter is required.
    shared_ptr<string> aclId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the access control policy group.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
