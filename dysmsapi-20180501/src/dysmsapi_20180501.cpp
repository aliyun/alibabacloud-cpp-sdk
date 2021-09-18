// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dysmsapi_20180501.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Dysmsapi20180501;

Alibabacloud_Dysmsapi20180501::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-southeast-1", "dysmsapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "dysmsapi-xman.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing", "dysmsapi-proxy.cn-beijing.aliyuncs.com"},
    {"cn-hongkong", "dysmsapi-xman.cn-hongkong.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dysmsapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dysmsapi20180501::Client::getEndpoint(shared_ptr<string> productId,
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

QueryMessageResponse Alibabacloud_Dysmsapi20180501::Client::queryMessageWithOptions(shared_ptr<QueryMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMessageResponse(doRPCRequest(make_shared<string>("QueryMessage"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMessageResponse Alibabacloud_Dysmsapi20180501::Client::queryMessage(shared_ptr<QueryMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMessageWithOptions(request, runtime);
}

BatchSendMessageToGlobeResponse Alibabacloud_Dysmsapi20180501::Client::batchSendMessageToGlobeWithOptions(shared_ptr<BatchSendMessageToGlobeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchSendMessageToGlobeResponse(doRPCRequest(make_shared<string>("BatchSendMessageToGlobe"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchSendMessageToGlobeResponse Alibabacloud_Dysmsapi20180501::Client::batchSendMessageToGlobe(shared_ptr<BatchSendMessageToGlobeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSendMessageToGlobeWithOptions(request, runtime);
}

SmsConversionResponse Alibabacloud_Dysmsapi20180501::Client::smsConversionWithOptions(shared_ptr<SmsConversionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SmsConversionResponse(doRPCRequest(make_shared<string>("SmsConversion"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SmsConversionResponse Alibabacloud_Dysmsapi20180501::Client::smsConversion(shared_ptr<SmsConversionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return smsConversionWithOptions(request, runtime);
}

SendMessageToGlobeResponse Alibabacloud_Dysmsapi20180501::Client::sendMessageToGlobeWithOptions(shared_ptr<SendMessageToGlobeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendMessageToGlobeResponse(doRPCRequest(make_shared<string>("SendMessageToGlobe"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendMessageToGlobeResponse Alibabacloud_Dysmsapi20180501::Client::sendMessageToGlobe(shared_ptr<SendMessageToGlobeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendMessageToGlobeWithOptions(request, runtime);
}

ConversionDataResponse Alibabacloud_Dysmsapi20180501::Client::conversionDataWithOptions(shared_ptr<ConversionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConversionDataResponse(doRPCRequest(make_shared<string>("ConversionData"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConversionDataResponse Alibabacloud_Dysmsapi20180501::Client::conversionData(shared_ptr<ConversionDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return conversionDataWithOptions(request, runtime);
}

SendMessageWithTemplateResponse Alibabacloud_Dysmsapi20180501::Client::sendMessageWithTemplateWithOptions(shared_ptr<SendMessageWithTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendMessageWithTemplateResponse(doRPCRequest(make_shared<string>("SendMessageWithTemplate"), make_shared<string>("2018-05-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendMessageWithTemplateResponse Alibabacloud_Dysmsapi20180501::Client::sendMessageWithTemplate(shared_ptr<SendMessageWithTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendMessageWithTemplateWithOptions(request, runtime);
}

