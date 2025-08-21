// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVSwitchAttributesResponseBodyHaVipIds.hpp>
#include <alibabacloud/models/DescribeVSwitchAttributesResponseBodyInstanceIds.hpp>
#include <alibabacloud/models/DescribeVSwitchAttributesResponseBodyLoadBalancerIds.hpp>
#include <alibabacloud/models/DescribeVSwitchAttributesResponseBodyNatGatewayIds.hpp>
#include <alibabacloud/models/DescribeVSwitchAttributesResponseBodyNetworkInterfaceIds.hpp>
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
    virtual bool empty() const override { this->availableIpAddressCount_ != nullptr
        && this->cidrBlock_ != nullptr && this->createdTime_ != nullptr && this->description_ != nullptr && this->ensRegionId_ != nullptr && this->haVipIds_ != nullptr
        && this->instanceIds_ != nullptr && this->loadBalancerIds_ != nullptr && this->natGatewayIds_ != nullptr && this->networkId_ != nullptr && this->networkInterfaceIds_ != nullptr
        && this->requestId_ != nullptr && this->status_ != nullptr && this->vSwitchId_ != nullptr && this->vSwitchName_ != nullptr; };
    // availableIpAddressCount Field Functions 
    bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
    void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
    inline int64_t availableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
    inline DescribeVSwitchAttributesResponseBody& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVSwitchAttributesResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeVSwitchAttributesResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVSwitchAttributesResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // haVipIds Field Functions 
    bool hasHaVipIds() const { return this->haVipIds_ != nullptr;};
    void deleteHaVipIds() { this->haVipIds_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBodyHaVipIds & haVipIds() const { DARABONBA_PTR_GET_CONST(haVipIds_, DescribeVSwitchAttributesResponseBodyHaVipIds) };
    inline DescribeVSwitchAttributesResponseBodyHaVipIds haVipIds() { DARABONBA_PTR_GET(haVipIds_, DescribeVSwitchAttributesResponseBodyHaVipIds) };
    inline DescribeVSwitchAttributesResponseBody& setHaVipIds(const DescribeVSwitchAttributesResponseBodyHaVipIds & haVipIds) { DARABONBA_PTR_SET_VALUE(haVipIds_, haVipIds) };
    inline DescribeVSwitchAttributesResponseBody& setHaVipIds(DescribeVSwitchAttributesResponseBodyHaVipIds && haVipIds) { DARABONBA_PTR_SET_RVALUE(haVipIds_, haVipIds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBodyInstanceIds & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, DescribeVSwitchAttributesResponseBodyInstanceIds) };
    inline DescribeVSwitchAttributesResponseBodyInstanceIds instanceIds() { DARABONBA_PTR_GET(instanceIds_, DescribeVSwitchAttributesResponseBodyInstanceIds) };
    inline DescribeVSwitchAttributesResponseBody& setInstanceIds(const DescribeVSwitchAttributesResponseBodyInstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeVSwitchAttributesResponseBody& setInstanceIds(DescribeVSwitchAttributesResponseBodyInstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBodyLoadBalancerIds & loadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, DescribeVSwitchAttributesResponseBodyLoadBalancerIds) };
    inline DescribeVSwitchAttributesResponseBodyLoadBalancerIds loadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, DescribeVSwitchAttributesResponseBodyLoadBalancerIds) };
    inline DescribeVSwitchAttributesResponseBody& setLoadBalancerIds(const DescribeVSwitchAttributesResponseBodyLoadBalancerIds & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
    inline DescribeVSwitchAttributesResponseBody& setLoadBalancerIds(DescribeVSwitchAttributesResponseBodyLoadBalancerIds && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


    // natGatewayIds Field Functions 
    bool hasNatGatewayIds() const { return this->natGatewayIds_ != nullptr;};
    void deleteNatGatewayIds() { this->natGatewayIds_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBodyNatGatewayIds & natGatewayIds() const { DARABONBA_PTR_GET_CONST(natGatewayIds_, DescribeVSwitchAttributesResponseBodyNatGatewayIds) };
    inline DescribeVSwitchAttributesResponseBodyNatGatewayIds natGatewayIds() { DARABONBA_PTR_GET(natGatewayIds_, DescribeVSwitchAttributesResponseBodyNatGatewayIds) };
    inline DescribeVSwitchAttributesResponseBody& setNatGatewayIds(const DescribeVSwitchAttributesResponseBodyNatGatewayIds & natGatewayIds) { DARABONBA_PTR_SET_VALUE(natGatewayIds_, natGatewayIds) };
    inline DescribeVSwitchAttributesResponseBody& setNatGatewayIds(DescribeVSwitchAttributesResponseBodyNatGatewayIds && natGatewayIds) { DARABONBA_PTR_SET_RVALUE(natGatewayIds_, natGatewayIds) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const DescribeVSwitchAttributesResponseBodyNetworkInterfaceIds & networkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, DescribeVSwitchAttributesResponseBodyNetworkInterfaceIds) };
    inline DescribeVSwitchAttributesResponseBodyNetworkInterfaceIds networkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, DescribeVSwitchAttributesResponseBodyNetworkInterfaceIds) };
    inline DescribeVSwitchAttributesResponseBody& setNetworkInterfaceIds(const DescribeVSwitchAttributesResponseBodyNetworkInterfaceIds & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline DescribeVSwitchAttributesResponseBody& setNetworkInterfaceIds(DescribeVSwitchAttributesResponseBodyNetworkInterfaceIds && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVSwitchAttributesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeVSwitchAttributesResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline DescribeVSwitchAttributesResponseBody& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


  protected:
    std::shared_ptr<int64_t> availableIpAddressCount_ = nullptr;
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> ensRegionId_ = nullptr;
    std::shared_ptr<DescribeVSwitchAttributesResponseBodyHaVipIds> haVipIds_ = nullptr;
    std::shared_ptr<DescribeVSwitchAttributesResponseBodyInstanceIds> instanceIds_ = nullptr;
    std::shared_ptr<DescribeVSwitchAttributesResponseBodyLoadBalancerIds> loadBalancerIds_ = nullptr;
    std::shared_ptr<DescribeVSwitchAttributesResponseBodyNatGatewayIds> natGatewayIds_ = nullptr;
    std::shared_ptr<string> networkId_ = nullptr;
    std::shared_ptr<DescribeVSwitchAttributesResponseBodyNetworkInterfaceIds> networkInterfaceIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vSwitchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
