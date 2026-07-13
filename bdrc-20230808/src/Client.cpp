#include <darabonba/Core.hpp>
#include <alibabacloud/BDRC20230808.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::BDRC20230808::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace BDRC20230808
{

AlibabaCloud::BDRC20230808::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai-finance-1" , "bdrc.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "bdrc.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "bdrc.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("bdrc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Checks data protection scoring rules. Calling this operation triggers an asynchronous task to check whether your resources meet the data protection scoring requirements.
 *
 * @param request CheckRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckRulesResponse
 */
CheckRulesResponse Client::checkRulesWithOptions(const CheckRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceArn()) {
    body["ResourceArn"] = request.getResourceArn();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckRules"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/rules/check")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckRulesResponse>();
}

/**
 * @summary Checks data protection scoring rules. Calling this operation triggers an asynchronous task to check whether your resources meet the data protection scoring requirements.
 *
 * @param request CheckRulesRequest
 * @return CheckRulesResponse
 */
CheckRulesResponse Client::checkRules(const CheckRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkRulesWithOptions(request, headers, runtime);
}

/**
 * @summary Shuts down the Backup and Disaster Recovery Center.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseBdrcServiceResponse
 */
CloseBdrcServiceResponse Client::closeBdrcServiceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseBdrcService"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/service/close")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseBdrcServiceResponse>();
}

/**
 * @summary Shuts down the Backup and Disaster Recovery Center.
 *
 * @return CloseBdrcServiceResponse
 */
CloseBdrcServiceResponse Client::closeBdrcService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return closeBdrcServiceWithOptions(headers, runtime);
}

/**
 * @summary Creates a protection policy.
 *
 * @param tmpReq CreateProtectionPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProtectionPolicyResponse
 */
CreateProtectionPolicyResponse Client::createProtectionPolicyWithOptions(const CreateProtectionPolicyRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProtectionPolicyShrinkRequest request = CreateProtectionPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBoundResourceCategoryIds()) {
    request.setBoundResourceCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBoundResourceCategoryIds(), "BoundResourceCategoryIds", "json"));
  }

  if (!!tmpReq.hasSubProtectionPolicies()) {
    request.setSubProtectionPoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubProtectionPolicies(), "SubProtectionPolicies", "json"));
  }

  json body = {};
  if (!!request.hasBoundResourceCategoryIdsShrink()) {
    body["BoundResourceCategoryIds"] = request.getBoundResourceCategoryIdsShrink();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasProtectionPolicyName()) {
    body["ProtectionPolicyName"] = request.getProtectionPolicyName();
  }

  if (!!request.hasProtectionPolicyRegionId()) {
    body["ProtectionPolicyRegionId"] = request.getProtectionPolicyRegionId();
  }

  if (!!request.hasSubProtectionPoliciesShrink()) {
    body["SubProtectionPolicies"] = request.getSubProtectionPoliciesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateProtectionPolicy"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/protection-policies")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProtectionPolicyResponse>();
}

/**
 * @summary Creates a protection policy.
 *
 * @param request CreateProtectionPolicyRequest
 * @return CreateProtectionPolicyResponse
 */
CreateProtectionPolicyResponse Client::createProtectionPolicy(const CreateProtectionPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProtectionPolicyWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a resource category.
 *
 * @param request CreateResourceCategoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceCategoryResponse
 */
CreateResourceCategoryResponse Client::createResourceCategoryWithOptions(const CreateResourceCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceCategoryName()) {
    body["ResourceCategoryName"] = request.getResourceCategoryName();
  }

  if (!!request.hasResourceMatcher()) {
    body["ResourceMatcher"] = request.getResourceMatcher();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResourceCategory"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resource-categories/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceCategoryResponse>();
}

/**
 * @summary Creates a resource category.
 *
 * @param request CreateResourceCategoryRequest
 * @return CreateResourceCategoryResponse
 */
CreateResourceCategoryResponse Client::createResourceCategory(const CreateResourceCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceCategoryWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a protection policy.
 *
 * @param request DeleteProtectionPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProtectionPolicyResponse
 */
DeleteProtectionPolicyResponse Client::deleteProtectionPolicyWithOptions(const string &ProtectionPolicyId, const DeleteProtectionPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProtectionPolicy"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/protection-policies/" , Darabonba::Encode::Encoder::percentEncode(ProtectionPolicyId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProtectionPolicyResponse>();
}

/**
 * @summary Deletes a protection policy.
 *
 * @param request DeleteProtectionPolicyRequest
 * @return DeleteProtectionPolicyResponse
 */
DeleteProtectionPolicyResponse Client::deleteProtectionPolicy(const string &ProtectionPolicyId, const DeleteProtectionPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteProtectionPolicyWithOptions(ProtectionPolicyId, request, headers, runtime);
}

/**
 * @summary Deletes a resource category.
 *
 * @param request DeleteResourceCategoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceCategoryResponse
 */
DeleteResourceCategoryResponse Client::deleteResourceCategoryWithOptions(const DeleteResourceCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceCategoryId()) {
    body["ResourceCategoryId"] = request.getResourceCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteResourceCategory"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resource-categories/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceCategoryResponse>();
}

/**
 * @summary Deletes a resource category.
 *
 * @param request DeleteResourceCategoryRequest
 * @return DeleteResourceCategoryResponse
 */
DeleteResourceCategoryResponse Client::deleteResourceCategory(const DeleteResourceCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceCategoryWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the check results for data protection rules.
 *
 * @param request DescribeCheckDetailsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCheckDetailsResponse
 */
DescribeCheckDetailsResponse Client::describeCheckDetailsWithOptions(const DescribeCheckDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceArn()) {
    query["ResourceArn"] = request.getResourceArn();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCheckDetails"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/check-details")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCheckDetailsResponse>();
}

/**
 * @summary Retrieves the check results for data protection rules.
 *
 * @param request DescribeCheckDetailsRequest
 * @return DescribeCheckDetailsResponse
 */
DescribeCheckDetailsResponse Client::describeCheckDetails(const DescribeCheckDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeCheckDetailsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries statistics on data redundancy types for a cloud service.
 *
 * @param tmpReq DescribeProductDataRedundancyTypeStatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductDataRedundancyTypeStatResponse
 */
DescribeProductDataRedundancyTypeStatResponse Client::describeProductDataRedundancyTypeStatWithOptions(const DescribeProductDataRedundancyTypeStatRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeProductDataRedundancyTypeStatShrinkRequest request = DescribeProductDataRedundancyTypeStatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceOwnerIds()) {
    request.setResourceOwnerIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceOwnerIds(), "ResourceOwnerIds", "json"));
  }

  json query = {};
  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceCategoryId()) {
    query["ResourceCategoryId"] = request.getResourceCategoryId();
  }

  if (!!request.hasResourceOwnerIdsShrink()) {
    query["ResourceOwnerIds"] = request.getResourceOwnerIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProductDataRedundancyTypeStat"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/products/data-redundancy-type-stat")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProductDataRedundancyTypeStatResponse>();
}

/**
 * @summary Queries statistics on data redundancy types for a cloud service.
 *
 * @param request DescribeProductDataRedundancyTypeStatRequest
 * @return DescribeProductDataRedundancyTypeStatResponse
 */
DescribeProductDataRedundancyTypeStatResponse Client::describeProductDataRedundancyTypeStat(const DescribeProductDataRedundancyTypeStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeProductDataRedundancyTypeStatWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the data protection score status for cloud products.
 *
 * @param tmpReq DescribeProductsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductsResponse
 */
DescribeProductsResponse Client::describeProductsWithOptions(const DescribeProductsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeProductsShrinkRequest request = DescribeProductsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceOwnerIds()) {
    request.setResourceOwnerIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceOwnerIds(), "ResourceOwnerIds", "json"));
  }

  json query = {};
  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceCategoryId()) {
    query["ResourceCategoryId"] = request.getResourceCategoryId();
  }

  if (!!request.hasResourceOwnerIdsShrink()) {
    query["ResourceOwnerIds"] = request.getResourceOwnerIdsShrink();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProducts"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/products")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProductsResponse>();
}

/**
 * @summary Queries the data protection score status for cloud products.
 *
 * @param request DescribeProductsRequest
 * @return DescribeProductsResponse
 */
DescribeProductsResponse Client::describeProducts(const DescribeProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeProductsWithOptions(request, headers, runtime);
}

/**
 * @summary Query resources
 *
 * @param tmpReq DescribeResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourcesResponse
 */
DescribeResourcesResponse Client::describeResourcesWithOptions(const DescribeResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeResourcesShrinkRequest request = DescribeResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceOwnerIds()) {
    request.setResourceOwnerIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceOwnerIds(), "ResourceOwnerIds", "json"));
  }

  json query = {};
  if (!!request.hasDataRedundancyType()) {
    query["DataRedundancyType"] = request.getDataRedundancyType();
  }

  if (!!request.hasFailedRuleTemplate()) {
    query["FailedRuleTemplate"] = request.getFailedRuleTemplate();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceArn()) {
    query["ResourceArn"] = request.getResourceArn();
  }

  if (!!request.hasResourceCategoryId()) {
    query["ResourceCategoryId"] = request.getResourceCategoryId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerIdsShrink()) {
    query["ResourceOwnerIds"] = request.getResourceOwnerIdsShrink();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasStorageClass()) {
    query["StorageClass"] = request.getStorageClass();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResources"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourcesResponse>();
}

/**
 * @summary Query resources
 *
 * @param request DescribeResourcesRequest
 * @return DescribeResourcesResponse
 */
DescribeResourcesResponse Client::describeResources(const DescribeResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Lists all data protection rules.
 *
 * @param tmpReq DescribeRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRulesResponse
 */
DescribeRulesResponse Client::describeRulesWithOptions(const DescribeRulesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeRulesShrinkRequest request = DescribeRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceOwnerIds()) {
    request.setResourceOwnerIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceOwnerIds(), "ResourceOwnerIds", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceCategoryId()) {
    query["ResourceCategoryId"] = request.getResourceCategoryId();
  }

  if (!!request.hasResourceOwnerIdsShrink()) {
    query["ResourceOwnerIds"] = request.getResourceOwnerIdsShrink();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRules"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/rules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRulesResponse>();
}

/**
 * @summary Lists all data protection rules.
 *
 * @param request DescribeRulesRequest
 * @return DescribeRulesResponse
 */
DescribeRulesResponse Client::describeRules(const DescribeRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRulesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the details of an asynchronous task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskResponse
 */
DescribeTaskResponse Client::describeTaskWithOptions(const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTask"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskResponse>();
}

/**
 * @summary Retrieves the details of an asynchronous task.
 *
 * @return DescribeTaskResponse
 */
DescribeTaskResponse Client::describeTask(const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTaskWithOptions(TaskId, headers, runtime);
}

/**
 * @summary Retrieves asynchronous tasks.
 *
 * @param request DescribeTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasksWithOptions(const DescribeTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTaskStatus()) {
    query["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTasks"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTasksResponse>();
}

/**
 * @summary Retrieves asynchronous tasks.
 *
 * @param request DescribeTasksRequest
 * @return DescribeTasksResponse
 */
DescribeTasksResponse Client::describeTasks(const DescribeTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTasksWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the most threatened resources.
 *
 * @param tmpReq DescribeTopRiskyResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTopRiskyResourcesResponse
 */
DescribeTopRiskyResourcesResponse Client::describeTopRiskyResourcesWithOptions(const DescribeTopRiskyResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeTopRiskyResourcesShrinkRequest request = DescribeTopRiskyResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceOwnerIds()) {
    request.setResourceOwnerIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceOwnerIds(), "ResourceOwnerIds", "json"));
  }

  json query = {};
  if (!!request.hasResourceCategoryId()) {
    query["ResourceCategoryId"] = request.getResourceCategoryId();
  }

  if (!!request.hasResourceOwnerIdsShrink()) {
    query["ResourceOwnerIds"] = request.getResourceOwnerIdsShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTopRiskyResources"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/top-risky")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTopRiskyResourcesResponse>();
}

/**
 * @summary Lists the most threatened resources.
 *
 * @param request DescribeTopRiskyResourcesRequest
 * @return DescribeTopRiskyResourcesResponse
 */
DescribeTopRiskyResourcesResponse Client::describeTopRiskyResources(const DescribeTopRiskyResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeTopRiskyResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Disables the data protection score for a cloud product.
 *
 * @param request DisableCheckProductRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableCheckProductResponse
 */
DisableCheckProductResponse Client::disableCheckProductWithOptions(const DisableCheckProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DisableCheckProduct"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/products/disable-check")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableCheckProductResponse>();
}

/**
 * @summary Disables the data protection score for a cloud product.
 *
 * @param request DisableCheckProductRequest
 * @return DisableCheckProductResponse
 */
DisableCheckProductResponse Client::disableCheckProduct(const DisableCheckProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableCheckProductWithOptions(request, headers, runtime);
}

/**
 * @summary Disables the data protection score for a resource.
 *
 * @param request DisableCheckResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableCheckResourceResponse
 */
DisableCheckResourceResponse Client::disableCheckResourceWithOptions(const DisableCheckResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceArn()) {
    body["ResourceArn"] = request.getResourceArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DisableCheckResource"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/disable-check")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableCheckResourceResponse>();
}

/**
 * @summary Disables the data protection score for a resource.
 *
 * @param request DisableCheckResourceRequest
 * @return DisableCheckResourceResponse
 */
DisableCheckResourceResponse Client::disableCheckResource(const DisableCheckResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableCheckResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Enables data protection scoring for a cloud product.
 *
 * @param request EnableCheckProductRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableCheckProductResponse
 */
EnableCheckProductResponse Client::enableCheckProductWithOptions(const EnableCheckProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableCheckProduct"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/products/enable-check")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableCheckProductResponse>();
}

/**
 * @summary Enables data protection scoring for a cloud product.
 *
 * @param request EnableCheckProductRequest
 * @return EnableCheckProductResponse
 */
EnableCheckProductResponse Client::enableCheckProduct(const EnableCheckProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableCheckProductWithOptions(request, headers, runtime);
}

/**
 * @summary Enables data protection scoring for a single resource.
 *
 * @param request EnableCheckResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableCheckResourceResponse
 */
EnableCheckResourceResponse Client::enableCheckResourceWithOptions(const EnableCheckResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceArn()) {
    body["ResourceArn"] = request.getResourceArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableCheckResource"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/enable-check")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableCheckResourceResponse>();
}

/**
 * @summary Enables data protection scoring for a single resource.
 *
 * @param request EnableCheckResourceRequest
 * @return EnableCheckResourceResponse
 */
EnableCheckResourceResponse Client::enableCheckResource(const EnableCheckResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableCheckResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the status of the Backup and Disaster Recovery Center.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBdrcServiceResponse
 */
GetBdrcServiceResponse Client::getBdrcServiceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBdrcService"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/service")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBdrcServiceResponse>();
}

/**
 * @summary Queries the status of the Backup and Disaster Recovery Center.
 *
 * @return GetBdrcServiceResponse
 */
GetBdrcServiceResponse Client::getBdrcService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getBdrcServiceWithOptions(headers, runtime);
}

/**
 * @summary Retrieves a single message.
 *
 * @param request GetMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMessageResponse
 */
GetMessageResponse Client::getMessageWithOptions(const string &MessageId, const GetMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMessage"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/messages/" , Darabonba::Encode::Encoder::percentEncode(MessageId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMessageResponse>();
}

/**
 * @summary Retrieves a single message.
 *
 * @param request GetMessageRequest
 * @return GetMessageResponse
 */
GetMessageResponse Client::getMessage(const string &MessageId, const GetMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMessageWithOptions(MessageId, request, headers, runtime);
}

/**
 * @summary Retrieves a protection policy.
 *
 * @param request GetProtectionPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProtectionPolicyResponse
 */
GetProtectionPolicyResponse Client::getProtectionPolicyWithOptions(const string &ProtectionPolicyId, const GetProtectionPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProtectionPolicy"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/protection-policies/" , Darabonba::Encode::Encoder::percentEncode(ProtectionPolicyId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProtectionPolicyResponse>();
}

/**
 * @summary Retrieves a protection policy.
 *
 * @param request GetProtectionPolicyRequest
 * @return GetProtectionPolicyResponse
 */
GetProtectionPolicyResponse Client::getProtectionPolicy(const string &ProtectionPolicyId, const GetProtectionPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProtectionPolicyWithOptions(ProtectionPolicyId, request, headers, runtime);
}

/**
 * @summary Retrieves a single resource category.
 *
 * @param request GetResourceCategoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceCategoryResponse
 */
GetResourceCategoryResponse Client::getResourceCategoryWithOptions(const GetResourceCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceCategoryId()) {
    query["ResourceCategoryId"] = request.getResourceCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceCategory"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resource-categories/get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceCategoryResponse>();
}

/**
 * @summary Retrieves a single resource category.
 *
 * @param request GetResourceCategoryRequest
 * @return GetResourceCategoryResponse
 */
GetResourceCategoryResponse Client::getResourceCategory(const GetResourceCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceCategoryWithOptions(request, headers, runtime);
}

/**
 * @summary Queries messages in batches.
 *
 * @param request ListMessagesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMessagesResponse
 */
ListMessagesResponse Client::listMessagesWithOptions(const ListMessagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMessageLevel()) {
    query["MessageLevel"] = request.getMessageLevel();
  }

  if (!!request.hasMessageTimeEarlierThan()) {
    query["MessageTimeEarlierThan"] = request.getMessageTimeEarlierThan();
  }

  if (!!request.hasMessageTimeLaterThan()) {
    query["MessageTimeLaterThan"] = request.getMessageTimeLaterThan();
  }

  if (!!request.hasMessageType()) {
    query["MessageType"] = request.getMessageType();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMessages"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/messages")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMessagesResponse>();
}

/**
 * @summary Queries messages in batches.
 *
 * @param request ListMessagesRequest
 * @return ListMessagesResponse
 */
ListMessagesResponse Client::listMessages(const ListMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMessagesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of protection policies.
 *
 * @param request ListProtectionPoliciesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProtectionPoliciesResponse
 */
ListProtectionPoliciesResponse Client::listProtectionPoliciesWithOptions(const ListProtectionPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProtectionPolicyId()) {
    query["ProtectionPolicyId"] = request.getProtectionPolicyId();
  }

  if (!!request.hasProtectionPolicyRegionId()) {
    query["ProtectionPolicyRegionId"] = request.getProtectionPolicyRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProtectionPolicies"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/protection-policies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProtectionPoliciesResponse>();
}

/**
 * @summary Retrieves a list of protection policies.
 *
 * @param request ListProtectionPoliciesRequest
 * @return ListProtectionPoliciesResponse
 */
ListProtectionPoliciesResponse Client::listProtectionPolicies(const ListProtectionPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProtectionPoliciesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the application history of the protection policy.
 *
 * @param request ListProtectionPolicyApplicationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProtectionPolicyApplicationsResponse
 */
ListProtectionPolicyApplicationsResponse Client::listProtectionPolicyApplicationsWithOptions(const string &ProtectionPolicyId, const ListProtectionPolicyApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyStatus()) {
    query["ApplyStatus"] = request.getApplyStatus();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSubProtectionPolicyType()) {
    query["SubProtectionPolicyType"] = request.getSubProtectionPolicyType();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProtectionPolicyApplications"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/protection-policies/" , Darabonba::Encode::Encoder::percentEncode(ProtectionPolicyId) , "/list-applications")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProtectionPolicyApplicationsResponse>();
}

/**
 * @summary Retrieves the application history of the protection policy.
 *
 * @param request ListProtectionPolicyApplicationsRequest
 * @return ListProtectionPolicyApplicationsResponse
 */
ListProtectionPolicyApplicationsResponse Client::listProtectionPolicyApplications(const string &ProtectionPolicyId, const ListProtectionPolicyApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProtectionPolicyApplicationsWithOptions(ProtectionPolicyId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of resource categories.
 *
 * @param request ListResourceCategoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceCategoriesResponse
 */
ListResourceCategoriesResponse Client::listResourceCategoriesWithOptions(const ListResourceCategoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceCategoryId()) {
    query["ResourceCategoryId"] = request.getResourceCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceCategories"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resource-categories/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceCategoriesResponse>();
}

/**
 * @summary Retrieves a list of resource categories.
 *
 * @param request ListResourceCategoriesRequest
 * @return ListResourceCategoriesResponse
 */
ListResourceCategoriesResponse Client::listResourceCategories(const ListResourceCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceCategoriesWithOptions(request, headers, runtime);
}

/**
 * @summary Enables the Backup and Disaster Recovery Center.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenBdrcServiceResponse
 */
OpenBdrcServiceResponse Client::openBdrcServiceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenBdrcService"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/service/open")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenBdrcServiceResponse>();
}

/**
 * @summary Enables the Backup and Disaster Recovery Center.
 *
 * @return OpenBdrcServiceResponse
 */
OpenBdrcServiceResponse Client::openBdrcService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return openBdrcServiceWithOptions(headers, runtime);
}

/**
 * @summary Updates a protection policy.
 *
 * @param tmpReq UpdateProtectionPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProtectionPolicyResponse
 */
UpdateProtectionPolicyResponse Client::updateProtectionPolicyWithOptions(const string &ProtectionPolicyId, const UpdateProtectionPolicyRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateProtectionPolicyShrinkRequest request = UpdateProtectionPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBoundResourceCategoryIds()) {
    request.setBoundResourceCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBoundResourceCategoryIds(), "BoundResourceCategoryIds", "json"));
  }

  if (!!tmpReq.hasSubProtectionPolicies()) {
    request.setSubProtectionPoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubProtectionPolicies(), "SubProtectionPolicies", "json"));
  }

  json body = {};
  if (!!request.hasBoundResourceCategoryIdsShrink()) {
    body["BoundResourceCategoryIds"] = request.getBoundResourceCategoryIdsShrink();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasProtectionPolicyName()) {
    body["ProtectionPolicyName"] = request.getProtectionPolicyName();
  }

  if (!!request.hasSubProtectionPoliciesShrink()) {
    body["SubProtectionPolicies"] = request.getSubProtectionPoliciesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProtectionPolicy"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/protection-policies/" , Darabonba::Encode::Encoder::percentEncode(ProtectionPolicyId))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProtectionPolicyResponse>();
}

/**
 * @summary Updates a protection policy.
 *
 * @param request UpdateProtectionPolicyRequest
 * @return UpdateProtectionPolicyResponse
 */
UpdateProtectionPolicyResponse Client::updateProtectionPolicy(const string &ProtectionPolicyId, const UpdateProtectionPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProtectionPolicyWithOptions(ProtectionPolicyId, request, headers, runtime);
}

/**
 * @summary Updates a resource category.
 *
 * @param request UpdateResourceCategoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceCategoryResponse
 */
UpdateResourceCategoryResponse Client::updateResourceCategoryWithOptions(const UpdateResourceCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceCategoryId()) {
    body["ResourceCategoryId"] = request.getResourceCategoryId();
  }

  if (!!request.hasResourceCategoryName()) {
    body["ResourceCategoryName"] = request.getResourceCategoryName();
  }

  if (!!request.hasResourceMatcher()) {
    body["ResourceMatcher"] = request.getResourceMatcher();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourceCategory"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resource-categories/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceCategoryResponse>();
}

/**
 * @summary Updates a resource category.
 *
 * @param request UpdateResourceCategoryRequest
 * @return UpdateResourceCategoryResponse
 */
UpdateResourceCategoryResponse Client::updateResourceCategory(const UpdateResourceCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceCategoryWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the resource list. When you call this operation, an asynchronous task is triggered to update your resource list and data protection score.
 *
 * @param request UpdateResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourcesResponse
 */
UpdateResourcesResponse Client::updateResourcesWithOptions(const UpdateResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResources"},
    {"version" , "2023-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourcesResponse>();
}

/**
 * @summary Updates the resource list. When you call this operation, an asynchronous task is triggered to update your resource list and data protection score.
 *
 * @param request UpdateResourcesRequest
 * @return UpdateResourcesResponse
 */
UpdateResourcesResponse Client::updateResources(const UpdateResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourcesWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace BDRC20230808