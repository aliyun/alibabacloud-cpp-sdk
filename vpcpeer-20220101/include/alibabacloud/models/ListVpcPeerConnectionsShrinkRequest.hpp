// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. You can specify up to 20 tag keys. If you specify this parameter, it cannot be an empty string.
      // 
      // A tag key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify up to 20 tag values. If you specify this parameter, it can be an empty string.
      // 
      // A tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->maxResults_ == nullptr && this->name_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tags_ == nullptr && this->vpcIdShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcPeerConnectionsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListVpcPeerConnectionsShrinkRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListVpcPeerConnectionsShrinkRequest::Tags>) };
    inline vector<ListVpcPeerConnectionsShrinkRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListVpcPeerConnectionsShrinkRequest::Tags>) };
    inline ListVpcPeerConnectionsShrinkRequest& setTags(const vector<ListVpcPeerConnectionsShrinkRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVpcPeerConnectionsShrinkRequest& setTags(vector<ListVpcPeerConnectionsShrinkRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcIdShrink Field Functions 
    bool hasVpcIdShrink() const { return this->vpcIdShrink_ != nullptr;};
    void deleteVpcIdShrink() { this->vpcIdShrink_ = nullptr;};
    inline string getVpcIdShrink() const { DARABONBA_PTR_GET_DEFAULT(vpcIdShrink_, "") };
    inline ListVpcPeerConnectionsShrinkRequest& setVpcIdShrink(string vpcIdShrink) { DARABONBA_PTR_SET_VALUE(vpcIdShrink_, vpcIdShrink) };


  protected:
    // The instance ID of the VPC peering connection that you want to query.
    shared_ptr<string> instanceId_ {};
    // The number of entries to return on each page. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The name of the VPC peering connection that you want to query.
    shared_ptr<string> name_ {};
    // The token that is used to retrieve the next page of results. Valid values:
    // - If this is your first request or no subsequent request is to be sent, leave this parameter empty.
    // - If a subsequent request is to be sent, set the value to the NextToken value returned from the last API call.
    shared_ptr<string> nextToken_ {};
    // The region ID of the VPC peering connection that you want to query.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query region IDs.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    // 
    // For more information about resource groups, see [What is a resource group](https://help.aliyun.com/document_detail/94475.html).
    shared_ptr<string> resourceGroupId_ {};
    // The list of tags.
    shared_ptr<vector<ListVpcPeerConnectionsShrinkRequest::Tags>> tags_ {};
    // Filters the results by the VPC IDs of the initiator and acceptor. The filter does not distinguish between the initiator and the acceptor. If you specify only one VPC ID, the results are filtered based on the specified VPC ID.
    shared_ptr<string> vpcIdShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
