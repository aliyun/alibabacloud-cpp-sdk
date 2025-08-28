// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORENTRIESRESPONSEBODYIPV6TRANSLATORENTRIESIPV6TRANSLATORENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORENTRIESRESPONSEBODYIPV6TRANSLATORENTRIESIPV6TRANSLATORENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(AllocateIpv6Addr, allocateIpv6Addr_);
      DARABONBA_PTR_TO_JSON(AllocateIpv6Port, allocateIpv6Port_);
      DARABONBA_PTR_TO_JSON(BackendIpv4Addr, backendIpv4Addr_);
      DARABONBA_PTR_TO_JSON(BackendIpv4Port, backendIpv4Port_);
      DARABONBA_PTR_TO_JSON(EntryBandwidth, entryBandwidth_);
      DARABONBA_PTR_TO_JSON(EntryDescription, entryDescription_);
      DARABONBA_PTR_TO_JSON(EntryName, entryName_);
      DARABONBA_PTR_TO_JSON(EntryStatus, entryStatus_);
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TransProtocol, transProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(AllocateIpv6Addr, allocateIpv6Addr_);
      DARABONBA_PTR_FROM_JSON(AllocateIpv6Port, allocateIpv6Port_);
      DARABONBA_PTR_FROM_JSON(BackendIpv4Addr, backendIpv4Addr_);
      DARABONBA_PTR_FROM_JSON(BackendIpv4Port, backendIpv4Port_);
      DARABONBA_PTR_FROM_JSON(EntryBandwidth, entryBandwidth_);
      DARABONBA_PTR_FROM_JSON(EntryDescription, entryDescription_);
      DARABONBA_PTR_FROM_JSON(EntryName, entryName_);
      DARABONBA_PTR_FROM_JSON(EntryStatus, entryStatus_);
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TransProtocol, transProtocol_);
    };
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry() = default ;
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry(const DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry &) = default ;
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry(DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry &&) = default ;
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry() = default ;
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& operator=(const DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry &) = default ;
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& operator=(DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclId_ != nullptr
        && this->aclStatus_ != nullptr && this->aclType_ != nullptr && this->allocateIpv6Addr_ != nullptr && this->allocateIpv6Port_ != nullptr && this->backendIpv4Addr_ != nullptr
        && this->backendIpv4Port_ != nullptr && this->entryBandwidth_ != nullptr && this->entryDescription_ != nullptr && this->entryName_ != nullptr && this->entryStatus_ != nullptr
        && this->ipv6TranslatorEntryId_ != nullptr && this->ipv6TranslatorId_ != nullptr && this->regionId_ != nullptr && this->transProtocol_ != nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // allocateIpv6Addr Field Functions 
    bool hasAllocateIpv6Addr() const { return this->allocateIpv6Addr_ != nullptr;};
    void deleteAllocateIpv6Addr() { this->allocateIpv6Addr_ = nullptr;};
    inline string allocateIpv6Addr() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv6Addr_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setAllocateIpv6Addr(string allocateIpv6Addr) { DARABONBA_PTR_SET_VALUE(allocateIpv6Addr_, allocateIpv6Addr) };


    // allocateIpv6Port Field Functions 
    bool hasAllocateIpv6Port() const { return this->allocateIpv6Port_ != nullptr;};
    void deleteAllocateIpv6Port() { this->allocateIpv6Port_ = nullptr;};
    inline int32_t allocateIpv6Port() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv6Port_, 0) };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setAllocateIpv6Port(int32_t allocateIpv6Port) { DARABONBA_PTR_SET_VALUE(allocateIpv6Port_, allocateIpv6Port) };


    // backendIpv4Addr Field Functions 
    bool hasBackendIpv4Addr() const { return this->backendIpv4Addr_ != nullptr;};
    void deleteBackendIpv4Addr() { this->backendIpv4Addr_ = nullptr;};
    inline string backendIpv4Addr() const { DARABONBA_PTR_GET_DEFAULT(backendIpv4Addr_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setBackendIpv4Addr(string backendIpv4Addr) { DARABONBA_PTR_SET_VALUE(backendIpv4Addr_, backendIpv4Addr) };


    // backendIpv4Port Field Functions 
    bool hasBackendIpv4Port() const { return this->backendIpv4Port_ != nullptr;};
    void deleteBackendIpv4Port() { this->backendIpv4Port_ = nullptr;};
    inline string backendIpv4Port() const { DARABONBA_PTR_GET_DEFAULT(backendIpv4Port_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setBackendIpv4Port(string backendIpv4Port) { DARABONBA_PTR_SET_VALUE(backendIpv4Port_, backendIpv4Port) };


    // entryBandwidth Field Functions 
    bool hasEntryBandwidth() const { return this->entryBandwidth_ != nullptr;};
    void deleteEntryBandwidth() { this->entryBandwidth_ = nullptr;};
    inline string entryBandwidth() const { DARABONBA_PTR_GET_DEFAULT(entryBandwidth_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setEntryBandwidth(string entryBandwidth) { DARABONBA_PTR_SET_VALUE(entryBandwidth_, entryBandwidth) };


    // entryDescription Field Functions 
    bool hasEntryDescription() const { return this->entryDescription_ != nullptr;};
    void deleteEntryDescription() { this->entryDescription_ = nullptr;};
    inline string entryDescription() const { DARABONBA_PTR_GET_DEFAULT(entryDescription_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setEntryDescription(string entryDescription) { DARABONBA_PTR_SET_VALUE(entryDescription_, entryDescription) };


    // entryName Field Functions 
    bool hasEntryName() const { return this->entryName_ != nullptr;};
    void deleteEntryName() { this->entryName_ = nullptr;};
    inline string entryName() const { DARABONBA_PTR_GET_DEFAULT(entryName_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setEntryName(string entryName) { DARABONBA_PTR_SET_VALUE(entryName_, entryName) };


    // entryStatus Field Functions 
    bool hasEntryStatus() const { return this->entryStatus_ != nullptr;};
    void deleteEntryStatus() { this->entryStatus_ = nullptr;};
    inline string entryStatus() const { DARABONBA_PTR_GET_DEFAULT(entryStatus_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setEntryStatus(string entryStatus) { DARABONBA_PTR_SET_VALUE(entryStatus_, entryStatus) };


    // ipv6TranslatorEntryId Field Functions 
    bool hasIpv6TranslatorEntryId() const { return this->ipv6TranslatorEntryId_ != nullptr;};
    void deleteIpv6TranslatorEntryId() { this->ipv6TranslatorEntryId_ = nullptr;};
    inline string ipv6TranslatorEntryId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorEntryId_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setIpv6TranslatorEntryId(string ipv6TranslatorEntryId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntryId_, ipv6TranslatorEntryId) };


    // ipv6TranslatorId Field Functions 
    bool hasIpv6TranslatorId() const { return this->ipv6TranslatorId_ != nullptr;};
    void deleteIpv6TranslatorId() { this->ipv6TranslatorId_ = nullptr;};
    inline string ipv6TranslatorId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorId_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setIpv6TranslatorId(string ipv6TranslatorId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorId_, ipv6TranslatorId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // transProtocol Field Functions 
    bool hasTransProtocol() const { return this->transProtocol_ != nullptr;};
    void deleteTransProtocol() { this->transProtocol_ = nullptr;};
    inline string transProtocol() const { DARABONBA_PTR_GET_DEFAULT(transProtocol_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry& setTransProtocol(string transProtocol) { DARABONBA_PTR_SET_VALUE(transProtocol_, transProtocol) };


  protected:
    // The ID of the associated ACL.
    std::shared_ptr<string> aclId_ = nullptr;
    // Indicates whether ACLs are enabled.
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The ACL type.
    // 
    // *   **white**: a whitelist. IPv6 addresses in the ACL are allowed to access backend services.
    // *   **black**: a blacklist. IPv6 addresses in the ACL are not allowed to access backend services.
    std::shared_ptr<string> aclType_ = nullptr;
    // The IPv6 address allocated to the IPv6 Translation Service instance.
    std::shared_ptr<string> allocateIpv6Addr_ = nullptr;
    // The port used by the IPv6 address allocated to the IPv6 Translation Service instance.
    std::shared_ptr<int32_t> allocateIpv6Port_ = nullptr;
    // The public IP address of the backend IPv4 server.
    std::shared_ptr<string> backendIpv4Addr_ = nullptr;
    // The public IPv4 port used by the IPv4 server that needs to provide IPv6 access.
    std::shared_ptr<string> backendIpv4Port_ = nullptr;
    // The bandwidth specified in the IPv6 mapping entry.
    std::shared_ptr<string> entryBandwidth_ = nullptr;
    // The description of the IPv6 mapping entry.
    std::shared_ptr<string> entryDescription_ = nullptr;
    // The name of the IPv6 mapping entry.
    std::shared_ptr<string> entryName_ = nullptr;
    // The status of the IPv6 mapping entry.
    std::shared_ptr<string> entryStatus_ = nullptr;
    // The ID of the IPv6 mapping entry.
    std::shared_ptr<string> ipv6TranslatorEntryId_ = nullptr;
    // The ID of the IPv6 Translation Service instance to which the IPv6 mapping entry belongs.
    std::shared_ptr<string> ipv6TranslatorId_ = nullptr;
    // The region of the IPv6 Translation Service instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The protocol.
    std::shared_ptr<string> transProtocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
