// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
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
        DARABONBA_PTR_TO_JSON(EipAffinity, eipAffinity_);
        DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
        DARABONBA_PTR_TO_JSON(IspAffinity, ispAffinity_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
        DARABONBA_PTR_TO_JSON(SnatEntryName, snatEntryName_);
        DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
        DARABONBA_PTR_TO_JSON(SourceCIDR, sourceCIDR_);
        DARABONBA_PTR_TO_JSON(StandbySnatIp, standbySnatIp_);
        DARABONBA_PTR_TO_JSON(StandbyStatus, standbyStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, SnatTableEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(EipAffinity, eipAffinity_);
        DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
        DARABONBA_PTR_FROM_JSON(IspAffinity, ispAffinity_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
        DARABONBA_PTR_FROM_JSON(SnatEntryName, snatEntryName_);
        DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
        DARABONBA_PTR_FROM_JSON(SourceCIDR, sourceCIDR_);
        DARABONBA_PTR_FROM_JSON(StandbySnatIp, standbySnatIp_);
        DARABONBA_PTR_FROM_JSON(StandbyStatus, standbyStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->eipAffinity_ == nullptr
        && this->idleTimeout_ == nullptr && this->ispAffinity_ == nullptr && this->natGatewayId_ == nullptr && this->snatEntryId_ == nullptr && this->snatEntryName_ == nullptr
        && this->snatIp_ == nullptr && this->sourceCIDR_ == nullptr && this->standbySnatIp_ == nullptr && this->standbyStatus_ == nullptr && this->status_ == nullptr; };
      // eipAffinity Field Functions 
      bool hasEipAffinity() const { return this->eipAffinity_ != nullptr;};
      void deleteEipAffinity() { this->eipAffinity_ = nullptr;};
      inline bool getEipAffinity() const { DARABONBA_PTR_GET_DEFAULT(eipAffinity_, false) };
      inline SnatTableEntries& setEipAffinity(bool eipAffinity) { DARABONBA_PTR_SET_VALUE(eipAffinity_, eipAffinity) };


      // idleTimeout Field Functions 
      bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
      void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
      inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
      inline SnatTableEntries& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


      // ispAffinity Field Functions 
      bool hasIspAffinity() const { return this->ispAffinity_ != nullptr;};
      void deleteIspAffinity() { this->ispAffinity_ = nullptr;};
      inline bool getIspAffinity() const { DARABONBA_PTR_GET_DEFAULT(ispAffinity_, false) };
      inline SnatTableEntries& setIspAffinity(bool ispAffinity) { DARABONBA_PTR_SET_VALUE(ispAffinity_, ispAffinity) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline SnatTableEntries& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // snatEntryId Field Functions 
      bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
      void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
      inline string getSnatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
      inline SnatTableEntries& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


      // snatEntryName Field Functions 
      bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
      void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
      inline string getSnatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
      inline SnatTableEntries& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


      // snatIp Field Functions 
      bool hasSnatIp() const { return this->snatIp_ != nullptr;};
      void deleteSnatIp() { this->snatIp_ = nullptr;};
      inline string getSnatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
      inline SnatTableEntries& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


      // sourceCIDR Field Functions 
      bool hasSourceCIDR() const { return this->sourceCIDR_ != nullptr;};
      void deleteSourceCIDR() { this->sourceCIDR_ = nullptr;};
      inline string getSourceCIDR() const { DARABONBA_PTR_GET_DEFAULT(sourceCIDR_, "") };
      inline SnatTableEntries& setSourceCIDR(string sourceCIDR) { DARABONBA_PTR_SET_VALUE(sourceCIDR_, sourceCIDR) };


      // standbySnatIp Field Functions 
      bool hasStandbySnatIp() const { return this->standbySnatIp_ != nullptr;};
      void deleteStandbySnatIp() { this->standbySnatIp_ = nullptr;};
      inline string getStandbySnatIp() const { DARABONBA_PTR_GET_DEFAULT(standbySnatIp_, "") };
      inline SnatTableEntries& setStandbySnatIp(string standbySnatIp) { DARABONBA_PTR_SET_VALUE(standbySnatIp_, standbySnatIp) };


      // standbyStatus Field Functions 
      bool hasStandbyStatus() const { return this->standbyStatus_ != nullptr;};
      void deleteStandbyStatus() { this->standbyStatus_ = nullptr;};
      inline string getStandbyStatus() const { DARABONBA_PTR_GET_DEFAULT(standbyStatus_, "") };
      inline SnatTableEntries& setStandbyStatus(string standbyStatus) { DARABONBA_PTR_SET_VALUE(standbyStatus_, standbyStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SnatTableEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Specifies whether to enable EIP affinity. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      // 
      // **
      // 
      // **Description** After you enable EIP affinity, if multiple EIPs are associated with an SNAT entry, each client uses one EIP to access the Internet. If EIP affinity is disabled, each client uses a random EIP to access the Internet.
      shared_ptr<bool> eipAffinity_ {};
      // The timeout period for idle connections. Valid values: **1** to **86400**. Unit: seconds.
      shared_ptr<int32_t> idleTimeout_ {};
      // Whether to enable operator affinity. Value taking:
      // 
      // - false:Do not open.
      // 
      // - true:Open.
      shared_ptr<bool> ispAffinity_ {};
      // The ID of the NAT gateway.
      shared_ptr<string> natGatewayId_ {};
      // The ID of the SNAT entry.
      shared_ptr<string> snatEntryId_ {};
      // The name of the SNAT entry.
      shared_ptr<string> snatEntryName_ {};
      // The EIP specified in the SNAT entry.
      shared_ptr<string> snatIp_ {};
      // The source CIDR block specified in the SNAT entry.
      shared_ptr<string> sourceCIDR_ {};
      // The secondary EIP. Multiple EIPs are separated by commas (,).
      shared_ptr<string> standbySnatIp_ {};
      // The status of the secondary EIP. Valid values:
      // 
      // *   Running
      // *   Stopping
      // *   Stopped
      // *   Starting
      shared_ptr<string> standbyStatus_ {};
      // The status of the SNAT entry. Valid values:
      // 
      // *   Pending: The SNAT entry is being created or modified.
      // *   Available: The SNAT entry is available.
      // *   Deleting: The SNAT entry is being deleted.
      shared_ptr<string> status_ {};
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
    inline const vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries> & getSnatTableEntries() const { DARABONBA_PTR_GET_CONST(snatTableEntries_, vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries>) };
    inline vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries> getSnatTableEntries() { DARABONBA_PTR_GET(snatTableEntries_, vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries>) };
    inline DescribeSnatTableEntriesResponseBody& setSnatTableEntries(const vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries> & snatTableEntries) { DARABONBA_PTR_SET_VALUE(snatTableEntries_, snatTableEntries) };
    inline DescribeSnatTableEntriesResponseBody& setSnatTableEntries(vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries> && snatTableEntries) { DARABONBA_PTR_SET_RVALUE(snatTableEntries_, snatTableEntries) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSnatTableEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the SNAT entries.
    shared_ptr<vector<DescribeSnatTableEntriesResponseBody::SnatTableEntries>> snatTableEntries_ {};
    // The number of SNAT entries that are returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
