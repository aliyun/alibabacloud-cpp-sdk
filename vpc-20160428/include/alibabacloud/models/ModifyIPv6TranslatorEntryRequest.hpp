// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIPV6TRANSLATORENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIPV6TRANSLATORENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyIPv6TranslatorEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIPv6TranslatorEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(AllocateIpv6Port, allocateIpv6Port_);
      DARABONBA_PTR_TO_JSON(BackendIpv4Addr, backendIpv4Addr_);
      DARABONBA_PTR_TO_JSON(BackendIpv4Port, backendIpv4Port_);
      DARABONBA_PTR_TO_JSON(EntryBandwidth, entryBandwidth_);
      DARABONBA_PTR_TO_JSON(EntryDescription, entryDescription_);
      DARABONBA_PTR_TO_JSON(EntryName, entryName_);
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransProtocol, transProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIPv6TranslatorEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(AllocateIpv6Port, allocateIpv6Port_);
      DARABONBA_PTR_FROM_JSON(BackendIpv4Addr, backendIpv4Addr_);
      DARABONBA_PTR_FROM_JSON(BackendIpv4Port, backendIpv4Port_);
      DARABONBA_PTR_FROM_JSON(EntryBandwidth, entryBandwidth_);
      DARABONBA_PTR_FROM_JSON(EntryDescription, entryDescription_);
      DARABONBA_PTR_FROM_JSON(EntryName, entryName_);
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransProtocol, transProtocol_);
    };
    ModifyIPv6TranslatorEntryRequest() = default ;
    ModifyIPv6TranslatorEntryRequest(const ModifyIPv6TranslatorEntryRequest &) = default ;
    ModifyIPv6TranslatorEntryRequest(ModifyIPv6TranslatorEntryRequest &&) = default ;
    ModifyIPv6TranslatorEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIPv6TranslatorEntryRequest() = default ;
    ModifyIPv6TranslatorEntryRequest& operator=(const ModifyIPv6TranslatorEntryRequest &) = default ;
    ModifyIPv6TranslatorEntryRequest& operator=(ModifyIPv6TranslatorEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclStatus_ == nullptr && this->aclType_ == nullptr && this->allocateIpv6Port_ == nullptr && this->backendIpv4Addr_ == nullptr && this->backendIpv4Port_ == nullptr
        && this->entryBandwidth_ == nullptr && this->entryDescription_ == nullptr && this->entryName_ == nullptr && this->ipv6TranslatorEntryId_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->transProtocol_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline ModifyIPv6TranslatorEntryRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline ModifyIPv6TranslatorEntryRequest& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline ModifyIPv6TranslatorEntryRequest& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // allocateIpv6Port Field Functions 
    bool hasAllocateIpv6Port() const { return this->allocateIpv6Port_ != nullptr;};
    void deleteAllocateIpv6Port() { this->allocateIpv6Port_ = nullptr;};
    inline int32_t getAllocateIpv6Port() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv6Port_, 0) };
    inline ModifyIPv6TranslatorEntryRequest& setAllocateIpv6Port(int32_t allocateIpv6Port) { DARABONBA_PTR_SET_VALUE(allocateIpv6Port_, allocateIpv6Port) };


    // backendIpv4Addr Field Functions 
    bool hasBackendIpv4Addr() const { return this->backendIpv4Addr_ != nullptr;};
    void deleteBackendIpv4Addr() { this->backendIpv4Addr_ = nullptr;};
    inline string getBackendIpv4Addr() const { DARABONBA_PTR_GET_DEFAULT(backendIpv4Addr_, "") };
    inline ModifyIPv6TranslatorEntryRequest& setBackendIpv4Addr(string backendIpv4Addr) { DARABONBA_PTR_SET_VALUE(backendIpv4Addr_, backendIpv4Addr) };


    // backendIpv4Port Field Functions 
    bool hasBackendIpv4Port() const { return this->backendIpv4Port_ != nullptr;};
    void deleteBackendIpv4Port() { this->backendIpv4Port_ = nullptr;};
    inline int32_t getBackendIpv4Port() const { DARABONBA_PTR_GET_DEFAULT(backendIpv4Port_, 0) };
    inline ModifyIPv6TranslatorEntryRequest& setBackendIpv4Port(int32_t backendIpv4Port) { DARABONBA_PTR_SET_VALUE(backendIpv4Port_, backendIpv4Port) };


    // entryBandwidth Field Functions 
    bool hasEntryBandwidth() const { return this->entryBandwidth_ != nullptr;};
    void deleteEntryBandwidth() { this->entryBandwidth_ = nullptr;};
    inline int32_t getEntryBandwidth() const { DARABONBA_PTR_GET_DEFAULT(entryBandwidth_, 0) };
    inline ModifyIPv6TranslatorEntryRequest& setEntryBandwidth(int32_t entryBandwidth) { DARABONBA_PTR_SET_VALUE(entryBandwidth_, entryBandwidth) };


    // entryDescription Field Functions 
    bool hasEntryDescription() const { return this->entryDescription_ != nullptr;};
    void deleteEntryDescription() { this->entryDescription_ = nullptr;};
    inline string getEntryDescription() const { DARABONBA_PTR_GET_DEFAULT(entryDescription_, "") };
    inline ModifyIPv6TranslatorEntryRequest& setEntryDescription(string entryDescription) { DARABONBA_PTR_SET_VALUE(entryDescription_, entryDescription) };


    // entryName Field Functions 
    bool hasEntryName() const { return this->entryName_ != nullptr;};
    void deleteEntryName() { this->entryName_ = nullptr;};
    inline string getEntryName() const { DARABONBA_PTR_GET_DEFAULT(entryName_, "") };
    inline ModifyIPv6TranslatorEntryRequest& setEntryName(string entryName) { DARABONBA_PTR_SET_VALUE(entryName_, entryName) };


    // ipv6TranslatorEntryId Field Functions 
    bool hasIpv6TranslatorEntryId() const { return this->ipv6TranslatorEntryId_ != nullptr;};
    void deleteIpv6TranslatorEntryId() { this->ipv6TranslatorEntryId_ = nullptr;};
    inline string getIpv6TranslatorEntryId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorEntryId_, "") };
    inline ModifyIPv6TranslatorEntryRequest& setIpv6TranslatorEntryId(string ipv6TranslatorEntryId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntryId_, ipv6TranslatorEntryId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyIPv6TranslatorEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyIPv6TranslatorEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyIPv6TranslatorEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyIPv6TranslatorEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyIPv6TranslatorEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transProtocol Field Functions 
    bool hasTransProtocol() const { return this->transProtocol_ != nullptr;};
    void deleteTransProtocol() { this->transProtocol_ = nullptr;};
    inline string getTransProtocol() const { DARABONBA_PTR_GET_DEFAULT(transProtocol_, "") };
    inline ModifyIPv6TranslatorEntryRequest& setTransProtocol(string transProtocol) { DARABONBA_PTR_SET_VALUE(transProtocol_, transProtocol) };


  protected:
    // The ID of the associated ACL.
    shared_ptr<string> aclId_ {};
    // Specifies whether to enable access control lists (ACLs). Valid values:
    // 
    // *   **on**
    // *   **off**
    shared_ptr<string> aclStatus_ {};
    // The ACL type. Valid values:
    // 
    // *   **white**: a whitelist. IPv6 addresses in the ACL are allowed to access backend services.
    // *   **black**: a blacklist. IPv6 addresses in the ACL are not allowed to access backend services.
    shared_ptr<string> aclType_ {};
    // The port that is used by the IPv6 address allocated to the IPv6 Translation Service instance.
    shared_ptr<int32_t> allocateIpv6Port_ {};
    // The public IPv4 address that needs to provide IPv6 services.
    shared_ptr<string> backendIpv4Addr_ {};
    // The port of the public IPv4 address that needs to provide IPv6 services.
    shared_ptr<int32_t> backendIpv4Port_ {};
    // The maximum bandwidth specified in the IPv6 mapping entry. Unit: Mbit/s. Valid values:
    // 
    // *   **-1** (default): does not limit the maximum bandwidth specified in the IPv6 mapping entry.
    // *   **1** to **200**: changes the maximum bandwidth specified in the IPv6 mapping entry.
    // 
    // > The sum of maximum bandwidth values specified in all IPv6 entries cannot exceed the maximum bandwidth supported by the instance.
    shared_ptr<int32_t> entryBandwidth_ {};
    // The description of the IPv6 mapping entry. It must be 2 to 100 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). It must start with a letter. It cannot start with http:// or [https://](https://。).
    shared_ptr<string> entryDescription_ {};
    // The name of the IPv6 mapping entry. It must be 2 to 100 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). It must start with a letter. It cannot start with http:// or [https://](https://。).
    shared_ptr<string> entryName_ {};
    // The ID of the IPv6 mapping entry.
    // 
    // This parameter is required.
    shared_ptr<string> ipv6TranslatorEntryId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region of the IPv6 Translation Service instance. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The protocol. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    shared_ptr<string> transProtocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
