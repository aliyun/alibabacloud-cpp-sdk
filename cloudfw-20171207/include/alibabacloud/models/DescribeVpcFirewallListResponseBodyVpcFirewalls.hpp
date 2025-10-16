// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODYVPCFIREWALLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODYVPCFIREWALLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig.hpp>
#include <alibabacloud/models/DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig.hpp>
#include <alibabacloud/models/DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc.hpp>
#include <alibabacloud/models/DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallListResponseBodyVpcFirewalls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallListResponseBodyVpcFirewalls& obj) { 
      DARABONBA_PTR_TO_JSON(AclConfig, aclConfig_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ConnectSubType, connectSubType_);
      DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
      DARABONBA_PTR_TO_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_TO_JSON(IpsConfig, ipsConfig_);
      DARABONBA_PTR_TO_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PeerVpc, peerVpc_);
      DARABONBA_PTR_TO_JSON(RegionStatus, regionStatus_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallListResponseBodyVpcFirewalls& obj) { 
      DARABONBA_PTR_FROM_JSON(AclConfig, aclConfig_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ConnectSubType, connectSubType_);
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(IpsConfig, ipsConfig_);
      DARABONBA_PTR_FROM_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PeerVpc, peerVpc_);
      DARABONBA_PTR_FROM_JSON(RegionStatus, regionStatus_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
    };
    DescribeVpcFirewallListResponseBodyVpcFirewalls() = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewalls(const DescribeVpcFirewallListResponseBodyVpcFirewalls &) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewalls(DescribeVpcFirewallListResponseBodyVpcFirewalls &&) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewalls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallListResponseBodyVpcFirewalls() = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewalls& operator=(const DescribeVpcFirewallListResponseBodyVpcFirewalls &) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewalls& operator=(DescribeVpcFirewallListResponseBodyVpcFirewalls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclConfig_ == nullptr
        && return this->bandwidth_ == nullptr && return this->connectSubType_ == nullptr && return this->connectType_ == nullptr && return this->firewallSwitchStatus_ == nullptr && return this->ipsConfig_ == nullptr
        && return this->localVpc_ == nullptr && return this->memberUid_ == nullptr && return this->peerVpc_ == nullptr && return this->regionStatus_ == nullptr && return this->resultCode_ == nullptr
        && return this->vpcFirewallId_ == nullptr && return this->vpcFirewallName_ == nullptr; };
    // aclConfig Field Functions 
    bool hasAclConfig() const { return this->aclConfig_ != nullptr;};
    void deleteAclConfig() { this->aclConfig_ = nullptr;};
    inline const Models::DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig & aclConfig() const { DARABONBA_PTR_GET_CONST(aclConfig_, Models::DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig) };
    inline Models::DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig aclConfig() { DARABONBA_PTR_GET(aclConfig_, Models::DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setAclConfig(const Models::DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig & aclConfig) { DARABONBA_PTR_SET_VALUE(aclConfig_, aclConfig) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setAclConfig(Models::DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig && aclConfig) { DARABONBA_PTR_SET_RVALUE(aclConfig_, aclConfig) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // connectSubType Field Functions 
    bool hasConnectSubType() const { return this->connectSubType_ != nullptr;};
    void deleteConnectSubType() { this->connectSubType_ = nullptr;};
    inline string connectSubType() const { DARABONBA_PTR_GET_DEFAULT(connectSubType_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setConnectSubType(string connectSubType) { DARABONBA_PTR_SET_VALUE(connectSubType_, connectSubType) };


    // connectType Field Functions 
    bool hasConnectType() const { return this->connectType_ != nullptr;};
    void deleteConnectType() { this->connectType_ = nullptr;};
    inline string connectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


    // firewallSwitchStatus Field Functions 
    bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
    void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
    inline string firewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


    // ipsConfig Field Functions 
    bool hasIpsConfig() const { return this->ipsConfig_ != nullptr;};
    void deleteIpsConfig() { this->ipsConfig_ = nullptr;};
    inline const Models::DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig & ipsConfig() const { DARABONBA_PTR_GET_CONST(ipsConfig_, Models::DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig) };
    inline Models::DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig ipsConfig() { DARABONBA_PTR_GET(ipsConfig_, Models::DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setIpsConfig(const Models::DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig & ipsConfig) { DARABONBA_PTR_SET_VALUE(ipsConfig_, ipsConfig) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setIpsConfig(Models::DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig && ipsConfig) { DARABONBA_PTR_SET_RVALUE(ipsConfig_, ipsConfig) };


    // localVpc Field Functions 
    bool hasLocalVpc() const { return this->localVpc_ != nullptr;};
    void deleteLocalVpc() { this->localVpc_ = nullptr;};
    inline const Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc & localVpc() const { DARABONBA_PTR_GET_CONST(localVpc_, Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc) };
    inline Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc localVpc() { DARABONBA_PTR_GET(localVpc_, Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setLocalVpc(const Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc & localVpc) { DARABONBA_PTR_SET_VALUE(localVpc_, localVpc) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setLocalVpc(Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc && localVpc) { DARABONBA_PTR_SET_RVALUE(localVpc_, localVpc) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // peerVpc Field Functions 
    bool hasPeerVpc() const { return this->peerVpc_ != nullptr;};
    void deletePeerVpc() { this->peerVpc_ = nullptr;};
    inline const Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc & peerVpc() const { DARABONBA_PTR_GET_CONST(peerVpc_, Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc) };
    inline Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc peerVpc() { DARABONBA_PTR_GET(peerVpc_, Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setPeerVpc(const Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc & peerVpc) { DARABONBA_PTR_SET_VALUE(peerVpc_, peerVpc) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setPeerVpc(Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc && peerVpc) { DARABONBA_PTR_SET_RVALUE(peerVpc_, peerVpc) };


    // regionStatus Field Functions 
    bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
    void deleteRegionStatus() { this->regionStatus_ = nullptr;};
    inline string regionStatus() const { DARABONBA_PTR_GET_DEFAULT(regionStatus_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setRegionStatus(string regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string vpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewalls& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


  protected:
    // ACL engine mode.
    std::shared_ptr<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsAclConfig> aclConfig_ = nullptr;
    // The bandwidth of the Express Connect circuit. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The sub-type of the connection. Valid values:
    // 
    // *   **vpc2vpc**: Express Connect connection
    // *   **vpcpeer**: peer connection
    std::shared_ptr<string> connectSubType_ = nullptr;
    // The connection type of the VPC firewall. The value is fixed as **expressconnect**, which indicates an Express Connect connection.
    std::shared_ptr<string> connectType_ = nullptr;
    // The status of the VPC firewall. Valid values:
    // 
    // *   **opened**: The VPC firewall is enabled.
    // *   **closed**: The VPC firewall is disabled.
    // *   **notconfigured**: The VPC firewall is not configured.
    std::shared_ptr<string> firewallSwitchStatus_ = nullptr;
    // The intrusion prevention system (IPS) configurations.
    std::shared_ptr<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig> ipsConfig_ = nullptr;
    // The details about the local VPC.
    std::shared_ptr<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpc> localVpc_ = nullptr;
    // The UID of the member that is managed by your Alibaba Cloud account.
    std::shared_ptr<string> memberUid_ = nullptr;
    // The details about the peer VPC.
    std::shared_ptr<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc> peerVpc_ = nullptr;
    // Indicates whether you can create a VPC firewall in a specified region. Valid values:
    // 
    // *   **enable**: yes
    // *   **disable**: no
    std::shared_ptr<string> regionStatus_ = nullptr;
    // The result code of the operation that creates the VPC firewall. Valid values:
    // 
    // *   **Unauthorized**: Cloud Firewall is not authorized to access a VPC for which the VPC firewall is created, and the VPC firewall cannot be created.
    // *   **RegionDisable**: VPC Firewall is not supported in the region of a VPC for which the VPC firewall is created, and the VPC firewall cannot be created.
    // *   **Empty string**: You can create a VPC firewall for the network instance.
    std::shared_ptr<string> resultCode_ = nullptr;
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
    // The instance name of the VPC firewall.
    std::shared_ptr<string> vpcFirewallName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
