// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONRESPONSEBODYVIRTUALBORDERROUTERFORPHYSICALCONNECTIONSETVIRTUALBORDERROUTERFORPHYSICALCONNECTIONTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONRESPONSEBODYVIRTUALBORDERROUTERFORPHYSICALCONNECTIONSETVIRTUALBORDERROUTERFORPHYSICALCONNECTIONTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& obj) { 
      DARABONBA_PTR_TO_JSON(ActivationTime, activationTime_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthStatus, bandwidthStatus_);
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EccId, eccId_);
      DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_TO_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(PConnVbrBussinessStatus, PConnVbrBussinessStatus_);
      DARABONBA_PTR_TO_JSON(PConnVbrChargeType, PConnVbrChargeType_);
      DARABONBA_PTR_TO_JSON(PConnVbrExpireTime, PConnVbrExpireTime_);
      DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_TO_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_TO_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_TO_JSON(RecoveryTime, recoveryTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TerminationTime, terminationTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
      DARABONBA_PTR_TO_JSON(VbrOwnerUid, vbrOwnerUid_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivationTime, activationTime_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthStatus, bandwidthStatus_);
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EccId, eccId_);
      DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_FROM_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(PConnVbrBussinessStatus, PConnVbrBussinessStatus_);
      DARABONBA_PTR_FROM_JSON(PConnVbrChargeType, PConnVbrChargeType_);
      DARABONBA_PTR_FROM_JSON(PConnVbrExpireTime, PConnVbrExpireTime_);
      DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_FROM_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_FROM_JSON(RecoveryTime, recoveryTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TerminationTime, terminationTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
      DARABONBA_PTR_FROM_JSON(VbrOwnerUid, vbrOwnerUid_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
    };
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType &&) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& operator=(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& operator=(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activationTime_ == nullptr
        && return this->bandwidth_ == nullptr && return this->bandwidthStatus_ == nullptr && return this->circuitCode_ == nullptr && return this->creationTime_ == nullptr && return this->eccId_ == nullptr
        && return this->enableIpv6_ == nullptr && return this->localGatewayIp_ == nullptr && return this->localIpv6GatewayIp_ == nullptr && return this->PConnVbrBussinessStatus_ == nullptr && return this->PConnVbrChargeType_ == nullptr
        && return this->PConnVbrExpireTime_ == nullptr && return this->peerGatewayIp_ == nullptr && return this->peerIpv6GatewayIp_ == nullptr && return this->peeringIpv6SubnetMask_ == nullptr && return this->peeringSubnetMask_ == nullptr
        && return this->recoveryTime_ == nullptr && return this->status_ == nullptr && return this->terminationTime_ == nullptr && return this->type_ == nullptr && return this->vbrId_ == nullptr
        && return this->vbrOwnerUid_ == nullptr && return this->vlanId_ == nullptr; };
    // activationTime Field Functions 
    bool hasActivationTime() const { return this->activationTime_ != nullptr;};
    void deleteActivationTime() { this->activationTime_ = nullptr;};
    inline string activationTime() const { DARABONBA_PTR_GET_DEFAULT(activationTime_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setActivationTime(string activationTime) { DARABONBA_PTR_SET_VALUE(activationTime_, activationTime) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline string bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthStatus Field Functions 
    bool hasBandwidthStatus() const { return this->bandwidthStatus_ != nullptr;};
    void deleteBandwidthStatus() { this->bandwidthStatus_ = nullptr;};
    inline string bandwidthStatus() const { DARABONBA_PTR_GET_DEFAULT(bandwidthStatus_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setBandwidthStatus(string bandwidthStatus) { DARABONBA_PTR_SET_VALUE(bandwidthStatus_, bandwidthStatus) };


    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string circuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // eccId Field Functions 
    bool hasEccId() const { return this->eccId_ != nullptr;};
    void deleteEccId() { this->eccId_ = nullptr;};
    inline string eccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool enableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // localGatewayIp Field Functions 
    bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
    void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
    inline string localGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


    // localIpv6GatewayIp Field Functions 
    bool hasLocalIpv6GatewayIp() const { return this->localIpv6GatewayIp_ != nullptr;};
    void deleteLocalIpv6GatewayIp() { this->localIpv6GatewayIp_ = nullptr;};
    inline string localIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localIpv6GatewayIp_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setLocalIpv6GatewayIp(string localIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(localIpv6GatewayIp_, localIpv6GatewayIp) };


    // PConnVbrBussinessStatus Field Functions 
    bool hasPConnVbrBussinessStatus() const { return this->PConnVbrBussinessStatus_ != nullptr;};
    void deletePConnVbrBussinessStatus() { this->PConnVbrBussinessStatus_ = nullptr;};
    inline string PConnVbrBussinessStatus() const { DARABONBA_PTR_GET_DEFAULT(PConnVbrBussinessStatus_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setPConnVbrBussinessStatus(string PConnVbrBussinessStatus) { DARABONBA_PTR_SET_VALUE(PConnVbrBussinessStatus_, PConnVbrBussinessStatus) };


    // PConnVbrChargeType Field Functions 
    bool hasPConnVbrChargeType() const { return this->PConnVbrChargeType_ != nullptr;};
    void deletePConnVbrChargeType() { this->PConnVbrChargeType_ = nullptr;};
    inline string PConnVbrChargeType() const { DARABONBA_PTR_GET_DEFAULT(PConnVbrChargeType_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setPConnVbrChargeType(string PConnVbrChargeType) { DARABONBA_PTR_SET_VALUE(PConnVbrChargeType_, PConnVbrChargeType) };


    // PConnVbrExpireTime Field Functions 
    bool hasPConnVbrExpireTime() const { return this->PConnVbrExpireTime_ != nullptr;};
    void deletePConnVbrExpireTime() { this->PConnVbrExpireTime_ = nullptr;};
    inline string PConnVbrExpireTime() const { DARABONBA_PTR_GET_DEFAULT(PConnVbrExpireTime_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setPConnVbrExpireTime(string PConnVbrExpireTime) { DARABONBA_PTR_SET_VALUE(PConnVbrExpireTime_, PConnVbrExpireTime) };


    // peerGatewayIp Field Functions 
    bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
    void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
    inline string peerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


    // peerIpv6GatewayIp Field Functions 
    bool hasPeerIpv6GatewayIp() const { return this->peerIpv6GatewayIp_ != nullptr;};
    void deletePeerIpv6GatewayIp() { this->peerIpv6GatewayIp_ = nullptr;};
    inline string peerIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerIpv6GatewayIp_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setPeerIpv6GatewayIp(string peerIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(peerIpv6GatewayIp_, peerIpv6GatewayIp) };


    // peeringIpv6SubnetMask Field Functions 
    bool hasPeeringIpv6SubnetMask() const { return this->peeringIpv6SubnetMask_ != nullptr;};
    void deletePeeringIpv6SubnetMask() { this->peeringIpv6SubnetMask_ = nullptr;};
    inline string peeringIpv6SubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringIpv6SubnetMask_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setPeeringIpv6SubnetMask(string peeringIpv6SubnetMask) { DARABONBA_PTR_SET_VALUE(peeringIpv6SubnetMask_, peeringIpv6SubnetMask) };


    // peeringSubnetMask Field Functions 
    bool hasPeeringSubnetMask() const { return this->peeringSubnetMask_ != nullptr;};
    void deletePeeringSubnetMask() { this->peeringSubnetMask_ = nullptr;};
    inline string peeringSubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringSubnetMask_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setPeeringSubnetMask(string peeringSubnetMask) { DARABONBA_PTR_SET_VALUE(peeringSubnetMask_, peeringSubnetMask) };


    // recoveryTime Field Functions 
    bool hasRecoveryTime() const { return this->recoveryTime_ != nullptr;};
    void deleteRecoveryTime() { this->recoveryTime_ = nullptr;};
    inline string recoveryTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryTime_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setRecoveryTime(string recoveryTime) { DARABONBA_PTR_SET_VALUE(recoveryTime_, recoveryTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // terminationTime Field Functions 
    bool hasTerminationTime() const { return this->terminationTime_ != nullptr;};
    void deleteTerminationTime() { this->terminationTime_ = nullptr;};
    inline string terminationTime() const { DARABONBA_PTR_GET_DEFAULT(terminationTime_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setTerminationTime(string terminationTime) { DARABONBA_PTR_SET_VALUE(terminationTime_, terminationTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string vbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


    // vbrOwnerUid Field Functions 
    bool hasVbrOwnerUid() const { return this->vbrOwnerUid_ != nullptr;};
    void deleteVbrOwnerUid() { this->vbrOwnerUid_ = nullptr;};
    inline int64_t vbrOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(vbrOwnerUid_, 0L) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setVbrOwnerUid(int64_t vbrOwnerUid) { DARABONBA_PTR_SET_VALUE(vbrOwnerUid_, vbrOwnerUid) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline int32_t vlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, 0) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSetVirtualBorderRouterForPhysicalConnectionType& setVlanId(int32_t vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


  protected:
    // The time when the VBR was first activated.
    std::shared_ptr<string> activationTime_ = nullptr;
    // The bandwidth of the VBR that is associated with the Express Connect circuit. Unit: Mbit/s.
    std::shared_ptr<string> bandwidth_ = nullptr;
    // The status of the bandwidth. Valid values:
    // 
    // *   **Active**
    // *   **Inactive**
    std::shared_ptr<string> bandwidthStatus_ = nullptr;
    // The circuit code of the Express Connect circuit. The circuit code is provided by the connectivity provider.
    std::shared_ptr<string> circuitCode_ = nullptr;
    // The time when the VBR was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the ECC instance.
    std::shared_ptr<string> eccId_ = nullptr;
    // Indicates whether IPv6 is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableIpv6_ = nullptr;
    // The IPv4 address of the gateway device on the Alibaba Cloud side.
    std::shared_ptr<string> localGatewayIp_ = nullptr;
    // The IPv6 address of the gateway device on the Alibaba Cloud side.
    std::shared_ptr<string> localIpv6GatewayIp_ = nullptr;
    // The status of the VBR associated with the Express Connect circuit. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    std::shared_ptr<string> PConnVbrBussinessStatus_ = nullptr;
    // The billing method of the VBR. Valid values:
    // 
    // *   **PrePaid**: subscription. If you choose this billing method, make sure that your Apsara Stack account supports balance payments or credit payments.
    // *   **PostPaid**: pay-as-you-go.
    std::shared_ptr<string> PConnVbrChargeType_ = nullptr;
    // The time when the VBR associated with the Express Connect circuit expires.
    std::shared_ptr<string> PConnVbrExpireTime_ = nullptr;
    // The IPv4 address of the gateway device on the user side.
    std::shared_ptr<string> peerGatewayIp_ = nullptr;
    // The IPv6 address of the gateway device on the user side.
    // 
    // This parameter is required when you create a VBR for the owner of the Express Connect circuit. You can ignore this parameter when you create a VBR for another Alibaba Cloud account.
    std::shared_ptr<string> peerIpv6GatewayIp_ = nullptr;
    // The subnet mask for the IPv6 addresses of the gateway devices on the Alibaba Cloud side and on the user side.
    // 
    // The two IPv6 addresses must fall within the same subnet.
    std::shared_ptr<string> peeringIpv6SubnetMask_ = nullptr;
    // The subnet mask of the IPv4 addresses configured on the user side and Alibaba Cloud side.
    // 
    // The two IPv4 addresses must fall within the same subnet.
    std::shared_ptr<string> peeringSubnetMask_ = nullptr;
    // The last time when the status of the VBR changed from Terminated to Active.
    std::shared_ptr<string> recoveryTime_ = nullptr;
    // The status of the VBR. Valid values:
    // 
    // *   **unconfirmed**
    // *   **active**
    // *   **terminating**
    // *   **terminated**
    // *   **recovering**
    // *   **deleting**
    std::shared_ptr<string> status_ = nullptr;
    // The last time when the VBR was disabled.
    std::shared_ptr<string> terminationTime_ = nullptr;
    // The VBR type.
    std::shared_ptr<string> type_ = nullptr;
    // The VBR ID.
    std::shared_ptr<string> vbrId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VBR belongs.
    // 
    // If the owner of the VBR is the same as that of the Express Connect circuit, this parameter is empty.
    std::shared_ptr<int64_t> vbrOwnerUid_ = nullptr;
    // The VLAN ID of the VBR.
    std::shared_ptr<int32_t> vlanId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
