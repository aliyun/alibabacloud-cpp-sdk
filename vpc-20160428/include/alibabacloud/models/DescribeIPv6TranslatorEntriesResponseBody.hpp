// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntries, ipv6TranslatorEntries_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntries, ipv6TranslatorEntries_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIPv6TranslatorEntriesResponseBody() = default ;
    DescribeIPv6TranslatorEntriesResponseBody(const DescribeIPv6TranslatorEntriesResponseBody &) = default ;
    DescribeIPv6TranslatorEntriesResponseBody(DescribeIPv6TranslatorEntriesResponseBody &&) = default ;
    DescribeIPv6TranslatorEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorEntriesResponseBody() = default ;
    DescribeIPv6TranslatorEntriesResponseBody& operator=(const DescribeIPv6TranslatorEntriesResponseBody &) = default ;
    DescribeIPv6TranslatorEntriesResponseBody& operator=(DescribeIPv6TranslatorEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ipv6TranslatorEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6TranslatorEntries& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntry, ipv6TranslatorEntry_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6TranslatorEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntry, ipv6TranslatorEntry_);
      };
      Ipv6TranslatorEntries() = default ;
      Ipv6TranslatorEntries(const Ipv6TranslatorEntries &) = default ;
      Ipv6TranslatorEntries(Ipv6TranslatorEntries &&) = default ;
      Ipv6TranslatorEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6TranslatorEntries() = default ;
      Ipv6TranslatorEntries& operator=(const Ipv6TranslatorEntries &) = default ;
      Ipv6TranslatorEntries& operator=(Ipv6TranslatorEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6TranslatorEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6TranslatorEntry& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Ipv6TranslatorEntry& obj) { 
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
        Ipv6TranslatorEntry() = default ;
        Ipv6TranslatorEntry(const Ipv6TranslatorEntry &) = default ;
        Ipv6TranslatorEntry(Ipv6TranslatorEntry &&) = default ;
        Ipv6TranslatorEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6TranslatorEntry() = default ;
        Ipv6TranslatorEntry& operator=(const Ipv6TranslatorEntry &) = default ;
        Ipv6TranslatorEntry& operator=(Ipv6TranslatorEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclStatus_ == nullptr && this->aclType_ == nullptr && this->allocateIpv6Addr_ == nullptr && this->allocateIpv6Port_ == nullptr && this->backendIpv4Addr_ == nullptr
        && this->backendIpv4Port_ == nullptr && this->entryBandwidth_ == nullptr && this->entryDescription_ == nullptr && this->entryName_ == nullptr && this->entryStatus_ == nullptr
        && this->ipv6TranslatorEntryId_ == nullptr && this->ipv6TranslatorId_ == nullptr && this->regionId_ == nullptr && this->transProtocol_ == nullptr; };
        // aclId Field Functions 
        bool hasAclId() const { return this->aclId_ != nullptr;};
        void deleteAclId() { this->aclId_ = nullptr;};
        inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
        inline Ipv6TranslatorEntry& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


        // aclStatus Field Functions 
        bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
        void deleteAclStatus() { this->aclStatus_ = nullptr;};
        inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
        inline Ipv6TranslatorEntry& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


        // aclType Field Functions 
        bool hasAclType() const { return this->aclType_ != nullptr;};
        void deleteAclType() { this->aclType_ = nullptr;};
        inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
        inline Ipv6TranslatorEntry& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


        // allocateIpv6Addr Field Functions 
        bool hasAllocateIpv6Addr() const { return this->allocateIpv6Addr_ != nullptr;};
        void deleteAllocateIpv6Addr() { this->allocateIpv6Addr_ = nullptr;};
        inline string getAllocateIpv6Addr() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv6Addr_, "") };
        inline Ipv6TranslatorEntry& setAllocateIpv6Addr(string allocateIpv6Addr) { DARABONBA_PTR_SET_VALUE(allocateIpv6Addr_, allocateIpv6Addr) };


        // allocateIpv6Port Field Functions 
        bool hasAllocateIpv6Port() const { return this->allocateIpv6Port_ != nullptr;};
        void deleteAllocateIpv6Port() { this->allocateIpv6Port_ = nullptr;};
        inline int32_t getAllocateIpv6Port() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv6Port_, 0) };
        inline Ipv6TranslatorEntry& setAllocateIpv6Port(int32_t allocateIpv6Port) { DARABONBA_PTR_SET_VALUE(allocateIpv6Port_, allocateIpv6Port) };


        // backendIpv4Addr Field Functions 
        bool hasBackendIpv4Addr() const { return this->backendIpv4Addr_ != nullptr;};
        void deleteBackendIpv4Addr() { this->backendIpv4Addr_ = nullptr;};
        inline string getBackendIpv4Addr() const { DARABONBA_PTR_GET_DEFAULT(backendIpv4Addr_, "") };
        inline Ipv6TranslatorEntry& setBackendIpv4Addr(string backendIpv4Addr) { DARABONBA_PTR_SET_VALUE(backendIpv4Addr_, backendIpv4Addr) };


        // backendIpv4Port Field Functions 
        bool hasBackendIpv4Port() const { return this->backendIpv4Port_ != nullptr;};
        void deleteBackendIpv4Port() { this->backendIpv4Port_ = nullptr;};
        inline string getBackendIpv4Port() const { DARABONBA_PTR_GET_DEFAULT(backendIpv4Port_, "") };
        inline Ipv6TranslatorEntry& setBackendIpv4Port(string backendIpv4Port) { DARABONBA_PTR_SET_VALUE(backendIpv4Port_, backendIpv4Port) };


        // entryBandwidth Field Functions 
        bool hasEntryBandwidth() const { return this->entryBandwidth_ != nullptr;};
        void deleteEntryBandwidth() { this->entryBandwidth_ = nullptr;};
        inline string getEntryBandwidth() const { DARABONBA_PTR_GET_DEFAULT(entryBandwidth_, "") };
        inline Ipv6TranslatorEntry& setEntryBandwidth(string entryBandwidth) { DARABONBA_PTR_SET_VALUE(entryBandwidth_, entryBandwidth) };


        // entryDescription Field Functions 
        bool hasEntryDescription() const { return this->entryDescription_ != nullptr;};
        void deleteEntryDescription() { this->entryDescription_ = nullptr;};
        inline string getEntryDescription() const { DARABONBA_PTR_GET_DEFAULT(entryDescription_, "") };
        inline Ipv6TranslatorEntry& setEntryDescription(string entryDescription) { DARABONBA_PTR_SET_VALUE(entryDescription_, entryDescription) };


        // entryName Field Functions 
        bool hasEntryName() const { return this->entryName_ != nullptr;};
        void deleteEntryName() { this->entryName_ = nullptr;};
        inline string getEntryName() const { DARABONBA_PTR_GET_DEFAULT(entryName_, "") };
        inline Ipv6TranslatorEntry& setEntryName(string entryName) { DARABONBA_PTR_SET_VALUE(entryName_, entryName) };


        // entryStatus Field Functions 
        bool hasEntryStatus() const { return this->entryStatus_ != nullptr;};
        void deleteEntryStatus() { this->entryStatus_ = nullptr;};
        inline string getEntryStatus() const { DARABONBA_PTR_GET_DEFAULT(entryStatus_, "") };
        inline Ipv6TranslatorEntry& setEntryStatus(string entryStatus) { DARABONBA_PTR_SET_VALUE(entryStatus_, entryStatus) };


        // ipv6TranslatorEntryId Field Functions 
        bool hasIpv6TranslatorEntryId() const { return this->ipv6TranslatorEntryId_ != nullptr;};
        void deleteIpv6TranslatorEntryId() { this->ipv6TranslatorEntryId_ = nullptr;};
        inline string getIpv6TranslatorEntryId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorEntryId_, "") };
        inline Ipv6TranslatorEntry& setIpv6TranslatorEntryId(string ipv6TranslatorEntryId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntryId_, ipv6TranslatorEntryId) };


        // ipv6TranslatorId Field Functions 
        bool hasIpv6TranslatorId() const { return this->ipv6TranslatorId_ != nullptr;};
        void deleteIpv6TranslatorId() { this->ipv6TranslatorId_ = nullptr;};
        inline string getIpv6TranslatorId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorId_, "") };
        inline Ipv6TranslatorEntry& setIpv6TranslatorId(string ipv6TranslatorId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorId_, ipv6TranslatorId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Ipv6TranslatorEntry& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // transProtocol Field Functions 
        bool hasTransProtocol() const { return this->transProtocol_ != nullptr;};
        void deleteTransProtocol() { this->transProtocol_ = nullptr;};
        inline string getTransProtocol() const { DARABONBA_PTR_GET_DEFAULT(transProtocol_, "") };
        inline Ipv6TranslatorEntry& setTransProtocol(string transProtocol) { DARABONBA_PTR_SET_VALUE(transProtocol_, transProtocol) };


      protected:
        // The ID of the associated ACL.
        shared_ptr<string> aclId_ {};
        // Indicates whether ACLs are enabled.
        shared_ptr<string> aclStatus_ {};
        // The ACL type.
        // 
        // *   **white**: a whitelist. IPv6 addresses in the ACL are allowed to access backend services.
        // *   **black**: a blacklist. IPv6 addresses in the ACL are not allowed to access backend services.
        shared_ptr<string> aclType_ {};
        // The IPv6 address allocated to the IPv6 Translation Service instance.
        shared_ptr<string> allocateIpv6Addr_ {};
        // The port used by the IPv6 address allocated to the IPv6 Translation Service instance.
        shared_ptr<int32_t> allocateIpv6Port_ {};
        // The public IP address of the backend IPv4 server.
        shared_ptr<string> backendIpv4Addr_ {};
        // The public IPv4 port used by the IPv4 server that needs to provide IPv6 access.
        shared_ptr<string> backendIpv4Port_ {};
        // The bandwidth specified in the IPv6 mapping entry.
        shared_ptr<string> entryBandwidth_ {};
        // The description of the IPv6 mapping entry.
        shared_ptr<string> entryDescription_ {};
        // The name of the IPv6 mapping entry.
        shared_ptr<string> entryName_ {};
        // The status of the IPv6 mapping entry.
        shared_ptr<string> entryStatus_ {};
        // The ID of the IPv6 mapping entry.
        shared_ptr<string> ipv6TranslatorEntryId_ {};
        // The ID of the IPv6 Translation Service instance to which the IPv6 mapping entry belongs.
        shared_ptr<string> ipv6TranslatorId_ {};
        // The region of the IPv6 Translation Service instance.
        shared_ptr<string> regionId_ {};
        // The protocol.
        shared_ptr<string> transProtocol_ {};
      };

      virtual bool empty() const override { return this->ipv6TranslatorEntry_ == nullptr; };
      // ipv6TranslatorEntry Field Functions 
      bool hasIpv6TranslatorEntry() const { return this->ipv6TranslatorEntry_ != nullptr;};
      void deleteIpv6TranslatorEntry() { this->ipv6TranslatorEntry_ = nullptr;};
      inline const vector<Ipv6TranslatorEntries::Ipv6TranslatorEntry> & getIpv6TranslatorEntry() const { DARABONBA_PTR_GET_CONST(ipv6TranslatorEntry_, vector<Ipv6TranslatorEntries::Ipv6TranslatorEntry>) };
      inline vector<Ipv6TranslatorEntries::Ipv6TranslatorEntry> getIpv6TranslatorEntry() { DARABONBA_PTR_GET(ipv6TranslatorEntry_, vector<Ipv6TranslatorEntries::Ipv6TranslatorEntry>) };
      inline Ipv6TranslatorEntries& setIpv6TranslatorEntry(const vector<Ipv6TranslatorEntries::Ipv6TranslatorEntry> & ipv6TranslatorEntry) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntry_, ipv6TranslatorEntry) };
      inline Ipv6TranslatorEntries& setIpv6TranslatorEntry(vector<Ipv6TranslatorEntries::Ipv6TranslatorEntry> && ipv6TranslatorEntry) { DARABONBA_PTR_SET_RVALUE(ipv6TranslatorEntry_, ipv6TranslatorEntry) };


    protected:
      shared_ptr<vector<Ipv6TranslatorEntries::Ipv6TranslatorEntry>> ipv6TranslatorEntry_ {};
    };

    virtual bool empty() const override { return this->ipv6TranslatorEntries_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipv6TranslatorEntries Field Functions 
    bool hasIpv6TranslatorEntries() const { return this->ipv6TranslatorEntries_ != nullptr;};
    void deleteIpv6TranslatorEntries() { this->ipv6TranslatorEntries_ = nullptr;};
    inline const DescribeIPv6TranslatorEntriesResponseBody::Ipv6TranslatorEntries & getIpv6TranslatorEntries() const { DARABONBA_PTR_GET_CONST(ipv6TranslatorEntries_, DescribeIPv6TranslatorEntriesResponseBody::Ipv6TranslatorEntries) };
    inline DescribeIPv6TranslatorEntriesResponseBody::Ipv6TranslatorEntries getIpv6TranslatorEntries() { DARABONBA_PTR_GET(ipv6TranslatorEntries_, DescribeIPv6TranslatorEntriesResponseBody::Ipv6TranslatorEntries) };
    inline DescribeIPv6TranslatorEntriesResponseBody& setIpv6TranslatorEntries(const DescribeIPv6TranslatorEntriesResponseBody::Ipv6TranslatorEntries & ipv6TranslatorEntries) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntries_, ipv6TranslatorEntries) };
    inline DescribeIPv6TranslatorEntriesResponseBody& setIpv6TranslatorEntries(DescribeIPv6TranslatorEntriesResponseBody::Ipv6TranslatorEntries && ipv6TranslatorEntries) { DARABONBA_PTR_SET_RVALUE(ipv6TranslatorEntries_, ipv6TranslatorEntries) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIPv6TranslatorEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIPv6TranslatorEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIPv6TranslatorEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The IPv6 mapping entries that are queried.
    shared_ptr<DescribeIPv6TranslatorEntriesResponseBody::Ipv6TranslatorEntries> ipv6TranslatorEntries_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
