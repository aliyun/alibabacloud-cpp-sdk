// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTETARGETGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTETARGETGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListRouteTargetGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRouteTargetGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroupIds, routeTargetGroupIds_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRouteTargetGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroupIds, routeTargetGroupIds_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListRouteTargetGroupsRequest() = default ;
    ListRouteTargetGroupsRequest(const ListRouteTargetGroupsRequest &) = default ;
    ListRouteTargetGroupsRequest(ListRouteTargetGroupsRequest &&) = default ;
    ListRouteTargetGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRouteTargetGroupsRequest() = default ;
    ListRouteTargetGroupsRequest& operator=(const ListRouteTargetGroupsRequest &) = default ;
    ListRouteTargetGroupsRequest& operator=(ListRouteTargetGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Resource tag key. Up to 20 tag keys are supported. If you need to pass this value, you cannot input an empty string.
      // 
      // A tag key can have up to 128 characters and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // Resource tag value. Up to 20 tag values are supported. If you need to pass this value, you can input an empty string.
      // 
      // A tag value can have up to 128 characters and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->maxResults_ == nullptr && this->memberId_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->routeTargetGroupIds_ == nullptr && this->tag_ == nullptr && this->vpcId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListRouteTargetGroupsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRouteTargetGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline ListRouteTargetGroupsRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRouteTargetGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListRouteTargetGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListRouteTargetGroupsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeTargetGroupIds Field Functions 
    bool hasRouteTargetGroupIds() const { return this->routeTargetGroupIds_ != nullptr;};
    void deleteRouteTargetGroupIds() { this->routeTargetGroupIds_ = nullptr;};
    inline const vector<string> & getRouteTargetGroupIds() const { DARABONBA_PTR_GET_CONST(routeTargetGroupIds_, vector<string>) };
    inline vector<string> getRouteTargetGroupIds() { DARABONBA_PTR_GET(routeTargetGroupIds_, vector<string>) };
    inline ListRouteTargetGroupsRequest& setRouteTargetGroupIds(const vector<string> & routeTargetGroupIds) { DARABONBA_PTR_SET_VALUE(routeTargetGroupIds_, routeTargetGroupIds) };
    inline ListRouteTargetGroupsRequest& setRouteTargetGroupIds(vector<string> && routeTargetGroupIds) { DARABONBA_PTR_SET_RVALUE(routeTargetGroupIds_, routeTargetGroupIds) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListRouteTargetGroupsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListRouteTargetGroupsRequest::Tag>) };
    inline vector<ListRouteTargetGroupsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListRouteTargetGroupsRequest::Tag>) };
    inline ListRouteTargetGroupsRequest& setTag(const vector<ListRouteTargetGroupsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListRouteTargetGroupsRequest& setTag(vector<ListRouteTargetGroupsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListRouteTargetGroupsRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Client token used to ensure idempotence of the request. Generate a unique parameter value from your client to ensure uniqueness across different requests. ClientToken only supports ASCII characters. Note: If you do not specify this, the system will automatically use the RequestId of the API request as the ClientToken identifier. The RequestId is different for each API request.
    shared_ptr<string> clientToken_ {};
    // Page size, with a range of **1** to **50**. Default value: **50**.
    shared_ptr<int32_t> maxResults_ {};
    // Route target group member instance ID.
    // Filters the route target groups that contain the specified member instance ID.
    shared_ptr<string> memberId_ {};
    // Token for the next query. Value: If it is the first query or there is no next query, this field does not need to be filled. If there is a next query, the value should be the NextToken returned from the previous API call.
    shared_ptr<string> nextToken_ {};
    // The region ID of the VPC to which the route target group belongs. You can obtain the region ID by calling the DescribeRegions interface.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Resource group ID. For more information about resource groups, see What is a Resource Group?
    shared_ptr<string> resourceGroupId_ {};
    // List of route target group instance IDs.
    // 
    // Up to 50 instance IDs can be queried at a time.
    shared_ptr<vector<string>> routeTargetGroupIds_ {};
    // List of tags.
    shared_ptr<vector<ListRouteTargetGroupsRequest::Tag>> tag_ {};
    // The ID of the VPC to which the route target group belongs.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
