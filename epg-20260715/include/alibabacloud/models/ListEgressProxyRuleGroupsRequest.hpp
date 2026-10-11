// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEGRESSPROXYRULEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEGRESSPROXYRULEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class ListEgressProxyRuleGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEgressProxyRuleGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupIds, egressProxyRuleGroupIds_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupNames, egressProxyRuleGroupNames_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListEgressProxyRuleGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupIds, egressProxyRuleGroupIds_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupNames, egressProxyRuleGroupNames_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListEgressProxyRuleGroupsRequest() = default ;
    ListEgressProxyRuleGroupsRequest(const ListEgressProxyRuleGroupsRequest &) = default ;
    ListEgressProxyRuleGroupsRequest(ListEgressProxyRuleGroupsRequest &&) = default ;
    ListEgressProxyRuleGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEgressProxyRuleGroupsRequest() = default ;
    ListEgressProxyRuleGroupsRequest& operator=(const ListEgressProxyRuleGroupsRequest &) = default ;
    ListEgressProxyRuleGroupsRequest& operator=(ListEgressProxyRuleGroupsRequest &&) = default ;
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->egressProxyRuleGroupIds_ == nullptr
        && this->egressProxyRuleGroupNames_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr && this->skip_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr; };
    // egressProxyRuleGroupIds Field Functions 
    bool hasEgressProxyRuleGroupIds() const { return this->egressProxyRuleGroupIds_ != nullptr;};
    void deleteEgressProxyRuleGroupIds() { this->egressProxyRuleGroupIds_ = nullptr;};
    inline const vector<string> & getEgressProxyRuleGroupIds() const { DARABONBA_PTR_GET_CONST(egressProxyRuleGroupIds_, vector<string>) };
    inline vector<string> getEgressProxyRuleGroupIds() { DARABONBA_PTR_GET(egressProxyRuleGroupIds_, vector<string>) };
    inline ListEgressProxyRuleGroupsRequest& setEgressProxyRuleGroupIds(const vector<string> & egressProxyRuleGroupIds) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupIds_, egressProxyRuleGroupIds) };
    inline ListEgressProxyRuleGroupsRequest& setEgressProxyRuleGroupIds(vector<string> && egressProxyRuleGroupIds) { DARABONBA_PTR_SET_RVALUE(egressProxyRuleGroupIds_, egressProxyRuleGroupIds) };


    // egressProxyRuleGroupNames Field Functions 
    bool hasEgressProxyRuleGroupNames() const { return this->egressProxyRuleGroupNames_ != nullptr;};
    void deleteEgressProxyRuleGroupNames() { this->egressProxyRuleGroupNames_ = nullptr;};
    inline const vector<string> & getEgressProxyRuleGroupNames() const { DARABONBA_PTR_GET_CONST(egressProxyRuleGroupNames_, vector<string>) };
    inline vector<string> getEgressProxyRuleGroupNames() { DARABONBA_PTR_GET(egressProxyRuleGroupNames_, vector<string>) };
    inline ListEgressProxyRuleGroupsRequest& setEgressProxyRuleGroupNames(const vector<string> & egressProxyRuleGroupNames) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupNames_, egressProxyRuleGroupNames) };
    inline ListEgressProxyRuleGroupsRequest& setEgressProxyRuleGroupNames(vector<string> && egressProxyRuleGroupNames) { DARABONBA_PTR_SET_RVALUE(egressProxyRuleGroupNames_, egressProxyRuleGroupNames) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEgressProxyRuleGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEgressProxyRuleGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListEgressProxyRuleGroupsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListEgressProxyRuleGroupsRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEgressProxyRuleGroupsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListEgressProxyRuleGroupsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListEgressProxyRuleGroupsRequest::Tag>) };
    inline vector<ListEgressProxyRuleGroupsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListEgressProxyRuleGroupsRequest::Tag>) };
    inline ListEgressProxyRuleGroupsRequest& setTag(const vector<ListEgressProxyRuleGroupsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListEgressProxyRuleGroupsRequest& setTag(vector<ListEgressProxyRuleGroupsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    shared_ptr<vector<string>> egressProxyRuleGroupIds_ {};
    shared_ptr<vector<string>> egressProxyRuleGroupNames_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int32_t> skip_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<ListEgressProxyRuleGroupsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
