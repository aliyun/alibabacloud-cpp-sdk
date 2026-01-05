#include <darabonba/Core.hpp>
#include <alibabacloud/Servicecatalog20210901.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Servicecatalog20210901::Models;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{

AlibabaCloud::Servicecatalog20210901::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("servicecatalog", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Reviews a plan.
 *
 * @param request ApproveProvisionedProductPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApproveProvisionedProductPlanResponse
 */
ApproveProvisionedProductPlanResponse Client::approveProvisionedProductPlanWithOptions(const ApproveProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApprovalAction()) {
    body["ApprovalAction"] = request.getApprovalAction();
  }

  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasPlanId()) {
    body["PlanId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ApproveProvisionedProductPlan"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApproveProvisionedProductPlanResponse>();
}

/**
 * @summary Reviews a plan.
 *
 * @param request ApproveProvisionedProductPlanRequest
 * @return ApproveProvisionedProductPlanResponse
 */
ApproveProvisionedProductPlanResponse Client::approveProvisionedProductPlan(const ApproveProvisionedProductPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approveProvisionedProductPlanWithOptions(request, runtime);
}

/**
 * @summary 将产品组合授权给某个RAM实体
 *
 * @param request AssociatePrincipalWithPortfolioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociatePrincipalWithPortfolioResponse
 */
AssociatePrincipalWithPortfolioResponse Client::associatePrincipalWithPortfolioWithOptions(const AssociatePrincipalWithPortfolioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPortfolioId()) {
    body["PortfolioId"] = request.getPortfolioId();
  }

  if (!!request.hasPrincipalId()) {
    body["PrincipalId"] = request.getPrincipalId();
  }

  if (!!request.hasPrincipalType()) {
    body["PrincipalType"] = request.getPrincipalType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssociatePrincipalWithPortfolio"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociatePrincipalWithPortfolioResponse>();
}

/**
 * @summary 将产品组合授权给某个RAM实体
 *
 * @param request AssociatePrincipalWithPortfolioRequest
 * @return AssociatePrincipalWithPortfolioResponse
 */
AssociatePrincipalWithPortfolioResponse Client::associatePrincipalWithPortfolio(const AssociatePrincipalWithPortfolioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associatePrincipalWithPortfolioWithOptions(request, runtime);
}

/**
 * @summary Adds a product to a product portfolio.
 *
 * @param request AssociateProductWithPortfolioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateProductWithPortfolioResponse
 */
AssociateProductWithPortfolioResponse Client::associateProductWithPortfolioWithOptions(const AssociateProductWithPortfolioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPortfolioId()) {
    body["PortfolioId"] = request.getPortfolioId();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssociateProductWithPortfolio"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateProductWithPortfolioResponse>();
}

/**
 * @summary Adds a product to a product portfolio.
 *
 * @param request AssociateProductWithPortfolioRequest
 * @return AssociateProductWithPortfolioResponse
 */
AssociateProductWithPortfolioResponse Client::associateProductWithPortfolio(const AssociateProductWithPortfolioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateProductWithPortfolioWithOptions(request, runtime);
}

/**
 * @summary Associates the tag option with a resource.
 *
 * @param request AssociateTagOptionWithResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateTagOptionWithResourceResponse
 */
AssociateTagOptionWithResourceResponse Client::associateTagOptionWithResourceWithOptions(const AssociateTagOptionWithResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasTagOptionId()) {
    body["TagOptionId"] = request.getTagOptionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssociateTagOptionWithResource"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateTagOptionWithResourceResponse>();
}

/**
 * @summary Associates the tag option with a resource.
 *
 * @param request AssociateTagOptionWithResourceRequest
 * @return AssociateTagOptionWithResourceResponse
 */
AssociateTagOptionWithResourceResponse Client::associateTagOptionWithResource(const AssociateTagOptionWithResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateTagOptionWithResourceWithOptions(request, runtime);
}

/**
 * @summary Cancels a plan.
 *
 * @param request CancelProvisionedProductPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelProvisionedProductPlanResponse
 */
CancelProvisionedProductPlanResponse Client::cancelProvisionedProductPlanWithOptions(const CancelProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPlanId()) {
    body["PlanId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelProvisionedProductPlan"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelProvisionedProductPlanResponse>();
}

/**
 * @summary Cancels a plan.
 *
 * @param request CancelProvisionedProductPlanRequest
 * @return CancelProvisionedProductPlanResponse
 */
CancelProvisionedProductPlanResponse Client::cancelProvisionedProductPlan(const CancelProvisionedProductPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelProvisionedProductPlanWithOptions(request, runtime);
}

/**
 * @summary Replicates a product.
 *
 * @param request CopyProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyProductResponse
 */
CopyProductResponse Client::copyProductWithOptions(const CopyProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSourceProductArn()) {
    body["SourceProductArn"] = request.getSourceProductArn();
  }

  if (!!request.hasTargetProductName()) {
    body["TargetProductName"] = request.getTargetProductName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CopyProduct"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyProductResponse>();
}

/**
 * @summary Replicates a product.
 *
 * @param request CopyProductRequest
 * @return CopyProductResponse
 */
CopyProductResponse Client::copyProduct(const CopyProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyProductWithOptions(request, runtime);
}

/**
 * @summary Creates a constraint.
 *
 * @param request CreateConstraintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConstraintResponse
 */
CreateConstraintResponse Client::createConstraintWithOptions(const CreateConstraintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasConstraintType()) {
    body["ConstraintType"] = request.getConstraintType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasPortfolioId()) {
    body["PortfolioId"] = request.getPortfolioId();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateConstraint"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConstraintResponse>();
}

/**
 * @summary Creates a constraint.
 *
 * @param request CreateConstraintRequest
 * @return CreateConstraintResponse
 */
CreateConstraintResponse Client::createConstraint(const CreateConstraintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConstraintWithOptions(request, runtime);
}

/**
 * @summary Creates a product portfolio.
 *
 * @param request CreatePortfolioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePortfolioResponse
 */
CreatePortfolioResponse Client::createPortfolioWithOptions(const CreatePortfolioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasPortfolioName()) {
    body["PortfolioName"] = request.getPortfolioName();
  }

  if (!!request.hasProviderName()) {
    body["ProviderName"] = request.getProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePortfolio"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePortfolioResponse>();
}

/**
 * @summary Creates a product portfolio.
 *
 * @param request CreatePortfolioRequest
 * @return CreatePortfolioResponse
 */
CreatePortfolioResponse Client::createPortfolio(const CreatePortfolioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPortfolioWithOptions(request, runtime);
}

/**
 * @summary Creates a product.
 *
 * @description Before you call the CreateProduct operation, you must call the [CreateTemplate](~~CreateTemplate~~) operation to create a template.
 *
 * @param tmpReq CreateProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProductResponse
 */
CreateProductResponse Client::createProductWithOptions(const CreateProductRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProductShrinkRequest request = CreateProductShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProductVersionParameters()) {
    request.setProductVersionParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProductVersionParameters(), "ProductVersionParameters", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasProductName()) {
    body["ProductName"] = request.getProductName();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasProductVersionParametersShrink()) {
    body["ProductVersionParameters"] = request.getProductVersionParametersShrink();
  }

  if (!!request.hasProviderName()) {
    body["ProviderName"] = request.getProviderName();
  }

  if (!!request.hasTemplateType()) {
    body["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateProduct"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProductResponse>();
}

/**
 * @summary Creates a product.
 *
 * @description Before you call the CreateProduct operation, you must call the [CreateTemplate](~~CreateTemplate~~) operation to create a template.
 *
 * @param request CreateProductRequest
 * @return CreateProductResponse
 */
CreateProductResponse Client::createProduct(const CreateProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProductWithOptions(request, runtime);
}

/**
 * @summary Creates a product version.
 *
 * @description Before you call the CreateProductVersion operation, you must call the [CreateTemplate](~~CreateTemplate~~) operation to create a template.
 *
 * @param request CreateProductVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProductVersionResponse
 */
CreateProductVersionResponse Client::createProductVersionWithOptions(const CreateProductVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasActive()) {
    body["Active"] = request.getActive();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasGuidance()) {
    body["Guidance"] = request.getGuidance();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductVersionName()) {
    body["ProductVersionName"] = request.getProductVersionName();
  }

  if (!!request.hasTemplateType()) {
    body["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasTemplateUrl()) {
    body["TemplateUrl"] = request.getTemplateUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateProductVersion"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProductVersionResponse>();
}

/**
 * @summary Creates a product version.
 *
 * @description Before you call the CreateProductVersion operation, you must call the [CreateTemplate](~~CreateTemplate~~) operation to create a template.
 *
 * @param request CreateProductVersionRequest
 * @return CreateProductVersionResponse
 */
CreateProductVersionResponse Client::createProductVersion(const CreateProductVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProductVersionWithOptions(request, runtime);
}

/**
 * @summary Creates a plan.
 *
 * @param request CreateProvisionedProductPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProvisionedProductPlanResponse
 */
CreateProvisionedProductPlanResponse Client::createProvisionedProductPlanWithOptions(const CreateProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasOperationType()) {
    body["OperationType"] = request.getOperationType();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.getParameters();
  }

  if (!!request.hasPlanName()) {
    body["PlanName"] = request.getPlanName();
  }

  if (!!request.hasPlanType()) {
    body["PlanType"] = request.getPlanType();
  }

  if (!!request.hasPortfolioId()) {
    body["PortfolioId"] = request.getPortfolioId();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductVersionId()) {
    body["ProductVersionId"] = request.getProductVersionId();
  }

  if (!!request.hasProvisionedProductName()) {
    body["ProvisionedProductName"] = request.getProvisionedProductName();
  }

  if (!!request.hasStackRegionId()) {
    body["StackRegionId"] = request.getStackRegionId();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateProvisionedProductPlan"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProvisionedProductPlanResponse>();
}

/**
 * @summary Creates a plan.
 *
 * @param request CreateProvisionedProductPlanRequest
 * @return CreateProvisionedProductPlanResponse
 */
CreateProvisionedProductPlanResponse Client::createProvisionedProductPlan(const CreateProvisionedProductPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProvisionedProductPlanWithOptions(request, runtime);
}

/**
 * @summary Creates a tag option.
 *
 * @param request CreateTagOptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTagOptionResponse
 */
CreateTagOptionResponse Client::createTagOptionWithOptions(const CreateTagOptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKey()) {
    body["Key"] = request.getKey();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateTagOption"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTagOptionResponse>();
}

/**
 * @summary Creates a tag option.
 *
 * @param request CreateTagOptionRequest
 * @return CreateTagOptionResponse
 */
CreateTagOptionResponse Client::createTagOption(const CreateTagOptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTagOptionWithOptions(request, runtime);
}

/**
 * @summary Creates a template. Service Catalog saves the template based on the parameters that you specify and returns the URL of the template.
 *
 * @param request CreateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplateWithOptions(const CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.getTemplateBody();
  }

  if (!!request.hasTemplateType()) {
    body["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasTerraformVariables()) {
    body["TerraformVariables"] = request.getTerraformVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateResponse>();
}

/**
 * @summary Creates a template. Service Catalog saves the template based on the parameters that you specify and returns the URL of the template.
 *
 * @param request CreateTemplateRequest
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplate(const CreateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a constraint.
 *
 * @param request DeleteConstraintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConstraintResponse
 */
DeleteConstraintResponse Client::deleteConstraintWithOptions(const DeleteConstraintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConstraintId()) {
    body["ConstraintId"] = request.getConstraintId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteConstraint"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConstraintResponse>();
}

/**
 * @summary Deletes a constraint.
 *
 * @param request DeleteConstraintRequest
 * @return DeleteConstraintResponse
 */
DeleteConstraintResponse Client::deleteConstraint(const DeleteConstraintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConstraintWithOptions(request, runtime);
}

/**
 * @summary Deletes a product portfolio.
 *
 * @param request DeletePortfolioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePortfolioResponse
 */
DeletePortfolioResponse Client::deletePortfolioWithOptions(const DeletePortfolioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPortfolioId()) {
    body["PortfolioId"] = request.getPortfolioId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeletePortfolio"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePortfolioResponse>();
}

/**
 * @summary Deletes a product portfolio.
 *
 * @param request DeletePortfolioRequest
 * @return DeletePortfolioResponse
 */
DeletePortfolioResponse Client::deletePortfolio(const DeletePortfolioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePortfolioWithOptions(request, runtime);
}

/**
 * @summary Deletes a product.
 *
 * @param request DeleteProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProductResponse
 */
DeleteProductResponse Client::deleteProductWithOptions(const DeleteProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteProduct"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProductResponse>();
}

/**
 * @summary Deletes a product.
 *
 * @param request DeleteProductRequest
 * @return DeleteProductResponse
 */
DeleteProductResponse Client::deleteProduct(const DeleteProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProductWithOptions(request, runtime);
}

/**
 * @summary Deletes a product version.
 *
 * @param request DeleteProductVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProductVersionResponse
 */
DeleteProductVersionResponse Client::deleteProductVersionWithOptions(const DeleteProductVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProductVersionId()) {
    body["ProductVersionId"] = request.getProductVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteProductVersion"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProductVersionResponse>();
}

/**
 * @summary Deletes a product version.
 *
 * @param request DeleteProductVersionRequest
 * @return DeleteProductVersionResponse
 */
DeleteProductVersionResponse Client::deleteProductVersion(const DeleteProductVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProductVersionWithOptions(request, runtime);
}

/**
 * @summary Deletes a plan.
 *
 * @param request DeleteProvisionedProductPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProvisionedProductPlanResponse
 */
DeleteProvisionedProductPlanResponse Client::deleteProvisionedProductPlanWithOptions(const DeleteProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPlanId()) {
    body["PlanId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteProvisionedProductPlan"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProvisionedProductPlanResponse>();
}

/**
 * @summary Deletes a plan.
 *
 * @param request DeleteProvisionedProductPlanRequest
 * @return DeleteProvisionedProductPlanResponse
 */
DeleteProvisionedProductPlanResponse Client::deleteProvisionedProductPlan(const DeleteProvisionedProductPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProvisionedProductPlanWithOptions(request, runtime);
}

/**
 * @summary Deletes a tag option.
 *
 * @param request DeleteTagOptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTagOptionResponse
 */
DeleteTagOptionResponse Client::deleteTagOptionWithOptions(const DeleteTagOptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTagOptionId()) {
    body["TagOptionId"] = request.getTagOptionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteTagOption"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTagOptionResponse>();
}

/**
 * @summary Deletes a tag option.
 *
 * @param request DeleteTagOptionRequest
 * @return DeleteTagOptionResponse
 */
DeleteTagOptionResponse Client::deleteTagOption(const DeleteTagOptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTagOptionWithOptions(request, runtime);
}

/**
 * @summary Disassociates a tag option from a resource.
 *
 * @param request DisAssociateTagOptionFromResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisAssociateTagOptionFromResourceResponse
 */
DisAssociateTagOptionFromResourceResponse Client::disAssociateTagOptionFromResourceWithOptions(const DisAssociateTagOptionFromResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasTagOptionId()) {
    body["TagOptionId"] = request.getTagOptionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisAssociateTagOptionFromResource"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisAssociateTagOptionFromResourceResponse>();
}

/**
 * @summary Disassociates a tag option from a resource.
 *
 * @param request DisAssociateTagOptionFromResourceRequest
 * @return DisAssociateTagOptionFromResourceResponse
 */
DisAssociateTagOptionFromResourceResponse Client::disAssociateTagOptionFromResource(const DisAssociateTagOptionFromResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disAssociateTagOptionFromResourceWithOptions(request, runtime);
}

/**
 * @summary Revokes the permissions to access a product portfolio.
 *
 * @param request DisassociatePrincipalFromPortfolioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociatePrincipalFromPortfolioResponse
 */
DisassociatePrincipalFromPortfolioResponse Client::disassociatePrincipalFromPortfolioWithOptions(const DisassociatePrincipalFromPortfolioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPortfolioId()) {
    body["PortfolioId"] = request.getPortfolioId();
  }

  if (!!request.hasPrincipalId()) {
    body["PrincipalId"] = request.getPrincipalId();
  }

  if (!!request.hasPrincipalType()) {
    body["PrincipalType"] = request.getPrincipalType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisassociatePrincipalFromPortfolio"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociatePrincipalFromPortfolioResponse>();
}

/**
 * @summary Revokes the permissions to access a product portfolio.
 *
 * @param request DisassociatePrincipalFromPortfolioRequest
 * @return DisassociatePrincipalFromPortfolioResponse
 */
DisassociatePrincipalFromPortfolioResponse Client::disassociatePrincipalFromPortfolio(const DisassociatePrincipalFromPortfolioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociatePrincipalFromPortfolioWithOptions(request, runtime);
}

/**
 * @summary Removes a product from the product portfolio.
 *
 * @param request DisassociateProductFromPortfolioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateProductFromPortfolioResponse
 */
DisassociateProductFromPortfolioResponse Client::disassociateProductFromPortfolioWithOptions(const DisassociateProductFromPortfolioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPortfolioId()) {
    body["PortfolioId"] = request.getPortfolioId();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisassociateProductFromPortfolio"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateProductFromPortfolioResponse>();
}

/**
 * @summary Removes a product from the product portfolio.
 *
 * @param request DisassociateProductFromPortfolioRequest
 * @return DisassociateProductFromPortfolioResponse
 */
DisassociateProductFromPortfolioResponse Client::disassociateProductFromPortfolio(const DisassociateProductFromPortfolioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateProductFromPortfolioWithOptions(request, runtime);
}

/**
 * @summary Runs a plan.
 *
 * @param request ExecuteProvisionedProductPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteProvisionedProductPlanResponse
 */
ExecuteProvisionedProductPlanResponse Client::executeProvisionedProductPlanWithOptions(const ExecuteProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPlanId()) {
    body["PlanId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteProvisionedProductPlan"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteProvisionedProductPlanResponse>();
}

/**
 * @summary Runs a plan.
 *
 * @param request ExecuteProvisionedProductPlanRequest
 * @return ExecuteProvisionedProductPlanResponse
 */
ExecuteProvisionedProductPlanResponse Client::executeProvisionedProductPlan(const ExecuteProvisionedProductPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeProvisionedProductPlanWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a constraint.
 *
 * @param request GetConstraintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConstraintResponse
 */
GetConstraintResponse Client::getConstraintWithOptions(const GetConstraintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConstraintId()) {
    query["ConstraintId"] = request.getConstraintId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConstraint"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConstraintResponse>();
}

/**
 * @summary Queries the information about a constraint.
 *
 * @param request GetConstraintRequest
 * @return GetConstraintResponse
 */
GetConstraintResponse Client::getConstraint(const GetConstraintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConstraintWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a product portfolio.
 *
 * @param request GetPortfolioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPortfolioResponse
 */
GetPortfolioResponse Client::getPortfolioWithOptions(const GetPortfolioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPortfolioId()) {
    query["PortfolioId"] = request.getPortfolioId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPortfolio"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPortfolioResponse>();
}

/**
 * @summary Queries the information about a product portfolio.
 *
 * @param request GetPortfolioRequest
 * @return GetPortfolioResponse
 */
GetPortfolioResponse Client::getPortfolio(const GetPortfolioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPortfolioWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a product as the administrator.
 *
 * @param request GetProductAsAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProductAsAdminResponse
 */
GetProductAsAdminResponse Client::getProductAsAdminWithOptions(const GetProductAsAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProductAsAdmin"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProductAsAdminResponse>();
}

/**
 * @summary Queries the information about a product as the administrator.
 *
 * @param request GetProductAsAdminRequest
 * @return GetProductAsAdminResponse
 */
GetProductAsAdminResponse Client::getProductAsAdmin(const GetProductAsAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProductAsAdminWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a product as a user.
 *
 * @description Make sure that you are granted the permissions to manage relevant products as a user by an administrator. For more information, see [Manage access permissions](https://help.aliyun.com/document_detail/405233.html).
 *
 * @param request GetProductAsEndUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProductAsEndUserResponse
 */
GetProductAsEndUserResponse Client::getProductAsEndUserWithOptions(const GetProductAsEndUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProductAsEndUser"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProductAsEndUserResponse>();
}

/**
 * @summary Queries the information about a product as a user.
 *
 * @description Make sure that you are granted the permissions to manage relevant products as a user by an administrator. For more information, see [Manage access permissions](https://help.aliyun.com/document_detail/405233.html).
 *
 * @param request GetProductAsEndUserRequest
 * @return GetProductAsEndUserResponse
 */
GetProductAsEndUserResponse Client::getProductAsEndUser(const GetProductAsEndUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProductAsEndUserWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a product version.
 *
 * @param request GetProductVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProductVersionResponse
 */
GetProductVersionResponse Client::getProductVersionWithOptions(const GetProductVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductVersionId()) {
    query["ProductVersionId"] = request.getProductVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProductVersion"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProductVersionResponse>();
}

/**
 * @summary Queries the details of a product version.
 *
 * @param request GetProductVersionRequest
 * @return GetProductVersionResponse
 */
GetProductVersionResponse Client::getProductVersion(const GetProductVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProductVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a product instance.
 *
 * @param request GetProvisionedProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProvisionedProductResponse
 */
GetProvisionedProductResponse Client::getProvisionedProductWithOptions(const GetProvisionedProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProvisionedProductId()) {
    query["ProvisionedProductId"] = request.getProvisionedProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProvisionedProduct"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProvisionedProductResponse>();
}

/**
 * @summary Queries the information about a product instance.
 *
 * @param request GetProvisionedProductRequest
 * @return GetProvisionedProductResponse
 */
GetProvisionedProductResponse Client::getProvisionedProduct(const GetProvisionedProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProvisionedProductWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a plan.
 *
 * @param request GetProvisionedProductPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProvisionedProductPlanResponse
 */
GetProvisionedProductPlanResponse Client::getProvisionedProductPlanWithOptions(const GetProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPlanId()) {
    body["PlanId"] = request.getPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetProvisionedProductPlan"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProvisionedProductPlanResponse>();
}

/**
 * @summary Queries the details of a plan.
 *
 * @param request GetProvisionedProductPlanRequest
 * @return GetProvisionedProductPlanResponse
 */
GetProvisionedProductPlanResponse Client::getProvisionedProductPlan(const GetProvisionedProductPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProvisionedProductPlanWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a tag option.
 *
 * @param request GetTagOptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTagOptionResponse
 */
GetTagOptionResponse Client::getTagOptionWithOptions(const GetTagOptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTagOption"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTagOptionResponse>();
}

/**
 * @summary Queries the details of a tag option.
 *
 * @param request GetTagOptionRequest
 * @return GetTagOptionResponse
 */
GetTagOptionResponse Client::getTagOption(const GetTagOptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTagOptionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a task.
 *
 * @param request GetTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTask"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResponse>();
}

/**
 * @summary Queries the information about a task.
 *
 * @param request GetTaskRequest
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const GetTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a template.
 *
 * @param request GetTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductVersionId()) {
    query["ProductVersionId"] = request.getProductVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateResponse>();
}

/**
 * @summary Queries the details of a template.
 *
 * @param request GetTemplateRequest
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const GetTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateWithOptions(request, runtime);
}

/**
 * @summary Launches a product.
 *
 * @param request LaunchProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LaunchProductResponse
 */
LaunchProductResponse Client::launchProductWithOptions(const LaunchProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasParameters()) {
    body["Parameters"] = request.getParameters();
  }

  if (!!request.hasPortfolioId()) {
    body["PortfolioId"] = request.getPortfolioId();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductVersionId()) {
    body["ProductVersionId"] = request.getProductVersionId();
  }

  if (!!request.hasProvisionedProductName()) {
    body["ProvisionedProductName"] = request.getProvisionedProductName();
  }

  if (!!request.hasStackRegionId()) {
    body["StackRegionId"] = request.getStackRegionId();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LaunchProduct"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LaunchProductResponse>();
}

/**
 * @summary Launches a product.
 *
 * @param request LaunchProductRequest
 * @return LaunchProductResponse
 */
LaunchProductResponse Client::launchProduct(const LaunchProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return launchProductWithOptions(request, runtime);
}

/**
 * @summary Queries launch options.
 *
 * @param request ListLaunchOptionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLaunchOptionsResponse
 */
ListLaunchOptionsResponse Client::listLaunchOptionsWithOptions(const ListLaunchOptionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLaunchOptions"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLaunchOptionsResponse>();
}

/**
 * @summary Queries launch options.
 *
 * @param request ListLaunchOptionsRequest
 * @return ListLaunchOptionsResponse
 */
ListLaunchOptionsResponse Client::listLaunchOptions(const ListLaunchOptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLaunchOptionsWithOptions(request, runtime);
}

/**
 * @summary The number of entries returned per page.
 *
 * @param request ListPortfoliosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPortfoliosResponse
 */
ListPortfoliosResponse Client::listPortfoliosWithOptions(const ListPortfoliosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPortfolios"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPortfoliosResponse>();
}

/**
 * @summary The number of entries returned per page.
 *
 * @param request ListPortfoliosRequest
 * @return ListPortfoliosResponse
 */
ListPortfoliosResponse Client::listPortfolios(const ListPortfoliosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPortfoliosWithOptions(request, runtime);
}

/**
 * @summary Queries the Resource Access Management (RAM) users and RAM roles that are granted the permissions to access a product portfolio.
 *
 * @param request ListPrincipalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrincipalsResponse
 */
ListPrincipalsResponse Client::listPrincipalsWithOptions(const ListPrincipalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPortfolioId()) {
    query["PortfolioId"] = request.getPortfolioId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrincipals"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrincipalsResponse>();
}

/**
 * @summary Queries the Resource Access Management (RAM) users and RAM roles that are granted the permissions to access a product portfolio.
 *
 * @param request ListPrincipalsRequest
 * @return ListPrincipalsResponse
 */
ListPrincipalsResponse Client::listPrincipals(const ListPrincipalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrincipalsWithOptions(request, runtime);
}

/**
 * @summary Queries the versions of a product.
 *
 * @param request ListProductVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductVersionsResponse
 */
ListProductVersionsResponse Client::listProductVersionsWithOptions(const ListProductVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProductVersions"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductVersionsResponse>();
}

/**
 * @summary Queries the versions of a product.
 *
 * @param request ListProductVersionsRequest
 * @return ListProductVersionsResponse
 */
ListProductVersionsResponse Client::listProductVersions(const ListProductVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries products as an administrator.
 *
 * @param request ListProductsAsAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsAsAdminResponse
 */
ListProductsAsAdminResponse Client::listProductsAsAdminWithOptions(const ListProductsAsAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPortfolioId()) {
    query["PortfolioId"] = request.getPortfolioId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProductsAsAdmin"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductsAsAdminResponse>();
}

/**
 * @summary Queries products as an administrator.
 *
 * @param request ListProductsAsAdminRequest
 * @return ListProductsAsAdminResponse
 */
ListProductsAsAdminResponse Client::listProductsAsAdmin(const ListProductsAsAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductsAsAdminWithOptions(request, runtime);
}

/**
 * @summary Queries products as a user.
 *
 * @description Make sure that you are granted the permissions to manage relevant products as a user by an administrator. For more information, see [Manage access permissions](https://help.aliyun.com/document_detail/405233.html).
 *
 * @param request ListProductsAsEndUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsAsEndUserResponse
 */
ListProductsAsEndUserResponse Client::listProductsAsEndUserWithOptions(const ListProductsAsEndUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProductsAsEndUser"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductsAsEndUserResponse>();
}

/**
 * @summary Queries products as a user.
 *
 * @description Make sure that you are granted the permissions to manage relevant products as a user by an administrator. For more information, see [Manage access permissions](https://help.aliyun.com/document_detail/405233.html).
 *
 * @param request ListProductsAsEndUserRequest
 * @return ListProductsAsEndUserResponse
 */
ListProductsAsEndUserResponse Client::listProductsAsEndUser(const ListProductsAsEndUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductsAsEndUserWithOptions(request, runtime);
}

/**
 * @summary Queries a list of plan reviewers.
 *
 * @param request ListProvisionedProductPlanApproversRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProvisionedProductPlanApproversResponse
 */
ListProvisionedProductPlanApproversResponse Client::listProvisionedProductPlanApproversWithOptions(const ListProvisionedProductPlanApproversRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProvisionedProductPlanApprovers"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProvisionedProductPlanApproversResponse>();
}

/**
 * @summary Queries a list of plan reviewers.
 *
 * @param request ListProvisionedProductPlanApproversRequest
 * @return ListProvisionedProductPlanApproversResponse
 */
ListProvisionedProductPlanApproversResponse Client::listProvisionedProductPlanApprovers(const ListProvisionedProductPlanApproversRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProvisionedProductPlanApproversWithOptions(request, runtime);
}

/**
 * @summary Queries a list of plans. You can query plans from the end user dimension or from the review dimension.
 *
 * @param request ListProvisionedProductPlansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProvisionedProductPlansResponse
 */
ListProvisionedProductPlansResponse Client::listProvisionedProductPlansWithOptions(const ListProvisionedProductPlansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessLevelFilter()) {
    query["AccessLevelFilter"] = request.getAccessLevelFilter();
  }

  if (!!request.hasApprovalFilter()) {
    query["ApprovalFilter"] = request.getApprovalFilter();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProvisionedProductId()) {
    query["ProvisionedProductId"] = request.getProvisionedProductId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProvisionedProductPlans"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProvisionedProductPlansResponse>();
}

/**
 * @summary Queries a list of plans. You can query plans from the end user dimension or from the review dimension.
 *
 * @param request ListProvisionedProductPlansRequest
 * @return ListProvisionedProductPlansResponse
 */
ListProvisionedProductPlansResponse Client::listProvisionedProductPlans(const ListProvisionedProductPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProvisionedProductPlansWithOptions(request, runtime);
}

/**
 * @summary Queries product instances.
 *
 * @param request ListProvisionedProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProvisionedProductsResponse
 */
ListProvisionedProductsResponse Client::listProvisionedProductsWithOptions(const ListProvisionedProductsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessLevelFilter()) {
    query["AccessLevelFilter"] = request.getAccessLevelFilter();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProvisionedProducts"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProvisionedProductsResponse>();
}

/**
 * @summary Queries product instances.
 *
 * @param request ListProvisionedProductsRequest
 * @return ListProvisionedProductsResponse
 */
ListProvisionedProductsResponse Client::listProvisionedProducts(const ListProvisionedProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProvisionedProductsWithOptions(request, runtime);
}

/**
 * @summary Queries regions.
 *
 * @param request ListRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionsResponse>();
}

/**
 * @summary Queries regions.
 *
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionsWithOptions(runtime);
}

/**
 * @summary Queries the resources that are associated with a tag option.
 *
 * @param request ListResourcesForTagOptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcesForTagOptionResponse
 */
ListResourcesForTagOptionResponse Client::listResourcesForTagOptionWithOptions(const ListResourcesForTagOptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourcesForTagOption"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcesForTagOptionResponse>();
}

/**
 * @summary Queries the resources that are associated with a tag option.
 *
 * @param request ListResourcesForTagOptionRequest
 * @return ListResourcesForTagOptionResponse
 */
ListResourcesForTagOptionResponse Client::listResourcesForTagOption(const ListResourcesForTagOptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourcesForTagOptionWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tag options.
 *
 * @param tmpReq ListTagOptionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagOptionsResponse
 */
ListTagOptionsResponse Client::listTagOptionsWithOptions(const ListTagOptionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagOptionsShrinkRequest request = ListTagOptionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilters()) {
    request.setFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilters(), "Filters", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagOptions"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagOptionsResponse>();
}

/**
 * @summary Queries a list of tag options.
 *
 * @param request ListTagOptionsRequest
 * @return ListTagOptionsResponse
 */
ListTagOptionsResponse Client::listTagOptions(const ListTagOptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagOptionsWithOptions(request, runtime);
}

/**
 * @summary The page number of the returned page.
 *
 * @param request ListTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasksWithOptions(const ListTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProvisionedProductId()) {
    query["ProvisionedProductId"] = request.getProvisionedProductId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTasks"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTasksResponse>();
}

/**
 * @summary The page number of the returned page.
 *
 * @param request ListTasksRequest
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasks(const ListTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTasksWithOptions(request, runtime);
}

/**
 * @summary Terminates a product instance.
 *
 * @description After a product instance is terminated, the product instance is deleted from the product instance list. End users cannot manage the product instance throughout its lifecycle. Proceed with caution.
 *
 * @param request TerminateProvisionedProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateProvisionedProductResponse
 */
TerminateProvisionedProductResponse Client::terminateProvisionedProductWithOptions(const TerminateProvisionedProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProvisionedProductId()) {
    body["ProvisionedProductId"] = request.getProvisionedProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TerminateProvisionedProduct"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminateProvisionedProductResponse>();
}

/**
 * @summary Terminates a product instance.
 *
 * @description After a product instance is terminated, the product instance is deleted from the product instance list. End users cannot manage the product instance throughout its lifecycle. Proceed with caution.
 *
 * @param request TerminateProvisionedProductRequest
 * @return TerminateProvisionedProductResponse
 */
TerminateProvisionedProductResponse Client::terminateProvisionedProduct(const TerminateProvisionedProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return terminateProvisionedProductWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a constraint.
 *
 * @param request UpdateConstraintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConstraintResponse
 */
UpdateConstraintResponse Client::updateConstraintWithOptions(const UpdateConstraintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasConstraintId()) {
    body["ConstraintId"] = request.getConstraintId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateConstraint"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConstraintResponse>();
}

/**
 * @summary Updates the information about a constraint.
 *
 * @param request UpdateConstraintRequest
 * @return UpdateConstraintResponse
 */
UpdateConstraintResponse Client::updateConstraint(const UpdateConstraintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConstraintWithOptions(request, runtime);
}

/**
 * @summary The ID of the product portfolio.
 *
 * @param request UpdatePortfolioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePortfolioResponse
 */
UpdatePortfolioResponse Client::updatePortfolioWithOptions(const UpdatePortfolioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasPortfolioId()) {
    body["PortfolioId"] = request.getPortfolioId();
  }

  if (!!request.hasPortfolioName()) {
    body["PortfolioName"] = request.getPortfolioName();
  }

  if (!!request.hasProviderName()) {
    body["ProviderName"] = request.getProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdatePortfolio"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePortfolioResponse>();
}

/**
 * @summary The ID of the product portfolio.
 *
 * @param request UpdatePortfolioRequest
 * @return UpdatePortfolioResponse
 */
UpdatePortfolioResponse Client::updatePortfolio(const UpdatePortfolioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePortfolioWithOptions(request, runtime);
}

/**
 * @summary The ID of the product.
 *
 * @param request UpdateProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProductResponse
 */
UpdateProductResponse Client::updateProductWithOptions(const UpdateProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductName()) {
    body["ProductName"] = request.getProductName();
  }

  if (!!request.hasProviderName()) {
    body["ProviderName"] = request.getProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateProduct"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProductResponse>();
}

/**
 * @summary The ID of the product.
 *
 * @param request UpdateProductRequest
 * @return UpdateProductResponse
 */
UpdateProductResponse Client::updateProduct(const UpdateProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProductWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a product version.
 *
 * @param request UpdateProductVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProductVersionResponse
 */
UpdateProductVersionResponse Client::updateProductVersionWithOptions(const UpdateProductVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasActive()) {
    body["Active"] = request.getActive();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasGuidance()) {
    body["Guidance"] = request.getGuidance();
  }

  if (!!request.hasProductVersionId()) {
    body["ProductVersionId"] = request.getProductVersionId();
  }

  if (!!request.hasProductVersionName()) {
    body["ProductVersionName"] = request.getProductVersionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateProductVersion"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProductVersionResponse>();
}

/**
 * @summary Updates the information about a product version.
 *
 * @param request UpdateProductVersionRequest
 * @return UpdateProductVersionResponse
 */
UpdateProductVersionResponse Client::updateProductVersion(const UpdateProductVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProductVersionWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a product instance.
 *
 * @param request UpdateProvisionedProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProvisionedProductResponse
 */
UpdateProvisionedProductResponse Client::updateProvisionedProductWithOptions(const UpdateProvisionedProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasParameters()) {
    body["Parameters"] = request.getParameters();
  }

  if (!!request.hasPortfolioId()) {
    body["PortfolioId"] = request.getPortfolioId();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductVersionId()) {
    body["ProductVersionId"] = request.getProductVersionId();
  }

  if (!!request.hasProvisionedProductId()) {
    body["ProvisionedProductId"] = request.getProvisionedProductId();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateProvisionedProduct"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProvisionedProductResponse>();
}

/**
 * @summary Updates the information about a product instance.
 *
 * @param request UpdateProvisionedProductRequest
 * @return UpdateProvisionedProductResponse
 */
UpdateProvisionedProductResponse Client::updateProvisionedProduct(const UpdateProvisionedProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProvisionedProductWithOptions(request, runtime);
}

/**
 * @summary Updates a plan.
 *
 * @param request UpdateProvisionedProductPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProvisionedProductPlanResponse
 */
UpdateProvisionedProductPlanResponse Client::updateProvisionedProductPlanWithOptions(const UpdateProvisionedProductPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.getParameters();
  }

  if (!!request.hasPlanId()) {
    body["PlanId"] = request.getPlanId();
  }

  if (!!request.hasPortfolioId()) {
    body["PortfolioId"] = request.getPortfolioId();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductVersionId()) {
    body["ProductVersionId"] = request.getProductVersionId();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateProvisionedProductPlan"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProvisionedProductPlanResponse>();
}

/**
 * @summary Updates a plan.
 *
 * @param request UpdateProvisionedProductPlanRequest
 * @return UpdateProvisionedProductPlanResponse
 */
UpdateProvisionedProductPlanResponse Client::updateProvisionedProductPlan(const UpdateProvisionedProductPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProvisionedProductPlanWithOptions(request, runtime);
}

/**
 * @summary Updates the tag option.
 *
 * @param request UpdateTagOptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTagOptionResponse
 */
UpdateTagOptionResponse Client::updateTagOptionWithOptions(const UpdateTagOptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasActive()) {
    body["Active"] = request.getActive();
  }

  if (!!request.hasTagOptionId()) {
    body["TagOptionId"] = request.getTagOptionId();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateTagOption"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTagOptionResponse>();
}

/**
 * @summary Updates the tag option.
 *
 * @param request UpdateTagOptionRequest
 * @return UpdateTagOptionResponse
 */
UpdateTagOptionResponse Client::updateTagOption(const UpdateTagOptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTagOptionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901