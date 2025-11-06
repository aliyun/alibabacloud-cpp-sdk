// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataCors.hpp>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataDirectResponse.hpp>
#include <vector>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite.hpp>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp.hpp>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataRedirect.hpp>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataRetry.hpp>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates.hpp>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataRouteServices.hpp>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataTimeout.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteWafStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteWafStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Cors, cors_);
      DARABONBA_PTR_TO_JSON(DefaultServiceId, defaultServiceId_);
      DARABONBA_PTR_TO_JSON(DefaultServiceName, defaultServiceName_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(DirectResponse, directResponse_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainIdList, domainIdList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HTTPRewrite, HTTPRewrite_);
      DARABONBA_PTR_TO_JSON(HeaderOp, headerOp_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Predicates, predicates_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(Retry, retry_);
      DARABONBA_PTR_TO_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_TO_JSON(RoutePredicates, routePredicates_);
      DARABONBA_PTR_TO_JSON(RouteServices, routeServices_);
      DARABONBA_PTR_TO_JSON(Services, services_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteWafStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cors, cors_);
      DARABONBA_PTR_FROM_JSON(DefaultServiceId, defaultServiceId_);
      DARABONBA_PTR_FROM_JSON(DefaultServiceName, defaultServiceName_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(DirectResponse, directResponse_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainIdList, domainIdList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HTTPRewrite, HTTPRewrite_);
      DARABONBA_PTR_FROM_JSON(HeaderOp, headerOp_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Predicates, predicates_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(Retry, retry_);
      DARABONBA_PTR_FROM_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_FROM_JSON(RoutePredicates, routePredicates_);
      DARABONBA_PTR_FROM_JSON(RouteServices, routeServices_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpdateGatewayRouteWafStatusResponseBodyData() = default ;
    UpdateGatewayRouteWafStatusResponseBodyData(const UpdateGatewayRouteWafStatusResponseBodyData &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyData(UpdateGatewayRouteWafStatusResponseBodyData &&) = default ;
    UpdateGatewayRouteWafStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteWafStatusResponseBodyData() = default ;
    UpdateGatewayRouteWafStatusResponseBodyData& operator=(const UpdateGatewayRouteWafStatusResponseBodyData &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyData& operator=(UpdateGatewayRouteWafStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cors_ == nullptr
        && return this->defaultServiceId_ == nullptr && return this->defaultServiceName_ == nullptr && return this->destinationType_ == nullptr && return this->directResponse_ == nullptr && return this->domainId_ == nullptr
        && return this->domainIdList_ == nullptr && return this->domainName_ == nullptr && return this->domainNameList_ == nullptr && return this->enableWaf_ == nullptr && return this->gatewayId_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->HTTPRewrite_ == nullptr && return this->headerOp_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->predicates_ == nullptr && return this->redirect_ == nullptr && return this->retry_ == nullptr
        && return this->routeOrder_ == nullptr && return this->routePredicates_ == nullptr && return this->routeServices_ == nullptr && return this->services_ == nullptr && return this->status_ == nullptr
        && return this->timeout_ == nullptr; };
    // cors Field Functions 
    bool hasCors() const { return this->cors_ != nullptr;};
    void deleteCors() { this->cors_ = nullptr;};
    inline const Models::UpdateGatewayRouteWafStatusResponseBodyDataCors & cors() const { DARABONBA_PTR_GET_CONST(cors_, Models::UpdateGatewayRouteWafStatusResponseBodyDataCors) };
    inline Models::UpdateGatewayRouteWafStatusResponseBodyDataCors cors() { DARABONBA_PTR_GET(cors_, Models::UpdateGatewayRouteWafStatusResponseBodyDataCors) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setCors(const Models::UpdateGatewayRouteWafStatusResponseBodyDataCors & cors) { DARABONBA_PTR_SET_VALUE(cors_, cors) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setCors(Models::UpdateGatewayRouteWafStatusResponseBodyDataCors && cors) { DARABONBA_PTR_SET_RVALUE(cors_, cors) };


    // defaultServiceId Field Functions 
    bool hasDefaultServiceId() const { return this->defaultServiceId_ != nullptr;};
    void deleteDefaultServiceId() { this->defaultServiceId_ = nullptr;};
    inline int64_t defaultServiceId() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceId_, 0L) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setDefaultServiceId(int64_t defaultServiceId) { DARABONBA_PTR_SET_VALUE(defaultServiceId_, defaultServiceId) };


    // defaultServiceName Field Functions 
    bool hasDefaultServiceName() const { return this->defaultServiceName_ != nullptr;};
    void deleteDefaultServiceName() { this->defaultServiceName_ = nullptr;};
    inline string defaultServiceName() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceName_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setDefaultServiceName(string defaultServiceName) { DARABONBA_PTR_SET_VALUE(defaultServiceName_, defaultServiceName) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // directResponse Field Functions 
    bool hasDirectResponse() const { return this->directResponse_ != nullptr;};
    void deleteDirectResponse() { this->directResponse_ = nullptr;};
    inline const Models::UpdateGatewayRouteWafStatusResponseBodyDataDirectResponse & directResponse() const { DARABONBA_PTR_GET_CONST(directResponse_, Models::UpdateGatewayRouteWafStatusResponseBodyDataDirectResponse) };
    inline Models::UpdateGatewayRouteWafStatusResponseBodyDataDirectResponse directResponse() { DARABONBA_PTR_GET(directResponse_, Models::UpdateGatewayRouteWafStatusResponseBodyDataDirectResponse) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setDirectResponse(const Models::UpdateGatewayRouteWafStatusResponseBodyDataDirectResponse & directResponse) { DARABONBA_PTR_SET_VALUE(directResponse_, directResponse) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setDirectResponse(Models::UpdateGatewayRouteWafStatusResponseBodyDataDirectResponse && directResponse) { DARABONBA_PTR_SET_RVALUE(directResponse_, directResponse) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainIdList Field Functions 
    bool hasDomainIdList() const { return this->domainIdList_ != nullptr;};
    void deleteDomainIdList() { this->domainIdList_ = nullptr;};
    inline const vector<int64_t> & domainIdList() const { DARABONBA_PTR_GET_CONST(domainIdList_, vector<int64_t>) };
    inline vector<int64_t> domainIdList() { DARABONBA_PTR_GET(domainIdList_, vector<int64_t>) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setDomainIdList(const vector<int64_t> & domainIdList) { DARABONBA_PTR_SET_VALUE(domainIdList_, domainIdList) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setDomainIdList(vector<int64_t> && domainIdList) { DARABONBA_PTR_SET_RVALUE(domainIdList_, domainIdList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainNameList Field Functions 
    bool hasDomainNameList() const { return this->domainNameList_ != nullptr;};
    void deleteDomainNameList() { this->domainNameList_ = nullptr;};
    inline const vector<string> & domainNameList() const { DARABONBA_PTR_GET_CONST(domainNameList_, vector<string>) };
    inline vector<string> domainNameList() { DARABONBA_PTR_GET(domainNameList_, vector<string>) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setDomainNameList(const vector<string> & domainNameList) { DARABONBA_PTR_SET_VALUE(domainNameList_, domainNameList) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setDomainNameList(vector<string> && domainNameList) { DARABONBA_PTR_SET_RVALUE(domainNameList_, domainNameList) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool enableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // HTTPRewrite Field Functions 
    bool hasHTTPRewrite() const { return this->HTTPRewrite_ != nullptr;};
    void deleteHTTPRewrite() { this->HTTPRewrite_ = nullptr;};
    inline const Models::UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite & HTTPRewrite() const { DARABONBA_PTR_GET_CONST(HTTPRewrite_, Models::UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite) };
    inline Models::UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite HTTPRewrite() { DARABONBA_PTR_GET(HTTPRewrite_, Models::UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setHTTPRewrite(const Models::UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite & HTTPRewrite) { DARABONBA_PTR_SET_VALUE(HTTPRewrite_, HTTPRewrite) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setHTTPRewrite(Models::UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite && HTTPRewrite) { DARABONBA_PTR_SET_RVALUE(HTTPRewrite_, HTTPRewrite) };


    // headerOp Field Functions 
    bool hasHeaderOp() const { return this->headerOp_ != nullptr;};
    void deleteHeaderOp() { this->headerOp_ = nullptr;};
    inline const Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp & headerOp() const { DARABONBA_PTR_GET_CONST(headerOp_, Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp) };
    inline Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp headerOp() { DARABONBA_PTR_GET(headerOp_, Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setHeaderOp(const Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp & headerOp) { DARABONBA_PTR_SET_VALUE(headerOp_, headerOp) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setHeaderOp(Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp && headerOp) { DARABONBA_PTR_SET_RVALUE(headerOp_, headerOp) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // predicates Field Functions 
    bool hasPredicates() const { return this->predicates_ != nullptr;};
    void deletePredicates() { this->predicates_ = nullptr;};
    inline string predicates() const { DARABONBA_PTR_GET_DEFAULT(predicates_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setPredicates(string predicates) { DARABONBA_PTR_SET_VALUE(predicates_, predicates) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const Models::UpdateGatewayRouteWafStatusResponseBodyDataRedirect & redirect() const { DARABONBA_PTR_GET_CONST(redirect_, Models::UpdateGatewayRouteWafStatusResponseBodyDataRedirect) };
    inline Models::UpdateGatewayRouteWafStatusResponseBodyDataRedirect redirect() { DARABONBA_PTR_GET(redirect_, Models::UpdateGatewayRouteWafStatusResponseBodyDataRedirect) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setRedirect(const Models::UpdateGatewayRouteWafStatusResponseBodyDataRedirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setRedirect(Models::UpdateGatewayRouteWafStatusResponseBodyDataRedirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline const Models::UpdateGatewayRouteWafStatusResponseBodyDataRetry & retry() const { DARABONBA_PTR_GET_CONST(retry_, Models::UpdateGatewayRouteWafStatusResponseBodyDataRetry) };
    inline Models::UpdateGatewayRouteWafStatusResponseBodyDataRetry retry() { DARABONBA_PTR_GET(retry_, Models::UpdateGatewayRouteWafStatusResponseBodyDataRetry) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setRetry(const Models::UpdateGatewayRouteWafStatusResponseBodyDataRetry & retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setRetry(Models::UpdateGatewayRouteWafStatusResponseBodyDataRetry && retry) { DARABONBA_PTR_SET_RVALUE(retry_, retry) };


    // routeOrder Field Functions 
    bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
    void deleteRouteOrder() { this->routeOrder_ = nullptr;};
    inline int32_t routeOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


    // routePredicates Field Functions 
    bool hasRoutePredicates() const { return this->routePredicates_ != nullptr;};
    void deleteRoutePredicates() { this->routePredicates_ = nullptr;};
    inline const Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates & routePredicates() const { DARABONBA_PTR_GET_CONST(routePredicates_, Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates) };
    inline Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates routePredicates() { DARABONBA_PTR_GET(routePredicates_, Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setRoutePredicates(const Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates & routePredicates) { DARABONBA_PTR_SET_VALUE(routePredicates_, routePredicates) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setRoutePredicates(Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates && routePredicates) { DARABONBA_PTR_SET_RVALUE(routePredicates_, routePredicates) };


    // routeServices Field Functions 
    bool hasRouteServices() const { return this->routeServices_ != nullptr;};
    void deleteRouteServices() { this->routeServices_ = nullptr;};
    inline const vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRouteServices> & routeServices() const { DARABONBA_PTR_GET_CONST(routeServices_, vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRouteServices>) };
    inline vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRouteServices> routeServices() { DARABONBA_PTR_GET(routeServices_, vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRouteServices>) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setRouteServices(const vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRouteServices> & routeServices) { DARABONBA_PTR_SET_VALUE(routeServices_, routeServices) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setRouteServices(vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRouteServices> && routeServices) { DARABONBA_PTR_SET_RVALUE(routeServices_, routeServices) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline string services() const { DARABONBA_PTR_GET_DEFAULT(services_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setServices(string services) { DARABONBA_PTR_SET_VALUE(services_, services) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline const Models::UpdateGatewayRouteWafStatusResponseBodyDataTimeout & timeout() const { DARABONBA_PTR_GET_CONST(timeout_, Models::UpdateGatewayRouteWafStatusResponseBodyDataTimeout) };
    inline Models::UpdateGatewayRouteWafStatusResponseBodyDataTimeout timeout() { DARABONBA_PTR_GET(timeout_, Models::UpdateGatewayRouteWafStatusResponseBodyDataTimeout) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setTimeout(const Models::UpdateGatewayRouteWafStatusResponseBodyDataTimeout & timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };
    inline UpdateGatewayRouteWafStatusResponseBodyData& setTimeout(Models::UpdateGatewayRouteWafStatusResponseBodyDataTimeout && timeout) { DARABONBA_PTR_SET_RVALUE(timeout_, timeout) };


  protected:
    // The configuration for cross-origin resource sharing (CORS).
    std::shared_ptr<Models::UpdateGatewayRouteWafStatusResponseBodyDataCors> cors_ = nullptr;
    // The default service ID.
    std::shared_ptr<int64_t> defaultServiceId_ = nullptr;
    // The default service name.
    std::shared_ptr<string> defaultServiceName_ = nullptr;
    // The destination service type.
    std::shared_ptr<string> destinationType_ = nullptr;
    // The information about service mocking.
    std::shared_ptr<Models::UpdateGatewayRouteWafStatusResponseBodyDataDirectResponse> directResponse_ = nullptr;
    // The domain ID.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // The list of domain IDs.
    std::shared_ptr<vector<int64_t>> domainIdList_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The domain names.
    std::shared_ptr<vector<string>> domainNameList_ = nullptr;
    // Indicates whether WAF is activated.
    std::shared_ptr<bool> enableWaf_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The information about the rewrite policy.
    std::shared_ptr<Models::UpdateGatewayRouteWafStatusResponseBodyDataHTTPRewrite> HTTPRewrite_ = nullptr;
    // The header settings.
    std::shared_ptr<Models::UpdateGatewayRouteWafStatusResponseBodyDataHeaderOp> headerOp_ = nullptr;
    // The ID of the route.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> name_ = nullptr;
    // The matching rule.
    std::shared_ptr<string> predicates_ = nullptr;
    // The configuration of the redirection.
    std::shared_ptr<Models::UpdateGatewayRouteWafStatusResponseBodyDataRedirect> redirect_ = nullptr;
    // The retry configuration.
    std::shared_ptr<Models::UpdateGatewayRouteWafStatusResponseBodyDataRetry> retry_ = nullptr;
    // The sequence number of the route.
    std::shared_ptr<int32_t> routeOrder_ = nullptr;
    // The information about route matching.
    std::shared_ptr<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates> routePredicates_ = nullptr;
    // The information about services.
    std::shared_ptr<vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRouteServices>> routeServices_ = nullptr;
    // The information about services.
    std::shared_ptr<string> services_ = nullptr;
    // The status of the route.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The timeout configuration.
    std::shared_ptr<Models::UpdateGatewayRouteWafStatusResponseBodyDataTimeout> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
