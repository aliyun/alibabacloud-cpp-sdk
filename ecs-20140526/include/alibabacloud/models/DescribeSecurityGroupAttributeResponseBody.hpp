// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityGroupAttributeResponseBodyPermissions.hpp>
#include <alibabacloud/models/DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSecurityGroupAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InnerAccessPolicy, innerAccessPolicy_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
      DARABONBA_PTR_TO_JSON(SnapshotPolicyIds, snapshotPolicyIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InnerAccessPolicy, innerAccessPolicy_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyIds, snapshotPolicyIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeSecurityGroupAttributeResponseBody() = default ;
    DescribeSecurityGroupAttributeResponseBody(const DescribeSecurityGroupAttributeResponseBody &) = default ;
    DescribeSecurityGroupAttributeResponseBody(DescribeSecurityGroupAttributeResponseBody &&) = default ;
    DescribeSecurityGroupAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupAttributeResponseBody() = default ;
    DescribeSecurityGroupAttributeResponseBody& operator=(const DescribeSecurityGroupAttributeResponseBody &) = default ;
    DescribeSecurityGroupAttributeResponseBody& operator=(DescribeSecurityGroupAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->innerAccessPolicy_ == nullptr && return this->nextToken_ == nullptr && return this->permissions_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->securityGroupName_ == nullptr && return this->snapshotPolicyIds_ == nullptr && return this->vpcId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // innerAccessPolicy Field Functions 
    bool hasInnerAccessPolicy() const { return this->innerAccessPolicy_ != nullptr;};
    void deleteInnerAccessPolicy() { this->innerAccessPolicy_ = nullptr;};
    inline string innerAccessPolicy() const { DARABONBA_PTR_GET_DEFAULT(innerAccessPolicy_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setInnerAccessPolicy(string innerAccessPolicy) { DARABONBA_PTR_SET_VALUE(innerAccessPolicy_, innerAccessPolicy) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const DescribeSecurityGroupAttributeResponseBodyPermissions & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, DescribeSecurityGroupAttributeResponseBodyPermissions) };
    inline DescribeSecurityGroupAttributeResponseBodyPermissions permissions() { DARABONBA_PTR_GET(permissions_, DescribeSecurityGroupAttributeResponseBodyPermissions) };
    inline DescribeSecurityGroupAttributeResponseBody& setPermissions(const DescribeSecurityGroupAttributeResponseBodyPermissions & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline DescribeSecurityGroupAttributeResponseBody& setPermissions(DescribeSecurityGroupAttributeResponseBodyPermissions && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string securityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


    // snapshotPolicyIds Field Functions 
    bool hasSnapshotPolicyIds() const { return this->snapshotPolicyIds_ != nullptr;};
    void deleteSnapshotPolicyIds() { this->snapshotPolicyIds_ = nullptr;};
    inline const DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds & snapshotPolicyIds() const { DARABONBA_PTR_GET_CONST(snapshotPolicyIds_, DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds) };
    inline DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds snapshotPolicyIds() { DARABONBA_PTR_GET(snapshotPolicyIds_, DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds) };
    inline DescribeSecurityGroupAttributeResponseBody& setSnapshotPolicyIds(const DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds & snapshotPolicyIds) { DARABONBA_PTR_SET_VALUE(snapshotPolicyIds_, snapshotPolicyIds) };
    inline DescribeSecurityGroupAttributeResponseBody& setSnapshotPolicyIds(DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds && snapshotPolicyIds) { DARABONBA_PTR_SET_RVALUE(snapshotPolicyIds_, snapshotPolicyIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The description of the security group.
    std::shared_ptr<string> description_ = nullptr;
    // The access control policy of the security group. Valid values:
    // 
    // *   Accept: All instances in the security group can communicate with each other.
    // *   Drop: All instances in the security group are isolated from each other.
    std::shared_ptr<string> innerAccessPolicy_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If the return value of this parameter is empty when you specify `MaxResults` and `NextToken` for a paged query, no more results are to be returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Details about the security group rules.
    std::shared_ptr<DescribeSecurityGroupAttributeResponseBodyPermissions> permissions_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The name of the security group.
    std::shared_ptr<string> securityGroupName_ = nullptr;
    std::shared_ptr<DescribeSecurityGroupAttributeResponseBodySnapshotPolicyIds> snapshotPolicyIds_ = nullptr;
    // The ID of the VPC. If a VPC ID is returned, the network type of the security group is VPC. If no VPC ID is returned, the network type of the security group is classic network.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
