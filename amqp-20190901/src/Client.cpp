#include <darabonba/Core.hpp>
#include <alibabacloud/Amqp20190901.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Amqp20190901::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Amqp20190901
{

AlibabaCloud::Amqp20190901::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("amqp", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 路由绑定
 *
 * @param request BindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindResponse
 */
BindResponse Client::bindWithOptions(const BindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArgument()) {
    query["Argument"] = request.argument();
  }

  if (!!request.hasBindingKey()) {
    query["BindingKey"] = request.bindingKey();
  }

  if (!!request.hasBindingType()) {
    query["BindingType"] = request.bindingType();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasDstName()) {
    query["DstName"] = request.dstName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSrcName()) {
    query["SrcName"] = request.srcName();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Bind"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindResponse>();
}

/**
 * @summary 路由绑定
 *
 * @param request BindRequest
 * @return BindResponse
 */
BindResponse Client::bind(const BindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindWithOptions(request, runtime);
}

/**
 * @summary 删除用户配置
 *
 * @param request CancelUserSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelUserSettingResponse
 */
CancelUserSettingResponse Client::cancelUserSettingWithOptions(const CancelUserSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelUserSetting"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelUserSettingResponse>();
}

/**
 * @summary 删除用户配置
 *
 * @param request CancelUserSettingRequest
 * @return CancelUserSettingResponse
 */
CancelUserSettingResponse Client::cancelUserSetting(const CancelUserSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelUserSettingWithOptions(request, runtime);
}

/**
 * @summary 新增用户配置
 *
 * @param request ConfigureUserSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureUserSettingResponse
 */
ConfigureUserSettingResponse Client::configureUserSettingWithOptions(const ConfigureUserSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.bucketName();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogstore()) {
    query["Logstore"] = request.logstore();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasPutType()) {
    query["PutType"] = request.putType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigureUserSetting"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureUserSettingResponse>();
}

/**
 * @summary 新增用户配置
 *
 * @param request ConfigureUserSettingRequest
 * @return ConfigureUserSettingResponse
 */
ConfigureUserSettingResponse Client::configureUserSetting(const ConfigureUserSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureUserSettingWithOptions(request, runtime);
}

/**
 * @summary 清除售后视角状态
 *
 * @param request ConsoleClearPretendStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConsoleClearPretendStatusResponse
 */
ConsoleClearPretendStatusResponse Client::consoleClearPretendStatusWithOptions(const ConsoleClearPretendStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConsoleClearPretendStatus"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConsoleClearPretendStatusResponse>();
}

/**
 * @summary 清除售后视角状态
 *
 * @param request ConsoleClearPretendStatusRequest
 * @return ConsoleClearPretendStatusResponse
 */
ConsoleClearPretendStatusResponse Client::consoleClearPretendStatus(const ConsoleClearPretendStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return consoleClearPretendStatusWithOptions(request, runtime);
}

/**
 * @summary 保存售后视角状态
 *
 * @param request ConsoleSavePretendStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConsoleSavePretendStatusResponse
 */
ConsoleSavePretendStatusResponse Client::consoleSavePretendStatusWithOptions(const ConsoleSavePretendStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConsoleSavePretendStatus"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConsoleSavePretendStatusResponse>();
}

/**
 * @summary 保存售后视角状态
 *
 * @param request ConsoleSavePretendStatusRequest
 * @return ConsoleSavePretendStatusResponse
 */
ConsoleSavePretendStatusResponse Client::consoleSavePretendStatus(const ConsoleSavePretendStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return consoleSavePretendStatusWithOptions(request, runtime);
}

/**
 * @summary 创建云监控相关角色
 *
 * @param request CreateCloudMonitorSLRRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudMonitorSLRResponse
 */
CreateCloudMonitorSLRResponse Client::createCloudMonitorSLRWithOptions(const CreateCloudMonitorSLRRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudMonitorSLR"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudMonitorSLRResponse>();
}

/**
 * @summary 创建云监控相关角色
 *
 * @param request CreateCloudMonitorSLRRequest
 * @return CreateCloudMonitorSLRResponse
 */
CreateCloudMonitorSLRResponse Client::createCloudMonitorSLR(const CreateCloudMonitorSLRRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudMonitorSLRWithOptions(request, runtime);
}

/**
 * @summary 创建Exchange
 *
 * @param request CreateExchangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExchangeResponse
 */
CreateExchangeResponse Client::createExchangeWithOptions(const CreateExchangeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlternateExchange()) {
    query["AlternateExchange"] = request.alternateExchange();
  }

  if (!!request.hasAutoDelete()) {
    query["AutoDelete"] = request.autoDelete();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasExchangeName()) {
    query["ExchangeName"] = request.exchangeName();
  }

  if (!!request.hasExchangeType()) {
    query["ExchangeType"] = request.exchangeType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInternal()) {
    query["Internal"] = request.internal();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  if (!!request.hasXDelayedType()) {
    query["XDelayedType"] = request.XDelayedType();
  }

  if (!!request.hasXHashHeader()) {
    query["XHashHeader"] = request.XHashHeader();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateExchange"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExchangeResponse>();
}

/**
 * @summary 创建Exchange
 *
 * @param request CreateExchangeRequest
 * @return CreateExchangeResponse
 */
CreateExchangeResponse Client::createExchange(const CreateExchangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExchangeWithOptions(request, runtime);
}

/**
 * @summary 创建日志相关角色
 *
 * @param request CreateLogDeliverySLRRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLogDeliverySLRResponse
 */
CreateLogDeliverySLRResponse Client::createLogDeliverySLRWithOptions(const CreateLogDeliverySLRRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLogDeliverySLR"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLogDeliverySLRResponse>();
}

/**
 * @summary 创建日志相关角色
 *
 * @param request CreateLogDeliverySLRRequest
 * @return CreateLogDeliverySLRResponse
 */
CreateLogDeliverySLRResponse Client::createLogDeliverySLR(const CreateLogDeliverySLRRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLogDeliverySLRWithOptions(request, runtime);
}

/**
 * @summary 创建队列
 *
 * @param request CreateQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQueueResponse
 */
CreateQueueResponse Client::createQueueWithOptions(const CreateQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoDelete()) {
    query["AutoDelete"] = request.autoDelete();
  }

  if (!!request.hasAutoExpire()) {
    query["AutoExpire"] = request.autoExpire();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasDeadLetterExchange()) {
    query["DeadLetterExchange"] = request.deadLetterExchange();
  }

  if (!!request.hasDeadLetterRoutingKey()) {
    query["DeadLetterRoutingKey"] = request.deadLetterRoutingKey();
  }

  if (!!request.hasExclusive()) {
    query["Exclusive"] = request.exclusive();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxLength()) {
    query["MaxLength"] = request.maxLength();
  }

  if (!!request.hasMaximunPrioty()) {
    query["MaximunPrioty"] = request.maximunPrioty();
  }

  if (!!request.hasMessageTTL()) {
    query["MessageTTL"] = request.messageTTL();
  }

  if (!!request.hasOrdered()) {
    query["Ordered"] = request.ordered();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasRetryInherit()) {
    query["RetryInherit"] = request.retryInherit();
  }

  if (!!request.hasRetryInterval()) {
    query["RetryInterval"] = request.retryInterval();
  }

  if (!!request.hasRetryTimes()) {
    query["RetryTimes"] = request.retryTimes();
  }

  if (!!request.hasSingleActiveConsumer()) {
    query["SingleActiveConsumer"] = request.singleActiveConsumer();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateQueue"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQueueResponse>();
}

/**
 * @summary 创建队列
 *
 * @param request CreateQueueRequest
 * @return CreateQueueResponse
 */
CreateQueueResponse Client::createQueue(const CreateQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQueueWithOptions(request, runtime);
}

/**
 * @summary 创建Vhost
 *
 * @param request CreateVhostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVhostResponse
 */
CreateVhostResponse Client::createVhostWithOptions(const CreateVhostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVhost"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVhostResponse>();
}

/**
 * @summary 创建Vhost
 *
 * @param request CreateVhostRequest
 * @return CreateVhostResponse
 */
CreateVhostResponse Client::createVhost(const CreateVhostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVhostWithOptions(request, runtime);
}

/**
 * @summary prometheus Dashboard 检查相关服务开通状态
 *
 * @param request DashboardCheckServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DashboardCheckServiceStatusResponse
 */
DashboardCheckServiceStatusResponse Client::dashboardCheckServiceStatusWithOptions(const DashboardCheckServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DashboardCheckServiceStatus"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DashboardCheckServiceStatusResponse>();
}

/**
 * @summary prometheus Dashboard 检查相关服务开通状态
 *
 * @param request DashboardCheckServiceStatusRequest
 * @return DashboardCheckServiceStatusResponse
 */
DashboardCheckServiceStatusResponse Client::dashboardCheckServiceStatus(const DashboardCheckServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dashboardCheckServiceStatusWithOptions(request, runtime);
}

/**
 * @summary 获取 arms grafana 大盘 http url
 *
 * @param request DashboardListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DashboardListResponse
 */
DashboardListResponse Client::dashboardListWithOptions(const DashboardListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasDashboardName()) {
    query["DashboardName"] = request.dashboardName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DashboardList"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DashboardListResponse>();
}

/**
 * @summary 获取 arms grafana 大盘 http url
 *
 * @param request DashboardListRequest
 * @return DashboardListResponse
 */
DashboardListResponse Client::dashboardList(const DashboardListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dashboardListWithOptions(request, runtime);
}

/**
 * @summary 删除Exchange
 *
 * @param tmpReq DeleteExchangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExchangeResponse
 */
DeleteExchangeResponse Client::deleteExchangeWithOptions(const DeleteExchangeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteExchangeShrinkRequest request = DeleteExchangeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExchangeNames()) {
    request.setExchangeNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.exchangeNames(), "ExchangeNames", "json"));
  }

  json query = {};
  if (!!request.hasCollina()) {
    query["Collina"] = request.collina();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasExchangeName()) {
    query["ExchangeName"] = request.exchangeName();
  }

  if (!!request.hasExchangeNamesShrink()) {
    query["ExchangeNames"] = request.exchangeNamesShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUmidToken()) {
    query["UmidToken"] = request.umidToken();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExchange"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExchangeResponse>();
}

/**
 * @summary 删除Exchange
 *
 * @param request DeleteExchangeRequest
 * @return DeleteExchangeResponse
 */
DeleteExchangeResponse Client::deleteExchange(const DeleteExchangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExchangeWithOptions(request, runtime);
}

/**
 * @summary 删除实例
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary 删除实例
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除队列
 *
 * @param tmpReq DeleteQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQueueResponse
 */
DeleteQueueResponse Client::deleteQueueWithOptions(const DeleteQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteQueueShrinkRequest request = DeleteQueueShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueueNames()) {
    request.setQueueNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queueNames(), "QueueNames", "json"));
  }

  json query = {};
  if (!!request.hasCollina()) {
    query["Collina"] = request.collina();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasQueueNamesShrink()) {
    query["QueueNames"] = request.queueNamesShrink();
  }

  if (!!request.hasUmidToken()) {
    query["UmidToken"] = request.umidToken();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQueue"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQueueResponse>();
}

/**
 * @summary 删除队列
 *
 * @param request DeleteQueueRequest
 * @return DeleteQueueResponse
 */
DeleteQueueResponse Client::deleteQueue(const DeleteQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQueueWithOptions(request, runtime);
}

/**
 * @summary 删除静态账户
 *
 * @param request DeleteStaticAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStaticAccountResponse
 */
DeleteStaticAccountResponse Client::deleteStaticAccountWithOptions(const DeleteStaticAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCreateTimeStamp()) {
    query["CreateTimeStamp"] = request.createTimeStamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStaticAccount"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStaticAccountResponse>();
}

/**
 * @summary 删除静态账户
 *
 * @param request DeleteStaticAccountRequest
 * @return DeleteStaticAccountResponse
 */
DeleteStaticAccountResponse Client::deleteStaticAccount(const DeleteStaticAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStaticAccountWithOptions(request, runtime);
}

/**
 * @summary 删除Vhost
 *
 * @param tmpReq DeleteVhostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVhostResponse
 */
DeleteVhostResponse Client::deleteVhostWithOptions(const DeleteVhostRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteVhostShrinkRequest request = DeleteVhostShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVhostNames()) {
    request.setVhostNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.vhostNames(), "VhostNames", "json"));
  }

  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  if (!!request.hasVhostNamesShrink()) {
    query["VhostNames"] = request.vhostNamesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVhost"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVhostResponse>();
}

/**
 * @summary 删除Vhost
 *
 * @param request DeleteVhostRequest
 * @return DeleteVhostResponse
 */
DeleteVhostResponse Client::deleteVhost(const DeleteVhostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVhostWithOptions(request, runtime);
}

/**
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary 导出元数据
 *
 * @param request ExportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportResponse
 */
ExportResponse Client::exportWithOptions(const ExportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasExportType()) {
    query["ExportType"] = request.exportType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Export"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportResponse>();
}

/**
 * @summary 导出元数据
 *
 * @param request ExportRequest
 * @return ExportResponse
 */
ExportResponse Client::export(const ExportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportWithOptions(request, runtime);
}

/**
 * @summary 更新静态账户
 *
 * @param request FetchStaticAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchStaticAccountResponse
 */
FetchStaticAccountResponse Client::fetchStaticAccountWithOptions(const FetchStaticAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountAccessKey()) {
    query["AccountAccessKey"] = request.accountAccessKey();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCreateTimeStamp()) {
    query["CreateTimeStamp"] = request.createTimeStamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasSKey()) {
    query["SKey"] = request.SKey();
  }

  if (!!request.hasSecretSign()) {
    query["SecretSign"] = request.secretSign();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FetchStaticAccount"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FetchStaticAccountResponse>();
}

/**
 * @summary 更新静态账户
 *
 * @param request FetchStaticAccountRequest
 * @return FetchStaticAccountResponse
 */
FetchStaticAccountResponse Client::fetchStaticAccount(const FetchStaticAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fetchStaticAccountWithOptions(request, runtime);
}

/**
 * @summary 根据耗时查询ack信息
 *
 * @param request GetAckInfoByIntervalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAckInfoByIntervalResponse
 */
GetAckInfoByIntervalResponse Client::getAckInfoByIntervalWithOptions(const GetAckInfoByIntervalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntervalSec()) {
    query["IntervalSec"] = request.intervalSec();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAckInfoByInterval"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAckInfoByIntervalResponse>();
}

/**
 * @summary 根据耗时查询ack信息
 *
 * @param request GetAckInfoByIntervalRequest
 * @return GetAckInfoByIntervalResponse
 */
GetAckInfoByIntervalResponse Client::getAckInfoByInterval(const GetAckInfoByIntervalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAckInfoByIntervalWithOptions(request, runtime);
}

/**
 * @summary 获取一个PushMessage（PullMessage）对应的Ack行为
 *
 * @param request GetAckInfoOfMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAckInfoOfMessageResponse
 */
GetAckInfoOfMessageResponse Client::getAckInfoOfMessageWithOptions(const GetAckInfoOfMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasConsumeStatus()) {
    query["ConsumeStatus"] = request.consumeStatus();
  }

  if (!!request.hasDeliveryTag()) {
    query["DeliveryTag"] = request.deliveryTag();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMsgId()) {
    query["MsgId"] = request.msgId();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTimeStamp()) {
    query["TimeStamp"] = request.timeStamp();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAckInfoOfMessage"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAckInfoOfMessageResponse>();
}

/**
 * @summary 获取一个PushMessage（PullMessage）对应的Ack行为
 *
 * @param request GetAckInfoOfMessageRequest
 * @return GetAckInfoOfMessageResponse
 */
GetAckInfoOfMessageResponse Client::getAckInfoOfMessage(const GetAckInfoOfMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAckInfoOfMessageWithOptions(request, runtime);
}

/**
 * @summary 获取绑定数量
 *
 * @param request GetBindingCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBindingCountResponse
 */
GetBindingCountResponse Client::getBindingCountWithOptions(const GetBindingCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindingType()) {
    query["BindingType"] = request.bindingType();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasUpstream()) {
    query["Upstream"] = request.upstream();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBindingCount"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBindingCountResponse>();
}

/**
 * @summary 获取绑定数量
 *
 * @param request GetBindingCountRequest
 * @return GetBindingCountResponse
 */
GetBindingCountResponse Client::getBindingCount(const GetBindingCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBindingCountWithOptions(request, runtime);
}

/**
 * @summary 获取绑定错误
 *
 * @param request GetBindingErrorByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBindingErrorByTaskIdResponse
 */
GetBindingErrorByTaskIdResponse Client::getBindingErrorByTaskIdWithOptions(const GetBindingErrorByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBindingErrorByTaskId"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBindingErrorByTaskIdResponse>();
}

/**
 * @summary 获取绑定错误
 *
 * @param request GetBindingErrorByTaskIdRequest
 * @return GetBindingErrorByTaskIdResponse
 */
GetBindingErrorByTaskIdResponse Client::getBindingErrorByTaskId(const GetBindingErrorByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBindingErrorByTaskIdWithOptions(request, runtime);
}

/**
 * @param request GetCommonBuyUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCommonBuyUrlResponse
 */
GetCommonBuyUrlResponse Client::getCommonBuyUrlWithOptions(const GetCommonBuyUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.actionType();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCommonBuyUrl"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCommonBuyUrlResponse>();
}

/**
 * @param request GetCommonBuyUrlRequest
 * @return GetCommonBuyUrlResponse
 */
GetCommonBuyUrlResponse Client::getCommonBuyUrl(const GetCommonBuyUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCommonBuyUrlWithOptions(request, runtime);
}

/**
 * @summary 通过rocketMqMsgId查询消息消费轨迹
 *
 * @param request GetConsumeTraceByQueueAndRocketMqMsgIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConsumeTraceByQueueAndRocketMqMsgIdResponse
 */
GetConsumeTraceByQueueAndRocketMqMsgIdResponse Client::getConsumeTraceByQueueAndRocketMqMsgIdWithOptions(const GetConsumeTraceByQueueAndRocketMqMsgIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMsgId()) {
    query["MsgId"] = request.msgId();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConsumeTraceByQueueAndRocketMqMsgId"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConsumeTraceByQueueAndRocketMqMsgIdResponse>();
}

/**
 * @summary 通过rocketMqMsgId查询消息消费轨迹
 *
 * @param request GetConsumeTraceByQueueAndRocketMqMsgIdRequest
 * @return GetConsumeTraceByQueueAndRocketMqMsgIdResponse
 */
GetConsumeTraceByQueueAndRocketMqMsgIdResponse Client::getConsumeTraceByQueueAndRocketMqMsgId(const GetConsumeTraceByQueueAndRocketMqMsgIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConsumeTraceByQueueAndRocketMqMsgIdWithOptions(request, runtime);
}

/**
 * @summary 获取Exchange错误
 *
 * @param request GetExchangeErrorByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExchangeErrorByTaskIdResponse
 */
GetExchangeErrorByTaskIdResponse Client::getExchangeErrorByTaskIdWithOptions(const GetExchangeErrorByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExchangeErrorByTaskId"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExchangeErrorByTaskIdResponse>();
}

/**
 * @summary 获取Exchange错误
 *
 * @param request GetExchangeErrorByTaskIdRequest
 * @return GetExchangeErrorByTaskIdResponse
 */
GetExchangeErrorByTaskIdResponse Client::getExchangeErrorByTaskId(const GetExchangeErrorByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExchangeErrorByTaskIdWithOptions(request, runtime);
}

/**
 * @summary 获取Exchange Rate
 *
 * @param tmpReq GetExchangeRateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExchangeRateResponse
 */
GetExchangeRateResponse Client::getExchangeRateWithOptions(const GetExchangeRateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetExchangeRateShrinkRequest request = GetExchangeRateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExchangeNames()) {
    request.setExchangeNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.exchangeNames(), "ExchangeNames", "json"));
  }

  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasExchangeNamesShrink()) {
    query["ExchangeNames"] = request.exchangeNamesShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExchangeRate"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExchangeRateResponse>();
}

/**
 * @summary 获取Exchange Rate
 *
 * @param request GetExchangeRateRequest
 * @return GetExchangeRateResponse
 */
GetExchangeRateResponse Client::getExchangeRate(const GetExchangeRateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExchangeRateWithOptions(request, runtime);
}

/**
 * @summary 通过queueName查询一段时间内的消息id列表
 *
 * @param request GetMsgIdListByQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMsgIdListByQueueResponse
 */
GetMsgIdListByQueueResponse Client::getMsgIdListByQueueWithOptions(const GetMsgIdListByQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMsgIdListByQueue"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMsgIdListByQueueResponse>();
}

/**
 * @summary 通过queueName查询一段时间内的消息id列表
 *
 * @param request GetMsgIdListByQueueRequest
 * @return GetMsgIdListByQueueResponse
 */
GetMsgIdListByQueueResponse Client::getMsgIdListByQueue(const GetMsgIdListByQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMsgIdListByQueueWithOptions(request, runtime);
}

/**
 * @summary GetQueueConsumers
 *
 * @param request GetQueueConsumersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueueConsumersResponse
 */
GetQueueConsumersResponse Client::getQueueConsumersWithOptions(const GetQueueConsumersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueueConsumers"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueueConsumersResponse>();
}

/**
 * @summary GetQueueConsumers
 *
 * @param request GetQueueConsumersRequest
 * @return GetQueueConsumersResponse
 */
GetQueueConsumersResponse Client::getQueueConsumers(const GetQueueConsumersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueueConsumersWithOptions(request, runtime);
}

/**
 * @summary 获取队列错误
 *
 * @param request GetQueueErrorByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueueErrorByTaskIdResponse
 */
GetQueueErrorByTaskIdResponse Client::getQueueErrorByTaskIdWithOptions(const GetQueueErrorByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueueErrorByTaskId"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueueErrorByTaskIdResponse>();
}

/**
 * @summary 获取队列错误
 *
 * @param request GetQueueErrorByTaskIdRequest
 * @return GetQueueErrorByTaskIdResponse
 */
GetQueueErrorByTaskIdResponse Client::getQueueErrorByTaskId(const GetQueueErrorByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueueErrorByTaskIdWithOptions(request, runtime);
}

/**
 * @summary 获取Queue Rate
 *
 * @param tmpReq GetQueueRateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueueRateResponse
 */
GetQueueRateResponse Client::getQueueRateWithOptions(const GetQueueRateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetQueueRateShrinkRequest request = GetQueueRateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueueNames()) {
    request.setQueueNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queueNames(), "QueueNames", "json"));
  }

  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQueueNamesShrink()) {
    query["QueueNames"] = request.queueNamesShrink();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueueRate"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueueRateResponse>();
}

/**
 * @summary 获取Queue Rate
 *
 * @param request GetQueueRateRequest
 * @return GetQueueRateResponse
 */
GetQueueRateResponse Client::getQueueRate(const GetQueueRateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueueRateWithOptions(request, runtime);
}

/**
 * @summary 根据connectionId,channelId,deliveryTag查询SendMessage
 *
 * @param request GetSendTraceByConnectionAndChannelAndDeliveryTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSendTraceByConnectionAndChannelAndDeliveryTagResponse
 */
GetSendTraceByConnectionAndChannelAndDeliveryTagResponse Client::getSendTraceByConnectionAndChannelAndDeliveryTagWithOptions(const GetSendTraceByConnectionAndChannelAndDeliveryTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectionId()) {
    query["ConnectionId"] = request.connectionId();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasDeliveryTag()) {
    query["DeliveryTag"] = request.deliveryTag();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSendTraceByConnectionAndChannelAndDeliveryTag"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSendTraceByConnectionAndChannelAndDeliveryTagResponse>();
}

/**
 * @summary 根据connectionId,channelId,deliveryTag查询SendMessage
 *
 * @param request GetSendTraceByConnectionAndChannelAndDeliveryTagRequest
 * @return GetSendTraceByConnectionAndChannelAndDeliveryTagResponse
 */
GetSendTraceByConnectionAndChannelAndDeliveryTagResponse Client::getSendTraceByConnectionAndChannelAndDeliveryTag(const GetSendTraceByConnectionAndChannelAndDeliveryTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSendTraceByConnectionAndChannelAndDeliveryTagWithOptions(request, runtime);
}

/**
 * @summary 通过用户msgId查询消息发送轨迹
 *
 * @param request GetSendTraceByMsgIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSendTraceByMsgIdResponse
 */
GetSendTraceByMsgIdResponse Client::getSendTraceByMsgIdWithOptions(const GetSendTraceByMsgIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMsgId()) {
    query["MsgId"] = request.msgId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSendTraceByMsgId"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSendTraceByMsgIdResponse>();
}

/**
 * @summary 通过用户msgId查询消息发送轨迹
 *
 * @param request GetSendTraceByMsgIdRequest
 * @return GetSendTraceByMsgIdResponse
 */
GetSendTraceByMsgIdResponse Client::getSendTraceByMsgId(const GetSendTraceByMsgIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSendTraceByMsgIdWithOptions(request, runtime);
}

/**
 * @summary 根据queue 查询SendMessage
 *
 * @param request GetSendTraceByQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSendTraceByQueueResponse
 */
GetSendTraceByQueueResponse Client::getSendTraceByQueueWithOptions(const GetSendTraceByQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSendTraceByQueue"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSendTraceByQueueResponse>();
}

/**
 * @summary 根据queue 查询SendMessage
 *
 * @param request GetSendTraceByQueueRequest
 * @return GetSendTraceByQueueResponse
 */
GetSendTraceByQueueResponse Client::getSendTraceByQueue(const GetSendTraceByQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSendTraceByQueueWithOptions(request, runtime);
}

/**
 * @summary GetStatisticsByVhost
 *
 * @param request GetStatisticsByVhostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStatisticsByVhostResponse
 */
GetStatisticsByVhostResponse Client::getStatisticsByVhostWithOptions(const GetStatisticsByVhostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStatisticsByVhost"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStatisticsByVhostResponse>();
}

/**
 * @summary GetStatisticsByVhost
 *
 * @param request GetStatisticsByVhostRequest
 * @return GetStatisticsByVhostResponse
 */
GetStatisticsByVhostResponse Client::getStatisticsByVhost(const GetStatisticsByVhostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStatisticsByVhostWithOptions(request, runtime);
}

/**
 * @summary 获取任务
 *
 * @param request GetTaskByUidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskByUidResponse
 */
GetTaskByUidResponse Client::getTaskByUidWithOptions(const GetTaskByUidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskByUid"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskByUidResponse>();
}

/**
 * @summary 获取任务
 *
 * @param request GetTaskByUidRequest
 * @return GetTaskByUidResponse
 */
GetTaskByUidResponse Client::getTaskByUid(const GetTaskByUidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskByUidWithOptions(request, runtime);
}

/**
 * @summary 查询一段时间内某个实例或是vhost或是queue的tps
 *
 * @param request GetTpsByTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTpsByTimeResponse
 */
GetTpsByTimeResponse Client::getTpsByTimeWithOptions(const GetTpsByTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApi()) {
    query["Api"] = request.api();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTpsByTime"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTpsByTimeResponse>();
}

/**
 * @summary 查询一段时间内某个实例或是vhost或是queue的tps
 *
 * @param request GetTpsByTimeRequest
 * @return GetTpsByTimeResponse
 */
GetTpsByTimeResponse Client::getTpsByTime(const GetTpsByTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTpsByTimeWithOptions(request, runtime);
}

/**
 * @summary 获取用户配置
 *
 * @param request GetUserSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserSettingResponse
 */
GetUserSettingResponse Client::getUserSettingWithOptions(const GetUserSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserSetting"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserSettingResponse>();
}

/**
 * @summary 获取用户配置
 *
 * @param request GetUserSettingRequest
 * @return GetUserSettingResponse
 */
GetUserSettingResponse Client::getUserSetting(const GetUserSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserSettingWithOptions(request, runtime);
}

/**
 * @summary 获取Vhost错误
 *
 * @param request GetVhostErrorByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVhostErrorByTaskIdResponse
 */
GetVhostErrorByTaskIdResponse Client::getVhostErrorByTaskIdWithOptions(const GetVhostErrorByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVhostErrorByTaskId"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVhostErrorByTaskIdResponse>();
}

/**
 * @summary 获取Vhost错误
 *
 * @param request GetVhostErrorByTaskIdRequest
 * @return GetVhostErrorByTaskIdResponse
 */
GetVhostErrorByTaskIdResponse Client::getVhostErrorByTaskId(const GetVhostErrorByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVhostErrorByTaskIdWithOptions(request, runtime);
}

/**
 * @summary 获取Vhost Rate
 *
 * @param tmpReq GetVhostRateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVhostRateResponse
 */
GetVhostRateResponse Client::getVhostRateWithOptions(const GetVhostRateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetVhostRateShrinkRequest request = GetVhostRateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVhostNames()) {
    request.setVhostNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.vhostNames(), "VhostNames", "json"));
  }

  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVhostNamesShrink()) {
    query["VhostNames"] = request.vhostNamesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVhostRate"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVhostRateResponse>();
}

/**
 * @summary 获取Vhost Rate
 *
 * @param request GetVhostRateRequest
 * @return GetVhostRateResponse
 */
GetVhostRateResponse Client::getVhostRate(const GetVhostRateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVhostRateWithOptions(request, runtime);
}

/**
 * @summary 异步导入元数据
 *
 * @param request ImportDefinitionAsynchronousRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportDefinitionAsynchronousResponse
 */
ImportDefinitionAsynchronousResponse Client::importDefinitionAsynchronousWithOptions(const ImportDefinitionAsynchronousRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasImportType()) {
    query["ImportType"] = request.importType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasOssUrl()) {
    query["OssUrl"] = request.ossUrl();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportDefinitionAsynchronous"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportDefinitionAsynchronousResponse>();
}

/**
 * @summary 异步导入元数据
 *
 * @param request ImportDefinitionAsynchronousRequest
 * @return ImportDefinitionAsynchronousResponse
 */
ImportDefinitionAsynchronousResponse Client::importDefinitionAsynchronous(const ImportDefinitionAsynchronousRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importDefinitionAsynchronousWithOptions(request, runtime);
}

/**
 * @summary 获取实例列表
 *
 * @param request InstancePreivewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstancePreivewResponse
 */
InstancePreivewResponse Client::instancePreivewWithOptions(const InstancePreivewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstancePreivew"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstancePreivewResponse>();
}

/**
 * @summary 获取实例列表
 *
 * @param request InstancePreivewRequest
 * @return InstancePreivewResponse
 */
InstancePreivewResponse Client::instancePreivew(const InstancePreivewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return instancePreivewWithOptions(request, runtime);
}

/**
 * @summary 获取Exchange列表
 *
 * @param request ListExchangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExchangeResponse
 */
ListExchangeResponse Client::listExchangeWithOptions(const ListExchangeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasExchangeNamePrefix()) {
    query["ExchangeNamePrefix"] = request.exchangeNamePrefix();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExchange"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExchangeResponse>();
}

/**
 * @summary 获取Exchange列表
 *
 * @param request ListExchangeRequest
 * @return ListExchangeResponse
 */
ListExchangeResponse Client::listExchange(const ListExchangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExchangeWithOptions(request, runtime);
}

/**
 * @summary 获取Exchange下游列表
 *
 * @param request ListExchangeDownstreamBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExchangeDownstreamBindingsResponse
 */
ListExchangeDownstreamBindingsResponse Client::listExchangeDownstreamBindingsWithOptions(const ListExchangeDownstreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasExchangeName()) {
    query["ExchangeName"] = request.exchangeName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExchangeDownstreamBindings"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExchangeDownstreamBindingsResponse>();
}

/**
 * @summary 获取Exchange下游列表
 *
 * @param request ListExchangeDownstreamBindingsRequest
 * @return ListExchangeDownstreamBindingsResponse
 */
ListExchangeDownstreamBindingsResponse Client::listExchangeDownstreamBindings(const ListExchangeDownstreamBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExchangeDownstreamBindingsWithOptions(request, runtime);
}

/**
 * @summary 获取Exchange上游绑定列表
 *
 * @param request ListExchangeUpstreamBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExchangeUpstreamBindingsResponse
 */
ListExchangeUpstreamBindingsResponse Client::listExchangeUpstreamBindingsWithOptions(const ListExchangeUpstreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasExchangeName()) {
    query["ExchangeName"] = request.exchangeName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExchangeUpstreamBindings"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExchangeUpstreamBindingsResponse>();
}

/**
 * @summary 获取Exchange上游绑定列表
 *
 * @param request ListExchangeUpstreamBindingsRequest
 * @return ListExchangeUpstreamBindingsResponse
 */
ListExchangeUpstreamBindingsResponse Client::listExchangeUpstreamBindings(const ListExchangeUpstreamBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExchangeUpstreamBindingsWithOptions(request, runtime);
}

/**
 * @summary 获取实例列表
 *
 * @param request ListInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceResponse
 */
ListInstanceResponse Client::listInstanceWithOptions(const ListInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstance"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceResponse>();
}

/**
 * @summary 获取实例列表
 *
 * @param request ListInstanceRequest
 * @return ListInstanceResponse
 */
ListInstanceResponse Client::listInstance(const ListInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceWithOptions(request, runtime);
}

/**
 * @summary 获取实例告警
 *
 * @param request ListInstanceAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceAlarmResponse
 */
ListInstanceAlarmResponse Client::listInstanceAlarmWithOptions(const ListInstanceAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceAlarm"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceAlarmResponse>();
}

/**
 * @summary 获取实例告警
 *
 * @param request ListInstanceAlarmRequest
 * @return ListInstanceAlarmResponse
 */
ListInstanceAlarmResponse Client::listInstanceAlarm(const ListInstanceAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceAlarmWithOptions(request, runtime);
}

/**
 * @summary 获取日志Logstore
 *
 * @param request ListLogstoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogstoreResponse
 */
ListLogstoreResponse Client::listLogstoreWithOptions(const ListLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogstore"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogstoreResponse>();
}

/**
 * @summary 获取日志Logstore
 *
 * @param request ListLogstoreRequest
 * @return ListLogstoreResponse
 */
ListLogstoreResponse Client::listLogstore(const ListLogstoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLogstoreWithOptions(request, runtime);
}

/**
 * @summary 获取日志Project
 *
 * @param request ListProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectResponse
 */
ListProjectResponse Client::listProjectWithOptions(const ListProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProject"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectResponse>();
}

/**
 * @summary 获取日志Project
 *
 * @param request ListProjectRequest
 * @return ListProjectResponse
 */
ListProjectResponse Client::listProject(const ListProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectWithOptions(request, runtime);
}

/**
 * @summary 获取队列列表
 *
 * @param request ListQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueueResponse
 */
ListQueueResponse Client::listQueueWithOptions(const ListQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueueNamePrefix()) {
    query["QueueNamePrefix"] = request.queueNamePrefix();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQueue"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueueResponse>();
}

/**
 * @summary 获取队列列表
 *
 * @param request ListQueueRequest
 * @return ListQueueResponse
 */
ListQueueResponse Client::listQueue(const ListQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQueueWithOptions(request, runtime);
}

/**
 * @summary 获取队列上游绑定列表
 *
 * @param request ListQueueUpstreamBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueueUpstreamBindingsResponse
 */
ListQueueUpstreamBindingsResponse Client::listQueueUpstreamBindingsWithOptions(const ListQueueUpstreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQueueUpstreamBindings"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueueUpstreamBindingsResponse>();
}

/**
 * @summary 获取队列上游绑定列表
 *
 * @param request ListQueueUpstreamBindingsRequest
 * @return ListQueueUpstreamBindingsResponse
 */
ListQueueUpstreamBindingsResponse Client::listQueueUpstreamBindings(const ListQueueUpstreamBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQueueUpstreamBindingsWithOptions(request, runtime);
}

/**
 * @summary 获取静态账户列表
 *
 * @param request ListStaticAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStaticAccountsResponse
 */
ListStaticAccountsResponse Client::listStaticAccountsWithOptions(const ListStaticAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStaticAccounts"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStaticAccountsResponse>();
}

/**
 * @summary 获取静态账户列表
 *
 * @param request ListStaticAccountsRequest
 * @return ListStaticAccountsResponse
 */
ListStaticAccountsResponse Client::listStaticAccounts(const ListStaticAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStaticAccountsWithOptions(request, runtime);
}

/**
 * @summary 获取Vhost列表
 *
 * @param request ListVhostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVhostResponse
 */
ListVhostResponse Client::listVhostWithOptions(const ListVhostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVhostNamePrefix()) {
    query["VhostNamePrefix"] = request.vhostNamePrefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVhost"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVhostResponse>();
}

/**
 * @summary 获取Vhost列表
 *
 * @param request ListVhostRequest
 * @return ListVhostResponse
 */
ListVhostResponse Client::listVhost(const ListVhostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVhostWithOptions(request, runtime);
}

/**
 * @summary 获取元数据
 *
 * @param request MetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MetadataResponse
 */
MetadataResponse Client::metadataWithOptions(const MetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Metadata"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MetadataResponse>();
}

/**
 * @summary 获取元数据
 *
 * @param request MetadataRequest
 * @return MetadataResponse
 */
MetadataResponse Client::metadata(const MetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return metadataWithOptions(request, runtime);
}

/**
 * @summary 清空队列
 *
 * @param tmpReq PurgeQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PurgeQueueResponse
 */
PurgeQueueResponse Client::purgeQueueWithOptions(const PurgeQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PurgeQueueShrinkRequest request = PurgeQueueShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueueNames()) {
    request.setQueueNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queueNames(), "QueueNames", "json"));
  }

  json query = {};
  if (!!request.hasCollina()) {
    query["Collina"] = request.collina();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasQueueNamesShrink()) {
    query["QueueNames"] = request.queueNamesShrink();
  }

  if (!!request.hasUmidToken()) {
    query["UmidToken"] = request.umidToken();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PurgeQueue"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PurgeQueueResponse>();
}

/**
 * @summary 清空队列
 *
 * @param request PurgeQueueRequest
 * @return PurgeQueueResponse
 */
PurgeQueueResponse Client::purgeQueue(const PurgeQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return purgeQueueWithOptions(request, runtime);
}

/**
 * @summary 根据Message Id查询消息
 *
 * @param request QueryMessageByMessageIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMessageByMessageIdResponse
 */
QueryMessageByMessageIdResponse Client::queryMessageByMessageIdWithOptions(const QueryMessageByMessageIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMessageByMessageId"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMessageByMessageIdResponse>();
}

/**
 * @summary 根据Message Id查询消息
 *
 * @param request QueryMessageByMessageIdRequest
 * @return QueryMessageByMessageIdResponse
 */
QueryMessageByMessageIdResponse Client::queryMessageByMessageId(const QueryMessageByMessageIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMessageByMessageIdWithOptions(request, runtime);
}

/**
 * @summary 根据队列查询消息
 *
 * @param request QueryMessageByQueueNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMessageByQueueNameResponse
 */
QueryMessageByQueueNameResponse Client::queryMessageByQueueNameWithOptions(const QueryMessageByQueueNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMessageByQueueName"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMessageByQueueNameResponse>();
}

/**
 * @summary 根据队列查询消息
 *
 * @param request QueryMessageByQueueNameRequest
 * @return QueryMessageByQueueNameResponse
 */
QueryMessageByQueueNameResponse Client::queryMessageByQueueName(const QueryMessageByQueueNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMessageByQueueNameWithOptions(request, runtime);
}

/**
 * @summary 实例释放
 *
 * @param request ReleaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstanceWithOptions(const ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstance"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstanceResponse>();
}

/**
 * @summary 实例释放
 *
 * @param request ReleaseInstanceRequest
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstance(const ReleaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceWithOptions(request, runtime);
}

/**
 * @summary 发送消息
 *
 * @param request SendMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendMessageResponse
 */
SendMessageResponse Client::sendMessageWithOptions(const SendMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBody()) {
    query["Body"] = request.body();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasExchangeName()) {
    query["ExchangeName"] = request.exchangeName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
  }

  if (!!request.hasProps()) {
    query["Props"] = request.props();
  }

  if (!!request.hasRoutingKey()) {
    query["RoutingKey"] = request.routingKey();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendMessage"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendMessageResponse>();
}

/**
 * @summary 发送消息
 *
 * @param request SendMessageRequest
 * @return SendMessageResponse
 */
SendMessageResponse Client::sendMessage(const SendMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendMessageWithOptions(request, runtime);
}

/**
 * @summary 发送消息
 *
 * @param request SendMessageCopyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendMessageCopyResponse
 */
SendMessageCopyResponse Client::sendMessageCopyWithOptions(const SendMessageCopyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProcessToken()) {
    query["ProcessToken"] = request.processToken();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.queueName();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendMessageCopy"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendMessageCopyResponse>();
}

/**
 * @summary 发送消息
 *
 * @param request SendMessageCopyRequest
 * @return SendMessageCopyResponse
 */
SendMessageCopyResponse Client::sendMessageCopy(const SendMessageCopyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendMessageCopyWithOptions(request, runtime);
}

/**
 * @summary 取消绑定
 *
 * @param request UnbindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindResponse
 */
UnbindResponse Client::unbindWithOptions(const UnbindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindingKey()) {
    query["BindingKey"] = request.bindingKey();
  }

  if (!!request.hasBindingType()) {
    query["BindingType"] = request.bindingType();
  }

  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasDstName()) {
    query["DstName"] = request.dstName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSrcName()) {
    query["SrcName"] = request.srcName();
  }

  if (!!request.hasVhostName()) {
    query["VhostName"] = request.vhostName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Unbind"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindResponse>();
}

/**
 * @summary 取消绑定
 *
 * @param request UnbindRequest
 * @return UnbindResponse
 */
UnbindResponse Client::unbind(const UnbindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindWithOptions(request, runtime);
}

/**
 * @summary 更新实例
 *
 * @param request UpdateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary 更新实例
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceWithOptions(request, runtime);
}

/**
 * @summary 修改实例的重试策略
 *
 * @param request UpdateInstanceRetryStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceRetryStrategyResponse
 */
UpdateInstanceRetryStrategyResponse Client::updateInstanceRetryStrategyWithOptions(const UpdateInstanceRetryStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRetryInterval()) {
    query["RetryInterval"] = request.retryInterval();
  }

  if (!!request.hasRetryTimes()) {
    query["RetryTimes"] = request.retryTimes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceRetryStrategy"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceRetryStrategyResponse>();
}

/**
 * @summary 修改实例的重试策略
 *
 * @param request UpdateInstanceRetryStrategyRequest
 * @return UpdateInstanceRetryStrategyResponse
 */
UpdateInstanceRetryStrategyResponse Client::updateInstanceRetryStrategy(const UpdateInstanceRetryStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceRetryStrategyWithOptions(request, runtime);
}

/**
 * @summary 更新serverless开关
 *
 * @param request UpdateServerlessSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServerlessSwitchResponse
 */
UpdateServerlessSwitchResponse Client::updateServerlessSwitchWithOptions(const UpdateServerlessSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasServerlessSwitch()) {
    query["ServerlessSwitch"] = request.serverlessSwitch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateServerlessSwitch"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServerlessSwitchResponse>();
}

/**
 * @summary 更新serverless开关
 *
 * @param request UpdateServerlessSwitchRequest
 * @return UpdateServerlessSwitchResponse
 */
UpdateServerlessSwitchResponse Client::updateServerlessSwitch(const UpdateServerlessSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServerlessSwitchWithOptions(request, runtime);
}

/**
 * @summary 升级实例配额
 *
 * @param request UpgradeLimitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeLimitsResponse
 */
UpgradeLimitsResponse Client::upgradeLimitsWithOptions(const UpgradeLimitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleSessionId()) {
    query["ConsoleSessionId"] = request.consoleSessionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeLimits"},
    {"version" , "2019-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeLimitsResponse>();
}

/**
 * @summary 升级实例配额
 *
 * @param request UpgradeLimitsRequest
 * @return UpgradeLimitsResponse
 */
UpgradeLimitsResponse Client::upgradeLimits(const UpgradeLimitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeLimitsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Amqp20190901