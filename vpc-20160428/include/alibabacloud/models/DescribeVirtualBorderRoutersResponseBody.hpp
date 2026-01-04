// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODY_HPP_
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
          DARABONBA_PTR_TO_JSON(AssociatedCens, associatedCens_);
          DARABONBA_PTR_TO_JSON(AssociatedPhysicalConnections, associatedPhysicalConnections_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
          DARABONBA_PTR_TO_JSON(CloudBoxInstanceId, cloudBoxInstanceId_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DetectMultiplier, detectMultiplier_);
          DARABONBA_PTR_TO_JSON(EccId, eccId_);
          DARABONBA_PTR_TO_JSON(EcrAttatchStatus, ecrAttatchStatus_);
          DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
          DARABONBA_PTR_TO_JSON(EcrOwnerId, ecrOwnerId_);
          DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
          DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
          DARABONBA_PTR_TO_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
          DARABONBA_PTR_TO_JSON(MinRxInterval, minRxInterval_);
          DARABONBA_PTR_TO_JSON(MinTxInterval, minTxInterval_);
          DARABONBA_PTR_TO_JSON(Mtu, mtu_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PConnVbrChargeType, PConnVbrChargeType_);
          DARABONBA_PTR_TO_JSON(PConnVbrExpireTime, PConnVbrExpireTime_);
          DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
          DARABONBA_PTR_TO_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
          DARABONBA_PTR_TO_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
          DARABONBA_PTR_TO_JSON(PeeringSubnetMask, peeringSubnetMask_);
          DARABONBA_PTR_TO_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
          DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
          DARABONBA_PTR_TO_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
          DARABONBA_PTR_TO_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
          DARABONBA_PTR_TO_JSON(RecoveryTime, recoveryTime_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_TO_JSON(SitelinkEnable, sitelinkEnable_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TerminationTime, terminationTime_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
          DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
          DARABONBA_PTR_TO_JSON(VlanInterfaceId, vlanInterfaceId_);
        };
        friend void from_json(const Darabonba::Json& j, VirtualBorderRouterType& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
          DARABONBA_PTR_FROM_JSON(ActivationTime, activationTime_);
          DARABONBA_PTR_FROM_JSON(AssociatedCens, associatedCens_);
          DARABONBA_PTR_FROM_JSON(AssociatedPhysicalConnections, associatedPhysicalConnections_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
          DARABONBA_PTR_FROM_JSON(CloudBoxInstanceId, cloudBoxInstanceId_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DetectMultiplier, detectMultiplier_);
          DARABONBA_PTR_FROM_JSON(EccId, eccId_);
          DARABONBA_PTR_FROM_JSON(EcrAttatchStatus, ecrAttatchStatus_);
          DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
          DARABONBA_PTR_FROM_JSON(EcrOwnerId, ecrOwnerId_);
          DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
          DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
          DARABONBA_PTR_FROM_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
          DARABONBA_PTR_FROM_JSON(MinRxInterval, minRxInterval_);
          DARABONBA_PTR_FROM_JSON(MinTxInterval, minTxInterval_);
          DARABONBA_PTR_FROM_JSON(Mtu, mtu_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PConnVbrChargeType, PConnVbrChargeType_);
          DARABONBA_PTR_FROM_JSON(PConnVbrExpireTime, PConnVbrExpireTime_);
          DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
          DARABONBA_PTR_FROM_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
          DARABONBA_PTR_FROM_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
          DARABONBA_PTR_FROM_JSON(PeeringSubnetMask, peeringSubnetMask_);
          DARABONBA_PTR_FROM_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
          DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
          DARABONBA_PTR_FROM_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
          DARABONBA_PTR_FROM_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
          DARABONBA_PTR_FROM_JSON(RecoveryTime, recoveryTime_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_FROM_JSON(SitelinkEnable, sitelinkEnable_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TerminationTime, terminationTime_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tags, tags_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tags, tags_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TagsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagsItem& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagsItem() = default ;
            TagsItem(const TagsItem &) = default ;
            TagsItem(TagsItem &&) = default ;
            TagsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagsItem() = default ;
            TagsItem& operator=(const TagsItem &) = default ;
            TagsItem& operator=(TagsItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline TagsItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagsItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key of the resource.
            shared_ptr<string> key_ {};
            // The tag value of the resource.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tags_ == nullptr; };
          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const vector<Tags::TagsItem> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tags::TagsItem>) };
          inline vector<Tags::TagsItem> getTags() { DARABONBA_PTR_GET(tags_, vector<Tags::TagsItem>) };
          inline Tags& setTags(const vector<Tags::TagsItem> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline Tags& setTags(vector<Tags::TagsItem> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        protected:
          shared_ptr<vector<Tags::TagsItem>> tags_ {};
        };

        class AssociatedPhysicalConnections : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssociatedPhysicalConnections& obj) { 
            DARABONBA_PTR_TO_JSON(AssociatedPhysicalConnection, associatedPhysicalConnection_);
          };
          friend void from_json(const Darabonba::Json& j, AssociatedPhysicalConnections& obj) { 
            DARABONBA_PTR_FROM_JSON(AssociatedPhysicalConnection, associatedPhysicalConnection_);
          };
          AssociatedPhysicalConnections() = default ;
          AssociatedPhysicalConnections(const AssociatedPhysicalConnections &) = default ;
          AssociatedPhysicalConnections(AssociatedPhysicalConnections &&) = default ;
          AssociatedPhysicalConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssociatedPhysicalConnections() = default ;
          AssociatedPhysicalConnections& operator=(const AssociatedPhysicalConnections &) = default ;
          AssociatedPhysicalConnections& operator=(AssociatedPhysicalConnections &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AssociatedPhysicalConnection : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AssociatedPhysicalConnection& obj) { 
              DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
              DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
              DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
              DARABONBA_PTR_TO_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
              DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
              DARABONBA_PTR_TO_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
              DARABONBA_PTR_TO_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
              DARABONBA_PTR_TO_JSON(PeeringSubnetMask, peeringSubnetMask_);
              DARABONBA_PTR_TO_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
              DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
              DARABONBA_PTR_TO_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
              DARABONBA_PTR_TO_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
              DARABONBA_PTR_TO_JSON(VlanInterfaceId, vlanInterfaceId_);
            };
            friend void from_json(const Darabonba::Json& j, AssociatedPhysicalConnection& obj) { 
              DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
              DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
              DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
              DARABONBA_PTR_FROM_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
              DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
              DARABONBA_PTR_FROM_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
              DARABONBA_PTR_FROM_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
              DARABONBA_PTR_FROM_JSON(PeeringSubnetMask, peeringSubnetMask_);
              DARABONBA_PTR_FROM_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
              DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
              DARABONBA_PTR_FROM_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
              DARABONBA_PTR_FROM_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
              DARABONBA_PTR_FROM_JSON(VlanInterfaceId, vlanInterfaceId_);
            };
            AssociatedPhysicalConnection() = default ;
            AssociatedPhysicalConnection(const AssociatedPhysicalConnection &) = default ;
            AssociatedPhysicalConnection(AssociatedPhysicalConnection &&) = default ;
            AssociatedPhysicalConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AssociatedPhysicalConnection() = default ;
            AssociatedPhysicalConnection& operator=(const AssociatedPhysicalConnection &) = default ;
            AssociatedPhysicalConnection& operator=(AssociatedPhysicalConnection &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->circuitCode_ == nullptr
        && this->enableIpv6_ == nullptr && this->localGatewayIp_ == nullptr && this->localIpv6GatewayIp_ == nullptr && this->peerGatewayIp_ == nullptr && this->peerIpv6GatewayIp_ == nullptr
        && this->peeringIpv6SubnetMask_ == nullptr && this->peeringSubnetMask_ == nullptr && this->physicalConnectionBusinessStatus_ == nullptr && this->physicalConnectionId_ == nullptr && this->physicalConnectionOwnerUid_ == nullptr
        && this->physicalConnectionStatus_ == nullptr && this->status_ == nullptr && this->vlanId_ == nullptr && this->vlanInterfaceId_ == nullptr; };
            // circuitCode Field Functions 
            bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
            void deleteCircuitCode() { this->circuitCode_ = nullptr;};
            inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
            inline AssociatedPhysicalConnection& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


            // enableIpv6 Field Functions 
            bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
            void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
            inline bool getEnableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
            inline AssociatedPhysicalConnection& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


            // localGatewayIp Field Functions 
            bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
            void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
            inline string getLocalGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
            inline AssociatedPhysicalConnection& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


            // localIpv6GatewayIp Field Functions 
            bool hasLocalIpv6GatewayIp() const { return this->localIpv6GatewayIp_ != nullptr;};
            void deleteLocalIpv6GatewayIp() { this->localIpv6GatewayIp_ = nullptr;};
            inline string getLocalIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localIpv6GatewayIp_, "") };
            inline AssociatedPhysicalConnection& setLocalIpv6GatewayIp(string localIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(localIpv6GatewayIp_, localIpv6GatewayIp) };


            // peerGatewayIp Field Functions 
            bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
            void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
            inline string getPeerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
            inline AssociatedPhysicalConnection& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


            // peerIpv6GatewayIp Field Functions 
            bool hasPeerIpv6GatewayIp() const { return this->peerIpv6GatewayIp_ != nullptr;};
            void deletePeerIpv6GatewayIp() { this->peerIpv6GatewayIp_ = nullptr;};
            inline string getPeerIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerIpv6GatewayIp_, "") };
            inline AssociatedPhysicalConnection& setPeerIpv6GatewayIp(string peerIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(peerIpv6GatewayIp_, peerIpv6GatewayIp) };


            // peeringIpv6SubnetMask Field Functions 
            bool hasPeeringIpv6SubnetMask() const { return this->peeringIpv6SubnetMask_ != nullptr;};
            void deletePeeringIpv6SubnetMask() { this->peeringIpv6SubnetMask_ = nullptr;};
            inline string getPeeringIpv6SubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringIpv6SubnetMask_, "") };
            inline AssociatedPhysicalConnection& setPeeringIpv6SubnetMask(string peeringIpv6SubnetMask) { DARABONBA_PTR_SET_VALUE(peeringIpv6SubnetMask_, peeringIpv6SubnetMask) };


            // peeringSubnetMask Field Functions 
            bool hasPeeringSubnetMask() const { return this->peeringSubnetMask_ != nullptr;};
            void deletePeeringSubnetMask() { this->peeringSubnetMask_ = nullptr;};
            inline string getPeeringSubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringSubnetMask_, "") };
            inline AssociatedPhysicalConnection& setPeeringSubnetMask(string peeringSubnetMask) { DARABONBA_PTR_SET_VALUE(peeringSubnetMask_, peeringSubnetMask) };


            // physicalConnectionBusinessStatus Field Functions 
            bool hasPhysicalConnectionBusinessStatus() const { return this->physicalConnectionBusinessStatus_ != nullptr;};
            void deletePhysicalConnectionBusinessStatus() { this->physicalConnectionBusinessStatus_ = nullptr;};
            inline string getPhysicalConnectionBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionBusinessStatus_, "") };
            inline AssociatedPhysicalConnection& setPhysicalConnectionBusinessStatus(string physicalConnectionBusinessStatus) { DARABONBA_PTR_SET_VALUE(physicalConnectionBusinessStatus_, physicalConnectionBusinessStatus) };


            // physicalConnectionId Field Functions 
            bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
            void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
            inline string getPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
            inline AssociatedPhysicalConnection& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


            // physicalConnectionOwnerUid Field Functions 
            bool hasPhysicalConnectionOwnerUid() const { return this->physicalConnectionOwnerUid_ != nullptr;};
            void deletePhysicalConnectionOwnerUid() { this->physicalConnectionOwnerUid_ = nullptr;};
            inline string getPhysicalConnectionOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionOwnerUid_, "") };
            inline AssociatedPhysicalConnection& setPhysicalConnectionOwnerUid(string physicalConnectionOwnerUid) { DARABONBA_PTR_SET_VALUE(physicalConnectionOwnerUid_, physicalConnectionOwnerUid) };


            // physicalConnectionStatus Field Functions 
            bool hasPhysicalConnectionStatus() const { return this->physicalConnectionStatus_ != nullptr;};
            void deletePhysicalConnectionStatus() { this->physicalConnectionStatus_ = nullptr;};
            inline string getPhysicalConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionStatus_, "") };
            inline AssociatedPhysicalConnection& setPhysicalConnectionStatus(string physicalConnectionStatus) { DARABONBA_PTR_SET_VALUE(physicalConnectionStatus_, physicalConnectionStatus) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline AssociatedPhysicalConnection& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // vlanId Field Functions 
            bool hasVlanId() const { return this->vlanId_ != nullptr;};
            void deleteVlanId() { this->vlanId_ = nullptr;};
            inline string getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
            inline AssociatedPhysicalConnection& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


            // vlanInterfaceId Field Functions 
            bool hasVlanInterfaceId() const { return this->vlanInterfaceId_ != nullptr;};
            void deleteVlanInterfaceId() { this->vlanInterfaceId_ = nullptr;};
            inline string getVlanInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(vlanInterfaceId_, "") };
            inline AssociatedPhysicalConnection& setVlanInterfaceId(string vlanInterfaceId) { DARABONBA_PTR_SET_VALUE(vlanInterfaceId_, vlanInterfaceId) };


          protected:
            // The circuit code of the Express Connect circuit, which is provided by the connectivity provider.
            shared_ptr<string> circuitCode_ {};
            // Indicates whether IPv6 is enabled. Valid values:
            // 
            // *   **true**
            // *   **false**
            shared_ptr<bool> enableIpv6_ {};
            // The IPv4 address of the VBR on the Alibaba Cloud side.
            shared_ptr<string> localGatewayIp_ {};
            // The IPv6 address of the VBR on the Alibaba Cloud side.
            shared_ptr<string> localIpv6GatewayIp_ {};
            // The IPv4 address of the VBR on the user side.
            shared_ptr<string> peerGatewayIp_ {};
            // The IPv6 address of the VBR on the user side.
            shared_ptr<string> peerIpv6GatewayIp_ {};
            // The subnet mask for the IPv6 addresses on the user side and on the Alibaba Cloud side.
            // 
            // Both IPv6 addresses must belong to the same subnet.
            shared_ptr<string> peeringIpv6SubnetMask_ {};
            // The subnet mask for the IPv4 addresses of the VBR on the user side and on the Alibaba Cloud side.
            // 
            // Both IPv4 addresses must belong to the same subnet.
            shared_ptr<string> peeringSubnetMask_ {};
            // The business status of the Express Connect circuit. Valid values:
            // 
            // *   **Normal:** The Express Connect circuit is running as normal.
            // *   **FinancialLocked:** The Express Connect circuit is locked due to overdue payments.
            shared_ptr<string> physicalConnectionBusinessStatus_ {};
            // The ID of the Express Connect circuit.
            shared_ptr<string> physicalConnectionId_ {};
            // The ID of the account to which the Express Connect circuit belongs.
            shared_ptr<string> physicalConnectionOwnerUid_ {};
            // The status of the Express Connect circuit. Valid values:
            // 
            // *   **Initial:** The application is under review.
            // *   **Approved**: The application is approved.
            // *   **Allocating**: The system is allocating resources.
            // *   **Allocated**: The Express Connect circuit is under construction.
            // *   **Confirmed**: The Express Connect circuit is to be confirmed.
            // *   **Enabled**: The Express Connect circuit is enabled.
            // *   **Rejected**: The application is rejected.
            // *   **Canceled**: The application is canceled.
            // *   **Allocation Failed:** The system failed to allocate resources.
            // *   **Terminated:** The Express Connect circuit is disabled.
            shared_ptr<string> physicalConnectionStatus_ {};
            // The status of the VBR. Valid values:
            // 
            // *   **unconfirmed**
            // *   **active:**
            // *   **terminating**
            // *   **terminated**
            // *   **recovering**
            // *   **deleting:**
            shared_ptr<string> status_ {};
            // The VLAN ID of the VBR.
            shared_ptr<string> vlanId_ {};
            // The ID of the VBR interface, which can be used as a next hop of a VBR route.
            shared_ptr<string> vlanInterfaceId_ {};
          };

          virtual bool empty() const override { return this->associatedPhysicalConnection_ == nullptr; };
          // associatedPhysicalConnection Field Functions 
          bool hasAssociatedPhysicalConnection() const { return this->associatedPhysicalConnection_ != nullptr;};
          void deleteAssociatedPhysicalConnection() { this->associatedPhysicalConnection_ = nullptr;};
          inline const vector<AssociatedPhysicalConnections::AssociatedPhysicalConnection> & getAssociatedPhysicalConnection() const { DARABONBA_PTR_GET_CONST(associatedPhysicalConnection_, vector<AssociatedPhysicalConnections::AssociatedPhysicalConnection>) };
          inline vector<AssociatedPhysicalConnections::AssociatedPhysicalConnection> getAssociatedPhysicalConnection() { DARABONBA_PTR_GET(associatedPhysicalConnection_, vector<AssociatedPhysicalConnections::AssociatedPhysicalConnection>) };
          inline AssociatedPhysicalConnections& setAssociatedPhysicalConnection(const vector<AssociatedPhysicalConnections::AssociatedPhysicalConnection> & associatedPhysicalConnection) { DARABONBA_PTR_SET_VALUE(associatedPhysicalConnection_, associatedPhysicalConnection) };
          inline AssociatedPhysicalConnections& setAssociatedPhysicalConnection(vector<AssociatedPhysicalConnections::AssociatedPhysicalConnection> && associatedPhysicalConnection) { DARABONBA_PTR_SET_RVALUE(associatedPhysicalConnection_, associatedPhysicalConnection) };


        protected:
          shared_ptr<vector<AssociatedPhysicalConnections::AssociatedPhysicalConnection>> associatedPhysicalConnection_ {};
        };

        class AssociatedCens : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssociatedCens& obj) { 
            DARABONBA_PTR_TO_JSON(AssociatedCen, associatedCen_);
          };
          friend void from_json(const Darabonba::Json& j, AssociatedCens& obj) { 
            DARABONBA_PTR_FROM_JSON(AssociatedCen, associatedCen_);
          };
          AssociatedCens() = default ;
          AssociatedCens(const AssociatedCens &) = default ;
          AssociatedCens(AssociatedCens &&) = default ;
          AssociatedCens(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssociatedCens() = default ;
          AssociatedCens& operator=(const AssociatedCens &) = default ;
          AssociatedCens& operator=(AssociatedCens &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AssociatedCen : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AssociatedCen& obj) { 
              DARABONBA_PTR_TO_JSON(CenId, cenId_);
              DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
              DARABONBA_PTR_TO_JSON(CenStatus, cenStatus_);
            };
            friend void from_json(const Darabonba::Json& j, AssociatedCen& obj) { 
              DARABONBA_PTR_FROM_JSON(CenId, cenId_);
              DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
              DARABONBA_PTR_FROM_JSON(CenStatus, cenStatus_);
            };
            AssociatedCen() = default ;
            AssociatedCen(const AssociatedCen &) = default ;
            AssociatedCen(AssociatedCen &&) = default ;
            AssociatedCen(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AssociatedCen() = default ;
            AssociatedCen& operator=(const AssociatedCen &) = default ;
            AssociatedCen& operator=(AssociatedCen &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cenId_ == nullptr
        && this->cenOwnerId_ == nullptr && this->cenStatus_ == nullptr; };
            // cenId Field Functions 
            bool hasCenId() const { return this->cenId_ != nullptr;};
            void deleteCenId() { this->cenId_ = nullptr;};
            inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
            inline AssociatedCen& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


            // cenOwnerId Field Functions 
            bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
            void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
            inline int64_t getCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
            inline AssociatedCen& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


            // cenStatus Field Functions 
            bool hasCenStatus() const { return this->cenStatus_ != nullptr;};
            void deleteCenStatus() { this->cenStatus_ = nullptr;};
            inline string getCenStatus() const { DARABONBA_PTR_GET_DEFAULT(cenStatus_, "") };
            inline AssociatedCen& setCenStatus(string cenStatus) { DARABONBA_PTR_SET_VALUE(cenStatus_, cenStatus) };


          protected:
            // The CEN instance ID.
            shared_ptr<string> cenId_ {};
            // The ID of the account to which the CEN instance belongs.
            shared_ptr<int64_t> cenOwnerId_ {};
            // The status of the CEN instance. Valid values:
            // 
            // *   **Attached**
            // *   **Attaching**
            // *   **Detached**
            // *   **Detaching**
            // *   If no value is returned, the VBR is not attached to a CEN instance.
            shared_ptr<string> cenStatus_ {};
          };

          virtual bool empty() const override { return this->associatedCen_ == nullptr; };
          // associatedCen Field Functions 
          bool hasAssociatedCen() const { return this->associatedCen_ != nullptr;};
          void deleteAssociatedCen() { this->associatedCen_ = nullptr;};
          inline const vector<AssociatedCens::AssociatedCen> & getAssociatedCen() const { DARABONBA_PTR_GET_CONST(associatedCen_, vector<AssociatedCens::AssociatedCen>) };
          inline vector<AssociatedCens::AssociatedCen> getAssociatedCen() { DARABONBA_PTR_GET(associatedCen_, vector<AssociatedCens::AssociatedCen>) };
          inline AssociatedCens& setAssociatedCen(const vector<AssociatedCens::AssociatedCen> & associatedCen) { DARABONBA_PTR_SET_VALUE(associatedCen_, associatedCen) };
          inline AssociatedCens& setAssociatedCen(vector<AssociatedCens::AssociatedCen> && associatedCen) { DARABONBA_PTR_SET_RVALUE(associatedCen_, associatedCen) };


        protected:
          shared_ptr<vector<AssociatedCens::AssociatedCen>> associatedCen_ {};
        };

        virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->activationTime_ == nullptr && this->associatedCens_ == nullptr && this->associatedPhysicalConnections_ == nullptr && this->bandwidth_ == nullptr && this->circuitCode_ == nullptr
        && this->cloudBoxInstanceId_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->detectMultiplier_ == nullptr && this->eccId_ == nullptr
        && this->ecrAttatchStatus_ == nullptr && this->ecrId_ == nullptr && this->ecrOwnerId_ == nullptr && this->enableIpv6_ == nullptr && this->localGatewayIp_ == nullptr
        && this->localIpv6GatewayIp_ == nullptr && this->minRxInterval_ == nullptr && this->minTxInterval_ == nullptr && this->mtu_ == nullptr && this->name_ == nullptr
        && this->PConnVbrChargeType_ == nullptr && this->PConnVbrExpireTime_ == nullptr && this->peerGatewayIp_ == nullptr && this->peerIpv6GatewayIp_ == nullptr && this->peeringIpv6SubnetMask_ == nullptr
        && this->peeringSubnetMask_ == nullptr && this->physicalConnectionBusinessStatus_ == nullptr && this->physicalConnectionId_ == nullptr && this->physicalConnectionOwnerUid_ == nullptr && this->physicalConnectionStatus_ == nullptr
        && this->recoveryTime_ == nullptr && this->resourceGroupId_ == nullptr && this->routeTableId_ == nullptr && this->sitelinkEnable_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->terminationTime_ == nullptr && this->type_ == nullptr && this->vbrId_ == nullptr && this->vlanId_ == nullptr
        && this->vlanInterfaceId_ == nullptr; };
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


        // associatedCens Field Functions 
        bool hasAssociatedCens() const { return this->associatedCens_ != nullptr;};
        void deleteAssociatedCens() { this->associatedCens_ = nullptr;};
        inline const VirtualBorderRouterType::AssociatedCens & getAssociatedCens() const { DARABONBA_PTR_GET_CONST(associatedCens_, VirtualBorderRouterType::AssociatedCens) };
        inline VirtualBorderRouterType::AssociatedCens getAssociatedCens() { DARABONBA_PTR_GET(associatedCens_, VirtualBorderRouterType::AssociatedCens) };
        inline VirtualBorderRouterType& setAssociatedCens(const VirtualBorderRouterType::AssociatedCens & associatedCens) { DARABONBA_PTR_SET_VALUE(associatedCens_, associatedCens) };
        inline VirtualBorderRouterType& setAssociatedCens(VirtualBorderRouterType::AssociatedCens && associatedCens) { DARABONBA_PTR_SET_RVALUE(associatedCens_, associatedCens) };


        // associatedPhysicalConnections Field Functions 
        bool hasAssociatedPhysicalConnections() const { return this->associatedPhysicalConnections_ != nullptr;};
        void deleteAssociatedPhysicalConnections() { this->associatedPhysicalConnections_ = nullptr;};
        inline const VirtualBorderRouterType::AssociatedPhysicalConnections & getAssociatedPhysicalConnections() const { DARABONBA_PTR_GET_CONST(associatedPhysicalConnections_, VirtualBorderRouterType::AssociatedPhysicalConnections) };
        inline VirtualBorderRouterType::AssociatedPhysicalConnections getAssociatedPhysicalConnections() { DARABONBA_PTR_GET(associatedPhysicalConnections_, VirtualBorderRouterType::AssociatedPhysicalConnections) };
        inline VirtualBorderRouterType& setAssociatedPhysicalConnections(const VirtualBorderRouterType::AssociatedPhysicalConnections & associatedPhysicalConnections) { DARABONBA_PTR_SET_VALUE(associatedPhysicalConnections_, associatedPhysicalConnections) };
        inline VirtualBorderRouterType& setAssociatedPhysicalConnections(VirtualBorderRouterType::AssociatedPhysicalConnections && associatedPhysicalConnections) { DARABONBA_PTR_SET_RVALUE(associatedPhysicalConnections_, associatedPhysicalConnections) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
        inline VirtualBorderRouterType& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // circuitCode Field Functions 
        bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
        void deleteCircuitCode() { this->circuitCode_ = nullptr;};
        inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
        inline VirtualBorderRouterType& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


        // cloudBoxInstanceId Field Functions 
        bool hasCloudBoxInstanceId() const { return this->cloudBoxInstanceId_ != nullptr;};
        void deleteCloudBoxInstanceId() { this->cloudBoxInstanceId_ = nullptr;};
        inline string getCloudBoxInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cloudBoxInstanceId_, "") };
        inline VirtualBorderRouterType& setCloudBoxInstanceId(string cloudBoxInstanceId) { DARABONBA_PTR_SET_VALUE(cloudBoxInstanceId_, cloudBoxInstanceId) };


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


        // detectMultiplier Field Functions 
        bool hasDetectMultiplier() const { return this->detectMultiplier_ != nullptr;};
        void deleteDetectMultiplier() { this->detectMultiplier_ = nullptr;};
        inline int64_t getDetectMultiplier() const { DARABONBA_PTR_GET_DEFAULT(detectMultiplier_, 0L) };
        inline VirtualBorderRouterType& setDetectMultiplier(int64_t detectMultiplier) { DARABONBA_PTR_SET_VALUE(detectMultiplier_, detectMultiplier) };


        // eccId Field Functions 
        bool hasEccId() const { return this->eccId_ != nullptr;};
        void deleteEccId() { this->eccId_ = nullptr;};
        inline string getEccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
        inline VirtualBorderRouterType& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


        // ecrAttatchStatus Field Functions 
        bool hasEcrAttatchStatus() const { return this->ecrAttatchStatus_ != nullptr;};
        void deleteEcrAttatchStatus() { this->ecrAttatchStatus_ = nullptr;};
        inline string getEcrAttatchStatus() const { DARABONBA_PTR_GET_DEFAULT(ecrAttatchStatus_, "") };
        inline VirtualBorderRouterType& setEcrAttatchStatus(string ecrAttatchStatus) { DARABONBA_PTR_SET_VALUE(ecrAttatchStatus_, ecrAttatchStatus) };


        // ecrId Field Functions 
        bool hasEcrId() const { return this->ecrId_ != nullptr;};
        void deleteEcrId() { this->ecrId_ = nullptr;};
        inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
        inline VirtualBorderRouterType& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


        // ecrOwnerId Field Functions 
        bool hasEcrOwnerId() const { return this->ecrOwnerId_ != nullptr;};
        void deleteEcrOwnerId() { this->ecrOwnerId_ = nullptr;};
        inline string getEcrOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ecrOwnerId_, "") };
        inline VirtualBorderRouterType& setEcrOwnerId(string ecrOwnerId) { DARABONBA_PTR_SET_VALUE(ecrOwnerId_, ecrOwnerId) };


        // enableIpv6 Field Functions 
        bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
        void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
        inline bool getEnableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
        inline VirtualBorderRouterType& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


        // localGatewayIp Field Functions 
        bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
        void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
        inline string getLocalGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
        inline VirtualBorderRouterType& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


        // localIpv6GatewayIp Field Functions 
        bool hasLocalIpv6GatewayIp() const { return this->localIpv6GatewayIp_ != nullptr;};
        void deleteLocalIpv6GatewayIp() { this->localIpv6GatewayIp_ = nullptr;};
        inline string getLocalIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localIpv6GatewayIp_, "") };
        inline VirtualBorderRouterType& setLocalIpv6GatewayIp(string localIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(localIpv6GatewayIp_, localIpv6GatewayIp) };


        // minRxInterval Field Functions 
        bool hasMinRxInterval() const { return this->minRxInterval_ != nullptr;};
        void deleteMinRxInterval() { this->minRxInterval_ = nullptr;};
        inline int64_t getMinRxInterval() const { DARABONBA_PTR_GET_DEFAULT(minRxInterval_, 0L) };
        inline VirtualBorderRouterType& setMinRxInterval(int64_t minRxInterval) { DARABONBA_PTR_SET_VALUE(minRxInterval_, minRxInterval) };


        // minTxInterval Field Functions 
        bool hasMinTxInterval() const { return this->minTxInterval_ != nullptr;};
        void deleteMinTxInterval() { this->minTxInterval_ = nullptr;};
        inline int64_t getMinTxInterval() const { DARABONBA_PTR_GET_DEFAULT(minTxInterval_, 0L) };
        inline VirtualBorderRouterType& setMinTxInterval(int64_t minTxInterval) { DARABONBA_PTR_SET_VALUE(minTxInterval_, minTxInterval) };


        // mtu Field Functions 
        bool hasMtu() const { return this->mtu_ != nullptr;};
        void deleteMtu() { this->mtu_ = nullptr;};
        inline int32_t getMtu() const { DARABONBA_PTR_GET_DEFAULT(mtu_, 0) };
        inline VirtualBorderRouterType& setMtu(int32_t mtu) { DARABONBA_PTR_SET_VALUE(mtu_, mtu) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VirtualBorderRouterType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // PConnVbrChargeType Field Functions 
        bool hasPConnVbrChargeType() const { return this->PConnVbrChargeType_ != nullptr;};
        void deletePConnVbrChargeType() { this->PConnVbrChargeType_ = nullptr;};
        inline string getPConnVbrChargeType() const { DARABONBA_PTR_GET_DEFAULT(PConnVbrChargeType_, "") };
        inline VirtualBorderRouterType& setPConnVbrChargeType(string PConnVbrChargeType) { DARABONBA_PTR_SET_VALUE(PConnVbrChargeType_, PConnVbrChargeType) };


        // PConnVbrExpireTime Field Functions 
        bool hasPConnVbrExpireTime() const { return this->PConnVbrExpireTime_ != nullptr;};
        void deletePConnVbrExpireTime() { this->PConnVbrExpireTime_ = nullptr;};
        inline string getPConnVbrExpireTime() const { DARABONBA_PTR_GET_DEFAULT(PConnVbrExpireTime_, "") };
        inline VirtualBorderRouterType& setPConnVbrExpireTime(string PConnVbrExpireTime) { DARABONBA_PTR_SET_VALUE(PConnVbrExpireTime_, PConnVbrExpireTime) };


        // peerGatewayIp Field Functions 
        bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
        void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
        inline string getPeerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
        inline VirtualBorderRouterType& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


        // peerIpv6GatewayIp Field Functions 
        bool hasPeerIpv6GatewayIp() const { return this->peerIpv6GatewayIp_ != nullptr;};
        void deletePeerIpv6GatewayIp() { this->peerIpv6GatewayIp_ = nullptr;};
        inline string getPeerIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerIpv6GatewayIp_, "") };
        inline VirtualBorderRouterType& setPeerIpv6GatewayIp(string peerIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(peerIpv6GatewayIp_, peerIpv6GatewayIp) };


        // peeringIpv6SubnetMask Field Functions 
        bool hasPeeringIpv6SubnetMask() const { return this->peeringIpv6SubnetMask_ != nullptr;};
        void deletePeeringIpv6SubnetMask() { this->peeringIpv6SubnetMask_ = nullptr;};
        inline string getPeeringIpv6SubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringIpv6SubnetMask_, "") };
        inline VirtualBorderRouterType& setPeeringIpv6SubnetMask(string peeringIpv6SubnetMask) { DARABONBA_PTR_SET_VALUE(peeringIpv6SubnetMask_, peeringIpv6SubnetMask) };


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


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline VirtualBorderRouterType& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // routeTableId Field Functions 
        bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
        void deleteRouteTableId() { this->routeTableId_ = nullptr;};
        inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
        inline VirtualBorderRouterType& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


        // sitelinkEnable Field Functions 
        bool hasSitelinkEnable() const { return this->sitelinkEnable_ != nullptr;};
        void deleteSitelinkEnable() { this->sitelinkEnable_ = nullptr;};
        inline bool getSitelinkEnable() const { DARABONBA_PTR_GET_DEFAULT(sitelinkEnable_, false) };
        inline VirtualBorderRouterType& setSitelinkEnable(bool sitelinkEnable) { DARABONBA_PTR_SET_VALUE(sitelinkEnable_, sitelinkEnable) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VirtualBorderRouterType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const VirtualBorderRouterType::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, VirtualBorderRouterType::Tags) };
        inline VirtualBorderRouterType::Tags getTags() { DARABONBA_PTR_GET(tags_, VirtualBorderRouterType::Tags) };
        inline VirtualBorderRouterType& setTags(const VirtualBorderRouterType::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline VirtualBorderRouterType& setTags(VirtualBorderRouterType::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // terminationTime Field Functions 
        bool hasTerminationTime() const { return this->terminationTime_ != nullptr;};
        void deleteTerminationTime() { this->terminationTime_ = nullptr;};
        inline string getTerminationTime() const { DARABONBA_PTR_GET_DEFAULT(terminationTime_, "") };
        inline VirtualBorderRouterType& setTerminationTime(string terminationTime) { DARABONBA_PTR_SET_VALUE(terminationTime_, terminationTime) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline VirtualBorderRouterType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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
        // The ID of the access point.
        shared_ptr<string> accessPointId_ {};
        // The time when the VBR was activated for the first time.
        shared_ptr<string> activationTime_ {};
        // The information about the Cloud Enterprise Network (CEN) instance to which the VBR is attached.
        shared_ptr<VirtualBorderRouterType::AssociatedCens> associatedCens_ {};
        // The information about the Express Connect circuit that is associated with the VBR.
        shared_ptr<VirtualBorderRouterType::AssociatedPhysicalConnections> associatedPhysicalConnections_ {};
        // The bandwidth value of the VBR. Unit: Mbit/s.
        shared_ptr<int32_t> bandwidth_ {};
        // The circuit code of the Express Connect circuit, which is provided by the connectivity provider.
        shared_ptr<string> circuitCode_ {};
        // The ID of the cloud box.
        shared_ptr<string> cloudBoxInstanceId_ {};
        // The time when the VBR was created.
        shared_ptr<string> creationTime_ {};
        // The description of the VBR.
        shared_ptr<string> description_ {};
        // The multiple of the detection time.
        // 
        // This value indicates the maximum number of dropped packets that is allowed by the receiver when the initiator transmits packets. This value can be used to check whether the connection works as expected.
        // 
        // Valid values: **3 to 10**.
        shared_ptr<int64_t> detectMultiplier_ {};
        // The ID of the Express Cloud Connect (ECC) instance.
        shared_ptr<string> eccId_ {};
        // The status of the ECR. Valid values:
        // 
        // *   **Attached**
        // *   **Attaching**
        // *   **Detached**
        // *   **Detaching**
        // *   If no value is returned, the VBR is not attached to a CEN instance.
        shared_ptr<string> ecrAttatchStatus_ {};
        // The ID of the Express Connect Router (ECR).
        shared_ptr<string> ecrId_ {};
        // The ID of the Alibaba Cloud account (primary account)  to which the ECR belongs.
        shared_ptr<string> ecrOwnerId_ {};
        // Indicates whether IPv6 is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> enableIpv6_ {};
        // The IPv4 address of the VBR on the Alibaba Cloud side.
        shared_ptr<string> localGatewayIp_ {};
        // The IPv6 address of the VBR on the Alibaba Cloud side.
        shared_ptr<string> localIpv6GatewayIp_ {};
        // The time interval to receive BFD packets. Valid values: **200 to 1000**. Unit: milliseconds.
        shared_ptr<int64_t> minRxInterval_ {};
        // The time interval to send Bidirectional Forwarding Detection (BFD) packets. Valid values: **200 to 1000**. Unit: milliseconds.
        shared_ptr<int64_t> minTxInterval_ {};
        shared_ptr<int32_t> mtu_ {};
        // The VBR name.
        shared_ptr<string> name_ {};
        // The billing method of the VBR. Valid values:
        // 
        // *   **PrePaid:** subscription. If you choose this billing method, make sure that your account supports balance payments or credit payments.
        // *   **PostPaid:** pay-as-you-go.
        shared_ptr<string> PConnVbrChargeType_ {};
        // The time when the VBR expires.
        shared_ptr<string> PConnVbrExpireTime_ {};
        // The IPv4 address of the VBR on the user side.
        shared_ptr<string> peerGatewayIp_ {};
        // The IPv6 address of the VBR on the user side.
        shared_ptr<string> peerIpv6GatewayIp_ {};
        // The subnet mask for the IPv6 addresses on the user side and on the Alibaba Cloud side.
        shared_ptr<string> peeringIpv6SubnetMask_ {};
        // The subnet mask for the IPv4 addresses on the Alibaba Cloud side and on the user side.
        shared_ptr<string> peeringSubnetMask_ {};
        // The business status of the Express Connect circuit. Valid values:
        // 
        // *   **Normal:** The Express Connect circuit is running as normal.
        // *   **FinancialLocked:** The Express Connect circuit is locked due to overdue payments.
        shared_ptr<string> physicalConnectionBusinessStatus_ {};
        // The ID of the Express Connect circuit to which the VBR belongs.
        shared_ptr<string> physicalConnectionId_ {};
        // The ID of the account to which the Express Connect circuit belongs.
        shared_ptr<string> physicalConnectionOwnerUid_ {};
        // The status of the Express Connect circuit. Valid values:
        // 
        // *   **Initial:** The application is under review.
        // *   **Approved**: The application is approved.
        // *   **Allocating**: The system is allocating resources.
        // *   **Allocated**: The Express Connect circuit is under construction.
        // *   **Confirmed**: The Express Connect circuit is to be confirmed.
        // *   **Enabled**: The Express Connect circuit is enabled.
        // *   **Rejected**: The application is rejected.
        // *   **Canceled**: The application is canceled.
        // *   **Allocation Failed:** The system failed to allocate resources.
        // *   **Terminated:** The Express Connect circuit is disabled.
        shared_ptr<string> physicalConnectionStatus_ {};
        // The last time when the status of the VBR changed from **terminated** to **active**.
        shared_ptr<string> recoveryTime_ {};
        // The resource group ID.
        // 
        // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.html).
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the route table of the VBR.
        shared_ptr<string> routeTableId_ {};
        // Indicates whether to allow service access between data centers. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  If no value is returned, service access between data centers is not allowed.
        shared_ptr<bool> sitelinkEnable_ {};
        // The status of the VBR. Valid values:
        // 
        // *   **unconfirmed**
        // *   **active**
        // *   **terminating**
        // *   **terminated**
        // *   **recovering**
        // *   **deleting:**
        shared_ptr<string> status_ {};
        // The tag of the resource.
        shared_ptr<VirtualBorderRouterType::Tags> tags_ {};
        // The last time when the VBR was terminated.
        shared_ptr<string> terminationTime_ {};
        // The VBR type.
        shared_ptr<string> type_ {};
        // The VBR ID.
        shared_ptr<string> vbrId_ {};
        // The VLAN ID of the VBR.
        shared_ptr<int32_t> vlanId_ {};
        // The ID of the VBR interface.
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
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the VBR.
    shared_ptr<DescribeVirtualBorderRoutersResponseBody::VirtualBorderRouterSet> virtualBorderRouterSet_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
