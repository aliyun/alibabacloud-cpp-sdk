// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcPeerConnectionsShrinkRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class ListVpcPeerConnectionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcPeerConnectionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcIdShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcPeerConnectionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcIdShrink_);
    };
    ListVpcPeerConnectionsShrinkRequest() = default ;
    ListVpcPeerConnectionsShrinkRequest(const ListVpcPeerConnectionsShrinkRequest &) = default ;
    ListVpcPeerConnectionsShrinkRequest(ListVpcPeerConnectionsShrinkRequest &&) = default ;
    ListVpcPeerConnectionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcPeerConnectionsShrinkRequest() = default ;
    ListVpcPeerConnectionsShrinkRequest& operator=(const ListVpcPeerConnectionsShrinkRequest &) = default ;
    ListVpcPeerConnectionsShrinkRequest& operator=(ListVpcPeerConnectionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->maxResults_ != nullptr && this->name_ != nullptr && this->nextToken_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->tags_ != nullptr && this->vpcIdShrink_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcPeerConnectionsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListVpcPeerConnectionsShrinkRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListVpcPeerConnectionsShrinkRequestTags>) };
    inline vector<ListVpcPeerConnectionsShrinkRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListVpcPeerConnectionsShrinkRequestTags>) };
    inline ListVpcPeerConnectionsShrinkRequest& setTags(const vector<ListVpcPeerConnectionsShrinkRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVpcPeerConnectionsShrinkRequest& setTags(vector<ListVpcPeerConnectionsShrinkRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcIdShrink Field Functions 
    bool hasVpcIdShrink() const { return this->vpcIdShrink_ != nullptr;};
    void deleteVpcIdShrink() { this->vpcIdShrink_ = nullptr;};
    inline string vpcIdShrink() const { DARABONBA_PTR_GET_DEFAULT(vpcIdShrink_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setVpcIdShrink(string vpcIdShrink) { DARABONBA_PTR_SET_VALUE(vpcIdShrink_, vpcIdShrink) };


  protected:
    // The ID of the VPC peering connection that you want to query.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of entries to return per page. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The name of the VPC peering connection that you want to query.
    std::shared_ptr<string> name_ = nullptr;
    // The token that is used for the next query. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region where you want to query VPC peering connections.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    // 
    // For more information about resource groups, see [What is a resource group?](https://help.aliyun.com/document_detail/94475.html)
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<ListVpcPeerConnectionsShrinkRequestTags>> tags_ = nullptr;
    // The ID of the requester VPC or accepter VPC of the VPC peering connection that you want to query.
    std::shared_ptr<string> vpcIdShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
