// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSHAVIP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSHAVIP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses.hpp>
#include <alibabacloud/models/DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances.hpp>
#include <alibabacloud/models/DescribeHaVipsResponseBodyHaVipsHaVipTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeHaVipsResponseBodyHaVipsHaVip : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsResponseBodyHaVipsHaVip& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedEipAddresses, associatedEipAddresses_);
      DARABONBA_PTR_TO_JSON(AssociatedInstanceType, associatedInstanceType_);
      DARABONBA_PTR_TO_JSON(AssociatedInstances, associatedInstances_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HaVipId, haVipId_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsResponseBodyHaVipsHaVip& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedEipAddresses, associatedEipAddresses_);
      DARABONBA_PTR_FROM_JSON(AssociatedInstanceType, associatedInstanceType_);
      DARABONBA_PTR_FROM_JSON(AssociatedInstances, associatedInstances_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HaVipId, haVipId_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeHaVipsResponseBodyHaVipsHaVip() = default ;
    DescribeHaVipsResponseBodyHaVipsHaVip(const DescribeHaVipsResponseBodyHaVipsHaVip &) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVip(DescribeHaVipsResponseBodyHaVipsHaVip &&) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVip(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsResponseBodyHaVipsHaVip() = default ;
    DescribeHaVipsResponseBodyHaVipsHaVip& operator=(const DescribeHaVipsResponseBodyHaVipsHaVip &) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVip& operator=(DescribeHaVipsResponseBodyHaVipsHaVip &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedEipAddresses_ == nullptr
        && return this->associatedInstanceType_ == nullptr && return this->associatedInstances_ == nullptr && return this->chargeType_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr
        && return this->haVipId_ == nullptr && return this->ipAddress_ == nullptr && return this->masterInstanceId_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // associatedEipAddresses Field Functions 
    bool hasAssociatedEipAddresses() const { return this->associatedEipAddresses_ != nullptr;};
    void deleteAssociatedEipAddresses() { this->associatedEipAddresses_ = nullptr;};
    inline const Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses & associatedEipAddresses() const { DARABONBA_PTR_GET_CONST(associatedEipAddresses_, Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses) };
    inline Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses associatedEipAddresses() { DARABONBA_PTR_GET(associatedEipAddresses_, Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses) };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setAssociatedEipAddresses(const Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses & associatedEipAddresses) { DARABONBA_PTR_SET_VALUE(associatedEipAddresses_, associatedEipAddresses) };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setAssociatedEipAddresses(Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses && associatedEipAddresses) { DARABONBA_PTR_SET_RVALUE(associatedEipAddresses_, associatedEipAddresses) };


    // associatedInstanceType Field Functions 
    bool hasAssociatedInstanceType() const { return this->associatedInstanceType_ != nullptr;};
    void deleteAssociatedInstanceType() { this->associatedInstanceType_ = nullptr;};
    inline string associatedInstanceType() const { DARABONBA_PTR_GET_DEFAULT(associatedInstanceType_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setAssociatedInstanceType(string associatedInstanceType) { DARABONBA_PTR_SET_VALUE(associatedInstanceType_, associatedInstanceType) };


    // associatedInstances Field Functions 
    bool hasAssociatedInstances() const { return this->associatedInstances_ != nullptr;};
    void deleteAssociatedInstances() { this->associatedInstances_ = nullptr;};
    inline const Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances & associatedInstances() const { DARABONBA_PTR_GET_CONST(associatedInstances_, Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances) };
    inline Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances associatedInstances() { DARABONBA_PTR_GET(associatedInstances_, Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances) };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setAssociatedInstances(const Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances & associatedInstances) { DARABONBA_PTR_SET_VALUE(associatedInstances_, associatedInstances) };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setAssociatedInstances(Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances && associatedInstances) { DARABONBA_PTR_SET_RVALUE(associatedInstances_, associatedInstances) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // haVipId Field Functions 
    bool hasHaVipId() const { return this->haVipId_ != nullptr;};
    void deleteHaVipId() { this->haVipId_ = nullptr;};
    inline string haVipId() const { DARABONBA_PTR_GET_DEFAULT(haVipId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setHaVipId(string haVipId) { DARABONBA_PTR_SET_VALUE(haVipId_, haVipId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // masterInstanceId Field Functions 
    bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
    void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
    inline string masterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeHaVipsResponseBodyHaVipsHaVipTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeHaVipsResponseBodyHaVipsHaVipTags) };
    inline Models::DescribeHaVipsResponseBodyHaVipsHaVipTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeHaVipsResponseBodyHaVipsHaVipTags) };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setTags(const Models::DescribeHaVipsResponseBodyHaVipsHaVipTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setTags(Models::DescribeHaVipsResponseBodyHaVipsHaVipTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The list of EIPs associated with the HaVip.
    std::shared_ptr<Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses> associatedEipAddresses_ = nullptr;
    // The type of the instance with which the HaVip is associated. Valid values:
    // 
    // *   **EcsInstance**: Elastic Compute Service (ECS) instance
    // *   **NetworkInterface**: elastic network interface (ENI)
    std::shared_ptr<string> associatedInstanceType_ = nullptr;
    // The information about the instance associated with the HaVip.
    std::shared_ptr<Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances> associatedInstances_ = nullptr;
    // The parameter is invalid. No value is returned.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the HaVip was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the HaVip.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the HaVip.
    std::shared_ptr<string> haVipId_ = nullptr;
    // The private IP address of the HaVip.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The ID of the active instance that is associated with the HaVip.
    std::shared_ptr<string> masterInstanceId_ = nullptr;
    // The name of the HaVip.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region to which the HaVip belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the HaVip belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the HaVip. Valid values:
    // 
    // *   **Creating**: The server group is being created.
    // *   **Available**: The FULLNAT entry is available.
    // *   **Deleting**
    std::shared_ptr<string> status_ = nullptr;
    // The tag list.
    std::shared_ptr<Models::DescribeHaVipsResponseBodyHaVipsHaVipTags> tags_ = nullptr;
    // The ID of the vSwitch to which the HaVip belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC to which the HaVip belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
