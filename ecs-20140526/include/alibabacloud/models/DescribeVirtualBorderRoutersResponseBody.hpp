// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeVirtualBorderRoutersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VirtualBorderRouterSet, virtualBorderRouterSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VirtualBorderRouterSet, virtualBorderRouterSet_);
    };
    DescribeVirtualBorderRoutersResponseBody() = default ;
    DescribeVirtualBorderRoutersResponseBody(const DescribeVirtualBorderRoutersResponseBody &) = default ;
    DescribeVirtualBorderRoutersResponseBody(DescribeVirtualBorderRoutersResponseBody &&) = default ;
    DescribeVirtualBorderRoutersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersResponseBody() = default ;
    DescribeVirtualBorderRoutersResponseBody& operator=(const DescribeVirtualBorderRoutersResponseBody &) = default ;
    DescribeVirtualBorderRoutersResponseBody& operator=(DescribeVirtualBorderRoutersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VirtualBorderRouterSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VirtualBorderRouterSet& obj) { 
        DARABONBA_PTR_TO_JSON(VirtualBorderRouterType, virtualBorderRouterType_);
      };
      friend void from_json(const Darabonba::Json& j, VirtualBorderRouterSet& obj) { 
        DARABONBA_PTR_FROM_JSON(VirtualBorderRouterType, virtualBorderRouterType_);
      };
      VirtualBorderRouterSet() = default ;
      VirtualBorderRouterSet(const VirtualBorderRouterSet &) = default ;
      VirtualBorderRouterSet(VirtualBorderRouterSet &&) = default ;
      VirtualBorderRouterSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VirtualBorderRouterSet() = default ;
      VirtualBorderRouterSet& operator=(const VirtualBorderRouterSet &) = default ;
      VirtualBorderRouterSet& operator=(VirtualBorderRouterSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VirtualBorderRouterType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VirtualBorderRouterType& obj) { 
          DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
          DARABONBA_PTR_TO_JSON(ActivationTime, activationTime_);
          DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
          DARABONBA_PTR_TO_JSON(PeeringSubnetMask, peeringSubnetMask_);
          DARABONBA_PTR_TO_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
          DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
          DARABONBA_PTR_TO_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
          DARABONBA_PTR_TO_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
          DARABONBA_PTR_TO_JSON(RecoveryTime, recoveryTime_);
          DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TerminationTime, terminationTime_);
          DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
          DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
          DARABONBA_PTR_TO_JSON(VlanInterfaceId, vlanInterfaceId_);
        };
        friend void from_json(const Darabonba::Json& j, VirtualBorderRouterType& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
          DARABONBA_PTR_FROM_JSON(ActivationTime, activationTime_);
          DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
          DARABONBA_PTR_FROM_JSON(PeeringSubnetMask, peeringSubnetMask_);
          DARABONBA_PTR_FROM_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
          DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
          DARABONBA_PTR_FROM_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
          DARABONBA_PTR_FROM_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
          DARABONBA_PTR_FROM_JSON(RecoveryTime, recoveryTime_);
          DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TerminationTime, terminationTime_);
          DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
          DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
          DARABONBA_PTR_FROM_JSON(VlanInterfaceId, vlanInterfaceId_);
        };
        VirtualBorderRouterType() = default ;
        VirtualBorderRouterType(const VirtualBorderRouterType &) = default ;
        VirtualBorderRouterType(VirtualBorderRouterType &&) = default ;
        VirtualBorderRouterType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VirtualBorderRouterType() = default ;
        VirtualBorderRouterType& operator=(const VirtualBorderRouterType &) = default ;
        VirtualBorderRouterType& operator=(VirtualBorderRouterType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->activationTime_ == nullptr && this->circuitCode_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->localGatewayIp_ == nullptr
        && this->name_ == nullptr && this->peerGatewayIp_ == nullptr && this->peeringSubnetMask_ == nullptr && this->physicalConnectionBusinessStatus_ == nullptr && this->physicalConnectionId_ == nullptr
        && this->physicalConnectionOwnerUid_ == nullptr && this->physicalConnectionStatus_ == nullptr && this->recoveryTime_ == nullptr && this->routeTableId_ == nullptr && this->status_ == nullptr
        && this->terminationTime_ == nullptr && this->vbrId_ == nullptr && this->vlanId_ == nullptr && this->vlanInterfaceId_ == nullptr; };
        // accessPointId Field Functions 
        bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
        void deleteAccessPointId() { this->accessPointId_ = nullptr;};
        inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
        inline VirtualBorderRouterType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


        // activationTime Field Functions 
        bool hasActivationTime() const { return this->activationTime_ != nullptr;};
        void deleteActivationTime() { this->activationTime_ = nullptr;};
        inline string getActivationTime() const { DARABONBA_PTR_GET_DEFAULT(activationTime_, "") };
        inline VirtualBorderRouterType& setActivationTime(string activationTime) { DARABONBA_PTR_SET_VALUE(activationTime_, activationTime) };


        // circuitCode Field Functions 
        bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
        void deleteCircuitCode() { this->circuitCode_ = nullptr;};
        inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
        inline VirtualBorderRouterType& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline VirtualBorderRouterType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VirtualBorderRouterType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // localGatewayIp Field Functions 
        bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
        void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
        inline string getLocalGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
        inline VirtualBorderRouterType& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VirtualBorderRouterType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // peerGatewayIp Field Functions 
        bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
        void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
        inline string getPeerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
        inline VirtualBorderRouterType& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


        // peeringSubnetMask Field Functions 
        bool hasPeeringSubnetMask() const { return this->peeringSubnetMask_ != nullptr;};
        void deletePeeringSubnetMask() { this->peeringSubnetMask_ = nullptr;};
        inline string getPeeringSubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringSubnetMask_, "") };
        inline VirtualBorderRouterType& setPeeringSubnetMask(string peeringSubnetMask) { DARABONBA_PTR_SET_VALUE(peeringSubnetMask_, peeringSubnetMask) };


        // physicalConnectionBusinessStatus Field Functions 
        bool hasPhysicalConnectionBusinessStatus() const { return this->physicalConnectionBusinessStatus_ != nullptr;};
        void deletePhysicalConnectionBusinessStatus() { this->physicalConnectionBusinessStatus_ = nullptr;};
        inline string getPhysicalConnectionBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionBusinessStatus_, "") };
        inline VirtualBorderRouterType& setPhysicalConnectionBusinessStatus(string physicalConnectionBusinessStatus) { DARABONBA_PTR_SET_VALUE(physicalConnectionBusinessStatus_, physicalConnectionBusinessStatus) };


        // physicalConnectionId Field Functions 
        bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
        void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
        inline string getPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
        inline VirtualBorderRouterType& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


        // physicalConnectionOwnerUid Field Functions 
        bool hasPhysicalConnectionOwnerUid() const { return this->physicalConnectionOwnerUid_ != nullptr;};
        void deletePhysicalConnectionOwnerUid() { this->physicalConnectionOwnerUid_ = nullptr;};
        inline string getPhysicalConnectionOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionOwnerUid_, "") };
        inline VirtualBorderRouterType& setPhysicalConnectionOwnerUid(string physicalConnectionOwnerUid) { DARABONBA_PTR_SET_VALUE(physicalConnectionOwnerUid_, physicalConnectionOwnerUid) };


        // physicalConnectionStatus Field Functions 
        bool hasPhysicalConnectionStatus() const { return this->physicalConnectionStatus_ != nullptr;};
        void deletePhysicalConnectionStatus() { this->physicalConnectionStatus_ = nullptr;};
        inline string getPhysicalConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionStatus_, "") };
        inline VirtualBorderRouterType& setPhysicalConnectionStatus(string physicalConnectionStatus) { DARABONBA_PTR_SET_VALUE(physicalConnectionStatus_, physicalConnectionStatus) };


        // recoveryTime Field Functions 
        bool hasRecoveryTime() const { return this->recoveryTime_ != nullptr;};
        void deleteRecoveryTime() { this->recoveryTime_ = nullptr;};
        inline string getRecoveryTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryTime_, "") };
        inline VirtualBorderRouterType& setRecoveryTime(string recoveryTime) { DARABONBA_PTR_SET_VALUE(recoveryTime_, recoveryTime) };


        // routeTableId Field Functions 
        bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
        void deleteRouteTableId() { this->routeTableId_ = nullptr;};
        inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
        inline VirtualBorderRouterType& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VirtualBorderRouterType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // terminationTime Field Functions 
        bool hasTerminationTime() const { return this->terminationTime_ != nullptr;};
        void deleteTerminationTime() { this->terminationTime_ = nullptr;};
        inline string getTerminationTime() const { DARABONBA_PTR_GET_DEFAULT(terminationTime_, "") };
        inline VirtualBorderRouterType& setTerminationTime(string terminationTime) { DARABONBA_PTR_SET_VALUE(terminationTime_, terminationTime) };


        // vbrId Field Functions 
        bool hasVbrId() const { return this->vbrId_ != nullptr;};
        void deleteVbrId() { this->vbrId_ = nullptr;};
        inline string getVbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
        inline VirtualBorderRouterType& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


        // vlanId Field Functions 
        bool hasVlanId() const { return this->vlanId_ != nullptr;};
        void deleteVlanId() { this->vlanId_ = nullptr;};
        inline int32_t getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, 0) };
        inline VirtualBorderRouterType& setVlanId(int32_t vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


        // vlanInterfaceId Field Functions 
        bool hasVlanInterfaceId() const { return this->vlanInterfaceId_ != nullptr;};
        void deleteVlanInterfaceId() { this->vlanInterfaceId_ = nullptr;};
        inline string getVlanInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(vlanInterfaceId_, "") };
        inline VirtualBorderRouterType& setVlanInterfaceId(string vlanInterfaceId) { DARABONBA_PTR_SET_VALUE(vlanInterfaceId_, vlanInterfaceId) };


      protected:
        shared_ptr<string> accessPointId_ {};
        shared_ptr<string> activationTime_ {};
        shared_ptr<string> circuitCode_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> localGatewayIp_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> peerGatewayIp_ {};
        shared_ptr<string> peeringSubnetMask_ {};
        shared_ptr<string> physicalConnectionBusinessStatus_ {};
        shared_ptr<string> physicalConnectionId_ {};
        shared_ptr<string> physicalConnectionOwnerUid_ {};
        shared_ptr<string> physicalConnectionStatus_ {};
        shared_ptr<string> recoveryTime_ {};
        shared_ptr<string> routeTableId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> terminationTime_ {};
        shared_ptr<string> vbrId_ {};
        shared_ptr<int32_t> vlanId_ {};
        shared_ptr<string> vlanInterfaceId_ {};
      };

      virtual bool empty() const override { return this->virtualBorderRouterType_ == nullptr; };
      // virtualBorderRouterType Field Functions 
      bool hasVirtualBorderRouterType() const { return this->virtualBorderRouterType_ != nullptr;};
      void deleteVirtualBorderRouterType() { this->virtualBorderRouterType_ = nullptr;};
      inline const vector<VirtualBorderRouterSet::VirtualBorderRouterType> & getVirtualBorderRouterType() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterType_, vector<VirtualBorderRouterSet::VirtualBorderRouterType>) };
      inline vector<VirtualBorderRouterSet::VirtualBorderRouterType> getVirtualBorderRouterType() { DARABONBA_PTR_GET(virtualBorderRouterType_, vector<VirtualBorderRouterSet::VirtualBorderRouterType>) };
      inline VirtualBorderRouterSet& setVirtualBorderRouterType(const vector<VirtualBorderRouterSet::VirtualBorderRouterType> & virtualBorderRouterType) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterType_, virtualBorderRouterType) };
      inline VirtualBorderRouterSet& setVirtualBorderRouterType(vector<VirtualBorderRouterSet::VirtualBorderRouterType> && virtualBorderRouterType) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterType_, virtualBorderRouterType) };


    protected:
      shared_ptr<vector<VirtualBorderRouterSet::VirtualBorderRouterType>> virtualBorderRouterType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->virtualBorderRouterSet_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVirtualBorderRoutersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVirtualBorderRoutersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVirtualBorderRoutersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVirtualBorderRoutersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // virtualBorderRouterSet Field Functions 
    bool hasVirtualBorderRouterSet() const { return this->virtualBorderRouterSet_ != nullptr;};
    void deleteVirtualBorderRouterSet() { this->virtualBorderRouterSet_ = nullptr;};
    inline const DescribeVirtualBorderRoutersResponseBody::VirtualBorderRouterSet & getVirtualBorderRouterSet() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterSet_, DescribeVirtualBorderRoutersResponseBody::VirtualBorderRouterSet) };
    inline DescribeVirtualBorderRoutersResponseBody::VirtualBorderRouterSet getVirtualBorderRouterSet() { DARABONBA_PTR_GET(virtualBorderRouterSet_, DescribeVirtualBorderRoutersResponseBody::VirtualBorderRouterSet) };
    inline DescribeVirtualBorderRoutersResponseBody& setVirtualBorderRouterSet(const DescribeVirtualBorderRoutersResponseBody::VirtualBorderRouterSet & virtualBorderRouterSet) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterSet_, virtualBorderRouterSet) };
    inline DescribeVirtualBorderRoutersResponseBody& setVirtualBorderRouterSet(DescribeVirtualBorderRoutersResponseBody::VirtualBorderRouterSet && virtualBorderRouterSet) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterSet_, virtualBorderRouterSet) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<DescribeVirtualBorderRoutersResponseBody::VirtualBorderRouterSet> virtualBorderRouterSet_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
