// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSNETWORKACL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSNETWORKACL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries.hpp>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries.hpp>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources.hpp>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& obj) { 
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
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl(const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl(DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl &&) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& operator=(const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& operator=(DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->egressAclEntries_ == nullptr && return this->ingressAclEntries_ == nullptr && return this->networkAclId_ == nullptr && return this->networkAclName_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resources_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr
        && return this->vpcId_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // egressAclEntries Field Functions 
    bool hasEgressAclEntries() const { return this->egressAclEntries_ != nullptr;};
    void deleteEgressAclEntries() { this->egressAclEntries_ = nullptr;};
    inline const Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries & egressAclEntries() const { DARABONBA_PTR_GET_CONST(egressAclEntries_, Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries) };
    inline Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries egressAclEntries() { DARABONBA_PTR_GET(egressAclEntries_, Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setEgressAclEntries(const Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries & egressAclEntries) { DARABONBA_PTR_SET_VALUE(egressAclEntries_, egressAclEntries) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setEgressAclEntries(Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries && egressAclEntries) { DARABONBA_PTR_SET_RVALUE(egressAclEntries_, egressAclEntries) };


    // ingressAclEntries Field Functions 
    bool hasIngressAclEntries() const { return this->ingressAclEntries_ != nullptr;};
    void deleteIngressAclEntries() { this->ingressAclEntries_ = nullptr;};
    inline const Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries & ingressAclEntries() const { DARABONBA_PTR_GET_CONST(ingressAclEntries_, Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries) };
    inline Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries ingressAclEntries() { DARABONBA_PTR_GET(ingressAclEntries_, Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setIngressAclEntries(const Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries & ingressAclEntries) { DARABONBA_PTR_SET_VALUE(ingressAclEntries_, ingressAclEntries) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setIngressAclEntries(Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries && ingressAclEntries) { DARABONBA_PTR_SET_RVALUE(ingressAclEntries_, ingressAclEntries) };


    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string networkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // networkAclName Field Functions 
    bool hasNetworkAclName() const { return this->networkAclName_ != nullptr;};
    void deleteNetworkAclName() { this->networkAclName_ = nullptr;};
    inline string networkAclName() const { DARABONBA_PTR_GET_DEFAULT(networkAclName_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setNetworkAclName(string networkAclName) { DARABONBA_PTR_SET_VALUE(networkAclName_, networkAclName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources & resources() const { DARABONBA_PTR_GET_CONST(resources_, Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources) };
    inline Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources resources() { DARABONBA_PTR_GET(resources_, Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setResources(const Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setResources(Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclTags) };
    inline Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclTags) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setTags(const Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setTags(Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The time when the network ACL was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the network ACL.
    std::shared_ptr<string> description_ = nullptr;
    // The outbound rules.
    std::shared_ptr<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries> egressAclEntries_ = nullptr;
    // The configurations of the inbound rules.
    std::shared_ptr<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries> ingressAclEntries_ = nullptr;
    // The ID of the network ACL.
    std::shared_ptr<string> networkAclId_ = nullptr;
    // The name of the network ACL.
    std::shared_ptr<string> networkAclName_ = nullptr;
    // The ID of the Alibaba Cloud account to which the network ACL belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the network ACL.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resources that are associated with the network ACL.
    std::shared_ptr<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclResources> resources_ = nullptr;
    // The status of the network ACL. Valid values:
    // 
    // *   **Available**
    // *   **Modifying**
    std::shared_ptr<string> status_ = nullptr;
    // The information about the tags.
    std::shared_ptr<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclTags> tags_ = nullptr;
    // The ID of the associated VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
