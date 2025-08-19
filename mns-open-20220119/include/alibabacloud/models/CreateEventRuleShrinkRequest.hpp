// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class CreateEventRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeliveryMode, deliveryMode_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpointShrink_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpointsShrink_);
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypesShrink_);
      DARABONBA_PTR_TO_JSON(MatchRules, matchRulesShrink_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeliveryMode, deliveryMode_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpointShrink_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpointsShrink_);
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypesShrink_);
      DARABONBA_PTR_FROM_JSON(MatchRules, matchRulesShrink_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    CreateEventRuleShrinkRequest() = default ;
    CreateEventRuleShrinkRequest(const CreateEventRuleShrinkRequest &) = default ;
    CreateEventRuleShrinkRequest(CreateEventRuleShrinkRequest &&) = default ;
    CreateEventRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventRuleShrinkRequest() = default ;
    CreateEventRuleShrinkRequest& operator=(const CreateEventRuleShrinkRequest &) = default ;
    CreateEventRuleShrinkRequest& operator=(CreateEventRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->deliveryMode_ != nullptr && this->endpointShrink_ != nullptr && this->endpointsShrink_ != nullptr && this->eventTypesShrink_ != nullptr && this->matchRulesShrink_ != nullptr
        && this->productName_ != nullptr && this->ruleName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEventRuleShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deliveryMode Field Functions 
    bool hasDeliveryMode() const { return this->deliveryMode_ != nullptr;};
    void deleteDeliveryMode() { this->deliveryMode_ = nullptr;};
    inline string deliveryMode() const { DARABONBA_PTR_GET_DEFAULT(deliveryMode_, "") };
    inline CreateEventRuleShrinkRequest& setDeliveryMode(string deliveryMode) { DARABONBA_PTR_SET_VALUE(deliveryMode_, deliveryMode) };


    // endpointShrink Field Functions 
    bool hasEndpointShrink() const { return this->endpointShrink_ != nullptr;};
    void deleteEndpointShrink() { this->endpointShrink_ = nullptr;};
    inline string endpointShrink() const { DARABONBA_PTR_GET_DEFAULT(endpointShrink_, "") };
    inline CreateEventRuleShrinkRequest& setEndpointShrink(string endpointShrink) { DARABONBA_PTR_SET_VALUE(endpointShrink_, endpointShrink) };


    // endpointsShrink Field Functions 
    bool hasEndpointsShrink() const { return this->endpointsShrink_ != nullptr;};
    void deleteEndpointsShrink() { this->endpointsShrink_ = nullptr;};
    inline string endpointsShrink() const { DARABONBA_PTR_GET_DEFAULT(endpointsShrink_, "") };
    inline CreateEventRuleShrinkRequest& setEndpointsShrink(string endpointsShrink) { DARABONBA_PTR_SET_VALUE(endpointsShrink_, endpointsShrink) };


    // eventTypesShrink Field Functions 
    bool hasEventTypesShrink() const { return this->eventTypesShrink_ != nullptr;};
    void deleteEventTypesShrink() { this->eventTypesShrink_ = nullptr;};
    inline string eventTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(eventTypesShrink_, "") };
    inline CreateEventRuleShrinkRequest& setEventTypesShrink(string eventTypesShrink) { DARABONBA_PTR_SET_VALUE(eventTypesShrink_, eventTypesShrink) };


    // matchRulesShrink Field Functions 
    bool hasMatchRulesShrink() const { return this->matchRulesShrink_ != nullptr;};
    void deleteMatchRulesShrink() { this->matchRulesShrink_ = nullptr;};
    inline string matchRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(matchRulesShrink_, "") };
    inline CreateEventRuleShrinkRequest& setMatchRulesShrink(string matchRulesShrink) { DARABONBA_PTR_SET_VALUE(matchRulesShrink_, matchRulesShrink) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline CreateEventRuleShrinkRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateEventRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> deliveryMode_ = nullptr;
    std::shared_ptr<string> endpointShrink_ = nullptr;
    std::shared_ptr<string> endpointsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventTypesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> matchRulesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
