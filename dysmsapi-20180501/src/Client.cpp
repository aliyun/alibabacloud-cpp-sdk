#include <darabonba/Core.hpp>
#include <alibabacloud/Dysmsapi20180501.hpp>
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
using namespace AlibabaCloud::Dysmsapi20180501::Models;
namespace AlibabaCloud
{
namespace Dysmsapi20180501
{

AlibabaCloud::Dysmsapi20180501::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  this->_endpointMap = json({
    {"ap-southeast-1" , "dysmsapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "dysmsapi.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing" , "dysmsapi-proxy.cn-beijing.aliyuncs.com"},
    {"cn-hongkong" , "dysmsapi-xman.cn-hongkong.aliyuncs.com"},
    {"eu-central-1" , "dysmsapi.eu-central-1.aliyuncs.com"},
    {"us-east-1" , "dysmsapi.us-east-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dysmsapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Sends a message to multiple recipients in countries or regions outside the Chinese mainland.
 *
 * @description ## Usage notes
 * *   You cannot call the BatchSendMessageToGlobe operation to send messages to the Chinese mainland.
 * *   You can call the BatchSendMessageToGlobe operation to send notifications and promotional messages to a small number of mobile phone numbers at a time. To send messages to a large number of mobile phone numbers at a time, use the mass messaging feature of the SMS console.
 * *   To ensure that messages can be sent on time, call the [SendMessageToGlobe](https://help.aliyun.com/document_detail/406238.html) operation.
 * *   In each request, you can send messages to up to 1,000 mobile phone numbers.
 *
 * @param request BatchSendMessageToGlobeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSendMessageToGlobeResponse
 */
BatchSendMessageToGlobeResponse Client::batchSendMessageToGlobeWithOptions(const BatchSendMessageToGlobeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.from();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTo()) {
    query["To"] = request.to();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasValidityPeriod()) {
    query["ValidityPeriod"] = request.validityPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchSendMessageToGlobe"},
    {"version" , "2018-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSendMessageToGlobeResponse>();
}

/**
 * @summary Sends a message to multiple recipients in countries or regions outside the Chinese mainland.
 *
 * @description ## Usage notes
 * *   You cannot call the BatchSendMessageToGlobe operation to send messages to the Chinese mainland.
 * *   You can call the BatchSendMessageToGlobe operation to send notifications and promotional messages to a small number of mobile phone numbers at a time. To send messages to a large number of mobile phone numbers at a time, use the mass messaging feature of the SMS console.
 * *   To ensure that messages can be sent on time, call the [SendMessageToGlobe](https://help.aliyun.com/document_detail/406238.html) operation.
 * *   In each request, you can send messages to up to 1,000 mobile phone numbers.
 *
 * @param request BatchSendMessageToGlobeRequest
 * @return BatchSendMessageToGlobeResponse
 */
BatchSendMessageToGlobeResponse Client::batchSendMessageToGlobe(const BatchSendMessageToGlobeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSendMessageToGlobeWithOptions(request, runtime);
}

/**
 * @summary This API, sends conversion data to the Alibaba SMS service.
 *
 * @description Metrics:
 * *   Requested OTP messages
 * *   Verified OTP messages
 * An OTP conversion rate is calculated based on the following formula: OTP conversion rate = Number of verified OTP messages/Number of requested OTP messages.
 *
 * @param request ConversionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConversionDataResponse
 */
ConversionDataResponse Client::conversionDataWithOptions(const ConversionDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConversionRate()) {
    body["ConversionRate"] = request.conversionRate();
  }

  if (!!request.hasReportTime()) {
    body["ReportTime"] = request.reportTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConversionData"},
    {"version" , "2018-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConversionDataResponse>();
}

/**
 * @summary This API, sends conversion data to the Alibaba SMS service.
 *
 * @description Metrics:
 * *   Requested OTP messages
 * *   Verified OTP messages
 * An OTP conversion rate is calculated based on the following formula: OTP conversion rate = Number of verified OTP messages/Number of requested OTP messages.
 *
 * @param request ConversionDataRequest
 * @return ConversionDataResponse
 */
ConversionDataResponse Client::conversionData(const ConversionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return conversionDataWithOptions(request, runtime);
}

/**
 * @summary Queries the delivery report of a message.
 *
 * @description ### QPS limit
 * You can call this operation up to 300 times per second. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
 *
 * @param request QueryMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMessageResponse
 */
QueryMessageResponse Client::queryMessageWithOptions(const QueryMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMessage"},
    {"version" , "2018-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMessageResponse>();
}

/**
 * @summary Queries the delivery report of a message.
 *
 * @description ### QPS limit
 * You can call this operation up to 300 times per second. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
 *
 * @param request QueryMessageRequest
 * @return QueryMessageResponse
 */
QueryMessageResponse Client::queryMessage(const QueryMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMessageWithOptions(request, runtime);
}

/**
 * @summary Sends a message to regions outside the Chinese mainland.
 *
 * @description ### [](#)
 * The SendMessageToGlobe API operation does not support message delivery to the Chinese mainland.
 * ### [](#qps-)QPS limit
 * You can call this operation up to 2,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request SendMessageToGlobeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendMessageToGlobeResponse
 */
SendMessageToGlobeResponse Client::sendMessageToGlobeWithOptions(const SendMessageToGlobeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.from();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTo()) {
    query["To"] = request.to();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasValidityPeriod()) {
    query["ValidityPeriod"] = request.validityPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendMessageToGlobe"},
    {"version" , "2018-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendMessageToGlobeResponse>();
}

/**
 * @summary Sends a message to regions outside the Chinese mainland.
 *
 * @description ### [](#)
 * The SendMessageToGlobe API operation does not support message delivery to the Chinese mainland.
 * ### [](#qps-)QPS limit
 * You can call this operation up to 2,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request SendMessageToGlobeRequest
 * @return SendMessageToGlobeResponse
 */
SendMessageToGlobeResponse Client::sendMessageToGlobe(const SendMessageToGlobeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendMessageToGlobeWithOptions(request, runtime);
}

/**
 * @summary Sends a message to the Chinese mainland by using a message template.
 *
 * @description ### Usage notes
 * You can call the SendMessageWithTemplate operation to send messages only to the Chinese mainland.
 *
 * @param request SendMessageWithTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendMessageWithTemplateResponse
 */
SendMessageWithTemplateResponse Client::sendMessageWithTemplateWithOptions(const SendMessageWithTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.from();
  }

  if (!!request.hasSmsUpExtendCode()) {
    query["SmsUpExtendCode"] = request.smsUpExtendCode();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  if (!!request.hasTemplateParam()) {
    query["TemplateParam"] = request.templateParam();
  }

  if (!!request.hasTo()) {
    query["To"] = request.to();
  }

  if (!!request.hasValidityPeriod()) {
    query["ValidityPeriod"] = request.validityPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendMessageWithTemplate"},
    {"version" , "2018-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendMessageWithTemplateResponse>();
}

/**
 * @summary Sends a message to the Chinese mainland by using a message template.
 *
 * @description ### Usage notes
 * You can call the SendMessageWithTemplate operation to send messages only to the Chinese mainland.
 *
 * @param request SendMessageWithTemplateRequest
 * @return SendMessageWithTemplateResponse
 */
SendMessageWithTemplateResponse Client::sendMessageWithTemplate(const SendMessageWithTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendMessageWithTemplateWithOptions(request, runtime);
}

/**
 * @summary Delivers one-time password (OTP) message statuses to Alibaba Cloud, which calculates and monitors OTP conversion rates.
 *
 * @description Metrics:
 * *   Requested OTP messages
 * *   Verified OTP messages
 * An OTP conversion rate is calculated based on the following formula: OTP conversion rate = Number of verified OTP messages/Number of requested OTP messages.
 * > If you call the SmsConversion operation to query OTP conversion rates, your business may be affected. We recommend that you perform the following operations:
 * >*   Call the SmsConversion operation in an asynchronous manner by configuring queues or events.
 * >*   Manually degrade your services or use a circuit breaker to automatically degrade services.
 *
 * @param request SmsConversionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SmsConversionResponse
 */
SmsConversionResponse Client::smsConversionWithOptions(const SmsConversionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversionTime()) {
    query["ConversionTime"] = request.conversionTime();
  }

  if (!!request.hasDelivered()) {
    query["Delivered"] = request.delivered();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
  }

  if (!!request.hasTo()) {
    query["To"] = request.to();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SmsConversion"},
    {"version" , "2018-05-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SmsConversionResponse>();
}

/**
 * @summary Delivers one-time password (OTP) message statuses to Alibaba Cloud, which calculates and monitors OTP conversion rates.
 *
 * @description Metrics:
 * *   Requested OTP messages
 * *   Verified OTP messages
 * An OTP conversion rate is calculated based on the following formula: OTP conversion rate = Number of verified OTP messages/Number of requested OTP messages.
 * > If you call the SmsConversion operation to query OTP conversion rates, your business may be affected. We recommend that you perform the following operations:
 * >*   Call the SmsConversion operation in an asynchronous manner by configuring queues or events.
 * >*   Manually degrade your services or use a circuit breaker to automatically degrade services.
 *
 * @param request SmsConversionRequest
 * @return SmsConversionResponse
 */
SmsConversionResponse Client::smsConversion(const SmsConversionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return smsConversionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dysmsapi20180501