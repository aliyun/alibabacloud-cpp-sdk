// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventRuleRequestEndpoint.hpp>
#include <vector>
#include <alibabacloud/models/CreateEventRuleRequestEndpoints.hpp>
#include <alibabacloud/models/EventMatchRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class CreateEventRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeliveryMode, deliveryMode_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(MatchRules, matchRules_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeliveryMode, deliveryMode_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(MatchRules, matchRules_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    CreateEventRuleRequest() = default ;
    CreateEventRuleRequest(const CreateEventRuleRequest &) = default ;
    CreateEventRuleRequest(CreateEventRuleRequest &&) = default ;
    CreateEventRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventRuleRequest() = default ;
    CreateEventRuleRequest& operator=(const CreateEventRuleRequest &) = default ;
    CreateEventRuleRequest& operator=(CreateEventRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->deliveryMode_ != nullptr && this->endpoint_ != nullptr && this->endpoints_ != nullptr && this->eventTypes_ != nullptr && this->matchRules_ != nullptr
        && this->productName_ != nullptr && this->ruleName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEventRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deliveryMode Field Functions 
    bool hasDeliveryMode() const { return this->deliveryMode_ != nullptr;};
    void deleteDeliveryMode() { this->deliveryMode_ = nullptr;};
    inline string deliveryMode() const { DARABONBA_PTR_GET_DEFAULT(deliveryMode_, "") };
    inline CreateEventRuleRequest& setDeliveryMode(string deliveryMode) { DARABONBA_PTR_SET_VALUE(deliveryMode_, deliveryMode) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline const CreateEventRuleRequestEndpoint & endpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, CreateEventRuleRequestEndpoint) };
    inline CreateEventRuleRequestEndpoint endpoint() { DARABONBA_PTR_GET(endpoint_, CreateEventRuleRequestEndpoint) };
    inline CreateEventRuleRequest& setEndpoint(const CreateEventRuleRequestEndpoint & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
    inline CreateEventRuleRequest& setEndpoint(CreateEventRuleRequestEndpoint && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<CreateEventRuleRequestEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<CreateEventRuleRequestEndpoints>) };
    inline vector<CreateEventRuleRequestEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<CreateEventRuleRequestEndpoints>) };
    inline CreateEventRuleRequest& setEndpoints(const vector<CreateEventRuleRequestEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline CreateEventRuleRequest& setEndpoints(vector<CreateEventRuleRequestEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline const vector<string> & eventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<string>) };
    inline vector<string> eventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<string>) };
    inline CreateEventRuleRequest& setEventTypes(const vector<string> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
    inline CreateEventRuleRequest& setEventTypes(vector<string> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


    // matchRules Field Functions 
    bool hasMatchRules() const { return this->matchRules_ != nullptr;};
    void deleteMatchRules() { this->matchRules_ = nullptr;};
    inline const vector<vector<EventMatchRule>> & matchRules() const { DARABONBA_PTR_GET_CONST(matchRules_, vector<vector<EventMatchRule>>) };
    inline vector<vector<EventMatchRule>> matchRules() { DARABONBA_PTR_GET(matchRules_, vector<vector<EventMatchRule>>) };
    inline CreateEventRuleRequest& setMatchRules(const vector<vector<EventMatchRule>> & matchRules) { DARABONBA_PTR_SET_VALUE(matchRules_, matchRules) };
    inline CreateEventRuleRequest& setMatchRules(vector<vector<EventMatchRule>> && matchRules) { DARABONBA_PTR_SET_RVALUE(matchRules_, matchRules) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline CreateEventRuleRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateEventRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> deliveryMode_ = nullptr;
    std::shared_ptr<CreateEventRuleRequestEndpoint> endpoint_ = nullptr;
    std::shared_ptr<vector<CreateEventRuleRequestEndpoints>> endpoints_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> eventTypes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<vector<EventMatchRule>>> matchRules_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
