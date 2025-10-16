// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcFirewallDetailResponseBodyLocalVpc.hpp>
#include <alibabacloud/models/DescribeVpcFirewallDetailResponseBodyPeerVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
      DARABONBA_PTR_TO_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_TO_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PeerVpc, peerVpc_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PeerVpc, peerVpc_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
    };
    DescribeVpcFirewallDetailResponseBody() = default ;
    DescribeVpcFirewallDetailResponseBody(const DescribeVpcFirewallDetailResponseBody &) = default ;
    DescribeVpcFirewallDetailResponseBody(DescribeVpcFirewallDetailResponseBody &&) = default ;
    DescribeVpcFirewallDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDetailResponseBody() = default ;
    DescribeVpcFirewallDetailResponseBody& operator=(const DescribeVpcFirewallDetailResponseBody &) = default ;
    DescribeVpcFirewallDetailResponseBody& operator=(DescribeVpcFirewallDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->connectType_ == nullptr && return this->firewallSwitchStatus_ == nullptr && return this->localVpc_ == nullptr && return this->memberUid_ == nullptr && return this->peerVpc_ == nullptr
        && return this->requestId_ == nullptr && return this->vpcFirewallId_ == nullptr && return this->vpcFirewallName_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeVpcFirewallDetailResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // connectType Field Functions 
    bool hasConnectType() const { return this->connectType_ != nullptr;};
    void deleteConnectType() { this->connectType_ = nullptr;};
    inline string connectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


    // firewallSwitchStatus Field Functions 
    bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
    void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
    inline string firewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


    // localVpc Field Functions 
    bool hasLocalVpc() const { return this->localVpc_ != nullptr;};
    void deleteLocalVpc() { this->localVpc_ = nullptr;};
    inline const DescribeVpcFirewallDetailResponseBodyLocalVpc & localVpc() const { DARABONBA_PTR_GET_CONST(localVpc_, DescribeVpcFirewallDetailResponseBodyLocalVpc) };
    inline DescribeVpcFirewallDetailResponseBodyLocalVpc localVpc() { DARABONBA_PTR_GET(localVpc_, DescribeVpcFirewallDetailResponseBodyLocalVpc) };
    inline DescribeVpcFirewallDetailResponseBody& setLocalVpc(const DescribeVpcFirewallDetailResponseBodyLocalVpc & localVpc) { DARABONBA_PTR_SET_VALUE(localVpc_, localVpc) };
    inline DescribeVpcFirewallDetailResponseBody& setLocalVpc(DescribeVpcFirewallDetailResponseBodyLocalVpc && localVpc) { DARABONBA_PTR_SET_RVALUE(localVpc_, localVpc) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // peerVpc Field Functions 
    bool hasPeerVpc() const { return this->peerVpc_ != nullptr;};
    void deletePeerVpc() { this->peerVpc_ = nullptr;};
    inline const DescribeVpcFirewallDetailResponseBodyPeerVpc & peerVpc() const { DARABONBA_PTR_GET_CONST(peerVpc_, DescribeVpcFirewallDetailResponseBodyPeerVpc) };
    inline DescribeVpcFirewallDetailResponseBodyPeerVpc peerVpc() { DARABONBA_PTR_GET(peerVpc_, DescribeVpcFirewallDetailResponseBodyPeerVpc) };
    inline DescribeVpcFirewallDetailResponseBody& setPeerVpc(const DescribeVpcFirewallDetailResponseBodyPeerVpc & peerVpc) { DARABONBA_PTR_SET_VALUE(peerVpc_, peerVpc) };
    inline DescribeVpcFirewallDetailResponseBody& setPeerVpc(DescribeVpcFirewallDetailResponseBodyPeerVpc && peerVpc) { DARABONBA_PTR_SET_RVALUE(peerVpc_, peerVpc) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string vpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


  protected:
    // The bandwidth of the Express Connect circuit. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The connection type of the VPC firewall. The value is fixed as **expressconnect**, which indicates Express Connect circuits.
    std::shared_ptr<string> connectType_ = nullptr;
    // The status of the VPC firewall. Valid values:
    // 
    // *   **opened**: The VPC firewall is enabled.
    // *   **closed**: The VPC firewall is disabled.
    // *   **notconfigured**: The VPC firewall is not configured.
    // *   **configured**: The VPC firewall is configured.
    std::shared_ptr<string> firewallSwitchStatus_ = nullptr;
    // The details about the local VPC.
    std::shared_ptr<DescribeVpcFirewallDetailResponseBodyLocalVpc> localVpc_ = nullptr;
    // The UID of the member that is managed by your Alibaba Cloud account.
    std::shared_ptr<string> memberUid_ = nullptr;
    // The details about the peer VPC.
    std::shared_ptr<DescribeVpcFirewallDetailResponseBodyPeerVpc> peerVpc_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
    // The instance name of the VPC firewall.
    std::shared_ptr<string> vpcFirewallName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
