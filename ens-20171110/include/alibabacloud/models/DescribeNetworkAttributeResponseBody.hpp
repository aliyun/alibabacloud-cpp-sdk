// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeNetworkAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CloudResources, cloudResources_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(GatewayRouteTableId, gatewayRouteTableId_);
      DARABONBA_PTR_TO_JSON(HaVipIds, haVipIds_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(NatGatewayIds, natGatewayIds_);
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(NetworkName, networkName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(RouteTableIds, routeTableIds_);
      DARABONBA_PTR_TO_JSON(RouterTableId, routerTableId_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CloudResources, cloudResources_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(GatewayRouteTableId, gatewayRouteTableId_);
      DARABONBA_PTR_FROM_JSON(HaVipIds, haVipIds_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(NatGatewayIds, natGatewayIds_);
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(NetworkName, networkName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(RouteTableIds, routeTableIds_);
      DARABONBA_PTR_FROM_JSON(RouterTableId, routerTableId_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    DescribeNetworkAttributeResponseBody() = default ;
    DescribeNetworkAttributeResponseBody(const DescribeNetworkAttributeResponseBody &) = default ;
    DescribeNetworkAttributeResponseBody(DescribeNetworkAttributeResponseBody &&) = default ;
    DescribeNetworkAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAttributeResponseBody() = default ;
    DescribeNetworkAttributeResponseBody& operator=(const DescribeNetworkAttributeResponseBody &) = default ;
    DescribeNetworkAttributeResponseBody& operator=(DescribeNetworkAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitchIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitchIds& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitchIds& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      VSwitchIds() = default ;
      VSwitchIds(const VSwitchIds &) = default ;
      VSwitchIds(VSwitchIds &&) = default ;
      VSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitchIds() = default ;
      VSwitchIds& operator=(const VSwitchIds &) = default ;
      VSwitchIds& operator=(VSwitchIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vSwitchId_ == nullptr; };
      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline const vector<string> & getVSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, vector<string>) };
      inline vector<string> getVSwitchId() { DARABONBA_PTR_GET(vSwitchId_, vector<string>) };
      inline VSwitchIds& setVSwitchId(const vector<string> & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
      inline VSwitchIds& setVSwitchId(vector<string> && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


    protected:
      shared_ptr<vector<string>> vSwitchId_ {};
    };

    class SecondaryCidrBlocks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecondaryCidrBlocks& obj) { 
        DARABONBA_PTR_TO_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
      };
      friend void from_json(const Darabonba::Json& j, SecondaryCidrBlocks& obj) { 
        DARABONBA_PTR_FROM_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
      };
      SecondaryCidrBlocks() = default ;
      SecondaryCidrBlocks(const SecondaryCidrBlocks &) = default ;
      SecondaryCidrBlocks(SecondaryCidrBlocks &&) = default ;
      SecondaryCidrBlocks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecondaryCidrBlocks() = default ;
      SecondaryCidrBlocks& operator=(const SecondaryCidrBlocks &) = default ;
      SecondaryCidrBlocks& operator=(SecondaryCidrBlocks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->secondaryCidrBlock_ == nullptr; };
      // secondaryCidrBlock Field Functions 
      bool hasSecondaryCidrBlock() const { return this->secondaryCidrBlock_ != nullptr;};
      void deleteSecondaryCidrBlock() { this->secondaryCidrBlock_ = nullptr;};
      inline const vector<string> & getSecondaryCidrBlock() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlock_, vector<string>) };
      inline vector<string> getSecondaryCidrBlock() { DARABONBA_PTR_GET(secondaryCidrBlock_, vector<string>) };
      inline SecondaryCidrBlocks& setSecondaryCidrBlock(const vector<string> & secondaryCidrBlock) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlock_, secondaryCidrBlock) };
      inline SecondaryCidrBlocks& setSecondaryCidrBlock(vector<string> && secondaryCidrBlock) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlock_, secondaryCidrBlock) };


    protected:
      shared_ptr<vector<string>> secondaryCidrBlock_ {};
    };

    class RouteTableIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteTableIds& obj) { 
        DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      };
      friend void from_json(const Darabonba::Json& j, RouteTableIds& obj) { 
        DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      };
      RouteTableIds() = default ;
      RouteTableIds(const RouteTableIds &) = default ;
      RouteTableIds(RouteTableIds &&) = default ;
      RouteTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteTableIds() = default ;
      RouteTableIds& operator=(const RouteTableIds &) = default ;
      RouteTableIds& operator=(RouteTableIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->routeTableId_ == nullptr; };
      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline const vector<string> & getRouteTableId() const { DARABONBA_PTR_GET_CONST(routeTableId_, vector<string>) };
      inline vector<string> getRouteTableId() { DARABONBA_PTR_GET(routeTableId_, vector<string>) };
      inline RouteTableIds& setRouteTableId(const vector<string> & routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };
      inline RouteTableIds& setRouteTableId(vector<string> && routeTableId) { DARABONBA_PTR_SET_RVALUE(routeTableId_, routeTableId) };


    protected:
      shared_ptr<vector<string>> routeTableId_ {};
    };

    class NetworkInterfaceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInterfaceIds& obj) { 
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInterfaceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      };
      NetworkInterfaceIds() = default ;
      NetworkInterfaceIds(const NetworkInterfaceIds &) = default ;
      NetworkInterfaceIds(NetworkInterfaceIds &&) = default ;
      NetworkInterfaceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInterfaceIds() = default ;
      NetworkInterfaceIds& operator=(const NetworkInterfaceIds &) = default ;
      NetworkInterfaceIds& operator=(NetworkInterfaceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->networkInterfaceId_ == nullptr; };
      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline const vector<string> & getNetworkInterfaceId() const { DARABONBA_PTR_GET_CONST(networkInterfaceId_, vector<string>) };
      inline vector<string> getNetworkInterfaceId() { DARABONBA_PTR_GET(networkInterfaceId_, vector<string>) };
      inline NetworkInterfaceIds& setNetworkInterfaceId(const vector<string> & networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };
      inline NetworkInterfaceIds& setNetworkInterfaceId(vector<string> && networkInterfaceId) { DARABONBA_PTR_SET_RVALUE(networkInterfaceId_, networkInterfaceId) };


    protected:
      shared_ptr<vector<string>> networkInterfaceId_ {};
    };

    class NatGatewayIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatGatewayIds& obj) { 
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      };
      friend void from_json(const Darabonba::Json& j, NatGatewayIds& obj) { 
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      };
      NatGatewayIds() = default ;
      NatGatewayIds(const NatGatewayIds &) = default ;
      NatGatewayIds(NatGatewayIds &&) = default ;
      NatGatewayIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatGatewayIds() = default ;
      NatGatewayIds& operator=(const NatGatewayIds &) = default ;
      NatGatewayIds& operator=(NatGatewayIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->natGatewayId_ == nullptr; };
      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline const vector<string> & getNatGatewayId() const { DARABONBA_PTR_GET_CONST(natGatewayId_, vector<string>) };
      inline vector<string> getNatGatewayId() { DARABONBA_PTR_GET(natGatewayId_, vector<string>) };
      inline NatGatewayIds& setNatGatewayId(const vector<string> & natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };
      inline NatGatewayIds& setNatGatewayId(vector<string> && natGatewayId) { DARABONBA_PTR_SET_RVALUE(natGatewayId_, natGatewayId) };


    protected:
      shared_ptr<vector<string>> natGatewayId_ {};
    };

    class LoadBalancerIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancerIds& obj) { 
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancerIds& obj) { 
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      };
      LoadBalancerIds() = default ;
      LoadBalancerIds(const LoadBalancerIds &) = default ;
      LoadBalancerIds(LoadBalancerIds &&) = default ;
      LoadBalancerIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancerIds() = default ;
      LoadBalancerIds& operator=(const LoadBalancerIds &) = default ;
      LoadBalancerIds& operator=(LoadBalancerIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->loadBalancerId_ == nullptr; };
      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline const vector<string> & getLoadBalancerId() const { DARABONBA_PTR_GET_CONST(loadBalancerId_, vector<string>) };
      inline vector<string> getLoadBalancerId() { DARABONBA_PTR_GET(loadBalancerId_, vector<string>) };
      inline LoadBalancerIds& setLoadBalancerId(const vector<string> & loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };
      inline LoadBalancerIds& setLoadBalancerId(vector<string> && loadBalancerId) { DARABONBA_PTR_SET_RVALUE(loadBalancerId_, loadBalancerId) };


    protected:
      shared_ptr<vector<string>> loadBalancerId_ {};
    };

    class InstanceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceIds& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      InstanceIds() = default ;
      InstanceIds(const InstanceIds &) = default ;
      InstanceIds(InstanceIds &&) = default ;
      InstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceIds() = default ;
      InstanceIds& operator=(const InstanceIds &) = default ;
      InstanceIds& operator=(InstanceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
      inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
      inline InstanceIds& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
      inline InstanceIds& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    protected:
      shared_ptr<vector<string>> instanceId_ {};
    };

    class HaVipIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HaVipIds& obj) { 
        DARABONBA_PTR_TO_JSON(HaVipId, haVipId_);
      };
      friend void from_json(const Darabonba::Json& j, HaVipIds& obj) { 
        DARABONBA_PTR_FROM_JSON(HaVipId, haVipId_);
      };
      HaVipIds() = default ;
      HaVipIds(const HaVipIds &) = default ;
      HaVipIds(HaVipIds &&) = default ;
      HaVipIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HaVipIds() = default ;
      HaVipIds& operator=(const HaVipIds &) = default ;
      HaVipIds& operator=(HaVipIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->haVipId_ == nullptr; };
      // haVipId Field Functions 
      bool hasHaVipId() const { return this->haVipId_ != nullptr;};
      void deleteHaVipId() { this->haVipId_ = nullptr;};
      inline const vector<string> & getHaVipId() const { DARABONBA_PTR_GET_CONST(haVipId_, vector<string>) };
      inline vector<string> getHaVipId() { DARABONBA_PTR_GET(haVipId_, vector<string>) };
      inline HaVipIds& setHaVipId(const vector<string> & haVipId) { DARABONBA_PTR_SET_VALUE(haVipId_, haVipId) };
      inline HaVipIds& setHaVipId(vector<string> && haVipId) { DARABONBA_PTR_SET_RVALUE(haVipId_, haVipId) };


    protected:
      shared_ptr<vector<string>> haVipId_ {};
    };

    class CloudResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudResources& obj) { 
        DARABONBA_PTR_TO_JSON(CloudResourceSetType, cloudResourceSetType_);
      };
      friend void from_json(const Darabonba::Json& j, CloudResources& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudResourceSetType, cloudResourceSetType_);
      };
      CloudResources() = default ;
      CloudResources(const CloudResources &) = default ;
      CloudResources(CloudResources &&) = default ;
      CloudResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudResources() = default ;
      CloudResources& operator=(const CloudResources &) = default ;
      CloudResources& operator=(CloudResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudResourceSetType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudResourceSetType& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, CloudResourceSetType& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        CloudResourceSetType() = default ;
        CloudResourceSetType(const CloudResourceSetType &) = default ;
        CloudResourceSetType(CloudResourceSetType &&) = default ;
        CloudResourceSetType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudResourceSetType() = default ;
        CloudResourceSetType& operator=(const CloudResourceSetType &) = default ;
        CloudResourceSetType& operator=(CloudResourceSetType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceCount_ == nullptr
        && this->resourceType_ == nullptr; };
        // resourceCount Field Functions 
        bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
        void deleteResourceCount() { this->resourceCount_ = nullptr;};
        inline int32_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0) };
        inline CloudResourceSetType& setResourceCount(int32_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline CloudResourceSetType& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The number of resources in the network.
        shared_ptr<int32_t> resourceCount_ {};
        // The resource type. VSwitch.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->cloudResourceSetType_ == nullptr; };
      // cloudResourceSetType Field Functions 
      bool hasCloudResourceSetType() const { return this->cloudResourceSetType_ != nullptr;};
      void deleteCloudResourceSetType() { this->cloudResourceSetType_ = nullptr;};
      inline const vector<CloudResources::CloudResourceSetType> & getCloudResourceSetType() const { DARABONBA_PTR_GET_CONST(cloudResourceSetType_, vector<CloudResources::CloudResourceSetType>) };
      inline vector<CloudResources::CloudResourceSetType> getCloudResourceSetType() { DARABONBA_PTR_GET(cloudResourceSetType_, vector<CloudResources::CloudResourceSetType>) };
      inline CloudResources& setCloudResourceSetType(const vector<CloudResources::CloudResourceSetType> & cloudResourceSetType) { DARABONBA_PTR_SET_VALUE(cloudResourceSetType_, cloudResourceSetType) };
      inline CloudResources& setCloudResourceSetType(vector<CloudResources::CloudResourceSetType> && cloudResourceSetType) { DARABONBA_PTR_SET_RVALUE(cloudResourceSetType_, cloudResourceSetType) };


    protected:
      shared_ptr<vector<CloudResources::CloudResourceSetType>> cloudResourceSetType_ {};
    };

    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->cloudResources_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->gatewayRouteTableId_ == nullptr
        && this->haVipIds_ == nullptr && this->instanceIds_ == nullptr && this->loadBalancerIds_ == nullptr && this->natGatewayIds_ == nullptr && this->networkAclId_ == nullptr
        && this->networkId_ == nullptr && this->networkInterfaceIds_ == nullptr && this->networkName_ == nullptr && this->requestId_ == nullptr && this->routeTableId_ == nullptr
        && this->routeTableIds_ == nullptr && this->routerTableId_ == nullptr && this->secondaryCidrBlocks_ == nullptr && this->status_ == nullptr && this->vSwitchIds_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeNetworkAttributeResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // cloudResources Field Functions 
    bool hasCloudResources() const { return this->cloudResources_ != nullptr;};
    void deleteCloudResources() { this->cloudResources_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBody::CloudResources & getCloudResources() const { DARABONBA_PTR_GET_CONST(cloudResources_, DescribeNetworkAttributeResponseBody::CloudResources) };
    inline DescribeNetworkAttributeResponseBody::CloudResources getCloudResources() { DARABONBA_PTR_GET(cloudResources_, DescribeNetworkAttributeResponseBody::CloudResources) };
    inline DescribeNetworkAttributeResponseBody& setCloudResources(const DescribeNetworkAttributeResponseBody::CloudResources & cloudResources) { DARABONBA_PTR_SET_VALUE(cloudResources_, cloudResources) };
    inline DescribeNetworkAttributeResponseBody& setCloudResources(DescribeNetworkAttributeResponseBody::CloudResources && cloudResources) { DARABONBA_PTR_SET_RVALUE(cloudResources_, cloudResources) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeNetworkAttributeResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNetworkAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeNetworkAttributeResponseBody& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // gatewayRouteTableId Field Functions 
    bool hasGatewayRouteTableId() const { return this->gatewayRouteTableId_ != nullptr;};
    void deleteGatewayRouteTableId() { this->gatewayRouteTableId_ = nullptr;};
    inline string getGatewayRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(gatewayRouteTableId_, "") };
    inline DescribeNetworkAttributeResponseBody& setGatewayRouteTableId(string gatewayRouteTableId) { DARABONBA_PTR_SET_VALUE(gatewayRouteTableId_, gatewayRouteTableId) };


    // haVipIds Field Functions 
    bool hasHaVipIds() const { return this->haVipIds_ != nullptr;};
    void deleteHaVipIds() { this->haVipIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBody::HaVipIds & getHaVipIds() const { DARABONBA_PTR_GET_CONST(haVipIds_, DescribeNetworkAttributeResponseBody::HaVipIds) };
    inline DescribeNetworkAttributeResponseBody::HaVipIds getHaVipIds() { DARABONBA_PTR_GET(haVipIds_, DescribeNetworkAttributeResponseBody::HaVipIds) };
    inline DescribeNetworkAttributeResponseBody& setHaVipIds(const DescribeNetworkAttributeResponseBody::HaVipIds & haVipIds) { DARABONBA_PTR_SET_VALUE(haVipIds_, haVipIds) };
    inline DescribeNetworkAttributeResponseBody& setHaVipIds(DescribeNetworkAttributeResponseBody::HaVipIds && haVipIds) { DARABONBA_PTR_SET_RVALUE(haVipIds_, haVipIds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBody::InstanceIds & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, DescribeNetworkAttributeResponseBody::InstanceIds) };
    inline DescribeNetworkAttributeResponseBody::InstanceIds getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, DescribeNetworkAttributeResponseBody::InstanceIds) };
    inline DescribeNetworkAttributeResponseBody& setInstanceIds(const DescribeNetworkAttributeResponseBody::InstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeNetworkAttributeResponseBody& setInstanceIds(DescribeNetworkAttributeResponseBody::InstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBody::LoadBalancerIds & getLoadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, DescribeNetworkAttributeResponseBody::LoadBalancerIds) };
    inline DescribeNetworkAttributeResponseBody::LoadBalancerIds getLoadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, DescribeNetworkAttributeResponseBody::LoadBalancerIds) };
    inline DescribeNetworkAttributeResponseBody& setLoadBalancerIds(const DescribeNetworkAttributeResponseBody::LoadBalancerIds & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
    inline DescribeNetworkAttributeResponseBody& setLoadBalancerIds(DescribeNetworkAttributeResponseBody::LoadBalancerIds && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


    // natGatewayIds Field Functions 
    bool hasNatGatewayIds() const { return this->natGatewayIds_ != nullptr;};
    void deleteNatGatewayIds() { this->natGatewayIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBody::NatGatewayIds & getNatGatewayIds() const { DARABONBA_PTR_GET_CONST(natGatewayIds_, DescribeNetworkAttributeResponseBody::NatGatewayIds) };
    inline DescribeNetworkAttributeResponseBody::NatGatewayIds getNatGatewayIds() { DARABONBA_PTR_GET(natGatewayIds_, DescribeNetworkAttributeResponseBody::NatGatewayIds) };
    inline DescribeNetworkAttributeResponseBody& setNatGatewayIds(const DescribeNetworkAttributeResponseBody::NatGatewayIds & natGatewayIds) { DARABONBA_PTR_SET_VALUE(natGatewayIds_, natGatewayIds) };
    inline DescribeNetworkAttributeResponseBody& setNatGatewayIds(DescribeNetworkAttributeResponseBody::NatGatewayIds && natGatewayIds) { DARABONBA_PTR_SET_RVALUE(natGatewayIds_, natGatewayIds) };


    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string getNetworkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline DescribeNetworkAttributeResponseBody& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeNetworkAttributeResponseBody& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBody::NetworkInterfaceIds & getNetworkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, DescribeNetworkAttributeResponseBody::NetworkInterfaceIds) };
    inline DescribeNetworkAttributeResponseBody::NetworkInterfaceIds getNetworkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, DescribeNetworkAttributeResponseBody::NetworkInterfaceIds) };
    inline DescribeNetworkAttributeResponseBody& setNetworkInterfaceIds(const DescribeNetworkAttributeResponseBody::NetworkInterfaceIds & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline DescribeNetworkAttributeResponseBody& setNetworkInterfaceIds(DescribeNetworkAttributeResponseBody::NetworkInterfaceIds && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // networkName Field Functions 
    bool hasNetworkName() const { return this->networkName_ != nullptr;};
    void deleteNetworkName() { this->networkName_ = nullptr;};
    inline string getNetworkName() const { DARABONBA_PTR_GET_DEFAULT(networkName_, "") };
    inline DescribeNetworkAttributeResponseBody& setNetworkName(string networkName) { DARABONBA_PTR_SET_VALUE(networkName_, networkName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeNetworkAttributeResponseBody& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // routeTableIds Field Functions 
    bool hasRouteTableIds() const { return this->routeTableIds_ != nullptr;};
    void deleteRouteTableIds() { this->routeTableIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBody::RouteTableIds & getRouteTableIds() const { DARABONBA_PTR_GET_CONST(routeTableIds_, DescribeNetworkAttributeResponseBody::RouteTableIds) };
    inline DescribeNetworkAttributeResponseBody::RouteTableIds getRouteTableIds() { DARABONBA_PTR_GET(routeTableIds_, DescribeNetworkAttributeResponseBody::RouteTableIds) };
    inline DescribeNetworkAttributeResponseBody& setRouteTableIds(const DescribeNetworkAttributeResponseBody::RouteTableIds & routeTableIds) { DARABONBA_PTR_SET_VALUE(routeTableIds_, routeTableIds) };
    inline DescribeNetworkAttributeResponseBody& setRouteTableIds(DescribeNetworkAttributeResponseBody::RouteTableIds && routeTableIds) { DARABONBA_PTR_SET_RVALUE(routeTableIds_, routeTableIds) };


    // routerTableId Field Functions 
    bool hasRouterTableId() const { return this->routerTableId_ != nullptr;};
    void deleteRouterTableId() { this->routerTableId_ = nullptr;};
    inline string getRouterTableId() const { DARABONBA_PTR_GET_DEFAULT(routerTableId_, "") };
    inline DescribeNetworkAttributeResponseBody& setRouterTableId(string routerTableId) { DARABONBA_PTR_SET_VALUE(routerTableId_, routerTableId) };


    // secondaryCidrBlocks Field Functions 
    bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
    void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBody::SecondaryCidrBlocks & getSecondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, DescribeNetworkAttributeResponseBody::SecondaryCidrBlocks) };
    inline DescribeNetworkAttributeResponseBody::SecondaryCidrBlocks getSecondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, DescribeNetworkAttributeResponseBody::SecondaryCidrBlocks) };
    inline DescribeNetworkAttributeResponseBody& setSecondaryCidrBlocks(const DescribeNetworkAttributeResponseBody::SecondaryCidrBlocks & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
    inline DescribeNetworkAttributeResponseBody& setSecondaryCidrBlocks(DescribeNetworkAttributeResponseBody::SecondaryCidrBlocks && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworkAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBody::VSwitchIds & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, DescribeNetworkAttributeResponseBody::VSwitchIds) };
    inline DescribeNetworkAttributeResponseBody::VSwitchIds getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, DescribeNetworkAttributeResponseBody::VSwitchIds) };
    inline DescribeNetworkAttributeResponseBody& setVSwitchIds(const DescribeNetworkAttributeResponseBody::VSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeNetworkAttributeResponseBody& setVSwitchIds(DescribeNetworkAttributeResponseBody::VSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The IPv4 CIDR block of the network.
    shared_ptr<string> cidrBlock_ {};
    // The list of resources in the network.
    shared_ptr<DescribeNetworkAttributeResponseBody::CloudResources> cloudResources_ {};
    // The time when the network was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> createdTime_ {};
    // The description of the network.
    shared_ptr<string> description_ {};
    // The ID of the edge node.
    shared_ptr<string> ensRegionId_ {};
    // The ID of the gateway route table.
    shared_ptr<string> gatewayRouteTableId_ {};
    // List of HaVipIds.
    shared_ptr<DescribeNetworkAttributeResponseBody::HaVipIds> haVipIds_ {};
    // The instance IDs.
    shared_ptr<DescribeNetworkAttributeResponseBody::InstanceIds> instanceIds_ {};
    // List of ELB instances.
    shared_ptr<DescribeNetworkAttributeResponseBody::LoadBalancerIds> loadBalancerIds_ {};
    // List of NAT Gateways.
    shared_ptr<DescribeNetworkAttributeResponseBody::NatGatewayIds> natGatewayIds_ {};
    // The ID of the network access control list (ACL).
    shared_ptr<string> networkAclId_ {};
    // The ID of the network.
    shared_ptr<string> networkId_ {};
    // A list of multicast source IDs.
    shared_ptr<DescribeNetworkAttributeResponseBody::NetworkInterfaceIds> networkInterfaceIds_ {};
    // The name of the network.
    shared_ptr<string> networkName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the route table.
    shared_ptr<string> routeTableId_ {};
    // List of routing table IDs.
    shared_ptr<DescribeNetworkAttributeResponseBody::RouteTableIds> routeTableIds_ {};
    // The ID of the route table.
    shared_ptr<string> routerTableId_ {};
    shared_ptr<DescribeNetworkAttributeResponseBody::SecondaryCidrBlocks> secondaryCidrBlocks_ {};
    // The status of the network. Valid values:
    // 
    // *   Pending
    // *   Available
    shared_ptr<string> status_ {};
    // The list of vSwitches in the network.
    shared_ptr<DescribeNetworkAttributeResponseBody::VSwitchIds> vSwitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
