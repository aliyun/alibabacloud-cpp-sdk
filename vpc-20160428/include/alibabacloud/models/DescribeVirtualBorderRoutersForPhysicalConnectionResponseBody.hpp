// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONRESPONSEBODY_HPP_
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
  class DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VirtualBorderRouterForPhysicalConnectionSet, virtualBorderRouterForPhysicalConnectionSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VirtualBorderRouterForPhysicalConnectionSet, virtualBorderRouterForPhysicalConnectionSet_);
    };
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &&) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& operator=(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& operator=(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VirtualBorderRouterForPhysicalConnectionSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VirtualBorderRouterForPhysicalConnectionSet& obj) { 
        DARABONBA_PTR_TO_JSON(VirtualBorderRouterForPhysicalConnectionType, virtualBorderRouterForPhysicalConnectionType_);
      };
      friend void from_json(const Darabonba::Json& j, VirtualBorderRouterForPhysicalConnectionSet& obj) { 
        DARABONBA_PTR_FROM_JSON(VirtualBorderRouterForPhysicalConnectionType, virtualBorderRouterForPhysicalConnectionType_);
      };
      VirtualBorderRouterForPhysicalConnectionSet() = default ;
      VirtualBorderRouterForPhysicalConnectionSet(const VirtualBorderRouterForPhysicalConnectionSet &) = default ;
      VirtualBorderRouterForPhysicalConnectionSet(VirtualBorderRouterForPhysicalConnectionSet &&) = default ;
      VirtualBorderRouterForPhysicalConnectionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VirtualBorderRouterForPhysicalConnectionSet() = default ;
      VirtualBorderRouterForPhysicalConnectionSet& operator=(const VirtualBorderRouterForPhysicalConnectionSet &) = default ;
      VirtualBorderRouterForPhysicalConnectionSet& operator=(VirtualBorderRouterForPhysicalConnectionSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VirtualBorderRouterForPhysicalConnectionType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VirtualBorderRouterForPhysicalConnectionType& obj) { 
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
        friend void from_json(const Darabonba::Json& j, VirtualBorderRouterForPhysicalConnectionType& obj) { 
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
        VirtualBorderRouterForPhysicalConnectionType() = default ;
        VirtualBorderRouterForPhysicalConnectionType(const VirtualBorderRouterForPhysicalConnectionType &) = default ;
        VirtualBorderRouterForPhysicalConnectionType(VirtualBorderRouterForPhysicalConnectionType &&) = default ;
        VirtualBorderRouterForPhysicalConnectionType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VirtualBorderRouterForPhysicalConnectionType() = default ;
        VirtualBorderRouterForPhysicalConnectionType& operator=(const VirtualBorderRouterForPhysicalConnectionType &) = default ;
        VirtualBorderRouterForPhysicalConnectionType& operator=(VirtualBorderRouterForPhysicalConnectionType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activationTime_ == nullptr
        && this->bandwidth_ == nullptr && this->bandwidthStatus_ == nullptr && this->circuitCode_ == nullptr && this->creationTime_ == nullptr && this->eccId_ == nullptr
        && this->enableIpv6_ == nullptr && this->localGatewayIp_ == nullptr && this->localIpv6GatewayIp_ == nullptr && this->PConnVbrBussinessStatus_ == nullptr && this->PConnVbrChargeType_ == nullptr
        && this->PConnVbrExpireTime_ == nullptr && this->peerGatewayIp_ == nullptr && this->peerIpv6GatewayIp_ == nullptr && this->peeringIpv6SubnetMask_ == nullptr && this->peeringSubnetMask_ == nullptr
        && this->recoveryTime_ == nullptr && this->status_ == nullptr && this->terminationTime_ == nullptr && this->type_ == nullptr && this->vbrId_ == nullptr
        && this->vbrOwnerUid_ == nullptr && this->vlanId_ == nullptr; };
        // activationTime Field Functions 
        bool hasActivationTime() const { return this->activationTime_ != nullptr;};
        void deleteActivationTime() { this->activationTime_ = nullptr;};
        inline string getActivationTime() const { DARABONBA_PTR_GET_DEFAULT(activationTime_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setActivationTime(string activationTime) { DARABONBA_PTR_SET_VALUE(activationTime_, activationTime) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // bandwidthStatus Field Functions 
        bool hasBandwidthStatus() const { return this->bandwidthStatus_ != nullptr;};
        void deleteBandwidthStatus() { this->bandwidthStatus_ = nullptr;};
        inline string getBandwidthStatus() const { DARABONBA_PTR_GET_DEFAULT(bandwidthStatus_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setBandwidthStatus(string bandwidthStatus) { DARABONBA_PTR_SET_VALUE(bandwidthStatus_, bandwidthStatus) };


        // circuitCode Field Functions 
        bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
        void deleteCircuitCode() { this->circuitCode_ = nullptr;};
        inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // eccId Field Functions 
        bool hasEccId() const { return this->eccId_ != nullptr;};
        void deleteEccId() { this->eccId_ = nullptr;};
        inline string getEccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


        // enableIpv6 Field Functions 
        bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
        void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
        inline bool getEnableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
        inline VirtualBorderRouterForPhysicalConnectionType& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


        // localGatewayIp Field Functions 
        bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
        void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
        inline string getLocalGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


        // localIpv6GatewayIp Field Functions 
        bool hasLocalIpv6GatewayIp() const { return this->localIpv6GatewayIp_ != nullptr;};
        void deleteLocalIpv6GatewayIp() { this->localIpv6GatewayIp_ = nullptr;};
        inline string getLocalIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localIpv6GatewayIp_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setLocalIpv6GatewayIp(string localIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(localIpv6GatewayIp_, localIpv6GatewayIp) };


        // PConnVbrBussinessStatus Field Functions 
        bool hasPConnVbrBussinessStatus() const { return this->PConnVbrBussinessStatus_ != nullptr;};
        void deletePConnVbrBussinessStatus() { this->PConnVbrBussinessStatus_ = nullptr;};
        inline string getPConnVbrBussinessStatus() const { DARABONBA_PTR_GET_DEFAULT(PConnVbrBussinessStatus_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setPConnVbrBussinessStatus(string PConnVbrBussinessStatus) { DARABONBA_PTR_SET_VALUE(PConnVbrBussinessStatus_, PConnVbrBussinessStatus) };


        // PConnVbrChargeType Field Functions 
        bool hasPConnVbrChargeType() const { return this->PConnVbrChargeType_ != nullptr;};
        void deletePConnVbrChargeType() { this->PConnVbrChargeType_ = nullptr;};
        inline string getPConnVbrChargeType() const { DARABONBA_PTR_GET_DEFAULT(PConnVbrChargeType_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setPConnVbrChargeType(string PConnVbrChargeType) { DARABONBA_PTR_SET_VALUE(PConnVbrChargeType_, PConnVbrChargeType) };


        // PConnVbrExpireTime Field Functions 
        bool hasPConnVbrExpireTime() const { return this->PConnVbrExpireTime_ != nullptr;};
        void deletePConnVbrExpireTime() { this->PConnVbrExpireTime_ = nullptr;};
        inline string getPConnVbrExpireTime() const { DARABONBA_PTR_GET_DEFAULT(PConnVbrExpireTime_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setPConnVbrExpireTime(string PConnVbrExpireTime) { DARABONBA_PTR_SET_VALUE(PConnVbrExpireTime_, PConnVbrExpireTime) };


        // peerGatewayIp Field Functions 
        bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
        void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
        inline string getPeerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


        // peerIpv6GatewayIp Field Functions 
        bool hasPeerIpv6GatewayIp() const { return this->peerIpv6GatewayIp_ != nullptr;};
        void deletePeerIpv6GatewayIp() { this->peerIpv6GatewayIp_ = nullptr;};
        inline string getPeerIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerIpv6GatewayIp_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setPeerIpv6GatewayIp(string peerIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(peerIpv6GatewayIp_, peerIpv6GatewayIp) };


        // peeringIpv6SubnetMask Field Functions 
        bool hasPeeringIpv6SubnetMask() const { return this->peeringIpv6SubnetMask_ != nullptr;};
        void deletePeeringIpv6SubnetMask() { this->peeringIpv6SubnetMask_ = nullptr;};
        inline string getPeeringIpv6SubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringIpv6SubnetMask_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setPeeringIpv6SubnetMask(string peeringIpv6SubnetMask) { DARABONBA_PTR_SET_VALUE(peeringIpv6SubnetMask_, peeringIpv6SubnetMask) };


        // peeringSubnetMask Field Functions 
        bool hasPeeringSubnetMask() const { return this->peeringSubnetMask_ != nullptr;};
        void deletePeeringSubnetMask() { this->peeringSubnetMask_ = nullptr;};
        inline string getPeeringSubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringSubnetMask_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setPeeringSubnetMask(string peeringSubnetMask) { DARABONBA_PTR_SET_VALUE(peeringSubnetMask_, peeringSubnetMask) };


        // recoveryTime Field Functions 
        bool hasRecoveryTime() const { return this->recoveryTime_ != nullptr;};
        void deleteRecoveryTime() { this->recoveryTime_ = nullptr;};
        inline string getRecoveryTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryTime_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setRecoveryTime(string recoveryTime) { DARABONBA_PTR_SET_VALUE(recoveryTime_, recoveryTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // terminationTime Field Functions 
        bool hasTerminationTime() const { return this->terminationTime_ != nullptr;};
        void deleteTerminationTime() { this->terminationTime_ = nullptr;};
        inline string getTerminationTime() const { DARABONBA_PTR_GET_DEFAULT(terminationTime_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setTerminationTime(string terminationTime) { DARABONBA_PTR_SET_VALUE(terminationTime_, terminationTime) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // vbrId Field Functions 
        bool hasVbrId() const { return this->vbrId_ != nullptr;};
        void deleteVbrId() { this->vbrId_ = nullptr;};
        inline string getVbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


        // vbrOwnerUid Field Functions 
        bool hasVbrOwnerUid() const { return this->vbrOwnerUid_ != nullptr;};
        void deleteVbrOwnerUid() { this->vbrOwnerUid_ = nullptr;};
        inline int64_t getVbrOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(vbrOwnerUid_, 0L) };
        inline VirtualBorderRouterForPhysicalConnectionType& setVbrOwnerUid(int64_t vbrOwnerUid) { DARABONBA_PTR_SET_VALUE(vbrOwnerUid_, vbrOwnerUid) };


        // vlanId Field Functions 
        bool hasVlanId() const { return this->vlanId_ != nullptr;};
        void deleteVlanId() { this->vlanId_ = nullptr;};
        inline int32_t getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, 0) };
        inline VirtualBorderRouterForPhysicalConnectionType& setVlanId(int32_t vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


      protected:
        // The time when the VBR was first activated.
        shared_ptr<string> activationTime_ {};
        // The bandwidth of the VBR that is associated with the Express Connect circuit. Unit: Mbit/s.
        shared_ptr<string> bandwidth_ {};
        // The status of the bandwidth. Valid values:
        // 
        // *   **Active**
        // *   **Inactive**
        shared_ptr<string> bandwidthStatus_ {};
        // The circuit code of the Express Connect circuit. The circuit code is provided by the connectivity provider.
        shared_ptr<string> circuitCode_ {};
        // The time when the VBR was created.
        shared_ptr<string> creationTime_ {};
        // The ID of the ECC instance.
        shared_ptr<string> eccId_ {};
        // Indicates whether IPv6 is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> enableIpv6_ {};
        // The IPv4 address of the gateway device on the Alibaba Cloud side.
        shared_ptr<string> localGatewayIp_ {};
        // The IPv6 address of the gateway device on the Alibaba Cloud side.
        shared_ptr<string> localIpv6GatewayIp_ {};
        // The status of the VBR associated with the Express Connect circuit. Valid values:
        // 
        // *   **Normal**
        // *   **FinancialLocked**
        shared_ptr<string> PConnVbrBussinessStatus_ {};
        // The billing method of the VBR. Valid values:
        // 
        // *   **PrePaid**: subscription. If you choose this billing method, make sure that your Apsara Stack account supports balance payments or credit payments.
        // *   **PostPaid**: pay-as-you-go.
        shared_ptr<string> PConnVbrChargeType_ {};
        // The time when the VBR associated with the Express Connect circuit expires.
        shared_ptr<string> PConnVbrExpireTime_ {};
        // The IPv4 address of the gateway device on the user side.
        shared_ptr<string> peerGatewayIp_ {};
        // The IPv6 address of the gateway device on the user side.
        // 
        // This parameter is required when you create a VBR for the owner of the Express Connect circuit. You can ignore this parameter when you create a VBR for another Alibaba Cloud account.
        shared_ptr<string> peerIpv6GatewayIp_ {};
        // The subnet mask for the IPv6 addresses of the gateway devices on the Alibaba Cloud side and on the user side.
        // 
        // The two IPv6 addresses must fall within the same subnet.
        shared_ptr<string> peeringIpv6SubnetMask_ {};
        // The subnet mask of the IPv4 addresses configured on the user side and Alibaba Cloud side.
        // 
        // The two IPv4 addresses must fall within the same subnet.
        shared_ptr<string> peeringSubnetMask_ {};
        // The last time when the status of the VBR changed from Terminated to Active.
        shared_ptr<string> recoveryTime_ {};
        // The status of the VBR. Valid values:
        // 
        // *   **unconfirmed**
        // *   **active**
        // *   **terminating**
        // *   **terminated**
        // *   **recovering**
        // *   **deleting**
        shared_ptr<string> status_ {};
        // The last time when the VBR was disabled.
        shared_ptr<string> terminationTime_ {};
        // The VBR type.
        shared_ptr<string> type_ {};
        // The VBR ID.
        shared_ptr<string> vbrId_ {};
        // The ID of the Alibaba Cloud account to which the VBR belongs.
        // 
        // If the owner of the VBR is the same as that of the Express Connect circuit, this parameter is empty.
        shared_ptr<int64_t> vbrOwnerUid_ {};
        // The VLAN ID of the VBR.
        shared_ptr<int32_t> vlanId_ {};
      };

      virtual bool empty() const override { return this->virtualBorderRouterForPhysicalConnectionType_ == nullptr; };
      // virtualBorderRouterForPhysicalConnectionType Field Functions 
      bool hasVirtualBorderRouterForPhysicalConnectionType() const { return this->virtualBorderRouterForPhysicalConnectionType_ != nullptr;};
      void deleteVirtualBorderRouterForPhysicalConnectionType() { this->virtualBorderRouterForPhysicalConnectionType_ = nullptr;};
      inline const vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType> & getVirtualBorderRouterForPhysicalConnectionType() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterForPhysicalConnectionType_, vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType>) };
      inline vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType> getVirtualBorderRouterForPhysicalConnectionType() { DARABONBA_PTR_GET(virtualBorderRouterForPhysicalConnectionType_, vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType>) };
      inline VirtualBorderRouterForPhysicalConnectionSet& setVirtualBorderRouterForPhysicalConnectionType(const vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType> & virtualBorderRouterForPhysicalConnectionType) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterForPhysicalConnectionType_, virtualBorderRouterForPhysicalConnectionType) };
      inline VirtualBorderRouterForPhysicalConnectionSet& setVirtualBorderRouterForPhysicalConnectionType(vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType> && virtualBorderRouterForPhysicalConnectionType) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterForPhysicalConnectionType_, virtualBorderRouterForPhysicalConnectionType) };


    protected:
      shared_ptr<vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType>> virtualBorderRouterForPhysicalConnectionType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->virtualBorderRouterForPhysicalConnectionSet_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // virtualBorderRouterForPhysicalConnectionSet Field Functions 
    bool hasVirtualBorderRouterForPhysicalConnectionSet() const { return this->virtualBorderRouterForPhysicalConnectionSet_ != nullptr;};
    void deleteVirtualBorderRouterForPhysicalConnectionSet() { this->virtualBorderRouterForPhysicalConnectionSet_ = nullptr;};
    inline const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet & getVirtualBorderRouterForPhysicalConnectionSet() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterForPhysicalConnectionSet_, DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet getVirtualBorderRouterForPhysicalConnectionSet() { DARABONBA_PTR_GET(virtualBorderRouterForPhysicalConnectionSet_, DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setVirtualBorderRouterForPhysicalConnectionSet(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet & virtualBorderRouterForPhysicalConnectionSet) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterForPhysicalConnectionSet_, virtualBorderRouterForPhysicalConnectionSet) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setVirtualBorderRouterForPhysicalConnectionSet(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet && virtualBorderRouterForPhysicalConnectionSet) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterForPhysicalConnectionSet_, virtualBorderRouterForPhysicalConnectionSet) };


  protected:
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about VBRs.
    shared_ptr<DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet> virtualBorderRouterForPhysicalConnectionSet_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
