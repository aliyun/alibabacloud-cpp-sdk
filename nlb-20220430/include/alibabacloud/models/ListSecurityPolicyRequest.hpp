// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListSecurityPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyIds, securityPolicyIds_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyNames, securityPolicyNames_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyIds, securityPolicyIds_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyNames, securityPolicyNames_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListSecurityPolicyRequest() = default ;
    ListSecurityPolicyRequest(const ListSecurityPolicyRequest &) = default ;
    ListSecurityPolicyRequest(ListSecurityPolicyRequest &&) = default ;
    ListSecurityPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPolicyRequest() = default ;
    ListSecurityPolicyRequest& operator=(const ListSecurityPolicyRequest &) = default ;
    ListSecurityPolicyRequest& operator=(ListSecurityPolicyRequest &&) = default ;
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
      // The tag key can be up to 64 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify up to 10 tag values.
      // 
      // The tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityPolicyIds_ == nullptr && this->securityPolicyNames_ == nullptr
        && this->tag_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSecurityPolicyRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSecurityPolicyRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSecurityPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListSecurityPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityPolicyIds Field Functions 
    bool hasSecurityPolicyIds() const { return this->securityPolicyIds_ != nullptr;};
    void deleteSecurityPolicyIds() { this->securityPolicyIds_ = nullptr;};
    inline const vector<string> & getSecurityPolicyIds() const { DARABONBA_PTR_GET_CONST(securityPolicyIds_, vector<string>) };
    inline vector<string> getSecurityPolicyIds() { DARABONBA_PTR_GET(securityPolicyIds_, vector<string>) };
    inline ListSecurityPolicyRequest& setSecurityPolicyIds(const vector<string> & securityPolicyIds) { DARABONBA_PTR_SET_VALUE(securityPolicyIds_, securityPolicyIds) };
    inline ListSecurityPolicyRequest& setSecurityPolicyIds(vector<string> && securityPolicyIds) { DARABONBA_PTR_SET_RVALUE(securityPolicyIds_, securityPolicyIds) };


    // securityPolicyNames Field Functions 
    bool hasSecurityPolicyNames() const { return this->securityPolicyNames_ != nullptr;};
    void deleteSecurityPolicyNames() { this->securityPolicyNames_ = nullptr;};
    inline const vector<string> & getSecurityPolicyNames() const { DARABONBA_PTR_GET_CONST(securityPolicyNames_, vector<string>) };
    inline vector<string> getSecurityPolicyNames() { DARABONBA_PTR_GET(securityPolicyNames_, vector<string>) };
    inline ListSecurityPolicyRequest& setSecurityPolicyNames(const vector<string> & securityPolicyNames) { DARABONBA_PTR_SET_VALUE(securityPolicyNames_, securityPolicyNames) };
    inline ListSecurityPolicyRequest& setSecurityPolicyNames(vector<string> && securityPolicyNames) { DARABONBA_PTR_SET_RVALUE(securityPolicyNames_, securityPolicyNames) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListSecurityPolicyRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListSecurityPolicyRequest::Tag>) };
    inline vector<ListSecurityPolicyRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListSecurityPolicyRequest::Tag>) };
    inline ListSecurityPolicyRequest& setTag(const vector<ListSecurityPolicyRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListSecurityPolicyRequest& setTag(vector<ListSecurityPolicyRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The number of entries to return per page. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The region ID of the NLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The IDs of the TLS security policies. You can specify at most 20 policy IDs in each call.
    shared_ptr<vector<string>> securityPolicyIds_ {};
    // The names of the TLS security policies. You can specify at most 20 policy names.
    shared_ptr<vector<string>> securityPolicyNames_ {};
    // The tags.
    shared_ptr<vector<ListSecurityPolicyRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
