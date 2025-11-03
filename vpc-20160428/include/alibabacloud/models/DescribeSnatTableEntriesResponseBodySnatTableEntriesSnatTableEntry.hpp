// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODYSNATTABLEENTRIESSNATTABLEENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODYSNATTABLEENTRIESSNATTABLEENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& obj) { 
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
    DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry() = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry(const DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry &) = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry(DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry &&) = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry() = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& operator=(const DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry &) = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& operator=(DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipAffinity_ == nullptr
        && return this->natGatewayId_ == nullptr && return this->networkInterfaceId_ == nullptr && return this->snatEntryId_ == nullptr && return this->snatEntryName_ == nullptr && return this->snatIp_ == nullptr
        && return this->snatTableId_ == nullptr && return this->sourceCIDR_ == nullptr && return this->sourceVSwitchId_ == nullptr && return this->status_ == nullptr; };
    // eipAffinity Field Functions 
    bool hasEipAffinity() const { return this->eipAffinity_ != nullptr;};
    void deleteEipAffinity() { this->eipAffinity_ = nullptr;};
    inline string eipAffinity() const { DARABONBA_PTR_GET_DEFAULT(eipAffinity_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& setEipAffinity(string eipAffinity) { DARABONBA_PTR_SET_VALUE(eipAffinity_, eipAffinity) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // snatEntryId Field Functions 
    bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
    void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
    inline string snatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


    // snatEntryName Field Functions 
    bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
    void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
    inline string snatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string snatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


    // snatTableId Field Functions 
    bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
    void deleteSnatTableId() { this->snatTableId_ = nullptr;};
    inline string snatTableId() const { DARABONBA_PTR_GET_DEFAULT(snatTableId_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& setSnatTableId(string snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };


    // sourceCIDR Field Functions 
    bool hasSourceCIDR() const { return this->sourceCIDR_ != nullptr;};
    void deleteSourceCIDR() { this->sourceCIDR_ = nullptr;};
    inline string sourceCIDR() const { DARABONBA_PTR_GET_DEFAULT(sourceCIDR_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& setSourceCIDR(string sourceCIDR) { DARABONBA_PTR_SET_VALUE(sourceCIDR_, sourceCIDR) };


    // sourceVSwitchId Field Functions 
    bool hasSourceVSwitchId() const { return this->sourceVSwitchId_ != nullptr;};
    void deleteSourceVSwitchId() { this->sourceVSwitchId_ = nullptr;};
    inline string sourceVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(sourceVSwitchId_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& setSourceVSwitchId(string sourceVSwitchId) { DARABONBA_PTR_SET_VALUE(sourceVSwitchId_, sourceVSwitchId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> eipAffinity_ = nullptr;
    // The ID of the NAT gateway to which the SNAT entry belongs.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The ID of the SNAT entry.
    std::shared_ptr<string> snatEntryId_ = nullptr;
    // The name of the SNAT entry.
    std::shared_ptr<string> snatEntryName_ = nullptr;
    // *   When you query SNAT entries of Internet NAT gateways, this parameter indicates the EIP in an SNAT entry.
    // *   When you query SNAT entries of VPC NAT gateways, this parameter indicates the NAT IP address in an SNAT entry.
    std::shared_ptr<string> snatIp_ = nullptr;
    // The ID of the SNAT table to which the SNAT entry belongs.
    std::shared_ptr<string> snatTableId_ = nullptr;
    // The source CIDR block specified in the SNAT entry.
    std::shared_ptr<string> sourceCIDR_ = nullptr;
    // *   When you query SNAT entries of Internet NAT gateways, this parameter indicates the ID of the vSwitch that uses SNAT to access the Internet.
    // *   When you query SNAT entries of VPC NAT gateways, this parameter indicates the ID of the vSwitch that uses SNAT to access external networks.
    std::shared_ptr<string> sourceVSwitchId_ = nullptr;
    // The status of the SNAT entry. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    // *   **Deleting**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
