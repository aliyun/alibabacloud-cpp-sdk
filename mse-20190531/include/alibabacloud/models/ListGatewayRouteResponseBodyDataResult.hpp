// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGatewayRouteResponseBodyDataResultComment.hpp>
#include <alibabacloud/models/ListGatewayRouteResponseBodyDataResultDirectResponse.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayRouteResponseBodyDataResultFallbackServices.hpp>
#include <alibabacloud/models/ListGatewayRouteResponseBodyDataResultRedirect.hpp>
#include <alibabacloud/models/ListGatewayRouteResponseBodyDataResultRoutePredicates.hpp>
#include <alibabacloud/models/ListGatewayRouteResponseBodyDataResultRouteServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DefaultServiceId, defaultServiceId_);
      DARABONBA_PTR_TO_JSON(DefaultServiceName, defaultServiceName_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(DirectResponse, directResponse_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainIdList, domainIdList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_TO_JSON(DynamicRoute, dynamicRoute_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(Fallback, fallback_);
      DARABONBA_PTR_TO_JSON(FallbackServices, fallbackServices_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Predicates, predicates_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_TO_JSON(RoutePredicates, routePredicates_);
      DARABONBA_PTR_TO_JSON(RouteServices, routeServices_);
      DARABONBA_PTR_TO_JSON(Services, services_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DefaultServiceId, defaultServiceId_);
      DARABONBA_PTR_FROM_JSON(DefaultServiceName, defaultServiceName_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(DirectResponse, directResponse_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainIdList, domainIdList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_FROM_JSON(DynamicRoute, dynamicRoute_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
      DARABONBA_PTR_FROM_JSON(FallbackServices, fallbackServices_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Predicates, predicates_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_FROM_JSON(RoutePredicates, routePredicates_);
      DARABONBA_PTR_FROM_JSON(RouteServices, routeServices_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListGatewayRouteResponseBodyDataResult() = default ;
    ListGatewayRouteResponseBodyDataResult(const ListGatewayRouteResponseBodyDataResult &) = default ;
    ListGatewayRouteResponseBodyDataResult(ListGatewayRouteResponseBodyDataResult &&) = default ;
    ListGatewayRouteResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteResponseBodyDataResult() = default ;
    ListGatewayRouteResponseBodyDataResult& operator=(const ListGatewayRouteResponseBodyDataResult &) = default ;
    ListGatewayRouteResponseBodyDataResult& operator=(ListGatewayRouteResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->defaultServiceId_ != nullptr && this->defaultServiceName_ != nullptr && this->destinationType_ != nullptr && this->directResponse_ != nullptr && this->domainId_ != nullptr
        && this->domainIdList_ != nullptr && this->domainName_ != nullptr && this->domainNameList_ != nullptr && this->dynamicRoute_ != nullptr && this->enableWaf_ != nullptr
        && this->fallback_ != nullptr && this->fallbackServices_ != nullptr && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->predicates_ != nullptr && this->redirect_ != nullptr
        && this->routeOrder_ != nullptr && this->routePredicates_ != nullptr && this->routeServices_ != nullptr && this->services_ != nullptr && this->status_ != nullptr
        && this->type_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline const Models::ListGatewayRouteResponseBodyDataResultComment & comment() const { DARABONBA_PTR_GET_CONST(comment_, Models::ListGatewayRouteResponseBodyDataResultComment) };
    inline Models::ListGatewayRouteResponseBodyDataResultComment comment() { DARABONBA_PTR_GET(comment_, Models::ListGatewayRouteResponseBodyDataResultComment) };
    inline ListGatewayRouteResponseBodyDataResult& setComment(const Models::ListGatewayRouteResponseBodyDataResultComment & comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };
    inline ListGatewayRouteResponseBodyDataResult& setComment(Models::ListGatewayRouteResponseBodyDataResultComment && comment) { DARABONBA_PTR_SET_RVALUE(comment_, comment) };


    // defaultServiceId Field Functions 
    bool hasDefaultServiceId() const { return this->defaultServiceId_ != nullptr;};
    void deleteDefaultServiceId() { this->defaultServiceId_ = nullptr;};
    inline int64_t defaultServiceId() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceId_, 0L) };
    inline ListGatewayRouteResponseBodyDataResult& setDefaultServiceId(int64_t defaultServiceId) { DARABONBA_PTR_SET_VALUE(defaultServiceId_, defaultServiceId) };


    // defaultServiceName Field Functions 
    bool hasDefaultServiceName() const { return this->defaultServiceName_ != nullptr;};
    void deleteDefaultServiceName() { this->defaultServiceName_ = nullptr;};
    inline string defaultServiceName() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceName_, "") };
    inline ListGatewayRouteResponseBodyDataResult& setDefaultServiceName(string defaultServiceName) { DARABONBA_PTR_SET_VALUE(defaultServiceName_, defaultServiceName) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline ListGatewayRouteResponseBodyDataResult& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // directResponse Field Functions 
    bool hasDirectResponse() const { return this->directResponse_ != nullptr;};
    void deleteDirectResponse() { this->directResponse_ = nullptr;};
    inline const Models::ListGatewayRouteResponseBodyDataResultDirectResponse & directResponse() const { DARABONBA_PTR_GET_CONST(directResponse_, Models::ListGatewayRouteResponseBodyDataResultDirectResponse) };
    inline Models::ListGatewayRouteResponseBodyDataResultDirectResponse directResponse() { DARABONBA_PTR_GET(directResponse_, Models::ListGatewayRouteResponseBodyDataResultDirectResponse) };
    inline ListGatewayRouteResponseBodyDataResult& setDirectResponse(const Models::ListGatewayRouteResponseBodyDataResultDirectResponse & directResponse) { DARABONBA_PTR_SET_VALUE(directResponse_, directResponse) };
    inline ListGatewayRouteResponseBodyDataResult& setDirectResponse(Models::ListGatewayRouteResponseBodyDataResultDirectResponse && directResponse) { DARABONBA_PTR_SET_RVALUE(directResponse_, directResponse) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline ListGatewayRouteResponseBodyDataResult& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainIdList Field Functions 
    bool hasDomainIdList() const { return this->domainIdList_ != nullptr;};
    void deleteDomainIdList() { this->domainIdList_ = nullptr;};
    inline const vector<int64_t> & domainIdList() const { DARABONBA_PTR_GET_CONST(domainIdList_, vector<int64_t>) };
    inline vector<int64_t> domainIdList() { DARABONBA_PTR_GET(domainIdList_, vector<int64_t>) };
    inline ListGatewayRouteResponseBodyDataResult& setDomainIdList(const vector<int64_t> & domainIdList) { DARABONBA_PTR_SET_VALUE(domainIdList_, domainIdList) };
    inline ListGatewayRouteResponseBodyDataResult& setDomainIdList(vector<int64_t> && domainIdList) { DARABONBA_PTR_SET_RVALUE(domainIdList_, domainIdList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListGatewayRouteResponseBodyDataResult& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainNameList Field Functions 
    bool hasDomainNameList() const { return this->domainNameList_ != nullptr;};
    void deleteDomainNameList() { this->domainNameList_ = nullptr;};
    inline const vector<string> & domainNameList() const { DARABONBA_PTR_GET_CONST(domainNameList_, vector<string>) };
    inline vector<string> domainNameList() { DARABONBA_PTR_GET(domainNameList_, vector<string>) };
    inline ListGatewayRouteResponseBodyDataResult& setDomainNameList(const vector<string> & domainNameList) { DARABONBA_PTR_SET_VALUE(domainNameList_, domainNameList) };
    inline ListGatewayRouteResponseBodyDataResult& setDomainNameList(vector<string> && domainNameList) { DARABONBA_PTR_SET_RVALUE(domainNameList_, domainNameList) };


    // dynamicRoute Field Functions 
    bool hasDynamicRoute() const { return this->dynamicRoute_ != nullptr;};
    void deleteDynamicRoute() { this->dynamicRoute_ = nullptr;};
    inline bool dynamicRoute() const { DARABONBA_PTR_GET_DEFAULT(dynamicRoute_, false) };
    inline ListGatewayRouteResponseBodyDataResult& setDynamicRoute(bool dynamicRoute) { DARABONBA_PTR_SET_VALUE(dynamicRoute_, dynamicRoute) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline string enableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, "") };
    inline ListGatewayRouteResponseBodyDataResult& setEnableWaf(string enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // fallback Field Functions 
    bool hasFallback() const { return this->fallback_ != nullptr;};
    void deleteFallback() { this->fallback_ = nullptr;};
    inline bool fallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, false) };
    inline ListGatewayRouteResponseBodyDataResult& setFallback(bool fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


    // fallbackServices Field Functions 
    bool hasFallbackServices() const { return this->fallbackServices_ != nullptr;};
    void deleteFallbackServices() { this->fallbackServices_ = nullptr;};
    inline const vector<Models::ListGatewayRouteResponseBodyDataResultFallbackServices> & fallbackServices() const { DARABONBA_PTR_GET_CONST(fallbackServices_, vector<Models::ListGatewayRouteResponseBodyDataResultFallbackServices>) };
    inline vector<Models::ListGatewayRouteResponseBodyDataResultFallbackServices> fallbackServices() { DARABONBA_PTR_GET(fallbackServices_, vector<Models::ListGatewayRouteResponseBodyDataResultFallbackServices>) };
    inline ListGatewayRouteResponseBodyDataResult& setFallbackServices(const vector<Models::ListGatewayRouteResponseBodyDataResultFallbackServices> & fallbackServices) { DARABONBA_PTR_SET_VALUE(fallbackServices_, fallbackServices) };
    inline ListGatewayRouteResponseBodyDataResult& setFallbackServices(vector<Models::ListGatewayRouteResponseBodyDataResultFallbackServices> && fallbackServices) { DARABONBA_PTR_SET_RVALUE(fallbackServices_, fallbackServices) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline ListGatewayRouteResponseBodyDataResult& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListGatewayRouteResponseBodyDataResult& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListGatewayRouteResponseBodyDataResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListGatewayRouteResponseBodyDataResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListGatewayRouteResponseBodyDataResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayRouteResponseBodyDataResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // predicates Field Functions 
    bool hasPredicates() const { return this->predicates_ != nullptr;};
    void deletePredicates() { this->predicates_ = nullptr;};
    inline string predicates() const { DARABONBA_PTR_GET_DEFAULT(predicates_, "") };
    inline ListGatewayRouteResponseBodyDataResult& setPredicates(string predicates) { DARABONBA_PTR_SET_VALUE(predicates_, predicates) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const Models::ListGatewayRouteResponseBodyDataResultRedirect & redirect() const { DARABONBA_PTR_GET_CONST(redirect_, Models::ListGatewayRouteResponseBodyDataResultRedirect) };
    inline Models::ListGatewayRouteResponseBodyDataResultRedirect redirect() { DARABONBA_PTR_GET(redirect_, Models::ListGatewayRouteResponseBodyDataResultRedirect) };
    inline ListGatewayRouteResponseBodyDataResult& setRedirect(const Models::ListGatewayRouteResponseBodyDataResultRedirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline ListGatewayRouteResponseBodyDataResult& setRedirect(Models::ListGatewayRouteResponseBodyDataResultRedirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // routeOrder Field Functions 
    bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
    void deleteRouteOrder() { this->routeOrder_ = nullptr;};
    inline int32_t routeOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
    inline ListGatewayRouteResponseBodyDataResult& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


    // routePredicates Field Functions 
    bool hasRoutePredicates() const { return this->routePredicates_ != nullptr;};
    void deleteRoutePredicates() { this->routePredicates_ = nullptr;};
    inline const Models::ListGatewayRouteResponseBodyDataResultRoutePredicates & routePredicates() const { DARABONBA_PTR_GET_CONST(routePredicates_, Models::ListGatewayRouteResponseBodyDataResultRoutePredicates) };
    inline Models::ListGatewayRouteResponseBodyDataResultRoutePredicates routePredicates() { DARABONBA_PTR_GET(routePredicates_, Models::ListGatewayRouteResponseBodyDataResultRoutePredicates) };
    inline ListGatewayRouteResponseBodyDataResult& setRoutePredicates(const Models::ListGatewayRouteResponseBodyDataResultRoutePredicates & routePredicates) { DARABONBA_PTR_SET_VALUE(routePredicates_, routePredicates) };
    inline ListGatewayRouteResponseBodyDataResult& setRoutePredicates(Models::ListGatewayRouteResponseBodyDataResultRoutePredicates && routePredicates) { DARABONBA_PTR_SET_RVALUE(routePredicates_, routePredicates) };


    // routeServices Field Functions 
    bool hasRouteServices() const { return this->routeServices_ != nullptr;};
    void deleteRouteServices() { this->routeServices_ = nullptr;};
    inline const vector<Models::ListGatewayRouteResponseBodyDataResultRouteServices> & routeServices() const { DARABONBA_PTR_GET_CONST(routeServices_, vector<Models::ListGatewayRouteResponseBodyDataResultRouteServices>) };
    inline vector<Models::ListGatewayRouteResponseBodyDataResultRouteServices> routeServices() { DARABONBA_PTR_GET(routeServices_, vector<Models::ListGatewayRouteResponseBodyDataResultRouteServices>) };
    inline ListGatewayRouteResponseBodyDataResult& setRouteServices(const vector<Models::ListGatewayRouteResponseBodyDataResultRouteServices> & routeServices) { DARABONBA_PTR_SET_VALUE(routeServices_, routeServices) };
    inline ListGatewayRouteResponseBodyDataResult& setRouteServices(vector<Models::ListGatewayRouteResponseBodyDataResultRouteServices> && routeServices) { DARABONBA_PTR_SET_RVALUE(routeServices_, routeServices) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline string services() const { DARABONBA_PTR_GET_DEFAULT(services_, "") };
    inline ListGatewayRouteResponseBodyDataResult& setServices(string services) { DARABONBA_PTR_SET_VALUE(services_, services) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListGatewayRouteResponseBodyDataResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGatewayRouteResponseBodyDataResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The route comment (ingress).
    std::shared_ptr<Models::ListGatewayRouteResponseBodyDataResultComment> comment_ = nullptr;
    // The default service ID.
    std::shared_ptr<int64_t> defaultServiceId_ = nullptr;
    // The default service name.
    std::shared_ptr<string> defaultServiceName_ = nullptr;
    // The destination service type.
    std::shared_ptr<string> destinationType_ = nullptr;
    // The information about service mocking.
    std::shared_ptr<Models::ListGatewayRouteResponseBodyDataResultDirectResponse> directResponse_ = nullptr;
    // The domain ID.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // The domain IDs.
    std::shared_ptr<vector<int64_t>> domainIdList_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The domain names.
    std::shared_ptr<vector<string>> domainNameList_ = nullptr;
    std::shared_ptr<bool> dynamicRoute_ = nullptr;
    // Indicates whether Web Application Firewall (WAF) is activated.
    std::shared_ptr<string> enableWaf_ = nullptr;
    // Indicates whether the Fallback service is enabled.
    std::shared_ptr<bool> fallback_ = nullptr;
    // The information about the Fallback service.
    std::shared_ptr<vector<Models::ListGatewayRouteResponseBodyDataResultFallbackServices>> fallbackServices_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The matching rules.
    std::shared_ptr<string> predicates_ = nullptr;
    // The information about redirection.
    std::shared_ptr<Models::ListGatewayRouteResponseBodyDataResultRedirect> redirect_ = nullptr;
    // The order.
    std::shared_ptr<int32_t> routeOrder_ = nullptr;
    // The matching rules.
    std::shared_ptr<Models::ListGatewayRouteResponseBodyDataResultRoutePredicates> routePredicates_ = nullptr;
    // The information about services.
    std::shared_ptr<vector<Models::ListGatewayRouteResponseBodyDataResultRouteServices>> routeServices_ = nullptr;
    // The information about services.
    std::shared_ptr<string> services_ = nullptr;
    // The status.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The route type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
