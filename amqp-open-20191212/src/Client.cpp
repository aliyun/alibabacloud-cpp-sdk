#include <darabonba/Core.hpp>
#include <alibabacloud/AmqpOpen20191212.hpp>
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
using namespace AlibabaCloud::AmqpOpen20191212::Models;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{

AlibabaCloud::AmqpOpen20191212::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("amqp-open", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a pair of static username and password. If you access an ApsaraMQ for RabbitMQ broker from an open source RabbitMQ client, you must use a pair of username and password for authentication. You can access the ApsaraMQ for RabbitMQ broker only after the authentication is passed. ApsaraMQ for RabbitMQ allows you to generate usernames and passwords by using AccessKey pairs provided by Alibaba Cloud Resource Access Management (RAM).
 *
 * @param request CreateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccountWithOptions(const CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasAccountAccessKey()) {
    query["accountAccessKey"] = request.accountAccessKey();
  }

  if (!!request.hasCreateTimestamp()) {
    query["createTimestamp"] = request.createTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasSecretSign()) {
    query["secretSign"] = request.secretSign();
  }

  if (!!request.hasSignature()) {
    query["signature"] = request.signature();
  }

  if (!!request.hasUserName()) {
    query["userName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccountResponse>();
}

/**
 * @summary Creates a pair of static username and password. If you access an ApsaraMQ for RabbitMQ broker from an open source RabbitMQ client, you must use a pair of username and password for authentication. You can access the ApsaraMQ for RabbitMQ broker only after the authentication is passed. ApsaraMQ for RabbitMQ allows you to generate usernames and passwords by using AccessKey pairs provided by Alibaba Cloud Resource Access Management (RAM).
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a binding. In ApsaraMQ for RabbitMQ, after a producer sends a message to an exchange, the exchange routes the message to a queue or another exchange based on the binding relationship and the routing rule.
 *
 * @param request CreateBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBindingResponse
 */
CreateBindingResponse Client::createBindingWithOptions(const CreateBindingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArgument()) {
    body["Argument"] = request.argument();
  }

  if (!!request.hasBindingKey()) {
    body["BindingKey"] = request.bindingKey();
  }

  if (!!request.hasBindingType()) {
    body["BindingType"] = request.bindingType();
  }

  if (!!request.hasDestinationName()) {
    body["DestinationName"] = request.destinationName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSourceExchange()) {
    body["SourceExchange"] = request.sourceExchange();
  }

  if (!!request.hasVirtualHost()) {
    body["VirtualHost"] = request.virtualHost();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateBinding"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBindingResponse>();
}

/**
 * @summary Creates a binding. In ApsaraMQ for RabbitMQ, after a producer sends a message to an exchange, the exchange routes the message to a queue or another exchange based on the binding relationship and the routing rule.
 *
 * @param request CreateBindingRequest
 * @return CreateBindingResponse
 */
CreateBindingResponse Client::createBinding(const CreateBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBindingWithOptions(request, runtime);
}

/**
 * @summary Creates an exchange. In ApsaraMQ for RabbitMQ, an exchange is used to route a message that is received from a producer to one or more queues or to discard the message. An exchange routes a message to queues by using the routing key and binding keys.
 *
 * @param request CreateExchangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExchangeResponse
 */
CreateExchangeResponse Client::createExchangeWithOptions(const CreateExchangeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlternateExchange()) {
    body["AlternateExchange"] = request.alternateExchange();
  }

  if (!!request.hasAutoDeleteState()) {
    body["AutoDeleteState"] = request.autoDeleteState();
  }

  if (!!request.hasExchangeName()) {
    body["ExchangeName"] = request.exchangeName();
  }

  if (!!request.hasExchangeType()) {
    body["ExchangeType"] = request.exchangeType();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInternal()) {
    body["Internal"] = request.internal();
  }

  if (!!request.hasVirtualHost()) {
    body["VirtualHost"] = request.virtualHost();
  }

  if (!!request.hasXDelayedType()) {
    body["XDelayedType"] = request.XDelayedType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateExchange"},
    {"version" , "2019-12-12"},
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
 * @summary Creates an exchange. In ApsaraMQ for RabbitMQ, an exchange is used to route a message that is received from a producer to one or more queues or to discard the message. An exchange routes a message to queues by using the routing key and binding keys.
 *
 * @param request CreateExchangeRequest
 * @return CreateExchangeResponse
 */
CreateExchangeResponse Client::createExchange(const CreateExchangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExchangeWithOptions(request, runtime);
}

/**
 * @summary Creates an ApsaraMQ for RabbitMQ instance.
 *
 * @description **Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://help.aliyun.com/document_detail/606747.html) of ApsaraMQ for RabbitMQ.
 *
 * @param tmpReq CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateInstanceShrinkRequest request = CreateInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    query["AutoRenewPeriod"] = request.autoRenewPeriod();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasEncryptedInstance()) {
    query["EncryptedInstance"] = request.encryptedInstance();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasKmsKeyId()) {
    query["KmsKeyId"] = request.kmsKeyId();
  }

  if (!!request.hasMaxConnections()) {
    query["MaxConnections"] = request.maxConnections();
  }

  if (!!request.hasMaxEipTps()) {
    query["MaxEipTps"] = request.maxEipTps();
  }

  if (!!request.hasMaxPrivateTps()) {
    query["MaxPrivateTps"] = request.maxPrivateTps();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPeriodCycle()) {
    query["PeriodCycle"] = request.periodCycle();
  }

  if (!!request.hasProvisionedCapacity()) {
    query["ProvisionedCapacity"] = request.provisionedCapacity();
  }

  if (!!request.hasQueueCapacity()) {
    query["QueueCapacity"] = request.queueCapacity();
  }

  if (!!request.hasRenewStatus()) {
    query["RenewStatus"] = request.renewStatus();
  }

  if (!!request.hasRenewalDurationUnit()) {
    query["RenewalDurationUnit"] = request.renewalDurationUnit();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServerlessChargeType()) {
    query["ServerlessChargeType"] = request.serverlessChargeType();
  }

  if (!!request.hasStorageSize()) {
    query["StorageSize"] = request.storageSize();
  }

  if (!!request.hasSupportEip()) {
    query["SupportEip"] = request.supportEip();
  }

  if (!!request.hasSupportTracing()) {
    query["SupportTracing"] = request.supportTracing();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTracingStorageTime()) {
    query["TracingStorageTime"] = request.tracingStorageTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates an ApsaraMQ for RabbitMQ instance.
 *
 * @description **Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://help.aliyun.com/document_detail/606747.html) of ApsaraMQ for RabbitMQ.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a queue. In ApsaraMQ for RabbitMQ, a queue is a message queue. All messages in ApsaraMQ for RabbitMQ are sent to a specific exchange and then routed to a bound queue by the exchange.
 *
 * @param request CreateQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQueueResponse
 */
CreateQueueResponse Client::createQueueWithOptions(const CreateQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoDeleteState()) {
    body["AutoDeleteState"] = request.autoDeleteState();
  }

  if (!!request.hasAutoExpireState()) {
    body["AutoExpireState"] = request.autoExpireState();
  }

  if (!!request.hasDeadLetterExchange()) {
    body["DeadLetterExchange"] = request.deadLetterExchange();
  }

  if (!!request.hasDeadLetterRoutingKey()) {
    body["DeadLetterRoutingKey"] = request.deadLetterRoutingKey();
  }

  if (!!request.hasExclusiveState()) {
    body["ExclusiveState"] = request.exclusiveState();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxLength()) {
    body["MaxLength"] = request.maxLength();
  }

  if (!!request.hasMaximumPriority()) {
    body["MaximumPriority"] = request.maximumPriority();
  }

  if (!!request.hasMessageTTL()) {
    body["MessageTTL"] = request.messageTTL();
  }

  if (!!request.hasQueueName()) {
    body["QueueName"] = request.queueName();
  }

  if (!!request.hasVirtualHost()) {
    body["VirtualHost"] = request.virtualHost();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateQueue"},
    {"version" , "2019-12-12"},
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
 * @summary Creates a queue. In ApsaraMQ for RabbitMQ, a queue is a message queue. All messages in ApsaraMQ for RabbitMQ are sent to a specific exchange and then routed to a bound queue by the exchange.
 *
 * @param request CreateQueueRequest
 * @return CreateQueueResponse
 */
CreateQueueResponse Client::createQueue(const CreateQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQueueWithOptions(request, runtime);
}

/**
 * @summary Creates a vhost. A vhost is used to logically isolate resources. Each vhost manages its own exchanges, queues, and bindings. Applications can run on independent vhosts in a secure manner. This way, the business of an application is not affected by other applications. Before you connect producers and consumers to an ApsaraMQ for RabbitMQ instance, you must specify vhosts for the producers and consumers.
 *
 * @param request CreateVirtualHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVirtualHostResponse
 */
CreateVirtualHostResponse Client::createVirtualHostWithOptions(const CreateVirtualHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVirtualHost()) {
    body["VirtualHost"] = request.virtualHost();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVirtualHost"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVirtualHostResponse>();
}

/**
 * @summary Creates a vhost. A vhost is used to logically isolate resources. Each vhost manages its own exchanges, queues, and bindings. Applications can run on independent vhosts in a secure manner. This way, the business of an application is not affected by other applications. Before you connect producers and consumers to an ApsaraMQ for RabbitMQ instance, you must specify vhosts for the producers and consumers.
 *
 * @param request CreateVirtualHostRequest
 * @return CreateVirtualHostResponse
 */
CreateVirtualHostResponse Client::createVirtualHost(const CreateVirtualHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVirtualHostWithOptions(request, runtime);
}

/**
 * @summary Deletes a pair of username and password.
 *
 * @param request DeleteAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccountWithOptions(const DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimestamp()) {
    query["CreateTimestamp"] = request.createTimestamp();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccountResponse>();
}

/**
 * @summary Deletes a pair of username and password.
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a binding to unbind a queue or an exchange from a source exchange.
 *
 * @param request DeleteBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBindingResponse
 */
DeleteBindingResponse Client::deleteBindingWithOptions(const DeleteBindingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBindingKey()) {
    body["BindingKey"] = request.bindingKey();
  }

  if (!!request.hasBindingType()) {
    body["BindingType"] = request.bindingType();
  }

  if (!!request.hasDestinationName()) {
    body["DestinationName"] = request.destinationName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSourceExchange()) {
    body["SourceExchange"] = request.sourceExchange();
  }

  if (!!request.hasVirtualHost()) {
    body["VirtualHost"] = request.virtualHost();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteBinding"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBindingResponse>();
}

/**
 * @summary Deletes a binding to unbind a queue or an exchange from a source exchange.
 *
 * @param request DeleteBindingRequest
 * @return DeleteBindingResponse
 */
DeleteBindingResponse Client::deleteBinding(const DeleteBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBindingWithOptions(request, runtime);
}

/**
 * @summary Deletes an exchange.
 *
 * @description ## [](#)Usage notes
 * *   You cannot delete exchanges of the **headers** and **x-jms-topic** types.
 * *   You cannot delete built-in exchanges in a vhost. These exchanges are amq.direct, amq.topic, and amq.fanout.
 *
 * @param request DeleteExchangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExchangeResponse
 */
DeleteExchangeResponse Client::deleteExchangeWithOptions(const DeleteExchangeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExchangeName()) {
    body["ExchangeName"] = request.exchangeName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVirtualHost()) {
    body["VirtualHost"] = request.virtualHost();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteExchange"},
    {"version" , "2019-12-12"},
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
 * @summary Deletes an exchange.
 *
 * @description ## [](#)Usage notes
 * *   You cannot delete exchanges of the **headers** and **x-jms-topic** types.
 * *   You cannot delete built-in exchanges in a vhost. These exchanges are amq.direct, amq.topic, and amq.fanout.
 *
 * @param request DeleteExchangeRequest
 * @return DeleteExchangeResponse
 */
DeleteExchangeResponse Client::deleteExchange(const DeleteExchangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExchangeWithOptions(request, runtime);
}

/**
 * @summary Deletes a queue.
 *
 * @param request DeleteQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQueueResponse
 */
DeleteQueueResponse Client::deleteQueueWithOptions(const DeleteQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQueueName()) {
    body["QueueName"] = request.queueName();
  }

  if (!!request.hasVirtualHost()) {
    body["VirtualHost"] = request.virtualHost();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteQueue"},
    {"version" , "2019-12-12"},
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
 * @summary Deletes a queue.
 *
 * @param request DeleteQueueRequest
 * @return DeleteQueueResponse
 */
DeleteQueueResponse Client::deleteQueue(const DeleteQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQueueWithOptions(request, runtime);
}

/**
 * @summary Deletes a virtual host (vhost).
 *
 * @description Before you delete a vhost, make sure that all exchanges and queues in the vhost are deleted.
 *
 * @param request DeleteVirtualHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVirtualHostResponse
 */
DeleteVirtualHostResponse Client::deleteVirtualHostWithOptions(const DeleteVirtualHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasVirtualHost()) {
    body["VirtualHost"] = request.virtualHost();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVirtualHost"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVirtualHostResponse>();
}

/**
 * @summary Deletes a virtual host (vhost).
 *
 * @description Before you delete a vhost, make sure that all exchanges and queues in the vhost are deleted.
 *
 * @param request DeleteVirtualHostRequest
 * @return DeleteVirtualHostResponse
 */
DeleteVirtualHostResponse Client::deleteVirtualHost(const DeleteVirtualHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVirtualHostWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request GetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the maximum number of vhosts, exchanges, and queues that you can create and the number of created vhosts, exchanges, and queues on an ApsaraMQ for RabbitMQ instance.
 *
 * @param request GetMetadataAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetadataAmountResponse
 */
GetMetadataAmountResponse Client::getMetadataAmountWithOptions(const GetMetadataAmountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetadataAmount"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetadataAmountResponse>();
}

/**
 * @summary Queries the maximum number of vhosts, exchanges, and queues that you can create and the number of created vhosts, exchanges, and queues on an ApsaraMQ for RabbitMQ instance.
 *
 * @param request GetMetadataAmountRequest
 * @return GetMetadataAmountResponse
 */
GetMetadataAmountResponse Client::getMetadataAmount(const GetMetadataAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetadataAmountWithOptions(request, runtime);
}

/**
 * @summary Queries the static username and password of an ApsaraMQ for RabbitMQ.
 *
 * @param request ListAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccountsResponse
 */
ListAccountsResponse Client::listAccountsWithOptions(const ListAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccounts"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccountsResponse>();
}

/**
 * @summary Queries the static username and password of an ApsaraMQ for RabbitMQ.
 *
 * @param request ListAccountsRequest
 * @return ListAccountsResponse
 */
ListAccountsResponse Client::listAccounts(const ListAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries all bindings of a virtual host (vhost) on an ApsaraMQ for RabbitMQ instance.
 *
 * @param request ListBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBindingsResponse
 */
ListBindingsResponse Client::listBindingsWithOptions(const ListBindingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBindings"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBindingsResponse>();
}

/**
 * @summary Queries all bindings of a virtual host (vhost) on an ApsaraMQ for RabbitMQ instance.
 *
 * @param request ListBindingsRequest
 * @return ListBindingsResponse
 */
ListBindingsResponse Client::listBindings(const ListBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBindingsWithOptions(request, runtime);
}

/**
 * @summary Queries all exchanges or queues to which an exchange is bound.
 *
 * @param request ListDownStreamBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDownStreamBindingsResponse
 */
ListDownStreamBindingsResponse Client::listDownStreamBindingsWithOptions(const ListDownStreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDownStreamBindings"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDownStreamBindingsResponse>();
}

/**
 * @summary Queries all exchanges or queues to which an exchange is bound.
 *
 * @param request ListDownStreamBindingsRequest
 * @return ListDownStreamBindingsResponse
 */
ListDownStreamBindingsResponse Client::listDownStreamBindings(const ListDownStreamBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDownStreamBindingsWithOptions(request, runtime);
}

/**
 * @summary Queries all queues or exchanges that are bound to an exchange.
 *
 * @param request ListExchangeUpStreamBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExchangeUpStreamBindingsResponse
 */
ListExchangeUpStreamBindingsResponse Client::listExchangeUpStreamBindingsWithOptions(const ListExchangeUpStreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExchangeUpStreamBindings"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExchangeUpStreamBindingsResponse>();
}

/**
 * @summary Queries all queues or exchanges that are bound to an exchange.
 *
 * @param request ListExchangeUpStreamBindingsRequest
 * @return ListExchangeUpStreamBindingsResponse
 */
ListExchangeUpStreamBindingsResponse Client::listExchangeUpStreamBindings(const ListExchangeUpStreamBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExchangeUpStreamBindingsWithOptions(request, runtime);
}

/**
 * @summary Queries all exchanges that are created in a virtual host (vhost).
 *
 * @param request ListExchangesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExchangesResponse
 */
ListExchangesResponse Client::listExchangesWithOptions(const ListExchangesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExchanges"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExchangesResponse>();
}

/**
 * @summary Queries all exchanges that are created in a virtual host (vhost).
 *
 * @param request ListExchangesRequest
 * @return ListExchangesResponse
 */
ListExchangesResponse Client::listExchanges(const ListExchangesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExchangesWithOptions(request, runtime);
}

/**
 * @summary Queries all AparaMQ for RabbitMQ instances in a region. The returned data includes the basic information, endpoint, and specification limits of each instance.
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries all AparaMQ for RabbitMQ instances in a region. The returned data includes the basic information, endpoint, and specification limits of each instance.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the online consumers of a queue.
 *
 * @description ApsaraMQ for RabbitMQ allows you to query only online consumers.
 *
 * @param request ListQueueConsumersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueueConsumersResponse
 */
ListQueueConsumersResponse Client::listQueueConsumersWithOptions(const ListQueueConsumersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQueueConsumers"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueueConsumersResponse>();
}

/**
 * @summary Queries the online consumers of a queue.
 *
 * @description ApsaraMQ for RabbitMQ allows you to query only online consumers.
 *
 * @param request ListQueueConsumersRequest
 * @return ListQueueConsumersResponse
 */
ListQueueConsumersResponse Client::listQueueConsumers(const ListQueueConsumersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQueueConsumersWithOptions(request, runtime);
}

/**
 * @summary Queries the exchanges that are bound to a queue.
 *
 * @param request ListQueueUpStreamBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueueUpStreamBindingsResponse
 */
ListQueueUpStreamBindingsResponse Client::listQueueUpStreamBindingsWithOptions(const ListQueueUpStreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQueueUpStreamBindings"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueueUpStreamBindingsResponse>();
}

/**
 * @summary Queries the exchanges that are bound to a queue.
 *
 * @param request ListQueueUpStreamBindingsRequest
 * @return ListQueueUpStreamBindingsResponse
 */
ListQueueUpStreamBindingsResponse Client::listQueueUpStreamBindings(const ListQueueUpStreamBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQueueUpStreamBindingsWithOptions(request, runtime);
}

/**
 * @summary Queries all queues in a vhost of an ApsaraMQ for RabbitMQ instance.
 *
 * @param request ListQueuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueuesResponse
 */
ListQueuesResponse Client::listQueuesWithOptions(const ListQueuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQueues"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueuesResponse>();
}

/**
 * @summary Queries all queues in a vhost of an ApsaraMQ for RabbitMQ instance.
 *
 * @param request ListQueuesRequest
 * @return ListQueuesResponse
 */
ListQueuesResponse Client::listQueues(const ListQueuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQueuesWithOptions(request, runtime);
}

/**
 * @summary Queries all virtual hosts (vhosts) on an ApsaraMQ for RabbitMQ instance.
 *
 * @param request ListVirtualHostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVirtualHostsResponse
 */
ListVirtualHostsResponse Client::listVirtualHostsWithOptions(const ListVirtualHostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVirtualHosts"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVirtualHostsResponse>();
}

/**
 * @summary Queries all virtual hosts (vhosts) on an ApsaraMQ for RabbitMQ instance.
 *
 * @param request ListVirtualHostsRequest
 * @return ListVirtualHostsResponse
 */
ListVirtualHostsResponse Client::listVirtualHosts(const ListVirtualHostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVirtualHostsWithOptions(request, runtime);
}

/**
 * @summary Upgrades or downgrades the configurations of an ApsaraMQ for RabbitMQ instance.
 *
 * @param request UpdateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasEncryptedInstance()) {
    query["EncryptedInstance"] = request.encryptedInstance();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasKmsKeyId()) {
    query["KmsKeyId"] = request.kmsKeyId();
  }

  if (!!request.hasMaxConnections()) {
    query["MaxConnections"] = request.maxConnections();
  }

  if (!!request.hasMaxEipTps()) {
    query["MaxEipTps"] = request.maxEipTps();
  }

  if (!!request.hasMaxPrivateTps()) {
    query["MaxPrivateTps"] = request.maxPrivateTps();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.modifyType();
  }

  if (!!request.hasProvisionedCapacity()) {
    query["ProvisionedCapacity"] = request.provisionedCapacity();
  }

  if (!!request.hasQueueCapacity()) {
    query["QueueCapacity"] = request.queueCapacity();
  }

  if (!!request.hasServerlessChargeType()) {
    query["ServerlessChargeType"] = request.serverlessChargeType();
  }

  if (!!request.hasStorageSize()) {
    query["StorageSize"] = request.storageSize();
  }

  if (!!request.hasSupportEip()) {
    query["SupportEip"] = request.supportEip();
  }

  if (!!request.hasSupportTracing()) {
    query["SupportTracing"] = request.supportTracing();
  }

  if (!!request.hasTracingStorageTime()) {
    query["TracingStorageTime"] = request.tracingStorageTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2019-12-12"},
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
 * @summary Upgrades or downgrades the configurations of an ApsaraMQ for RabbitMQ instance.
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceWithOptions(request, runtime);
}

/**
 * @summary Updates the name of an ApsaraMQ for RabbitMQ instance. After an ApsaraMQ for RabbitMQ instance is created, the ID of the instance is used as its name by default. You can specify a custom name for an instance to facilitate instance identification.
 *
 * @param request UpdateInstanceNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceNameResponse
 */
UpdateInstanceNameResponse Client::updateInstanceNameWithOptions(const UpdateInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "UpdateInstanceName"},
    {"version" , "2019-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceNameResponse>();
}

/**
 * @summary Updates the name of an ApsaraMQ for RabbitMQ instance. After an ApsaraMQ for RabbitMQ instance is created, the ID of the instance is used as its name by default. You can specify a custom name for an instance to facilitate instance identification.
 *
 * @param request UpdateInstanceNameRequest
 * @return UpdateInstanceNameResponse
 */
UpdateInstanceNameResponse Client::updateInstanceName(const UpdateInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceNameWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212