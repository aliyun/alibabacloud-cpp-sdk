#include <darabonba/Core.hpp>
#include <alibabacloud/FC20230330.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/Stream.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::FC20230330::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace FC20230330
{

AlibabaCloud::FC20230330::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("fc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Updates the resource group of a Function Compute resource.
 *
 * @description To update the resource group of a Function Compute resource, you must grant the user the ChangeResourceGroup permission on both the current resource group and the target resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/resource-groups")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Updates the resource group of a Function Compute resource.
 *
 * @description To update the resource group of a Function Compute resource, you must grant the user the ChangeResourceGroup permission on both the current resource group and the target resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeResourceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 创建函数别名。
 *
 * @param request CreateAliasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAliasResponse
 */
CreateAliasResponse Client::createAliasWithOptions(const string &functionName, const CreateAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateAlias"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/aliases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAliasResponse>();
}

/**
 * @summary 创建函数别名。
 *
 * @param request CreateAliasRequest
 * @return CreateAliasResponse
 */
CreateAliasResponse Client::createAlias(const string &functionName, const CreateAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAliasWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Creates a custom domain name.
 *
 * @description If you want to use a fixed domain name to access an application or function in a production environment of Function Compute, or to resolve the issue of forced downloads when accessing an HTTP trigger, you can bind a custom domain name to the application or function.
 *
 * @param request CreateCustomDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomDomainResponse
 */
CreateCustomDomainResponse Client::createCustomDomainWithOptions(const CreateCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateCustomDomain"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/custom-domains")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomDomainResponse>();
}

/**
 * @summary Creates a custom domain name.
 *
 * @description If you want to use a fixed domain name to access an application or function in a production environment of Function Compute, or to resolve the issue of forced downloads when accessing an HTTP trigger, you can bind a custom domain name to the application or function.
 *
 * @param request CreateCustomDomainRequest
 * @return CreateCustomDomainResponse
 */
CreateCustomDomainResponse Client::createCustomDomain(const CreateCustomDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCustomDomainWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a function.
 *
 * @description Resources of Function Compute are scheduled and run based on functions. A function usually refers to a code snippet that is written by a user and can be independently executed to respond to events and requests.
 *
 * @param request CreateFunctionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFunctionResponse
 */
CreateFunctionResponse Client::createFunctionWithOptions(const CreateFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateFunction"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFunctionResponse>();
}

/**
 * @summary Creates a function.
 *
 * @description Resources of Function Compute are scheduled and run based on functions. A function usually refers to a code snippet that is written by a user and can be independently executed to respond to events and requests.
 *
 * @param request CreateFunctionRequest
 * @return CreateFunctionResponse
 */
CreateFunctionResponse Client::createFunction(const CreateFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFunctionWithOptions(request, headers, runtime);
}

/**
 * @summary 创建层版本。
 *
 * @param request CreateLayerVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLayerVersionResponse
 */
CreateLayerVersionResponse Client::createLayerVersionWithOptions(const string &layerName, const CreateLayerVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateLayerVersion"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/layers/" , Darabonba::Encode::Encoder::percentEncode(layerName) , "/versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLayerVersionResponse>();
}

/**
 * @summary 创建层版本。
 *
 * @param request CreateLayerVersionRequest
 * @return CreateLayerVersionResponse
 */
CreateLayerVersionResponse Client::createLayerVersion(const string &layerName, const CreateLayerVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLayerVersionWithOptions(layerName, request, headers, runtime);
}

/**
 * @summary The CreateSession operation creates an explicit session resource. The system automatically generates a unique session ID, pre-allocates a function instance, and associates it with the session. You can specify values for TTL and idle timeout. This method applies to the HEADER_FIELD and GENERATED_COOKIE affinity types. It handles session preload and configuration initialization. After you call the InvokeFunction API, the session information can be included in the InvokeFunction request to enable request routing.
 *
 * @param request CreateSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSessionResponse
 */
CreateSessionResponse Client::createSessionWithOptions(const string &functionName, const CreateSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateSession"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/sessions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSessionResponse>();
}

/**
 * @summary The CreateSession operation creates an explicit session resource. The system automatically generates a unique session ID, pre-allocates a function instance, and associates it with the session. You can specify values for TTL and idle timeout. This method applies to the HEADER_FIELD and GENERATED_COOKIE affinity types. It handles session preload and configuration initialization. After you call the InvokeFunction API, the session information can be included in the InvokeFunction request to enable request routing.
 *
 * @param request CreateSessionRequest
 * @return CreateSessionResponse
 */
CreateSessionResponse Client::createSession(const string &functionName, const CreateSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSessionWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary 创建函数触发器。
 *
 * @param request CreateTriggerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTriggerResponse
 */
CreateTriggerResponse Client::createTriggerWithOptions(const string &functionName, const CreateTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateTrigger"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/triggers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTriggerResponse>();
}

/**
 * @summary 创建函数触发器。
 *
 * @param request CreateTriggerRequest
 * @return CreateTriggerResponse
 */
CreateTriggerResponse Client::createTrigger(const string &functionName, const CreateTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTriggerWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Creates a VPC connection.
 *
 * @param request CreateVpcBindingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcBindingResponse
 */
CreateVpcBindingResponse Client::createVpcBindingWithOptions(const string &functionName, const CreateVpcBindingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateVpcBinding"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/vpc-bindings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcBindingResponse>();
}

/**
 * @summary Creates a VPC connection.
 *
 * @param request CreateVpcBindingRequest
 * @return CreateVpcBindingResponse
 */
CreateVpcBindingResponse Client::createVpcBinding(const string &functionName, const CreateVpcBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createVpcBindingWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Deletes an alias.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAliasResponse
 */
DeleteAliasResponse Client::deleteAliasWithOptions(const string &functionName, const string &aliasName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlias"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/aliases/" , Darabonba::Encode::Encoder::percentEncode(aliasName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAliasResponse>();
}

/**
 * @summary Deletes an alias.
 *
 * @return DeleteAliasResponse
 */
DeleteAliasResponse Client::deleteAlias(const string &functionName, const string &aliasName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAliasWithOptions(functionName, aliasName, headers, runtime);
}

/**
 * @summary Deletes an asynchronous invocation configuration.
 *
 * @param request DeleteAsyncInvokeConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAsyncInvokeConfigResponse
 */
DeleteAsyncInvokeConfigResponse Client::deleteAsyncInvokeConfigWithOptions(const string &functionName, const DeleteAsyncInvokeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAsyncInvokeConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/async-invoke-config")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAsyncInvokeConfigResponse>();
}

/**
 * @summary Deletes an asynchronous invocation configuration.
 *
 * @param request DeleteAsyncInvokeConfigRequest
 * @return DeleteAsyncInvokeConfigResponse
 */
DeleteAsyncInvokeConfigResponse Client::deleteAsyncInvokeConfig(const string &functionName, const DeleteAsyncInvokeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAsyncInvokeConfigWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Deletes a concurrency configuration.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConcurrencyConfigResponse
 */
DeleteConcurrencyConfigResponse Client::deleteConcurrencyConfigWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConcurrencyConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/concurrency")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConcurrencyConfigResponse>();
}

/**
 * @summary Deletes a concurrency configuration.
 *
 * @return DeleteConcurrencyConfigResponse
 */
DeleteConcurrencyConfigResponse Client::deleteConcurrencyConfig(const string &functionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConcurrencyConfigWithOptions(functionName, headers, runtime);
}

/**
 * @summary Deletes a custom domain name.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomDomainResponse
 */
DeleteCustomDomainResponse Client::deleteCustomDomainWithOptions(const string &domainName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomDomain"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/custom-domains/" , Darabonba::Encode::Encoder::percentEncode(domainName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomDomainResponse>();
}

/**
 * @summary Deletes a custom domain name.
 *
 * @return DeleteCustomDomainResponse
 */
DeleteCustomDomainResponse Client::deleteCustomDomain(const string &domainName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCustomDomainWithOptions(domainName, headers, runtime);
}

/**
 * @summary Deletes a function.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFunctionResponse
 */
DeleteFunctionResponse Client::deleteFunctionWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFunction"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFunctionResponse>();
}

/**
 * @summary Deletes a function.
 *
 * @return DeleteFunctionResponse
 */
DeleteFunctionResponse Client::deleteFunction(const string &functionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFunctionWithOptions(functionName, headers, runtime);
}

/**
 * @summary http://pre.hhht/#vpc
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFunctionVersionResponse
 */
DeleteFunctionVersionResponse Client::deleteFunctionVersionWithOptions(const string &functionName, const string &versionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFunctionVersion"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(versionId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFunctionVersionResponse>();
}

/**
 * @summary http://pre.hhht/#vpc
 *
 * @return DeleteFunctionVersionResponse
 */
DeleteFunctionVersionResponse Client::deleteFunctionVersion(const string &functionName, const string &versionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFunctionVersionWithOptions(functionName, versionId, headers, runtime);
}

/**
 * @summary Deletes a layer version.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLayerVersionResponse
 */
DeleteLayerVersionResponse Client::deleteLayerVersionWithOptions(const string &layerName, const string &version, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLayerVersion"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/layers/" , Darabonba::Encode::Encoder::percentEncode(layerName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(version))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLayerVersionResponse>();
}

/**
 * @summary Deletes a layer version.
 *
 * @return DeleteLayerVersionResponse
 */
DeleteLayerVersionResponse Client::deleteLayerVersion(const string &layerName, const string &version) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLayerVersionWithOptions(layerName, version, headers, runtime);
}

/**
 * @summary Deletes a provisioned configuration.
 *
 * @param request DeleteProvisionConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProvisionConfigResponse
 */
DeleteProvisionConfigResponse Client::deleteProvisionConfigWithOptions(const string &functionName, const DeleteProvisionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProvisionConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/provision-config")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProvisionConfigResponse>();
}

/**
 * @summary Deletes a provisioned configuration.
 *
 * @param request DeleteProvisionConfigRequest
 * @return DeleteProvisionConfigResponse
 */
DeleteProvisionConfigResponse Client::deleteProvisionConfig(const string &functionName, const DeleteProvisionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteProvisionConfigWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Deletes the scaling settings of a function.
 *
 * @param request DeleteScalingConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScalingConfigResponse
 */
DeleteScalingConfigResponse Client::deleteScalingConfigWithOptions(const string &functionName, const DeleteScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScalingConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/scaling-config")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScalingConfigResponse>();
}

/**
 * @summary Deletes the scaling settings of a function.
 *
 * @param request DeleteScalingConfigRequest
 * @return DeleteScalingConfigResponse
 */
DeleteScalingConfigResponse Client::deleteScalingConfig(const string &functionName, const DeleteScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteScalingConfigWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Deletes the specified session and prohibits new requests from being routed to it. Clears the session metadata from the database, so subsequent requests with the same session ID are treated as new sessions. Releases resources and performs session cleanup. In session isolation scenarios, terminates running requests and releases the instance bound to the session. In non-session isolation scenarios, allows running requests to continue and gracefully terminates them.
 *
 * @param request DeleteSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSessionResponse
 */
DeleteSessionResponse Client::deleteSessionWithOptions(const string &functionName, const string &sessionId, const DeleteSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSession"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSessionResponse>();
}

/**
 * @summary Deletes the specified session and prohibits new requests from being routed to it. Clears the session metadata from the database, so subsequent requests with the same session ID are treated as new sessions. Releases resources and performs session cleanup. In session isolation scenarios, terminates running requests and releases the instance bound to the session. In non-session isolation scenarios, allows running requests to continue and gracefully terminates them.
 *
 * @param request DeleteSessionRequest
 * @return DeleteSessionResponse
 */
DeleteSessionResponse Client::deleteSession(const string &functionName, const string &sessionId, const DeleteSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSessionWithOptions(functionName, sessionId, request, headers, runtime);
}

/**
 * @summary Deletes a trigger.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTriggerResponse
 */
DeleteTriggerResponse Client::deleteTriggerWithOptions(const string &functionName, const string &triggerName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrigger"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/triggers/" , Darabonba::Encode::Encoder::percentEncode(triggerName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTriggerResponse>();
}

/**
 * @summary Deletes a trigger.
 *
 * @return DeleteTriggerResponse
 */
DeleteTriggerResponse Client::deleteTrigger(const string &functionName, const string &triggerName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTriggerWithOptions(functionName, triggerName, headers, runtime);
}

/**
 * @summary Deletes an access control policy from a specified policy group for a VPC firewall.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpcBindingResponse
 */
DeleteVpcBindingResponse Client::deleteVpcBindingWithOptions(const string &functionName, const string &vpcId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVpcBinding"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/vpc-bindings/" , Darabonba::Encode::Encoder::percentEncode(vpcId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVpcBindingResponse>();
}

/**
 * @summary Deletes an access control policy from a specified policy group for a VPC firewall.
 *
 * @return DeleteVpcBindingResponse
 */
DeleteVpcBindingResponse Client::deleteVpcBinding(const string &functionName, const string &vpcId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteVpcBindingWithOptions(functionName, vpcId, headers, runtime);
}

/**
 * @summary Queries the regions where Function Compute 3.0 is available.
 *
 * @param request DescribeRegionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the regions where Function Compute 3.0 is available.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(request, headers, runtime);
}

/**
 * @summary The DisableFunctionInvocation operation prevents a function from being invoked and optionally terminates all requests that are being processed. Once a function\\"s invocation is disabled, no new instances can be created, and the existing provisioned instances are destroyed. This operation is currently in private preview.
 *
 * @description Exercise caution when you call this operation on a function in a production environment, as improper deactivation may lead to business disruptions.
 *
 * @param request DisableFunctionInvocationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableFunctionInvocationResponse
 */
DisableFunctionInvocationResponse Client::disableFunctionInvocationWithOptions(const string &functionName, const DisableFunctionInvocationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAbortOngoingRequest()) {
    body["abortOngoingRequest"] = request.abortOngoingRequest();
  }

  if (!!request.hasReason()) {
    body["reason"] = request.reason();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DisableFunctionInvocation"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/invoke/disable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableFunctionInvocationResponse>();
}

/**
 * @summary The DisableFunctionInvocation operation prevents a function from being invoked and optionally terminates all requests that are being processed. Once a function\\"s invocation is disabled, no new instances can be created, and the existing provisioned instances are destroyed. This operation is currently in private preview.
 *
 * @description Exercise caution when you call this operation on a function in a production environment, as improper deactivation may lead to business disruptions.
 *
 * @param request DisableFunctionInvocationRequest
 * @return DisableFunctionInvocationResponse
 */
DisableFunctionInvocationResponse Client::disableFunctionInvocation(const string &functionName, const DisableFunctionInvocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableFunctionInvocationWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary The EnableFunctionInvocation operation allows a function to be invoked and resumes the creation of provisioned instances. This operation is currently in private preview.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableFunctionInvocationResponse
 */
EnableFunctionInvocationResponse Client::enableFunctionInvocationWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableFunctionInvocation"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/invoke/enable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableFunctionInvocationResponse>();
}

/**
 * @summary The EnableFunctionInvocation operation allows a function to be invoked and resumes the creation of provisioned instances. This operation is currently in private preview.
 *
 * @return EnableFunctionInvocationResponse
 */
EnableFunctionInvocationResponse Client::enableFunctionInvocation(const string &functionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableFunctionInvocationWithOptions(functionName, headers, runtime);
}

/**
 * @summary Queries information about an alias.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAliasResponse
 */
GetAliasResponse Client::getAliasWithOptions(const string &functionName, const string &aliasName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlias"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/aliases/" , Darabonba::Encode::Encoder::percentEncode(aliasName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAliasResponse>();
}

/**
 * @summary Queries information about an alias.
 *
 * @return GetAliasResponse
 */
GetAliasResponse Client::getAlias(const string &functionName, const string &aliasName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAliasWithOptions(functionName, aliasName, headers, runtime);
}

/**
 * @summary Gets asynchronous invocation configurations of a function.
 *
 * @param request GetAsyncInvokeConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncInvokeConfigResponse
 */
GetAsyncInvokeConfigResponse Client::getAsyncInvokeConfigWithOptions(const string &functionName, const GetAsyncInvokeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsyncInvokeConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/async-invoke-config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsyncInvokeConfigResponse>();
}

/**
 * @summary Gets asynchronous invocation configurations of a function.
 *
 * @param request GetAsyncInvokeConfigRequest
 * @return GetAsyncInvokeConfigResponse
 */
GetAsyncInvokeConfigResponse Client::getAsyncInvokeConfig(const string &functionName, const GetAsyncInvokeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAsyncInvokeConfigWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Queries the information about an asynchronous task.
 *
 * @param request GetAsyncTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncTaskResponse
 */
GetAsyncTaskResponse Client::getAsyncTaskWithOptions(const string &functionName, const string &taskId, const GetAsyncTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsyncTask"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/async-tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsyncTaskResponse>();
}

/**
 * @summary Queries the information about an asynchronous task.
 *
 * @param request GetAsyncTaskRequest
 * @return GetAsyncTaskResponse
 */
GetAsyncTaskResponse Client::getAsyncTask(const string &functionName, const string &taskId, const GetAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAsyncTaskWithOptions(functionName, taskId, request, headers, runtime);
}

/**
 * @summary Obtains a concurrency configuration.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConcurrencyConfigResponse
 */
GetConcurrencyConfigResponse Client::getConcurrencyConfigWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConcurrencyConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/concurrency")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConcurrencyConfigResponse>();
}

/**
 * @summary Obtains a concurrency configuration.
 *
 * @return GetConcurrencyConfigResponse
 */
GetConcurrencyConfigResponse Client::getConcurrencyConfig(const string &functionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConcurrencyConfigWithOptions(functionName, headers, runtime);
}

/**
 * @summary Queries information about a custom domain name.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomDomainResponse
 */
GetCustomDomainResponse Client::getCustomDomainWithOptions(const string &domainName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomDomain"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/custom-domains/" , Darabonba::Encode::Encoder::percentEncode(domainName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomDomainResponse>();
}

/**
 * @summary Queries information about a custom domain name.
 *
 * @return GetCustomDomainResponse
 */
GetCustomDomainResponse Client::getCustomDomain(const string &domainName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCustomDomainWithOptions(domainName, headers, runtime);
}

/**
 * @summary http://pre.hhht/#vpc
 *
 * @param request GetFunctionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFunctionResponse
 */
GetFunctionResponse Client::getFunctionWithOptions(const string &functionName, const GetFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFunction"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFunctionResponse>();
}

/**
 * @summary http://pre.hhht/#vpc
 *
 * @param request GetFunctionRequest
 * @return GetFunctionResponse
 */
GetFunctionResponse Client::getFunction(const string &functionName, const GetFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFunctionWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Queries a code package of a function.
 *
 * @param request GetFunctionCodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFunctionCodeResponse
 */
GetFunctionCodeResponse Client::getFunctionCodeWithOptions(const string &functionName, const GetFunctionCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFunctionCode"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/code")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFunctionCodeResponse>();
}

/**
 * @summary Queries a code package of a function.
 *
 * @param request GetFunctionCodeRequest
 * @return GetFunctionCodeResponse
 */
GetFunctionCodeResponse Client::getFunctionCode(const string &functionName, const GetFunctionCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFunctionCodeWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Queries versions of a layer.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLayerVersionResponse
 */
GetLayerVersionResponse Client::getLayerVersionWithOptions(const string &layerName, const string &version, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLayerVersion"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/layers/" , Darabonba::Encode::Encoder::percentEncode(layerName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(version))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLayerVersionResponse>();
}

/**
 * @summary Queries versions of a layer.
 *
 * @return GetLayerVersionResponse
 */
GetLayerVersionResponse Client::getLayerVersion(const string &layerName, const string &version) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLayerVersionWithOptions(layerName, version, headers, runtime);
}

/**
 * @summary Obtain version information of a layer by using ARNs.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLayerVersionByArnResponse
 */
GetLayerVersionByArnResponse Client::getLayerVersionByArnWithOptions(const string &arn, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLayerVersionByArn"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/layerarn/" , Darabonba::Encode::Encoder::percentEncode(arn))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLayerVersionByArnResponse>();
}

/**
 * @summary Obtain version information of a layer by using ARNs.
 *
 * @return GetLayerVersionByArnResponse
 */
GetLayerVersionByArnResponse Client::getLayerVersionByArn(const string &arn) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLayerVersionByArnWithOptions(arn, headers, runtime);
}

/**
 * @summary Queries provisioned configurations.
 *
 * @param request GetProvisionConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProvisionConfigResponse
 */
GetProvisionConfigResponse Client::getProvisionConfigWithOptions(const string &functionName, const GetProvisionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProvisionConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/provision-config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProvisionConfigResponse>();
}

/**
 * @summary Queries provisioned configurations.
 *
 * @param request GetProvisionConfigRequest
 * @return GetProvisionConfigResponse
 */
GetProvisionConfigResponse Client::getProvisionConfig(const string &functionName, const GetProvisionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProvisionConfigWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Gets the scaling settings of a function.
 *
 * @param request GetScalingConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScalingConfigResponse
 */
GetScalingConfigResponse Client::getScalingConfigWithOptions(const string &functionName, const GetScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScalingConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/scaling-config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScalingConfigResponse>();
}

/**
 * @summary Gets the scaling settings of a function.
 *
 * @param request GetScalingConfigRequest
 * @return GetScalingConfigResponse
 */
GetScalingConfigResponse Client::getScalingConfig(const string &functionName, const GetScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScalingConfigWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary You can use this operation to retrieve detailed information about a specific session, including its session ID, associated function, affinity type, lifecycle configuration, status, and instance details. This operation retrieves the current metadata for a session. You can identify the metadata precisely using either the function name or qualifier. This capability enables you to monitor and debug external systems with ease. Only sessions that are in the Active state can be queried.
 *
 * @param request GetSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSessionResponse
 */
GetSessionResponse Client::getSessionWithOptions(const string &functionName, const string &sessionId, const GetSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSession"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSessionResponse>();
}

/**
 * @summary You can use this operation to retrieve detailed information about a specific session, including its session ID, associated function, affinity type, lifecycle configuration, status, and instance details. This operation retrieves the current metadata for a session. You can identify the metadata precisely using either the function name or qualifier. This capability enables you to monitor and debug external systems with ease. Only sessions that are in the Active state can be queried.
 *
 * @param request GetSessionRequest
 * @return GetSessionResponse
 */
GetSessionResponse Client::getSession(const string &functionName, const string &sessionId, const GetSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSessionWithOptions(functionName, sessionId, request, headers, runtime);
}

/**
 * @summary Queries information about a trigger.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTriggerResponse
 */
GetTriggerResponse Client::getTriggerWithOptions(const string &functionName, const string &triggerName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrigger"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/triggers/" , Darabonba::Encode::Encoder::percentEncode(triggerName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTriggerResponse>();
}

/**
 * @summary Queries information about a trigger.
 *
 * @return GetTriggerResponse
 */
GetTriggerResponse Client::getTrigger(const string &functionName, const string &triggerName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTriggerWithOptions(functionName, triggerName, headers, runtime);
}

/**
 * @summary Invokes a function.
 *
 * @param request InvokeFunctionRequest
 * @param headers InvokeFunctionHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeFunctionResponse
 */
InvokeFunctionResponse Client::invokeFunctionWithOptions(const string &functionName, const InvokeFunctionRequest &request, const InvokeFunctionHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXFcAsyncTaskId()) {
    realHeaders["x-fc-async-task-id"] = Darabonba::Convert::stringVal(headers.xFcAsyncTaskId());
  }

  if (!!headers.hasXFcInvocationType()) {
    realHeaders["x-fc-invocation-type"] = Darabonba::Convert::stringVal(headers.xFcInvocationType());
  }

  if (!!headers.hasXFcLogType()) {
    realHeaders["x-fc-log-type"] = Darabonba::Convert::stringVal(headers.xFcLogType());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()},
    {"stream" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "InvokeFunction"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/invocations")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "binary"}
  }).get<map<string, string>>());
  InvokeFunctionResponse res = InvokeFunctionResponse();
  json tmp = callApi(params, req, runtime);
  if (!!tmp.contains("body")) {
    shared_ptr<Darabonba::IStream> respBody = Darabonba::Stream::toReadable(tmp["body"]);
    res.setBody(respBody);
  }

  if (!!tmp.contains("headers")) {
    json respHeaders = json(tmp["headers"]);
    res.setHeaders(Utils::Utils::stringifyMapValue(respHeaders));
  }

  if (!!tmp.contains("statusCode")) {
    int32_t statusCode = Darabonba::Convert::integerVal(tmp["statusCode"]);
    res.setStatusCode(statusCode);
  }

  return res;
}

/**
 * @summary Invokes a function.
 *
 * @param request InvokeFunctionRequest
 * @return InvokeFunctionResponse
 */
InvokeFunctionResponse Client::invokeFunction(const string &functionName, const InvokeFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvokeFunctionHeaders headers = InvokeFunctionHeaders();
  return invokeFunctionWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Queries aliases.
 *
 * @param request ListAliasesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAliasesResponse
 */
ListAliasesResponse Client::listAliasesWithOptions(const string &functionName, const ListAliasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.prefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAliases"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/aliases")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAliasesResponse>();
}

/**
 * @summary Queries aliases.
 *
 * @param request ListAliasesRequest
 * @return ListAliasesResponse
 */
ListAliasesResponse Client::listAliases(const string &functionName, const ListAliasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAliasesWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Queries all asynchronous configurations of a function.
 *
 * @param request ListAsyncInvokeConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAsyncInvokeConfigsResponse
 */
ListAsyncInvokeConfigsResponse Client::listAsyncInvokeConfigsWithOptions(const ListAsyncInvokeConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionName()) {
    query["functionName"] = request.functionName();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAsyncInvokeConfigs"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/async-invoke-configs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAsyncInvokeConfigsResponse>();
}

/**
 * @summary Queries all asynchronous configurations of a function.
 *
 * @param request ListAsyncInvokeConfigsRequest
 * @return ListAsyncInvokeConfigsResponse
 */
ListAsyncInvokeConfigsResponse Client::listAsyncInvokeConfigs(const ListAsyncInvokeConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAsyncInvokeConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists asynchronous tasks.
 *
 * @param request ListAsyncTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAsyncTasksResponse
 */
ListAsyncTasksResponse Client::listAsyncTasksWithOptions(const string &functionName, const ListAsyncTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludePayload()) {
    query["includePayload"] = request.includePayload();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.prefix();
  }

  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  if (!!request.hasSortOrderByTime()) {
    query["sortOrderByTime"] = request.sortOrderByTime();
  }

  if (!!request.hasStartedTimeBegin()) {
    query["startedTimeBegin"] = request.startedTimeBegin();
  }

  if (!!request.hasStartedTimeEnd()) {
    query["startedTimeEnd"] = request.startedTimeEnd();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAsyncTasks"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/async-tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAsyncTasksResponse>();
}

/**
 * @summary Lists asynchronous tasks.
 *
 * @param request ListAsyncTasksRequest
 * @return ListAsyncTasksResponse
 */
ListAsyncTasksResponse Client::listAsyncTasks(const string &functionName, const ListAsyncTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAsyncTasksWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary 列出函数并发度配置。
 *
 * @param request ListConcurrencyConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConcurrencyConfigsResponse
 */
ListConcurrencyConfigsResponse Client::listConcurrencyConfigsWithOptions(const ListConcurrencyConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionName()) {
    query["functionName"] = request.functionName();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConcurrencyConfigs"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/concurrency-configs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConcurrencyConfigsResponse>();
}

/**
 * @summary 列出函数并发度配置。
 *
 * @param request ListConcurrencyConfigsRequest
 * @return ListConcurrencyConfigsResponse
 */
ListConcurrencyConfigsResponse Client::listConcurrencyConfigs(const ListConcurrencyConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConcurrencyConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries custom domain names.
 *
 * @param request ListCustomDomainsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomDomainsResponse
 */
ListCustomDomainsResponse Client::listCustomDomainsWithOptions(const ListCustomDomainsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.prefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomDomains"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/custom-domains")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomDomainsResponse>();
}

/**
 * @summary Queries custom domain names.
 *
 * @param request ListCustomDomainsRequest
 * @return ListCustomDomainsResponse
 */
ListCustomDomainsResponse Client::listCustomDomains(const ListCustomDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCustomDomainsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries versions of a function.
 *
 * @param request ListFunctionVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionVersionsResponse
 */
ListFunctionVersionsResponse Client::listFunctionVersionsWithOptions(const string &functionName, const ListFunctionVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["direction"] = request.direction();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctionVersions"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionVersionsResponse>();
}

/**
 * @summary Queries versions of a function.
 *
 * @param request ListFunctionVersionsRequest
 * @return ListFunctionVersionsResponse
 */
ListFunctionVersionsResponse Client::listFunctionVersions(const string &functionName, const ListFunctionVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFunctionVersionsWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary 列出函数。
 *
 * @description ListFunctions returns only a subset of a function\\"s attribute fields. To obtain the additional fields, which include state, stateReasonCode, stateReason, lastUpdateStatus, lastUpdateStatusReasonCode, and lastUpdateStatusReason, use [GetFunction](https://help.aliyun.com/document_detail/2618610.html).
 *
 * @param tmpReq ListFunctionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionsResponse
 */
ListFunctionsResponse Client::listFunctionsWithOptions(const ListFunctionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFunctionsShrinkRequest request = ListFunctionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasFcVersion()) {
    query["fcVersion"] = request.fcVersion();
  }

  if (!!request.hasFunctionName()) {
    query["functionName"] = request.functionName();
  }

  if (!!request.hasGpuType()) {
    query["gpuType"] = request.gpuType();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.prefix();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRuntime()) {
    query["runtime"] = request.runtime();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctions"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionsResponse>();
}

/**
 * @summary 列出函数。
 *
 * @description ListFunctions returns only a subset of a function\\"s attribute fields. To obtain the additional fields, which include state, stateReasonCode, stateReason, lastUpdateStatus, lastUpdateStatusReasonCode, and lastUpdateStatusReason, use [GetFunction](https://help.aliyun.com/document_detail/2618610.html).
 *
 * @param request ListFunctionsRequest
 * @return ListFunctionsResponse
 */
ListFunctionsResponse Client::listFunctions(const ListFunctionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFunctionsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of function instances.
 *
 * @param tmpReq ListInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const string &functionName, const ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListInstancesShrinkRequest request = ListInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceIds(), "instanceIds", "json"));
  }

  if (!!tmpReq.hasInstanceStatus()) {
    request.setInstanceStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceStatus(), "instanceStatus", "json"));
  }

  json query = {};
  if (!!request.hasEndTimeMs()) {
    query["endTimeMs"] = request.endTimeMs();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["instanceIds"] = request.instanceIdsShrink();
  }

  if (!!request.hasInstanceStatusShrink()) {
    query["instanceStatus"] = request.instanceStatusShrink();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  if (!!request.hasStartKey()) {
    query["startKey"] = request.startKey();
  }

  if (!!request.hasStartTimeMs()) {
    query["startTimeMs"] = request.startTimeMs();
  }

  if (!!request.hasWithAllActive()) {
    query["withAllActive"] = request.withAllActive();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries a list of function instances.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const string &functionName, const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Gets a list of layer versions.
 *
 * @param request ListLayerVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLayerVersionsResponse
 */
ListLayerVersionsResponse Client::listLayerVersionsWithOptions(const string &layerName, const ListLayerVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasStartVersion()) {
    query["startVersion"] = request.startVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLayerVersions"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/layers/" , Darabonba::Encode::Encoder::percentEncode(layerName) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLayerVersionsResponse>();
}

/**
 * @summary Gets a list of layer versions.
 *
 * @param request ListLayerVersionsRequest
 * @return ListLayerVersionsResponse
 */
ListLayerVersionsResponse Client::listLayerVersions(const string &layerName, const ListLayerVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLayerVersionsWithOptions(layerName, request, headers, runtime);
}

/**
 * @summary Gets a list of layers.
 *
 * @param request ListLayersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLayersResponse
 */
ListLayersResponse Client::listLayersWithOptions(const ListLayersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasOfficial()) {
    query["official"] = request.official();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.prefix();
  }

  if (!!request.hasPublic()) {
    query["public"] = request._public();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLayers"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/layers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLayersResponse>();
}

/**
 * @summary Gets a list of layers.
 *
 * @param request ListLayersRequest
 * @return ListLayersResponse
 */
ListLayersResponse Client::listLayers(const ListLayersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLayersWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of provisioned configurations.
 *
 * @param request ListProvisionConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProvisionConfigsResponse
 */
ListProvisionConfigsResponse Client::listProvisionConfigsWithOptions(const ListProvisionConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionName()) {
    query["functionName"] = request.functionName();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProvisionConfigs"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/provision-configs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProvisionConfigsResponse>();
}

/**
 * @summary Queries a list of provisioned configurations.
 *
 * @param request ListProvisionConfigsRequest
 * @return ListProvisionConfigsResponse
 */
ListProvisionConfigsResponse Client::listProvisionConfigs(const ListProvisionConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProvisionConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the scaling settings of a function.
 *
 * @param request ListScalingConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScalingConfigsResponse
 */
ListScalingConfigsResponse Client::listScalingConfigsWithOptions(const ListScalingConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionName()) {
    query["functionName"] = request.functionName();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScalingConfigs"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/scaling-configs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScalingConfigsResponse>();
}

/**
 * @summary Lists the scaling settings of a function.
 *
 * @param request ListScalingConfigsRequest
 * @return ListScalingConfigsResponse
 */
ListScalingConfigsResponse Client::listScalingConfigs(const ListScalingConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listScalingConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists sessions in the Active and/or Expired state(s) under the specified function. Supports filtering by qualifier, status, and session ID, as well as paginated queries. Returns basic session attributes for batch viewing of session distribution and status, helping with operations monitoring and integration with external systems, and enhancing session visibility and management.
 *
 * @param request ListSessionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSessionsResponse
 */
ListSessionsResponse Client::listSessionsWithOptions(const string &functionName, const ListSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.sessionId();
  }

  if (!!request.hasSessionStatus()) {
    query["sessionStatus"] = request.sessionStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSessions"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/sessions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSessionsResponse>();
}

/**
 * @summary Lists sessions in the Active and/or Expired state(s) under the specified function. Supports filtering by qualifier, status, and session ID, as well as paginated queries. Returns basic session attributes for batch viewing of session distribution and status, helping with operations monitoring and integration with external systems, and enhancing session visibility and management.
 *
 * @param request ListSessionsRequest
 * @return ListSessionsResponse
 */
ListSessionsResponse Client::listSessions(const string &functionName, const ListSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSessionsWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Lists all tagged resources.
 *
 * @param tmpReq ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagResourcesShrinkRequest request = ListTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceId(), "ResourceId", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceIdShrink()) {
    query["ResourceId"] = request.resourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.tagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/tags-v2")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Lists all tagged resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the triggers of a function.
 *
 * @param request ListTriggersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTriggersResponse
 */
ListTriggersResponse Client::listTriggersWithOptions(const string &functionName, const ListTriggersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimit()) {
    query["limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.prefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTriggers"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/triggers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTriggersResponse>();
}

/**
 * @summary Queries the triggers of a function.
 *
 * @param request ListTriggersRequest
 * @return ListTriggersResponse
 */
ListTriggersResponse Client::listTriggers(const string &functionName, const ListTriggersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTriggersWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Queries a list of existing VPC connections.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVpcBindingsResponse
 */
ListVpcBindingsResponse Client::listVpcBindingsWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVpcBindings"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/vpc-bindings")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVpcBindingsResponse>();
}

/**
 * @summary Queries a list of existing VPC connections.
 *
 * @return ListVpcBindingsResponse
 */
ListVpcBindingsResponse Client::listVpcBindings(const string &functionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVpcBindingsWithOptions(functionName, headers, runtime);
}

/**
 * @summary Publishes a function version.
 *
 * @param request PublishFunctionVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishFunctionVersionResponse
 */
PublishFunctionVersionResponse Client::publishFunctionVersionWithOptions(const string &functionName, const PublishFunctionVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "PublishFunctionVersion"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishFunctionVersionResponse>();
}

/**
 * @summary Publishes a function version.
 *
 * @param request PublishFunctionVersionRequest
 * @return PublishFunctionVersionResponse
 */
PublishFunctionVersionResponse Client::publishFunctionVersion(const string &functionName, const PublishFunctionVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishFunctionVersionWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Creates or modifies an asynchronous invocation configuration for a function.
 *
 * @param request PutAsyncInvokeConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutAsyncInvokeConfigResponse
 */
PutAsyncInvokeConfigResponse Client::putAsyncInvokeConfigWithOptions(const string &functionName, const PutAsyncInvokeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "PutAsyncInvokeConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/async-invoke-config")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutAsyncInvokeConfigResponse>();
}

/**
 * @summary Creates or modifies an asynchronous invocation configuration for a function.
 *
 * @param request PutAsyncInvokeConfigRequest
 * @return PutAsyncInvokeConfigResponse
 */
PutAsyncInvokeConfigResponse Client::putAsyncInvokeConfig(const string &functionName, const PutAsyncInvokeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return putAsyncInvokeConfigWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Configures concurrency of a function.
 *
 * @param request PutConcurrencyConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutConcurrencyConfigResponse
 */
PutConcurrencyConfigResponse Client::putConcurrencyConfigWithOptions(const string &functionName, const PutConcurrencyConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "PutConcurrencyConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/concurrency")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutConcurrencyConfigResponse>();
}

/**
 * @summary Configures concurrency of a function.
 *
 * @param request PutConcurrencyConfigRequest
 * @return PutConcurrencyConfigResponse
 */
PutConcurrencyConfigResponse Client::putConcurrencyConfig(const string &functionName, const PutConcurrencyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return putConcurrencyConfigWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Modifies permissions of a layer.
 *
 * @param request PutLayerACLRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutLayerACLResponse
 */
PutLayerACLResponse Client::putLayerACLWithOptions(const string &layerName, const PutLayerACLRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcl()) {
    query["acl"] = request.acl();
  }

  if (!!request.hasPublic()) {
    query["public"] = request._public();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutLayerACL"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/layers/" , Darabonba::Encode::Encoder::percentEncode(layerName) , "/acl")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutLayerACLResponse>();
}

/**
 * @summary Modifies permissions of a layer.
 *
 * @param request PutLayerACLRequest
 * @return PutLayerACLResponse
 */
PutLayerACLResponse Client::putLayerACL(const string &layerName, const PutLayerACLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return putLayerACLWithOptions(layerName, request, headers, runtime);
}

/**
 * @summary Creates provisioned configurations.
 *
 * @param request PutProvisionConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutProvisionConfigResponse
 */
PutProvisionConfigResponse Client::putProvisionConfigWithOptions(const string &functionName, const PutProvisionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "PutProvisionConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/provision-config")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutProvisionConfigResponse>();
}

/**
 * @summary Creates provisioned configurations.
 *
 * @param request PutProvisionConfigRequest
 * @return PutProvisionConfigResponse
 */
PutProvisionConfigResponse Client::putProvisionConfig(const string &functionName, const PutProvisionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return putProvisionConfigWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Scaling settings
 *
 * @param request PutScalingConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutScalingConfigResponse
 */
PutScalingConfigResponse Client::putScalingConfigWithOptions(const string &functionName, const PutScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "PutScalingConfig"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/scaling-config")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutScalingConfigResponse>();
}

/**
 * @summary Scaling settings
 *
 * @param request PutScalingConfigRequest
 * @return PutScalingConfigResponse
 */
PutScalingConfigResponse Client::putScalingConfig(const string &functionName, const PutScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return putScalingConfigWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Stops an asynchronous task.
 *
 * @param request StopAsyncTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAsyncTaskResponse
 */
StopAsyncTaskResponse Client::stopAsyncTaskWithOptions(const string &functionName, const string &taskId, const StopAsyncTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAsyncTask"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/async-tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAsyncTaskResponse>();
}

/**
 * @summary Stops an asynchronous task.
 *
 * @param request StopAsyncTaskRequest
 * @return StopAsyncTaskResponse
 */
StopAsyncTaskResponse Client::stopAsyncTask(const string &functionName, const string &taskId, const StopAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopAsyncTaskWithOptions(functionName, taskId, request, headers, runtime);
}

/**
 * @summary Adds tags to a resource.
 *
 * @description Tags are used to identify resources. Tags allow you to categorize, search for, and aggregate resources that have the same characteristics from different dimensions. This facilitates resource management. For more information, see [Tag overview](https://help.aliyun.com/document_detail/156983.html).
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/tags-v2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to a resource.
 *
 * @description Tags are used to identify resources. Tags allow you to categorize, search for, and aggregate resources that have the same characteristics from different dimensions. This facilitates resource management. For more information, see [Tag overview](https://help.aliyun.com/document_detail/156983.html).
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return tagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Removes tags from a resource.
 *
 * @param tmpReq UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UntagResourcesShrinkRequest request = UntagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceId(), "ResourceId", "json"));
  }

  if (!!tmpReq.hasTagKey()) {
    request.setTagKeyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tagKey(), "TagKey", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasResourceIdShrink()) {
    query["ResourceId"] = request.resourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKeyShrink()) {
    query["TagKey"] = request.tagKeyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/tags-v2")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from a resource.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return untagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Updates an alias.
 *
 * @param request UpdateAliasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAliasResponse
 */
UpdateAliasResponse Client::updateAliasWithOptions(const string &functionName, const string &aliasName, const UpdateAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateAlias"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/aliases/" , Darabonba::Encode::Encoder::percentEncode(aliasName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAliasResponse>();
}

/**
 * @summary Updates an alias.
 *
 * @param request UpdateAliasRequest
 * @return UpdateAliasResponse
 */
UpdateAliasResponse Client::updateAlias(const string &functionName, const string &aliasName, const UpdateAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAliasWithOptions(functionName, aliasName, request, headers, runtime);
}

/**
 * @summary Update a custom domain name.
 *
 * @param request UpdateCustomDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomDomainResponse
 */
UpdateCustomDomainResponse Client::updateCustomDomainWithOptions(const string &domainName, const UpdateCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateCustomDomain"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/custom-domains/" , Darabonba::Encode::Encoder::percentEncode(domainName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomDomainResponse>();
}

/**
 * @summary Update a custom domain name.
 *
 * @param request UpdateCustomDomainRequest
 * @return UpdateCustomDomainResponse
 */
UpdateCustomDomainResponse Client::updateCustomDomain(const string &domainName, const UpdateCustomDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCustomDomainWithOptions(domainName, request, headers, runtime);
}

/**
 * @summary Updates the information about a function.
 *
 * @param request UpdateFunctionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFunctionResponse
 */
UpdateFunctionResponse Client::updateFunctionWithOptions(const string &functionName, const UpdateFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateFunction"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFunctionResponse>();
}

/**
 * @summary Updates the information about a function.
 *
 * @param request UpdateFunctionRequest
 * @return UpdateFunctionResponse
 */
UpdateFunctionResponse Client::updateFunction(const string &functionName, const UpdateFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFunctionWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Updates session configurations while the session is in the Active state, such as lifecycle parameters (e.g., SessionTTLInSeconds and SessionIdleTimeoutInSeconds). After the update takes effect, LastModifiedTime is automatically refreshed. These updates can be used to extend or shorten the validity period of a session and enable dynamic management without changing the execution environment bound to the session.
 *
 * @param request UpdateSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSessionResponse
 */
UpdateSessionResponse Client::updateSessionWithOptions(const string &functionName, const string &sessionId, const UpdateSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.qualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateSession"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSessionResponse>();
}

/**
 * @summary Updates session configurations while the session is in the Active state, such as lifecycle parameters (e.g., SessionTTLInSeconds and SessionIdleTimeoutInSeconds). After the update takes effect, LastModifiedTime is automatically refreshed. These updates can be used to extend or shorten the validity period of a session and enable dynamic management without changing the execution environment bound to the session.
 *
 * @param request UpdateSessionRequest
 * @return UpdateSessionResponse
 */
UpdateSessionResponse Client::updateSession(const string &functionName, const string &sessionId, const UpdateSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSessionWithOptions(functionName, sessionId, request, headers, runtime);
}

/**
 * @summary Modifies a trigger.
 *
 * @param request UpdateTriggerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTriggerResponse
 */
UpdateTriggerResponse Client::updateTriggerWithOptions(const string &functionName, const string &triggerName, const UpdateTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateTrigger"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/triggers/" , Darabonba::Encode::Encoder::percentEncode(triggerName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTriggerResponse>();
}

/**
 * @summary Modifies a trigger.
 *
 * @param request UpdateTriggerRequest
 * @return UpdateTriggerResponse
 */
UpdateTriggerResponse Client::updateTrigger(const string &functionName, const string &triggerName, const UpdateTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTriggerWithOptions(functionName, triggerName, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace FC20230330