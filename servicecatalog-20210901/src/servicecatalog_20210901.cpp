// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/servicecatalog_20210901.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Servicecatalog20210901;

Alibabacloud_Servicecatalog20210901::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("servicecatalog"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Servicecatalog20210901::Client::getEndpoint(shared_ptr<string> productId,
                                                                shared_ptr<string> regionId,
                                                                shared_ptr<string> endpointRule,
                                                                shared_ptr<string> network,
                                                                shared_ptr<string> suffix,
                                                                shared_ptr<map<string, string>> endpointMap,
                                                                shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

ApproveProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::approveProvisionedProductPlanWithOptions(shared_ptr<ApproveProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalAction)) {
    body->insert(pair<string, string>("ApprovalAction", *request->approvalAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    body->insert(pair<string, string>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApproveProvisionedProductPlan"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApproveProvisionedProductPlanResponse(callApi(params, req, runtime));
}

ApproveProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::approveProvisionedProductPlan(shared_ptr<ApproveProvisionedProductPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approveProvisionedProductPlanWithOptions(request, runtime);
}

AssociatePrincipalWithPortfolioResponse Alibabacloud_Servicecatalog20210901::Client::associatePrincipalWithPortfolioWithOptions(shared_ptr<AssociatePrincipalWithPortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    body->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalId)) {
    body->insert(pair<string, string>("PrincipalId", *request->principalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalType)) {
    body->insert(pair<string, string>("PrincipalType", *request->principalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociatePrincipalWithPortfolio"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociatePrincipalWithPortfolioResponse(callApi(params, req, runtime));
}

AssociatePrincipalWithPortfolioResponse Alibabacloud_Servicecatalog20210901::Client::associatePrincipalWithPortfolio(shared_ptr<AssociatePrincipalWithPortfolioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associatePrincipalWithPortfolioWithOptions(request, runtime);
}

AssociateProductWithPortfolioResponse Alibabacloud_Servicecatalog20210901::Client::associateProductWithPortfolioWithOptions(shared_ptr<AssociateProductWithPortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    body->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("ProductId", *request->productId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateProductWithPortfolio"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateProductWithPortfolioResponse(callApi(params, req, runtime));
}

AssociateProductWithPortfolioResponse Alibabacloud_Servicecatalog20210901::Client::associateProductWithPortfolio(shared_ptr<AssociateProductWithPortfolioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateProductWithPortfolioWithOptions(request, runtime);
}

AssociateTagOptionWithResourceResponse Alibabacloud_Servicecatalog20210901::Client::associateTagOptionWithResourceWithOptions(shared_ptr<AssociateTagOptionWithResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagOptionId)) {
    body->insert(pair<string, string>("TagOptionId", *request->tagOptionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateTagOptionWithResource"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateTagOptionWithResourceResponse(callApi(params, req, runtime));
}

AssociateTagOptionWithResourceResponse Alibabacloud_Servicecatalog20210901::Client::associateTagOptionWithResource(shared_ptr<AssociateTagOptionWithResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateTagOptionWithResourceWithOptions(request, runtime);
}

CancelProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::cancelProvisionedProductPlanWithOptions(shared_ptr<CancelProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    body->insert(pair<string, string>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelProvisionedProductPlan"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelProvisionedProductPlanResponse(callApi(params, req, runtime));
}

CancelProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::cancelProvisionedProductPlan(shared_ptr<CancelProvisionedProductPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelProvisionedProductPlanWithOptions(request, runtime);
}

CopyProductResponse Alibabacloud_Servicecatalog20210901::Client::copyProductWithOptions(shared_ptr<CopyProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceProductArn)) {
    body->insert(pair<string, string>("SourceProductArn", *request->sourceProductArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetProductName)) {
    body->insert(pair<string, string>("TargetProductName", *request->targetProductName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyProduct"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyProductResponse(callApi(params, req, runtime));
}

CopyProductResponse Alibabacloud_Servicecatalog20210901::Client::copyProduct(shared_ptr<CopyProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyProductWithOptions(request, runtime);
}

CreateConstraintResponse Alibabacloud_Servicecatalog20210901::Client::createConstraintWithOptions(shared_ptr<CreateConstraintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->constraintType)) {
    body->insert(pair<string, string>("ConstraintType", *request->constraintType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    body->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("ProductId", *request->productId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConstraint"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConstraintResponse(callApi(params, req, runtime));
}

CreateConstraintResponse Alibabacloud_Servicecatalog20210901::Client::createConstraint(shared_ptr<CreateConstraintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConstraintWithOptions(request, runtime);
}

CreatePortfolioResponse Alibabacloud_Servicecatalog20210901::Client::createPortfolioWithOptions(shared_ptr<CreatePortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioName)) {
    body->insert(pair<string, string>("PortfolioName", *request->portfolioName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerName)) {
    body->insert(pair<string, string>("ProviderName", *request->providerName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePortfolio"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePortfolioResponse(callApi(params, req, runtime));
}

CreatePortfolioResponse Alibabacloud_Servicecatalog20210901::Client::createPortfolio(shared_ptr<CreatePortfolioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPortfolioWithOptions(request, runtime);
}

CreateProductResponse Alibabacloud_Servicecatalog20210901::Client::createProductWithOptions(shared_ptr<CreateProductRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateProductShrinkRequest> request = make_shared<CreateProductShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateProductRequestProductVersionParameters>(tmpReq->productVersionParameters)) {
    request->productVersionParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->productVersionParameters, make_shared<string>("ProductVersionParameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    body->insert(pair<string, string>("ProductName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionParametersShrink)) {
    body->insert(pair<string, string>("ProductVersionParameters", *request->productVersionParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerName)) {
    body->insert(pair<string, string>("ProviderName", *request->providerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    body->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProduct"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductResponse(callApi(params, req, runtime));
}

CreateProductResponse Alibabacloud_Servicecatalog20210901::Client::createProduct(shared_ptr<CreateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductWithOptions(request, runtime);
}

CreateProductVersionResponse Alibabacloud_Servicecatalog20210901::Client::createProductVersionWithOptions(shared_ptr<CreateProductVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->active)) {
    body->insert(pair<string, bool>("Active", *request->active));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->guidance)) {
    body->insert(pair<string, string>("Guidance", *request->guidance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionName)) {
    body->insert(pair<string, string>("ProductVersionName", *request->productVersionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    body->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateUrl)) {
    body->insert(pair<string, string>("TemplateUrl", *request->templateUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProductVersion"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductVersionResponse(callApi(params, req, runtime));
}

CreateProductVersionResponse Alibabacloud_Servicecatalog20210901::Client::createProductVersion(shared_ptr<CreateProductVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductVersionWithOptions(request, runtime);
}

CreateProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::createProvisionedProductPlanWithOptions(shared_ptr<CreateProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationType)) {
    body->insert(pair<string, string>("OperationType", *request->operationType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateProvisionedProductPlanRequestParameters>>(request->parameters)) {
    body->insert(pair<string, vector<CreateProvisionedProductPlanRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planName)) {
    body->insert(pair<string, string>("PlanName", *request->planName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planType)) {
    body->insert(pair<string, string>("PlanType", *request->planType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    body->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionId)) {
    body->insert(pair<string, string>("ProductVersionId", *request->productVersionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provisionedProductName)) {
    body->insert(pair<string, string>("ProvisionedProductName", *request->provisionedProductName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackRegionId)) {
    body->insert(pair<string, string>("StackRegionId", *request->stackRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateProvisionedProductPlanRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<CreateProvisionedProductPlanRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProvisionedProductPlan"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProvisionedProductPlanResponse(callApi(params, req, runtime));
}

CreateProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::createProvisionedProductPlan(shared_ptr<CreateProvisionedProductPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProvisionedProductPlanWithOptions(request, runtime);
}

CreateTagOptionResponse Alibabacloud_Servicecatalog20210901::Client::createTagOptionWithOptions(shared_ptr<CreateTagOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    body->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTagOption"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTagOptionResponse(callApi(params, req, runtime));
}

CreateTagOptionResponse Alibabacloud_Servicecatalog20210901::Client::createTagOption(shared_ptr<CreateTagOptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTagOptionWithOptions(request, runtime);
}

CreateTemplateResponse Alibabacloud_Servicecatalog20210901::Client::createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    body->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    body->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTemplateRequestTerraformVariables>>(request->terraformVariables)) {
    body->insert(pair<string, vector<CreateTemplateRequestTerraformVariables>>("TerraformVariables", *request->terraformVariables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTemplate"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTemplateResponse(callApi(params, req, runtime));
}

CreateTemplateResponse Alibabacloud_Servicecatalog20210901::Client::createTemplate(shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTemplateWithOptions(request, runtime);
}

DeleteConstraintResponse Alibabacloud_Servicecatalog20210901::Client::deleteConstraintWithOptions(shared_ptr<DeleteConstraintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->constraintId)) {
    body->insert(pair<string, string>("ConstraintId", *request->constraintId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConstraint"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConstraintResponse(callApi(params, req, runtime));
}

DeleteConstraintResponse Alibabacloud_Servicecatalog20210901::Client::deleteConstraint(shared_ptr<DeleteConstraintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConstraintWithOptions(request, runtime);
}

DeletePortfolioResponse Alibabacloud_Servicecatalog20210901::Client::deletePortfolioWithOptions(shared_ptr<DeletePortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    body->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePortfolio"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePortfolioResponse(callApi(params, req, runtime));
}

DeletePortfolioResponse Alibabacloud_Servicecatalog20210901::Client::deletePortfolio(shared_ptr<DeletePortfolioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePortfolioWithOptions(request, runtime);
}

DeleteProductResponse Alibabacloud_Servicecatalog20210901::Client::deleteProductWithOptions(shared_ptr<DeleteProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("ProductId", *request->productId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProduct"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProductResponse(callApi(params, req, runtime));
}

DeleteProductResponse Alibabacloud_Servicecatalog20210901::Client::deleteProduct(shared_ptr<DeleteProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductWithOptions(request, runtime);
}

DeleteProductVersionResponse Alibabacloud_Servicecatalog20210901::Client::deleteProductVersionWithOptions(shared_ptr<DeleteProductVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionId)) {
    body->insert(pair<string, string>("ProductVersionId", *request->productVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProductVersion"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProductVersionResponse(callApi(params, req, runtime));
}

DeleteProductVersionResponse Alibabacloud_Servicecatalog20210901::Client::deleteProductVersion(shared_ptr<DeleteProductVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductVersionWithOptions(request, runtime);
}

DeleteProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::deleteProvisionedProductPlanWithOptions(shared_ptr<DeleteProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    body->insert(pair<string, string>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProvisionedProductPlan"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProvisionedProductPlanResponse(callApi(params, req, runtime));
}

DeleteProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::deleteProvisionedProductPlan(shared_ptr<DeleteProvisionedProductPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProvisionedProductPlanWithOptions(request, runtime);
}

DeleteTagOptionResponse Alibabacloud_Servicecatalog20210901::Client::deleteTagOptionWithOptions(shared_ptr<DeleteTagOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagOptionId)) {
    body->insert(pair<string, string>("TagOptionId", *request->tagOptionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTagOption"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTagOptionResponse(callApi(params, req, runtime));
}

DeleteTagOptionResponse Alibabacloud_Servicecatalog20210901::Client::deleteTagOption(shared_ptr<DeleteTagOptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTagOptionWithOptions(request, runtime);
}

DisAssociateTagOptionFromResourceResponse Alibabacloud_Servicecatalog20210901::Client::disAssociateTagOptionFromResourceWithOptions(shared_ptr<DisAssociateTagOptionFromResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagOptionId)) {
    body->insert(pair<string, string>("TagOptionId", *request->tagOptionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisAssociateTagOptionFromResource"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisAssociateTagOptionFromResourceResponse(callApi(params, req, runtime));
}

DisAssociateTagOptionFromResourceResponse Alibabacloud_Servicecatalog20210901::Client::disAssociateTagOptionFromResource(shared_ptr<DisAssociateTagOptionFromResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disAssociateTagOptionFromResourceWithOptions(request, runtime);
}

DisassociatePrincipalFromPortfolioResponse Alibabacloud_Servicecatalog20210901::Client::disassociatePrincipalFromPortfolioWithOptions(shared_ptr<DisassociatePrincipalFromPortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    body->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalId)) {
    body->insert(pair<string, string>("PrincipalId", *request->principalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalType)) {
    body->insert(pair<string, string>("PrincipalType", *request->principalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisassociatePrincipalFromPortfolio"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisassociatePrincipalFromPortfolioResponse(callApi(params, req, runtime));
}

DisassociatePrincipalFromPortfolioResponse Alibabacloud_Servicecatalog20210901::Client::disassociatePrincipalFromPortfolio(shared_ptr<DisassociatePrincipalFromPortfolioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disassociatePrincipalFromPortfolioWithOptions(request, runtime);
}

DisassociateProductFromPortfolioResponse Alibabacloud_Servicecatalog20210901::Client::disassociateProductFromPortfolioWithOptions(shared_ptr<DisassociateProductFromPortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    body->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("ProductId", *request->productId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisassociateProductFromPortfolio"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisassociateProductFromPortfolioResponse(callApi(params, req, runtime));
}

DisassociateProductFromPortfolioResponse Alibabacloud_Servicecatalog20210901::Client::disassociateProductFromPortfolio(shared_ptr<DisassociateProductFromPortfolioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disassociateProductFromPortfolioWithOptions(request, runtime);
}

ExecuteProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::executeProvisionedProductPlanWithOptions(shared_ptr<ExecuteProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    body->insert(pair<string, string>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteProvisionedProductPlan"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteProvisionedProductPlanResponse(callApi(params, req, runtime));
}

ExecuteProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::executeProvisionedProductPlan(shared_ptr<ExecuteProvisionedProductPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeProvisionedProductPlanWithOptions(request, runtime);
}

GetConstraintResponse Alibabacloud_Servicecatalog20210901::Client::getConstraintWithOptions(shared_ptr<GetConstraintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->constraintId)) {
    query->insert(pair<string, string>("ConstraintId", *request->constraintId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConstraint"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConstraintResponse(callApi(params, req, runtime));
}

GetConstraintResponse Alibabacloud_Servicecatalog20210901::Client::getConstraint(shared_ptr<GetConstraintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConstraintWithOptions(request, runtime);
}

GetPortfolioResponse Alibabacloud_Servicecatalog20210901::Client::getPortfolioWithOptions(shared_ptr<GetPortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    query->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPortfolio"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPortfolioResponse(callApi(params, req, runtime));
}

GetPortfolioResponse Alibabacloud_Servicecatalog20210901::Client::getPortfolio(shared_ptr<GetPortfolioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPortfolioWithOptions(request, runtime);
}

GetProductAsAdminResponse Alibabacloud_Servicecatalog20210901::Client::getProductAsAdminWithOptions(shared_ptr<GetProductAsAdminRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    query->insert(pair<string, string>("ProductId", *request->productId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductAsAdmin"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductAsAdminResponse(callApi(params, req, runtime));
}

GetProductAsAdminResponse Alibabacloud_Servicecatalog20210901::Client::getProductAsAdmin(shared_ptr<GetProductAsAdminRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProductAsAdminWithOptions(request, runtime);
}

GetProductAsEndUserResponse Alibabacloud_Servicecatalog20210901::Client::getProductAsEndUserWithOptions(shared_ptr<GetProductAsEndUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    query->insert(pair<string, string>("ProductId", *request->productId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductAsEndUser"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductAsEndUserResponse(callApi(params, req, runtime));
}

GetProductAsEndUserResponse Alibabacloud_Servicecatalog20210901::Client::getProductAsEndUser(shared_ptr<GetProductAsEndUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProductAsEndUserWithOptions(request, runtime);
}

GetProductVersionResponse Alibabacloud_Servicecatalog20210901::Client::getProductVersionWithOptions(shared_ptr<GetProductVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionId)) {
    query->insert(pair<string, string>("ProductVersionId", *request->productVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductVersion"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductVersionResponse(callApi(params, req, runtime));
}

GetProductVersionResponse Alibabacloud_Servicecatalog20210901::Client::getProductVersion(shared_ptr<GetProductVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProductVersionWithOptions(request, runtime);
}

GetProvisionedProductResponse Alibabacloud_Servicecatalog20210901::Client::getProvisionedProductWithOptions(shared_ptr<GetProvisionedProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->provisionedProductId)) {
    query->insert(pair<string, string>("ProvisionedProductId", *request->provisionedProductId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProvisionedProduct"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProvisionedProductResponse(callApi(params, req, runtime));
}

GetProvisionedProductResponse Alibabacloud_Servicecatalog20210901::Client::getProvisionedProduct(shared_ptr<GetProvisionedProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProvisionedProductWithOptions(request, runtime);
}

GetProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::getProvisionedProductPlanWithOptions(shared_ptr<GetProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    body->insert(pair<string, string>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProvisionedProductPlan"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProvisionedProductPlanResponse(callApi(params, req, runtime));
}

GetProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::getProvisionedProductPlan(shared_ptr<GetProvisionedProductPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProvisionedProductPlanWithOptions(request, runtime);
}

GetTagOptionResponse Alibabacloud_Servicecatalog20210901::Client::getTagOptionWithOptions(shared_ptr<GetTagOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTagOption"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTagOptionResponse(callApi(params, req, runtime));
}

GetTagOptionResponse Alibabacloud_Servicecatalog20210901::Client::getTagOption(shared_ptr<GetTagOptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTagOptionWithOptions(request, runtime);
}

GetTaskResponse Alibabacloud_Servicecatalog20210901::Client::getTaskWithOptions(shared_ptr<GetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTask"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskResponse(callApi(params, req, runtime));
}

GetTaskResponse Alibabacloud_Servicecatalog20210901::Client::getTask(shared_ptr<GetTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskWithOptions(request, runtime);
}

GetTemplateResponse Alibabacloud_Servicecatalog20210901::Client::getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    query->insert(pair<string, string>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionId)) {
    query->insert(pair<string, string>("ProductVersionId", *request->productVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplate"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateResponse(callApi(params, req, runtime));
}

GetTemplateResponse Alibabacloud_Servicecatalog20210901::Client::getTemplate(shared_ptr<GetTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateWithOptions(request, runtime);
}

LaunchProductResponse Alibabacloud_Servicecatalog20210901::Client::launchProductWithOptions(shared_ptr<LaunchProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<LaunchProductRequestParameters>>(request->parameters)) {
    body->insert(pair<string, vector<LaunchProductRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    body->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionId)) {
    body->insert(pair<string, string>("ProductVersionId", *request->productVersionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provisionedProductName)) {
    body->insert(pair<string, string>("ProvisionedProductName", *request->provisionedProductName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackRegionId)) {
    body->insert(pair<string, string>("StackRegionId", *request->stackRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<LaunchProductRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<LaunchProductRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LaunchProduct"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LaunchProductResponse(callApi(params, req, runtime));
}

LaunchProductResponse Alibabacloud_Servicecatalog20210901::Client::launchProduct(shared_ptr<LaunchProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return launchProductWithOptions(request, runtime);
}

ListLaunchOptionsResponse Alibabacloud_Servicecatalog20210901::Client::listLaunchOptionsWithOptions(shared_ptr<ListLaunchOptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    query->insert(pair<string, string>("ProductId", *request->productId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLaunchOptions"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLaunchOptionsResponse(callApi(params, req, runtime));
}

ListLaunchOptionsResponse Alibabacloud_Servicecatalog20210901::Client::listLaunchOptions(shared_ptr<ListLaunchOptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLaunchOptionsWithOptions(request, runtime);
}

ListPortfoliosResponse Alibabacloud_Servicecatalog20210901::Client::listPortfoliosWithOptions(shared_ptr<ListPortfoliosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListPortfoliosRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<ListPortfoliosRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    query->insert(pair<string, string>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPortfolios"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPortfoliosResponse(callApi(params, req, runtime));
}

ListPortfoliosResponse Alibabacloud_Servicecatalog20210901::Client::listPortfolios(shared_ptr<ListPortfoliosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPortfoliosWithOptions(request, runtime);
}

ListPrincipalsResponse Alibabacloud_Servicecatalog20210901::Client::listPrincipalsWithOptions(shared_ptr<ListPrincipalsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    query->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrincipals"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrincipalsResponse(callApi(params, req, runtime));
}

ListPrincipalsResponse Alibabacloud_Servicecatalog20210901::Client::listPrincipals(shared_ptr<ListPrincipalsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrincipalsWithOptions(request, runtime);
}

ListProductVersionsResponse Alibabacloud_Servicecatalog20210901::Client::listProductVersionsWithOptions(shared_ptr<ListProductVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    query->insert(pair<string, string>("ProductId", *request->productId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductVersions"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductVersionsResponse(callApi(params, req, runtime));
}

ListProductVersionsResponse Alibabacloud_Servicecatalog20210901::Client::listProductVersions(shared_ptr<ListProductVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductVersionsWithOptions(request, runtime);
}

ListProductsAsAdminResponse Alibabacloud_Servicecatalog20210901::Client::listProductsAsAdminWithOptions(shared_ptr<ListProductsAsAdminRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListProductsAsAdminRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<ListProductsAsAdminRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    query->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductsAsAdmin"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductsAsAdminResponse(callApi(params, req, runtime));
}

ListProductsAsAdminResponse Alibabacloud_Servicecatalog20210901::Client::listProductsAsAdmin(shared_ptr<ListProductsAsAdminRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductsAsAdminWithOptions(request, runtime);
}

ListProductsAsEndUserResponse Alibabacloud_Servicecatalog20210901::Client::listProductsAsEndUserWithOptions(shared_ptr<ListProductsAsEndUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListProductsAsEndUserRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<ListProductsAsEndUserRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductsAsEndUser"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductsAsEndUserResponse(callApi(params, req, runtime));
}

ListProductsAsEndUserResponse Alibabacloud_Servicecatalog20210901::Client::listProductsAsEndUser(shared_ptr<ListProductsAsEndUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductsAsEndUserWithOptions(request, runtime);
}

ListProvisionedProductPlanApproversResponse Alibabacloud_Servicecatalog20210901::Client::listProvisionedProductPlanApproversWithOptions(shared_ptr<ListProvisionedProductPlanApproversRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProvisionedProductPlanApprovers"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProvisionedProductPlanApproversResponse(callApi(params, req, runtime));
}

ListProvisionedProductPlanApproversResponse Alibabacloud_Servicecatalog20210901::Client::listProvisionedProductPlanApprovers(shared_ptr<ListProvisionedProductPlanApproversRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProvisionedProductPlanApproversWithOptions(request, runtime);
}

ListProvisionedProductPlansResponse Alibabacloud_Servicecatalog20210901::Client::listProvisionedProductPlansWithOptions(shared_ptr<ListProvisionedProductPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLevelFilter)) {
    query->insert(pair<string, string>("AccessLevelFilter", *request->accessLevelFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalFilter)) {
    query->insert(pair<string, string>("ApprovalFilter", *request->approvalFilter));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListProvisionedProductPlansRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<ListProvisionedProductPlansRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provisionedProductId)) {
    query->insert(pair<string, string>("ProvisionedProductId", *request->provisionedProductId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProvisionedProductPlans"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProvisionedProductPlansResponse(callApi(params, req, runtime));
}

ListProvisionedProductPlansResponse Alibabacloud_Servicecatalog20210901::Client::listProvisionedProductPlans(shared_ptr<ListProvisionedProductPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProvisionedProductPlansWithOptions(request, runtime);
}

ListProvisionedProductsResponse Alibabacloud_Servicecatalog20210901::Client::listProvisionedProductsWithOptions(shared_ptr<ListProvisionedProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessLevelFilter)) {
    query->insert(pair<string, string>("AccessLevelFilter", *request->accessLevelFilter));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListProvisionedProductsRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<ListProvisionedProductsRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProvisionedProducts"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProvisionedProductsResponse(callApi(params, req, runtime));
}

ListProvisionedProductsResponse Alibabacloud_Servicecatalog20210901::Client::listProvisionedProducts(shared_ptr<ListProvisionedProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProvisionedProductsWithOptions(request, runtime);
}

ListRegionsResponse Alibabacloud_Servicecatalog20210901::Client::listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRegions"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRegionsResponse(callApi(params, req, runtime));
}

ListRegionsResponse Alibabacloud_Servicecatalog20210901::Client::listRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegionsWithOptions(runtime);
}

ListResourcesForTagOptionResponse Alibabacloud_Servicecatalog20210901::Client::listResourcesForTagOptionWithOptions(shared_ptr<ListResourcesForTagOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourcesForTagOption"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourcesForTagOptionResponse(callApi(params, req, runtime));
}

ListResourcesForTagOptionResponse Alibabacloud_Servicecatalog20210901::Client::listResourcesForTagOption(shared_ptr<ListResourcesForTagOptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourcesForTagOptionWithOptions(request, runtime);
}

ListTagOptionsResponse Alibabacloud_Servicecatalog20210901::Client::listTagOptionsWithOptions(shared_ptr<ListTagOptionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTagOptionsShrinkRequest> request = make_shared<ListTagOptionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListTagOptionsRequestFilters>(tmpReq->filters)) {
    request->filtersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filters, make_shared<string>("Filters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagOptions"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagOptionsResponse(callApi(params, req, runtime));
}

ListTagOptionsResponse Alibabacloud_Servicecatalog20210901::Client::listTagOptions(shared_ptr<ListTagOptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagOptionsWithOptions(request, runtime);
}

ListTasksResponse Alibabacloud_Servicecatalog20210901::Client::listTasksWithOptions(shared_ptr<ListTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provisionedProductId)) {
    query->insert(pair<string, string>("ProvisionedProductId", *request->provisionedProductId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTasks"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTasksResponse(callApi(params, req, runtime));
}

ListTasksResponse Alibabacloud_Servicecatalog20210901::Client::listTasks(shared_ptr<ListTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTasksWithOptions(request, runtime);
}

TerminateProvisionedProductResponse Alibabacloud_Servicecatalog20210901::Client::terminateProvisionedProductWithOptions(shared_ptr<TerminateProvisionedProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->provisionedProductId)) {
    body->insert(pair<string, string>("ProvisionedProductId", *request->provisionedProductId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TerminateProvisionedProduct"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TerminateProvisionedProductResponse(callApi(params, req, runtime));
}

TerminateProvisionedProductResponse Alibabacloud_Servicecatalog20210901::Client::terminateProvisionedProduct(shared_ptr<TerminateProvisionedProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return terminateProvisionedProductWithOptions(request, runtime);
}

UpdateConstraintResponse Alibabacloud_Servicecatalog20210901::Client::updateConstraintWithOptions(shared_ptr<UpdateConstraintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->constraintId)) {
    body->insert(pair<string, string>("ConstraintId", *request->constraintId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConstraint"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConstraintResponse(callApi(params, req, runtime));
}

UpdateConstraintResponse Alibabacloud_Servicecatalog20210901::Client::updateConstraint(shared_ptr<UpdateConstraintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConstraintWithOptions(request, runtime);
}

UpdatePortfolioResponse Alibabacloud_Servicecatalog20210901::Client::updatePortfolioWithOptions(shared_ptr<UpdatePortfolioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    body->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioName)) {
    body->insert(pair<string, string>("PortfolioName", *request->portfolioName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerName)) {
    body->insert(pair<string, string>("ProviderName", *request->providerName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePortfolio"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePortfolioResponse(callApi(params, req, runtime));
}

UpdatePortfolioResponse Alibabacloud_Servicecatalog20210901::Client::updatePortfolio(shared_ptr<UpdatePortfolioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePortfolioWithOptions(request, runtime);
}

UpdateProductResponse Alibabacloud_Servicecatalog20210901::Client::updateProductWithOptions(shared_ptr<UpdateProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    body->insert(pair<string, string>("ProductName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerName)) {
    body->insert(pair<string, string>("ProviderName", *request->providerName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProduct"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProductResponse(callApi(params, req, runtime));
}

UpdateProductResponse Alibabacloud_Servicecatalog20210901::Client::updateProduct(shared_ptr<UpdateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductWithOptions(request, runtime);
}

UpdateProductVersionResponse Alibabacloud_Servicecatalog20210901::Client::updateProductVersionWithOptions(shared_ptr<UpdateProductVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->active)) {
    body->insert(pair<string, bool>("Active", *request->active));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->guidance)) {
    body->insert(pair<string, string>("Guidance", *request->guidance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionId)) {
    body->insert(pair<string, string>("ProductVersionId", *request->productVersionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionName)) {
    body->insert(pair<string, string>("ProductVersionName", *request->productVersionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProductVersion"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProductVersionResponse(callApi(params, req, runtime));
}

UpdateProductVersionResponse Alibabacloud_Servicecatalog20210901::Client::updateProductVersion(shared_ptr<UpdateProductVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductVersionWithOptions(request, runtime);
}

UpdateProvisionedProductResponse Alibabacloud_Servicecatalog20210901::Client::updateProvisionedProductWithOptions(shared_ptr<UpdateProvisionedProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateProvisionedProductRequestParameters>>(request->parameters)) {
    body->insert(pair<string, vector<UpdateProvisionedProductRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    body->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionId)) {
    body->insert(pair<string, string>("ProductVersionId", *request->productVersionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provisionedProductId)) {
    body->insert(pair<string, string>("ProvisionedProductId", *request->provisionedProductId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateProvisionedProductRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<UpdateProvisionedProductRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProvisionedProduct"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProvisionedProductResponse(callApi(params, req, runtime));
}

UpdateProvisionedProductResponse Alibabacloud_Servicecatalog20210901::Client::updateProvisionedProduct(shared_ptr<UpdateProvisionedProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProvisionedProductWithOptions(request, runtime);
}

UpdateProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::updateProvisionedProductPlanWithOptions(shared_ptr<UpdateProvisionedProductPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateProvisionedProductPlanRequestParameters>>(request->parameters)) {
    body->insert(pair<string, vector<UpdateProvisionedProductPlanRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    body->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portfolioId)) {
    body->insert(pair<string, string>("PortfolioId", *request->portfolioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionId)) {
    body->insert(pair<string, string>("ProductVersionId", *request->productVersionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateProvisionedProductPlanRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<UpdateProvisionedProductPlanRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProvisionedProductPlan"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProvisionedProductPlanResponse(callApi(params, req, runtime));
}

UpdateProvisionedProductPlanResponse Alibabacloud_Servicecatalog20210901::Client::updateProvisionedProductPlan(shared_ptr<UpdateProvisionedProductPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProvisionedProductPlanWithOptions(request, runtime);
}

UpdateTagOptionResponse Alibabacloud_Servicecatalog20210901::Client::updateTagOptionWithOptions(shared_ptr<UpdateTagOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->active)) {
    body->insert(pair<string, bool>("Active", *request->active));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagOptionId)) {
    body->insert(pair<string, string>("TagOptionId", *request->tagOptionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTagOption"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTagOptionResponse(callApi(params, req, runtime));
}

UpdateTagOptionResponse Alibabacloud_Servicecatalog20210901::Client::updateTagOption(shared_ptr<UpdateTagOptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTagOptionWithOptions(request, runtime);
}

