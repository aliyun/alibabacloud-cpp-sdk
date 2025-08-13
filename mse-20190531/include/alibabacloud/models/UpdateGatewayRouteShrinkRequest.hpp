// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(DirectResponseJSON, directResponseJSONShrink_);
      DARABONBA_PTR_TO_JSON(DomainIdListJSON, domainIdListJSON_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(Fallback, fallback_);
      DARABONBA_PTR_TO_JSON(FallbackServices, fallbackServicesShrink_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Predicates, predicatesShrink_);
      DARABONBA_PTR_TO_JSON(RedirectJSON, redirectJSONShrink_);
      DARABONBA_PTR_TO_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_TO_JSON(Services, servicesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(DirectResponseJSON, directResponseJSONShrink_);
      DARABONBA_PTR_FROM_JSON(DomainIdListJSON, domainIdListJSON_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
      DARABONBA_PTR_FROM_JSON(FallbackServices, fallbackServicesShrink_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Predicates, predicatesShrink_);
      DARABONBA_PTR_FROM_JSON(RedirectJSON, redirectJSONShrink_);
      DARABONBA_PTR_FROM_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_FROM_JSON(Services, servicesShrink_);
    };
    UpdateGatewayRouteShrinkRequest() = default ;
    UpdateGatewayRouteShrinkRequest(const UpdateGatewayRouteShrinkRequest &) = default ;
    UpdateGatewayRouteShrinkRequest(UpdateGatewayRouteShrinkRequest &&) = default ;
    UpdateGatewayRouteShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteShrinkRequest() = default ;
    UpdateGatewayRouteShrinkRequest& operator=(const UpdateGatewayRouteShrinkRequest &) = default ;
    UpdateGatewayRouteShrinkRequest& operator=(UpdateGatewayRouteShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->description_ != nullptr && this->destinationType_ != nullptr && this->directResponseJSONShrink_ != nullptr && this->domainIdListJSON_ != nullptr && this->enableWaf_ != nullptr
        && this->fallback_ != nullptr && this->fallbackServicesShrink_ != nullptr && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr && this->id_ != nullptr
        && this->name_ != nullptr && this->predicatesShrink_ != nullptr && this->redirectJSONShrink_ != nullptr && this->routeOrder_ != nullptr && this->servicesShrink_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateGatewayRouteShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline UpdateGatewayRouteShrinkRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // directResponseJSONShrink Field Functions 
    bool hasDirectResponseJSONShrink() const { return this->directResponseJSONShrink_ != nullptr;};
    void deleteDirectResponseJSONShrink() { this->directResponseJSONShrink_ = nullptr;};
    inline string directResponseJSONShrink() const { DARABONBA_PTR_GET_DEFAULT(directResponseJSONShrink_, "") };
    inline UpdateGatewayRouteShrinkRequest& setDirectResponseJSONShrink(string directResponseJSONShrink) { DARABONBA_PTR_SET_VALUE(directResponseJSONShrink_, directResponseJSONShrink) };


    // domainIdListJSON Field Functions 
    bool hasDomainIdListJSON() const { return this->domainIdListJSON_ != nullptr;};
    void deleteDomainIdListJSON() { this->domainIdListJSON_ = nullptr;};
    inline string domainIdListJSON() const { DARABONBA_PTR_GET_DEFAULT(domainIdListJSON_, "") };
    inline UpdateGatewayRouteShrinkRequest& setDomainIdListJSON(string domainIdListJSON) { DARABONBA_PTR_SET_VALUE(domainIdListJSON_, domainIdListJSON) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool enableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline UpdateGatewayRouteShrinkRequest& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // fallback Field Functions 
    bool hasFallback() const { return this->fallback_ != nullptr;};
    void deleteFallback() { this->fallback_ = nullptr;};
    inline bool fallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, false) };
    inline UpdateGatewayRouteShrinkRequest& setFallback(bool fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


    // fallbackServicesShrink Field Functions 
    bool hasFallbackServicesShrink() const { return this->fallbackServicesShrink_ != nullptr;};
    void deleteFallbackServicesShrink() { this->fallbackServicesShrink_ = nullptr;};
    inline string fallbackServicesShrink() const { DARABONBA_PTR_GET_DEFAULT(fallbackServicesShrink_, "") };
    inline UpdateGatewayRouteShrinkRequest& setFallbackServicesShrink(string fallbackServicesShrink) { DARABONBA_PTR_SET_VALUE(fallbackServicesShrink_, fallbackServicesShrink) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteShrinkRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGatewayRouteShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // predicatesShrink Field Functions 
    bool hasPredicatesShrink() const { return this->predicatesShrink_ != nullptr;};
    void deletePredicatesShrink() { this->predicatesShrink_ = nullptr;};
    inline string predicatesShrink() const { DARABONBA_PTR_GET_DEFAULT(predicatesShrink_, "") };
    inline UpdateGatewayRouteShrinkRequest& setPredicatesShrink(string predicatesShrink) { DARABONBA_PTR_SET_VALUE(predicatesShrink_, predicatesShrink) };


    // redirectJSONShrink Field Functions 
    bool hasRedirectJSONShrink() const { return this->redirectJSONShrink_ != nullptr;};
    void deleteRedirectJSONShrink() { this->redirectJSONShrink_ = nullptr;};
    inline string redirectJSONShrink() const { DARABONBA_PTR_GET_DEFAULT(redirectJSONShrink_, "") };
    inline UpdateGatewayRouteShrinkRequest& setRedirectJSONShrink(string redirectJSONShrink) { DARABONBA_PTR_SET_VALUE(redirectJSONShrink_, redirectJSONShrink) };


    // routeOrder Field Functions 
    bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
    void deleteRouteOrder() { this->routeOrder_ = nullptr;};
    inline int32_t routeOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
    inline UpdateGatewayRouteShrinkRequest& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


    // servicesShrink Field Functions 
    bool hasServicesShrink() const { return this->servicesShrink_ != nullptr;};
    void deleteServicesShrink() { this->servicesShrink_ = nullptr;};
    inline string servicesShrink() const { DARABONBA_PTR_GET_DEFAULT(servicesShrink_, "") };
    inline UpdateGatewayRouteShrinkRequest& setServicesShrink(string servicesShrink) { DARABONBA_PTR_SET_VALUE(servicesShrink_, servicesShrink) };


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
    std::shared_ptr<string> directResponseJSONShrink_ = nullptr;
    // The associated domain name.
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
    // The ID of the route.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> name_ = nullptr;
    // The route matching conditions.
    std::shared_ptr<string> predicatesShrink_ = nullptr;
    // The information about redirection.
    std::shared_ptr<string> redirectJSONShrink_ = nullptr;
    // The sequence number of the route.
    std::shared_ptr<int32_t> routeOrder_ = nullptr;
    // The information about destination services.
    std::shared_ptr<string> servicesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
