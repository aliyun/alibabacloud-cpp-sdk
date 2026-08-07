// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ListTagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagFilter, tagFilter_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagFilter, tagFilter_);
    };
    ListTagResourcesRequest() = default ;
    ListTagResourcesRequest(const ListTagResourcesRequest &) = default ;
    ListTagResourcesRequest(ListTagResourcesRequest &&) = default ;
    ListTagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesRequest() = default ;
    ListTagResourcesRequest& operator=(const ListTagResourcesRequest &) = default ;
    ListTagResourcesRequest& operator=(ListTagResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagFilter& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValues, tagValues_);
      };
      friend void from_json(const Darabonba::Json& j, TagFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValues, tagValues_);
      };
      TagFilter() = default ;
      TagFilter(const TagFilter &) = default ;
      TagFilter(TagFilter &&) = default ;
      TagFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagFilter() = default ;
      TagFilter& operator=(const TagFilter &) = default ;
      TagFilter& operator=(TagFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValues_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline TagFilter& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValues Field Functions 
      bool hasTagValues() const { return this->tagValues_ != nullptr;};
      void deleteTagValues() { this->tagValues_ = nullptr;};
      inline const vector<string> & getTagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, vector<string>) };
      inline vector<string> getTagValues() { DARABONBA_PTR_GET(tagValues_, vector<string>) };
      inline TagFilter& setTagValues(const vector<string> & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
      inline TagFilter& setTagValues(vector<string> && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


    protected:
      // The tag key used to perform a fuzzy search for ECS resources. The tag key must be 1 to 128 characters in length. Valid values of N: 1 to 5.
      // 
      // `TagFilter.N` is used to perform a fuzzy search for ECS resources that have the specified tags bound. It consists of a key and one or more values. A fuzzy search may have a latency of up to 2 seconds and supports only scenarios where the number of resources after fuzzy filtering is less than or equal to 5,000.
      // 
      // - When you perform a fuzzy search for ECS resources by tag key (`TagFilter.N.TagKey`), the tag value (`TagFilter.N.TagValues.N`) must be empty. For example, to perform a fuzzy search for ECS resources whose tag key is `environment`, you can set `TagFilter.1.TagKey` to `env*` (prefix match), `*env*` (infix match), or `env` (exact match), and `TagFilter.1.TagValues` must be empty.
      // 
      // - When you perform a fuzzy search for ECS resources by tag value (`TagFilter.N.TagValues.N`), the tag key (`TagFilter.N.TagKey`) must be set to an exact value. For example, to perform a fuzzy search for ECS resources whose tag key is `env` and tag value is `product`, `TagFilter.1.TagKey` must be set to the exact value `env`, and `TagFilter.1.TagValues.1` can be set to `proc*` (prefix match), `*proc*` (infix match), or `proc` (exact match). Only one search method can be used for the same `TagKey`. If multiple search methods are specified, the first method takes precedence.
      // 
      // - Tag keys have an AND relationship. Only ECS resources that match all specified tag keys are returned.
      // 
      // - Tag values under the same tag key have an OR relationship. ECS resources that match any of the tag values specified for a tag key are returned.
      // 
      // > The `TagFilter.N` and `Tag.N` parameters cannot be used at the same time. Otherwise, an error message is returned.
      shared_ptr<string> tagKey_ {};
      // The tag value used to perform a fuzzy search for ECS resources. The tag value must be 1 to 128 characters in length. Valid values of N: 1 to 5. For the metric description, see the `TagFilter.N.TagKey` parameter description.
      shared_ptr<vector<string>> tagValues_ {};
    };

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
      // The tag key used to perform an exact search for ECS resources. The tag key must be 1 to 128 characters in length. Valid values of N: 1 to 20.
      // 
      // Usage notes of the `Tag.N` parameter:
      // 
      // - Method 1: Used to perform an exact search for ECS resources that have the specified tags bound. Each tag is a key-value pair.
      // 
      //     - If you specify only `Tag.N.Key`, all resources associated with the tag key are returned.
      // 
      //     - If you specify only `Tag.N.Value`, the `InvalidParameter.TagValue` error is returned.
      // 
      //     - If you specify multiple tag key-value pairs at the same time, only ECS resources that match all the specified tag key-value pairs are returned.
      // 
      // - Method 2: Used to query resource information in non-default resource groups. Set `Key` to `acs:rm:rgId` and set the corresponding `Value` to the resource group ID.
      // 
      //     - If `Key` is set to `acs:rm:rgId`, `Value` can only be set to a non-default resource group ID. If the specified resource group ID is the default resource group, an error message is returned.
      // 
      //     - If `Key` is set to `acs:rm:rgId`, you cannot specify other tag key-value pairs. If you use multiple `Tag.N` parameters to query resources by resource group and tags at the same time, an error message is returned.
      shared_ptr<string> key_ {};
      // The tag value used to perform an exact search for ECS resources. The tag value must be 1 to 128 characters in length. Valid values of N: 1 to 20.
      // 
      // > If `Key=acs:rm:rgId`, this parameter can only be set to a resource group ID, and the resource group ID cannot be the default resource group.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr && this->tag_ == nullptr && this->tagFilter_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTagResourcesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTagResourcesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & getResourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> getResourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline ListTagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline ListTagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTagResourcesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTagResourcesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListTagResourcesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListTagResourcesRequest::Tag>) };
    inline vector<ListTagResourcesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListTagResourcesRequest::Tag>) };
    inline ListTagResourcesRequest& setTag(const vector<ListTagResourcesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListTagResourcesRequest& setTag(vector<ListTagResourcesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tagFilter Field Functions 
    bool hasTagFilter() const { return this->tagFilter_ != nullptr;};
    void deleteTagFilter() { this->tagFilter_ = nullptr;};
    inline const vector<ListTagResourcesRequest::TagFilter> & getTagFilter() const { DARABONBA_PTR_GET_CONST(tagFilter_, vector<ListTagResourcesRequest::TagFilter>) };
    inline vector<ListTagResourcesRequest::TagFilter> getTagFilter() { DARABONBA_PTR_GET(tagFilter_, vector<ListTagResourcesRequest::TagFilter>) };
    inline ListTagResourcesRequest& setTagFilter(const vector<ListTagResourcesRequest::TagFilter> & tagFilter) { DARABONBA_PTR_SET_VALUE(tagFilter_, tagFilter) };
    inline ListTagResourcesRequest& setTagFilter(vector<ListTagResourcesRequest::TagFilter> && tagFilter) { DARABONBA_PTR_SET_RVALUE(tagFilter_, tagFilter) };


  protected:
    // The token used to start the next query.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the resource. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ECS resource ID. Valid values of N: 1 to 50.
    shared_ptr<vector<string>> resourceId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The resource type. Valid values:
    // 
    // - instance: ECS instance.
    // - disk: cloud disk.
    // - snapshot: snapshot.
    // - image: image.
    // - securitygroup: security group.
    // - volume: storage volume.
    // - eni: Elastic Network Interface (ENI).
    // - ddh: dedicated host.
    // - ddhcluster: dedicated host cluster.
    // - keypair: SSH key pair.
    // - launchtemplate: launch template.
    // - reservedinstance: reserved instance.
    // - snapshotpolicy: automatic snapshot policy.
    // - elasticityassurance: elasticity assurance.
    // - capacityreservation: capacity reservation.
    // - command: Cloud Assistant command.
    // - invocation: Cloud Assistant command execution or file sending result.
    // - activation: Cloud Assistant managed instance activation code.
    // - managedinstance: Cloud Assistant managed instance.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The tags.
    shared_ptr<vector<ListTagResourcesRequest::Tag>> tag_ {};
    // The tag filter rules.
    // 
    // 
    // > This parameter is in invitational preview and is not publicly available.
    shared_ptr<vector<ListTagResourcesRequest::TagFilter>> tagFilter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
