// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RuleNamePrefix, ruleNamePrefix_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RuleNamePrefix, ruleNamePrefix_);
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
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->limit_ != nullptr && this->nextToken_ != nullptr && this->ruleNamePrefix_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline ListRulesRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListRulesRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRulesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ruleNamePrefix Field Functions 
    bool hasRuleNamePrefix() const { return this->ruleNamePrefix_ != nullptr;};
    void deleteRuleNamePrefix() { this->ruleNamePrefix_ = nullptr;};
    inline string ruleNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(ruleNamePrefix_, "") };
    inline ListRulesRequest& setRuleNamePrefix(string ruleNamePrefix) { DARABONBA_PTR_SET_VALUE(ruleNamePrefix_, ruleNamePrefix) };


  protected:
    // The name of the event bus.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The maximum number of entries to be returned in a single call. You can use this parameter and the NextToken parameter to implement paging. A maximum of 100 entries can be returned in a single call.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // If you set the Limit parameter and excess return values exist, this parameter is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The prefix of the rule name.
    std::shared_ptr<string> ruleNamePrefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
