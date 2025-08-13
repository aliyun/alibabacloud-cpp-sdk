// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYROUTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYROUTESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayRouteShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayRouteShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(DirectResponseJSON, directResponseJSONShrink_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainIdListJSON, domainIdListJSON_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(Fallback, fallback_);
      DARABONBA_PTR_TO_JSON(FallbackServices, fallbackServicesShrink_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(Predicates, predicatesShrink_);
      DARABONBA_PTR_TO_JSON(RedirectJSON, redirectJSONShrink_);
      DARABONBA_PTR_TO_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
      DARABONBA_PTR_TO_JSON(Services, servicesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayRouteShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(DirectResponseJSON, directResponseJSONShrink_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainIdListJSON, domainIdListJSON_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
      DARABONBA_PTR_FROM_JSON(FallbackServices, fallbackServicesShrink_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(Predicates, predicatesShrink_);
      DARABONBA_PTR_FROM_JSON(RedirectJSON, redirectJSONShrink_);
      DARABONBA_PTR_FROM_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
      DARABONBA_PTR_FROM_JSON(Services, servicesShrink_);
    };
    AddGatewayRouteShrinkRequest() = default ;
    AddGatewayRouteShrinkRequest(const AddGatewayRouteShrinkRequest &) = default ;
    AddGatewayRouteShrinkRequest(AddGatewayRouteShrinkRequest &&) = default ;
    AddGatewayRouteShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayRouteShrinkRequest() = default ;
    AddGatewayRouteShrinkRequest& operator=(const AddGatewayRouteShrinkRequest &) = default ;
    AddGatewayRouteShrinkRequest& operator=(AddGatewayRouteShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->description_ != nullptr && this->destinationType_ != nullptr && this->directResponseJSONShrink_ != nullptr && this->domainId_ != nullptr && this->domainIdListJSON_ != nullptr
        && this->enableWaf_ != nullptr && this->fallback_ != nullptr && this->fallbackServicesShrink_ != nullptr && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr
        && this->name_ != nullptr && this->policies_ != nullptr && this->predicatesShrink_ != nullptr && this->redirectJSONShrink_ != nullptr && this->routeOrder_ != nullptr
        && this->routeType_ != nullptr && this->servicesShrink_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddGatewayRouteShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddGatewayRouteShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline AddGatewayRouteShrinkRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // directResponseJSONShrink Field Functions 
    bool hasDirectResponseJSONShrink() const { return this->directResponseJSONShrink_ != nullptr;};
    void deleteDirectResponseJSONShrink() { this->directResponseJSONShrink_ = nullptr;};
    inline string directResponseJSONShrink() const { DARABONBA_PTR_GET_DEFAULT(directResponseJSONShrink_, "") };
    inline AddGatewayRouteShrinkRequest& setDirectResponseJSONShrink(string directResponseJSONShrink) { DARABONBA_PTR_SET_VALUE(directResponseJSONShrink_, directResponseJSONShrink) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline AddGatewayRouteShrinkRequest& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainIdListJSON Field Functions 
    bool hasDomainIdListJSON() const { return this->domainIdListJSON_ != nullptr;};
    void deleteDomainIdListJSON() { this->domainIdListJSON_ = nullptr;};
    inline string domainIdListJSON() const { DARABONBA_PTR_GET_DEFAULT(domainIdListJSON_, "") };
    inline AddGatewayRouteShrinkRequest& setDomainIdListJSON(string domainIdListJSON) { DARABONBA_PTR_SET_VALUE(domainIdListJSON_, domainIdListJSON) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool enableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline AddGatewayRouteShrinkRequest& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // fallback Field Functions 
    bool hasFallback() const { return this->fallback_ != nullptr;};
    void deleteFallback() { this->fallback_ = nullptr;};
    inline bool fallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, false) };
    inline AddGatewayRouteShrinkRequest& setFallback(bool fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


    // fallbackServicesShrink Field Functions 
    bool hasFallbackServicesShrink() const { return this->fallbackServicesShrink_ != nullptr;};
    void deleteFallbackServicesShrink() { this->fallbackServicesShrink_ = nullptr;};
    inline string fallbackServicesShrink() const { DARABONBA_PTR_GET_DEFAULT(fallbackServicesShrink_, "") };
    inline AddGatewayRouteShrinkRequest& setFallbackServicesShrink(string fallbackServicesShrink) { DARABONBA_PTR_SET_VALUE(fallbackServicesShrink_, fallbackServicesShrink) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline AddGatewayRouteShrinkRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddGatewayRouteShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGatewayRouteShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline string policies() const { DARABONBA_PTR_GET_DEFAULT(policies_, "") };
    inline AddGatewayRouteShrinkRequest& setPolicies(string policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };


    // predicatesShrink Field Functions 
    bool hasPredicatesShrink() const { return this->predicatesShrink_ != nullptr;};
    void deletePredicatesShrink() { this->predicatesShrink_ = nullptr;};
    inline string predicatesShrink() const { DARABONBA_PTR_GET_DEFAULT(predicatesShrink_, "") };
    inline AddGatewayRouteShrinkRequest& setPredicatesShrink(string predicatesShrink) { DARABONBA_PTR_SET_VALUE(predicatesShrink_, predicatesShrink) };


    // redirectJSONShrink Field Functions 
    bool hasRedirectJSONShrink() const { return this->redirectJSONShrink_ != nullptr;};
    void deleteRedirectJSONShrink() { this->redirectJSONShrink_ = nullptr;};
    inline string redirectJSONShrink() const { DARABONBA_PTR_GET_DEFAULT(redirectJSONShrink_, "") };
    inline AddGatewayRouteShrinkRequest& setRedirectJSONShrink(string redirectJSONShrink) { DARABONBA_PTR_SET_VALUE(redirectJSONShrink_, redirectJSONShrink) };


    // routeOrder Field Functions 
    bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
    void deleteRouteOrder() { this->routeOrder_ = nullptr;};
    inline int32_t routeOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
    inline AddGatewayRouteShrinkRequest& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string routeType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline AddGatewayRouteShrinkRequest& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


    // servicesShrink Field Functions 
    bool hasServicesShrink() const { return this->servicesShrink_ != nullptr;};
    void deleteServicesShrink() { this->servicesShrink_ = nullptr;};
    inline string servicesShrink() const { DARABONBA_PTR_GET_DEFAULT(servicesShrink_, "") };
    inline AddGatewayRouteShrinkRequest& setServicesShrink(string servicesShrink) { DARABONBA_PTR_SET_VALUE(servicesShrink_, servicesShrink) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // The type of the destination service. Valid values:
    // 
    // *   Single
    // *   Multiple
    // *   VersionOriented
    // *   Mock
    // *   Redirect
    std::shared_ptr<string> destinationType_ = nullptr;
    // The mock response configuration.
    std::shared_ptr<string> directResponseJSONShrink_ = nullptr;
    // The domain ID.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // The domain IDs.
    std::shared_ptr<string> domainIdListJSON_ = nullptr;
    // Specifies whether to activate Web Application Firewall (WAF).
    std::shared_ptr<bool> enableWaf_ = nullptr;
    // Specifies whether to enable the Fallback service.
    std::shared_ptr<bool> fallback_ = nullptr;
    // The information about the Fallback service.
    std::shared_ptr<string> fallbackServicesShrink_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> name_ = nullptr;
    // The routing policy in a JSON string.
    std::shared_ptr<string> policies_ = nullptr;
    // The matching rule.
    std::shared_ptr<string> predicatesShrink_ = nullptr;
    // The configuration of the redirection.
    std::shared_ptr<string> redirectJSONShrink_ = nullptr;
    // The sequence number of the route. (A small value indicates a high priority.)
    std::shared_ptr<int32_t> routeOrder_ = nullptr;
    // The route type. Valid values:
    // 
    // Op: Manage routes.
    std::shared_ptr<string> routeType_ = nullptr;
    // The list of services.
    std::shared_ptr<string> servicesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
