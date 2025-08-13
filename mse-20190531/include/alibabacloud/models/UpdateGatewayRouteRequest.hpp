// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateGatewayRouteRequestDirectResponseJSON.hpp>
#include <vector>
#include <alibabacloud/models/UpdateGatewayRouteRequestFallbackServices.hpp>
#include <alibabacloud/models/UpdateGatewayRouteRequestPredicates.hpp>
#include <alibabacloud/models/UpdateGatewayRouteRequestRedirectJSON.hpp>
#include <alibabacloud/models/UpdateGatewayRouteRequestServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(DirectResponseJSON, directResponseJSON_);
      DARABONBA_PTR_TO_JSON(DomainIdListJSON, domainIdListJSON_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(Fallback, fallback_);
      DARABONBA_PTR_TO_JSON(FallbackServices, fallbackServices_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Predicates, predicates_);
      DARABONBA_PTR_TO_JSON(RedirectJSON, redirectJSON_);
      DARABONBA_PTR_TO_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_TO_JSON(Services, services_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(DirectResponseJSON, directResponseJSON_);
      DARABONBA_PTR_FROM_JSON(DomainIdListJSON, domainIdListJSON_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
      DARABONBA_PTR_FROM_JSON(FallbackServices, fallbackServices_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Predicates, predicates_);
      DARABONBA_PTR_FROM_JSON(RedirectJSON, redirectJSON_);
      DARABONBA_PTR_FROM_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
    };
    UpdateGatewayRouteRequest() = default ;
    UpdateGatewayRouteRequest(const UpdateGatewayRouteRequest &) = default ;
    UpdateGatewayRouteRequest(UpdateGatewayRouteRequest &&) = default ;
    UpdateGatewayRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteRequest() = default ;
    UpdateGatewayRouteRequest& operator=(const UpdateGatewayRouteRequest &) = default ;
    UpdateGatewayRouteRequest& operator=(UpdateGatewayRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->description_ != nullptr && this->destinationType_ != nullptr && this->directResponseJSON_ != nullptr && this->domainIdListJSON_ != nullptr && this->enableWaf_ != nullptr
        && this->fallback_ != nullptr && this->fallbackServices_ != nullptr && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr && this->id_ != nullptr
        && this->name_ != nullptr && this->predicates_ != nullptr && this->redirectJSON_ != nullptr && this->routeOrder_ != nullptr && this->services_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateGatewayRouteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline UpdateGatewayRouteRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // directResponseJSON Field Functions 
    bool hasDirectResponseJSON() const { return this->directResponseJSON_ != nullptr;};
    void deleteDirectResponseJSON() { this->directResponseJSON_ = nullptr;};
    inline const UpdateGatewayRouteRequestDirectResponseJSON & directResponseJSON() const { DARABONBA_PTR_GET_CONST(directResponseJSON_, UpdateGatewayRouteRequestDirectResponseJSON) };
    inline UpdateGatewayRouteRequestDirectResponseJSON directResponseJSON() { DARABONBA_PTR_GET(directResponseJSON_, UpdateGatewayRouteRequestDirectResponseJSON) };
    inline UpdateGatewayRouteRequest& setDirectResponseJSON(const UpdateGatewayRouteRequestDirectResponseJSON & directResponseJSON) { DARABONBA_PTR_SET_VALUE(directResponseJSON_, directResponseJSON) };
    inline UpdateGatewayRouteRequest& setDirectResponseJSON(UpdateGatewayRouteRequestDirectResponseJSON && directResponseJSON) { DARABONBA_PTR_SET_RVALUE(directResponseJSON_, directResponseJSON) };


    // domainIdListJSON Field Functions 
    bool hasDomainIdListJSON() const { return this->domainIdListJSON_ != nullptr;};
    void deleteDomainIdListJSON() { this->domainIdListJSON_ = nullptr;};
    inline string domainIdListJSON() const { DARABONBA_PTR_GET_DEFAULT(domainIdListJSON_, "") };
    inline UpdateGatewayRouteRequest& setDomainIdListJSON(string domainIdListJSON) { DARABONBA_PTR_SET_VALUE(domainIdListJSON_, domainIdListJSON) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool enableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline UpdateGatewayRouteRequest& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // fallback Field Functions 
    bool hasFallback() const { return this->fallback_ != nullptr;};
    void deleteFallback() { this->fallback_ = nullptr;};
    inline bool fallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, false) };
    inline UpdateGatewayRouteRequest& setFallback(bool fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


    // fallbackServices Field Functions 
    bool hasFallbackServices() const { return this->fallbackServices_ != nullptr;};
    void deleteFallbackServices() { this->fallbackServices_ = nullptr;};
    inline const vector<UpdateGatewayRouteRequestFallbackServices> & fallbackServices() const { DARABONBA_PTR_GET_CONST(fallbackServices_, vector<UpdateGatewayRouteRequestFallbackServices>) };
    inline vector<UpdateGatewayRouteRequestFallbackServices> fallbackServices() { DARABONBA_PTR_GET(fallbackServices_, vector<UpdateGatewayRouteRequestFallbackServices>) };
    inline UpdateGatewayRouteRequest& setFallbackServices(const vector<UpdateGatewayRouteRequestFallbackServices> & fallbackServices) { DARABONBA_PTR_SET_VALUE(fallbackServices_, fallbackServices) };
    inline UpdateGatewayRouteRequest& setFallbackServices(vector<UpdateGatewayRouteRequestFallbackServices> && fallbackServices) { DARABONBA_PTR_SET_RVALUE(fallbackServices_, fallbackServices) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGatewayRouteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // predicates Field Functions 
    bool hasPredicates() const { return this->predicates_ != nullptr;};
    void deletePredicates() { this->predicates_ = nullptr;};
    inline const UpdateGatewayRouteRequestPredicates & predicates() const { DARABONBA_PTR_GET_CONST(predicates_, UpdateGatewayRouteRequestPredicates) };
    inline UpdateGatewayRouteRequestPredicates predicates() { DARABONBA_PTR_GET(predicates_, UpdateGatewayRouteRequestPredicates) };
    inline UpdateGatewayRouteRequest& setPredicates(const UpdateGatewayRouteRequestPredicates & predicates) { DARABONBA_PTR_SET_VALUE(predicates_, predicates) };
    inline UpdateGatewayRouteRequest& setPredicates(UpdateGatewayRouteRequestPredicates && predicates) { DARABONBA_PTR_SET_RVALUE(predicates_, predicates) };


    // redirectJSON Field Functions 
    bool hasRedirectJSON() const { return this->redirectJSON_ != nullptr;};
    void deleteRedirectJSON() { this->redirectJSON_ = nullptr;};
    inline const UpdateGatewayRouteRequestRedirectJSON & redirectJSON() const { DARABONBA_PTR_GET_CONST(redirectJSON_, UpdateGatewayRouteRequestRedirectJSON) };
    inline UpdateGatewayRouteRequestRedirectJSON redirectJSON() { DARABONBA_PTR_GET(redirectJSON_, UpdateGatewayRouteRequestRedirectJSON) };
    inline UpdateGatewayRouteRequest& setRedirectJSON(const UpdateGatewayRouteRequestRedirectJSON & redirectJSON) { DARABONBA_PTR_SET_VALUE(redirectJSON_, redirectJSON) };
    inline UpdateGatewayRouteRequest& setRedirectJSON(UpdateGatewayRouteRequestRedirectJSON && redirectJSON) { DARABONBA_PTR_SET_RVALUE(redirectJSON_, redirectJSON) };


    // routeOrder Field Functions 
    bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
    void deleteRouteOrder() { this->routeOrder_ = nullptr;};
    inline int32_t routeOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
    inline UpdateGatewayRouteRequest& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<UpdateGatewayRouteRequestServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<UpdateGatewayRouteRequestServices>) };
    inline vector<UpdateGatewayRouteRequestServices> services() { DARABONBA_PTR_GET(services_, vector<UpdateGatewayRouteRequestServices>) };
    inline UpdateGatewayRouteRequest& setServices(const vector<UpdateGatewayRouteRequestServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline UpdateGatewayRouteRequest& setServices(vector<UpdateGatewayRouteRequestServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // The destination service type.
    std::shared_ptr<string> destinationType_ = nullptr;
    // The information about service mocking.
    std::shared_ptr<UpdateGatewayRouteRequestDirectResponseJSON> directResponseJSON_ = nullptr;
    // The associated domain name.
    std::shared_ptr<string> domainIdListJSON_ = nullptr;
    // Specifies whether to activate Web Application Firewall (WAF).
    std::shared_ptr<bool> enableWaf_ = nullptr;
    // Specifies whether to enable the Fallback service.
    std::shared_ptr<bool> fallback_ = nullptr;
    // The information about the Fallback service.
    std::shared_ptr<vector<UpdateGatewayRouteRequestFallbackServices>> fallbackServices_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The ID of the route.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> name_ = nullptr;
    // The route matching conditions.
    std::shared_ptr<UpdateGatewayRouteRequestPredicates> predicates_ = nullptr;
    // The information about redirection.
    std::shared_ptr<UpdateGatewayRouteRequestRedirectJSON> redirectJSON_ = nullptr;
    // The sequence number of the route.
    std::shared_ptr<int32_t> routeOrder_ = nullptr;
    // The information about destination services.
    std::shared_ptr<vector<UpdateGatewayRouteRequestServices>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
