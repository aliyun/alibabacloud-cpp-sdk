// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(AllocateIpv6Addr, allocateIpv6Addr_);
      DARABONBA_PTR_TO_JSON(AllocateIpv6Port, allocateIpv6Port_);
      DARABONBA_PTR_TO_JSON(BackendIpv4Addr, backendIpv4Addr_);
      DARABONBA_PTR_TO_JSON(BackendIpv4Port, backendIpv4Port_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EntryName, entryName_);
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransProtocol, transProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(AllocateIpv6Addr, allocateIpv6Addr_);
      DARABONBA_PTR_FROM_JSON(AllocateIpv6Port, allocateIpv6Port_);
      DARABONBA_PTR_FROM_JSON(BackendIpv4Addr, backendIpv4Addr_);
      DARABONBA_PTR_FROM_JSON(BackendIpv4Port, backendIpv4Port_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EntryName, entryName_);
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransProtocol, transProtocol_);
    };
    DescribeIPv6TranslatorEntriesRequest() = default ;
    DescribeIPv6TranslatorEntriesRequest(const DescribeIPv6TranslatorEntriesRequest &) = default ;
    DescribeIPv6TranslatorEntriesRequest(DescribeIPv6TranslatorEntriesRequest &&) = default ;
    DescribeIPv6TranslatorEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorEntriesRequest() = default ;
    DescribeIPv6TranslatorEntriesRequest& operator=(const DescribeIPv6TranslatorEntriesRequest &) = default ;
    DescribeIPv6TranslatorEntriesRequest& operator=(DescribeIPv6TranslatorEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclStatus_ == nullptr && this->aclType_ == nullptr && this->allocateIpv6Addr_ == nullptr && this->allocateIpv6Port_ == nullptr && this->backendIpv4Addr_ == nullptr
        && this->backendIpv4Port_ == nullptr && this->clientToken_ == nullptr && this->entryName_ == nullptr && this->ipv6TranslatorEntryId_ == nullptr && this->ipv6TranslatorId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->transProtocol_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // allocateIpv6Addr Field Functions 
    bool hasAllocateIpv6Addr() const { return this->allocateIpv6Addr_ != nullptr;};
    void deleteAllocateIpv6Addr() { this->allocateIpv6Addr_ = nullptr;};
    inline string getAllocateIpv6Addr() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv6Addr_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setAllocateIpv6Addr(string allocateIpv6Addr) { DARABONBA_PTR_SET_VALUE(allocateIpv6Addr_, allocateIpv6Addr) };


    // allocateIpv6Port Field Functions 
    bool hasAllocateIpv6Port() const { return this->allocateIpv6Port_ != nullptr;};
    void deleteAllocateIpv6Port() { this->allocateIpv6Port_ = nullptr;};
    inline int32_t getAllocateIpv6Port() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv6Port_, 0) };
    inline DescribeIPv6TranslatorEntriesRequest& setAllocateIpv6Port(int32_t allocateIpv6Port) { DARABONBA_PTR_SET_VALUE(allocateIpv6Port_, allocateIpv6Port) };


    // backendIpv4Addr Field Functions 
    bool hasBackendIpv4Addr() const { return this->backendIpv4Addr_ != nullptr;};
    void deleteBackendIpv4Addr() { this->backendIpv4Addr_ = nullptr;};
    inline string getBackendIpv4Addr() const { DARABONBA_PTR_GET_DEFAULT(backendIpv4Addr_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setBackendIpv4Addr(string backendIpv4Addr) { DARABONBA_PTR_SET_VALUE(backendIpv4Addr_, backendIpv4Addr) };


    // backendIpv4Port Field Functions 
    bool hasBackendIpv4Port() const { return this->backendIpv4Port_ != nullptr;};
    void deleteBackendIpv4Port() { this->backendIpv4Port_ = nullptr;};
    inline int32_t getBackendIpv4Port() const { DARABONBA_PTR_GET_DEFAULT(backendIpv4Port_, 0) };
    inline DescribeIPv6TranslatorEntriesRequest& setBackendIpv4Port(int32_t backendIpv4Port) { DARABONBA_PTR_SET_VALUE(backendIpv4Port_, backendIpv4Port) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // entryName Field Functions 
    bool hasEntryName() const { return this->entryName_ != nullptr;};
    void deleteEntryName() { this->entryName_ = nullptr;};
    inline string getEntryName() const { DARABONBA_PTR_GET_DEFAULT(entryName_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setEntryName(string entryName) { DARABONBA_PTR_SET_VALUE(entryName_, entryName) };


    // ipv6TranslatorEntryId Field Functions 
    bool hasIpv6TranslatorEntryId() const { return this->ipv6TranslatorEntryId_ != nullptr;};
    void deleteIpv6TranslatorEntryId() { this->ipv6TranslatorEntryId_ = nullptr;};
    inline string getIpv6TranslatorEntryId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorEntryId_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setIpv6TranslatorEntryId(string ipv6TranslatorEntryId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntryId_, ipv6TranslatorEntryId) };


    // ipv6TranslatorId Field Functions 
    bool hasIpv6TranslatorId() const { return this->ipv6TranslatorId_ != nullptr;};
    void deleteIpv6TranslatorId() { this->ipv6TranslatorId_ = nullptr;};
    inline string getIpv6TranslatorId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorId_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setIpv6TranslatorId(string ipv6TranslatorId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorId_, ipv6TranslatorId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeIPv6TranslatorEntriesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIPv6TranslatorEntriesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIPv6TranslatorEntriesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeIPv6TranslatorEntriesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transProtocol Field Functions 
    bool hasTransProtocol() const { return this->transProtocol_ != nullptr;};
    void deleteTransProtocol() { this->transProtocol_ = nullptr;};
    inline string getTransProtocol() const { DARABONBA_PTR_GET_DEFAULT(transProtocol_, "") };
    inline DescribeIPv6TranslatorEntriesRequest& setTransProtocol(string transProtocol) { DARABONBA_PTR_SET_VALUE(transProtocol_, transProtocol) };


  protected:
    // The ID of the network ACL.
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
    // The IPv6 address allocated to the IPv6 Translation Service instance.
    shared_ptr<string> allocateIpv6Addr_ {};
    // The port used by the IPv6 address allocated to the IPv6 Translation Service instance.
    shared_ptr<int32_t> allocateIpv6Port_ {};
    // The public IPv4 address that needs to provide IPv6 services.
    shared_ptr<string> backendIpv4Addr_ {};
    // The port used by the public IPv4 address that needs to provide IPv6 services.
    shared_ptr<int32_t> backendIpv4Port_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The name of the IPv6 mapping entry.
    shared_ptr<string> entryName_ {};
    // The ID of the IPv6 mapping entry.
    // 
    // > If **Ipv6TranslatorId** and **Ipv6TranslatorEntryId** are empty, information about all IPv6 mapping entries is returned. If only **Ipv6TranslatorEntryId** is empty, information about the IPv6 mapping entries of the current IPv6 Translation Service instance is returned.
    shared_ptr<string> ipv6TranslatorEntryId_ {};
    // The ID of the IPv6 Translation Service instance.
    shared_ptr<string> ipv6TranslatorId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of the page to return. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The region of the IPv6 Translation Service instance. You can call the **DescribeRegions** operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The protocol used by the data to be forwarded.
    shared_ptr<string> transProtocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
