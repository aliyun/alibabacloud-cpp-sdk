// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODYFIREWALLVPC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODYFIREWALLVPC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallCenDetailResponseBodyFirewallVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& obj) { 
      DARABONBA_PTR_TO_JSON(AllowConfiguration, allowConfiguration_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(VpcCidr, vpcCidr_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchCidr, vswitchCidr_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(VswitchZoneId, vswitchZoneId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowConfiguration, allowConfiguration_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(VpcCidr, vpcCidr_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchCidr, vswitchCidr_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(VswitchZoneId, vswitchZoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeVpcFirewallCenDetailResponseBodyFirewallVpc() = default ;
    DescribeVpcFirewallCenDetailResponseBodyFirewallVpc(const DescribeVpcFirewallCenDetailResponseBodyFirewallVpc &) = default ;
    DescribeVpcFirewallCenDetailResponseBodyFirewallVpc(DescribeVpcFirewallCenDetailResponseBodyFirewallVpc &&) = default ;
    DescribeVpcFirewallCenDetailResponseBodyFirewallVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenDetailResponseBodyFirewallVpc() = default ;
    DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& operator=(const DescribeVpcFirewallCenDetailResponseBodyFirewallVpc &) = default ;
    DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& operator=(DescribeVpcFirewallCenDetailResponseBodyFirewallVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowConfiguration_ != nullptr
        && this->standbyZoneId_ != nullptr && this->vpcCidr_ != nullptr && this->vpcId_ != nullptr && this->vswitchCidr_ != nullptr && this->vswitchId_ != nullptr
        && this->vswitchZoneId_ != nullptr && this->zoneId_ != nullptr; };
    // allowConfiguration Field Functions 
    bool hasAllowConfiguration() const { return this->allowConfiguration_ != nullptr;};
    void deleteAllowConfiguration() { this->allowConfiguration_ = nullptr;};
    inline int32_t allowConfiguration() const { DARABONBA_PTR_GET_DEFAULT(allowConfiguration_, 0) };
    inline DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& setAllowConfiguration(int32_t allowConfiguration) { DARABONBA_PTR_SET_VALUE(allowConfiguration_, allowConfiguration) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string standbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // vpcCidr Field Functions 
    bool hasVpcCidr() const { return this->vpcCidr_ != nullptr;};
    void deleteVpcCidr() { this->vpcCidr_ = nullptr;};
    inline string vpcCidr() const { DARABONBA_PTR_GET_DEFAULT(vpcCidr_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& setVpcCidr(string vpcCidr) { DARABONBA_PTR_SET_VALUE(vpcCidr_, vpcCidr) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchCidr Field Functions 
    bool hasVswitchCidr() const { return this->vswitchCidr_ != nullptr;};
    void deleteVswitchCidr() { this->vswitchCidr_ = nullptr;};
    inline string vswitchCidr() const { DARABONBA_PTR_GET_DEFAULT(vswitchCidr_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& setVswitchCidr(string vswitchCidr) { DARABONBA_PTR_SET_VALUE(vswitchCidr_, vswitchCidr) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // vswitchZoneId Field Functions 
    bool hasVswitchZoneId() const { return this->vswitchZoneId_ != nullptr;};
    void deleteVswitchZoneId() { this->vswitchZoneId_ = nullptr;};
    inline string vswitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(vswitchZoneId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& setVswitchZoneId(string vswitchZoneId) { DARABONBA_PTR_SET_VALUE(vswitchZoneId_, vswitchZoneId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyFirewallVpc& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Indicates whether you can specify a CIDR block when you create a VPC firewall for a Basic Edition transit router of a CEN instance. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> allowConfiguration_ = nullptr;
    // Firewall backup availability zone ID.
    std::shared_ptr<string> standbyZoneId_ = nullptr;
    // The CIDR block of the VPC.
    std::shared_ptr<string> vpcCidr_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The CIDR block of the vSwitch.
    std::shared_ptr<string> vswitchCidr_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // The availability zone ID of the virtual switch.
    std::shared_ptr<string> vswitchZoneId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
