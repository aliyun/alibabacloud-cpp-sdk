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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "fcv3.us-west-1.aliyuncs.com"},
    {"us-east-1" , "fcv3.us-east-1.aliyuncs.com"},
    {"me-central-1" , "me-central-1.fc.aliyuncs.com"},
    {"eu-west-1" , "fcv3.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "fcv3.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "fcv3.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "fcv3.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen" , "fcv3.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "cn-shanghai-finance-1.fc.aliyuncs.com"},
    {"cn-shanghai" , "fcv3.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "fcv3.cn-qingdao.aliyuncs.com"},
    {"cn-huhehaote" , "fcv3.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "fcv3.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "cn-heyuan-acdr-1.fc.aliyuncs.com"},
    {"cn-hangzhou-finance" , "cn-hangzhou-finance.fc.aliyuncs.com"},
    {"cn-hangzhou" , "fcv3.cn-hangzhou.aliyuncs.com"},
    {"cn-chengdu" , "fcv3.cn-chengdu.aliyuncs.com"},
    {"cn-beijing" , "fcv3.cn-beijing.aliyuncs.com"},
    {"ap-southeast-7" , "fcv3.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-5" , "fcv3.ap-southeast-5.aliyuncs.com	"},
    {"ap-southeast-3" , "fcv3.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-2" , "fcv3.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "fcv3.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "fcv3.ap-south-1.aliyuncs.com"},
    {"ap-northeast-2" , "fcv3.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "fcv3.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Changes the resource group of a Function Compute resource.
 *
 * @description To change the resource group of a Function Compute resource, you must have the ChangeResourceGroup permission for both the current and target resource groups.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Changes the resource group of a Function Compute resource.
 *
 * @description To change the resource group of a Function Compute resource, you must have the ChangeResourceGroup permission for both the current and target resource groups.
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
 * @summary Creates an alias.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates an alias.
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
 * @description You can attach a custom domain name to an application or function in Function Compute to access it through a fixed domain name in a production environment, or to resolve the forced download behavior when you access an HTTP trigger.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @description You can attach a custom domain name to an application or function in Function Compute to access it through a fixed domain name in a production environment, or to resolve the forced download behavior when you access an HTTP trigger.
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
 * @summary Creates a function by calling the CreateFunction operation.
 *
 * @description When you create a function by using an OSS code package, if the error "unable to access object xxx in bucket xxx" is reported, grant the current user access permissions on the OSS bucket. For example, you can use the system access policy AliyunOSSReadOnlyAccess or a custom policy with finer granularity of authorization such as oss:GetObject. For details about the policy content, see [Grant a Resource Access Management (RAM) user permissions to read all resources in a bucket](https://help.aliyun.com/document_detail/199058.html).
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates a function by calling the CreateFunction operation.
 *
 * @description When you create a function by using an OSS code package, if the error "unable to access object xxx in bucket xxx" is reported, grant the current user access permissions on the OSS bucket. For example, you can use the system access policy AliyunOSSReadOnlyAccess or a custom policy with finer granularity of authorization such as oss:GetObject. For details about the policy content, see [Grant a Resource Access Management (RAM) user permissions to read all resources in a bucket](https://help.aliyun.com/document_detail/199058.html).
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
 * @summary This operation publishes a layer version.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary This operation publishes a layer version.
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
 * @summary Creates an explicit session resource. The system automatically generates a unique SessionID, pre-allocates a function instance, and binds it to the session. You can specify TTL and IdleTimeout. This operation applies to the HEADER_FIELD or GENERATED_COOKIE affinity types, enabling session warm-up and configuration initialization. After the call, you can include the session in InvokeFunction requests for request routing.
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
    query["qualifier"] = request.getQualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates an explicit session resource. The system automatically generates a unique SessionID, pre-allocates a function instance, and binds it to the session. You can specify TTL and IdleTimeout. This operation applies to the HEADER_FIELD or GENERATED_COOKIE affinity types, enabling session warm-up and configuration initialization. After the call, you can include the session in InvokeFunction requests for request routing.
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
 * @summary Creates a trigger.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates a trigger.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
    query["qualifier"] = request.getQualifier();
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
 * @summary Deletes a function version.
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
 * @summary Deletes a function version.
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
    query["qualifier"] = request.getQualifier();
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
    query["qualifier"] = request.getQualifier();
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
    query["qualifier"] = request.getQualifier();
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
 * @summary Deletes the specified trigger.
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
 * @summary Deletes the specified trigger.
 *
 * @return DeleteTriggerResponse
 */
DeleteTriggerResponse Client::deleteTrigger(const string &functionName, const string &triggerName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTriggerWithOptions(functionName, triggerName, headers, runtime);
}

/**
 * @summary Deletes an access control policy from a specified VPC firewall policy group.
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
 * @summary Deletes an access control policy from a specified VPC firewall policy group.
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
    query["AcceptLanguage"] = request.getAcceptLanguage();
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
 * @summary Disables function invocations. You can also stop all ongoing requests. When a function is disabled, new instances cannot be created and provisioned instances are destroyed. This OpenAPI is in beta.
 *
 * @description Use caution when calling this API for functions in a production environment because disabling function invocations can disrupt your services.
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
    body["abortOngoingRequest"] = request.getAbortOngoingRequest();
  }

  if (!!request.hasReason()) {
    body["reason"] = request.getReason();
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
 * @summary Disables function invocations. You can also stop all ongoing requests. When a function is disabled, new instances cannot be created and provisioned instances are destroyed. This OpenAPI is in beta.
 *
 * @description Use caution when calling this API for functions in a production environment because disabling function invocations can disrupt your services.
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
 * @summary Retrieves information about an alias.
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
 * @summary Retrieves information about an alias.
 *
 * @return GetAliasResponse
 */
GetAliasResponse Client::getAlias(const string &functionName, const string &aliasName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAliasWithOptions(functionName, aliasName, headers, runtime);
}

/**
 * @summary Retrieves the asynchronous invocation configuration of a specified function.
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
    query["qualifier"] = request.getQualifier();
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
 * @summary Retrieves the asynchronous invocation configuration of a specified function.
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
 * @summary Retrieves the details of a specified asynchronous task.
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
    query["qualifier"] = request.getQualifier();
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
 * @summary Retrieves the details of a specified asynchronous task.
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
 * @summary Retrieves the concurrency configuration.
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
 * @summary Retrieves the concurrency configuration.
 *
 * @return GetConcurrencyConfigResponse
 */
GetConcurrencyConfigResponse Client::getConcurrencyConfig(const string &functionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConcurrencyConfigWithOptions(functionName, headers, runtime);
}

/**
 * @summary Retrieves the configuration of a custom domain name.
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
 * @summary Retrieves the configuration of a custom domain name.
 *
 * @return GetCustomDomainResponse
 */
GetCustomDomainResponse Client::getCustomDomain(const string &domainName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCustomDomainWithOptions(domainName, headers, runtime);
}

/**
 * @summary Retrieves information about a function.
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
    query["qualifier"] = request.getQualifier();
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
 * @summary Retrieves information about a function.
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
 * @summary Retrieves the details of a function code package.
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
    query["qualifier"] = request.getQualifier();
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
 * @summary Retrieves the details of a function code package.
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
 * @summary Retrieves information about a layer version.
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
 * @summary Retrieves information about a layer version.
 *
 * @return GetLayerVersionResponse
 */
GetLayerVersionResponse Client::getLayerVersion(const string &layerName, const string &version) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLayerVersionWithOptions(layerName, version, headers, runtime);
}

/**
 * @summary Retrieves the version information of a layer by its Alibaba Cloud Resource Name (ARN).
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
 * @summary Retrieves the version information of a layer by its Alibaba Cloud Resource Name (ARN).
 *
 * @return GetLayerVersionByArnResponse
 */
GetLayerVersionByArnResponse Client::getLayerVersionByArn(const string &arn) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLayerVersionByArnWithOptions(arn, headers, runtime);
}

/**
 * @summary Retrieves the provisioned configuration.
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
    query["qualifier"] = request.getQualifier();
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
 * @summary Retrieves the provisioned configuration.
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
 * @summary Retrieves the scaling configuration for a function.
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
    query["qualifier"] = request.getQualifier();
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
 * @summary Retrieves the scaling configuration for a function.
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
 * @summary Retrieves the details of a specified session, including the session ID, associated function, affinity type, lifecycle configuration, status, and instance information. This operation queries the current metadata of a single session and supports exact matching by functionName and qualifier for external system monitoring and debugging. Only sessions in the Active state can be queried.
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
    query["qualifier"] = request.getQualifier();
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
 * @summary Retrieves the details of a specified session, including the session ID, associated function, affinity type, lifecycle configuration, status, and instance information. This operation queries the current metadata of a single session and supports exact matching by functionName and qualifier for external system monitoring and debugging. Only sessions in the Active state can be queried.
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
 * @summary Retrieves the details of a specified trigger.
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
 * @summary Retrieves the details of a specified trigger.
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
    query["qualifier"] = request.getQualifier();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXFcAsyncTaskId()) {
    realHeaders["x-fc-async-task-id"] = Darabonba::Convert::stringVal(headers.getXFcAsyncTaskId());
  }

  if (!!headers.hasXFcInvocationType()) {
    realHeaders["x-fc-invocation-type"] = Darabonba::Convert::stringVal(headers.getXFcInvocationType());
  }

  if (!!headers.hasXFcLogType()) {
    realHeaders["x-fc-log-type"] = Darabonba::Convert::stringVal(headers.getXFcLogType());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()},
    {"stream" , request.getBody()}
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
    shared_ptr<Darabonba::IStream> respBody = Darabonba::Stream::toReadable(tmp.value("body", Darabonba::Json()));
    res.setBody(respBody);
  }

  if (!!tmp.contains("headers")) {
    json respHeaders = json(tmp.value("headers", Darabonba::Json()));
    res.setHeaders(Utils::Utils::stringifyMapValue(respHeaders));
  }

  if (!!tmp.contains("statusCode")) {
    int32_t statusCode = Darabonba::Convert::integerVal(tmp.value("statusCode", Darabonba::Json()));
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
 * @summary Lists aliases.
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
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.getPrefix();
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
 * @summary Lists aliases.
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
 * @summary Lists the asynchronous invocation configurations for one or more functions.
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
    query["functionName"] = request.getFunctionName();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
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
 * @summary Lists the asynchronous invocation configurations for one or more functions.
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
 * @summary Lists the details of asynchronous tasks.
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
    query["includePayload"] = request.getIncludePayload();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.getPrefix();
  }

  if (!!request.hasQualifier()) {
    query["qualifier"] = request.getQualifier();
  }

  if (!!request.hasSortOrderByTime()) {
    query["sortOrderByTime"] = request.getSortOrderByTime();
  }

  if (!!request.hasStartedTimeBegin()) {
    query["startedTimeBegin"] = request.getStartedTimeBegin();
  }

  if (!!request.hasStartedTimeEnd()) {
    query["startedTimeEnd"] = request.getStartedTimeEnd();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
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
 * @summary Lists the details of asynchronous tasks.
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
 * @summary Lists the concurrency configurations.
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
    query["functionName"] = request.getFunctionName();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
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
 * @summary Lists the concurrency configurations.
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
 * @summary Retrieves a list of custom domain names.
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
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.getPrefix();
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
 * @summary Retrieves a list of custom domain names.
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
 * @summary Lists the versions of a specified function.
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
    query["direction"] = request.getDirection();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
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
 * @summary Lists the versions of a specified function.
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
 * @summary Retrieves a list of functions.
 *
 * @description ListFunctions returns only a subset of fields for function properties. To retrieve additional property fields for a specific function, including state, stateReasonCode, stateReason, lastUpdateStatus, lastUpdateStatusReasonCode, and lastUpdateStatusReason, use [GetFunction](https://help.aliyun.com/document_detail/2618610.html).
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
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasFcVersion()) {
    query["fcVersion"] = request.getFcVersion();
  }

  if (!!request.hasFunctionName()) {
    query["functionName"] = request.getFunctionName();
  }

  if (!!request.hasGpuType()) {
    query["gpuType"] = request.getGpuType();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.getPrefix();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRuntime()) {
    query["runtime"] = request.getRuntime();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.getTagsShrink();
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
 * @summary Retrieves a list of functions.
 *
 * @description ListFunctions returns only a subset of fields for function properties. To retrieve additional property fields for a specific function, including state, stateReasonCode, stateReason, lastUpdateStatus, lastUpdateStatusReasonCode, and lastUpdateStatusReason, use [GetFunction](https://help.aliyun.com/document_detail/2618610.html).
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
 * @summary Lists function instances.
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
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "instanceIds", "json"));
  }

  if (!!tmpReq.hasInstanceStatus()) {
    request.setInstanceStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceStatus(), "instanceStatus", "json"));
  }

  json query = {};
  if (!!request.hasEndTimeMs()) {
    query["endTimeMs"] = request.getEndTimeMs();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["instanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasInstanceStatusShrink()) {
    query["instanceStatus"] = request.getInstanceStatusShrink();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  if (!!request.hasQualifier()) {
    query["qualifier"] = request.getQualifier();
  }

  if (!!request.hasStartKey()) {
    query["startKey"] = request.getStartKey();
  }

  if (!!request.hasStartTimeMs()) {
    query["startTimeMs"] = request.getStartTimeMs();
  }

  if (!!request.hasWithAllActive()) {
    query["withAllActive"] = request.getWithAllActive();
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
 * @summary Lists function instances.
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
 * @summary Retrieves a list of layer versions.
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
    query["limit"] = request.getLimit();
  }

  if (!!request.hasStartVersion()) {
    query["startVersion"] = request.getStartVersion();
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
 * @summary Retrieves a list of layer versions.
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
 * @summary Lists layers.
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
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficial()) {
    query["official"] = request.getOfficial();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.getPrefix();
  }

  if (!!request.hasPublic()) {
    query["public"] = request.getPublic();
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
 * @summary Lists layers.
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
 * @summary Retrieves a list of provisioned configurations.
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
    query["functionName"] = request.getFunctionName();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
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
 * @summary Retrieves a list of provisioned configurations.
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
 * @summary Lists the auto scaling configurations for a function.
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
    query["functionName"] = request.getFunctionName();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
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
 * @summary Lists the auto scaling configurations for a function.
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
 * @summary Lists sessions in Active or Expired status under a specified function. Supports filtering by qualifier, status, and session ID, and supports paged query. Returns basic session properties for batch viewing of session distribution and status, facilitating operations management and external system integration, and improving session visibility and management capability.
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
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasQualifier()) {
    query["qualifier"] = request.getQualifier();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasSessionStatus()) {
    query["sessionStatus"] = request.getSessionStatus();
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
 * @summary Lists sessions in Active or Expired status under a specified function. Supports filtering by qualifier, status, and session ID, and supports paged query. Returns basic session properties for batch viewing of session distribution and status, facilitating operations management and external system integration, and improving session visibility and management capability.
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
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceId(), "ResourceId", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceIdShrink()) {
    query["ResourceId"] = request.getResourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
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
 * @summary Lists the triggers for a specified function.
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
    query["limit"] = request.getLimit();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPrefix()) {
    query["prefix"] = request.getPrefix();
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
 * @summary Lists the triggers for a specified function.
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
 * @summary Queries existing VPC attachments.
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
 * @summary Queries existing VPC attachments.
 *
 * @return ListVpcBindingsResponse
 */
ListVpcBindingsResponse Client::listVpcBindings(const string &functionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVpcBindingsWithOptions(functionName, headers, runtime);
}

/**
 * @summary Pauses and saves a session.
 *
 * @description Pauses an active session by persisting the state of its associated runtime environment and then releasing compute resources. After the call, the session status changes to Paused, and the session no longer accepts function invocation requests. This operation retains the session configuration (such as SessionTTL) and SessionID. You can use this operation to interrupt long-running tasks or save snapshots of development environments for cost optimization and state management. This operation applies to custom image functions configured with the HEADER_FIELD or GENERATED_COOKIE affinity type and session isolation.
 *
 * @param request PauseSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseSessionResponse
 */
PauseSessionResponse Client::pauseSessionWithOptions(const string &functionName, const string &sessionId, const PauseSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifier()) {
    query["qualifier"] = request.getQualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseSession"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId) , "/pause")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseSessionResponse>();
}

/**
 * @summary Pauses and saves a session.
 *
 * @description Pauses an active session by persisting the state of its associated runtime environment and then releasing compute resources. After the call, the session status changes to Paused, and the session no longer accepts function invocation requests. This operation retains the session configuration (such as SessionTTL) and SessionID. You can use this operation to interrupt long-running tasks or save snapshots of development environments for cost optimization and state management. This operation applies to custom image functions configured with the HEADER_FIELD or GENERATED_COOKIE affinity type and session isolation.
 *
 * @param request PauseSessionRequest
 * @return PauseSessionResponse
 */
PauseSessionResponse Client::pauseSession(const string &functionName, const string &sessionId, const PauseSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pauseSessionWithOptions(functionName, sessionId, request, headers, runtime);
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates or updates the asynchronous invocation configuration for a function.
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
    query["qualifier"] = request.getQualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates or updates the asynchronous invocation configuration for a function.
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
 * @summary Sets the concurrency for a function.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Sets the concurrency for a function.
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
 * @summary Modifies the permissions of a layer.
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
    query["acl"] = request.getAcl();
  }

  if (!!request.hasPublic()) {
    query["public"] = request.getPublic();
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
 * @summary Modifies the permissions of a layer.
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
 * @summary Creates a provisioned configuration.
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
    query["qualifier"] = request.getQualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates a provisioned configuration.
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
 * @summary Set the elastic scaling configuration for a function.
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
    query["qualifier"] = request.getQualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Set the elastic scaling configuration for a function.
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
 * @summary Resumes a session.
 *
 * @description Resumes a session that is in the Paused state. The system quickly restores the session in a new execution environment based on the previously persisted state, returning it to the state before it was paused. After the session is successfully resumed, its status changes back to Active, and it can continue to accept function calling requests and route them to the restored instance. This operation applies to custom image functions that have HEADER_FIELD or GENERATED_COOKIE affinity types configured and session isolation enabled.
 *
 * @param request ResumeSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeSessionResponse
 */
ResumeSessionResponse Client::resumeSessionWithOptions(const string &functionName, const string &sessionId, const ResumeSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemOnly()) {
    query["fileSystemOnly"] = request.getFileSystemOnly();
  }

  if (!!request.hasQualifier()) {
    query["qualifier"] = request.getQualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeSession"},
    {"version" , "2023-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-03-30/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId) , "/resume")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeSessionResponse>();
}

/**
 * @summary Resumes a session.
 *
 * @description Resumes a session that is in the Paused state. The system quickly restores the session in a new execution environment based on the previously persisted state, returning it to the state before it was paused. After the session is successfully resumed, its status changes back to Active, and it can continue to accept function calling requests and route them to the restored instance. This operation applies to custom image functions that have HEADER_FIELD or GENERATED_COOKIE affinity types configured and session isolation enabled.
 *
 * @param request ResumeSessionRequest
 * @return ResumeSessionResponse
 */
ResumeSessionResponse Client::resumeSession(const string &functionName, const string &sessionId, const ResumeSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeSessionWithOptions(functionName, sessionId, request, headers, runtime);
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
    query["qualifier"] = request.getQualifier();
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
 * @summary Adds tags to specified resources.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Adds tags to specified resources.
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
 * @summary Removes tags from resources.
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
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceId(), "ResourceId", "json"));
  }

  if (!!tmpReq.hasTagKey()) {
    request.setTagKeyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagKey(), "TagKey", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasResourceIdShrink()) {
    query["ResourceId"] = request.getResourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeyShrink()) {
    query["TagKey"] = request.getTagKeyShrink();
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
 * @summary Removes tags from resources.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates a custom domain name.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates a custom domain name.
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
 * @summary Updates a function\\"s configuration.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates a function\\"s configuration.
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
 * @summary Updates the configuration of a session in Active status, such as lifecycle settings including SessionTTLInSeconds and SessionIdleTimeoutInSeconds. The changes take effect immediately, and LastModifiedTime is automatically refreshed. You can use this operation to extend or shorten the session validity period for dynamic management without changing the execution environment bound to the session.
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
    query["qualifier"] = request.getQualifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates the configuration of a session in Active status, such as lifecycle settings including SessionTTLInSeconds and SessionIdleTimeoutInSeconds. The changes take effect immediately, and LastModifiedTime is automatically refreshed. You can use this operation to extend or shorten the session validity period for dynamic management without changing the execution environment bound to the session.
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
 * @summary Updates the information of a trigger.
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates the information of a trigger.
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