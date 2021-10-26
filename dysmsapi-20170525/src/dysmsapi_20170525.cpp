// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dysmsapi_20170525.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Dysmsapi20170525;

Alibabacloud_Dysmsapi20170525::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Dysmsapi20170525::Client::getEndpoint(shared_ptr<string> productId,
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

AddShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::addShortUrlWithOptions(shared_ptr<AddShortUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddShortUrlResponse(doRPCRequest(make_shared<string>("AddShortUrl"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::addShortUrl(shared_ptr<AddShortUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addShortUrlWithOptions(request, runtime);
}

AddSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::addSmsSignWithOptions(shared_ptr<AddSmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddSmsSignResponse(doRPCRequest(make_shared<string>("AddSmsSign"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::addSmsSign(shared_ptr<AddSmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSmsSignWithOptions(request, runtime);
}

AddSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::addSmsTemplateWithOptions(shared_ptr<AddSmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddSmsTemplateResponse(doRPCRequest(make_shared<string>("AddSmsTemplate"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::addSmsTemplate(shared_ptr<AddSmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSmsTemplateWithOptions(request, runtime);
}

CreateCardSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::createCardSmsTemplateWithOptions(shared_ptr<CreateCardSmsTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCardSmsTemplateShrinkRequest> request = make_shared<CreateCardSmsTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->template_)) {
    request->templateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->template_, make_shared<string>("Template"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCardSmsTemplateResponse(doRPCRequest(make_shared<string>("CreateCardSmsTemplate"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCardSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::createCardSmsTemplate(shared_ptr<CreateCardSmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCardSmsTemplateWithOptions(request, runtime);
}

DeleteShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::deleteShortUrlWithOptions(shared_ptr<DeleteShortUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteShortUrlResponse(doRPCRequest(make_shared<string>("DeleteShortUrl"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::deleteShortUrl(shared_ptr<DeleteShortUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteShortUrlWithOptions(request, runtime);
}

DeleteSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::deleteSmsSignWithOptions(shared_ptr<DeleteSmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSmsSignResponse(doRPCRequest(make_shared<string>("DeleteSmsSign"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::deleteSmsSign(shared_ptr<DeleteSmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmsSignWithOptions(request, runtime);
}

DeleteSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::deleteSmsTemplateWithOptions(shared_ptr<DeleteSmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSmsTemplateResponse(doRPCRequest(make_shared<string>("DeleteSmsTemplate"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::deleteSmsTemplate(shared_ptr<DeleteSmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmsTemplateWithOptions(request, runtime);
}

GetMediaResourceIdResponse Alibabacloud_Dysmsapi20170525::Client::getMediaResourceIdWithOptions(shared_ptr<GetMediaResourceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMediaResourceIdResponse(doRPCRequest(make_shared<string>("GetMediaResourceId"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMediaResourceIdResponse Alibabacloud_Dysmsapi20170525::Client::getMediaResourceId(shared_ptr<GetMediaResourceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaResourceIdWithOptions(request, runtime);
}

GetOSSInfoForCardTemplateResponse Alibabacloud_Dysmsapi20170525::Client::getOSSInfoForCardTemplateWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return GetOSSInfoForCardTemplateResponse(doRPCRequest(make_shared<string>("GetOSSInfoForCardTemplate"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOSSInfoForCardTemplateResponse Alibabacloud_Dysmsapi20170525::Client::getOSSInfoForCardTemplate() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOSSInfoForCardTemplateWithOptions(runtime);
}

ModifySmsSignResponse Alibabacloud_Dysmsapi20170525::Client::modifySmsSignWithOptions(shared_ptr<ModifySmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySmsSignResponse(doRPCRequest(make_shared<string>("ModifySmsSign"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySmsSignResponse Alibabacloud_Dysmsapi20170525::Client::modifySmsSign(shared_ptr<ModifySmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySmsSignWithOptions(request, runtime);
}

ModifySmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::modifySmsTemplateWithOptions(shared_ptr<ModifySmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySmsTemplateResponse(doRPCRequest(make_shared<string>("ModifySmsTemplate"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::modifySmsTemplate(shared_ptr<ModifySmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySmsTemplateWithOptions(request, runtime);
}

QueryCardSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::queryCardSmsTemplateWithOptions(shared_ptr<QueryCardSmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCardSmsTemplateResponse(doRPCRequest(make_shared<string>("QueryCardSmsTemplate"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCardSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::queryCardSmsTemplate(shared_ptr<QueryCardSmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCardSmsTemplateWithOptions(request, runtime);
}

QuerySendDetailsResponse Alibabacloud_Dysmsapi20170525::Client::querySendDetailsWithOptions(shared_ptr<QuerySendDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySendDetailsResponse(doRPCRequest(make_shared<string>("QuerySendDetails"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySendDetailsResponse Alibabacloud_Dysmsapi20170525::Client::querySendDetails(shared_ptr<QuerySendDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySendDetailsWithOptions(request, runtime);
}

QueryShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::queryShortUrlWithOptions(shared_ptr<QueryShortUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryShortUrlResponse(doRPCRequest(make_shared<string>("QueryShortUrl"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::queryShortUrl(shared_ptr<QueryShortUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryShortUrlWithOptions(request, runtime);
}

QuerySmsSignResponse Alibabacloud_Dysmsapi20170525::Client::querySmsSignWithOptions(shared_ptr<QuerySmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySmsSignResponse(doRPCRequest(make_shared<string>("QuerySmsSign"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySmsSignResponse Alibabacloud_Dysmsapi20170525::Client::querySmsSign(shared_ptr<QuerySmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmsSignWithOptions(request, runtime);
}

QuerySmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::querySmsTemplateWithOptions(shared_ptr<QuerySmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySmsTemplateResponse(doRPCRequest(make_shared<string>("QuerySmsTemplate"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::querySmsTemplate(shared_ptr<QuerySmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmsTemplateWithOptions(request, runtime);
}

SendBatchSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendBatchSmsWithOptions(shared_ptr<SendBatchSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendBatchSmsResponse(doRPCRequest(make_shared<string>("SendBatchSms"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendBatchSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendBatchSms(shared_ptr<SendBatchSmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendBatchSmsWithOptions(request, runtime);
}

SendCardSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendCardSmsWithOptions(shared_ptr<SendCardSmsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendCardSmsShrinkRequest> request = make_shared<SendCardSmsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->cardObjects)) {
    request->cardObjectsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cardObjects, make_shared<string>("CardObjects"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendCardSmsResponse(doRPCRequest(make_shared<string>("SendCardSms"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendCardSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendCardSms(shared_ptr<SendCardSmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCardSmsWithOptions(request, runtime);
}

SendMessageToGlobeResponse Alibabacloud_Dysmsapi20170525::Client::sendMessageToGlobeWithOptions(shared_ptr<SendMessageToGlobeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendMessageToGlobeResponse(doRPCRequest(make_shared<string>("SendMessageToGlobe"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendMessageToGlobeResponse Alibabacloud_Dysmsapi20170525::Client::sendMessageToGlobe(shared_ptr<SendMessageToGlobeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendMessageToGlobeWithOptions(request, runtime);
}

SendSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendSmsWithOptions(shared_ptr<SendSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendSmsResponse(doRPCRequest(make_shared<string>("SendSms"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendSms(shared_ptr<SendSmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendSmsWithOptions(request, runtime);
}

SendSmsSmartResponse Alibabacloud_Dysmsapi20170525::Client::sendSmsSmartWithOptions(shared_ptr<SendSmsSmartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendSmsSmartResponse(doRPCRequest(make_shared<string>("SendSmsSmart"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendSmsSmartResponse Alibabacloud_Dysmsapi20170525::Client::sendSmsSmart(shared_ptr<SendSmsSmartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendSmsSmartWithOptions(request, runtime);
}

