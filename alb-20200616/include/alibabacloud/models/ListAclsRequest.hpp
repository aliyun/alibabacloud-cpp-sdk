// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACLSREQUEST_HPP_
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
  class ListAclsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
      DARABONBA_PTR_TO_JSON(AclNames, aclNames_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
      DARABONBA_PTR_FROM_JSON(AclNames, aclNames_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListAclsRequest() = default ;
    ListAclsRequest(const ListAclsRequest &) = default ;
    ListAclsRequest(ListAclsRequest &&) = default ;
    ListAclsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclsRequest() = default ;
    ListAclsRequest& operator=(const ListAclsRequest &) = default ;
    ListAclsRequest& operator=(ListAclsRequest &&) = default ;
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
      // The tag key. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->aclIds_ == nullptr
        && this->aclNames_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // aclIds Field Functions 
    bool hasAclIds() const { return this->aclIds_ != nullptr;};
    void deleteAclIds() { this->aclIds_ = nullptr;};
    inline const vector<string> & getAclIds() const { DARABONBA_PTR_GET_CONST(aclIds_, vector<string>) };
    inline vector<string> getAclIds() { DARABONBA_PTR_GET(aclIds_, vector<string>) };
    inline ListAclsRequest& setAclIds(const vector<string> & aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };
    inline ListAclsRequest& setAclIds(vector<string> && aclIds) { DARABONBA_PTR_SET_RVALUE(aclIds_, aclIds) };


    // aclNames Field Functions 
    bool hasAclNames() const { return this->aclNames_ != nullptr;};
    void deleteAclNames() { this->aclNames_ = nullptr;};
    inline const vector<string> & getAclNames() const { DARABONBA_PTR_GET_CONST(aclNames_, vector<string>) };
    inline vector<string> getAclNames() { DARABONBA_PTR_GET(aclNames_, vector<string>) };
    inline ListAclsRequest& setAclNames(const vector<string> & aclNames) { DARABONBA_PTR_SET_VALUE(aclNames_, aclNames) };
    inline ListAclsRequest& setAclNames(vector<string> && aclNames) { DARABONBA_PTR_SET_RVALUE(aclNames_, aclNames) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAclsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAclsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListAclsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListAclsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListAclsRequest::Tag>) };
    inline vector<ListAclsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListAclsRequest::Tag>) };
    inline ListAclsRequest& setTag(const vector<ListAclsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListAclsRequest& setTag(vector<ListAclsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Filter access control lists (ACLs) by ACL ID. You can specify at most 20 ACL IDs in each call.
    shared_ptr<vector<string>> aclIds_ {};
    // The ACL names. You can specify up to 10 ACL names in each call.
    shared_ptr<vector<string>> aclNames_ {};
    // The maximum number of entries to return. This parameter is optional. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used for the next query. Valid values:
    // 
    // *   If this is your first query or no next query is to be sent, ignore this parameter.
    // *   If a next query is to be sent, set the value to the value of NextToken that is returned from the last call.
    shared_ptr<string> nextToken_ {};
    // The ID of the resource group. You can filter the query results based on the specified ID.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<vector<ListAclsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
