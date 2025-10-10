// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRulesRequestTag.hpp>
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
    virtual bool empty() const override { this->direction_ != nullptr
        && this->listenerIds_ != nullptr && this->loadBalancerIds_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->ruleIds_ != nullptr
        && this->tag_ != nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListRulesRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // listenerIds Field Functions 
    bool hasListenerIds() const { return this->listenerIds_ != nullptr;};
    void deleteListenerIds() { this->listenerIds_ = nullptr;};
    inline const vector<string> & listenerIds() const { DARABONBA_PTR_GET_CONST(listenerIds_, vector<string>) };
    inline vector<string> listenerIds() { DARABONBA_PTR_GET(listenerIds_, vector<string>) };
    inline ListRulesRequest& setListenerIds(const vector<string> & listenerIds) { DARABONBA_PTR_SET_VALUE(listenerIds_, listenerIds) };
    inline ListRulesRequest& setListenerIds(vector<string> && listenerIds) { DARABONBA_PTR_SET_RVALUE(listenerIds_, listenerIds) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline const vector<string> & loadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, vector<string>) };
    inline vector<string> loadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, vector<string>) };
    inline ListRulesRequest& setLoadBalancerIds(const vector<string> & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
    inline ListRulesRequest& setLoadBalancerIds(vector<string> && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRulesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRulesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const vector<string> & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<string>) };
    inline vector<string> ruleIds() { DARABONBA_PTR_GET(ruleIds_, vector<string>) };
    inline ListRulesRequest& setRuleIds(const vector<string> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline ListRulesRequest& setRuleIds(vector<string> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListRulesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListRulesRequestTag>) };
    inline vector<ListRulesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListRulesRequestTag>) };
    inline ListRulesRequest& setTag(const vector<ListRulesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListRulesRequest& setTag(vector<ListRulesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The direction to which the forwarding rule is applied. Valid values:
    // 
    // *   **Request** (default): The forwarding rule is applied to the client requests received by ALB.
    // *   **Response**: The forwarding rule is applied to the responses returned by backend servers.
    // 
    // > You cannot set this parameter to Response if you use basic ALB instances.
    std::shared_ptr<string> direction_ = nullptr;
    // The listener IDs.
    std::shared_ptr<vector<string>> listenerIds_ = nullptr;
    // The Application Load Balancer (ALB) instance IDs.
    std::shared_ptr<vector<string>> loadBalancerIds_ = nullptr;
    // The maximum number of entries to return.
    // 
    // Valid values: **1 to 100**.
    // 
    // Default value: **20**. If you do not specify this parameter, the default value is used.
    // 
    // > This parameter is optional.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The starting point of the current query. If you do not specify this parameter, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The forwarding rules.
    std::shared_ptr<vector<string>> ruleIds_ = nullptr;
    // The tag.
    std::shared_ptr<vector<ListRulesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
