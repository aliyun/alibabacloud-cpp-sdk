// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODYSNATTABLEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODYSNATTABLEENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSnatTableEntriesResponseBodySnatTableEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatTableEntriesResponseBodySnatTableEntries& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSnatTableEntriesResponseBodySnatTableEntries& obj) { 
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
    DescribeSnatTableEntriesResponseBodySnatTableEntries() = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntries(const DescribeSnatTableEntriesResponseBodySnatTableEntries &) = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntries(DescribeSnatTableEntriesResponseBodySnatTableEntries &&) = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatTableEntriesResponseBodySnatTableEntries() = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntries& operator=(const DescribeSnatTableEntriesResponseBodySnatTableEntries &) = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntries& operator=(DescribeSnatTableEntriesResponseBodySnatTableEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipAffinity_ == nullptr
        && return this->idleTimeout_ == nullptr && return this->ispAffinity_ == nullptr && return this->natGatewayId_ == nullptr && return this->snatEntryId_ == nullptr && return this->snatEntryName_ == nullptr
        && return this->snatIp_ == nullptr && return this->sourceCIDR_ == nullptr && return this->standbySnatIp_ == nullptr && return this->standbyStatus_ == nullptr && return this->status_ == nullptr; };
    // eipAffinity Field Functions 
    bool hasEipAffinity() const { return this->eipAffinity_ != nullptr;};
    void deleteEipAffinity() { this->eipAffinity_ = nullptr;};
    inline bool eipAffinity() const { DARABONBA_PTR_GET_DEFAULT(eipAffinity_, false) };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setEipAffinity(bool eipAffinity) { DARABONBA_PTR_SET_VALUE(eipAffinity_, eipAffinity) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // ispAffinity Field Functions 
    bool hasIspAffinity() const { return this->ispAffinity_ != nullptr;};
    void deleteIspAffinity() { this->ispAffinity_ = nullptr;};
    inline bool ispAffinity() const { DARABONBA_PTR_GET_DEFAULT(ispAffinity_, false) };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setIspAffinity(bool ispAffinity) { DARABONBA_PTR_SET_VALUE(ispAffinity_, ispAffinity) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // snatEntryId Field Functions 
    bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
    void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
    inline string snatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


    // snatEntryName Field Functions 
    bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
    void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
    inline string snatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string snatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


    // sourceCIDR Field Functions 
    bool hasSourceCIDR() const { return this->sourceCIDR_ != nullptr;};
    void deleteSourceCIDR() { this->sourceCIDR_ = nullptr;};
    inline string sourceCIDR() const { DARABONBA_PTR_GET_DEFAULT(sourceCIDR_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setSourceCIDR(string sourceCIDR) { DARABONBA_PTR_SET_VALUE(sourceCIDR_, sourceCIDR) };


    // standbySnatIp Field Functions 
    bool hasStandbySnatIp() const { return this->standbySnatIp_ != nullptr;};
    void deleteStandbySnatIp() { this->standbySnatIp_ = nullptr;};
    inline string standbySnatIp() const { DARABONBA_PTR_GET_DEFAULT(standbySnatIp_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setStandbySnatIp(string standbySnatIp) { DARABONBA_PTR_SET_VALUE(standbySnatIp_, standbySnatIp) };


    // standbyStatus Field Functions 
    bool hasStandbyStatus() const { return this->standbyStatus_ != nullptr;};
    void deleteStandbyStatus() { this->standbyStatus_ = nullptr;};
    inline string standbyStatus() const { DARABONBA_PTR_GET_DEFAULT(standbyStatus_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setStandbyStatus(string standbyStatus) { DARABONBA_PTR_SET_VALUE(standbyStatus_, standbyStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Specifies whether to enable EIP affinity. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    // 
    // **
    // 
    // **Description** After you enable EIP affinity, if multiple EIPs are associated with an SNAT entry, each client uses one EIP to access the Internet. If EIP affinity is disabled, each client uses a random EIP to access the Internet.
    std::shared_ptr<bool> eipAffinity_ = nullptr;
    // The timeout period for idle connections. Valid values: **1** to **86400**. Unit: seconds.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // Whether to enable operator affinity. Value taking:
    // 
    // - false:Do not open.
    // 
    // - true:Open.
    std::shared_ptr<bool> ispAffinity_ = nullptr;
    // The ID of the NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The ID of the SNAT entry.
    std::shared_ptr<string> snatEntryId_ = nullptr;
    // The name of the SNAT entry.
    std::shared_ptr<string> snatEntryName_ = nullptr;
    // The EIP specified in the SNAT entry.
    std::shared_ptr<string> snatIp_ = nullptr;
    // The source CIDR block specified in the SNAT entry.
    std::shared_ptr<string> sourceCIDR_ = nullptr;
    // The secondary EIP. Multiple EIPs are separated by commas (,).
    std::shared_ptr<string> standbySnatIp_ = nullptr;
    // The status of the secondary EIP. Valid values:
    // 
    // *   Running
    // *   Stopping
    // *   Stopped
    // *   Starting
    std::shared_ptr<string> standbyStatus_ = nullptr;
    // The status of the SNAT entry. Valid values:
    // 
    // *   Pending: The SNAT entry is being created or modified.
    // *   Available: The SNAT entry is available.
    // *   Deleting: The SNAT entry is being deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
