// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddGatewayRouteRequestDirectResponseJSON.hpp>
#include <vector>
#include <alibabacloud/models/AddGatewayRouteRequestFallbackServices.hpp>
#include <alibabacloud/models/AddGatewayRouteRequestPredicates.hpp>
#include <alibabacloud/models/AddGatewayRouteRequestRedirectJSON.hpp>
#include <alibabacloud/models/AddGatewayRouteRequestServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(DirectResponseJSON, directResponseJSON_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainIdListJSON, domainIdListJSON_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(Fallback, fallback_);
      DARABONBA_PTR_TO_JSON(FallbackServices, fallbackServices_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(Predicates, predicates_);
      DARABONBA_PTR_TO_JSON(RedirectJSON, redirectJSON_);
      DARABONBA_PTR_TO_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
      DARABONBA_PTR_TO_JSON(Services, services_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(DirectResponseJSON, directResponseJSON_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainIdListJSON, domainIdListJSON_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
      DARABONBA_PTR_FROM_JSON(FallbackServices, fallbackServices_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(Predicates, predicates_);
      DARABONBA_PTR_FROM_JSON(RedirectJSON, redirectJSON_);
      DARABONBA_PTR_FROM_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
    };
    AddGatewayRouteRequest() = default ;
    AddGatewayRouteRequest(const AddGatewayRouteRequest &) = default ;
    AddGatewayRouteRequest(AddGatewayRouteRequest &&) = default ;
    AddGatewayRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayRouteRequest() = default ;
    AddGatewayRouteRequest& operator=(const AddGatewayRouteRequest &) = default ;
    AddGatewayRouteRequest& operator=(AddGatewayRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->description_ != nullptr && this->destinationType_ != nullptr && this->directResponseJSON_ != nullptr && this->domainId_ != nullptr && this->domainIdListJSON_ != nullptr
        && this->enableWaf_ != nullptr && this->fallback_ != nullptr && this->fallbackServices_ != nullptr && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr
        && this->name_ != nullptr && this->policies_ != nullptr && this->predicates_ != nullptr && this->redirectJSON_ != nullptr && this->routeOrder_ != nullptr
        && this->routeType_ != nullptr && this->services_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddGatewayRouteRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddGatewayRouteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline AddGatewayRouteRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // directResponseJSON Field Functions 
    bool hasDirectResponseJSON() const { return this->directResponseJSON_ != nullptr;};
    void deleteDirectResponseJSON() { this->directResponseJSON_ = nullptr;};
    inline const AddGatewayRouteRequestDirectResponseJSON & directResponseJSON() const { DARABONBA_PTR_GET_CONST(directResponseJSON_, AddGatewayRouteRequestDirectResponseJSON) };
    inline AddGatewayRouteRequestDirectResponseJSON directResponseJSON() { DARABONBA_PTR_GET(directResponseJSON_, AddGatewayRouteRequestDirectResponseJSON) };
    inline AddGatewayRouteRequest& setDirectResponseJSON(const AddGatewayRouteRequestDirectResponseJSON & directResponseJSON) { DARABONBA_PTR_SET_VALUE(directResponseJSON_, directResponseJSON) };
    inline AddGatewayRouteRequest& setDirectResponseJSON(AddGatewayRouteRequestDirectResponseJSON && directResponseJSON) { DARABONBA_PTR_SET_RVALUE(directResponseJSON_, directResponseJSON) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline AddGatewayRouteRequest& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainIdListJSON Field Functions 
    bool hasDomainIdListJSON() const { return this->domainIdListJSON_ != nullptr;};
    void deleteDomainIdListJSON() { this->domainIdListJSON_ = nullptr;};
    inline string domainIdListJSON() const { DARABONBA_PTR_GET_DEFAULT(domainIdListJSON_, "") };
    inline AddGatewayRouteRequest& setDomainIdListJSON(string domainIdListJSON) { DARABONBA_PTR_SET_VALUE(domainIdListJSON_, domainIdListJSON) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool enableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline AddGatewayRouteRequest& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // fallback Field Functions 
    bool hasFallback() const { return this->fallback_ != nullptr;};
    void deleteFallback() { this->fallback_ = nullptr;};
    inline bool fallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, false) };
    inline AddGatewayRouteRequest& setFallback(bool fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


    // fallbackServices Field Functions 
    bool hasFallbackServices() const { return this->fallbackServices_ != nullptr;};
    void deleteFallbackServices() { this->fallbackServices_ = nullptr;};
    inline const vector<AddGatewayRouteRequestFallbackServices> & fallbackServices() const { DARABONBA_PTR_GET_CONST(fallbackServices_, vector<AddGatewayRouteRequestFallbackServices>) };
    inline vector<AddGatewayRouteRequestFallbackServices> fallbackServices() { DARABONBA_PTR_GET(fallbackServices_, vector<AddGatewayRouteRequestFallbackServices>) };
    inline AddGatewayRouteRequest& setFallbackServices(const vector<AddGatewayRouteRequestFallbackServices> & fallbackServices) { DARABONBA_PTR_SET_VALUE(fallbackServices_, fallbackServices) };
    inline AddGatewayRouteRequest& setFallbackServices(vector<AddGatewayRouteRequestFallbackServices> && fallbackServices) { DARABONBA_PTR_SET_RVALUE(fallbackServices_, fallbackServices) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline AddGatewayRouteRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddGatewayRouteRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGatewayRouteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline string policies() const { DARABONBA_PTR_GET_DEFAULT(policies_, "") };
    inline AddGatewayRouteRequest& setPolicies(string policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };


    // predicates Field Functions 
    bool hasPredicates() const { return this->predicates_ != nullptr;};
    void deletePredicates() { this->predicates_ = nullptr;};
    inline const AddGatewayRouteRequestPredicates & predicates() const { DARABONBA_PTR_GET_CONST(predicates_, AddGatewayRouteRequestPredicates) };
    inline AddGatewayRouteRequestPredicates predicates() { DARABONBA_PTR_GET(predicates_, AddGatewayRouteRequestPredicates) };
    inline AddGatewayRouteRequest& setPredicates(const AddGatewayRouteRequestPredicates & predicates) { DARABONBA_PTR_SET_VALUE(predicates_, predicates) };
    inline AddGatewayRouteRequest& setPredicates(AddGatewayRouteRequestPredicates && predicates) { DARABONBA_PTR_SET_RVALUE(predicates_, predicates) };


    // redirectJSON Field Functions 
    bool hasRedirectJSON() const { return this->redirectJSON_ != nullptr;};
    void deleteRedirectJSON() { this->redirectJSON_ = nullptr;};
    inline const AddGatewayRouteRequestRedirectJSON & redirectJSON() const { DARABONBA_PTR_GET_CONST(redirectJSON_, AddGatewayRouteRequestRedirectJSON) };
    inline AddGatewayRouteRequestRedirectJSON redirectJSON() { DARABONBA_PTR_GET(redirectJSON_, AddGatewayRouteRequestRedirectJSON) };
    inline AddGatewayRouteRequest& setRedirectJSON(const AddGatewayRouteRequestRedirectJSON & redirectJSON) { DARABONBA_PTR_SET_VALUE(redirectJSON_, redirectJSON) };
    inline AddGatewayRouteRequest& setRedirectJSON(AddGatewayRouteRequestRedirectJSON && redirectJSON) { DARABONBA_PTR_SET_RVALUE(redirectJSON_, redirectJSON) };


    // routeOrder Field Functions 
    bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
    void deleteRouteOrder() { this->routeOrder_ = nullptr;};
    inline int32_t routeOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
    inline AddGatewayRouteRequest& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string routeType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline AddGatewayRouteRequest& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<AddGatewayRouteRequestServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<AddGatewayRouteRequestServices>) };
    inline vector<AddGatewayRouteRequestServices> services() { DARABONBA_PTR_GET(services_, vector<AddGatewayRouteRequestServices>) };
    inline AddGatewayRouteRequest& setServices(const vector<AddGatewayRouteRequestServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline AddGatewayRouteRequest& setServices(vector<AddGatewayRouteRequestServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


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
    std::shared_ptr<AddGatewayRouteRequestDirectResponseJSON> directResponseJSON_ = nullptr;
    // The domain ID.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // The domain IDs.
    std::shared_ptr<string> domainIdListJSON_ = nullptr;
    // Specifies whether to activate Web Application Firewall (WAF).
    std::shared_ptr<bool> enableWaf_ = nullptr;
    // Specifies whether to enable the Fallback service.
    std::shared_ptr<bool> fallback_ = nullptr;
    // The information about the Fallback service.
    std::shared_ptr<vector<AddGatewayRouteRequestFallbackServices>> fallbackServices_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> name_ = nullptr;
    // The routing policy in a JSON string.
    std::shared_ptr<string> policies_ = nullptr;
    // The matching rule.
    std::shared_ptr<AddGatewayRouteRequestPredicates> predicates_ = nullptr;
    // The configuration of the redirection.
    std::shared_ptr<AddGatewayRouteRequestRedirectJSON> redirectJSON_ = nullptr;
    // The sequence number of the route. (A small value indicates a high priority.)
    std::shared_ptr<int32_t> routeOrder_ = nullptr;
    // The route type. Valid values:
    // 
    // Op: Manage routes.
    std::shared_ptr<string> routeType_ = nullptr;
    // The list of services.
    std::shared_ptr<vector<AddGatewayRouteRequestServices>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
