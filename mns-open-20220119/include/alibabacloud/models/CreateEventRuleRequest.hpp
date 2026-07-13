// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(EndpointValue, endpointValue_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(EndpointValue, endpointValue_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpointType_ == nullptr
        && this->endpointValue_ == nullptr; };
      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Endpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // endpointValue Field Functions 
      bool hasEndpointValue() const { return this->endpointValue_ != nullptr;};
      void deleteEndpointValue() { this->endpointValue_ = nullptr;};
      inline string getEndpointValue() const { DARABONBA_PTR_GET_DEFAULT(endpointValue_, "") };
      inline Endpoints& setEndpointValue(string endpointValue) { DARABONBA_PTR_SET_VALUE(endpointValue_, endpointValue) };


    protected:
      // Deprecated. Use Endpoint.EndpointType instead.
      shared_ptr<string> endpointType_ {};
      // Deprecated. Use Endpoint.EndpointValue instead.
      shared_ptr<string> endpointValue_ {};
    };

    class Endpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoint& obj) { 
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(EndpointValue, endpointValue_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(EndpointValue, endpointValue_);
      };
      Endpoint() = default ;
      Endpoint(const Endpoint &) = default ;
      Endpoint(Endpoint &&) = default ;
      Endpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoint() = default ;
      Endpoint& operator=(const Endpoint &) = default ;
      Endpoint& operator=(Endpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpointType_ == nullptr
        && this->endpointValue_ == nullptr; };
      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Endpoint& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // endpointValue Field Functions 
      bool hasEndpointValue() const { return this->endpointValue_ != nullptr;};
      void deleteEndpointValue() { this->endpointValue_ = nullptr;};
      inline string getEndpointValue() const { DARABONBA_PTR_GET_DEFAULT(endpointValue_, "") };
      inline Endpoint& setEndpointValue(string endpointValue) { DARABONBA_PTR_SET_VALUE(endpointValue_, endpointValue) };


    protected:
      // The endpoint type. Valid values:
      // 
      // - **topic**: The endpoint is a topic. A topic can deliver messages to multiple subscribers. You can add or remove subscribers later.
      // 
      // - **queue**: The endpoint is a queue. Messages are delivered directly to the queue. This simplifies the delivery path, but you cannot add new subscribers later.
      shared_ptr<string> endpointType_ {};
      // The value of the endpoint.
      shared_ptr<string> endpointValue_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->deliveryMode_ == nullptr && this->endpoint_ == nullptr && this->endpoints_ == nullptr && this->eventTypes_ == nullptr && this->matchRules_ == nullptr
        && this->productName_ == nullptr && this->ruleName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEventRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deliveryMode Field Functions 
    bool hasDeliveryMode() const { return this->deliveryMode_ != nullptr;};
    void deleteDeliveryMode() { this->deliveryMode_ = nullptr;};
    inline string getDeliveryMode() const { DARABONBA_PTR_GET_DEFAULT(deliveryMode_, "") };
    inline CreateEventRuleRequest& setDeliveryMode(string deliveryMode) { DARABONBA_PTR_SET_VALUE(deliveryMode_, deliveryMode) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline const CreateEventRuleRequest::Endpoint & getEndpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, CreateEventRuleRequest::Endpoint) };
    inline CreateEventRuleRequest::Endpoint getEndpoint() { DARABONBA_PTR_GET(endpoint_, CreateEventRuleRequest::Endpoint) };
    inline CreateEventRuleRequest& setEndpoint(const CreateEventRuleRequest::Endpoint & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
    inline CreateEventRuleRequest& setEndpoint(CreateEventRuleRequest::Endpoint && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<CreateEventRuleRequest::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<CreateEventRuleRequest::Endpoints>) };
    inline vector<CreateEventRuleRequest::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<CreateEventRuleRequest::Endpoints>) };
    inline CreateEventRuleRequest& setEndpoints(const vector<CreateEventRuleRequest::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline CreateEventRuleRequest& setEndpoints(vector<CreateEventRuleRequest::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline const vector<string> & getEventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<string>) };
    inline vector<string> getEventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<string>) };
    inline CreateEventRuleRequest& setEventTypes(const vector<string> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
    inline CreateEventRuleRequest& setEventTypes(vector<string> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


    // matchRules Field Functions 
    bool hasMatchRules() const { return this->matchRules_ != nullptr;};
    void deleteMatchRules() { this->matchRules_ = nullptr;};
    inline const vector<vector<EventMatchRule>> & getMatchRules() const { DARABONBA_PTR_GET_CONST(matchRules_, vector<vector<EventMatchRule>>) };
    inline vector<vector<EventMatchRule>> getMatchRules() { DARABONBA_PTR_GET(matchRules_, vector<vector<EventMatchRule>>) };
    inline CreateEventRuleRequest& setMatchRules(const vector<vector<EventMatchRule>> & matchRules) { DARABONBA_PTR_SET_VALUE(matchRules_, matchRules) };
    inline CreateEventRuleRequest& setMatchRules(vector<vector<EventMatchRule>> && matchRules) { DARABONBA_PTR_SET_RVALUE(matchRules_, matchRules) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline CreateEventRuleRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateEventRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // A client token to ensure the idempotence of the request.
    // 
    // Generate a unique value for this parameter from your client for each request.
    shared_ptr<string> clientToken_ {};
    // This parameter is deprecated.
    shared_ptr<string> deliveryMode_ {};
    // The endpoint that receives messages for this subscription.
    shared_ptr<CreateEventRuleRequest::Endpoint> endpoint_ {};
    // This parameter is deprecated. Use Endpoint instead.
    shared_ptr<vector<CreateEventRuleRequest::Endpoints>> endpoints_ {};
    // A list of event types.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> eventTypes_ {};
    // A list of matching rules. The logical relationship between the rules is OR.
    // 
    // This parameter is required.
    shared_ptr<vector<vector<EventMatchRule>>> matchRules_ {};
    // The name of the Alibaba Cloud product for which you want to receive event notifications.
    // 
    // This parameter is required.
    shared_ptr<string> productName_ {};
    // The name of the event rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
