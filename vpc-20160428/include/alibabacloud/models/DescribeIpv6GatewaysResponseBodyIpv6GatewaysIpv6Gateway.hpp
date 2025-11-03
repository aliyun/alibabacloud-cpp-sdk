// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYSRESPONSEBODYIPV6GATEWAYSIPV6GATEWAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYSRESPONSEBODYIPV6GATEWAYSIPV6GATEWAY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6GatewayTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(Ipv6GatewayId, ipv6GatewayId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(Ipv6GatewayId, ipv6GatewayId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway() = default ;
    DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway(const DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway &) = default ;
    DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway(DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway &&) = default ;
    DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway() = default ;
    DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& operator=(const DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway &) = default ;
    DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& operator=(DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessStatus_ == nullptr
        && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->expiredTime_ == nullptr && return this->instanceChargeType_ == nullptr && return this->ipv6GatewayId_ == nullptr
        && return this->name_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->vpcId_ == nullptr; };
    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // ipv6GatewayId Field Functions 
    bool hasIpv6GatewayId() const { return this->ipv6GatewayId_ != nullptr;};
    void deleteIpv6GatewayId() { this->ipv6GatewayId_ = nullptr;};
    inline string ipv6GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv6GatewayId_, "") };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setIpv6GatewayId(string ipv6GatewayId) { DARABONBA_PTR_SET_VALUE(ipv6GatewayId_, ipv6GatewayId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6GatewayTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6GatewayTags) };
    inline Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6GatewayTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6GatewayTags) };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setTags(const Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6GatewayTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setTags(Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6GatewayTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


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
    // The billing method of the IPv6 gateway.
    // 
    // Only **PostPaid** may be returned, which indicates that the IPv6 gateway uses the pay-as-you-go billing method.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The ID of the IPv6 gateway.
    std::shared_ptr<string> ipv6GatewayId_ = nullptr;
    // The name of the IPv6 gateway.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region in which the IPv6 gateway is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the IPv6 gateway. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    std::shared_ptr<string> status_ = nullptr;
    // The information about the tags.
    std::shared_ptr<Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6GatewayTags> tags_ = nullptr;
    // The ID of the VPC to which the IPv6 gateway belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
