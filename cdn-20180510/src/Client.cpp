#include <darabonba/Core.hpp>
#include <alibabacloud/Cdn20180510.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Cdn20180510::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Cdn20180510
{

AlibabaCloud::Cdn20180510::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  this->_endpointMap = json({
    {"ap-northeast-1" , "cdn.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "cdn.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-1" , "cdn.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "cdn.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "cdn.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "cdn.ap-southeast-1.aliyuncs.com"},
    {"eu-central-1" , "cdn.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "cdn.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "cdn.ap-southeast-1.aliyuncs.com"},
    {"us-east-1" , "cdn.ap-southeast-1.aliyuncs.com"},
    {"us-west-1" , "cdn.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("cdn", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a domain name to accelerate.
 *
 * @description *   You must activate Alibaba Cloud CDN before you can add a domain name to it. For more information, see [Activate Alibaba Cloud CDN](https://help.aliyun.com/document_detail/27272.html).
 * *   The domain name that you want to add has a valid Internet Content Provider (ICP) number.
 * *   You can add only one domain name to Alibaba Cloud CDN in each call. Each Alibaba Cloud account can add a maximum of 50 domain names to Alibaba Cloud CDN.
 * *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. The review will be completed by the end of the next business day after you submit the application.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request AddCdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCdnDomainResponse
 */
AddCdnDomainResponse Client::addCdnDomainWithOptions(const AddCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdnType()) {
    query["CdnType"] = request.cdnType();
  }

  if (!!request.hasCheckUrl()) {
    query["CheckUrl"] = request.checkUrl();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.sources();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.topLevelDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddCdnDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCdnDomainResponse>();
}

/**
 * @summary Adds a domain name to accelerate.
 *
 * @description *   You must activate Alibaba Cloud CDN before you can add a domain name to it. For more information, see [Activate Alibaba Cloud CDN](https://help.aliyun.com/document_detail/27272.html).
 * *   The domain name that you want to add has a valid Internet Content Provider (ICP) number.
 * *   You can add only one domain name to Alibaba Cloud CDN in each call. Each Alibaba Cloud account can add a maximum of 50 domain names to Alibaba Cloud CDN.
 * *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. The review will be completed by the end of the next business day after you submit the application.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request AddCdnDomainRequest
 * @return AddCdnDomainResponse
 */
AddCdnDomainResponse Client::addCdnDomain(const AddCdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCdnDomainWithOptions(request, runtime);
}

/**
 * @summary Adds a Function Compute trigger.
 *
 * @param request AddFCTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFCTriggerResponse
 */
AddFCTriggerResponse Client::addFCTriggerWithOptions(const AddFCTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTriggerARN()) {
    query["TriggerARN"] = request.triggerARN();
  }

  json body = {};
  if (!!request.hasEventMetaName()) {
    body["EventMetaName"] = request.eventMetaName();
  }

  if (!!request.hasEventMetaVersion()) {
    body["EventMetaVersion"] = request.eventMetaVersion();
  }

  if (!!request.hasFunctionARN()) {
    body["FunctionARN"] = request.functionARN();
  }

  if (!!request.hasNotes()) {
    body["Notes"] = request.notes();
  }

  if (!!request.hasRoleARN()) {
    body["RoleARN"] = request.roleARN();
  }

  if (!!request.hasSourceARN()) {
    body["SourceARN"] = request.sourceARN();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddFCTrigger"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFCTriggerResponse>();
}

/**
 * @summary Adds a Function Compute trigger.
 *
 * @param request AddFCTriggerRequest
 * @return AddFCTriggerResponse
 */
AddFCTriggerResponse Client::addFCTrigger(const AddFCTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFCTriggerWithOptions(request, runtime);
}

/**
 * @summary Adds one or more domain names to Alibaba Cloud CDN. You can add a maximum of 50 domain names at a time.
 *
 * @description *   You must activate Alibaba Cloud CDN before you can add a domain name to it. For more information, see [Activate Alibaba Cloud CDN](https://help.aliyun.com/document_detail/27272.html).
 * *   If the acceleration region is Chinese Mainland Only or Global, you must apply for an ICP filing for the domain name.
 * *   You can specify multiple domain names and separate them with commas (,). You can specify at most 50 domain names in each call.
 * *   For more information, see [Add a domain name](https://help.aliyun.com/document_detail/122181.html).
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchAddCdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchAddCdnDomainResponse
 */
BatchAddCdnDomainResponse Client::batchAddCdnDomainWithOptions(const BatchAddCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdnType()) {
    query["CdnType"] = request.cdnType();
  }

  if (!!request.hasCheckUrl()) {
    query["CheckUrl"] = request.checkUrl();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.sources();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.topLevelDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchAddCdnDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchAddCdnDomainResponse>();
}

/**
 * @summary Adds one or more domain names to Alibaba Cloud CDN. You can add a maximum of 50 domain names at a time.
 *
 * @description *   You must activate Alibaba Cloud CDN before you can add a domain name to it. For more information, see [Activate Alibaba Cloud CDN](https://help.aliyun.com/document_detail/27272.html).
 * *   If the acceleration region is Chinese Mainland Only or Global, you must apply for an ICP filing for the domain name.
 * *   You can specify multiple domain names and separate them with commas (,). You can specify at most 50 domain names in each call.
 * *   For more information, see [Add a domain name](https://help.aliyun.com/document_detail/122181.html).
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchAddCdnDomainRequest
 * @return BatchAddCdnDomainResponse
 */
BatchAddCdnDomainResponse Client::batchAddCdnDomain(const BatchAddCdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchAddCdnDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes configurations of multiple accelerated domain names at a time.
 *
 * @description *   You can specify up to 50 domain names in each request.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchDeleteCdnDomainConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteCdnDomainConfigResponse
 */
BatchDeleteCdnDomainConfigResponse Client::batchDeleteCdnDomainConfigWithOptions(const BatchDeleteCdnDomainConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.functionNames();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteCdnDomainConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteCdnDomainConfigResponse>();
}

/**
 * @summary Deletes configurations of multiple accelerated domain names at a time.
 *
 * @description *   You can specify up to 50 domain names in each request.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchDeleteCdnDomainConfigRequest
 * @return BatchDeleteCdnDomainConfigResponse
 */
BatchDeleteCdnDomainConfigResponse Client::batchDeleteCdnDomainConfig(const BatchDeleteCdnDomainConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteCdnDomainConfigWithOptions(request, runtime);
}

/**
 * @summary Queries whether one or more IP addresses are assigned to Alibaba Cloud CDN.
 *
 * @description >The maximum number of times that each user can call this operation per second is 20.
 *
 * @param request BatchDescribeCdnIpInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDescribeCdnIpInfoResponse
 */
BatchDescribeCdnIpInfoResponse Client::batchDescribeCdnIpInfoWithOptions(const BatchDescribeCdnIpInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpAddrList()) {
    query["IpAddrList"] = request.ipAddrList();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDescribeCdnIpInfo"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDescribeCdnIpInfoResponse>();
}

/**
 * @summary Queries whether one or more IP addresses are assigned to Alibaba Cloud CDN.
 *
 * @description >The maximum number of times that each user can call this operation per second is 20.
 *
 * @param request BatchDescribeCdnIpInfoRequest
 * @return BatchDescribeCdnIpInfoResponse
 */
BatchDescribeCdnIpInfoResponse Client::batchDescribeCdnIpInfo(const BatchDescribeCdnIpInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDescribeCdnIpInfoWithOptions(request, runtime);
}

/**
 * @summary Configures multiple accelerated domain names at a time.
 *
 * @description *   You can call this operation up to 30 times per second per account.
 * *   You can specify multiple domain names and must separate them with commas (,). You can specify up to 50 domain names in each call.
 * *   If the BatchSetCdnDomainConfig operation is successful, a unique configuration ID (ConfigId) is generated. You can use configuration IDs to update or delete configurations. For more information, see [Usage notes on ConfigId](https://help.aliyun.com/document_detail/388994.html).
 *
 * @param request BatchSetCdnDomainConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSetCdnDomainConfigResponse
 */
BatchSetCdnDomainConfigResponse Client::batchSetCdnDomainConfigWithOptions(const BatchSetCdnDomainConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasFunctions()) {
    query["Functions"] = request.functions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchSetCdnDomainConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSetCdnDomainConfigResponse>();
}

/**
 * @summary Configures multiple accelerated domain names at a time.
 *
 * @description *   You can call this operation up to 30 times per second per account.
 * *   You can specify multiple domain names and must separate them with commas (,). You can specify up to 50 domain names in each call.
 * *   If the BatchSetCdnDomainConfig operation is successful, a unique configuration ID (ConfigId) is generated. You can use configuration IDs to update or delete configurations. For more information, see [Usage notes on ConfigId](https://help.aliyun.com/document_detail/388994.html).
 *
 * @param request BatchSetCdnDomainConfigRequest
 * @return BatchSetCdnDomainConfigResponse
 */
BatchSetCdnDomainConfigResponse Client::batchSetCdnDomainConfig(const BatchSetCdnDomainConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSetCdnDomainConfigWithOptions(request, runtime);
}

/**
 * @summary 批量配置多个域名的灰度动态功能
 *
 * @param request BatchSetGrayDomainFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSetGrayDomainFunctionResponse
 */
BatchSetGrayDomainFunctionResponse Client::batchSetGrayDomainFunctionWithOptions(const BatchSetGrayDomainFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigs()) {
    body["Configs"] = request.configs();
  }

  if (!!request.hasDomainNames()) {
    body["DomainNames"] = request.domainNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchSetGrayDomainFunction"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSetGrayDomainFunctionResponse>();
}

/**
 * @summary 批量配置多个域名的灰度动态功能
 *
 * @param request BatchSetGrayDomainFunctionRequest
 * @return BatchSetGrayDomainFunctionResponse
 */
BatchSetGrayDomainFunctionResponse Client::batchSetGrayDomainFunction(const BatchSetGrayDomainFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSetGrayDomainFunctionWithOptions(request, runtime);
}

/**
 * @summary Enables one or more domain names at a time. After a domain name is enabled, the value of the DomainStatus parameter is changed to Online.
 *
 * @description *   If a domain name specified in the request is in an invalid state or your account has an overdue payment, the domain name cannot be enabled.
 * *   You can call this operation up to 30 times per second per account.
 * *   You can specify up to 50 domain names in each request.
 *
 * @param request BatchStartCdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStartCdnDomainResponse
 */
BatchStartCdnDomainResponse Client::batchStartCdnDomainWithOptions(const BatchStartCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStartCdnDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStartCdnDomainResponse>();
}

/**
 * @summary Enables one or more domain names at a time. After a domain name is enabled, the value of the DomainStatus parameter is changed to Online.
 *
 * @description *   If a domain name specified in the request is in an invalid state or your account has an overdue payment, the domain name cannot be enabled.
 * *   You can call this operation up to 30 times per second per account.
 * *   You can specify up to 50 domain names in each request.
 *
 * @param request BatchStartCdnDomainRequest
 * @return BatchStartCdnDomainResponse
 */
BatchStartCdnDomainResponse Client::batchStartCdnDomain(const BatchStartCdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStartCdnDomainWithOptions(request, runtime);
}

/**
 * @summary Disables one or more accelerated domain names at a time. After an accelerated domain name is disabled, the value of the DomainStatus parameter is changed to Offline.
 *
 * @description *   After an accelerated domain name is disabled, Alibaba Cloud CDN retains its information and reroutes all the requests that are destined for the accelerated domain name to the origin.
 * *   If you need to temporarily disable CDN acceleration for a domain name, we recommend that you call the StopDomain operation.
 * *   You can call this operation up to 30 times per second per account.
 * *   You can specify up to 50 domain names in each request.
 *
 * @param request BatchStopCdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStopCdnDomainResponse
 */
BatchStopCdnDomainResponse Client::batchStopCdnDomainWithOptions(const BatchStopCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStopCdnDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStopCdnDomainResponse>();
}

/**
 * @summary Disables one or more accelerated domain names at a time. After an accelerated domain name is disabled, the value of the DomainStatus parameter is changed to Offline.
 *
 * @description *   After an accelerated domain name is disabled, Alibaba Cloud CDN retains its information and reroutes all the requests that are destined for the accelerated domain name to the origin.
 * *   If you need to temporarily disable CDN acceleration for a domain name, we recommend that you call the StopDomain operation.
 * *   You can call this operation up to 30 times per second per account.
 * *   You can specify up to 50 domain names in each request.
 *
 * @param request BatchStopCdnDomainRequest
 * @return BatchStopCdnDomainResponse
 */
BatchStopCdnDomainResponse Client::batchStopCdnDomain(const BatchStopCdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStopCdnDomainWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of multiple accelerated domain names at a time.
 *
 * @description *   You can call this operation up to 30 times per second per account.
 * *   You can specify up to 50 domain names in each request. Separate multiple domain names with commas (,).
 *
 * @param request BatchUpdateCdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdateCdnDomainResponse
 */
BatchUpdateCdnDomainResponse Client::batchUpdateCdnDomainWithOptions(const BatchUpdateCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.sources();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.topLevelDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchUpdateCdnDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdateCdnDomainResponse>();
}

/**
 * @summary Updates the configurations of multiple accelerated domain names at a time.
 *
 * @description *   You can call this operation up to 30 times per second per account.
 * *   You can specify up to 50 domain names in each request. Separate multiple domain names with commas (,).
 *
 * @param request BatchUpdateCdnDomainRequest
 * @return BatchUpdateCdnDomainResponse
 */
BatchUpdateCdnDomainResponse Client::batchUpdateCdnDomain(const BatchUpdateCdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUpdateCdnDomainWithOptions(request, runtime);
}

/**
 * @summary Checks whether a domain name exists.
 *
 * @param request CheckCdnDomainExistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCdnDomainExistResponse
 */
CheckCdnDomainExistResponse Client::checkCdnDomainExistWithOptions(const CheckCdnDomainExistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCdnDomainExist"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCdnDomainExistResponse>();
}

/**
 * @summary Checks whether a domain name exists.
 *
 * @param request CheckCdnDomainExistRequest
 * @return CheckCdnDomainExistResponse
 */
CheckCdnDomainExistResponse Client::checkCdnDomainExist(const CheckCdnDomainExistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCdnDomainExistWithOptions(request, runtime);
}

/**
 * @summary Checks whether an ICP filing is obtained for the domain name.
 *
 * @param request CheckCdnDomainICPRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCdnDomainICPResponse
 */
CheckCdnDomainICPResponse Client::checkCdnDomainICPWithOptions(const CheckCdnDomainICPRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCdnDomainICP"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCdnDomainICPResponse>();
}

/**
 * @summary Checks whether an ICP filing is obtained for the domain name.
 *
 * @param request CheckCdnDomainICPRequest
 * @return CheckCdnDomainICPResponse
 */
CheckCdnDomainICPResponse Client::checkCdnDomainICP(const CheckCdnDomainICPRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCdnDomainICPWithOptions(request, runtime);
}

/**
 * @summary Creates a certificate signing request (CSR).
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request CreateCdnCertificateSigningRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCdnCertificateSigningRequestResponse
 */
CreateCdnCertificateSigningRequestResponse Client::createCdnCertificateSigningRequestWithOptions(const CreateCdnCertificateSigningRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCity()) {
    query["City"] = request.city();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.commonName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.organization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.organizationUnit();
  }

  if (!!request.hasSANs()) {
    query["SANs"] = request.SANs();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCdnCertificateSigningRequest"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCdnCertificateSigningRequestResponse>();
}

/**
 * @summary Creates a certificate signing request (CSR).
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request CreateCdnCertificateSigningRequestRequest
 * @return CreateCdnCertificateSigningRequestResponse
 */
CreateCdnCertificateSigningRequestResponse Client::createCdnCertificateSigningRequest(const CreateCdnCertificateSigningRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCdnCertificateSigningRequestWithOptions(request, runtime);
}

/**
 * @summary Creates a tracking task. After you create a tracking task, the system sends operations reports to you by email on a regular basis.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request CreateCdnDeliverTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCdnDeliverTaskResponse
 */
CreateCdnDeliverTaskResponse Client::createCdnDeliverTaskWithOptions(const CreateCdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeliver()) {
    body["Deliver"] = request.deliver();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasReports()) {
    body["Reports"] = request.reports();
  }

  if (!!request.hasSchedule()) {
    body["Schedule"] = request.schedule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateCdnDeliverTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCdnDeliverTaskResponse>();
}

/**
 * @summary Creates a tracking task. After you create a tracking task, the system sends operations reports to you by email on a regular basis.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request CreateCdnDeliverTaskRequest
 * @return CreateCdnDeliverTaskResponse
 */
CreateCdnDeliverTaskResponse Client::createCdnDeliverTask(const CreateCdnDeliverTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCdnDeliverTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a custom operations report.
 *
 * @description *   This operation allows you to create a custom operations report for a specific domain name. You can view the statistics about the domain name in the report.
 * *   You can call this operation up to three times per second per account.
 *
 * @param request CreateCdnSubTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCdnSubTaskResponse
 */
CreateCdnSubTaskResponse Client::createCdnSubTaskWithOptions(const CreateCdnSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  if (!!request.hasReportIds()) {
    body["ReportIds"] = request.reportIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateCdnSubTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCdnSubTaskResponse>();
}

/**
 * @summary Creates a custom operations report.
 *
 * @description *   This operation allows you to create a custom operations report for a specific domain name. You can view the statistics about the domain name in the report.
 * *   You can call this operation up to three times per second per account.
 *
 * @param request CreateCdnSubTaskRequest
 * @return CreateCdnSubTaskResponse
 */
CreateCdnSubTaskResponse Client::createCdnSubTask(const CreateCdnSubTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCdnSubTaskWithOptions(request, runtime);
}

/**
 * @summary Enables real-time log delivery for specific accelerated domain names.
 *
 * @description >  You can call this API operation up to 100 times per second per account.
 *
 * @param request CreateRealTimeLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRealTimeLogDeliveryResponse
 */
CreateRealTimeLogDeliveryResponse Client::createRealTimeLogDeliveryWithOptions(const CreateRealTimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRealTimeLogDelivery"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRealTimeLogDeliveryResponse>();
}

/**
 * @summary Enables real-time log delivery for specific accelerated domain names.
 *
 * @description >  You can call this API operation up to 100 times per second per account.
 *
 * @param request CreateRealTimeLogDeliveryRequest
 * @return CreateRealTimeLogDeliveryResponse
 */
CreateRealTimeLogDeliveryResponse Client::createRealTimeLogDelivery(const CreateRealTimeLogDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRealTimeLogDeliveryWithOptions(request, runtime);
}

/**
 * @summary Creates a task to export resource usage details to an Excel file.
 *
 * @description *   You can create a task to query data in the last year. The maximum time range that can be queried is one month.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request CreateUsageDetailDataExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUsageDetailDataExportTaskResponse
 */
CreateUsageDetailDataExportTaskResponse Client::createUsageDetailDataExportTaskWithOptions(const CreateUsageDetailDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.group();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUsageDetailDataExportTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUsageDetailDataExportTaskResponse>();
}

/**
 * @summary Creates a task to export resource usage details to an Excel file.
 *
 * @description *   You can create a task to query data in the last year. The maximum time range that can be queried is one month.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request CreateUsageDetailDataExportTaskRequest
 * @return CreateUsageDetailDataExportTaskResponse
 */
CreateUsageDetailDataExportTaskResponse Client::createUsageDetailDataExportTask(const CreateUsageDetailDataExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUsageDetailDataExportTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a task to export your resource usage history to a PDF file.
 *
 * @description *   You can create a task to query data in the last year. The maximum time range that can be queried is one month.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request CreateUserUsageDataExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserUsageDataExportTaskResponse
 */
CreateUserUsageDataExportTaskResponse Client::createUserUsageDataExportTaskWithOptions(const CreateUserUsageDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUserUsageDataExportTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserUsageDataExportTaskResponse>();
}

/**
 * @summary Creates a task to export your resource usage history to a PDF file.
 *
 * @description *   You can create a task to query data in the last year. The maximum time range that can be queried is one month.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request CreateUserUsageDataExportTaskRequest
 * @return CreateUserUsageDataExportTaskResponse
 */
CreateUserUsageDataExportTaskResponse Client::createUserUsageDataExportTask(const CreateUserUsageDataExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserUsageDataExportTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes tracking tasks by task ID.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request DeleteCdnDeliverTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCdnDeliverTaskResponse
 */
DeleteCdnDeliverTaskResponse Client::deleteCdnDeliverTaskWithOptions(const DeleteCdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliverId()) {
    query["DeliverId"] = request.deliverId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCdnDeliverTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCdnDeliverTaskResponse>();
}

/**
 * @summary Deletes tracking tasks by task ID.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request DeleteCdnDeliverTaskRequest
 * @return DeleteCdnDeliverTaskResponse
 */
DeleteCdnDeliverTaskResponse Client::deleteCdnDeliverTask(const DeleteCdnDeliverTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCdnDeliverTaskWithOptions(request, runtime);
}

/**
 * @summary Removes an accelerated domain name from Alibaba Cloud CDN.
 *
 * @description *   We recommend that you add an A record for the domain name in the system of your DNS service provider before you remove the domain name from Alibaba Cloud CDN. Otherwise, the domain name may become inaccessible. Proceed with caution.
 * *   After you successfully call the DeleteCdnDomain operation, all records of the removed domain name are deleted. If you need to only disable the domain name, we recommend that you call the StopCdnDomain operation.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DeleteCdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCdnDomainResponse
 */
DeleteCdnDomainResponse Client::deleteCdnDomainWithOptions(const DeleteCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCdnDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCdnDomainResponse>();
}

/**
 * @summary Removes an accelerated domain name from Alibaba Cloud CDN.
 *
 * @description *   We recommend that you add an A record for the domain name in the system of your DNS service provider before you remove the domain name from Alibaba Cloud CDN. Otherwise, the domain name may become inaccessible. Proceed with caution.
 * *   After you successfully call the DeleteCdnDomain operation, all records of the removed domain name are deleted. If you need to only disable the domain name, we recommend that you call the StopCdnDomain operation.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DeleteCdnDomainRequest
 * @return DeleteCdnDomainResponse
 */
DeleteCdnDomainResponse Client::deleteCdnDomain(const DeleteCdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCdnDomainWithOptions(request, runtime);
}

/**
 * @summary The ID of the request.
 *
 * @description >  You can call this API operation up to three times per second per account.
 *
 * @param request DeleteCdnSubTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCdnSubTaskResponse
 */
DeleteCdnSubTaskResponse Client::deleteCdnSubTaskWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DeleteCdnSubTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCdnSubTaskResponse>();
}

/**
 * @summary The ID of the request.
 *
 * @description >  You can call this API operation up to three times per second per account.
 *
 * @return DeleteCdnSubTaskResponse
 */
DeleteCdnSubTaskResponse Client::deleteCdnSubTask() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCdnSubTaskWithOptions(runtime);
}

/**
 * @summary A客户定制实时日志删除接口
 *
 * @param request DeleteCustomDomainSampleRateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomDomainSampleRateResponse
 */
DeleteCustomDomainSampleRateResponse Client::deleteCustomDomainSampleRateWithOptions(const DeleteCustomDomainSampleRateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDomainNames()) {
    body["DomainNames"] = request.domainNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCustomDomainSampleRate"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomDomainSampleRateResponse>();
}

/**
 * @summary A客户定制实时日志删除接口
 *
 * @param request DeleteCustomDomainSampleRateRequest
 * @return DeleteCustomDomainSampleRateResponse
 */
DeleteCustomDomainSampleRateResponse Client::deleteCustomDomainSampleRate(const DeleteCustomDomainSampleRateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomDomainSampleRateWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified Function Compute trigger.
 *
 * @param request DeleteFCTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFCTriggerResponse
 */
DeleteFCTriggerResponse Client::deleteFCTriggerWithOptions(const DeleteFCTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTriggerARN()) {
    query["TriggerARN"] = request.triggerARN();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFCTrigger"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFCTriggerResponse>();
}

/**
 * @summary Deletes a specified Function Compute trigger.
 *
 * @param request DeleteFCTriggerRequest
 * @return DeleteFCTriggerResponse
 */
DeleteFCTriggerResponse Client::deleteFCTrigger(const DeleteFCTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFCTriggerWithOptions(request, runtime);
}

/**
 * @summary Deletes the Logstore that is used by a specified configuration record of real-time log delivery.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteRealTimeLogLogstoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRealTimeLogLogstoreResponse
 */
DeleteRealTimeLogLogstoreResponse Client::deleteRealTimeLogLogstoreWithOptions(const DeleteRealTimeLogLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRealTimeLogLogstore"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRealTimeLogLogstoreResponse>();
}

/**
 * @summary Deletes the Logstore that is used by a specified configuration record of real-time log delivery.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteRealTimeLogLogstoreRequest
 * @return DeleteRealTimeLogLogstoreResponse
 */
DeleteRealTimeLogLogstoreResponse Client::deleteRealTimeLogLogstore(const DeleteRealTimeLogLogstoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRealTimeLogLogstoreWithOptions(request, runtime);
}

/**
 * @summary Deletes the configurations of real-time log delivery for specific accelerated domain names.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteRealtimeLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRealtimeLogDeliveryResponse
 */
DeleteRealtimeLogDeliveryResponse Client::deleteRealtimeLogDeliveryWithOptions(const DeleteRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRealtimeLogDelivery"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRealtimeLogDeliveryResponse>();
}

/**
 * @summary Deletes the configurations of real-time log delivery for specific accelerated domain names.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteRealtimeLogDeliveryRequest
 * @return DeleteRealtimeLogDeliveryResponse
 */
DeleteRealtimeLogDeliveryResponse Client::deleteRealtimeLogDelivery(const DeleteRealtimeLogDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRealtimeLogDeliveryWithOptions(request, runtime);
}

/**
 * @summary Deletes specified configurations of an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DeleteSpecificConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSpecificConfigResponse
 */
DeleteSpecificConfigResponse Client::deleteSpecificConfigWithOptions(const DeleteSpecificConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSpecificConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSpecificConfigResponse>();
}

/**
 * @summary Deletes specified configurations of an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DeleteSpecificConfigRequest
 * @return DeleteSpecificConfigResponse
 */
DeleteSpecificConfigResponse Client::deleteSpecificConfig(const DeleteSpecificConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSpecificConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified configuration of the staging environment.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DeleteSpecificStagingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSpecificStagingConfigResponse
 */
DeleteSpecificStagingConfigResponse Client::deleteSpecificStagingConfigWithOptions(const DeleteSpecificStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSpecificStagingConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSpecificStagingConfigResponse>();
}

/**
 * @summary Deletes a specified configuration of the staging environment.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DeleteSpecificStagingConfigRequest
 * @return DeleteSpecificStagingConfigResponse
 */
DeleteSpecificStagingConfigResponse Client::deleteSpecificStagingConfig(const DeleteSpecificStagingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSpecificStagingConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes a task that was used to export usage details.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteUsageDetailDataExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUsageDetailDataExportTaskResponse
 */
DeleteUsageDetailDataExportTaskResponse Client::deleteUsageDetailDataExportTaskWithOptions(const DeleteUsageDetailDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUsageDetailDataExportTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUsageDetailDataExportTaskResponse>();
}

/**
 * @summary Deletes a task that was used to export usage details.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteUsageDetailDataExportTaskRequest
 * @return DeleteUsageDetailDataExportTaskResponse
 */
DeleteUsageDetailDataExportTaskResponse Client::deleteUsageDetailDataExportTask(const DeleteUsageDetailDataExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUsageDetailDataExportTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a task that was used to export usage history.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteUserUsageDataExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserUsageDataExportTaskResponse
 */
DeleteUserUsageDataExportTaskResponse Client::deleteUserUsageDataExportTaskWithOptions(const DeleteUserUsageDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserUsageDataExportTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserUsageDataExportTaskResponse>();
}

/**
 * @summary Deletes a task that was used to export usage history.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteUserUsageDataExportTaskRequest
 * @return DeleteUserUsageDataExportTaskResponse
 */
DeleteUserUsageDataExportTaskResponse Client::deleteUserUsageDataExportTask(const DeleteUserUsageDataExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserUsageDataExportTaskWithOptions(request, runtime);
}

/**
 * @summary Queries countries and regions that can be added to the blacklist.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeBlockedRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBlockedRegionsResponse
 */
DescribeBlockedRegionsResponse Client::describeBlockedRegionsWithOptions(const DescribeBlockedRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBlockedRegions"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBlockedRegionsResponse>();
}

/**
 * @summary Queries countries and regions that can be added to the blacklist.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeBlockedRegionsRequest
 * @return DescribeBlockedRegionsResponse
 */
DescribeBlockedRegionsResponse Client::describeBlockedRegions(const DescribeBlockedRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBlockedRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about an SSL certificate.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeCdnCertificateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnCertificateDetailResponse
 */
DescribeCdnCertificateDetailResponse Client::describeCdnCertificateDetailWithOptions(const DescribeCdnCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertName()) {
    query["CertName"] = request.certName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnCertificateDetail"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnCertificateDetailResponse>();
}

/**
 * @summary Queries the detailed information about an SSL certificate.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeCdnCertificateDetailRequest
 * @return DescribeCdnCertificateDetailResponse
 */
DescribeCdnCertificateDetailResponse Client::describeCdnCertificateDetail(const DescribeCdnCertificateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnCertificateDetailWithOptions(request, runtime);
}

/**
 * @summary Queries certificate details by certificate ID.
 *
 * @param request DescribeCdnCertificateDetailByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnCertificateDetailByIdResponse
 */
DescribeCdnCertificateDetailByIdResponse Client::describeCdnCertificateDetailByIdWithOptions(const DescribeCdnCertificateDetailByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.certId();
  }

  if (!!request.hasCertRegion()) {
    query["CertRegion"] = request.certRegion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnCertificateDetailById"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnCertificateDetailByIdResponse>();
}

/**
 * @summary Queries certificate details by certificate ID.
 *
 * @param request DescribeCdnCertificateDetailByIdRequest
 * @return DescribeCdnCertificateDetailByIdResponse
 */
DescribeCdnCertificateDetailByIdResponse Client::describeCdnCertificateDetailById(const DescribeCdnCertificateDetailByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnCertificateDetailByIdWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeCdnCertificateList is deprecated, please use Cdn::2018-05-10::DescribeCdnSSLCertificateList instead.
 *
 * @summary Queries the certificates of accelerated domain names.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnCertificateListResponse
 */
DescribeCdnCertificateListResponse Client::describeCdnCertificateListWithOptions(const DescribeCdnCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnCertificateList"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnCertificateListResponse>();
}

/**
 * @deprecated OpenAPI DescribeCdnCertificateList is deprecated, please use Cdn::2018-05-10::DescribeCdnSSLCertificateList instead.
 *
 * @summary Queries the certificates of accelerated domain names.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnCertificateListRequest
 * @return DescribeCdnCertificateListResponse
 */
DescribeCdnCertificateListResponse Client::describeCdnCertificateList(const DescribeCdnCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnCertificateListWithOptions(request, runtime);
}

/**
 * @summary Queries the Internet service provider (ISP), region, and country that are required for advanced conditions.
 *
 * @param request DescribeCdnConditionIPBInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnConditionIPBInfoResponse
 */
DescribeCdnConditionIPBInfoResponse Client::describeCdnConditionIPBInfoWithOptions(const DescribeCdnConditionIPBInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataId()) {
    query["DataId"] = request.dataId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnConditionIPBInfo"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnConditionIPBInfoResponse>();
}

/**
 * @summary Queries the Internet service provider (ISP), region, and country that are required for advanced conditions.
 *
 * @param request DescribeCdnConditionIPBInfoRequest
 * @return DescribeCdnConditionIPBInfoResponse
 */
DescribeCdnConditionIPBInfoResponse Client::describeCdnConditionIPBInfo(const DescribeCdnConditionIPBInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnConditionIPBInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the domain names that are deleted from your account.
 *
 * @description > You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeCdnDeletedDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnDeletedDomainsResponse
 */
DescribeCdnDeletedDomainsResponse Client::describeCdnDeletedDomainsWithOptions(const DescribeCdnDeletedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnDeletedDomains"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnDeletedDomainsResponse>();
}

/**
 * @summary Queries the domain names that are deleted from your account.
 *
 * @description > You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeCdnDeletedDomainsRequest
 * @return DescribeCdnDeletedDomainsResponse
 */
DescribeCdnDeletedDomainsResponse Client::describeCdnDeletedDomains(const DescribeCdnDeletedDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnDeletedDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries one or more tracking tasks of operations reports.
 *
 * @description > You can call this operation up to 3 times per second per account.
 *
 * @param request DescribeCdnDeliverListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnDeliverListResponse
 */
DescribeCdnDeliverListResponse Client::describeCdnDeliverListWithOptions(const DescribeCdnDeliverListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliverId()) {
    query["DeliverId"] = request.deliverId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnDeliverList"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnDeliverListResponse>();
}

/**
 * @summary Queries one or more tracking tasks of operations reports.
 *
 * @description > You can call this operation up to 3 times per second per account.
 *
 * @param request DescribeCdnDeliverListRequest
 * @return DescribeCdnDeliverListResponse
 */
DescribeCdnDeliverListResponse Client::describeCdnDeliverList(const DescribeCdnDeliverListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnDeliverListWithOptions(request, runtime);
}

/**
 * @summary 天翼定制化小时日志下载接口
 *
 * @param request DescribeCdnDomainAtoaLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnDomainAtoaLogsResponse
 */
DescribeCdnDomainAtoaLogsResponse Client::describeCdnDomainAtoaLogsWithOptions(const DescribeCdnDomainAtoaLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnDomainAtoaLogs"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnDomainAtoaLogsResponse>();
}

/**
 * @summary 天翼定制化小时日志下载接口
 *
 * @param request DescribeCdnDomainAtoaLogsRequest
 * @return DescribeCdnDomainAtoaLogsResponse
 */
DescribeCdnDomainAtoaLogsResponse Client::describeCdnDomainAtoaLogs(const DescribeCdnDomainAtoaLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnDomainAtoaLogsWithOptions(request, runtime);
}

/**
 * @summary Queries accelerated domain names by SSL certificate.
 *
 * @description >  You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCdnDomainByCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnDomainByCertificateResponse
 */
DescribeCdnDomainByCertificateResponse Client::describeCdnDomainByCertificateWithOptions(const DescribeCdnDomainByCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExact()) {
    query["Exact"] = request.exact();
  }

  if (!!request.hasSSLPub()) {
    query["SSLPub"] = request.SSLPub();
  }

  if (!!request.hasSSLStatus()) {
    query["SSLStatus"] = request.SSLStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnDomainByCertificate"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnDomainByCertificateResponse>();
}

/**
 * @summary Queries accelerated domain names by SSL certificate.
 *
 * @description >  You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCdnDomainByCertificateRequest
 * @return DescribeCdnDomainByCertificateResponse
 */
DescribeCdnDomainByCertificateResponse Client::describeCdnDomainByCertificate(const DescribeCdnDomainByCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnDomainByCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of an accelerated domain name. You can query the configurations of one or more features at the same time.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCdnDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnDomainConfigsResponse
 */
DescribeCdnDomainConfigsResponse Client::describeCdnDomainConfigsWithOptions(const DescribeCdnDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.functionNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnDomainConfigs"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnDomainConfigsResponse>();
}

/**
 * @summary Queries the configurations of an accelerated domain name. You can query the configurations of one or more features at the same time.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCdnDomainConfigsRequest
 * @return DescribeCdnDomainConfigsResponse
 */
DescribeCdnDomainConfigsResponse Client::describeCdnDomainConfigs(const DescribeCdnDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information about an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnDomainDetailResponse
 */
DescribeCdnDomainDetailResponse Client::describeCdnDomainDetailWithOptions(const DescribeCdnDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnDomainDetail"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnDomainDetailResponse>();
}

/**
 * @summary Queries the basic information about an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnDomainDetailRequest
 * @return DescribeCdnDomainDetailResponse
 */
DescribeCdnDomainDetailResponse Client::describeCdnDomainDetail(const DescribeCdnDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnDomainDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the address where you can download the log data of a specific domain name.
 *
 * @description *   If you do not set **StartTime** or **EndTime**, the request returns the data collected in the last 24 hours. If you set both **StartTime** and **EndTime**, the request returns the data collected within the specified time range.
 * *   The log data is collected every hour.
 * *   You can call this operation up to 100 times per second per account.
 * *   You can query only logs in the last month. The start time and the current time cannot exceed 31 days.
 *
 * @param request DescribeCdnDomainLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnDomainLogsResponse
 */
DescribeCdnDomainLogsResponse Client::describeCdnDomainLogsWithOptions(const DescribeCdnDomainLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnDomainLogs"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnDomainLogsResponse>();
}

/**
 * @summary Queries the address where you can download the log data of a specific domain name.
 *
 * @description *   If you do not set **StartTime** or **EndTime**, the request returns the data collected in the last 24 hours. If you set both **StartTime** and **EndTime**, the request returns the data collected within the specified time range.
 * *   The log data is collected every hour.
 * *   You can call this operation up to 100 times per second per account.
 * *   You can query only logs in the last month. The start time and the current time cannot exceed 31 days.
 *
 * @param request DescribeCdnDomainLogsRequest
 * @return DescribeCdnDomainLogsResponse
 */
DescribeCdnDomainLogsResponse Client::describeCdnDomainLogs(const DescribeCdnDomainLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnDomainLogsWithOptions(request, runtime);
}

/**
 * @summary 查询离线日志下载地址
 *
 * @param request DescribeCdnDomainLogsExTtlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnDomainLogsExTtlResponse
 */
DescribeCdnDomainLogsExTtlResponse Client::describeCdnDomainLogsExTtlWithOptions(const DescribeCdnDomainLogsExTtlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnDomainLogsExTtl"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnDomainLogsExTtlResponse>();
}

/**
 * @summary 查询离线日志下载地址
 *
 * @param request DescribeCdnDomainLogsExTtlRequest
 * @return DescribeCdnDomainLogsExTtlResponse
 */
DescribeCdnDomainLogsExTtlResponse Client::describeCdnDomainLogsExTtl(const DescribeCdnDomainLogsExTtlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnDomainLogsExTtlWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of features in the staging environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnDomainStagingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnDomainStagingConfigResponse
 */
DescribeCdnDomainStagingConfigResponse Client::describeCdnDomainStagingConfigWithOptions(const DescribeCdnDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.functionNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnDomainStagingConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnDomainStagingConfigResponse>();
}

/**
 * @summary Queries the configurations of features in the staging environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnDomainStagingConfigRequest
 * @return DescribeCdnDomainStagingConfigResponse
 */
DescribeCdnDomainStagingConfigResponse Client::describeCdnDomainStagingConfig(const DescribeCdnDomainStagingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnDomainStagingConfigWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeCdnFullDomainsBlockIPConfig operation to query the configurations of full blocking.
 *
 * @description > 
 * *   To use this operation,[submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
 * *   If you specify IP addresses or CIDR blocks, IP addresses that are effective and the corresponding expiration time are returned. If you do not specify IP addresses or CIDR blocks, all effective IP addresses and the corresponding expiration time are returned.
 * *   The results are written to OSS and returned as OSS URLs. The content in OSS objects is in the format of IP address-Corresponding expiration time. The expiration time is in the YYYY-MM-DD hh:mm:ss format.
 * *   You can share OSS URLs with others. The shared URLs are valid for three days.
 *
 * @param request DescribeCdnFullDomainsBlockIPConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnFullDomainsBlockIPConfigResponse
 */
DescribeCdnFullDomainsBlockIPConfigResponse Client::describeCdnFullDomainsBlockIPConfigWithOptions(const DescribeCdnFullDomainsBlockIPConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIPList()) {
    body["IPList"] = request.IPList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeCdnFullDomainsBlockIPConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnFullDomainsBlockIPConfigResponse>();
}

/**
 * @summary You can call the DescribeCdnFullDomainsBlockIPConfig operation to query the configurations of full blocking.
 *
 * @description > 
 * *   To use this operation,[submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
 * *   If you specify IP addresses or CIDR blocks, IP addresses that are effective and the corresponding expiration time are returned. If you do not specify IP addresses or CIDR blocks, all effective IP addresses and the corresponding expiration time are returned.
 * *   The results are written to OSS and returned as OSS URLs. The content in OSS objects is in the format of IP address-Corresponding expiration time. The expiration time is in the YYYY-MM-DD hh:mm:ss format.
 * *   You can share OSS URLs with others. The shared URLs are valid for three days.
 *
 * @param request DescribeCdnFullDomainsBlockIPConfigRequest
 * @return DescribeCdnFullDomainsBlockIPConfigResponse
 */
DescribeCdnFullDomainsBlockIPConfigResponse Client::describeCdnFullDomainsBlockIPConfig(const DescribeCdnFullDomainsBlockIPConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnFullDomainsBlockIPConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the blocking history.
 *
 * @description > 
 * *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
 * *   For a specified IP addresses and time range, the time when the IP address was delivered to the edge and the corresponding result are returned.
 * *   If a specified IP address or CIDR block has multiple blocking records in a specified time range, the records are sorted by delivery time in descending order.
 * *   The maximum time range to query is 90 days.
 * *   If no blocking record exists or delivery fails for the given IP address and time range, the delivery time is empty.
 *
 * @param request DescribeCdnFullDomainsBlockIPHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnFullDomainsBlockIPHistoryResponse
 */
DescribeCdnFullDomainsBlockIPHistoryResponse Client::describeCdnFullDomainsBlockIPHistoryWithOptions(const DescribeCdnFullDomainsBlockIPHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasIPList()) {
    body["IPList"] = request.IPList();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeCdnFullDomainsBlockIPHistory"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnFullDomainsBlockIPHistoryResponse>();
}

/**
 * @summary Queries the blocking history.
 *
 * @description > 
 * *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
 * *   For a specified IP addresses and time range, the time when the IP address was delivered to the edge and the corresponding result are returned.
 * *   If a specified IP address or CIDR block has multiple blocking records in a specified time range, the records are sorted by delivery time in descending order.
 * *   The maximum time range to query is 90 days.
 * *   If no blocking record exists or delivery fails for the given IP address and time range, the delivery time is empty.
 *
 * @param request DescribeCdnFullDomainsBlockIPHistoryRequest
 * @return DescribeCdnFullDomainsBlockIPHistoryResponse
 */
DescribeCdnFullDomainsBlockIPHistoryResponse Client::describeCdnFullDomainsBlockIPHistory(const DescribeCdnFullDomainsBlockIPHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnFullDomainsBlockIPHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the information about SSL certificates that belong to your Alibaba Cloud account.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCdnHttpsDomainListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnHttpsDomainListResponse
 */
DescribeCdnHttpsDomainListResponse Client::describeCdnHttpsDomainListWithOptions(const DescribeCdnHttpsDomainListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnHttpsDomainList"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnHttpsDomainListResponse>();
}

/**
 * @summary Queries the information about SSL certificates that belong to your Alibaba Cloud account.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCdnHttpsDomainListRequest
 * @return DescribeCdnHttpsDomainListResponse
 */
DescribeCdnHttpsDomainListResponse Client::describeCdnHttpsDomainList(const DescribeCdnHttpsDomainListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnHttpsDomainListWithOptions(request, runtime);
}

/**
 * @summary Queries the code of a commodity by account UID.
 *
 * @param request DescribeCdnOrderCommodityCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnOrderCommodityCodeResponse
 */
DescribeCdnOrderCommodityCodeResponse Client::describeCdnOrderCommodityCodeWithOptions(const DescribeCdnOrderCommodityCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.commodityCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnOrderCommodityCode"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnOrderCommodityCodeResponse>();
}

/**
 * @summary Queries the code of a commodity by account UID.
 *
 * @param request DescribeCdnOrderCommodityCodeRequest
 * @return DescribeCdnOrderCommodityCodeResponse
 */
DescribeCdnOrderCommodityCodeResponse Client::describeCdnOrderCommodityCode(const DescribeCdnOrderCommodityCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnOrderCommodityCodeWithOptions(request, runtime);
}

/**
 * @summary Queries Internet service providers (ISPs) and regions that are supported by Alibaba Cloud CDN.
 *
 * @description *   The lists of ISPs and regions that are supported by Alibaba Cloud CDN are updated and published on the Alibaba Cloud International site.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnRegionAndIspRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnRegionAndIspResponse
 */
DescribeCdnRegionAndIspResponse Client::describeCdnRegionAndIspWithOptions(const DescribeCdnRegionAndIspRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnRegionAndIsp"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnRegionAndIspResponse>();
}

/**
 * @summary Queries Internet service providers (ISPs) and regions that are supported by Alibaba Cloud CDN.
 *
 * @description *   The lists of ISPs and regions that are supported by Alibaba Cloud CDN are updated and published on the Alibaba Cloud International site.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnRegionAndIspRequest
 * @return DescribeCdnRegionAndIspResponse
 */
DescribeCdnRegionAndIspResponse Client::describeCdnRegionAndIsp(const DescribeCdnRegionAndIspRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnRegionAndIspWithOptions(request, runtime);
}

/**
 * @summary Queries the content of an operations report.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request DescribeCdnReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnReportResponse
 */
DescribeCdnReportResponse Client::describeCdnReportWithOptions(const DescribeCdnReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.area();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasHttpCode()) {
    query["HttpCode"] = request.httpCode();
  }

  if (!!request.hasIsOverseas()) {
    query["IsOverseas"] = request.isOverseas();
  }

  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnReport"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnReportResponse>();
}

/**
 * @summary Queries the content of an operations report.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request DescribeCdnReportRequest
 * @return DescribeCdnReportResponse
 */
DescribeCdnReportResponse Client::describeCdnReport(const DescribeCdnReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnReportWithOptions(request, runtime);
}

/**
 * @summary Queries operations reports.
 *
 * @description *   This operation queries the metadata of all operations reports. The statistics in the reports are not returned.
 * *   You can call this operation up to three times per second per account.
 *
 * @param request DescribeCdnReportListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnReportListResponse
 */
DescribeCdnReportListResponse Client::describeCdnReportListWithOptions(const DescribeCdnReportListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnReportList"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnReportListResponse>();
}

/**
 * @summary Queries operations reports.
 *
 * @description *   This operation queries the metadata of all operations reports. The statistics in the reports are not returned.
 * *   You can call this operation up to three times per second per account.
 *
 * @param request DescribeCdnReportListRequest
 * @return DescribeCdnReportListResponse
 */
DescribeCdnReportListResponse Client::describeCdnReportList(const DescribeCdnReportListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnReportListWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a ShangMi (SM) certificate.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeCdnSMCertificateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnSMCertificateDetailResponse
 */
DescribeCdnSMCertificateDetailResponse Client::describeCdnSMCertificateDetailWithOptions(const DescribeCdnSMCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.certIdentifier();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnSMCertificateDetail"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnSMCertificateDetailResponse>();
}

/**
 * @summary Queries the details about a ShangMi (SM) certificate.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeCdnSMCertificateDetailRequest
 * @return DescribeCdnSMCertificateDetailResponse
 */
DescribeCdnSMCertificateDetailResponse Client::describeCdnSMCertificateDetail(const DescribeCdnSMCertificateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnSMCertificateDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the ShangMi (SM) certificates of an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnSMCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnSMCertificateListResponse
 */
DescribeCdnSMCertificateListResponse Client::describeCdnSMCertificateListWithOptions(const DescribeCdnSMCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnSMCertificateList"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnSMCertificateListResponse>();
}

/**
 * @summary Queries the ShangMi (SM) certificates of an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnSMCertificateListRequest
 * @return DescribeCdnSMCertificateListResponse
 */
DescribeCdnSMCertificateListResponse Client::describeCdnSMCertificateList(const DescribeCdnSMCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnSMCertificateListWithOptions(request, runtime);
}

/**
 * @summary Queries the certificate list by domain name.
 *
 * @param request DescribeCdnSSLCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnSSLCertificateListResponse
 */
DescribeCdnSSLCertificateListResponse Client::describeCdnSSLCertificateListWithOptions(const DescribeCdnSSLCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchKeyword()) {
    query["SearchKeyword"] = request.searchKeyword();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnSSLCertificateList"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnSSLCertificateListResponse>();
}

/**
 * @summary Queries the certificate list by domain name.
 *
 * @param request DescribeCdnSSLCertificateListRequest
 * @return DescribeCdnSSLCertificateListResponse
 */
DescribeCdnSSLCertificateListResponse Client::describeCdnSSLCertificateList(const DescribeCdnSSLCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnSSLCertificateListWithOptions(request, runtime);
}

/**
 * @summary Queries information about security features of Alibaba Cloud CDN.
 *
 * @param request DescribeCdnSecFuncInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnSecFuncInfoResponse
 */
DescribeCdnSecFuncInfoResponse Client::describeCdnSecFuncInfoWithOptions(const DescribeCdnSecFuncInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSecFuncType()) {
    query["SecFuncType"] = request.secFuncType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnSecFuncInfo"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnSecFuncInfoResponse>();
}

/**
 * @summary Queries information about security features of Alibaba Cloud CDN.
 *
 * @param request DescribeCdnSecFuncInfoRequest
 * @return DescribeCdnSecFuncInfoResponse
 */
DescribeCdnSecFuncInfoResponse Client::describeCdnSecFuncInfo(const DescribeCdnSecFuncInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnSecFuncInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the status of your Alibaba Cloud CDN service. The information includes the service activation time, the current service status, the current metering method, and the metering method for the next cycle.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnServiceResponse
 */
DescribeCdnServiceResponse Client::describeCdnServiceWithOptions(const DescribeCdnServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnService"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnServiceResponse>();
}

/**
 * @summary Queries the status of your Alibaba Cloud CDN service. The information includes the service activation time, the current service status, the current metering method, and the metering method for the next cycle.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnServiceRequest
 * @return DescribeCdnServiceResponse
 */
DescribeCdnServiceResponse Client::describeCdnService(const DescribeCdnServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the tracking tasks that you have created.
 *
 * @description *   By default, this operation queries all custom operations reports. However, only one operations report can be displayed. Therefore, only one operations report is returned.
 * *   You can call this operation up to three times per second per account.
 *
 * @param request DescribeCdnSubListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnSubListResponse
 */
DescribeCdnSubListResponse Client::describeCdnSubListWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeCdnSubList"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnSubListResponse>();
}

/**
 * @summary Queries the tracking tasks that you have created.
 *
 * @description *   By default, this operation queries all custom operations reports. However, only one operations report can be displayed. Therefore, only one operations report is returned.
 * *   You can call this operation up to three times per second per account.
 *
 * @return DescribeCdnSubListResponse
 */
DescribeCdnSubListResponse Client::describeCdnSubList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnSubListWithOptions(runtime);
}

/**
 * @summary Queries the types of domain names.
 *
 * @param request DescribeCdnTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnTypesResponse
 */
DescribeCdnTypesResponse Client::describeCdnTypesWithOptions(const DescribeCdnTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnTypes"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnTypesResponse>();
}

/**
 * @summary Queries the types of domain names.
 *
 * @param request DescribeCdnTypesRequest
 * @return DescribeCdnTypesResponse
 */
DescribeCdnTypesResponse Client::describeCdnTypes(const DescribeCdnTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnTypesWithOptions(request, runtime);
}

/**
 * @summary Queries the billing history under your Alibaba Cloud account.
 *
 * @description *   You can query billing history up to the last one month.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCdnUserBillHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnUserBillHistoryResponse
 */
DescribeCdnUserBillHistoryResponse Client::describeCdnUserBillHistoryWithOptions(const DescribeCdnUserBillHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnUserBillHistory"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnUserBillHistoryResponse>();
}

/**
 * @summary Queries the billing history under your Alibaba Cloud account.
 *
 * @description *   You can query billing history up to the last one month.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCdnUserBillHistoryRequest
 * @return DescribeCdnUserBillHistoryResponse
 */
DescribeCdnUserBillHistoryResponse Client::describeCdnUserBillHistory(const DescribeCdnUserBillHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnUserBillHistoryWithOptions(request, runtime);
}

/**
 * @summary Estimates resource usage of the current month.
 *
 * @description You can call this operation to estimate resource usage of the current month based on the metering method that is specified on the first day of the current month. You can call this operation to estimate resource usage only of the current month within your Alibaba Cloud account. The time range used for the estimation starts at 00:00 on the first day of the current month and ends 2 hours earlier than the current time.
 * *   Pay by monthly 95th percentile: The top 5% values between the start time and end time are excluded. The estimated value is the highest value among the remaining values.
 * *   Pay by average daily peak bandwidth per month: Estimated value = Sum of daily peak bandwidth values/Number of days. The current day is excluded.
 * *   Pay by 4th peak bandwidth per month: The estimated value is the 4th peak bandwidth value between the start time and end time. If the time range is less than four days, the estimated value is 0.
 * *   Pay by average daily 95th percentile bandwidth per month: Estimated value = Sum of daily 95th percentile bandwidth values/Number of days. The current day is excluded.
 * *   Pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00: The top 5% values between the start time and end time are excluded. The estimated value is the highest value among the remaining values.
 * > You can call this operation only once per second per account.
 *
 * @param request DescribeCdnUserBillPredictionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnUserBillPredictionResponse
 */
DescribeCdnUserBillPredictionResponse Client::describeCdnUserBillPredictionWithOptions(const DescribeCdnUserBillPredictionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.area();
  }

  if (!!request.hasDimension()) {
    query["Dimension"] = request.dimension();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnUserBillPrediction"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnUserBillPredictionResponse>();
}

/**
 * @summary Estimates resource usage of the current month.
 *
 * @description You can call this operation to estimate resource usage of the current month based on the metering method that is specified on the first day of the current month. You can call this operation to estimate resource usage only of the current month within your Alibaba Cloud account. The time range used for the estimation starts at 00:00 on the first day of the current month and ends 2 hours earlier than the current time.
 * *   Pay by monthly 95th percentile: The top 5% values between the start time and end time are excluded. The estimated value is the highest value among the remaining values.
 * *   Pay by average daily peak bandwidth per month: Estimated value = Sum of daily peak bandwidth values/Number of days. The current day is excluded.
 * *   Pay by 4th peak bandwidth per month: The estimated value is the 4th peak bandwidth value between the start time and end time. If the time range is less than four days, the estimated value is 0.
 * *   Pay by average daily 95th percentile bandwidth per month: Estimated value = Sum of daily 95th percentile bandwidth values/Number of days. The current day is excluded.
 * *   Pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00: The top 5% values between the start time and end time are excluded. The estimated value is the highest value among the remaining values.
 * > You can call this operation only once per second per account.
 *
 * @param request DescribeCdnUserBillPredictionRequest
 * @return DescribeCdnUserBillPredictionResponse
 */
DescribeCdnUserBillPredictionResponse Client::describeCdnUserBillPrediction(const DescribeCdnUserBillPredictionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnUserBillPredictionWithOptions(request, runtime);
}

/**
 * @summary Queries information about the metering methods of an account. The maximum time range to query is one month.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCdnUserBillTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnUserBillTypeResponse
 */
DescribeCdnUserBillTypeResponse Client::describeCdnUserBillTypeWithOptions(const DescribeCdnUserBillTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnUserBillType"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnUserBillTypeResponse>();
}

/**
 * @summary Queries information about the metering methods of an account. The maximum time range to query is one month.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCdnUserBillTypeRequest
 * @return DescribeCdnUserBillTypeResponse
 */
DescribeCdnUserBillTypeResponse Client::describeCdnUserBillType(const DescribeCdnUserBillTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnUserBillTypeWithOptions(request, runtime);
}

/**
 * @summary Queries configurations of security features.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnUserConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnUserConfigsResponse
 */
DescribeCdnUserConfigsResponse Client::describeCdnUserConfigsWithOptions(const DescribeCdnUserConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.functionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnUserConfigs"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnUserConfigsResponse>();
}

/**
 * @summary Queries configurations of security features.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnUserConfigsRequest
 * @return DescribeCdnUserConfigsResponse
 */
DescribeCdnUserConfigsResponse Client::describeCdnUserConfigs(const DescribeCdnUserConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnUserConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries accelerated domain names that have specified features configured and the status of the domain names.
 *
 * @description >  The maximum number of times that each user can call this operation per second is 100.
 *
 * @param request DescribeCdnUserDomainsByFuncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnUserDomainsByFuncResponse
 */
DescribeCdnUserDomainsByFuncResponse Client::describeCdnUserDomainsByFuncWithOptions(const DescribeCdnUserDomainsByFuncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFuncId()) {
    query["FuncId"] = request.funcId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnUserDomainsByFunc"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnUserDomainsByFuncResponse>();
}

/**
 * @summary Queries accelerated domain names that have specified features configured and the status of the domain names.
 *
 * @description >  The maximum number of times that each user can call this operation per second is 100.
 *
 * @param request DescribeCdnUserDomainsByFuncRequest
 * @return DescribeCdnUserDomainsByFuncResponse
 */
DescribeCdnUserDomainsByFuncResponse Client::describeCdnUserDomainsByFunc(const DescribeCdnUserDomainsByFuncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnUserDomainsByFuncWithOptions(request, runtime);
}

/**
 * @summary Queries the quotas and usage of Alibaba Cloud CDN resources.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnUserQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnUserQuotaResponse
 */
DescribeCdnUserQuotaResponse Client::describeCdnUserQuotaWithOptions(const DescribeCdnUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnUserQuota"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnUserQuotaResponse>();
}

/**
 * @summary Queries the quotas and usage of Alibaba Cloud CDN resources.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnUserQuotaRequest
 * @return DescribeCdnUserQuotaResponse
 */
DescribeCdnUserQuotaResponse Client::describeCdnUserQuota(const DescribeCdnUserQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnUserQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the resource plans that you have purchased for Alibaba Cloud CDN.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnUserResourcePackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnUserResourcePackageResponse
 */
DescribeCdnUserResourcePackageResponse Client::describeCdnUserResourcePackageWithOptions(const DescribeCdnUserResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnUserResourcePackage"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnUserResourcePackageResponse>();
}

/**
 * @summary Queries the resource plans that you have purchased for Alibaba Cloud CDN.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeCdnUserResourcePackageRequest
 * @return DescribeCdnUserResourcePackageResponse
 */
DescribeCdnUserResourcePackageResponse Client::describeCdnUserResourcePackage(const DescribeCdnUserResourcePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnUserResourcePackageWithOptions(request, runtime);
}

/**
 * @summary Queries domain names that use Web Application Firewall (WAF).
 *
 * @description > You can call this operation up to 150 times per second per account.
 *
 * @param request DescribeCdnWafDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCdnWafDomainResponse
 */
DescribeCdnWafDomainResponse Client::describeCdnWafDomainWithOptions(const DescribeCdnWafDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCdnWafDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCdnWafDomainResponse>();
}

/**
 * @summary Queries domain names that use Web Application Firewall (WAF).
 *
 * @description > You can call this operation up to 150 times per second per account.
 *
 * @param request DescribeCdnWafDomainRequest
 * @return DescribeCdnWafDomainResponse
 */
DescribeCdnWafDomainResponse Client::describeCdnWafDomain(const DescribeCdnWafDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCdnWafDomainWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a specific certificate by certificate ID.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   If a certificate is associated with a domain name but the certificate is not enabled, the result of this operation shows that the certificate does not exist.
 *
 * @param request DescribeCertificateInfoByIDRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCertificateInfoByIDResponse
 */
DescribeCertificateInfoByIDResponse Client::describeCertificateInfoByIDWithOptions(const DescribeCertificateInfoByIDRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCertificateInfoByID"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCertificateInfoByIDResponse>();
}

/**
 * @summary Queries the information about a specific certificate by certificate ID.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   If a certificate is associated with a domain name but the certificate is not enabled, the result of this operation shows that the certificate does not exist.
 *
 * @param request DescribeCertificateInfoByIDRequest
 * @return DescribeCertificateInfoByIDResponse
 */
DescribeCertificateInfoByIDResponse Client::describeCertificateInfoByID(const DescribeCertificateInfoByIDRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCertificateInfoByIDWithOptions(request, runtime);
}

/**
 * @summary A客户定制查询域名采样率
 *
 * @param request DescribeCustomDomainSampleRateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomDomainSampleRateResponse
 */
DescribeCustomDomainSampleRateResponse Client::describeCustomDomainSampleRateWithOptions(const DescribeCustomDomainSampleRateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomDomainSampleRate"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomDomainSampleRateResponse>();
}

/**
 * @summary A客户定制查询域名采样率
 *
 * @param request DescribeCustomDomainSampleRateRequest
 * @return DescribeCustomDomainSampleRateResponse
 */
DescribeCustomDomainSampleRateResponse Client::describeCustomDomainSampleRate(const DescribeCustomDomainSampleRateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomDomainSampleRateWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a custom logging configuration.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCustomLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomLogConfigResponse
 */
DescribeCustomLogConfigResponse Client::describeCustomLogConfigWithOptions(const DescribeCustomLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomLogConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomLogConfigResponse>();
}

/**
 * @summary Queries the details about a custom logging configuration.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeCustomLogConfigRequest
 * @return DescribeCustomLogConfigResponse
 */
DescribeCustomLogConfigResponse Client::describeCustomLogConfig(const DescribeCustomLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomLogConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the average response time of one or more accelerated domain names. You can query data collected within the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
 * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * >*   You can call this operation up to 100 times per second per account.
 * >*   You can specify up to 500 domain names in each request. Separate multiple domain names with commas (,).
 *
 * @param request DescribeDomainAverageResponseTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainAverageResponseTimeResponse
 */
DescribeDomainAverageResponseTimeResponse Client::describeDomainAverageResponseTimeWithOptions(const DescribeDomainAverageResponseTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasDomainType()) {
    query["DomainType"] = request.domainType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTimeMerge()) {
    query["TimeMerge"] = request.timeMerge();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainAverageResponseTime"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainAverageResponseTimeResponse>();
}

/**
 * @summary Queries the average response time of one or more accelerated domain names. You can query data collected within the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
 * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * >*   You can call this operation up to 100 times per second per account.
 * >*   You can specify up to 500 domain names in each request. Separate multiple domain names with commas (,).
 *
 * @param request DescribeDomainAverageResponseTimeRequest
 * @return DescribeDomainAverageResponseTimeResponse
 */
DescribeDomainAverageResponseTimeResponse Client::describeDomainAverageResponseTime(const DescribeDomainAverageResponseTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainAverageResponseTimeWithOptions(request, runtime);
}

/**
 * @summary Queries bandwidth monitoring data for one or more accelerated domain names.
 *
 * @description * You can call this operation up to 150 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainBpsDataResponse
 */
DescribeDomainBpsDataResponse Client::describeDomainBpsDataWithOptions(const DescribeDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainBpsData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainBpsDataResponse>();
}

/**
 * @summary Queries bandwidth monitoring data for one or more accelerated domain names.
 *
 * @description * You can call this operation up to 150 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainBpsDataRequest
 * @return DescribeDomainBpsDataResponse
 */
DescribeDomainBpsDataResponse Client::describeDomainBpsData(const DescribeDomainBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries bandwidth data by protocol.
 *
 * @description * You can call this operation up to 20 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainBpsDataByLayerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainBpsDataByLayerResponse
 */
DescribeDomainBpsDataByLayerResponse Client::describeDomainBpsDataByLayerWithOptions(const DescribeDomainBpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLayer()) {
    query["Layer"] = request.layer();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainBpsDataByLayer"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainBpsDataByLayerResponse>();
}

/**
 * @summary Queries bandwidth data by protocol.
 *
 * @description * You can call this operation up to 20 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainBpsDataByLayerRequest
 * @return DescribeDomainBpsDataByLayerResponse
 */
DescribeDomainBpsDataByLayerResponse Client::describeDomainBpsDataByLayer(const DescribeDomainBpsDataByLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainBpsDataByLayerWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidth data at a specified time for an accelerated domain.
 *
 * @description *   The bandwidth is measured in bit/s.
 * *   You can specify only one accelerated domain name in each request.
 * *   The data is collected every 5 minutes.
 * *   You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDomainBpsDataByTimeStampRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainBpsDataByTimeStampResponse
 */
DescribeDomainBpsDataByTimeStampResponse Client::describeDomainBpsDataByTimeStampWithOptions(const DescribeDomainBpsDataByTimeStampRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasIspNames()) {
    query["IspNames"] = request.ispNames();
  }

  if (!!request.hasLocationNames()) {
    query["LocationNames"] = request.locationNames();
  }

  if (!!request.hasTimePoint()) {
    query["TimePoint"] = request.timePoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainBpsDataByTimeStamp"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainBpsDataByTimeStampResponse>();
}

/**
 * @summary Queries the bandwidth data at a specified time for an accelerated domain.
 *
 * @description *   The bandwidth is measured in bit/s.
 * *   You can specify only one accelerated domain name in each request.
 * *   The data is collected every 5 minutes.
 * *   You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDomainBpsDataByTimeStampRequest
 * @return DescribeDomainBpsDataByTimeStampResponse
 */
DescribeDomainBpsDataByTimeStampResponse Client::describeDomainBpsDataByTimeStamp(const DescribeDomainBpsDataByTimeStampRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainBpsDataByTimeStampWithOptions(request, runtime);
}

/**
 * @summary Queries log entries of rate limiting.
 *
 * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both parameters empty.
 * *   You can specify up to 20 domain names in reach request. If you specify multiple domain names, separate them with commas (,).
 * *   You can query data collected over the last 30 days.
 * *   You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDomainCcActivityLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainCcActivityLogResponse
 */
DescribeDomainCcActivityLogResponse Client::describeDomainCcActivityLogWithOptions(const DescribeDomainCcActivityLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTriggerObject()) {
    query["TriggerObject"] = request.triggerObject();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainCcActivityLog"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainCcActivityLogResponse>();
}

/**
 * @summary Queries log entries of rate limiting.
 *
 * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both parameters empty.
 * *   You can specify up to 20 domain names in reach request. If you specify multiple domain names, separate them with commas (,).
 * *   You can query data collected over the last 30 days.
 * *   You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDomainCcActivityLogRequest
 * @return DescribeDomainCcActivityLogResponse
 */
DescribeDomainCcActivityLogResponse Client::describeDomainCcActivityLog(const DescribeDomainCcActivityLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainCcActivityLogWithOptions(request, runtime);
}

/**
 * @summary Queries the certificate information of an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainCertificateInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainCertificateInfoResponse
 */
DescribeDomainCertificateInfoResponse Client::describeDomainCertificateInfoWithOptions(const DescribeDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainCertificateInfo"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainCertificateInfoResponse>();
}

/**
 * @summary Queries the certificate information of an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainCertificateInfoRequest
 * @return DescribeDomainCertificateInfoResponse
 */
DescribeDomainCertificateInfoResponse Client::describeDomainCertificateInfo(const DescribeDomainCertificateInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainCertificateInfoWithOptions(request, runtime);
}

/**
 * @summary Detects the CNAME for an accelerated domain name. You can check the resolution result to determine whether the CNAME is configured.
 *
 * @param request DescribeDomainCnameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainCnameResponse
 */
DescribeDomainCnameResponse Client::describeDomainCnameWithOptions(const DescribeDomainCnameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainCname"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainCnameResponse>();
}

/**
 * @summary Detects the CNAME for an accelerated domain name. You can check the resolution result to determine whether the CNAME is configured.
 *
 * @param request DescribeDomainCnameRequest
 * @return DescribeDomainCnameResponse
 */
DescribeDomainCnameResponse Client::describeDomainCname(const DescribeDomainCnameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainCnameWithOptions(request, runtime);
}

/**
 * @summary Queries the custom log configuration of an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainCustomLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainCustomLogConfigResponse
 */
DescribeDomainCustomLogConfigResponse Client::describeDomainCustomLogConfigWithOptions(const DescribeDomainCustomLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainCustomLogConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainCustomLogConfigResponse>();
}

/**
 * @summary Queries the custom log configuration of an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainCustomLogConfigRequest
 * @return DescribeDomainCustomLogConfigResponse
 */
DescribeDomainCustomLogConfigResponse Client::describeDomainCustomLogConfig(const DescribeDomainCustomLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainCustomLogConfigWithOptions(request, runtime);
}

/**
 * @summary The domain name that you want to query. You can specify multiple domain names and separate them with commas (,). You can specify at most 30 domain names in each call.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDomainDetailDataByLayerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainDetailDataByLayerResponse
 */
DescribeDomainDetailDataByLayerResponse Client::describeDomainDetailDataByLayerWithOptions(const DescribeDomainDetailDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainDetailDataByLayer"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainDetailDataByLayerResponse>();
}

/**
 * @summary The domain name that you want to query. You can specify multiple domain names and separate them with commas (,). You can specify at most 30 domain names in each call.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDomainDetailDataByLayerRequest
 * @return DescribeDomainDetailDataByLayerResponse
 */
DescribeDomainDetailDataByLayerResponse Client::describeDomainDetailDataByLayer(const DescribeDomainDetailDataByLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainDetailDataByLayerWithOptions(request, runtime);
}

/**
 * @summary Queries byte hit ratios that are measured in percentage.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainHitRateDataResponse
 */
DescribeDomainHitRateDataResponse Client::describeDomainHitRateDataWithOptions(const DescribeDomainHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainHitRateData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainHitRateDataResponse>();
}

/**
 * @summary Queries byte hit ratios that are measured in percentage.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainHitRateDataRequest
 * @return DescribeDomainHitRateDataResponse
 */
DescribeDomainHitRateDataResponse Client::describeDomainHitRateData(const DescribeDomainHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries the total number and proportions of HTTP status codes returned from an accelerated domain name. The data is collected every 5 minutes.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainHttpCodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainHttpCodeDataResponse
 */
DescribeDomainHttpCodeDataResponse Client::describeDomainHttpCodeDataWithOptions(const DescribeDomainHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainHttpCodeData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainHttpCodeDataResponse>();
}

/**
 * @summary Queries the total number and proportions of HTTP status codes returned from an accelerated domain name. The data is collected every 5 minutes.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainHttpCodeDataRequest
 * @return DescribeDomainHttpCodeDataResponse
 */
DescribeDomainHttpCodeDataResponse Client::describeDomainHttpCodeData(const DescribeDomainHttpCodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainHttpCodeDataWithOptions(request, runtime);
}

/**
 * @summary Queries HTTP status codes by protocol.
 *
 * @description * You can call this operation up to 20 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * ### Time granularity
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainHttpCodeDataByLayerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainHttpCodeDataByLayerResponse
 */
DescribeDomainHttpCodeDataByLayerResponse Client::describeDomainHttpCodeDataByLayerWithOptions(const DescribeDomainHttpCodeDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLayer()) {
    query["Layer"] = request.layer();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainHttpCodeDataByLayer"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainHttpCodeDataByLayerResponse>();
}

/**
 * @summary Queries HTTP status codes by protocol.
 *
 * @description * You can call this operation up to 20 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * ### Time granularity
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainHttpCodeDataByLayerRequest
 * @return DescribeDomainHttpCodeDataByLayerResponse
 */
DescribeDomainHttpCodeDataByLayerResponse Client::describeDomainHttpCodeDataByLayer(const DescribeDomainHttpCodeDataByLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainHttpCodeDataByLayerWithOptions(request, runtime);
}

/**
 * @summary Queries the proportions of data usage of different Internet service providers (ISPs). Data is collected every day. You can query data collected in the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > *   If you do not set StartTime or EndTime, the request returns the data collected in the last 24 hours. If you set both StartTime and EndTime, the request returns the data collected within the specified time range.
 * >*   This operation queries proportions of data usage of different ISPs for only a specific accelerated domain name, or for all accelerated domain names in your Alibaba Cloud account.
 * >*   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainISPDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainISPDataResponse
 */
DescribeDomainISPDataResponse Client::describeDomainISPDataWithOptions(const DescribeDomainISPDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainISPData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainISPDataResponse>();
}

/**
 * @summary Queries the proportions of data usage of different Internet service providers (ISPs). Data is collected every day. You can query data collected in the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > *   If you do not set StartTime or EndTime, the request returns the data collected in the last 24 hours. If you set both StartTime and EndTime, the request returns the data collected within the specified time range.
 * >*   This operation queries proportions of data usage of different ISPs for only a specific accelerated domain name, or for all accelerated domain names in your Alibaba Cloud account.
 * >*   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainISPDataRequest
 * @return DescribeDomainISPDataResponse
 */
DescribeDomainISPDataResponse Client::describeDomainISPData(const DescribeDomainISPDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainISPDataWithOptions(request, runtime);
}

/**
 * @summary Queries the 95th percentile bandwidth data of a domain name.
 *
 * @description **You can use one of the following methods to query data:**
 * *   If you specify the StartTime and EndTime parameters and the time range that is specified by these parameters is less than or equal to 24 hours, the 95th percentile bandwidth data on the day of the start time is returned. If the time range that is specified by these parameters is more than 24 hours, the 95th percentile bandwidth data in the month of the start time is returned.
 * *   If you specify the TimePoint and Cycle parameters, the 95th percentile bandwidth data of the cycle is returned.
 * *   If you specify the StartTime, EndTime, and Cycle parameters, the 95th percentile bandwidth data of the cycle is returned.
 * If you do not use one of the methods, the 95th percentile bandwidth data of the previous 24 hours is returned by default.
 * * Maximum time range to query: 90 days 
 * * Minimum data granularity to query: 1 day 
 * * Historical data available: 90 days
 * - You can call this operation up to 100 times per second per account.
 * - The unit of the bandwidth data returned is bit/s.
 *
 * @param request DescribeDomainMax95BpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainMax95BpsDataResponse
 */
DescribeDomainMax95BpsDataResponse Client::describeDomainMax95BpsDataWithOptions(const DescribeDomainMax95BpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCycle()) {
    query["Cycle"] = request.cycle();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTimePoint()) {
    query["TimePoint"] = request.timePoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainMax95BpsData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainMax95BpsDataResponse>();
}

/**
 * @summary Queries the 95th percentile bandwidth data of a domain name.
 *
 * @description **You can use one of the following methods to query data:**
 * *   If you specify the StartTime and EndTime parameters and the time range that is specified by these parameters is less than or equal to 24 hours, the 95th percentile bandwidth data on the day of the start time is returned. If the time range that is specified by these parameters is more than 24 hours, the 95th percentile bandwidth data in the month of the start time is returned.
 * *   If you specify the TimePoint and Cycle parameters, the 95th percentile bandwidth data of the cycle is returned.
 * *   If you specify the StartTime, EndTime, and Cycle parameters, the 95th percentile bandwidth data of the cycle is returned.
 * If you do not use one of the methods, the 95th percentile bandwidth data of the previous 24 hours is returned by default.
 * * Maximum time range to query: 90 days 
 * * Minimum data granularity to query: 1 day 
 * * Historical data available: 90 days
 * - You can call this operation up to 100 times per second per account.
 * - The unit of the bandwidth data returned is bit/s.
 *
 * @param request DescribeDomainMax95BpsDataRequest
 * @return DescribeDomainMax95BpsDataResponse
 */
DescribeDomainMax95BpsDataResponse Client::describeDomainMax95BpsData(const DescribeDomainMax95BpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainMax95BpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic data and the number of requests for multiple accelerated domain names at a time.
 *
 * @description *   If you do not set StartTime or EndTime, data collected within the last 10 minutes is queried.
 * *   The maximum interval between StartTime and EndTime is 1 hour.
 * *   You can query data within the last 90 days.
 * *   You can query the traffic data and the number of requests for accelerated domain names that are deleted.
 * *   You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDomainMultiUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainMultiUsageDataResponse
 */
DescribeDomainMultiUsageDataResponse Client::describeDomainMultiUsageDataWithOptions(const DescribeDomainMultiUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainMultiUsageData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainMultiUsageDataResponse>();
}

/**
 * @summary Queries the traffic data and the number of requests for multiple accelerated domain names at a time.
 *
 * @description *   If you do not set StartTime or EndTime, data collected within the last 10 minutes is queried.
 * *   The maximum interval between StartTime and EndTime is 1 hour.
 * *   You can query data within the last 90 days.
 * *   You can query the traffic data and the number of requests for accelerated domain names that are deleted.
 * *   You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDomainMultiUsageDataRequest
 * @return DescribeDomainMultiUsageDataResponse
 */
DescribeDomainMultiUsageDataResponse Client::describeDomainMultiUsageData(const DescribeDomainMultiUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainMultiUsageDataWithOptions(request, runtime);
}

/**
 * @summary Queries monitoring data including the amount of network traffic and the number of visits by directory.
 *
 * @description *   This operation is available only to users that are on the whitelist. If the daily peak bandwidth value of your workloads reaches 10 Gbit/s, you can [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex) to apply to be included in the whitelist.
 * *   You can call this API operation up to 6,000 times per second per account.
 * *   Data collection by directory is available only to specified domain names within your Alibaba Cloud account. It cannot be enabled for all domain names within your Alibaba Cloud account.
 * *   The average size of the files that belong to the domain name must be larger than 1 MB.
 * *   The number of directories specified for a single domain name cannot exceed 100. If the number of directories exceeds 100, the data accuracy reduces.
 * *   If you do not set StartTime or EndTime, data collected within the last 24 hours is queried. If you set both StartTime and EndTime, data within the specified time range is queried.
 * *   You can query data collected within the last 30 days.
 *
 * @param request DescribeDomainPathDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainPathDataResponse
 */
DescribeDomainPathDataResponse Client::describeDomainPathDataWithOptions(const DescribeDomainPathDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainPathData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainPathDataResponse>();
}

/**
 * @summary Queries monitoring data including the amount of network traffic and the number of visits by directory.
 *
 * @description *   This operation is available only to users that are on the whitelist. If the daily peak bandwidth value of your workloads reaches 10 Gbit/s, you can [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex) to apply to be included in the whitelist.
 * *   You can call this API operation up to 6,000 times per second per account.
 * *   Data collection by directory is available only to specified domain names within your Alibaba Cloud account. It cannot be enabled for all domain names within your Alibaba Cloud account.
 * *   The average size of the files that belong to the domain name must be larger than 1 MB.
 * *   The number of directories specified for a single domain name cannot exceed 100. If the number of directories exceeds 100, the data accuracy reduces.
 * *   If you do not set StartTime or EndTime, data collected within the last 24 hours is queried. If you set both StartTime and EndTime, data within the specified time range is queried.
 * *   You can query data collected within the last 30 days.
 *
 * @param request DescribeDomainPathDataRequest
 * @return DescribeDomainPathDataResponse
 */
DescribeDomainPathDataResponse Client::describeDomainPathData(const DescribeDomainPathDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainPathDataWithOptions(request, runtime);
}

/**
 * @summary Queries the page view (PV) data of an accelerated domain name. The data is collected at an interval of 1 hour. You can query data in the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
 * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * >*   You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDomainPvDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainPvDataResponse
 */
DescribeDomainPvDataResponse Client::describeDomainPvDataWithOptions(const DescribeDomainPvDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainPvData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainPvDataResponse>();
}

/**
 * @summary Queries the page view (PV) data of an accelerated domain name. The data is collected at an interval of 1 hour. You can query data in the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
 * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * >*   You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDomainPvDataRequest
 * @return DescribeDomainPvDataResponse
 */
DescribeDomainPvDataResponse Client::describeDomainPvData(const DescribeDomainPvDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainPvDataWithOptions(request, runtime);
}

/**
 * @summary Queries the number of queries per second (QPS) for an accelerated domain name. The data is collected every 5 minutes. You can query data collected within the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainQpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainQpsDataResponse
 */
DescribeDomainQpsDataResponse Client::describeDomainQpsDataWithOptions(const DescribeDomainQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainQpsData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainQpsDataResponse>();
}

/**
 * @summary Queries the number of queries per second (QPS) for an accelerated domain name. The data is collected every 5 minutes. You can query data collected within the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainQpsDataRequest
 * @return DescribeDomainQpsDataResponse
 */
DescribeDomainQpsDataResponse Client::describeDomainQpsData(const DescribeDomainQpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainQpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the number of queries per second (QPS) at a specific layer for one or more accelerated domain names. You can query data collected within the last 90 days.
 *
 * @description * You can call this operation up to 20 times per second per user.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainQpsDataByLayerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainQpsDataByLayerResponse
 */
DescribeDomainQpsDataByLayerResponse Client::describeDomainQpsDataByLayerWithOptions(const DescribeDomainQpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLayer()) {
    query["Layer"] = request.layer();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainQpsDataByLayer"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainQpsDataByLayerResponse>();
}

/**
 * @summary Queries the number of queries per second (QPS) at a specific layer for one or more accelerated domain names. You can query data collected within the last 90 days.
 *
 * @description * You can call this operation up to 20 times per second per user.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainQpsDataByLayerRequest
 * @return DescribeDomainQpsDataByLayerResponse
 */
DescribeDomainQpsDataByLayerResponse Client::describeDomainQpsDataByLayer(const DescribeDomainQpsDataByLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainQpsDataByLayerWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidth data about one or more accelerated domain names.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity** The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRealTimeBpsDataResponse
 */
DescribeDomainRealTimeBpsDataResponse Client::describeDomainRealTimeBpsDataWithOptions(const DescribeDomainRealTimeBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRealTimeBpsData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRealTimeBpsDataResponse>();
}

/**
 * @summary Queries the bandwidth data about one or more accelerated domain names.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity** The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeBpsDataRequest
 * @return DescribeDomainRealTimeBpsDataResponse
 */
DescribeDomainRealTimeBpsDataResponse Client::describeDomainRealTimeBpsData(const DescribeDomainRealTimeBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRealTimeBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the byte hit ratios of accelerated domain names.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeByteHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRealTimeByteHitRateDataResponse
 */
DescribeDomainRealTimeByteHitRateDataResponse Client::describeDomainRealTimeByteHitRateDataWithOptions(const DescribeDomainRealTimeByteHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRealTimeByteHitRateData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRealTimeByteHitRateDataResponse>();
}

/**
 * @summary Queries the byte hit ratios of accelerated domain names.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeByteHitRateDataRequest
 * @return DescribeDomainRealTimeByteHitRateDataResponse
 */
DescribeDomainRealTimeByteHitRateDataResponse Client::describeDomainRealTimeByteHitRateData(const DescribeDomainRealTimeByteHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRealTimeByteHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries the real-time monitoring data for a domain name.
 *
 * @description *   You can query data in the last seven days. Data is collected every minute.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDomainRealTimeDetailDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRealTimeDetailDataResponse
 */
DescribeDomainRealTimeDetailDataResponse Client::describeDomainRealTimeDetailDataWithOptions(const DescribeDomainRealTimeDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRealTimeDetailData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRealTimeDetailDataResponse>();
}

/**
 * @summary Queries the real-time monitoring data for a domain name.
 *
 * @description *   You can query data in the last seven days. Data is collected every minute.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDomainRealTimeDetailDataRequest
 * @return DescribeDomainRealTimeDetailDataResponse
 */
DescribeDomainRealTimeDetailDataResponse Client::describeDomainRealTimeDetailData(const DescribeDomainRealTimeDetailDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRealTimeDetailDataWithOptions(request, runtime);
}

/**
 * @summary Queries the total number and proportions of HTTP status codes returned from an accelerated domain name.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeHttpCodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRealTimeHttpCodeDataResponse
 */
DescribeDomainRealTimeHttpCodeDataResponse Client::describeDomainRealTimeHttpCodeDataWithOptions(const DescribeDomainRealTimeHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRealTimeHttpCodeData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRealTimeHttpCodeDataResponse>();
}

/**
 * @summary Queries the total number and proportions of HTTP status codes returned from an accelerated domain name.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeHttpCodeDataRequest
 * @return DescribeDomainRealTimeHttpCodeDataResponse
 */
DescribeDomainRealTimeHttpCodeDataResponse Client::describeDomainRealTimeHttpCodeData(const DescribeDomainRealTimeHttpCodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRealTimeHttpCodeDataWithOptions(request, runtime);
}

/**
 * @summary Queries the number of queries per second for one or more accelerated domain names.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeQpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRealTimeQpsDataResponse
 */
DescribeDomainRealTimeQpsDataResponse Client::describeDomainRealTimeQpsDataWithOptions(const DescribeDomainRealTimeQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRealTimeQpsData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRealTimeQpsDataResponse>();
}

/**
 * @summary Queries the number of queries per second for one or more accelerated domain names.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeQpsDataRequest
 * @return DescribeDomainRealTimeQpsDataResponse
 */
DescribeDomainRealTimeQpsDataResponse Client::describeDomainRealTimeQpsData(const DescribeDomainRealTimeQpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRealTimeQpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the request hit ratios for one or more accelerated domain names.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * * By default, requests in the Go programming language use the POST request method. You must manually change the request method to GET by declaring: request.Method="GET".
 * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the request hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeReqHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRealTimeReqHitRateDataResponse
 */
DescribeDomainRealTimeReqHitRateDataResponse Client::describeDomainRealTimeReqHitRateDataWithOptions(const DescribeDomainRealTimeReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRealTimeReqHitRateData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRealTimeReqHitRateDataResponse>();
}

/**
 * @summary Queries the request hit ratios for one or more accelerated domain names.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * * By default, requests in the Go programming language use the POST request method. You must manually change the request method to GET by declaring: request.Method="GET".
 * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the request hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeReqHitRateDataRequest
 * @return DescribeDomainRealTimeReqHitRateDataResponse
 */
DescribeDomainRealTimeReqHitRateDataResponse Client::describeDomainRealTimeReqHitRateData(const DescribeDomainRealTimeReqHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRealTimeReqHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries origin bandwidth data for accelerated domain names.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeSrcBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRealTimeSrcBpsDataResponse
 */
DescribeDomainRealTimeSrcBpsDataResponse Client::describeDomainRealTimeSrcBpsDataWithOptions(const DescribeDomainRealTimeSrcBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRealTimeSrcBpsData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRealTimeSrcBpsDataResponse>();
}

/**
 * @summary Queries origin bandwidth data for accelerated domain names.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeSrcBpsDataRequest
 * @return DescribeDomainRealTimeSrcBpsDataResponse
 */
DescribeDomainRealTimeSrcBpsDataResponse Client::describeDomainRealTimeSrcBpsData(const DescribeDomainRealTimeSrcBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRealTimeSrcBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the total number and proportions of HTTP status codes returned during back-to-origin routing.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeSrcHttpCodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRealTimeSrcHttpCodeDataResponse
 */
DescribeDomainRealTimeSrcHttpCodeDataResponse Client::describeDomainRealTimeSrcHttpCodeDataWithOptions(const DescribeDomainRealTimeSrcHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRealTimeSrcHttpCodeData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRealTimeSrcHttpCodeDataResponse>();
}

/**
 * @summary Queries the total number and proportions of HTTP status codes returned during back-to-origin routing.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeSrcHttpCodeDataRequest
 * @return DescribeDomainRealTimeSrcHttpCodeDataResponse
 */
DescribeDomainRealTimeSrcHttpCodeDataResponse Client::describeDomainRealTimeSrcHttpCodeData(const DescribeDomainRealTimeSrcHttpCodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRealTimeSrcHttpCodeDataWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring data of back-to-origin traffic for one or more specified accelerated domains. The data is collected every minute.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour by default. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeSrcTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRealTimeSrcTrafficDataResponse
 */
DescribeDomainRealTimeSrcTrafficDataResponse Client::describeDomainRealTimeSrcTrafficDataWithOptions(const DescribeDomainRealTimeSrcTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRealTimeSrcTrafficData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRealTimeSrcTrafficDataResponse>();
}

/**
 * @summary Queries the monitoring data of back-to-origin traffic for one or more specified accelerated domains. The data is collected every minute.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour by default. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeSrcTrafficDataRequest
 * @return DescribeDomainRealTimeSrcTrafficDataResponse
 */
DescribeDomainRealTimeSrcTrafficDataResponse Client::describeDomainRealTimeSrcTrafficData(const DescribeDomainRealTimeSrcTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRealTimeSrcTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring data of network traffic for one or more accelerated domain names.
 *
 * @description * You can call this operation up to 50 times per second per account.
 * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRealTimeTrafficDataResponse
 */
DescribeDomainRealTimeTrafficDataResponse Client::describeDomainRealTimeTrafficDataWithOptions(const DescribeDomainRealTimeTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRealTimeTrafficData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRealTimeTrafficDataResponse>();
}

/**
 * @summary Queries the monitoring data of network traffic for one or more accelerated domain names.
 *
 * @description * You can call this operation up to 50 times per second per account.
 * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDomainRealTimeTrafficDataRequest
 * @return DescribeDomainRealTimeTrafficDataResponse
 */
DescribeDomainRealTimeTrafficDataResponse Client::describeDomainRealTimeTrafficData(const DescribeDomainRealTimeTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRealTimeTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries the real-time log delivery information about an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainRealtimeLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRealtimeLogDeliveryResponse
 */
DescribeDomainRealtimeLogDeliveryResponse Client::describeDomainRealtimeLogDeliveryWithOptions(const DescribeDomainRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRealtimeLogDelivery"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRealtimeLogDeliveryResponse>();
}

/**
 * @summary Queries the real-time log delivery information about an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainRealtimeLogDeliveryRequest
 * @return DescribeDomainRealtimeLogDeliveryResponse
 */
DescribeDomainRealtimeLogDeliveryResponse Client::describeDomainRealtimeLogDelivery(const DescribeDomainRealtimeLogDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRealtimeLogDeliveryWithOptions(request, runtime);
}

/**
 * @summary Queries the geographic distribution of users for a domain name. The data is collected at an interval of one day. You can query the data in the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you not use this operation because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > *   If you do not specify the **StartTime** or **EndTime** parameter, data collected within the last **24** hours is queried. If you specify both the **StartTime** and **EndTime** parameters, data collected within the specified time range is queried.
 * >*   There is delay in data collection. If you want to query data collected within the last day, we recommend that you query the data on the next day.
 * >*   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainRegionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRegionDataResponse
 */
DescribeDomainRegionDataResponse Client::describeDomainRegionDataWithOptions(const DescribeDomainRegionDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRegionData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRegionDataResponse>();
}

/**
 * @summary Queries the geographic distribution of users for a domain name. The data is collected at an interval of one day. You can query the data in the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you not use this operation because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > *   If you do not specify the **StartTime** or **EndTime** parameter, data collected within the last **24** hours is queried. If you specify both the **StartTime** and **EndTime** parameters, data collected within the specified time range is queried.
 * >*   There is delay in data collection. If you want to query data collected within the last day, we recommend that you query the data on the next day.
 * >*   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainRegionDataRequest
 * @return DescribeDomainRegionDataResponse
 */
DescribeDomainRegionDataResponse Client::describeDomainRegionData(const DescribeDomainRegionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRegionDataWithOptions(request, runtime);
}

/**
 * @summary Queries the request hit ratio in percentage.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainReqHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainReqHitRateDataResponse
 */
DescribeDomainReqHitRateDataResponse Client::describeDomainReqHitRateDataWithOptions(const DescribeDomainReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainReqHitRateData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainReqHitRateDataResponse>();
}

/**
 * @summary Queries the request hit ratio in percentage.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainReqHitRateDataRequest
 * @return DescribeDomainReqHitRateDataResponse
 */
DescribeDomainReqHitRateDataResponse Client::describeDomainReqHitRateData(const DescribeDomainReqHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainReqHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries bandwidth monitoring data of requests that are redirected to origin servers for one or more accelerated domain names.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainSrcBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainSrcBpsDataResponse
 */
DescribeDomainSrcBpsDataResponse Client::describeDomainSrcBpsDataWithOptions(const DescribeDomainSrcBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainSrcBpsData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainSrcBpsDataResponse>();
}

/**
 * @summary Queries bandwidth monitoring data of requests that are redirected to origin servers for one or more accelerated domain names.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainSrcBpsDataRequest
 * @return DescribeDomainSrcBpsDataResponse
 */
DescribeDomainSrcBpsDataResponse Client::describeDomainSrcBpsData(const DescribeDomainSrcBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainSrcBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the proportions of HTTP status codes that are returned during back-to-origin routing.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainSrcHttpCodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainSrcHttpCodeDataResponse
 */
DescribeDomainSrcHttpCodeDataResponse Client::describeDomainSrcHttpCodeDataWithOptions(const DescribeDomainSrcHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainSrcHttpCodeData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainSrcHttpCodeDataResponse>();
}

/**
 * @summary Queries the proportions of HTTP status codes that are returned during back-to-origin routing.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainSrcHttpCodeDataRequest
 * @return DescribeDomainSrcHttpCodeDataResponse
 */
DescribeDomainSrcHttpCodeDataResponse Client::describeDomainSrcHttpCodeData(const DescribeDomainSrcHttpCodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainSrcHttpCodeDataWithOptions(request, runtime);
}

/**
 * @summary Queries the number of queries per second (QPS) that are sent to the origin server. You can query data collected in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * ### Time granularity
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainSrcQpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainSrcQpsDataResponse
 */
DescribeDomainSrcQpsDataResponse Client::describeDomainSrcQpsDataWithOptions(const DescribeDomainSrcQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainSrcQpsData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainSrcQpsDataResponse>();
}

/**
 * @summary Queries the number of queries per second (QPS) that are sent to the origin server. You can query data collected in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * ### Time granularity
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainSrcQpsDataRequest
 * @return DescribeDomainSrcQpsDataResponse
 */
DescribeDomainSrcQpsDataResponse Client::describeDomainSrcQpsData(const DescribeDomainSrcQpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainSrcQpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries frequently requested origin URLs of one or more accelerated domain names.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > *   The data is collected at an interval of 5 minutes.
 * >*   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDomainSrcTopUrlVisitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainSrcTopUrlVisitResponse
 */
DescribeDomainSrcTopUrlVisitResponse Client::describeDomainSrcTopUrlVisitWithOptions(const DescribeDomainSrcTopUrlVisitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainSrcTopUrlVisit"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainSrcTopUrlVisitResponse>();
}

/**
 * @summary Queries frequently requested origin URLs of one or more accelerated domain names.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > *   The data is collected at an interval of 5 minutes.
 * >*   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDomainSrcTopUrlVisitRequest
 * @return DescribeDomainSrcTopUrlVisitResponse
 */
DescribeDomainSrcTopUrlVisitResponse Client::describeDomainSrcTopUrlVisit(const DescribeDomainSrcTopUrlVisitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainSrcTopUrlVisitWithOptions(request, runtime);
}

/**
 * @summary Queries origin traffic for one or more specified accelerated domain names.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainSrcTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainSrcTrafficDataResponse
 */
DescribeDomainSrcTrafficDataResponse Client::describeDomainSrcTrafficDataWithOptions(const DescribeDomainSrcTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainSrcTrafficData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainSrcTrafficDataResponse>();
}

/**
 * @summary Queries origin traffic for one or more specified accelerated domain names.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainSrcTrafficDataRequest
 * @return DescribeDomainSrcTrafficDataResponse
 */
DescribeDomainSrcTrafficDataResponse Client::describeDomainSrcTrafficData(const DescribeDomainSrcTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainSrcTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries client IP addresses that are ranked by the number of requests or the amount of network traffic within a specific time range for one or more accelerated domain names. You can query data collected within the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
 * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * >*   Data is collected every hour.
 * >*   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDomainTopClientIpVisitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopClientIpVisitResponse
 */
DescribeDomainTopClientIpVisitResponse Client::describeDomainTopClientIpVisitWithOptions(const DescribeDomainTopClientIpVisitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainTopClientIpVisit"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainTopClientIpVisitResponse>();
}

/**
 * @summary Queries client IP addresses that are ranked by the number of requests or the amount of network traffic within a specific time range for one or more accelerated domain names. You can query data collected within the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
 * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * >*   Data is collected every hour.
 * >*   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDomainTopClientIpVisitRequest
 * @return DescribeDomainTopClientIpVisitResponse
 */
DescribeDomainTopClientIpVisitResponse Client::describeDomainTopClientIpVisit(const DescribeDomainTopClientIpVisitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopClientIpVisitWithOptions(request, runtime);
}

/**
 * @summary Queries frequently requested web pages of one or more accelerated domain names on a specified day and sorts the web pages. You can query data collected within the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature or [ship real-time logs in Log Service](https://help.aliyun.com/document_detail/440145.html) to analyze data.
 * > 
 * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * *   Data is collected at an interval of five minutes.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDomainTopReferVisitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopReferVisitResponse
 */
DescribeDomainTopReferVisitResponse Client::describeDomainTopReferVisitWithOptions(const DescribeDomainTopReferVisitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainTopReferVisit"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainTopReferVisitResponse>();
}

/**
 * @summary Queries frequently requested web pages of one or more accelerated domain names on a specified day and sorts the web pages. You can query data collected within the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature or [ship real-time logs in Log Service](https://help.aliyun.com/document_detail/440145.html) to analyze data.
 * > 
 * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * *   Data is collected at an interval of five minutes.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDomainTopReferVisitRequest
 * @return DescribeDomainTopReferVisitResponse
 */
DescribeDomainTopReferVisitResponse Client::describeDomainTopReferVisit(const DescribeDomainTopReferVisitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopReferVisitWithOptions(request, runtime);
}

/**
 * @summary Queries top 100 frequently requested URLs of an accelerated domain name within a specified time range.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * >*   You can query data collected in the last 90 days.
 * >*   You can specify only one domain name in each call.
 * >*   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDomainTopUrlVisitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTopUrlVisitResponse
 */
DescribeDomainTopUrlVisitResponse Client::describeDomainTopUrlVisitWithOptions(const DescribeDomainTopUrlVisitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainTopUrlVisit"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainTopUrlVisitResponse>();
}

/**
 * @summary Queries top 100 frequently requested URLs of an accelerated domain name within a specified time range.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * >*   You can query data collected in the last 90 days.
 * >*   You can specify only one domain name in each call.
 * >*   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDomainTopUrlVisitRequest
 * @return DescribeDomainTopUrlVisitResponse
 */
DescribeDomainTopUrlVisitResponse Client::describeDomainTopUrlVisit(const DescribeDomainTopUrlVisitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTopUrlVisitWithOptions(request, runtime);
}

/**
 * @summary Queries network traffic for one or more accelerated domain names. You can query data that is collected in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366|04:00 on the next day|
 *
 * @param request DescribeDomainTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainTrafficDataResponse
 */
DescribeDomainTrafficDataResponse Client::describeDomainTrafficDataWithOptions(const DescribeDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainTrafficData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainTrafficDataResponse>();
}

/**
 * @summary Queries network traffic for one or more accelerated domain names. You can query data that is collected in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366|04:00 on the next day|
 *
 * @param request DescribeDomainTrafficDataRequest
 * @return DescribeDomainTrafficDataResponse
 */
DescribeDomainTrafficDataResponse Client::describeDomainTrafficData(const DescribeDomainTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries the resource usage data of specific domain names in a specified billable region.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|90 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainUsageDataResponse
 */
DescribeDomainUsageDataResponse Client::describeDomainUsageDataWithOptions(const DescribeDomainUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.area();
  }

  if (!!request.hasDataProtocol()) {
    query["DataProtocol"] = request.dataProtocol();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasField()) {
    query["Field"] = request.field();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.serviceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainUsageData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainUsageDataResponse>();
}

/**
 * @summary Queries the resource usage data of specific domain names in a specified billable region.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|90 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDomainUsageDataRequest
 * @return DescribeDomainUsageDataResponse
 */
DescribeDomainUsageDataResponse Client::describeDomainUsageData(const DescribeDomainUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainUsageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the unique visitor (UV) data of an accelerated domain name. Data is collected every hour. You can query data collected in the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > 
 * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * *   You can specify only one accelerated domain name or all accelerated domain names in your Alibaba Cloud account.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainUvDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainUvDataResponse
 */
DescribeDomainUvDataResponse Client::describeDomainUvDataWithOptions(const DescribeDomainUvDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainUvData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainUvDataResponse>();
}

/**
 * @summary Queries the unique visitor (UV) data of an accelerated domain name. Data is collected every hour. You can query data collected in the last 90 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > 
 * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * *   You can specify only one accelerated domain name or all accelerated domain names in your Alibaba Cloud account.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDomainUvDataRequest
 * @return DescribeDomainUvDataResponse
 */
DescribeDomainUvDataResponse Client::describeDomainUvData(const DescribeDomainUvDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainUvDataWithOptions(request, runtime);
}

/**
 * @summary Queries the verification content of a domain name, including the host record and record value.
 *
 * @description You can call this operation to query the verification content of an accelerated domain name based on whether the global resource plan is enabled.
 *
 * @param request DescribeDomainVerifyDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainVerifyDataResponse
 */
DescribeDomainVerifyDataResponse Client::describeDomainVerifyDataWithOptions(const DescribeDomainVerifyDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasGlobalResourcePlan()) {
    query["GlobalResourcePlan"] = request.globalResourcePlan();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainVerifyData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainVerifyDataResponse>();
}

/**
 * @summary Queries the verification content of a domain name, including the host record and record value.
 *
 * @description You can call this operation to query the verification content of an accelerated domain name based on whether the global resource plan is enabled.
 *
 * @param request DescribeDomainVerifyDataRequest
 * @return DescribeDomainVerifyDataResponse
 */
DescribeDomainVerifyDataResponse Client::describeDomainVerifyData(const DescribeDomainVerifyDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainVerifyDataWithOptions(request, runtime);
}

/**
 * @summary Queries accelerated domain names by origin server.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDomainsBySourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainsBySourceResponse
 */
DescribeDomainsBySourceResponse Client::describeDomainsBySourceWithOptions(const DescribeDomainsBySourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.sources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainsBySource"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainsBySourceResponse>();
}

/**
 * @summary Queries accelerated domain names by origin server.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDomainsBySourceRequest
 * @return DescribeDomainsBySourceResponse
 */
DescribeDomainsBySourceResponse Client::describeDomainsBySource(const DescribeDomainsBySourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainsBySourceWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring data of an accelerated domain name. Data is collected every day. You can query data collected within the last 90 days.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   If you do not set StartTime or EndTime, data within the last 24 hours is queried. If you set both StartTime and EndTime, data within the specified time range is queried.
 * *   You can query the monitoring data of a specific accelerated domain name or all accelerated domain names that belong to your Alibaba Cloud account.
 *
 * @param request DescribeDomainsUsageByDayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainsUsageByDayResponse
 */
DescribeDomainsUsageByDayResponse Client::describeDomainsUsageByDayWithOptions(const DescribeDomainsUsageByDayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainsUsageByDay"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainsUsageByDayResponse>();
}

/**
 * @summary Queries the monitoring data of an accelerated domain name. Data is collected every day. You can query data collected within the last 90 days.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   If you do not set StartTime or EndTime, data within the last 24 hours is queried. If you set both StartTime and EndTime, data within the specified time range is queried.
 * *   You can query the monitoring data of a specific accelerated domain name or all accelerated domain names that belong to your Alibaba Cloud account.
 *
 * @param request DescribeDomainsUsageByDayRequest
 * @return DescribeDomainsUsageByDayResponse
 */
DescribeDomainsUsageByDayResponse Client::describeDomainsUsageByDay(const DescribeDomainsUsageByDayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainsUsageByDayWithOptions(request, runtime);
}

/**
 * @summary Queries the execution errors of a script in EdgeScript (ES).
 *
 * @description *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeEsExceptionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEsExceptionDataResponse
 */
DescribeEsExceptionDataResponse Client::describeEsExceptionDataWithOptions(const DescribeEsExceptionDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEsExceptionData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEsExceptionDataResponse>();
}

/**
 * @summary Queries the execution errors of a script in EdgeScript (ES).
 *
 * @description *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeEsExceptionDataRequest
 * @return DescribeEsExceptionDataResponse
 */
DescribeEsExceptionDataResponse Client::describeEsExceptionData(const DescribeEsExceptionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEsExceptionDataWithOptions(request, runtime);
}

/**
 * @summary Queries the execution status of scripts in EdgeScript (ES).
 *
 * @description *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeEsExecuteDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEsExecuteDataResponse
 */
DescribeEsExecuteDataResponse Client::describeEsExecuteDataWithOptions(const DescribeEsExecuteDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEsExecuteData"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEsExecuteDataResponse>();
}

/**
 * @summary Queries the execution status of scripts in EdgeScript (ES).
 *
 * @description *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeEsExecuteDataRequest
 * @return DescribeEsExecuteDataResponse
 */
DescribeEsExecuteDataResponse Client::describeEsExecuteData(const DescribeEsExecuteDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEsExecuteDataWithOptions(request, runtime);
}

/**
 * @summary Queries a specified Function Compute trigger.
 *
 * @param request DescribeFCTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFCTriggerResponse
 */
DescribeFCTriggerResponse Client::describeFCTriggerWithOptions(const DescribeFCTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFCTrigger"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFCTriggerResponse>();
}

/**
 * @summary Queries a specified Function Compute trigger.
 *
 * @param request DescribeFCTriggerRequest
 * @return DescribeFCTriggerResponse
 */
DescribeFCTriggerResponse Client::describeFCTrigger(const DescribeFCTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFCTriggerWithOptions(request, runtime);
}

/**
 * @summary Checks whether a specified IP address is the IP address of a CDN point of presence (POP).
 *
 * @param request DescribeIpInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpInfoResponse
 */
DescribeIpInfoResponse Client::describeIpInfoWithOptions(const DescribeIpInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIP()) {
    query["IP"] = request.IP();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpInfo"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpInfoResponse>();
}

/**
 * @summary Checks whether a specified IP address is the IP address of a CDN point of presence (POP).
 *
 * @param request DescribeIpInfoRequest
 * @return DescribeIpInfoResponse
 */
DescribeIpInfoResponse Client::describeIpInfo(const DescribeIpInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the status of IP addresses of points of presence (POPs). The status of an IP address of a POP indicates whether content delivery acceleration is supported by the POP.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeIpStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpStatusResponse
 */
DescribeIpStatusResponse Client::describeIpStatusWithOptions(const DescribeIpStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpStatus"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpStatusResponse>();
}

/**
 * @summary Queries the status of IP addresses of points of presence (POPs). The status of an IP address of a POP indicates whether content delivery acceleration is supported by the POP.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeIpStatusRequest
 * @return DescribeIpStatusResponse
 */
DescribeIpStatusResponse Client::describeIpStatus(const DescribeIpStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the virtual IP addresses (VIPs) of L2 CDN points of presence (POPs) for a specific domain name.
 *
 * @description *   This operation is available only to users whose daily peak bandwidth value is higher than 1 Gbit/s. If you meet this requirement, you can [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex) to apply for permissions to use this operation.
 * *   You can call this operation up to 40 times per second per account.
 *
 * @param request DescribeL2VipsByDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeL2VipsByDomainResponse
 */
DescribeL2VipsByDomainResponse Client::describeL2VipsByDomainWithOptions(const DescribeL2VipsByDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeL2VipsByDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeL2VipsByDomainResponse>();
}

/**
 * @summary Queries the virtual IP addresses (VIPs) of L2 CDN points of presence (POPs) for a specific domain name.
 *
 * @description *   This operation is available only to users whose daily peak bandwidth value is higher than 1 Gbit/s. If you meet this requirement, you can [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex) to apply for permissions to use this operation.
 * *   You can call this operation up to 40 times per second per account.
 *
 * @param request DescribeL2VipsByDomainRequest
 * @return DescribeL2VipsByDomainResponse
 */
DescribeL2VipsByDomainResponse Client::describeL2VipsByDomain(const DescribeL2VipsByDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeL2VipsByDomainWithOptions(request, runtime);
}

/**
 * @summary Queries the prefetch details of a task, including the prefetch progress of all resources in the task. Only users who are included in the whitelist can use this operation. You can contact your business manager to apply for the whitelist.
 *
 * @description *   You can query data within the last 3 days.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribePreloadDetailByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePreloadDetailByIdResponse
 */
DescribePreloadDetailByIdResponse Client::describePreloadDetailByIdWithOptions(const DescribePreloadDetailByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePreloadDetailById"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePreloadDetailByIdResponse>();
}

/**
 * @summary Queries the prefetch details of a task, including the prefetch progress of all resources in the task. Only users who are included in the whitelist can use this operation. You can contact your business manager to apply for the whitelist.
 *
 * @description *   You can query data within the last 3 days.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribePreloadDetailByIdRequest
 * @return DescribePreloadDetailByIdResponse
 */
DescribePreloadDetailByIdResponse Client::describePreloadDetailById(const DescribePreloadDetailByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePreloadDetailByIdWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidth values by Internet service provider (ISP) and region.
 *
 * @description *   The data is collected every 5 minutes.
 * *   You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeRangeDataByLocateAndIspServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRangeDataByLocateAndIspServiceResponse
 */
DescribeRangeDataByLocateAndIspServiceResponse Client::describeRangeDataByLocateAndIspServiceWithOptions(const DescribeRangeDataByLocateAndIspServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIspNames()) {
    query["IspNames"] = request.ispNames();
  }

  if (!!request.hasLocationNames()) {
    query["LocationNames"] = request.locationNames();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRangeDataByLocateAndIspService"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRangeDataByLocateAndIspServiceResponse>();
}

/**
 * @summary Queries the bandwidth values by Internet service provider (ISP) and region.
 *
 * @description *   The data is collected every 5 minutes.
 * *   You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeRangeDataByLocateAndIspServiceRequest
 * @return DescribeRangeDataByLocateAndIspServiceResponse
 */
DescribeRangeDataByLocateAndIspServiceResponse Client::describeRangeDataByLocateAndIspService(const DescribeRangeDataByLocateAndIspServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRangeDataByLocateAndIspServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the number of real-time log deliveries.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeRealtimeDeliveryAccRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRealtimeDeliveryAccResponse
 */
DescribeRealtimeDeliveryAccResponse Client::describeRealtimeDeliveryAccWithOptions(const DescribeRealtimeDeliveryAccRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasLogStore()) {
    query["LogStore"] = request.logStore();
  }

  if (!!request.hasProject()) {
    query["Project"] = request.project();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRealtimeDeliveryAcc"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRealtimeDeliveryAccResponse>();
}

/**
 * @summary Queries the number of real-time log deliveries.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeRealtimeDeliveryAccRequest
 * @return DescribeRealtimeDeliveryAccResponse
 */
DescribeRealtimeDeliveryAccResponse Client::describeRealtimeDeliveryAcc(const DescribeRealtimeDeliveryAccRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRealtimeDeliveryAccWithOptions(request, runtime);
}

/**
 * @summary DescribeRefreshQuota
 *
 * @description Queries the maximum and remaining numbers of URLs and directories that can be refreshed, the maximum and remaining numbers of times that you can prefetch content, and the maximum and remaining numbers of URLs and directories that can be blocked on the current day.
 *
 * @param request DescribeRefreshQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRefreshQuotaResponse
 */
DescribeRefreshQuotaResponse Client::describeRefreshQuotaWithOptions(const DescribeRefreshQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRefreshQuota"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRefreshQuotaResponse>();
}

/**
 * @summary DescribeRefreshQuota
 *
 * @description Queries the maximum and remaining numbers of URLs and directories that can be refreshed, the maximum and remaining numbers of times that you can prefetch content, and the maximum and remaining numbers of URLs and directories that can be blocked on the current day.
 *
 * @param request DescribeRefreshQuotaRequest
 * @return DescribeRefreshQuotaResponse
 */
DescribeRefreshQuotaResponse Client::describeRefreshQuota(const DescribeRefreshQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRefreshQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the statuses of refresh or prefetch tasks by task ID.
 *
 * @description *   You can query data in the last three days.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeRefreshTaskByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRefreshTaskByIdResponse
 */
DescribeRefreshTaskByIdResponse Client::describeRefreshTaskByIdWithOptions(const DescribeRefreshTaskByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRefreshTaskById"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRefreshTaskByIdResponse>();
}

/**
 * @summary Queries the statuses of refresh or prefetch tasks by task ID.
 *
 * @description *   You can query data in the last three days.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeRefreshTaskByIdRequest
 * @return DescribeRefreshTaskByIdResponse
 */
DescribeRefreshTaskByIdResponse Client::describeRefreshTaskById(const DescribeRefreshTaskByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRefreshTaskByIdWithOptions(request, runtime);
}

/**
 * @summary Queries the status of refresh or prefetch tasks that belong to an accelerated domain name.
 *
 * @description *   You can query the status of tasks by task ID or URL.
 * *   You can set both the **TaskId** and **ObjectPath** parameters. If you do not set the **TaskId** or **ObjectPath** parameter, data entries on the first page (20 entries) collected in the last 3 days are returned.
 * *   You can query data collected in the last 3 days.
 * *   If auto CDN cache update is enabled in the Object Storage Service (OSS) console, you cannot call the DescribeRefreshTasks operation to query automatic refresh tasks in OSS.
 * *   You can call this operation up to 10 times per second per account. If you want to query tasks at a higher frequency, call the [DescribeRefreshTaskById](https://help.aliyun.com/document_detail/187709.html) operation. This operation allows you to query tasks by task ID.
 *
 * @param request DescribeRefreshTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRefreshTasksResponse
 */
DescribeRefreshTasksResponse Client::describeRefreshTasksWithOptions(const DescribeRefreshTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.objectPath();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.objectType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRefreshTasks"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRefreshTasksResponse>();
}

/**
 * @summary Queries the status of refresh or prefetch tasks that belong to an accelerated domain name.
 *
 * @description *   You can query the status of tasks by task ID or URL.
 * *   You can set both the **TaskId** and **ObjectPath** parameters. If you do not set the **TaskId** or **ObjectPath** parameter, data entries on the first page (20 entries) collected in the last 3 days are returned.
 * *   You can query data collected in the last 3 days.
 * *   If auto CDN cache update is enabled in the Object Storage Service (OSS) console, you cannot call the DescribeRefreshTasks operation to query automatic refresh tasks in OSS.
 * *   You can call this operation up to 10 times per second per account. If you want to query tasks at a higher frequency, call the [DescribeRefreshTaskById](https://help.aliyun.com/document_detail/187709.html) operation. This operation allows you to query tasks by task ID.
 *
 * @param request DescribeRefreshTasksRequest
 * @return DescribeRefreshTasksResponse
 */
DescribeRefreshTasksResponse Client::describeRefreshTasks(const DescribeRefreshTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRefreshTasksWithOptions(request, runtime);
}

/**
 * @summary Queries node IP addresses in the staging environment.
 *
 * @description >The maximum number of times that each user can call this operation per second is 30.
 *
 * @param request DescribeStagingIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStagingIpResponse
 */
DescribeStagingIpResponse Client::describeStagingIpWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeStagingIp"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStagingIpResponse>();
}

/**
 * @summary Queries node IP addresses in the staging environment.
 *
 * @description >The maximum number of times that each user can call this operation per second is 30.
 *
 * @return DescribeStagingIpResponse
 */
DescribeStagingIpResponse Client::describeStagingIp() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStagingIpWithOptions(runtime);
}

/**
 * @summary Queries tags that are added to specified resources.
 *
 * @description >  The maximum number of times that each user can call this operation per second is 10.
 *
 * @param request DescribeTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagResourcesResponse
 */
DescribeTagResourcesResponse Client::describeTagResourcesWithOptions(const DescribeTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagResources"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagResourcesResponse>();
}

/**
 * @summary Queries tags that are added to specified resources.
 *
 * @description >  The maximum number of times that each user can call this operation per second is 10.
 *
 * @param request DescribeTagResourcesRequest
 * @return DescribeTagResourcesResponse
 */
DescribeTagResourcesResponse Client::describeTagResources(const DescribeTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the top N domain names ranked by network traffic. You can query data collected in the last 30 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the current month. If you set both these parameters, the request returns the data collected within the specified time range.
 * >*   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeTopDomainsByFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTopDomainsByFlowResponse
 */
DescribeTopDomainsByFlowResponse Client::describeTopDomainsByFlowWithOptions(const DescribeTopDomainsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTopDomainsByFlow"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTopDomainsByFlowResponse>();
}

/**
 * @summary Queries the top N domain names ranked by network traffic. You can query data collected in the last 30 days.
 *
 * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
 * > *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the current month. If you set both these parameters, the request returns the data collected within the specified time range.
 * >*   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeTopDomainsByFlowRequest
 * @return DescribeTopDomainsByFlowResponse
 */
DescribeTopDomainsByFlowResponse Client::describeTopDomainsByFlow(const DescribeTopDomainsByFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTopDomainsByFlowWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a user.
 *
 * @param request DescribeUserCdnStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserCdnStatusResponse
 */
DescribeUserCdnStatusResponse Client::describeUserCdnStatusWithOptions(const DescribeUserCdnStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserCdnStatus"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserCdnStatusResponse>();
}

/**
 * @summary Queries the status of a user.
 *
 * @param request DescribeUserCdnStatusRequest
 * @return DescribeUserCdnStatusResponse
 */
DescribeUserCdnStatusResponse Client::describeUserCdnStatus(const DescribeUserCdnStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserCdnStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the number of domain names whose SSL certificates are about to expire or have already expired.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeUserCertificateExpireCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserCertificateExpireCountResponse
 */
DescribeUserCertificateExpireCountResponse Client::describeUserCertificateExpireCountWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeUserCertificateExpireCount"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserCertificateExpireCountResponse>();
}

/**
 * @summary Queries the number of domain names whose SSL certificates are about to expire or have already expired.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @return DescribeUserCertificateExpireCountResponse
 */
DescribeUserCertificateExpireCountResponse Client::describeUserCertificateExpireCount() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserCertificateExpireCountWithOptions(runtime);
}

/**
 * @summary Queries configurations of security features.
 *
 * @param request DescribeUserConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserConfigsResponse
 */
DescribeUserConfigsResponse Client::describeUserConfigsWithOptions(const DescribeUserConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserConfigs"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserConfigsResponse>();
}

/**
 * @summary Queries configurations of security features.
 *
 * @param request DescribeUserConfigsRequest
 * @return DescribeUserConfigsResponse
 */
DescribeUserConfigsResponse Client::describeUserConfigs(const DescribeUserConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries all accelerated domain names in your Alibaba Cloud account and the status of the accelerated domain names. You can filter domain names by name or status. Fuzzy match is supported.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can specify up to 50 domain names in each request. Separate multiple domain names with commas (,).
 *
 * @param request DescribeUserDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserDomainsResponse
 */
DescribeUserDomainsResponse Client::describeUserDomainsWithOptions(const DescribeUserDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCdnType()) {
    query["CdnType"] = request.cdnType();
  }

  if (!!request.hasChangeEndTime()) {
    query["ChangeEndTime"] = request.changeEndTime();
  }

  if (!!request.hasChangeStartTime()) {
    query["ChangeStartTime"] = request.changeStartTime();
  }

  if (!!request.hasCheckDomainShow()) {
    query["CheckDomainShow"] = request.checkDomainShow();
  }

  if (!!request.hasCoverage()) {
    query["Coverage"] = request.coverage();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasDomainSearchType()) {
    query["DomainSearchType"] = request.domainSearchType();
  }

  if (!!request.hasDomainStatus()) {
    query["DomainStatus"] = request.domainStatus();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserDomains"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserDomainsResponse>();
}

/**
 * @summary Queries all accelerated domain names in your Alibaba Cloud account and the status of the accelerated domain names. You can filter domain names by name or status. Fuzzy match is supported.
 *
 * @description *   You can call this operation up to 100 times per second per account.
 * *   You can specify up to 50 domain names in each request. Separate multiple domain names with commas (,).
 *
 * @param request DescribeUserDomainsRequest
 * @return DescribeUserDomainsResponse
 */
DescribeUserDomainsResponse Client::describeUserDomains(const DescribeUserDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries user tags.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeUserTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserTagsResponse
 */
DescribeUserTagsResponse Client::describeUserTagsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeUserTags"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserTagsResponse>();
}

/**
 * @summary Queries user tags.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @return DescribeUserTagsResponse
 */
DescribeUserTagsResponse Client::describeUserTags() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserTagsWithOptions(runtime);
}

/**
 * @summary Queries usage export tasks that were created in the last three months.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeUserUsageDataExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserUsageDataExportTaskResponse
 */
DescribeUserUsageDataExportTaskResponse Client::describeUserUsageDataExportTaskWithOptions(const DescribeUserUsageDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserUsageDataExportTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserUsageDataExportTaskResponse>();
}

/**
 * @summary Queries usage export tasks that were created in the last three months.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeUserUsageDataExportTaskRequest
 * @return DescribeUserUsageDataExportTaskResponse
 */
DescribeUserUsageDataExportTaskResponse Client::describeUserUsageDataExportTask(const DescribeUserUsageDataExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserUsageDataExportTaskWithOptions(request, runtime);
}

/**
 * @summary Queries tasks that were used to export resource usage details of one or more accelerated domain names that belong to your Alibaba Cloud account. Resource usage information is collected every five minutes.
 *
 * @description *   This operation has been available since July 20, 2018. You can query information about resource usage collected within the last three months.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeUserUsageDetailDataExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserUsageDetailDataExportTaskResponse
 */
DescribeUserUsageDetailDataExportTaskResponse Client::describeUserUsageDetailDataExportTaskWithOptions(const DescribeUserUsageDetailDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserUsageDetailDataExportTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserUsageDetailDataExportTaskResponse>();
}

/**
 * @summary Queries tasks that were used to export resource usage details of one or more accelerated domain names that belong to your Alibaba Cloud account. Resource usage information is collected every five minutes.
 *
 * @description *   This operation has been available since July 20, 2018. You can query information about resource usage collected within the last three months.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeUserUsageDetailDataExportTaskRequest
 * @return DescribeUserUsageDetailDataExportTaskResponse
 */
DescribeUserUsageDetailDataExportTaskResponse Client::describeUserUsageDetailDataExportTask(const DescribeUserUsageDetailDataExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserUsageDetailDataExportTaskWithOptions(request, runtime);
}

/**
 * @summary Queries virtual IP addresses (VIPs) of CDN points of presence (POPs) by domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeUserVipsByDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserVipsByDomainResponse
 */
DescribeUserVipsByDomainResponse Client::describeUserVipsByDomainWithOptions(const DescribeUserVipsByDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserVipsByDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserVipsByDomainResponse>();
}

/**
 * @summary Queries virtual IP addresses (VIPs) of CDN points of presence (POPs) by domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeUserVipsByDomainRequest
 * @return DescribeUserVipsByDomainResponse
 */
DescribeUserVipsByDomainResponse Client::describeUserVipsByDomain(const DescribeUserVipsByDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserVipsByDomainWithOptions(request, runtime);
}

/**
 * @summary Queries the ownership verification content of an accelerated domain name.
 *
 * @param request DescribeVerifyContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifyContentResponse
 */
DescribeVerifyContentResponse Client::describeVerifyContentWithOptions(const DescribeVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVerifyContent"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifyContentResponse>();
}

/**
 * @summary Queries the ownership verification content of an accelerated domain name.
 *
 * @param request DescribeVerifyContentRequest
 * @return DescribeVerifyContentResponse
 */
DescribeVerifyContentResponse Client::describeVerifyContent(const DescribeVerifyContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifyContentWithOptions(request, runtime);
}

/**
 * @summary Disables real-time log delivery for specific accelerated domain names.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DisableRealtimeLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableRealtimeLogDeliveryResponse
 */
DisableRealtimeLogDeliveryResponse Client::disableRealtimeLogDeliveryWithOptions(const DisableRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableRealtimeLogDelivery"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableRealtimeLogDeliveryResponse>();
}

/**
 * @summary Disables real-time log delivery for specific accelerated domain names.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DisableRealtimeLogDeliveryRequest
 * @return DisableRealtimeLogDeliveryResponse
 */
DisableRealtimeLogDeliveryResponse Client::disableRealtimeLogDelivery(const DisableRealtimeLogDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableRealtimeLogDeliveryWithOptions(request, runtime);
}

/**
 * @summary Enables real-time log delivery for an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request EnableRealtimeLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableRealtimeLogDeliveryResponse
 */
EnableRealtimeLogDeliveryResponse Client::enableRealtimeLogDeliveryWithOptions(const EnableRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableRealtimeLogDelivery"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableRealtimeLogDeliveryResponse>();
}

/**
 * @summary Enables real-time log delivery for an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request EnableRealtimeLogDeliveryRequest
 * @return EnableRealtimeLogDeliveryResponse
 */
EnableRealtimeLogDeliveryResponse Client::enableRealtimeLogDelivery(const EnableRealtimeLogDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableRealtimeLogDeliveryWithOptions(request, runtime);
}

/**
 * @summary 按域名、functionName查询灰度配置信息，返回的信息中包含当前的灰度状态、灰度进度
 *
 * @param request GetGrayDomainFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGrayDomainFunctionResponse
 */
GetGrayDomainFunctionResponse Client::getGrayDomainFunctionWithOptions(const GetGrayDomainFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  if (!!request.hasFunctionNames()) {
    body["FunctionNames"] = request.functionNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetGrayDomainFunction"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGrayDomainFunctionResponse>();
}

/**
 * @summary 按域名、functionName查询灰度配置信息，返回的信息中包含当前的灰度状态、灰度进度
 *
 * @param request GetGrayDomainFunctionRequest
 * @return GetGrayDomainFunctionResponse
 */
GetGrayDomainFunctionResponse Client::getGrayDomainFunction(const GetGrayDomainFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGrayDomainFunctionWithOptions(request, runtime);
}

/**
 * @summary Queries domain names by log configuration ID.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ListDomainsByLogConfigIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDomainsByLogConfigIdResponse
 */
ListDomainsByLogConfigIdResponse Client::listDomainsByLogConfigIdWithOptions(const ListDomainsByLogConfigIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDomainsByLogConfigId"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDomainsByLogConfigIdResponse>();
}

/**
 * @summary Queries domain names by log configuration ID.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ListDomainsByLogConfigIdRequest
 * @return ListDomainsByLogConfigIdResponse
 */
ListDomainsByLogConfigIdResponse Client::listDomainsByLogConfigId(const ListDomainsByLogConfigIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDomainsByLogConfigIdWithOptions(request, runtime);
}

/**
 * @summary Queries the Function Compute trigger that is set for an Alibaba Cloud CDN event.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ListFCTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFCTriggerResponse
 */
ListFCTriggerResponse Client::listFCTriggerWithOptions(const ListFCTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFCTrigger"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFCTriggerResponse>();
}

/**
 * @summary Queries the Function Compute trigger that is set for an Alibaba Cloud CDN event.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ListFCTriggerRequest
 * @return ListFCTriggerResponse
 */
ListFCTriggerResponse Client::listFCTrigger(const ListFCTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFCTriggerWithOptions(request, runtime);
}

/**
 * @summary Queries all real-time log delivery tasks within your Alibaba Cloud account.
 *
 * @param request ListRealtimeLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRealtimeLogDeliveryResponse
 */
ListRealtimeLogDeliveryResponse Client::listRealtimeLogDeliveryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListRealtimeLogDelivery"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRealtimeLogDeliveryResponse>();
}

/**
 * @summary Queries all real-time log delivery tasks within your Alibaba Cloud account.
 *
 * @return ListRealtimeLogDeliveryResponse
 */
ListRealtimeLogDeliveryResponse Client::listRealtimeLogDelivery() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRealtimeLogDeliveryWithOptions(runtime);
}

/**
 * @summary Queries all domain names that are associated with a specific real-time log delivery configuration record.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ListRealtimeLogDeliveryDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRealtimeLogDeliveryDomainsResponse
 */
ListRealtimeLogDeliveryDomainsResponse Client::listRealtimeLogDeliveryDomainsWithOptions(const ListRealtimeLogDeliveryDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRealtimeLogDeliveryDomains"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRealtimeLogDeliveryDomainsResponse>();
}

/**
 * @summary Queries all domain names that are associated with a specific real-time log delivery configuration record.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ListRealtimeLogDeliveryDomainsRequest
 * @return ListRealtimeLogDeliveryDomainsResponse
 */
ListRealtimeLogDeliveryDomainsResponse Client::listRealtimeLogDeliveryDomains(const ListRealtimeLogDeliveryDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRealtimeLogDeliveryDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the real-time log delivery feature in a specified region.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ListRealtimeLogDeliveryInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRealtimeLogDeliveryInfosResponse
 */
ListRealtimeLogDeliveryInfosResponse Client::listRealtimeLogDeliveryInfosWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListRealtimeLogDeliveryInfos"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRealtimeLogDeliveryInfosResponse>();
}

/**
 * @summary Queries the information about the real-time log delivery feature in a specified region.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @return ListRealtimeLogDeliveryInfosResponse
 */
ListRealtimeLogDeliveryInfosResponse Client::listRealtimeLogDeliveryInfos() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRealtimeLogDeliveryInfosWithOptions(runtime);
}

/**
 * @summary Queries the tags that are attached to a resource.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTagOwnerBid()) {
    query["TagOwnerBid"] = request.tagOwnerBid();
  }

  if (!!request.hasTagOwnerUid()) {
    query["TagOwnerUid"] = request.tagOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags that are attached to a resource.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries all custom log configurations in your account.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ListUserCustomLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserCustomLogConfigResponse
 */
ListUserCustomLogConfigResponse Client::listUserCustomLogConfigWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListUserCustomLogConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserCustomLogConfigResponse>();
}

/**
 * @summary Queries all custom log configurations in your account.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @return ListUserCustomLogConfigResponse
 */
ListUserCustomLogConfigResponse Client::listUserCustomLogConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserCustomLogConfigWithOptions(runtime);
}

/**
 * @summary Modifies the configuration of an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request ModifyCdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCdnDomainResponse
 */
ModifyCdnDomainResponse Client::modifyCdnDomainWithOptions(const ModifyCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.sources();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.topLevelDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCdnDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCdnDomainResponse>();
}

/**
 * @summary Modifies the configuration of an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request ModifyCdnDomainRequest
 * @return ModifyCdnDomainResponse
 */
ModifyCdnDomainResponse Client::modifyCdnDomain(const ModifyCdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCdnDomainWithOptions(request, runtime);
}

/**
 * @summary Transfer domain names from an Alibaba Cloud account to the current account.
 *
 * @description This operation is used in the following scenario:
 * *   You have multiple Alibaba Cloud accounts and want to transfer domain names from Account A to Account B.
 * *   You are prompted that a domain name has been added when you add the domain name to Alibaba Cloud CDN. You do not know which account does the domain name belong to, and you want to transfer the domain name to your current account.
 *
 * @param request ModifyCdnDomainOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCdnDomainOwnerResponse
 */
ModifyCdnDomainOwnerResponse Client::modifyCdnDomainOwnerWithOptions(const ModifyCdnDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCdnDomainOwner"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCdnDomainOwnerResponse>();
}

/**
 * @summary Transfer domain names from an Alibaba Cloud account to the current account.
 *
 * @description This operation is used in the following scenario:
 * *   You have multiple Alibaba Cloud accounts and want to transfer domain names from Account A to Account B.
 * *   You are prompted that a domain name has been added when you add the domain name to Alibaba Cloud CDN. You do not know which account does the domain name belong to, and you want to transfer the domain name to your current account.
 *
 * @param request ModifyCdnDomainOwnerRequest
 * @return ModifyCdnDomainOwnerResponse
 */
ModifyCdnDomainOwnerResponse Client::modifyCdnDomainOwner(const ModifyCdnDomainOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCdnDomainOwnerWithOptions(request, runtime);
}

/**
 * @summary Changes the acceleration region for an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ModifyCdnDomainSchdmByPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCdnDomainSchdmByPropertyResponse
 */
ModifyCdnDomainSchdmByPropertyResponse Client::modifyCdnDomainSchdmByPropertyWithOptions(const ModifyCdnDomainSchdmByPropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasProperty()) {
    query["Property"] = request.property();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCdnDomainSchdmByProperty"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCdnDomainSchdmByPropertyResponse>();
}

/**
 * @summary Changes the acceleration region for an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ModifyCdnDomainSchdmByPropertyRequest
 * @return ModifyCdnDomainSchdmByPropertyResponse
 */
ModifyCdnDomainSchdmByPropertyResponse Client::modifyCdnDomainSchdmByProperty(const ModifyCdnDomainSchdmByPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCdnDomainSchdmByPropertyWithOptions(request, runtime);
}

/**
 * @summary Changes the metering method of Alibaba Cloud CDN.
 *
 * @param request ModifyCdnServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCdnServiceResponse
 */
ModifyCdnServiceResponse Client::modifyCdnServiceWithOptions(const ModifyCdnServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.internetChargeType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCdnService"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCdnServiceResponse>();
}

/**
 * @summary Changes the metering method of Alibaba Cloud CDN.
 *
 * @param request ModifyCdnServiceRequest
 * @return ModifyCdnServiceResponse
 */
ModifyCdnServiceResponse Client::modifyCdnService(const ModifyCdnServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCdnServiceWithOptions(request, runtime);
}

/**
 * @summary A客户定制新增修改域名采样率接口
 *
 * @param request ModifyCustomDomainSampleRateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomDomainSampleRateResponse
 */
ModifyCustomDomainSampleRateResponse Client::modifyCustomDomainSampleRateWithOptions(const ModifyCustomDomainSampleRateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseConfigID()) {
    body["BaseConfigID"] = request.baseConfigID();
  }

  if (!!request.hasDomainNames()) {
    body["DomainNames"] = request.domainNames();
  }

  if (!!request.hasSampleRate()) {
    body["SampleRate"] = request.sampleRate();
  }

  if (!!request.hasSinkID()) {
    body["SinkID"] = request.sinkID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyCustomDomainSampleRate"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustomDomainSampleRateResponse>();
}

/**
 * @summary A客户定制新增修改域名采样率接口
 *
 * @param request ModifyCustomDomainSampleRateRequest
 * @return ModifyCustomDomainSampleRateResponse
 */
ModifyCustomDomainSampleRateResponse Client::modifyCustomDomainSampleRate(const ModifyCustomDomainSampleRateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomDomainSampleRateWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of real-time log delivery for a specific domain name. Each domain name supports only one Logstore.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ModifyRealtimeLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRealtimeLogDeliveryResponse
 */
ModifyRealtimeLogDeliveryResponse Client::modifyRealtimeLogDeliveryWithOptions(const ModifyRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRealtimeLogDelivery"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRealtimeLogDeliveryResponse>();
}

/**
 * @summary Modifies the configurations of real-time log delivery for a specific domain name. Each domain name supports only one Logstore.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ModifyRealtimeLogDeliveryRequest
 * @return ModifyRealtimeLogDeliveryResponse
 */
ModifyRealtimeLogDeliveryResponse Client::modifyRealtimeLogDelivery(const ModifyRealtimeLogDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRealtimeLogDeliveryWithOptions(request, runtime);
}

/**
 * @summary Activates Alibaba Cloud CDN. You must activate Alibaba Cloud CDN before you can manage domain names in Alibaba Cloud CDN.
 *
 * @description *   Alibaba Cloud CDN can be activated only once per Alibaba Cloud account. The Alibaba Cloud account must complete real-name verification to activate Alibaba Cloud CDN.
 * *   You can call this operation up to five times per second per user.
 *
 * @param request OpenCdnServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenCdnServiceResponse
 */
OpenCdnServiceResponse Client::openCdnServiceWithOptions(const OpenCdnServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.internetChargeType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenCdnService"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenCdnServiceResponse>();
}

/**
 * @summary Activates Alibaba Cloud CDN. You must activate Alibaba Cloud CDN before you can manage domain names in Alibaba Cloud CDN.
 *
 * @description *   Alibaba Cloud CDN can be activated only once per Alibaba Cloud account. The Alibaba Cloud account must complete real-name verification to activate Alibaba Cloud CDN.
 * *   You can call this operation up to five times per second per user.
 *
 * @param request OpenCdnServiceRequest
 * @return OpenCdnServiceResponse
 */
OpenCdnServiceResponse Client::openCdnService(const OpenCdnServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openCdnServiceWithOptions(request, runtime);
}

/**
 * @summary 发布灰度配置到线上，支持多种模式，如全网发布、指定方式(灰度发布)，回滚
 *
 * @param request PublishGrayDomainConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishGrayDomainConfigResponse
 */
PublishGrayDomainConfigResponse Client::publishGrayDomainConfigWithOptions(const PublishGrayDomainConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomCountryId()) {
    body["CustomCountryId"] = request.customCountryId();
  }

  if (!!request.hasCustomPercent()) {
    body["CustomPercent"] = request.customPercent();
  }

  if (!!request.hasCustomProvinceId()) {
    body["CustomProvinceId"] = request.customProvinceId();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.publishMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PublishGrayDomainConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishGrayDomainConfigResponse>();
}

/**
 * @summary 发布灰度配置到线上，支持多种模式，如全网发布、指定方式(灰度发布)，回滚
 *
 * @param request PublishGrayDomainConfigRequest
 * @return PublishGrayDomainConfigResponse
 */
PublishGrayDomainConfigResponse Client::publishGrayDomainConfig(const PublishGrayDomainConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishGrayDomainConfigWithOptions(request, runtime);
}

/**
 * @summary Publishes the configurations of the staging environment to the production environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request PublishStagingConfigToProductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishStagingConfigToProductionResponse
 */
PublishStagingConfigToProductionResponse Client::publishStagingConfigToProductionWithOptions(const PublishStagingConfigToProductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishStagingConfigToProduction"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishStagingConfigToProductionResponse>();
}

/**
 * @summary Publishes the configurations of the staging environment to the production environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request PublishStagingConfigToProductionRequest
 * @return PublishStagingConfigToProductionResponse
 */
PublishStagingConfigToProductionResponse Client::publishStagingConfigToProduction(const PublishStagingConfigToProductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishStagingConfigToProductionWithOptions(request, runtime);
}

/**
 * @summary Prefetches content from origin servers to points of presence (POPs). This reduces loads on origin servers because users can directly hit cache upon their first visits.
 *
 * @description *   Alibaba Cloud CDN supports POST requests in which parameters are sent as a form.
 * *   You can call the [RefreshObjectCaches](https://help.aliyun.com/document_detail/91164.html) operation to refresh content and call the [PushObjectCache](https://help.aliyun.com/document_detail/91161.html) operation to prefetch content.
 * *   By default, each Alibaba Cloud account can submit up to 1,000 URLs per day. If the daily peak bandwidth value of your workloads exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to increase your daily quota. Alibaba Cloud reviews your application and then increases the quota accordingly.
 * *   You can specify at most 100 URLs in each prefetch request.
 * *   For each Alibaba Cloud account, the prefetch queue can contain up to 50,000 URLs. Content is prefetched based on the time when the URLs are submitted. The URL that is submitted the earliest has the highest priority. If the number of URLs in the queue reaches 50,000, you cannot submit more URLs until the number drops below 50,000.
 * *   You can call this operation up to 50 times per second per account.
 * *   For more information about how to automate refresh or prefetch tasks, see [Run scripts to refresh and prefetch content](https://help.aliyun.com/document_detail/151829.html).
 * ## Precautions
 * *   After a prefetch task is submitted and completed, the POPs immediately start to retrieve resources from the origin server. Therefore, a large number of refresh tasks cause a large number of concurrent download tasks. This increases the number of requests that are redirected to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
 * *   The time required for a prefetch task to complete is proportional to the size of the prefetched file. In actual practice, most prefetch tasks require 5 to 30 minutes to complete. A task with a smaller average file size requires less time.
 * *   To allow RAM users to perform this operation, you must first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/260300.html).
 *
 * @param request PushObjectCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushObjectCacheResponse
 */
PushObjectCacheResponse Client::pushObjectCacheWithOptions(const PushObjectCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.area();
  }

  if (!!request.hasConsistencyHash()) {
    query["ConsistencyHash"] = request.consistencyHash();
  }

  if (!!request.hasL2Preload()) {
    query["L2Preload"] = request.l2Preload();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.objectPath();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQueryHashkey()) {
    query["QueryHashkey"] = request.queryHashkey();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasWithHeader()) {
    query["WithHeader"] = request.withHeader();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushObjectCache"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushObjectCacheResponse>();
}

/**
 * @summary Prefetches content from origin servers to points of presence (POPs). This reduces loads on origin servers because users can directly hit cache upon their first visits.
 *
 * @description *   Alibaba Cloud CDN supports POST requests in which parameters are sent as a form.
 * *   You can call the [RefreshObjectCaches](https://help.aliyun.com/document_detail/91164.html) operation to refresh content and call the [PushObjectCache](https://help.aliyun.com/document_detail/91161.html) operation to prefetch content.
 * *   By default, each Alibaba Cloud account can submit up to 1,000 URLs per day. If the daily peak bandwidth value of your workloads exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to increase your daily quota. Alibaba Cloud reviews your application and then increases the quota accordingly.
 * *   You can specify at most 100 URLs in each prefetch request.
 * *   For each Alibaba Cloud account, the prefetch queue can contain up to 50,000 URLs. Content is prefetched based on the time when the URLs are submitted. The URL that is submitted the earliest has the highest priority. If the number of URLs in the queue reaches 50,000, you cannot submit more URLs until the number drops below 50,000.
 * *   You can call this operation up to 50 times per second per account.
 * *   For more information about how to automate refresh or prefetch tasks, see [Run scripts to refresh and prefetch content](https://help.aliyun.com/document_detail/151829.html).
 * ## Precautions
 * *   After a prefetch task is submitted and completed, the POPs immediately start to retrieve resources from the origin server. Therefore, a large number of refresh tasks cause a large number of concurrent download tasks. This increases the number of requests that are redirected to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
 * *   The time required for a prefetch task to complete is proportional to the size of the prefetched file. In actual practice, most prefetch tasks require 5 to 30 minutes to complete. A task with a smaller average file size requires less time.
 * *   To allow RAM users to perform this operation, you must first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/260300.html).
 *
 * @param request PushObjectCacheRequest
 * @return PushObjectCacheResponse
 */
PushObjectCacheResponse Client::pushObjectCache(const PushObjectCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushObjectCacheWithOptions(request, runtime);
}

/**
 * @summary Refreshes the cache based on cache tags that you configured.
 *
 * @param request RefreshObjectCacheByCacheTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshObjectCacheByCacheTagResponse
 */
RefreshObjectCacheByCacheTagResponse Client::refreshObjectCacheByCacheTagWithOptions(const RefreshObjectCacheByCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheTag()) {
    query["CacheTag"] = request.cacheTag();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshObjectCacheByCacheTag"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshObjectCacheByCacheTagResponse>();
}

/**
 * @summary Refreshes the cache based on cache tags that you configured.
 *
 * @param request RefreshObjectCacheByCacheTagRequest
 * @return RefreshObjectCacheByCacheTagResponse
 */
RefreshObjectCacheByCacheTagResponse Client::refreshObjectCacheByCacheTag(const RefreshObjectCacheByCacheTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshObjectCacheByCacheTagWithOptions(request, runtime);
}

/**
 * @summary Refreshes files on Alibaba Cloud CDN points of presence (POPs). After files are refreshed, the original file content immediately becomes invalid. If clients request the original file content, Alibaba Cloud CDN forwards the requests to the origin server. Then, Alibaba Cloud CDN caches the latest content to the POPs and returns the content to the clients. Alibaba Cloud CDN allows you to refresh content from multiple URLs at the same time.
 *
 * @description *   Alibaba Cloud CDN supports POST requests in which parameters are sent as a form.
 * *   You can call the [RefreshObjectCaches](https://help.aliyun.com/document_detail/91164.html) operation to refresh content and call the [PushObjectCache](https://help.aliyun.com/document_detail/91161.html) operation to prefetch content.
 * *   You can call the RefreshObjectCaches operation up to 50 times per second per account.
 * *   For more information about how to automatically refresh or prefetch tasks, see [Run scripts to refresh and prefetch content](https://help.aliyun.com/document_detail/151829.html).
 * ## Precautions
 * *   After a refresh task is submitted and completed, specific resources are removed from POPs. When a POP receives a request for the removed resources, the POP forwards the request to the origin server to retrieve the resources. The retrieved resources are returned to the client and cached on the POP. Multiple refresh tasks may cause a large number of resources to be removed from the POPs. This increases the number of requests that are forwarded to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
 * *   A refresh task takes effect 5 to 6 minutes after being submitted. This means that if the resource you want to refresh has a TTL of less than five minutes, you wait for it to expire instead of manually running a refresh task.
 * *   If you want to use RAM users to refresh or prefetch resources, you must obtain the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/260300.html).
 * ### Refresh quota
 * *   By default, each Alibaba Cloud account can refresh content from up to 10,000 URLs and 100 directories per day. The directories include subdirectories. If the daily peak bandwidth value exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to request a quota increase. Alibaba Cloud CDN evaluates your application based on your workloads.
 * *   By default, each Alibaba Cloud account can submit up to 20 refresh rules that contain regular expressions per day. If the daily peak bandwidth of your Alibaba Cloud account exceeds 10 Gbit/s, you can [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex) to request a quota increase.
 * *   You can specify up to 1,000 URL refresh rules, 100 directory refresh rules, or 1 refresh rule that contains regular expressions in each call.
 * *   You can refresh up to 1,000 URLs per minute for each domain name.
 *
 * @param request RefreshObjectCachesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshObjectCachesResponse
 */
RefreshObjectCachesResponse Client::refreshObjectCachesWithOptions(const RefreshObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  json body = {};
  if (!!request.hasForce()) {
    body["Force"] = request.force();
  }

  if (!!request.hasObjectPath()) {
    body["ObjectPath"] = request.objectPath();
  }

  if (!!request.hasObjectType()) {
    body["ObjectType"] = request.objectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RefreshObjectCaches"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshObjectCachesResponse>();
}

/**
 * @summary Refreshes files on Alibaba Cloud CDN points of presence (POPs). After files are refreshed, the original file content immediately becomes invalid. If clients request the original file content, Alibaba Cloud CDN forwards the requests to the origin server. Then, Alibaba Cloud CDN caches the latest content to the POPs and returns the content to the clients. Alibaba Cloud CDN allows you to refresh content from multiple URLs at the same time.
 *
 * @description *   Alibaba Cloud CDN supports POST requests in which parameters are sent as a form.
 * *   You can call the [RefreshObjectCaches](https://help.aliyun.com/document_detail/91164.html) operation to refresh content and call the [PushObjectCache](https://help.aliyun.com/document_detail/91161.html) operation to prefetch content.
 * *   You can call the RefreshObjectCaches operation up to 50 times per second per account.
 * *   For more information about how to automatically refresh or prefetch tasks, see [Run scripts to refresh and prefetch content](https://help.aliyun.com/document_detail/151829.html).
 * ## Precautions
 * *   After a refresh task is submitted and completed, specific resources are removed from POPs. When a POP receives a request for the removed resources, the POP forwards the request to the origin server to retrieve the resources. The retrieved resources are returned to the client and cached on the POP. Multiple refresh tasks may cause a large number of resources to be removed from the POPs. This increases the number of requests that are forwarded to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
 * *   A refresh task takes effect 5 to 6 minutes after being submitted. This means that if the resource you want to refresh has a TTL of less than five minutes, you wait for it to expire instead of manually running a refresh task.
 * *   If you want to use RAM users to refresh or prefetch resources, you must obtain the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/260300.html).
 * ### Refresh quota
 * *   By default, each Alibaba Cloud account can refresh content from up to 10,000 URLs and 100 directories per day. The directories include subdirectories. If the daily peak bandwidth value exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to request a quota increase. Alibaba Cloud CDN evaluates your application based on your workloads.
 * *   By default, each Alibaba Cloud account can submit up to 20 refresh rules that contain regular expressions per day. If the daily peak bandwidth of your Alibaba Cloud account exceeds 10 Gbit/s, you can [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex) to request a quota increase.
 * *   You can specify up to 1,000 URL refresh rules, 100 directory refresh rules, or 1 refresh rule that contains regular expressions in each call.
 * *   You can refresh up to 1,000 URLs per minute for each domain name.
 *
 * @param request RefreshObjectCachesRequest
 * @return RefreshObjectCachesResponse
 */
RefreshObjectCachesResponse Client::refreshObjectCaches(const RefreshObjectCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshObjectCachesWithOptions(request, runtime);
}

/**
 * @summary Rolls back configurations in the staging environment. After you call this operation, all configurations in the staging environment are cleared.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request RollbackStagingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackStagingConfigResponse
 */
RollbackStagingConfigResponse Client::rollbackStagingConfigWithOptions(const RollbackStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackStagingConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackStagingConfigResponse>();
}

/**
 * @summary Rolls back configurations in the staging environment. After you call this operation, all configurations in the staging environment are cleared.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request RollbackStagingConfigRequest
 * @return RollbackStagingConfigResponse
 */
RollbackStagingConfigResponse Client::rollbackStagingConfig(const RollbackStagingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackStagingConfigWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to configure an SSL certificate for a specific domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request SetCdnDomainCSRCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCdnDomainCSRCertificateResponse
 */
SetCdnDomainCSRCertificateResponse Client::setCdnDomainCSRCertificateWithOptions(const SetCdnDomainCSRCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasServerCertificate()) {
    query["ServerCertificate"] = request.serverCertificate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetCdnDomainCSRCertificate"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCdnDomainCSRCertificateResponse>();
}

/**
 * @summary You can call this operation to configure an SSL certificate for a specific domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request SetCdnDomainCSRCertificateRequest
 * @return SetCdnDomainCSRCertificateResponse
 */
SetCdnDomainCSRCertificateResponse Client::setCdnDomainCSRCertificate(const SetCdnDomainCSRCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCdnDomainCSRCertificateWithOptions(request, runtime);
}

/**
 * @summary Enables or disables a ShangMi (SM) certificate for a domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request SetCdnDomainSMCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCdnDomainSMCertificateResponse
 */
SetCdnDomainSMCertificateResponse Client::setCdnDomainSMCertificateWithOptions(const SetCdnDomainSMCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.certIdentifier();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSSLProtocol()) {
    query["SSLProtocol"] = request.SSLProtocol();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetCdnDomainSMCertificate"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCdnDomainSMCertificateResponse>();
}

/**
 * @summary Enables or disables a ShangMi (SM) certificate for a domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request SetCdnDomainSMCertificateRequest
 * @return SetCdnDomainSMCertificateResponse
 */
SetCdnDomainSMCertificateResponse Client::setCdnDomainSMCertificate(const SetCdnDomainSMCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCdnDomainSMCertificateWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the certificate for a domain name and updates the certificate information.
 *
 * @description *   You can call this operation up to 30 times per second per account.
 * *   Method: POST.
 *
 * @param request SetCdnDomainSSLCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCdnDomainSSLCertificateResponse
 */
SetCdnDomainSSLCertificateResponse Client::setCdnDomainSSLCertificateWithOptions(const SetCdnDomainSSLCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.certId();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.certName();
  }

  if (!!request.hasCertRegion()) {
    query["CertRegion"] = request.certRegion();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.certType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSSLPri()) {
    query["SSLPri"] = request.SSLPri();
  }

  if (!!request.hasSSLProtocol()) {
    query["SSLProtocol"] = request.SSLProtocol();
  }

  if (!!request.hasSSLPub()) {
    query["SSLPub"] = request.SSLPub();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetCdnDomainSSLCertificate"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCdnDomainSSLCertificateResponse>();
}

/**
 * @summary Enables or disables the certificate for a domain name and updates the certificate information.
 *
 * @description *   You can call this operation up to 30 times per second per account.
 * *   Method: POST.
 *
 * @param request SetCdnDomainSSLCertificateRequest
 * @return SetCdnDomainSSLCertificateResponse
 */
SetCdnDomainSSLCertificateResponse Client::setCdnDomainSSLCertificate(const SetCdnDomainSSLCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCdnDomainSSLCertificateWithOptions(request, runtime);
}

/**
 * @summary Configures a domain name to be accelerated in the staging environment.
 *
 * @description >  You can call this operation up to 30 times per second per account.
 *
 * @param request SetCdnDomainStagingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCdnDomainStagingConfigResponse
 */
SetCdnDomainStagingConfigResponse Client::setCdnDomainStagingConfigWithOptions(const SetCdnDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasFunctions()) {
    query["Functions"] = request.functions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetCdnDomainStagingConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCdnDomainStagingConfigResponse>();
}

/**
 * @summary Configures a domain name to be accelerated in the staging environment.
 *
 * @description >  You can call this operation up to 30 times per second per account.
 *
 * @param request SetCdnDomainStagingConfigRequest
 * @return SetCdnDomainStagingConfigResponse
 */
SetCdnDomainStagingConfigResponse Client::setCdnDomainStagingConfig(const SetCdnDomainStagingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCdnDomainStagingConfigWithOptions(request, runtime);
}

/**
 * @summary Blocks or unblocks IP addresses from accessing domain names.
 *
 * @description > 
 * *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
 * *   This operation is suitable for blocking or unblocking a maximum of 1,000 IP addresses or CIDR blocks at a time.
 *
 * @param request SetCdnFullDomainsBlockIPRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCdnFullDomainsBlockIPResponse
 */
SetCdnFullDomainsBlockIPResponse Client::setCdnFullDomainsBlockIPWithOptions(const SetCdnFullDomainsBlockIPRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBlockInterval()) {
    body["BlockInterval"] = request.blockInterval();
  }

  if (!!request.hasIPList()) {
    body["IPList"] = request.IPList();
  }

  if (!!request.hasOperationType()) {
    body["OperationType"] = request.operationType();
  }

  if (!!request.hasUpdateType()) {
    body["UpdateType"] = request.updateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetCdnFullDomainsBlockIP"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCdnFullDomainsBlockIPResponse>();
}

/**
 * @summary Blocks or unblocks IP addresses from accessing domain names.
 *
 * @description > 
 * *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
 * *   This operation is suitable for blocking or unblocking a maximum of 1,000 IP addresses or CIDR blocks at a time.
 *
 * @param request SetCdnFullDomainsBlockIPRequest
 * @return SetCdnFullDomainsBlockIPResponse
 */
SetCdnFullDomainsBlockIPResponse Client::setCdnFullDomainsBlockIP(const SetCdnFullDomainsBlockIPRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCdnFullDomainsBlockIPWithOptions(request, runtime);
}

/**
 * @summary Sets a custom origin header.
 *
 * @param request SetReqHeaderConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetReqHeaderConfigResponse
 */
SetReqHeaderConfigResponse Client::setReqHeaderConfigWithOptions(const SetReqHeaderConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetReqHeaderConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetReqHeaderConfigResponse>();
}

/**
 * @summary Sets a custom origin header.
 *
 * @param request SetReqHeaderConfigRequest
 * @return SetReqHeaderConfigResponse
 */
SetReqHeaderConfigResponse Client::setReqHeaderConfig(const SetReqHeaderConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setReqHeaderConfigWithOptions(request, runtime);
}

/**
 * @summary Configures the virtual waiting room feature for an accelerated domain name. This operation is available only for accelerated domain names of the Dynamic CDN workload type.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request SetWaitingRoomConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetWaitingRoomConfigResponse
 */
SetWaitingRoomConfigResponse Client::setWaitingRoomConfigWithOptions(const SetWaitingRoomConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowPct()) {
    query["AllowPct"] = request.allowPct();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasGapTime()) {
    query["GapTime"] = request.gapTime();
  }

  if (!!request.hasMaxTimeWait()) {
    query["MaxTimeWait"] = request.maxTimeWait();
  }

  if (!!request.hasWaitUri()) {
    query["WaitUri"] = request.waitUri();
  }

  if (!!request.hasWaitUrl()) {
    query["WaitUrl"] = request.waitUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetWaitingRoomConfig"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetWaitingRoomConfigResponse>();
}

/**
 * @summary Configures the virtual waiting room feature for an accelerated domain name. This operation is available only for accelerated domain names of the Dynamic CDN workload type.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request SetWaitingRoomConfigRequest
 * @return SetWaitingRoomConfigResponse
 */
SetWaitingRoomConfigResponse Client::setWaitingRoomConfig(const SetWaitingRoomConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setWaitingRoomConfigWithOptions(request, runtime);
}

/**
 * @summary Enables a disabled domain name. After the domain name is enabled, the value of the DomainStatus parameter is changed to Online.
 *
 * @description *   If the domain name is in an invalid state or you have an overdue payment in your account, the domain name cannot be enabled.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request StartCdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartCdnDomainResponse
 */
StartCdnDomainResponse Client::startCdnDomainWithOptions(const StartCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartCdnDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartCdnDomainResponse>();
}

/**
 * @summary Enables a disabled domain name. After the domain name is enabled, the value of the DomainStatus parameter is changed to Online.
 *
 * @description *   If the domain name is in an invalid state or you have an overdue payment in your account, the domain name cannot be enabled.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request StartCdnDomainRequest
 * @return StartCdnDomainResponse
 */
StartCdnDomainResponse Client::startCdnDomain(const StartCdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startCdnDomainWithOptions(request, runtime);
}

/**
 * @summary Disables an accelerated domain name. After the domain name is disabled, the value of the DomainStatus parameter is changed to Offline.
 *
 * @description *   After an accelerated domain is disabled, Alibaba Cloud CDN retains its information and routes all the requests that are destined for the accelerated domain to the origin server.
 * *   You can call this operation up to 40 times per second per account.
 *
 * @param request StopCdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopCdnDomainResponse
 */
StopCdnDomainResponse Client::stopCdnDomainWithOptions(const StopCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopCdnDomain"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopCdnDomainResponse>();
}

/**
 * @summary Disables an accelerated domain name. After the domain name is disabled, the value of the DomainStatus parameter is changed to Offline.
 *
 * @description *   After an accelerated domain is disabled, Alibaba Cloud CDN retains its information and routes all the requests that are destined for the accelerated domain to the origin server.
 * *   You can call this operation up to 40 times per second per account.
 *
 * @param request StopCdnDomainRequest
 * @return StopCdnDomainResponse
 */
StopCdnDomainResponse Client::stopCdnDomain(const StopCdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopCdnDomainWithOptions(request, runtime);
}

/**
 * @summary Adds one or more tags to specific resources.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds one or more tags to specific resources.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from specified resources.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from specified resources.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates a tracking task.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request UpdateCdnDeliverTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCdnDeliverTaskResponse
 */
UpdateCdnDeliverTaskResponse Client::updateCdnDeliverTaskWithOptions(const UpdateCdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeliver()) {
    body["Deliver"] = request.deliver();
  }

  if (!!request.hasDeliverId()) {
    body["DeliverId"] = request.deliverId();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasReports()) {
    body["Reports"] = request.reports();
  }

  if (!!request.hasSchedule()) {
    body["Schedule"] = request.schedule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateCdnDeliverTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCdnDeliverTaskResponse>();
}

/**
 * @summary Updates a tracking task.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request UpdateCdnDeliverTaskRequest
 * @return UpdateCdnDeliverTaskResponse
 */
UpdateCdnDeliverTaskResponse Client::updateCdnDeliverTask(const UpdateCdnDeliverTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCdnDeliverTaskWithOptions(request, runtime);
}

/**
 * @summary Updates one or more operations reports.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request UpdateCdnSubTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCdnSubTaskResponse
 */
UpdateCdnSubTaskResponse Client::updateCdnSubTaskWithOptions(const UpdateCdnSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasReportIds()) {
    body["ReportIds"] = request.reportIds();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateCdnSubTask"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCdnSubTaskResponse>();
}

/**
 * @summary Updates one or more operations reports.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request UpdateCdnSubTaskRequest
 * @return UpdateCdnSubTaskResponse
 */
UpdateCdnSubTaskResponse Client::updateCdnSubTask(const UpdateCdnSubTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCdnSubTaskWithOptions(request, runtime);
}

/**
 * @summary Updates a specified Function Compute trigger.
 *
 * @param request UpdateFCTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFCTriggerResponse
 */
UpdateFCTriggerResponse Client::updateFCTriggerWithOptions(const UpdateFCTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTriggerARN()) {
    query["TriggerARN"] = request.triggerARN();
  }

  json body = {};
  if (!!request.hasFunctionARN()) {
    body["FunctionARN"] = request.functionARN();
  }

  if (!!request.hasNotes()) {
    body["Notes"] = request.notes();
  }

  if (!!request.hasRoleARN()) {
    body["RoleARN"] = request.roleARN();
  }

  if (!!request.hasSourceARN()) {
    body["SourceARN"] = request.sourceARN();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFCTrigger"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFCTriggerResponse>();
}

/**
 * @summary Updates a specified Function Compute trigger.
 *
 * @param request UpdateFCTriggerRequest
 * @return UpdateFCTriggerResponse
 */
UpdateFCTriggerResponse Client::updateFCTrigger(const UpdateFCTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFCTriggerWithOptions(request, runtime);
}

/**
 * @summary Verifies the ownership of a specified domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request VerifyDomainOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyDomainOwnerResponse
 */
VerifyDomainOwnerResponse Client::verifyDomainOwnerWithOptions(const VerifyDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.verifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyDomainOwner"},
    {"version" , "2018-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyDomainOwnerResponse>();
}

/**
 * @summary Verifies the ownership of a specified domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request VerifyDomainOwnerRequest
 * @return VerifyDomainOwnerResponse
 */
VerifyDomainOwnerResponse Client::verifyDomainOwner(const VerifyDomainOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyDomainOwnerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cdn20180510