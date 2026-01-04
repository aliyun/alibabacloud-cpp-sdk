// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODY_HPP_
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
  class DescribeSnatTableEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnatTableEntries, snatTableEntries_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnatTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnatTableEntries, snatTableEntries_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSnatTableEntriesResponseBody() = default ;
    DescribeSnatTableEntriesResponseBody(const DescribeSnatTableEntriesResponseBody &) = default ;
    DescribeSnatTableEntriesResponseBody(DescribeSnatTableEntriesResponseBody &&) = default ;
    DescribeSnatTableEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatTableEntriesResponseBody() = default ;
    DescribeSnatTableEntriesResponseBody& operator=(const DescribeSnatTableEntriesResponseBody &) = default ;
    DescribeSnatTableEntriesResponseBody& operator=(DescribeSnatTableEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnatTableEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnatTableEntries& obj) { 
        DARABONBA_PTR_TO_JSON(SnatTableEntry, snatTableEntry_);
      };
      friend void from_json(const Darabonba::Json& j, SnatTableEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(SnatTableEntry, snatTableEntry_);
      };
      SnatTableEntries() = default ;
      SnatTableEntries(const SnatTableEntries &) = default ;
      SnatTableEntries(SnatTableEntries &&) = default ;
      SnatTableEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnatTableEntries() = default ;
      SnatTableEntries& operator=(const SnatTableEntries &) = default ;
      SnatTableEntries& operator=(SnatTableEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SnatTableEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SnatTableEntry& obj) { 
          DARABONBA_PTR_TO_JSON(EipAffinity, eipAffinity_);
          DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
          DARABONBA_PTR_TO_JSON(SnatEntryName, snatEntryName_);
          DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
          DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
          DARABONBA_PTR_TO_JSON(SourceCIDR, sourceCIDR_);
          DARABONBA_PTR_TO_JSON(SourceVSwitchId, sourceVSwitchId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, SnatTableEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(EipAffinity, eipAffinity_);
          DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
          DARABONBA_PTR_FROM_JSON(SnatEntryName, snatEntryName_);
          DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
          DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
          DARABONBA_PTR_FROM_JSON(SourceCIDR, sourceCIDR_);
          DARABONBA_PTR_FROM_JSON(SourceVSwitchId, sourceVSwitchId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        SnatTableEntry() = default ;
        SnatTableEntry(const SnatTableEntry &) = default ;
        SnatTableEntry(SnatTableEntry &&) = default ;
        SnatTableEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SnatTableEntry() = default ;
        SnatTableEntry& operator=(const SnatTableEntry &) = default ;
        SnatTableEntry& operator=(SnatTableEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eipAffinity_ == nullptr
        && this->natGatewayId_ == nullptr && this->networkInterfaceId_ == nullptr && this->snatEntryId_ == nullptr && this->snatEntryName_ == nullptr && this->snatIp_ == nullptr
        && this->snatTableId_ == nullptr && this->sourceCIDR_ == nullptr && this->sourceVSwitchId_ == nullptr && this->status_ == nullptr; };
        // eipAffinity Field Functions 
        bool hasEipAffinity() const { return this->eipAffinity_ != nullptr;};
        void deleteEipAffinity() { this->eipAffinity_ = nullptr;};
        inline string getEipAffinity() const { DARABONBA_PTR_GET_DEFAULT(eipAffinity_, "") };
        inline SnatTableEntry& setEipAffinity(string eipAffinity) { DARABONBA_PTR_SET_VALUE(eipAffinity_, eipAffinity) };


        // natGatewayId Field Functions 
        bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
        void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
        inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
        inline SnatTableEntry& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


        // networkInterfaceId Field Functions 
        bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
        void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
        inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
        inline SnatTableEntry& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


        // snatEntryId Field Functions 
        bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
        void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
        inline string getSnatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
        inline SnatTableEntry& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


        // snatEntryName Field Functions 
        bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
        void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
        inline string getSnatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
        inline SnatTableEntry& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


        // snatIp Field Functions 
        bool hasSnatIp() const { return this->snatIp_ != nullptr;};
        void deleteSnatIp() { this->snatIp_ = nullptr;};
        inline string getSnatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
        inline SnatTableEntry& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


        // snatTableId Field Functions 
        bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
        void deleteSnatTableId() { this->snatTableId_ = nullptr;};
        inline string getSnatTableId() const { DARABONBA_PTR_GET_DEFAULT(snatTableId_, "") };
        inline SnatTableEntry& setSnatTableId(string snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };


        // sourceCIDR Field Functions 
        bool hasSourceCIDR() const { return this->sourceCIDR_ != nullptr;};
        void deleteSourceCIDR() { this->sourceCIDR_ = nullptr;};
        inline string getSourceCIDR() const { DARABONBA_PTR_GET_DEFAULT(sourceCIDR_, "") };
        inline SnatTableEntry& setSourceCIDR(string sourceCIDR) { DARABONBA_PTR_SET_VALUE(sourceCIDR_, sourceCIDR) };


        // sourceVSwitchId Field Functions 
        bool hasSourceVSwitchId() const { return this->sourceVSwitchId_ != nullptr;};
        void deleteSourceVSwitchId() { this->sourceVSwitchId_ = nullptr;};
        inline string getSourceVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(sourceVSwitchId_, "") };
        inline SnatTableEntry& setSourceVSwitchId(string sourceVSwitchId) { DARABONBA_PTR_SET_VALUE(sourceVSwitchId_, sourceVSwitchId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SnatTableEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> eipAffinity_ {};
        // The ID of the NAT gateway to which the SNAT entry belongs.
        shared_ptr<string> natGatewayId_ {};
        shared_ptr<string> networkInterfaceId_ {};
        // The ID of the SNAT entry.
        shared_ptr<string> snatEntryId_ {};
        // The name of the SNAT entry.
        shared_ptr<string> snatEntryName_ {};
        // *   When you query SNAT entries of Internet NAT gateways, this parameter indicates the EIP in an SNAT entry.
        // *   When you query SNAT entries of VPC NAT gateways, this parameter indicates the NAT IP address in an SNAT entry.
        shared_ptr<string> snatIp_ {};
        // The ID of the SNAT table to which the SNAT entry belongs.
        shared_ptr<string> snatTableId_ {};
        // The source CIDR block specified in the SNAT entry.
        shared_ptr<string> sourceCIDR_ {};
        // *   When you query SNAT entries of Internet NAT gateways, this parameter indicates the ID of the vSwitch that uses SNAT to access the Internet.
        // *   When you query SNAT entries of VPC NAT gateways, this parameter indicates the ID of the vSwitch that uses SNAT to access external networks.
        shared_ptr<string> sourceVSwitchId_ {};
        // The status of the SNAT entry. Valid values:
        // 
        // *   **Pending**
        // *   **Available**
        // *   **Deleting**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->snatTableEntry_ == nullptr; };
      // snatTableEntry Field Functions 
      bool hasSnatTableEntry() const { return this->snatTableEntry_ != nullptr;};
      void deleteSnatTableEntry() { this->snatTableEntry_ = nullptr;};
      inline const vector<SnatTableEntries::SnatTableEntry> & getSnatTableEntry() const { DARABONBA_PTR_GET_CONST(snatTableEntry_, vector<SnatTableEntries::SnatTableEntry>) };
      inline vector<SnatTableEntries::SnatTableEntry> getSnatTableEntry() { DARABONBA_PTR_GET(snatTableEntry_, vector<SnatTableEntries::SnatTableEntry>) };
      inline SnatTableEntries& setSnatTableEntry(const vector<SnatTableEntries::SnatTableEntry> & snatTableEntry) { DARABONBA_PTR_SET_VALUE(snatTableEntry_, snatTableEntry) };
      inline SnatTableEntries& setSnatTableEntry(vector<SnatTableEntries::SnatTableEntry> && snatTableEntry) { DARABONBA_PTR_SET_RVALUE(snatTableEntry_, snatTableEntry) };


    protected:
      shared_ptr<vector<SnatTableEntries::SnatTableEntry>> snatTableEntry_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->snatTableEntries_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSnatTableEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSnatTableEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnatTableEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snatTableEntries Field Functions 
    bool hasSnatTableEntries() const { return this->snatTableEntries_ != nullptr;};
    void deleteSnatTableEntries() { this->snatTableEntries_ = nullptr;};
    inline const DescribeSnatTableEntriesResponseBody::SnatTableEntries & getSnatTableEntries() const { DARABONBA_PTR_GET_CONST(snatTableEntries_, DescribeSnatTableEntriesResponseBody::SnatTableEntries) };
    inline DescribeSnatTableEntriesResponseBody::SnatTableEntries getSnatTableEntries() { DARABONBA_PTR_GET(snatTableEntries_, DescribeSnatTableEntriesResponseBody::SnatTableEntries) };
    inline DescribeSnatTableEntriesResponseBody& setSnatTableEntries(const DescribeSnatTableEntriesResponseBody::SnatTableEntries & snatTableEntries) { DARABONBA_PTR_SET_VALUE(snatTableEntries_, snatTableEntries) };
    inline DescribeSnatTableEntriesResponseBody& setSnatTableEntries(DescribeSnatTableEntriesResponseBody::SnatTableEntries && snatTableEntries) { DARABONBA_PTR_SET_RVALUE(snatTableEntries_, snatTableEntries) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSnatTableEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details of SNAT entries.
    shared_ptr<DescribeSnatTableEntriesResponseBody::SnatTableEntries> snatTableEntries_ {};
    // The number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
