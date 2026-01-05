// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESREQUEST_HPP_
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
  class ListRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(ListenerIds, listenerIds_);
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(ListenerIds, listenerIds_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListRulesRequest() = default ;
    ListRulesRequest(const ListRulesRequest &) = default ;
    ListRulesRequest(ListRulesRequest &&) = default ;
    ListRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesRequest() = default ;
    ListRulesRequest& operator=(const ListRulesRequest &) = default ;
    ListRulesRequest& operator=(ListRulesRequest &&) = default ;
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
      // The tag key. The tag key can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->direction_ == nullptr
        && this->listenerIds_ == nullptr && this->loadBalancerIds_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->ruleIds_ == nullptr
        && this->tag_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListRulesRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // listenerIds Field Functions 
    bool hasListenerIds() const { return this->listenerIds_ != nullptr;};
    void deleteListenerIds() { this->listenerIds_ = nullptr;};
    inline const vector<string> & getListenerIds() const { DARABONBA_PTR_GET_CONST(listenerIds_, vector<string>) };
    inline vector<string> getListenerIds() { DARABONBA_PTR_GET(listenerIds_, vector<string>) };
    inline ListRulesRequest& setListenerIds(const vector<string> & listenerIds) { DARABONBA_PTR_SET_VALUE(listenerIds_, listenerIds) };
    inline ListRulesRequest& setListenerIds(vector<string> && listenerIds) { DARABONBA_PTR_SET_RVALUE(listenerIds_, listenerIds) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline const vector<string> & getLoadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, vector<string>) };
    inline vector<string> getLoadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, vector<string>) };
    inline ListRulesRequest& setLoadBalancerIds(const vector<string> & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
    inline ListRulesRequest& setLoadBalancerIds(vector<string> && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRulesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRulesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const vector<string> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<string>) };
    inline vector<string> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<string>) };
    inline ListRulesRequest& setRuleIds(const vector<string> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline ListRulesRequest& setRuleIds(vector<string> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListRulesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListRulesRequest::Tag>) };
    inline vector<ListRulesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListRulesRequest::Tag>) };
    inline ListRulesRequest& setTag(const vector<ListRulesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListRulesRequest& setTag(vector<ListRulesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The direction to which the forwarding rule is applied. Valid values:
    // 
    // *   **Request** (default): The forwarding rule is applied to the client requests received by ALB.
    // *   **Response**: The forwarding rule is applied to the responses returned by backend servers.
    // 
    // > You cannot set this parameter to Response if you use basic ALB instances.
    shared_ptr<string> direction_ {};
    // The listener IDs.
    shared_ptr<vector<string>> listenerIds_ {};
    // The Application Load Balancer (ALB) instance IDs.
    shared_ptr<vector<string>> loadBalancerIds_ {};
    // The maximum number of entries to return.
    // 
    // Valid values: **1 to 100**.
    // 
    // Default value: **20**. If you do not specify this parameter, the default value is used.
    // 
    // > This parameter is optional.
    shared_ptr<int32_t> maxResults_ {};
    // The starting point of the current query. If you do not specify this parameter, the query starts from the beginning.
    shared_ptr<string> nextToken_ {};
    // The forwarding rules.
    shared_ptr<vector<string>> ruleIds_ {};
    // The tag.
    shared_ptr<vector<ListRulesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
