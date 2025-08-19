// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventRuleResponseBodyDataEndpoint.hpp>
#include <vector>
#include <alibabacloud/models/EventMatchRule.hpp>
#include <alibabacloud/models/GetEventRuleResponseBodyDataSubscriptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetEventRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryMode, deliveryMode_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(MatchRules, matchRules_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Subscriptions, subscriptions_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryMode, deliveryMode_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(MatchRules, matchRules_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Subscriptions, subscriptions_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    GetEventRuleResponseBodyData() = default ;
    GetEventRuleResponseBodyData(const GetEventRuleResponseBodyData &) = default ;
    GetEventRuleResponseBodyData(GetEventRuleResponseBodyData &&) = default ;
    GetEventRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventRuleResponseBodyData() = default ;
    GetEventRuleResponseBodyData& operator=(const GetEventRuleResponseBodyData &) = default ;
    GetEventRuleResponseBodyData& operator=(GetEventRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliveryMode_ != nullptr
        && this->endpoint_ != nullptr && this->eventTypes_ != nullptr && this->matchRules_ != nullptr && this->ruleName_ != nullptr && this->subscriptions_ != nullptr
        && this->topicName_ != nullptr; };
    // deliveryMode Field Functions 
    bool hasDeliveryMode() const { return this->deliveryMode_ != nullptr;};
    void deleteDeliveryMode() { this->deliveryMode_ = nullptr;};
    inline string deliveryMode() const { DARABONBA_PTR_GET_DEFAULT(deliveryMode_, "") };
    inline GetEventRuleResponseBodyData& setDeliveryMode(string deliveryMode) { DARABONBA_PTR_SET_VALUE(deliveryMode_, deliveryMode) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline const Models::GetEventRuleResponseBodyDataEndpoint & endpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, Models::GetEventRuleResponseBodyDataEndpoint) };
    inline Models::GetEventRuleResponseBodyDataEndpoint endpoint() { DARABONBA_PTR_GET(endpoint_, Models::GetEventRuleResponseBodyDataEndpoint) };
    inline GetEventRuleResponseBodyData& setEndpoint(const Models::GetEventRuleResponseBodyDataEndpoint & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
    inline GetEventRuleResponseBodyData& setEndpoint(Models::GetEventRuleResponseBodyDataEndpoint && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline const vector<string> & eventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<string>) };
    inline vector<string> eventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<string>) };
    inline GetEventRuleResponseBodyData& setEventTypes(const vector<string> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
    inline GetEventRuleResponseBodyData& setEventTypes(vector<string> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


    // matchRules Field Functions 
    bool hasMatchRules() const { return this->matchRules_ != nullptr;};
    void deleteMatchRules() { this->matchRules_ = nullptr;};
    inline const vector<vector<Models::EventMatchRule>> & matchRules() const { DARABONBA_PTR_GET_CONST(matchRules_, vector<vector<Models::EventMatchRule>>) };
    inline vector<vector<Models::EventMatchRule>> matchRules() { DARABONBA_PTR_GET(matchRules_, vector<vector<Models::EventMatchRule>>) };
    inline GetEventRuleResponseBodyData& setMatchRules(const vector<vector<Models::EventMatchRule>> & matchRules) { DARABONBA_PTR_SET_VALUE(matchRules_, matchRules) };
    inline GetEventRuleResponseBodyData& setMatchRules(vector<vector<Models::EventMatchRule>> && matchRules) { DARABONBA_PTR_SET_RVALUE(matchRules_, matchRules) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetEventRuleResponseBodyData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // subscriptions Field Functions 
    bool hasSubscriptions() const { return this->subscriptions_ != nullptr;};
    void deleteSubscriptions() { this->subscriptions_ = nullptr;};
    inline const vector<Models::GetEventRuleResponseBodyDataSubscriptions> & subscriptions() const { DARABONBA_PTR_GET_CONST(subscriptions_, vector<Models::GetEventRuleResponseBodyDataSubscriptions>) };
    inline vector<Models::GetEventRuleResponseBodyDataSubscriptions> subscriptions() { DARABONBA_PTR_GET(subscriptions_, vector<Models::GetEventRuleResponseBodyDataSubscriptions>) };
    inline GetEventRuleResponseBodyData& setSubscriptions(const vector<Models::GetEventRuleResponseBodyDataSubscriptions> & subscriptions) { DARABONBA_PTR_SET_VALUE(subscriptions_, subscriptions) };
    inline GetEventRuleResponseBodyData& setSubscriptions(vector<Models::GetEventRuleResponseBodyDataSubscriptions> && subscriptions) { DARABONBA_PTR_SET_RVALUE(subscriptions_, subscriptions) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetEventRuleResponseBodyData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    std::shared_ptr<string> deliveryMode_ = nullptr;
    std::shared_ptr<Models::GetEventRuleResponseBodyDataEndpoint> endpoint_ = nullptr;
    std::shared_ptr<vector<string>> eventTypes_ = nullptr;
    std::shared_ptr<vector<vector<Models::EventMatchRule>>> matchRules_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<vector<Models::GetEventRuleResponseBodyDataSubscriptions>> subscriptions_ = nullptr;
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
