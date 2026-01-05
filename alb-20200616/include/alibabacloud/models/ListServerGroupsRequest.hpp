// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListServerGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServerGroupIds, serverGroupIds_);
      DARABONBA_PTR_TO_JSON(ServerGroupNames, serverGroupNames_);
      DARABONBA_PTR_TO_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupIds, serverGroupIds_);
      DARABONBA_PTR_FROM_JSON(ServerGroupNames, serverGroupNames_);
      DARABONBA_PTR_FROM_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListServerGroupsRequest() = default ;
    ListServerGroupsRequest(const ListServerGroupsRequest &) = default ;
    ListServerGroupsRequest(ListServerGroupsRequest &&) = default ;
    ListServerGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerGroupsRequest() = default ;
    ListServerGroupsRequest& operator=(const ListServerGroupsRequest &) = default ;
    ListServerGroupsRequest& operator=(ListServerGroupsRequest &&) = default ;
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
      // The tag key. You can specify up to 10 tag keys.
      // 
      // The tag key can be up to 64 characters in length and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify up to 10 tag values.
      // 
      // The tag value can be up to 128 characters in length, and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr && this->serverGroupIds_ == nullptr && this->serverGroupNames_ == nullptr && this->serverGroupType_ == nullptr
        && this->tag_ == nullptr && this->vpcId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServerGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServerGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListServerGroupsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serverGroupIds Field Functions 
    bool hasServerGroupIds() const { return this->serverGroupIds_ != nullptr;};
    void deleteServerGroupIds() { this->serverGroupIds_ = nullptr;};
    inline const vector<string> & getServerGroupIds() const { DARABONBA_PTR_GET_CONST(serverGroupIds_, vector<string>) };
    inline vector<string> getServerGroupIds() { DARABONBA_PTR_GET(serverGroupIds_, vector<string>) };
    inline ListServerGroupsRequest& setServerGroupIds(const vector<string> & serverGroupIds) { DARABONBA_PTR_SET_VALUE(serverGroupIds_, serverGroupIds) };
    inline ListServerGroupsRequest& setServerGroupIds(vector<string> && serverGroupIds) { DARABONBA_PTR_SET_RVALUE(serverGroupIds_, serverGroupIds) };


    // serverGroupNames Field Functions 
    bool hasServerGroupNames() const { return this->serverGroupNames_ != nullptr;};
    void deleteServerGroupNames() { this->serverGroupNames_ = nullptr;};
    inline const vector<string> & getServerGroupNames() const { DARABONBA_PTR_GET_CONST(serverGroupNames_, vector<string>) };
    inline vector<string> getServerGroupNames() { DARABONBA_PTR_GET(serverGroupNames_, vector<string>) };
    inline ListServerGroupsRequest& setServerGroupNames(const vector<string> & serverGroupNames) { DARABONBA_PTR_SET_VALUE(serverGroupNames_, serverGroupNames) };
    inline ListServerGroupsRequest& setServerGroupNames(vector<string> && serverGroupNames) { DARABONBA_PTR_SET_RVALUE(serverGroupNames_, serverGroupNames) };


    // serverGroupType Field Functions 
    bool hasServerGroupType() const { return this->serverGroupType_ != nullptr;};
    void deleteServerGroupType() { this->serverGroupType_ = nullptr;};
    inline string getServerGroupType() const { DARABONBA_PTR_GET_DEFAULT(serverGroupType_, "") };
    inline ListServerGroupsRequest& setServerGroupType(string serverGroupType) { DARABONBA_PTR_SET_VALUE(serverGroupType_, serverGroupType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListServerGroupsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListServerGroupsRequest::Tag>) };
    inline vector<ListServerGroupsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListServerGroupsRequest::Tag>) };
    inline ListServerGroupsRequest& setTag(const vector<ListServerGroupsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListServerGroupsRequest& setTag(vector<ListServerGroupsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListServerGroupsRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of entries per page. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    shared_ptr<string> nextToken_ {};
    // The ID of the resource group to which the server group belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The server group IDs.
    shared_ptr<vector<string>> serverGroupIds_ {};
    // The names of the server groups to be queried. You can specify at most 10 server group names.
    shared_ptr<vector<string>> serverGroupNames_ {};
    // The server group type. Valid values:
    // 
    // *   **Instance**: instances, including ECS instances, ENIs, and elastic container instances.
    // *   **Ip**: IP addresses.
    // *   **Fc**: Function Compute
    shared_ptr<string> serverGroupType_ {};
    // The tags that are added to the server group. You can specify up to 10 tags in each call.
    shared_ptr<vector<ListServerGroupsRequest::Tag>> tag_ {};
    // The ID of the virtual private cloud (VPC).
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
