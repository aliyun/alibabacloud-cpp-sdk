#include <darabonba/Core.hpp>
#include <alibabacloud/ResourceCenter20221201.hpp>
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
using namespace AlibabaCloud::ResourceCenter20221201::Models;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{

AlibabaCloud::ResourceCenter20221201::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("resourcecenter", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Sets a default filter.
 *
 * @param request AssociateDefaultFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateDefaultFilterResponse
 */
AssociateDefaultFilterResponse Client::associateDefaultFilterWithOptions(const AssociateDefaultFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterName()) {
    query["FilterName"] = request.filterName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateDefaultFilter"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateDefaultFilterResponse>();
}

/**
 * @summary Sets a default filter.
 *
 * @param request AssociateDefaultFilterRequest
 * @return AssociateDefaultFilterResponse
 */
AssociateDefaultFilterResponse Client::associateDefaultFilter(const AssociateDefaultFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateDefaultFilterWithOptions(request, runtime);
}

/**
 * @summary Creates a single-account delivery channel.
 *
 * @description Resource delivery supports the delivery of resource configuration change events and scheduled resource snapshots.
 * Scheduled resource snapshots support the following delivery scenarios:
 * *   Standard delivery: Leave the ResourceSnapshotDelivery.CustomExpression parameter empty.
 * *   Custom delivery: Set the ResourceSnapshotDelivery.CustomExpression parameter to an appropriate value.
 *
 * @param request CreateDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeliveryChannelResponse
 */
CreateDeliveryChannelResponse Client::createDeliveryChannelWithOptions(const CreateDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelDescription()) {
    query["DeliveryChannelDescription"] = request.deliveryChannelDescription();
  }

  if (!!request.hasDeliveryChannelFilter()) {
    query["DeliveryChannelFilter"] = request.deliveryChannelFilter();
  }

  if (!!request.hasDeliveryChannelName()) {
    query["DeliveryChannelName"] = request.deliveryChannelName();
  }

  if (!!request.hasResourceChangeDelivery()) {
    query["ResourceChangeDelivery"] = request.resourceChangeDelivery();
  }

  if (!!request.hasResourceSnapshotDelivery()) {
    query["ResourceSnapshotDelivery"] = request.resourceSnapshotDelivery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDeliveryChannel"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeliveryChannelResponse>();
}

/**
 * @summary Creates a single-account delivery channel.
 *
 * @description Resource delivery supports the delivery of resource configuration change events and scheduled resource snapshots.
 * Scheduled resource snapshots support the following delivery scenarios:
 * *   Standard delivery: Leave the ResourceSnapshotDelivery.CustomExpression parameter empty.
 * *   Custom delivery: Set the ResourceSnapshotDelivery.CustomExpression parameter to an appropriate value.
 *
 * @param request CreateDeliveryChannelRequest
 * @return CreateDeliveryChannelResponse
 */
CreateDeliveryChannelResponse Client::createDeliveryChannel(const CreateDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Creates a filter.
 *
 * @param request CreateFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFilterResponse
 */
CreateFilterResponse Client::createFilterWithOptions(const CreateFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterConfiguration()) {
    query["FilterConfiguration"] = request.filterConfiguration();
  }

  if (!!request.hasFilterName()) {
    query["FilterName"] = request.filterName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFilter"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFilterResponse>();
}

/**
 * @summary Creates a filter.
 *
 * @param request CreateFilterRequest
 * @return CreateFilterResponse
 */
CreateFilterResponse Client::createFilter(const CreateFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFilterWithOptions(request, runtime);
}

/**
 * @summary Creates a multi-account delivery channel.
 *
 * @description In Resource Center, you can create multi-account delivery channels by using the management account of your resource directory or the delegated administrator account of Resource Center to deliver resource configuration change events and scheduled resource snapshots within the members in your resource directory to Object Storage Service (OSS) or Simple Log Service. Then, other Alibaba Cloud services consume standardized resource information from OSS or Simple Log Service.
 * Scheduled resource snapshots support the following delivery scenarios:
 * *   Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
 * *   Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
 *
 * @param request CreateMultiAccountDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMultiAccountDeliveryChannelResponse
 */
CreateMultiAccountDeliveryChannelResponse Client::createMultiAccountDeliveryChannelWithOptions(const CreateMultiAccountDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelDescription()) {
    query["DeliveryChannelDescription"] = request.deliveryChannelDescription();
  }

  if (!!request.hasDeliveryChannelFilter()) {
    query["DeliveryChannelFilter"] = request.deliveryChannelFilter();
  }

  if (!!request.hasDeliveryChannelName()) {
    query["DeliveryChannelName"] = request.deliveryChannelName();
  }

  if (!!request.hasResourceChangeDelivery()) {
    query["ResourceChangeDelivery"] = request.resourceChangeDelivery();
  }

  if (!!request.hasResourceSnapshotDelivery()) {
    query["ResourceSnapshotDelivery"] = request.resourceSnapshotDelivery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMultiAccountDeliveryChannel"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMultiAccountDeliveryChannelResponse>();
}

/**
 * @summary Creates a multi-account delivery channel.
 *
 * @description In Resource Center, you can create multi-account delivery channels by using the management account of your resource directory or the delegated administrator account of Resource Center to deliver resource configuration change events and scheduled resource snapshots within the members in your resource directory to Object Storage Service (OSS) or Simple Log Service. Then, other Alibaba Cloud services consume standardized resource information from OSS or Simple Log Service.
 * Scheduled resource snapshots support the following delivery scenarios:
 * *   Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
 * *   Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
 *
 * @param request CreateMultiAccountDeliveryChannelRequest
 * @return CreateMultiAccountDeliveryChannelResponse
 */
CreateMultiAccountDeliveryChannelResponse Client::createMultiAccountDeliveryChannel(const CreateMultiAccountDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMultiAccountDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Creates a custom query template.
 *
 * @param request CreateSavedQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSavedQueryResponse
 */
CreateSavedQueryResponse Client::createSavedQueryWithOptions(const CreateSavedQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExpression()) {
    query["Expression"] = request.expression();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSavedQuery"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSavedQueryResponse>();
}

/**
 * @summary Creates a custom query template.
 *
 * @param request CreateSavedQueryRequest
 * @return CreateSavedQueryResponse
 */
CreateSavedQueryResponse Client::createSavedQuery(const CreateSavedQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSavedQueryWithOptions(request, runtime);
}

/**
 * @summary Deletes a single-account delivery channel.
 *
 * @param request DeleteDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeliveryChannelResponse
 */
DeleteDeliveryChannelResponse Client::deleteDeliveryChannelWithOptions(const DeleteDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.deliveryChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeliveryChannel"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeliveryChannelResponse>();
}

/**
 * @summary Deletes a single-account delivery channel.
 *
 * @param request DeleteDeliveryChannelRequest
 * @return DeleteDeliveryChannelResponse
 */
DeleteDeliveryChannelResponse Client::deleteDeliveryChannel(const DeleteDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes a filter.
 *
 * @param request DeleteFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFilterResponse
 */
DeleteFilterResponse Client::deleteFilterWithOptions(const DeleteFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterName()) {
    query["FilterName"] = request.filterName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFilter"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFilterResponse>();
}

/**
 * @summary Deletes a filter.
 *
 * @param request DeleteFilterRequest
 * @return DeleteFilterResponse
 */
DeleteFilterResponse Client::deleteFilter(const DeleteFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFilterWithOptions(request, runtime);
}

/**
 * @summary Deletes a multi-account delivery channel.
 *
 * @param request DeleteMultiAccountDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMultiAccountDeliveryChannelResponse
 */
DeleteMultiAccountDeliveryChannelResponse Client::deleteMultiAccountDeliveryChannelWithOptions(const DeleteMultiAccountDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.deliveryChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMultiAccountDeliveryChannel"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMultiAccountDeliveryChannelResponse>();
}

/**
 * @summary Deletes a multi-account delivery channel.
 *
 * @param request DeleteMultiAccountDeliveryChannelRequest
 * @return DeleteMultiAccountDeliveryChannelResponse
 */
DeleteMultiAccountDeliveryChannelResponse Client::deleteMultiAccountDeliveryChannel(const DeleteMultiAccountDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMultiAccountDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom query template.
 *
 * @param request DeleteSavedQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSavedQueryResponse
 */
DeleteSavedQueryResponse Client::deleteSavedQueryWithOptions(const DeleteSavedQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueryId()) {
    query["QueryId"] = request.queryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSavedQuery"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSavedQueryResponse>();
}

/**
 * @summary Deletes a custom query template.
 *
 * @param request DeleteSavedQueryRequest
 * @return DeleteSavedQueryResponse
 */
DeleteSavedQueryResponse Client::deleteSavedQuery(const DeleteSavedQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSavedQueryWithOptions(request, runtime);
}

/**
 * @summary Disables the cross-account resource search feature by using the management account of a resource directory or a delegated administrator account of Resource Center.
 *
 * @param request DisableMultiAccountResourceCenterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableMultiAccountResourceCenterResponse
 */
DisableMultiAccountResourceCenterResponse Client::disableMultiAccountResourceCenterWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DisableMultiAccountResourceCenter"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableMultiAccountResourceCenterResponse>();
}

/**
 * @summary Disables the cross-account resource search feature by using the management account of a resource directory or a delegated administrator account of Resource Center.
 *
 * @return DisableMultiAccountResourceCenterResponse
 */
DisableMultiAccountResourceCenterResponse Client::disableMultiAccountResourceCenter() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableMultiAccountResourceCenterWithOptions(runtime);
}

/**
 * @summary Deactivates the Resource Center service.
 *
 * @param request DisableResourceCenterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableResourceCenterResponse
 */
DisableResourceCenterResponse Client::disableResourceCenterWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DisableResourceCenter"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableResourceCenterResponse>();
}

/**
 * @summary Deactivates the Resource Center service.
 *
 * @return DisableResourceCenterResponse
 */
DisableResourceCenterResponse Client::disableResourceCenter() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableResourceCenterWithOptions(runtime);
}

/**
 * @summary Cancels the default filter.
 *
 * @param request DisassociateDefaultFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateDefaultFilterResponse
 */
DisassociateDefaultFilterResponse Client::disassociateDefaultFilterWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DisassociateDefaultFilter"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateDefaultFilterResponse>();
}

/**
 * @summary Cancels the default filter.
 *
 * @return DisassociateDefaultFilterResponse
 */
DisassociateDefaultFilterResponse Client::disassociateDefaultFilter() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateDefaultFilterWithOptions(runtime);
}

/**
 * @summary Enables the cross-account resource search feature by using the management account of a resource directory or a delegated administrator account of Resource Center.
 *
 * @description If you have created a resource directory for your enterprise, you can enable the cross-account resource search feature by using the management account of the resource directory or a delegated administrator account of Resource Center to view the resources of members in the resource directory. For more information about a resource directory, see [Resource Directory overview](https://help.aliyun.com/document_detail/200506.html).
 *
 * @param request EnableMultiAccountResourceCenterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableMultiAccountResourceCenterResponse
 */
EnableMultiAccountResourceCenterResponse Client::enableMultiAccountResourceCenterWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "EnableMultiAccountResourceCenter"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableMultiAccountResourceCenterResponse>();
}

/**
 * @summary Enables the cross-account resource search feature by using the management account of a resource directory or a delegated administrator account of Resource Center.
 *
 * @description If you have created a resource directory for your enterprise, you can enable the cross-account resource search feature by using the management account of the resource directory or a delegated administrator account of Resource Center to view the resources of members in the resource directory. For more information about a resource directory, see [Resource Directory overview](https://help.aliyun.com/document_detail/200506.html).
 *
 * @return EnableMultiAccountResourceCenterResponse
 */
EnableMultiAccountResourceCenterResponse Client::enableMultiAccountResourceCenter() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableMultiAccountResourceCenterWithOptions(runtime);
}

/**
 * @summary Activates the Resource Center service.
 *
 * @param request EnableResourceCenterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableResourceCenterResponse
 */
EnableResourceCenterResponse Client::enableResourceCenterWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "EnableResourceCenter"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableResourceCenterResponse>();
}

/**
 * @summary Activates the Resource Center service.
 *
 * @return EnableResourceCenterResponse
 */
EnableResourceCenterResponse Client::enableResourceCenter() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableResourceCenterWithOptions(runtime);
}

/**
 * @summary Executes an SQL statement to query resources across accounts.
 *
 * @param request ExecuteMultiAccountSQLQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteMultiAccountSQLQueryResponse
 */
ExecuteMultiAccountSQLQueryResponse Client::executeMultiAccountSQLQueryWithOptions(const ExecuteMultiAccountSQLQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpression()) {
    query["Expression"] = request.expression();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteMultiAccountSQLQuery"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteMultiAccountSQLQueryResponse>();
}

/**
 * @summary Executes an SQL statement to query resources across accounts.
 *
 * @param request ExecuteMultiAccountSQLQueryRequest
 * @return ExecuteMultiAccountSQLQueryResponse
 */
ExecuteMultiAccountSQLQueryResponse Client::executeMultiAccountSQLQuery(const ExecuteMultiAccountSQLQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeMultiAccountSQLQueryWithOptions(request, runtime);
}

/**
 * @summary Executes an SQL statement to query the resources that can be accessed within the current account.
 *
 * @param request ExecuteSQLQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteSQLQueryResponse
 */
ExecuteSQLQueryResponse Client::executeSQLQueryWithOptions(const ExecuteSQLQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpression()) {
    query["Expression"] = request.expression();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteSQLQuery"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteSQLQueryResponse>();
}

/**
 * @summary Executes an SQL statement to query the resources that can be accessed within the current account.
 *
 * @param request ExecuteSQLQueryRequest
 * @return ExecuteSQLQueryResponse
 */
ExecuteSQLQueryResponse Client::executeSQLQuery(const ExecuteSQLQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeSQLQueryWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a single-account delivery channel.
 *
 * @param request GetDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeliveryChannelResponse
 */
GetDeliveryChannelResponse Client::getDeliveryChannelWithOptions(const GetDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.deliveryChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeliveryChannel"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeliveryChannelResponse>();
}

/**
 * @summary Queries the information about a single-account delivery channel.
 *
 * @param request GetDeliveryChannelRequest
 * @return GetDeliveryChannelResponse
 */
GetDeliveryChannelResponse Client::getDeliveryChannel(const GetDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on a single-account delivery channel.
 *
 * @param request GetDeliveryChannelStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeliveryChannelStatisticsResponse
 */
GetDeliveryChannelStatisticsResponse Client::getDeliveryChannelStatisticsWithOptions(const GetDeliveryChannelStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.deliveryChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeliveryChannelStatistics"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeliveryChannelStatisticsResponse>();
}

/**
 * @summary Queries the statistics on a single-account delivery channel.
 *
 * @param request GetDeliveryChannelStatisticsRequest
 * @return GetDeliveryChannelStatisticsResponse
 */
GetDeliveryChannelStatisticsResponse Client::getDeliveryChannelStatistics(const GetDeliveryChannelStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeliveryChannelStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a sample query template.
 *
 * @param request GetExampleQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExampleQueryResponse
 */
GetExampleQueryResponse Client::getExampleQueryWithOptions(const GetExampleQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueryId()) {
    query["QueryId"] = request.queryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExampleQuery"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExampleQueryResponse>();
}

/**
 * @summary Queries the information about a sample query template.
 *
 * @param request GetExampleQueryRequest
 * @return GetExampleQueryResponse
 */
GetExampleQueryResponse Client::getExampleQuery(const GetExampleQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExampleQueryWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a multi-account delivery channel.
 *
 * @param request GetMultiAccountDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultiAccountDeliveryChannelResponse
 */
GetMultiAccountDeliveryChannelResponse Client::getMultiAccountDeliveryChannelWithOptions(const GetMultiAccountDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.deliveryChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMultiAccountDeliveryChannel"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultiAccountDeliveryChannelResponse>();
}

/**
 * @summary Queries the information about a multi-account delivery channel.
 *
 * @param request GetMultiAccountDeliveryChannelRequest
 * @return GetMultiAccountDeliveryChannelResponse
 */
GetMultiAccountDeliveryChannelResponse Client::getMultiAccountDeliveryChannel(const GetMultiAccountDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMultiAccountDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on a multi-account delivery channel.
 *
 * @param request GetMultiAccountDeliveryChannelStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultiAccountDeliveryChannelStatisticsResponse
 */
GetMultiAccountDeliveryChannelStatisticsResponse Client::getMultiAccountDeliveryChannelStatisticsWithOptions(const GetMultiAccountDeliveryChannelStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.deliveryChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMultiAccountDeliveryChannelStatistics"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultiAccountDeliveryChannelStatisticsResponse>();
}

/**
 * @summary Queries the statistics on a multi-account delivery channel.
 *
 * @param request GetMultiAccountDeliveryChannelStatisticsRequest
 * @return GetMultiAccountDeliveryChannelStatisticsResponse
 */
GetMultiAccountDeliveryChannelStatisticsResponse Client::getMultiAccountDeliveryChannelStatistics(const GetMultiAccountDeliveryChannelStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMultiAccountDeliveryChannelStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the cross-account resource search feature by using the management account of a resource directory or a delegated administrator account of Resource Center.
 *
 * @param request GetMultiAccountResourceCenterServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultiAccountResourceCenterServiceStatusResponse
 */
GetMultiAccountResourceCenterServiceStatusResponse Client::getMultiAccountResourceCenterServiceStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetMultiAccountResourceCenterServiceStatus"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultiAccountResourceCenterServiceStatusResponse>();
}

/**
 * @summary Queries the status of the cross-account resource search feature by using the management account of a resource directory or a delegated administrator account of Resource Center.
 *
 * @return GetMultiAccountResourceCenterServiceStatusResponse
 */
GetMultiAccountResourceCenterServiceStatusResponse Client::getMultiAccountResourceCenterServiceStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMultiAccountResourceCenterServiceStatusWithOptions(runtime);
}

/**
 * @summary Queries the configurations of a resource within the management account or a member of a resource directory.
 *
 * @param request GetMultiAccountResourceConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultiAccountResourceConfigurationResponse
 */
GetMultiAccountResourceConfigurationResponse Client::getMultiAccountResourceConfigurationWithOptions(const GetMultiAccountResourceConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMultiAccountResourceConfiguration"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultiAccountResourceConfigurationResponse>();
}

/**
 * @summary Queries the configurations of a resource within the management account or a member of a resource directory.
 *
 * @param request GetMultiAccountResourceConfigurationRequest
 * @return GetMultiAccountResourceConfigurationResponse
 */
GetMultiAccountResourceConfigurationResponse Client::getMultiAccountResourceConfiguration(const GetMultiAccountResourceConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMultiAccountResourceConfigurationWithOptions(request, runtime);
}

/**
 * @summary 获取多账号资源数量
 *
 * @param request GetMultiAccountResourceCountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultiAccountResourceCountsResponse
 */
GetMultiAccountResourceCountsResponse Client::getMultiAccountResourceCountsWithOptions(const GetMultiAccountResourceCountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasGroupByKey()) {
    query["GroupByKey"] = request.groupByKey();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMultiAccountResourceCounts"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultiAccountResourceCountsResponse>();
}

/**
 * @summary 获取多账号资源数量
 *
 * @param request GetMultiAccountResourceCountsRequest
 * @return GetMultiAccountResourceCountsResponse
 */
GetMultiAccountResourceCountsResponse Client::getMultiAccountResourceCounts(const GetMultiAccountResourceCountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMultiAccountResourceCountsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the Resource Center service.
 *
 * @param request GetResourceCenterServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceCenterServiceStatusResponse
 */
GetResourceCenterServiceStatusResponse Client::getResourceCenterServiceStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetResourceCenterServiceStatus"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceCenterServiceStatusResponse>();
}

/**
 * @summary Queries the status of the Resource Center service.
 *
 * @return GetResourceCenterServiceStatusResponse
 */
GetResourceCenterServiceStatusResponse Client::getResourceCenterServiceStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceCenterServiceStatusWithOptions(runtime);
}

/**
 * @summary Queries the configurations of a resource within the current account.
 *
 * @param request GetResourceConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceConfigurationResponse
 */
GetResourceConfigurationResponse Client::getResourceConfigurationWithOptions(const GetResourceConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceConfiguration"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceConfigurationResponse>();
}

/**
 * @summary Queries the configurations of a resource within the current account.
 *
 * @param request GetResourceConfigurationRequest
 * @return GetResourceConfigurationResponse
 */
GetResourceConfigurationResponse Client::getResourceConfiguration(const GetResourceConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the numbers of resources on which the current account has access permissions.
 *
 * @param request GetResourceCountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceCountsResponse
 */
GetResourceCountsResponse Client::getResourceCountsWithOptions(const GetResourceCountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasGroupByKey()) {
    query["GroupByKey"] = request.groupByKey();
  }

  if (!!request.hasIncludeDeletedResources()) {
    query["IncludeDeletedResources"] = request.includeDeletedResources();
  }

  if (!!request.hasSearchExpression()) {
    query["SearchExpression"] = request.searchExpression();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceCounts"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceCountsResponse>();
}

/**
 * @summary Queries the numbers of resources on which the current account has access permissions.
 *
 * @param request GetResourceCountsRequest
 * @return GetResourceCountsResponse
 */
GetResourceCountsResponse Client::getResourceCounts(const GetResourceCountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceCountsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a custom query template.
 *
 * @param request GetSavedQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSavedQueryResponse
 */
GetSavedQueryResponse Client::getSavedQueryWithOptions(const GetSavedQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueryId()) {
    query["QueryId"] = request.queryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSavedQuery"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSavedQueryResponse>();
}

/**
 * @summary Queries the information about a custom query template.
 *
 * @param request GetSavedQueryRequest
 * @return GetSavedQueryResponse
 */
GetSavedQueryResponse Client::getSavedQuery(const GetSavedQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSavedQueryWithOptions(request, runtime);
}

/**
 * @summary Queries a list of single-account delivery channels.
 *
 * @param request ListDeliveryChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeliveryChannelsResponse
 */
ListDeliveryChannelsResponse Client::listDeliveryChannelsWithOptions(const ListDeliveryChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeliveryChannels"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeliveryChannelsResponse>();
}

/**
 * @summary Queries a list of single-account delivery channels.
 *
 * @param request ListDeliveryChannelsRequest
 * @return ListDeliveryChannelsResponse
 */
ListDeliveryChannelsResponse Client::listDeliveryChannels(const ListDeliveryChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeliveryChannelsWithOptions(request, runtime);
}

/**
 * @summary Queries all sample query templates.
 *
 * @param request ListExampleQueriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExampleQueriesResponse
 */
ListExampleQueriesResponse Client::listExampleQueriesWithOptions(const ListExampleQueriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExampleQueries"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExampleQueriesResponse>();
}

/**
 * @summary Queries all sample query templates.
 *
 * @param request ListExampleQueriesRequest
 * @return ListExampleQueriesResponse
 */
ListExampleQueriesResponse Client::listExampleQueries(const ListExampleQueriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExampleQueriesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of filters.
 *
 * @param request ListFiltersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFiltersResponse
 */
ListFiltersResponse Client::listFiltersWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListFilters"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFiltersResponse>();
}

/**
 * @summary Queries a list of filters.
 *
 * @return ListFiltersResponse
 */
ListFiltersResponse Client::listFilters() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFiltersWithOptions(runtime);
}

/**
 * @summary Queries a list of multi-account delivery channels.
 *
 * @param request ListMultiAccountDeliveryChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultiAccountDeliveryChannelsResponse
 */
ListMultiAccountDeliveryChannelsResponse Client::listMultiAccountDeliveryChannelsWithOptions(const ListMultiAccountDeliveryChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultiAccountDeliveryChannels"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultiAccountDeliveryChannelsResponse>();
}

/**
 * @summary Queries a list of multi-account delivery channels.
 *
 * @param request ListMultiAccountDeliveryChannelsRequest
 * @return ListMultiAccountDeliveryChannelsResponse
 */
ListMultiAccountDeliveryChannelsResponse Client::listMultiAccountDeliveryChannels(const ListMultiAccountDeliveryChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultiAccountDeliveryChannelsWithOptions(request, runtime);
}

/**
 * @summary Queries the resource groups within the management account or a member of a resource directory by using the management account of the resource directory or a delegated administrator account of Resource Center.
 *
 * @param request ListMultiAccountResourceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultiAccountResourceGroupsResponse
 */
ListMultiAccountResourceGroupsResponse Client::listMultiAccountResourceGroupsWithOptions(const ListMultiAccountResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.resourceGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultiAccountResourceGroups"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultiAccountResourceGroupsResponse>();
}

/**
 * @summary Queries the resource groups within the management account or a member of a resource directory by using the management account of the resource directory or a delegated administrator account of Resource Center.
 *
 * @param request ListMultiAccountResourceGroupsRequest
 * @return ListMultiAccountResourceGroupsResponse
 */
ListMultiAccountResourceGroupsResponse Client::listMultiAccountResourceGroups(const ListMultiAccountResourceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultiAccountResourceGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the relationships between resources within the management account or members of your resource directory.
 *
 * @description *   Before you use a RAM user or a RAM role to call the operation, you must make sure that the RAM user or RAM role is granted the required permissions. For more information, see [Grant a RAM user the permissions to use Resource Center](https://help.aliyun.com/document_detail/600556.html).
 * *   By default, the operation returns up to 20 entries. You can configure the `MaxResults` parameter to specify the maximum number of entries to return.
 * *   If the response does not contain the `NextToken` parameter, all entries are returned. Otherwise, more entries exist. If you want to obtain the entries, you can call the operation again to initiate another query request. In the request, set the `NextToken` parameter to the value of `NextToken` in the last response of the operation. If you do not configure the `NextToken` parameter, entries on the first page are returned by default.
 * *   You can specify one or more filter conditions to narrow the search. For more information about supported filter parameters and matching methods, see the Supported filter parameters section. Multiple filter conditions have logical `AND` relations. Only resources that meet all filter conditions are returned. The values of a filter condition have logical `OR` relations. Resources that meet any value of the filter condition are returned.
 *
 * @param request ListMultiAccountResourceRelationshipsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultiAccountResourceRelationshipsResponse
 */
ListMultiAccountResourceRelationshipsResponse Client::listMultiAccountResourceRelationshipsWithOptions(const ListMultiAccountResourceRelationshipsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRelatedResourceFilter()) {
    query["RelatedResourceFilter"] = request.relatedResourceFilter();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultiAccountResourceRelationships"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultiAccountResourceRelationshipsResponse>();
}

/**
 * @summary Queries the relationships between resources within the management account or members of your resource directory.
 *
 * @description *   Before you use a RAM user or a RAM role to call the operation, you must make sure that the RAM user or RAM role is granted the required permissions. For more information, see [Grant a RAM user the permissions to use Resource Center](https://help.aliyun.com/document_detail/600556.html).
 * *   By default, the operation returns up to 20 entries. You can configure the `MaxResults` parameter to specify the maximum number of entries to return.
 * *   If the response does not contain the `NextToken` parameter, all entries are returned. Otherwise, more entries exist. If you want to obtain the entries, you can call the operation again to initiate another query request. In the request, set the `NextToken` parameter to the value of `NextToken` in the last response of the operation. If you do not configure the `NextToken` parameter, entries on the first page are returned by default.
 * *   You can specify one or more filter conditions to narrow the search. For more information about supported filter parameters and matching methods, see the Supported filter parameters section. Multiple filter conditions have logical `AND` relations. Only resources that meet all filter conditions are returned. The values of a filter condition have logical `OR` relations. Resources that meet any value of the filter condition are returned.
 *
 * @param request ListMultiAccountResourceRelationshipsRequest
 * @return ListMultiAccountResourceRelationshipsResponse
 */
ListMultiAccountResourceRelationshipsResponse Client::listMultiAccountResourceRelationships(const ListMultiAccountResourceRelationshipsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultiAccountResourceRelationshipsWithOptions(request, runtime);
}

/**
 * @summary Queries the tag keys of resources within the management account or a member of your resource directory.
 *
 * @param request ListMultiAccountTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultiAccountTagKeysResponse
 */
ListMultiAccountTagKeysResponse Client::listMultiAccountTagKeysWithOptions(const ListMultiAccountTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMatchType()) {
    query["MatchType"] = request.matchType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultiAccountTagKeys"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultiAccountTagKeysResponse>();
}

/**
 * @summary Queries the tag keys of resources within the management account or a member of your resource directory.
 *
 * @param request ListMultiAccountTagKeysRequest
 * @return ListMultiAccountTagKeysResponse
 */
ListMultiAccountTagKeysResponse Client::listMultiAccountTagKeys(const ListMultiAccountTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultiAccountTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tag values of resources within the management account or a member of a resource directory by using the management account of the resource directory or a delegated administrator account of Resource Center.
 *
 * @param request ListMultiAccountTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultiAccountTagValuesResponse
 */
ListMultiAccountTagValuesResponse Client::listMultiAccountTagValuesWithOptions(const ListMultiAccountTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMatchType()) {
    query["MatchType"] = request.matchType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  if (!!request.hasTagValue()) {
    query["TagValue"] = request.tagValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultiAccountTagValues"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultiAccountTagValuesResponse>();
}

/**
 * @summary Queries the tag values of resources within the management account or a member of a resource directory by using the management account of the resource directory or a delegated administrator account of Resource Center.
 *
 * @param request ListMultiAccountTagValuesRequest
 * @return ListMultiAccountTagValuesResponse
 */
ListMultiAccountTagValuesResponse Client::listMultiAccountTagValues(const ListMultiAccountTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultiAccountTagValuesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of resource relationships on which the current account has access permissions.
 *
 * @description *   You can call this operation to query only the resource relationships on which the current account has access permissions.
 * *   By default, this operation returns up to 20 entries. You can configure the `MaxResults` parameter to specify the maximum number of entries to return.
 * *   If the response does not contain the `NextToken` parameter, all entries are returned. Otherwise, more entries exist. If you want to obtain the entries, you can call the operation again to initiate another query request. In the request, set the `NextToken` parameter to the value of `NextToken` in the last response of the operation. If you do not configure the `NextToken` parameter, entries on the first page are returned by default.
 * *   You can specify one or more filter conditions to narrow the query scope. For information about supported filter parameters and matching methods, see the Supported filter parameters section. Multiple filter conditions have logical `AND` relations. Only entries that meet all filter conditions are returned. The values of a filter condition have logical `OR` relations. Entries that meet any value of the filter condition are returned.
 *
 * @param request ListResourceRelationshipsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceRelationshipsResponse
 */
ListResourceRelationshipsResponse Client::listResourceRelationshipsWithOptions(const ListResourceRelationshipsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRelatedResourceFilter()) {
    query["RelatedResourceFilter"] = request.relatedResourceFilter();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceRelationships"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceRelationshipsResponse>();
}

/**
 * @summary Queries a list of resource relationships on which the current account has access permissions.
 *
 * @description *   You can call this operation to query only the resource relationships on which the current account has access permissions.
 * *   By default, this operation returns up to 20 entries. You can configure the `MaxResults` parameter to specify the maximum number of entries to return.
 * *   If the response does not contain the `NextToken` parameter, all entries are returned. Otherwise, more entries exist. If you want to obtain the entries, you can call the operation again to initiate another query request. In the request, set the `NextToken` parameter to the value of `NextToken` in the last response of the operation. If you do not configure the `NextToken` parameter, entries on the first page are returned by default.
 * *   You can specify one or more filter conditions to narrow the query scope. For information about supported filter parameters and matching methods, see the Supported filter parameters section. Multiple filter conditions have logical `AND` relations. Only entries that meet all filter conditions are returned. The values of a filter condition have logical `OR` relations. Entries that meet any value of the filter condition are returned.
 *
 * @param request ListResourceRelationshipsRequest
 * @return ListResourceRelationshipsResponse
 */
ListResourceRelationshipsResponse Client::listResourceRelationships(const ListResourceRelationshipsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceRelationshipsWithOptions(request, runtime);
}

/**
 * @summary Queries the metadata of resource types
 *
 * @param request ListResourceTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceTypesResponse
 */
ListResourceTypesResponse Client::listResourceTypesWithOptions(const ListResourceTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceTypes"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceTypesResponse>();
}

/**
 * @summary Queries the metadata of resource types
 *
 * @param request ListResourceTypesRequest
 * @return ListResourceTypesResponse
 */
ListResourceTypesResponse Client::listResourceTypes(const ListResourceTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceTypesWithOptions(request, runtime);
}

/**
 * @summary Queries all custom query templates.
 *
 * @param request ListSavedQueriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSavedQueriesResponse
 */
ListSavedQueriesResponse Client::listSavedQueriesWithOptions(const ListSavedQueriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSavedQueries"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSavedQueriesResponse>();
}

/**
 * @summary Queries all custom query templates.
 *
 * @param request ListSavedQueriesRequest
 * @return ListSavedQueriesResponse
 */
ListSavedQueriesResponse Client::listSavedQueries(const ListSavedQueriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSavedQueriesWithOptions(request, runtime);
}

/**
 * @summary Queries the tag keys of resources within the current account.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMatchType()) {
    query["MatchType"] = request.matchType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagKeysResponse>();
}

/**
 * @summary Queries the tag keys of resources within the current account.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tag values of resources within the current account.
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMatchType()) {
    query["MatchType"] = request.matchType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  if (!!request.hasTagValue()) {
    query["TagValue"] = request.tagValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagValues"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagValuesResponse>();
}

/**
 * @summary Queries the tag values of resources within the current account.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Searches for resources within the management account or members of a resource directory.
 *
 * @description *   You can use this operation to search for only resources whose types are supported by Resource Center in services that work with Resource Center. For more information about the services and the resource types that are supported by Resource Center, see [Services that work with Resource Center](https://help.aliyun.com/document_detail/477798.html).
 * *   Before you use a RAM user or a RAM role to call the operation, you must make sure that the RAM user or RAM role is granted the required permissions. For more information, see [Grant a RAM user the permissions to use Resource Center](https://help.aliyun.com/document_detail/600556.html).
 * *   By default, the operation returns a maximum of 20 entries. You can configure the `MaxResults` parameter to specify the maximum number of entries to return.
 * *   If the response does not contain the `NextToken` parameter, all entries are returned. Otherwise, more entries exist. If you want to obtain the entries, you can call the operation again to initiate another query request. In the request, set the `NextToken` parameter to the value of `NextToken` in the last response of the operation. If you do not configure the `NextToken` parameter, entries on the first page are returned by default.
 * *   You can specify one or more filter conditions to narrow the search scope. For more information about supported filter parameters and matching methods, see the Supported filter parameters section. Multiple filter conditions have logical `AND` relations. Only resources that meet all filter conditions are returned. The values of a filter condition have logical `OR` relations. Resources that meet any value of the filter condition are returned.
 * *   You can visit [Sample Code Center](https://api.alibabacloud.com/api-tools/demo/ResourceCenter) to view more sample queries.
 *
 * @param request SearchMultiAccountResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMultiAccountResourcesResponse
 */
SearchMultiAccountResourcesResponse Client::searchMultiAccountResourcesWithOptions(const SearchMultiAccountResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasSortCriterion()) {
    query["SortCriterion"] = request.sortCriterion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMultiAccountResources"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMultiAccountResourcesResponse>();
}

/**
 * @summary Searches for resources within the management account or members of a resource directory.
 *
 * @description *   You can use this operation to search for only resources whose types are supported by Resource Center in services that work with Resource Center. For more information about the services and the resource types that are supported by Resource Center, see [Services that work with Resource Center](https://help.aliyun.com/document_detail/477798.html).
 * *   Before you use a RAM user or a RAM role to call the operation, you must make sure that the RAM user or RAM role is granted the required permissions. For more information, see [Grant a RAM user the permissions to use Resource Center](https://help.aliyun.com/document_detail/600556.html).
 * *   By default, the operation returns a maximum of 20 entries. You can configure the `MaxResults` parameter to specify the maximum number of entries to return.
 * *   If the response does not contain the `NextToken` parameter, all entries are returned. Otherwise, more entries exist. If you want to obtain the entries, you can call the operation again to initiate another query request. In the request, set the `NextToken` parameter to the value of `NextToken` in the last response of the operation. If you do not configure the `NextToken` parameter, entries on the first page are returned by default.
 * *   You can specify one or more filter conditions to narrow the search scope. For more information about supported filter parameters and matching methods, see the Supported filter parameters section. Multiple filter conditions have logical `AND` relations. Only resources that meet all filter conditions are returned. The values of a filter condition have logical `OR` relations. Resources that meet any value of the filter condition are returned.
 * *   You can visit [Sample Code Center](https://api.alibabacloud.com/api-tools/demo/ResourceCenter) to view more sample queries.
 *
 * @param request SearchMultiAccountResourcesRequest
 * @return SearchMultiAccountResourcesResponse
 */
SearchMultiAccountResourcesResponse Client::searchMultiAccountResources(const SearchMultiAccountResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMultiAccountResourcesWithOptions(request, runtime);
}

/**
 * @summary Search for resources that you can access within the current account.
 *
 * @description *   You can use this operation to search for only resources whose types are supported by Resource Center in services that work with Resource Center. For more information about the services and the resource types that are supported by Resource Center, see [Services that work with Resource Center](https://help.aliyun.com/document_detail/477798.html).
 * *   By default, the operation returns a maximum of 20 entries. You can configure the `MaxResults` parameter to specify the maximum number of entries to return.
 * *   If the response does not contain the `NextToken` parameter, all entries are returned. Otherwise, more entries exist. If you want to obtain the entries, you can call the operation again to initiate another query request. In the request, set the `NextToken` parameter to the value of `NextToken` in the last response of the operation. If you do not configure the `NextToken` parameter, entries on the first page are returned by default.
 * *   You can specify one or more filter conditions to narrow the search scope. For more information about supported filter parameters and matching methods, see the Supported filter parameters section. Multiple filter conditions have logical `AND` relations. Only resources that meet all filter conditions are returned. The values of a filter condition have logical `OR` relations. Resources that meet any value of the filter condition are returned.
 * *   You can visit [Sample Code Center](https://api.aliyun.com/api-tools/demo/ResourceCenter) to view more sample queries.
 *
 * @param request SearchResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchResourcesResponse
 */
SearchResourcesResponse Client::searchResourcesWithOptions(const SearchResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasIncludeDeletedResources()) {
    query["IncludeDeletedResources"] = request.includeDeletedResources();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSearchExpression()) {
    query["SearchExpression"] = request.searchExpression();
  }

  if (!!request.hasSortCriterion()) {
    query["SortCriterion"] = request.sortCriterion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchResources"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchResourcesResponse>();
}

/**
 * @summary Search for resources that you can access within the current account.
 *
 * @description *   You can use this operation to search for only resources whose types are supported by Resource Center in services that work with Resource Center. For more information about the services and the resource types that are supported by Resource Center, see [Services that work with Resource Center](https://help.aliyun.com/document_detail/477798.html).
 * *   By default, the operation returns a maximum of 20 entries. You can configure the `MaxResults` parameter to specify the maximum number of entries to return.
 * *   If the response does not contain the `NextToken` parameter, all entries are returned. Otherwise, more entries exist. If you want to obtain the entries, you can call the operation again to initiate another query request. In the request, set the `NextToken` parameter to the value of `NextToken` in the last response of the operation. If you do not configure the `NextToken` parameter, entries on the first page are returned by default.
 * *   You can specify one or more filter conditions to narrow the search scope. For more information about supported filter parameters and matching methods, see the Supported filter parameters section. Multiple filter conditions have logical `AND` relations. Only resources that meet all filter conditions are returned. The values of a filter condition have logical `OR` relations. Resources that meet any value of the filter condition are returned.
 * *   You can visit [Sample Code Center](https://api.aliyun.com/api-tools/demo/ResourceCenter) to view more sample queries.
 *
 * @param request SearchResourcesRequest
 * @return SearchResourcesResponse
 */
SearchResourcesResponse Client::searchResources(const SearchResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates a single-account delivery channel.
 *
 * @description Resource delivery supports the delivery of resource configuration change events and scheduled resource snapshots.
 * Scheduled resource snapshots support the following delivery scenarios:
 * *   Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
 * *   Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
 *
 * @param request UpdateDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDeliveryChannelResponse
 */
UpdateDeliveryChannelResponse Client::updateDeliveryChannelWithOptions(const UpdateDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelDescription()) {
    query["DeliveryChannelDescription"] = request.deliveryChannelDescription();
  }

  if (!!request.hasDeliveryChannelFilter()) {
    query["DeliveryChannelFilter"] = request.deliveryChannelFilter();
  }

  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.deliveryChannelId();
  }

  if (!!request.hasDeliveryChannelName()) {
    query["DeliveryChannelName"] = request.deliveryChannelName();
  }

  if (!!request.hasResourceChangeDelivery()) {
    query["ResourceChangeDelivery"] = request.resourceChangeDelivery();
  }

  if (!!request.hasResourceSnapshotDelivery()) {
    query["ResourceSnapshotDelivery"] = request.resourceSnapshotDelivery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDeliveryChannel"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDeliveryChannelResponse>();
}

/**
 * @summary Updates a single-account delivery channel.
 *
 * @description Resource delivery supports the delivery of resource configuration change events and scheduled resource snapshots.
 * Scheduled resource snapshots support the following delivery scenarios:
 * *   Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
 * *   Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
 *
 * @param request UpdateDeliveryChannelRequest
 * @return UpdateDeliveryChannelResponse
 */
UpdateDeliveryChannelResponse Client::updateDeliveryChannel(const UpdateDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Updates a filter.
 *
 * @param request UpdateFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFilterResponse
 */
UpdateFilterResponse Client::updateFilterWithOptions(const UpdateFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterConfiguration()) {
    query["FilterConfiguration"] = request.filterConfiguration();
  }

  if (!!request.hasFilterName()) {
    query["FilterName"] = request.filterName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFilter"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFilterResponse>();
}

/**
 * @summary Updates a filter.
 *
 * @param request UpdateFilterRequest
 * @return UpdateFilterResponse
 */
UpdateFilterResponse Client::updateFilter(const UpdateFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFilterWithOptions(request, runtime);
}

/**
 * @summary Updates a multi-account delivery channel.
 *
 * @description Resource delivery supports the delivery of resource configuration change events and scheduled resource snapshots.
 * Scheduled resource snapshots support the following delivery scenarios:
 * *   Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
 * *   Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
 *
 * @param request UpdateMultiAccountDeliveryChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMultiAccountDeliveryChannelResponse
 */
UpdateMultiAccountDeliveryChannelResponse Client::updateMultiAccountDeliveryChannelWithOptions(const UpdateMultiAccountDeliveryChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryChannelDescription()) {
    query["DeliveryChannelDescription"] = request.deliveryChannelDescription();
  }

  if (!!request.hasDeliveryChannelFilter()) {
    query["DeliveryChannelFilter"] = request.deliveryChannelFilter();
  }

  if (!!request.hasDeliveryChannelId()) {
    query["DeliveryChannelId"] = request.deliveryChannelId();
  }

  if (!!request.hasDeliveryChannelName()) {
    query["DeliveryChannelName"] = request.deliveryChannelName();
  }

  if (!!request.hasResourceChangeDelivery()) {
    query["ResourceChangeDelivery"] = request.resourceChangeDelivery();
  }

  if (!!request.hasResourceSnapshotDelivery()) {
    query["ResourceSnapshotDelivery"] = request.resourceSnapshotDelivery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMultiAccountDeliveryChannel"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMultiAccountDeliveryChannelResponse>();
}

/**
 * @summary Updates a multi-account delivery channel.
 *
 * @description Resource delivery supports the delivery of resource configuration change events and scheduled resource snapshots.
 * Scheduled resource snapshots support the following delivery scenarios:
 * *   Standard delivery: Leave the `ResourceSnapshotDelivery.CustomExpression` parameter empty.
 * *   Custom delivery: Set the `ResourceSnapshotDelivery.CustomExpression` parameter to an appropriate value.
 *
 * @param request UpdateMultiAccountDeliveryChannelRequest
 * @return UpdateMultiAccountDeliveryChannelResponse
 */
UpdateMultiAccountDeliveryChannelResponse Client::updateMultiAccountDeliveryChannel(const UpdateMultiAccountDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMultiAccountDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Updates a custom query template.
 *
 * @param request UpdateSavedQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSavedQueryResponse
 */
UpdateSavedQueryResponse Client::updateSavedQueryWithOptions(const UpdateSavedQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExpression()) {
    query["Expression"] = request.expression();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasQueryId()) {
    query["QueryId"] = request.queryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSavedQuery"},
    {"version" , "2022-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSavedQueryResponse>();
}

/**
 * @summary Updates a custom query template.
 *
 * @param request UpdateSavedQueryRequest
 * @return UpdateSavedQueryResponse
 */
UpdateSavedQueryResponse Client::updateSavedQuery(const UpdateSavedQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSavedQueryWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201