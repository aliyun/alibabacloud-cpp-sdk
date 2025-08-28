// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIpv6GatewayAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6GatewayAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6GatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(GatewayRouteTableId, gatewayRouteTableId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(Ipv6GatewayId, ipv6GatewayId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6GatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(GatewayRouteTableId, gatewayRouteTableId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(Ipv6GatewayId, ipv6GatewayId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeIpv6GatewayAttributeResponseBody() = default ;
    DescribeIpv6GatewayAttributeResponseBody(const DescribeIpv6GatewayAttributeResponseBody &) = default ;
    DescribeIpv6GatewayAttributeResponseBody(DescribeIpv6GatewayAttributeResponseBody &&) = default ;
    DescribeIpv6GatewayAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6GatewayAttributeResponseBody() = default ;
    DescribeIpv6GatewayAttributeResponseBody& operator=(const DescribeIpv6GatewayAttributeResponseBody &) = default ;
    DescribeIpv6GatewayAttributeResponseBody& operator=(DescribeIpv6GatewayAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessStatus_ != nullptr
        && this->creationTime_ != nullptr && this->description_ != nullptr && this->expiredTime_ != nullptr && this->gatewayRouteTableId_ != nullptr && this->instanceChargeType_ != nullptr
        && this->ipv6GatewayId_ != nullptr && this->name_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->requestId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->vpcId_ != nullptr; };
    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // gatewayRouteTableId Field Functions 
    bool hasGatewayRouteTableId() const { return this->gatewayRouteTableId_ != nullptr;};
    void deleteGatewayRouteTableId() { this->gatewayRouteTableId_ = nullptr;};
    inline string gatewayRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(gatewayRouteTableId_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setGatewayRouteTableId(string gatewayRouteTableId) { DARABONBA_PTR_SET_VALUE(gatewayRouteTableId_, gatewayRouteTableId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // ipv6GatewayId Field Functions 
    bool hasIpv6GatewayId() const { return this->ipv6GatewayId_ != nullptr;};
    void deleteIpv6GatewayId() { this->ipv6GatewayId_ = nullptr;};
    inline string ipv6GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv6GatewayId_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setIpv6GatewayId(string ipv6GatewayId) { DARABONBA_PTR_SET_VALUE(ipv6GatewayId_, ipv6GatewayId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeIpv6GatewayAttributeResponseBody& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeIpv6GatewayAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeIpv6GatewayAttributeResponseBodyTags) };
    inline DescribeIpv6GatewayAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeIpv6GatewayAttributeResponseBodyTags) };
    inline DescribeIpv6GatewayAttributeResponseBody& setTags(const DescribeIpv6GatewayAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeIpv6GatewayAttributeResponseBody& setTags(DescribeIpv6GatewayAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeIpv6GatewayAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The status of the IPv6 gateway. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    // *   **SecurityLocked**
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The time when the IPv6 gateway was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the IPv6 gateway.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the IPv6 gateway expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The ID of the gateway route table associated with the IPv6 gateway.
    // 
    // >  This parameter is available only when the IPv6 gateway is associated with a gateway route table.
    std::shared_ptr<string> gatewayRouteTableId_ = nullptr;
    // The metering method of the IPv6 gateway.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The ID of the IPv6 gateway.
    std::shared_ptr<string> ipv6GatewayId_ = nullptr;
    // The name of the IPv6 gateway.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the Alibaba Cloud account to which the IPv6 gateway belongs.
    // 
    // >  This value is of the Long type. In some languages, the precision may be lost. Use this value with caution.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the IPv6 gateway is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the IPv6 gateway. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    std::shared_ptr<string> status_ = nullptr;
    // The information about the tags.
    std::shared_ptr<DescribeIpv6GatewayAttributeResponseBodyTags> tags_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the IPv6 gateway belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
