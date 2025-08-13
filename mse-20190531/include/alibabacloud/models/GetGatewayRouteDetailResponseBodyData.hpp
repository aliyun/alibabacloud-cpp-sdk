// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataCors.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataDirectResponse.hpp>
#include <vector>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataFallbackServices.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataFlowMirror.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataHTTPRewrite.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataHeaderOp.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataRedirect.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataRetry.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataRoutePredicates.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataRouteServices.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataTimeout.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayRouteDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayRouteDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AhasStatus, ahasStatus_);
      DARABONBA_PTR_TO_JSON(Cors, cors_);
      DARABONBA_PTR_TO_JSON(DefaultServiceId, defaultServiceId_);
      DARABONBA_PTR_TO_JSON(DefaultServiceName, defaultServiceName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(DirectResponse, directResponse_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainIdList, domainIdList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(Fallback, fallback_);
      DARABONBA_PTR_TO_JSON(FallbackServices, fallbackServices_);
      DARABONBA_PTR_TO_JSON(FlowMirror, flowMirror_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HTTPRewrite, HTTPRewrite_);
      DARABONBA_PTR_TO_JSON(HeaderOp, headerOp_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
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
    friend void from_json(const Darabonba::Json& j, GetGatewayRouteDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AhasStatus, ahasStatus_);
      DARABONBA_PTR_FROM_JSON(Cors, cors_);
      DARABONBA_PTR_FROM_JSON(DefaultServiceId, defaultServiceId_);
      DARABONBA_PTR_FROM_JSON(DefaultServiceName, defaultServiceName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(DirectResponse, directResponse_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainIdList, domainIdList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
      DARABONBA_PTR_FROM_JSON(FallbackServices, fallbackServices_);
      DARABONBA_PTR_FROM_JSON(FlowMirror, flowMirror_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HTTPRewrite, HTTPRewrite_);
      DARABONBA_PTR_FROM_JSON(HeaderOp, headerOp_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
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
    GetGatewayRouteDetailResponseBodyData() = default ;
    GetGatewayRouteDetailResponseBodyData(const GetGatewayRouteDetailResponseBodyData &) = default ;
    GetGatewayRouteDetailResponseBodyData(GetGatewayRouteDetailResponseBodyData &&) = default ;
    GetGatewayRouteDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayRouteDetailResponseBodyData() = default ;
    GetGatewayRouteDetailResponseBodyData& operator=(const GetGatewayRouteDetailResponseBodyData &) = default ;
    GetGatewayRouteDetailResponseBodyData& operator=(GetGatewayRouteDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ahasStatus_ != nullptr
        && this->cors_ != nullptr && this->defaultServiceId_ != nullptr && this->defaultServiceName_ != nullptr && this->description_ != nullptr && this->destinationType_ != nullptr
        && this->directResponse_ != nullptr && this->domainId_ != nullptr && this->domainIdList_ != nullptr && this->domainName_ != nullptr && this->domainNameList_ != nullptr
        && this->enableWaf_ != nullptr && this->fallback_ != nullptr && this->fallbackServices_ != nullptr && this->flowMirror_ != nullptr && this->gatewayId_ != nullptr
        && this->gatewayUniqueId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->HTTPRewrite_ != nullptr && this->headerOp_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->policies_ != nullptr && this->predicates_ != nullptr && this->redirect_ != nullptr
        && this->retry_ != nullptr && this->routeOrder_ != nullptr && this->routePredicates_ != nullptr && this->routeServices_ != nullptr && this->services_ != nullptr
        && this->status_ != nullptr && this->timeout_ != nullptr; };
    // ahasStatus Field Functions 
    bool hasAhasStatus() const { return this->ahasStatus_ != nullptr;};
    void deleteAhasStatus() { this->ahasStatus_ = nullptr;};
    inline int32_t ahasStatus() const { DARABONBA_PTR_GET_DEFAULT(ahasStatus_, 0) };
    inline GetGatewayRouteDetailResponseBodyData& setAhasStatus(int32_t ahasStatus) { DARABONBA_PTR_SET_VALUE(ahasStatus_, ahasStatus) };


    // cors Field Functions 
    bool hasCors() const { return this->cors_ != nullptr;};
    void deleteCors() { this->cors_ = nullptr;};
    inline const Models::GetGatewayRouteDetailResponseBodyDataCors & cors() const { DARABONBA_PTR_GET_CONST(cors_, Models::GetGatewayRouteDetailResponseBodyDataCors) };
    inline Models::GetGatewayRouteDetailResponseBodyDataCors cors() { DARABONBA_PTR_GET(cors_, Models::GetGatewayRouteDetailResponseBodyDataCors) };
    inline GetGatewayRouteDetailResponseBodyData& setCors(const Models::GetGatewayRouteDetailResponseBodyDataCors & cors) { DARABONBA_PTR_SET_VALUE(cors_, cors) };
    inline GetGatewayRouteDetailResponseBodyData& setCors(Models::GetGatewayRouteDetailResponseBodyDataCors && cors) { DARABONBA_PTR_SET_RVALUE(cors_, cors) };


    // defaultServiceId Field Functions 
    bool hasDefaultServiceId() const { return this->defaultServiceId_ != nullptr;};
    void deleteDefaultServiceId() { this->defaultServiceId_ = nullptr;};
    inline int64_t defaultServiceId() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceId_, 0L) };
    inline GetGatewayRouteDetailResponseBodyData& setDefaultServiceId(int64_t defaultServiceId) { DARABONBA_PTR_SET_VALUE(defaultServiceId_, defaultServiceId) };


    // defaultServiceName Field Functions 
    bool hasDefaultServiceName() const { return this->defaultServiceName_ != nullptr;};
    void deleteDefaultServiceName() { this->defaultServiceName_ = nullptr;};
    inline string defaultServiceName() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceName_, "") };
    inline GetGatewayRouteDetailResponseBodyData& setDefaultServiceName(string defaultServiceName) { DARABONBA_PTR_SET_VALUE(defaultServiceName_, defaultServiceName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetGatewayRouteDetailResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline GetGatewayRouteDetailResponseBodyData& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // directResponse Field Functions 
    bool hasDirectResponse() const { return this->directResponse_ != nullptr;};
    void deleteDirectResponse() { this->directResponse_ = nullptr;};
    inline const Models::GetGatewayRouteDetailResponseBodyDataDirectResponse & directResponse() const { DARABONBA_PTR_GET_CONST(directResponse_, Models::GetGatewayRouteDetailResponseBodyDataDirectResponse) };
    inline Models::GetGatewayRouteDetailResponseBodyDataDirectResponse directResponse() { DARABONBA_PTR_GET(directResponse_, Models::GetGatewayRouteDetailResponseBodyDataDirectResponse) };
    inline GetGatewayRouteDetailResponseBodyData& setDirectResponse(const Models::GetGatewayRouteDetailResponseBodyDataDirectResponse & directResponse) { DARABONBA_PTR_SET_VALUE(directResponse_, directResponse) };
    inline GetGatewayRouteDetailResponseBodyData& setDirectResponse(Models::GetGatewayRouteDetailResponseBodyDataDirectResponse && directResponse) { DARABONBA_PTR_SET_RVALUE(directResponse_, directResponse) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline GetGatewayRouteDetailResponseBodyData& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainIdList Field Functions 
    bool hasDomainIdList() const { return this->domainIdList_ != nullptr;};
    void deleteDomainIdList() { this->domainIdList_ = nullptr;};
    inline const vector<int64_t> & domainIdList() const { DARABONBA_PTR_GET_CONST(domainIdList_, vector<int64_t>) };
    inline vector<int64_t> domainIdList() { DARABONBA_PTR_GET(domainIdList_, vector<int64_t>) };
    inline GetGatewayRouteDetailResponseBodyData& setDomainIdList(const vector<int64_t> & domainIdList) { DARABONBA_PTR_SET_VALUE(domainIdList_, domainIdList) };
    inline GetGatewayRouteDetailResponseBodyData& setDomainIdList(vector<int64_t> && domainIdList) { DARABONBA_PTR_SET_RVALUE(domainIdList_, domainIdList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetGatewayRouteDetailResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainNameList Field Functions 
    bool hasDomainNameList() const { return this->domainNameList_ != nullptr;};
    void deleteDomainNameList() { this->domainNameList_ = nullptr;};
    inline const vector<string> & domainNameList() const { DARABONBA_PTR_GET_CONST(domainNameList_, vector<string>) };
    inline vector<string> domainNameList() { DARABONBA_PTR_GET(domainNameList_, vector<string>) };
    inline GetGatewayRouteDetailResponseBodyData& setDomainNameList(const vector<string> & domainNameList) { DARABONBA_PTR_SET_VALUE(domainNameList_, domainNameList) };
    inline GetGatewayRouteDetailResponseBodyData& setDomainNameList(vector<string> && domainNameList) { DARABONBA_PTR_SET_RVALUE(domainNameList_, domainNameList) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool enableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline GetGatewayRouteDetailResponseBodyData& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // fallback Field Functions 
    bool hasFallback() const { return this->fallback_ != nullptr;};
    void deleteFallback() { this->fallback_ = nullptr;};
    inline bool fallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, false) };
    inline GetGatewayRouteDetailResponseBodyData& setFallback(bool fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


    // fallbackServices Field Functions 
    bool hasFallbackServices() const { return this->fallbackServices_ != nullptr;};
    void deleteFallbackServices() { this->fallbackServices_ = nullptr;};
    inline const vector<Models::GetGatewayRouteDetailResponseBodyDataFallbackServices> & fallbackServices() const { DARABONBA_PTR_GET_CONST(fallbackServices_, vector<Models::GetGatewayRouteDetailResponseBodyDataFallbackServices>) };
    inline vector<Models::GetGatewayRouteDetailResponseBodyDataFallbackServices> fallbackServices() { DARABONBA_PTR_GET(fallbackServices_, vector<Models::GetGatewayRouteDetailResponseBodyDataFallbackServices>) };
    inline GetGatewayRouteDetailResponseBodyData& setFallbackServices(const vector<Models::GetGatewayRouteDetailResponseBodyDataFallbackServices> & fallbackServices) { DARABONBA_PTR_SET_VALUE(fallbackServices_, fallbackServices) };
    inline GetGatewayRouteDetailResponseBodyData& setFallbackServices(vector<Models::GetGatewayRouteDetailResponseBodyDataFallbackServices> && fallbackServices) { DARABONBA_PTR_SET_RVALUE(fallbackServices_, fallbackServices) };


    // flowMirror Field Functions 
    bool hasFlowMirror() const { return this->flowMirror_ != nullptr;};
    void deleteFlowMirror() { this->flowMirror_ = nullptr;};
    inline const Models::GetGatewayRouteDetailResponseBodyDataFlowMirror & flowMirror() const { DARABONBA_PTR_GET_CONST(flowMirror_, Models::GetGatewayRouteDetailResponseBodyDataFlowMirror) };
    inline Models::GetGatewayRouteDetailResponseBodyDataFlowMirror flowMirror() { DARABONBA_PTR_GET(flowMirror_, Models::GetGatewayRouteDetailResponseBodyDataFlowMirror) };
    inline GetGatewayRouteDetailResponseBodyData& setFlowMirror(const Models::GetGatewayRouteDetailResponseBodyDataFlowMirror & flowMirror) { DARABONBA_PTR_SET_VALUE(flowMirror_, flowMirror) };
    inline GetGatewayRouteDetailResponseBodyData& setFlowMirror(Models::GetGatewayRouteDetailResponseBodyDataFlowMirror && flowMirror) { DARABONBA_PTR_SET_RVALUE(flowMirror_, flowMirror) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline GetGatewayRouteDetailResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetGatewayRouteDetailResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetGatewayRouteDetailResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetGatewayRouteDetailResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // HTTPRewrite Field Functions 
    bool hasHTTPRewrite() const { return this->HTTPRewrite_ != nullptr;};
    void deleteHTTPRewrite() { this->HTTPRewrite_ = nullptr;};
    inline const Models::GetGatewayRouteDetailResponseBodyDataHTTPRewrite & HTTPRewrite() const { DARABONBA_PTR_GET_CONST(HTTPRewrite_, Models::GetGatewayRouteDetailResponseBodyDataHTTPRewrite) };
    inline Models::GetGatewayRouteDetailResponseBodyDataHTTPRewrite HTTPRewrite() { DARABONBA_PTR_GET(HTTPRewrite_, Models::GetGatewayRouteDetailResponseBodyDataHTTPRewrite) };
    inline GetGatewayRouteDetailResponseBodyData& setHTTPRewrite(const Models::GetGatewayRouteDetailResponseBodyDataHTTPRewrite & HTTPRewrite) { DARABONBA_PTR_SET_VALUE(HTTPRewrite_, HTTPRewrite) };
    inline GetGatewayRouteDetailResponseBodyData& setHTTPRewrite(Models::GetGatewayRouteDetailResponseBodyDataHTTPRewrite && HTTPRewrite) { DARABONBA_PTR_SET_RVALUE(HTTPRewrite_, HTTPRewrite) };


    // headerOp Field Functions 
    bool hasHeaderOp() const { return this->headerOp_ != nullptr;};
    void deleteHeaderOp() { this->headerOp_ = nullptr;};
    inline const Models::GetGatewayRouteDetailResponseBodyDataHeaderOp & headerOp() const { DARABONBA_PTR_GET_CONST(headerOp_, Models::GetGatewayRouteDetailResponseBodyDataHeaderOp) };
    inline Models::GetGatewayRouteDetailResponseBodyDataHeaderOp headerOp() { DARABONBA_PTR_GET(headerOp_, Models::GetGatewayRouteDetailResponseBodyDataHeaderOp) };
    inline GetGatewayRouteDetailResponseBodyData& setHeaderOp(const Models::GetGatewayRouteDetailResponseBodyDataHeaderOp & headerOp) { DARABONBA_PTR_SET_VALUE(headerOp_, headerOp) };
    inline GetGatewayRouteDetailResponseBodyData& setHeaderOp(Models::GetGatewayRouteDetailResponseBodyDataHeaderOp && headerOp) { DARABONBA_PTR_SET_RVALUE(headerOp_, headerOp) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGatewayRouteDetailResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayRouteDetailResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline string policies() const { DARABONBA_PTR_GET_DEFAULT(policies_, "") };
    inline GetGatewayRouteDetailResponseBodyData& setPolicies(string policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };


    // predicates Field Functions 
    bool hasPredicates() const { return this->predicates_ != nullptr;};
    void deletePredicates() { this->predicates_ = nullptr;};
    inline string predicates() const { DARABONBA_PTR_GET_DEFAULT(predicates_, "") };
    inline GetGatewayRouteDetailResponseBodyData& setPredicates(string predicates) { DARABONBA_PTR_SET_VALUE(predicates_, predicates) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const Models::GetGatewayRouteDetailResponseBodyDataRedirect & redirect() const { DARABONBA_PTR_GET_CONST(redirect_, Models::GetGatewayRouteDetailResponseBodyDataRedirect) };
    inline Models::GetGatewayRouteDetailResponseBodyDataRedirect redirect() { DARABONBA_PTR_GET(redirect_, Models::GetGatewayRouteDetailResponseBodyDataRedirect) };
    inline GetGatewayRouteDetailResponseBodyData& setRedirect(const Models::GetGatewayRouteDetailResponseBodyDataRedirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline GetGatewayRouteDetailResponseBodyData& setRedirect(Models::GetGatewayRouteDetailResponseBodyDataRedirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline const Models::GetGatewayRouteDetailResponseBodyDataRetry & retry() const { DARABONBA_PTR_GET_CONST(retry_, Models::GetGatewayRouteDetailResponseBodyDataRetry) };
    inline Models::GetGatewayRouteDetailResponseBodyDataRetry retry() { DARABONBA_PTR_GET(retry_, Models::GetGatewayRouteDetailResponseBodyDataRetry) };
    inline GetGatewayRouteDetailResponseBodyData& setRetry(const Models::GetGatewayRouteDetailResponseBodyDataRetry & retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };
    inline GetGatewayRouteDetailResponseBodyData& setRetry(Models::GetGatewayRouteDetailResponseBodyDataRetry && retry) { DARABONBA_PTR_SET_RVALUE(retry_, retry) };


    // routeOrder Field Functions 
    bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
    void deleteRouteOrder() { this->routeOrder_ = nullptr;};
    inline int32_t routeOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
    inline GetGatewayRouteDetailResponseBodyData& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


    // routePredicates Field Functions 
    bool hasRoutePredicates() const { return this->routePredicates_ != nullptr;};
    void deleteRoutePredicates() { this->routePredicates_ = nullptr;};
    inline const Models::GetGatewayRouteDetailResponseBodyDataRoutePredicates & routePredicates() const { DARABONBA_PTR_GET_CONST(routePredicates_, Models::GetGatewayRouteDetailResponseBodyDataRoutePredicates) };
    inline Models::GetGatewayRouteDetailResponseBodyDataRoutePredicates routePredicates() { DARABONBA_PTR_GET(routePredicates_, Models::GetGatewayRouteDetailResponseBodyDataRoutePredicates) };
    inline GetGatewayRouteDetailResponseBodyData& setRoutePredicates(const Models::GetGatewayRouteDetailResponseBodyDataRoutePredicates & routePredicates) { DARABONBA_PTR_SET_VALUE(routePredicates_, routePredicates) };
    inline GetGatewayRouteDetailResponseBodyData& setRoutePredicates(Models::GetGatewayRouteDetailResponseBodyDataRoutePredicates && routePredicates) { DARABONBA_PTR_SET_RVALUE(routePredicates_, routePredicates) };


    // routeServices Field Functions 
    bool hasRouteServices() const { return this->routeServices_ != nullptr;};
    void deleteRouteServices() { this->routeServices_ = nullptr;};
    inline const vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServices> & routeServices() const { DARABONBA_PTR_GET_CONST(routeServices_, vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServices>) };
    inline vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServices> routeServices() { DARABONBA_PTR_GET(routeServices_, vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServices>) };
    inline GetGatewayRouteDetailResponseBodyData& setRouteServices(const vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServices> & routeServices) { DARABONBA_PTR_SET_VALUE(routeServices_, routeServices) };
    inline GetGatewayRouteDetailResponseBodyData& setRouteServices(vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServices> && routeServices) { DARABONBA_PTR_SET_RVALUE(routeServices_, routeServices) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline string services() const { DARABONBA_PTR_GET_DEFAULT(services_, "") };
    inline GetGatewayRouteDetailResponseBodyData& setServices(string services) { DARABONBA_PTR_SET_VALUE(services_, services) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetGatewayRouteDetailResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline const Models::GetGatewayRouteDetailResponseBodyDataTimeout & timeout() const { DARABONBA_PTR_GET_CONST(timeout_, Models::GetGatewayRouteDetailResponseBodyDataTimeout) };
    inline Models::GetGatewayRouteDetailResponseBodyDataTimeout timeout() { DARABONBA_PTR_GET(timeout_, Models::GetGatewayRouteDetailResponseBodyDataTimeout) };
    inline GetGatewayRouteDetailResponseBodyData& setTimeout(const Models::GetGatewayRouteDetailResponseBodyDataTimeout & timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };
    inline GetGatewayRouteDetailResponseBodyData& setTimeout(Models::GetGatewayRouteDetailResponseBodyDataTimeout && timeout) { DARABONBA_PTR_SET_RVALUE(timeout_, timeout) };


  protected:
    // The status of Application High Availability Service (AHAS).
    std::shared_ptr<int32_t> ahasStatus_ = nullptr;
    // The configuration for cross-origin resource sharing (CORS).
    std::shared_ptr<Models::GetGatewayRouteDetailResponseBodyDataCors> cors_ = nullptr;
    // The default service ID.
    std::shared_ptr<int64_t> defaultServiceId_ = nullptr;
    // The default service name.
    std::shared_ptr<string> defaultServiceName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // The destination service type.
    std::shared_ptr<string> destinationType_ = nullptr;
    // The information about service mocking.
    std::shared_ptr<Models::GetGatewayRouteDetailResponseBodyDataDirectResponse> directResponse_ = nullptr;
    // The domain ID.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // The IDs of domains.
    std::shared_ptr<vector<int64_t>> domainIdList_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The list of domain names.
    std::shared_ptr<vector<string>> domainNameList_ = nullptr;
    // Indicates whether Web Application Firewall (WAF) is activated.
    std::shared_ptr<bool> enableWaf_ = nullptr;
    // Indicates whether the Fallback service is enabled.
    std::shared_ptr<bool> fallback_ = nullptr;
    // The information of the Fallback service.
    std::shared_ptr<vector<Models::GetGatewayRouteDetailResponseBodyDataFallbackServices>> fallbackServices_ = nullptr;
    // 流量镜像配置。
    std::shared_ptr<Models::GetGatewayRouteDetailResponseBodyDataFlowMirror> flowMirror_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The last modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The information about the rewrite policy.
    std::shared_ptr<Models::GetGatewayRouteDetailResponseBodyDataHTTPRewrite> HTTPRewrite_ = nullptr;
    // The header settings.
    std::shared_ptr<Models::GetGatewayRouteDetailResponseBodyDataHeaderOp> headerOp_ = nullptr;
    // The ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The routing policy in a JSON string.
    std::shared_ptr<string> policies_ = nullptr;
    // The matching conditions.
    std::shared_ptr<string> predicates_ = nullptr;
    // The configuration of the redirection.
    std::shared_ptr<Models::GetGatewayRouteDetailResponseBodyDataRedirect> redirect_ = nullptr;
    // The retry configuration.
    std::shared_ptr<Models::GetGatewayRouteDetailResponseBodyDataRetry> retry_ = nullptr;
    // The sequence number of the route.
    std::shared_ptr<int32_t> routeOrder_ = nullptr;
    // The information about route matching.
    std::shared_ptr<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicates> routePredicates_ = nullptr;
    // The services.
    std::shared_ptr<vector<Models::GetGatewayRouteDetailResponseBodyDataRouteServices>> routeServices_ = nullptr;
    // The configurations of services.
    std::shared_ptr<string> services_ = nullptr;
    // The status of the route. Valid values:
    // 
    // *   0: unpublished
    // *   2: publishing
    // *   3: published
    // *   4: editing (updated but not published)
    // *   5: unpublishing
    // *   6: unavailable
    std::shared_ptr<int32_t> status_ = nullptr;
    // The timeout configuration.
    std::shared_ptr<Models::GetGatewayRouteDetailResponseBodyDataTimeout> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
