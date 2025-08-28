// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODYNETWORKACLATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODYNETWORKACLATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeEgressAclEntries.hpp>
#include <alibabacloud/models/DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries.hpp>
#include <alibabacloud/models/DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources.hpp>
#include <alibabacloud/models/DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EgressAclEntries, egressAclEntries_);
      DARABONBA_PTR_TO_JSON(IngressAclEntries, ingressAclEntries_);
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(NetworkAclName, networkAclName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EgressAclEntries, egressAclEntries_);
      DARABONBA_PTR_FROM_JSON(IngressAclEntries, ingressAclEntries_);
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(NetworkAclName, networkAclName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute() = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute(const DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute &) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute(DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute &&) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute() = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& operator=(const DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute &) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& operator=(DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->egressAclEntries_ != nullptr && this->ingressAclEntries_ != nullptr && this->networkAclId_ != nullptr && this->networkAclName_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resources_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->vpcId_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // egressAclEntries Field Functions 
    bool hasEgressAclEntries() const { return this->egressAclEntries_ != nullptr;};
    void deleteEgressAclEntries() { this->egressAclEntries_ = nullptr;};
    inline const Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeEgressAclEntries & egressAclEntries() const { DARABONBA_PTR_GET_CONST(egressAclEntries_, Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeEgressAclEntries) };
    inline Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeEgressAclEntries egressAclEntries() { DARABONBA_PTR_GET(egressAclEntries_, Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeEgressAclEntries) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setEgressAclEntries(const Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeEgressAclEntries & egressAclEntries) { DARABONBA_PTR_SET_VALUE(egressAclEntries_, egressAclEntries) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setEgressAclEntries(Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeEgressAclEntries && egressAclEntries) { DARABONBA_PTR_SET_RVALUE(egressAclEntries_, egressAclEntries) };


    // ingressAclEntries Field Functions 
    bool hasIngressAclEntries() const { return this->ingressAclEntries_ != nullptr;};
    void deleteIngressAclEntries() { this->ingressAclEntries_ = nullptr;};
    inline const Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries & ingressAclEntries() const { DARABONBA_PTR_GET_CONST(ingressAclEntries_, Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries) };
    inline Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries ingressAclEntries() { DARABONBA_PTR_GET(ingressAclEntries_, Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setIngressAclEntries(const Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries & ingressAclEntries) { DARABONBA_PTR_SET_VALUE(ingressAclEntries_, ingressAclEntries) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setIngressAclEntries(Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries && ingressAclEntries) { DARABONBA_PTR_SET_RVALUE(ingressAclEntries_, ingressAclEntries) };


    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string networkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // networkAclName Field Functions 
    bool hasNetworkAclName() const { return this->networkAclName_ != nullptr;};
    void deleteNetworkAclName() { this->networkAclName_ = nullptr;};
    inline string networkAclName() const { DARABONBA_PTR_GET_DEFAULT(networkAclName_, "") };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setNetworkAclName(string networkAclName) { DARABONBA_PTR_SET_VALUE(networkAclName_, networkAclName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources & resources() const { DARABONBA_PTR_GET_CONST(resources_, Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources) };
    inline Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources resources() { DARABONBA_PTR_GET(resources_, Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setResources(const Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setResources(Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags) };
    inline Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setTags(const Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setTags(Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The time when the network ACL was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the network ACL.
    std::shared_ptr<string> description_ = nullptr;
    // The information about the outbound rules of the network ACL.
    std::shared_ptr<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeEgressAclEntries> egressAclEntries_ = nullptr;
    // The information about the inbound rules of the network ACL.
    std::shared_ptr<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries> ingressAclEntries_ = nullptr;
    // The ID of the network ACL.
    std::shared_ptr<string> networkAclId_ = nullptr;
    // The name of the network ACL.
    std::shared_ptr<string> networkAclName_ = nullptr;
    // The ID of the Alibaba Cloud account to which the network ACL belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the network ACL.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resources that are associated with the network ACL.
    std::shared_ptr<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResources> resources_ = nullptr;
    // The association status of the resource. Valid values:
    // 
    // *   **Available**
    // *   **Modifying**
    std::shared_ptr<string> status_ = nullptr;
    // The information about the tags.
    std::shared_ptr<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags> tags_ = nullptr;
    // The ID of the VPC to which the network ACL belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
