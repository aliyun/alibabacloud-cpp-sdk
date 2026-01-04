// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODY_HPP_
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
  class DescribeVSwitchAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(HaVipIds, haVipIds_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(NatGatewayIds, natGatewayIds_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(HaVipIds, haVipIds_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(NatGatewayIds, natGatewayIds_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
    };
    DescribeVSwitchAttributesResponseBody() = default ;
    DescribeVSwitchAttributesResponseBody(const DescribeVSwitchAttributesResponseBody &) = default ;
    DescribeVSwitchAttributesResponseBody(DescribeVSwitchAttributesResponseBody &&) = default ;
    DescribeVSwitchAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchAttributesResponseBody() = default ;
    DescribeVSwitchAttributesResponseBody& operator=(const DescribeVSwitchAttributesResponseBody &) = default ;
    DescribeVSwitchAttributesResponseBody& operator=(DescribeVSwitchAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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

    virtual bool empty() const override { return this->availableIpAddressCount_ == nullptr
        && this->cidrBlock_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->haVipIds_ == nullptr
        && this->instanceIds_ == nullptr && this->loadBalancerIds_ == nullptr && this->natGatewayIds_ == nullptr && this->networkId_ == nullptr && this->networkInterfaceIds_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr; };
    // availableIpAddressCount Field Functions 
    bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
    void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
    inline int64_t getAvailableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
    inline DescribeVSwitchAttributesResponseBody& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVSwitchAttributesResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeVSwitchAttributesResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVSwitchAttributesResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // haVipIds Field Functions 
    bool hasHaVipIds() const { return this->haVipIds_ != nullptr;};
    void deleteHaVipIds() { this->haVipIds_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBody::HaVipIds & getHaVipIds() const { DARABONBA_PTR_GET_CONST(haVipIds_, DescribeVSwitchAttributesResponseBody::HaVipIds) };
    inline DescribeVSwitchAttributesResponseBody::HaVipIds getHaVipIds() { DARABONBA_PTR_GET(haVipIds_, DescribeVSwitchAttributesResponseBody::HaVipIds) };
    inline DescribeVSwitchAttributesResponseBody& setHaVipIds(const DescribeVSwitchAttributesResponseBody::HaVipIds & haVipIds) { DARABONBA_PTR_SET_VALUE(haVipIds_, haVipIds) };
    inline DescribeVSwitchAttributesResponseBody& setHaVipIds(DescribeVSwitchAttributesResponseBody::HaVipIds && haVipIds) { DARABONBA_PTR_SET_RVALUE(haVipIds_, haVipIds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBody::InstanceIds & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, DescribeVSwitchAttributesResponseBody::InstanceIds) };
    inline DescribeVSwitchAttributesResponseBody::InstanceIds getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, DescribeVSwitchAttributesResponseBody::InstanceIds) };
    inline DescribeVSwitchAttributesResponseBody& setInstanceIds(const DescribeVSwitchAttributesResponseBody::InstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeVSwitchAttributesResponseBody& setInstanceIds(DescribeVSwitchAttributesResponseBody::InstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBody::LoadBalancerIds & getLoadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, DescribeVSwitchAttributesResponseBody::LoadBalancerIds) };
    inline DescribeVSwitchAttributesResponseBody::LoadBalancerIds getLoadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, DescribeVSwitchAttributesResponseBody::LoadBalancerIds) };
    inline DescribeVSwitchAttributesResponseBody& setLoadBalancerIds(const DescribeVSwitchAttributesResponseBody::LoadBalancerIds & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
    inline DescribeVSwitchAttributesResponseBody& setLoadBalancerIds(DescribeVSwitchAttributesResponseBody::LoadBalancerIds && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


    // natGatewayIds Field Functions 
    bool hasNatGatewayIds() const { return this->natGatewayIds_ != nullptr;};
    void deleteNatGatewayIds() { this->natGatewayIds_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBody::NatGatewayIds & getNatGatewayIds() const { DARABONBA_PTR_GET_CONST(natGatewayIds_, DescribeVSwitchAttributesResponseBody::NatGatewayIds) };
    inline DescribeVSwitchAttributesResponseBody::NatGatewayIds getNatGatewayIds() { DARABONBA_PTR_GET(natGatewayIds_, DescribeVSwitchAttributesResponseBody::NatGatewayIds) };
    inline DescribeVSwitchAttributesResponseBody& setNatGatewayIds(const DescribeVSwitchAttributesResponseBody::NatGatewayIds & natGatewayIds) { DARABONBA_PTR_SET_VALUE(natGatewayIds_, natGatewayIds) };
    inline DescribeVSwitchAttributesResponseBody& setNatGatewayIds(DescribeVSwitchAttributesResponseBody::NatGatewayIds && natGatewayIds) { DARABONBA_PTR_SET_RVALUE(natGatewayIds_, natGatewayIds) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBody::NetworkInterfaceIds & getNetworkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, DescribeVSwitchAttributesResponseBody::NetworkInterfaceIds) };
    inline DescribeVSwitchAttributesResponseBody::NetworkInterfaceIds getNetworkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, DescribeVSwitchAttributesResponseBody::NetworkInterfaceIds) };
    inline DescribeVSwitchAttributesResponseBody& setNetworkInterfaceIds(const DescribeVSwitchAttributesResponseBody::NetworkInterfaceIds & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline DescribeVSwitchAttributesResponseBody& setNetworkInterfaceIds(DescribeVSwitchAttributesResponseBody::NetworkInterfaceIds && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVSwitchAttributesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline DescribeVSwitchAttributesResponseBody& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


  protected:
    // The number of available IP addresses in the VSwitch.
    shared_ptr<int64_t> availableIpAddressCount_ {};
    // The IPv4 CIDR block of the network.
    shared_ptr<string> cidrBlock_ {};
    // The creation time, in UTC format (yyyy-MM-ddTHH:mm:ssZ).
    shared_ptr<string> createdTime_ {};
    // The description of the VSwitch.
    shared_ptr<string> description_ {};
    // The ENS node ID.
    shared_ptr<string> ensRegionId_ {};
    // A list of high-availability VIP instance IDs.
    shared_ptr<DescribeVSwitchAttributesResponseBody::HaVipIds> haVipIds_ {};
    // A list of instance IDs.
    shared_ptr<DescribeVSwitchAttributesResponseBody::InstanceIds> instanceIds_ {};
    // A list of load balancer instance IDs.
    shared_ptr<DescribeVSwitchAttributesResponseBody::LoadBalancerIds> loadBalancerIds_ {};
    // A list of NAT gateway IDs.
    shared_ptr<DescribeVSwitchAttributesResponseBody::NatGatewayIds> natGatewayIds_ {};
    // The network ID.
    shared_ptr<string> networkId_ {};
    // A list of elastic network interface IDs.
    shared_ptr<DescribeVSwitchAttributesResponseBody::NetworkInterfaceIds> networkInterfaceIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the VSwitch, as follows:
    // 
    // - Pending
    // - Available
    // - Releasing
    shared_ptr<string> status_ {};
    // The ID of the VSwitch.
    shared_ptr<string> vSwitchId_ {};
    // The name of the VSwitch.
    shared_ptr<string> vSwitchName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
