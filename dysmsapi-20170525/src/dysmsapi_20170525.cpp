// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dysmsapi_20170525.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
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
    {"ap-southeast-5", "dysmsapi.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing", "dysmsapi-proxy.cn-beijing.aliyuncs.com"},
    {"cn-hongkong", "dysmsapi-xman.cn-hongkong.aliyuncs.com"},
    {"eu-central-1", "dysmsapi.eu-central-1.aliyuncs.com"},
    {"us-east-1", "dysmsapi.us-east-1.aliyuncs.com"}
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

AddExtCodeSignResponse Alibabacloud_Dysmsapi20170525::Client::addExtCodeSignWithOptions(shared_ptr<AddExtCodeSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extCode)) {
    query->insert(pair<string, string>("ExtCode", *request->extCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddExtCodeSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddExtCodeSignResponse(callApi(params, req, runtime));
}

AddExtCodeSignResponse Alibabacloud_Dysmsapi20170525::Client::addExtCodeSign(shared_ptr<AddExtCodeSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addExtCodeSignWithOptions(request, runtime);
}

AddShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::addShortUrlWithOptions(shared_ptr<AddShortUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->effectiveDays)) {
    body->insert(pair<string, string>("EffectiveDays", *request->effectiveDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shortUrlName)) {
    body->insert(pair<string, string>("ShortUrlName", *request->shortUrlName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceUrl)) {
    body->insert(pair<string, string>("SourceUrl", *request->sourceUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddShortUrl"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddShortUrlResponse(callApi(params, req, runtime));
}

AddShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::addShortUrl(shared_ptr<AddShortUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addShortUrlWithOptions(request, runtime);
}

AddSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::addSmsSignWithOptions(shared_ptr<AddSmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->signSource)) {
    query->insert(pair<string, long>("SignSource", *request->signSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->signType)) {
    query->insert(pair<string, long>("SignType", *request->signType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AddSmsSignRequestSignFileList>>(request->signFileList)) {
    body->insert(pair<string, vector<AddSmsSignRequestSignFileList>>("SignFileList", *request->signFileList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSmsSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSmsSignResponse(callApi(params, req, runtime));
}

AddSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::addSmsSign(shared_ptr<AddSmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSmsSignWithOptions(request, runtime);
}

AddSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::addSmsTemplateWithOptions(shared_ptr<AddSmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateContent)) {
    query->insert(pair<string, string>("TemplateContent", *request->templateContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateType)) {
    query->insert(pair<string, long>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSmsTemplate"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSmsTemplateResponse(callApi(params, req, runtime));
}

AddSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::addSmsTemplate(shared_ptr<AddSmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSmsTemplateWithOptions(request, runtime);
}

ChangeSignatureQualificationResponse Alibabacloud_Dysmsapi20170525::Client::changeSignatureQualificationWithOptions(shared_ptr<ChangeSignatureQualificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->authorizationLetterId)) {
    query->insert(pair<string, long>("AuthorizationLetterId", *request->authorizationLetterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->qualificationId)) {
    query->insert(pair<string, long>("QualificationId", *request->qualificationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureName)) {
    query->insert(pair<string, string>("SignatureName", *request->signatureName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeSignatureQualification"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeSignatureQualificationResponse(callApi(params, req, runtime));
}

ChangeSignatureQualificationResponse Alibabacloud_Dysmsapi20170525::Client::changeSignatureQualification(shared_ptr<ChangeSignatureQualificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeSignatureQualificationWithOptions(request, runtime);
}

CheckMobilesCardSupportResponse Alibabacloud_Dysmsapi20170525::Client::checkMobilesCardSupportWithOptions(shared_ptr<CheckMobilesCardSupportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(request->mobiles)) {
    query->insert(pair<string, vector<map<string, boost::any>>>("Mobiles", *request->mobiles));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckMobilesCardSupport"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckMobilesCardSupportResponse(callApi(params, req, runtime));
}

CheckMobilesCardSupportResponse Alibabacloud_Dysmsapi20170525::Client::checkMobilesCardSupport(shared_ptr<CheckMobilesCardSupportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMobilesCardSupportWithOptions(request, runtime);
}

ConversionDataIntlResponse Alibabacloud_Dysmsapi20170525::Client::conversionDataIntlWithOptions(shared_ptr<ConversionDataIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->conversionRate)) {
    query->insert(pair<string, string>("ConversionRate", *request->conversionRate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reportTime)) {
    query->insert(pair<string, long>("ReportTime", *request->reportTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConversionDataIntl"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConversionDataIntlResponse(callApi(params, req, runtime));
}

ConversionDataIntlResponse Alibabacloud_Dysmsapi20170525::Client::conversionDataIntl(shared_ptr<ConversionDataIntlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return conversionDataIntlWithOptions(request, runtime);
}

CreateCardSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::createCardSmsTemplateWithOptions(shared_ptr<CreateCardSmsTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCardSmsTemplateShrinkRequest> request = make_shared<CreateCardSmsTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->template_)) {
    request->templateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->template_, make_shared<string>("Template"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->factorys)) {
    query->insert(pair<string, string>("Factorys", *request->factorys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    query->insert(pair<string, string>("Memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateShrink)) {
    query->insert(pair<string, string>("Template_", *request->templateShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCardSmsTemplate"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCardSmsTemplateResponse(callApi(params, req, runtime));
}

CreateCardSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::createCardSmsTemplate(shared_ptr<CreateCardSmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCardSmsTemplateWithOptions(request, runtime);
}

CreateSmartShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::createSmartShortUrlWithOptions(shared_ptr<CreateSmartShortUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumbers)) {
    query->insert(pair<string, string>("PhoneNumbers", *request->phoneNumbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceUrl)) {
    query->insert(pair<string, string>("SourceUrl", *request->sourceUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSmartShortUrl"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSmartShortUrlResponse(callApi(params, req, runtime));
}

CreateSmartShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::createSmartShortUrl(shared_ptr<CreateSmartShortUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSmartShortUrlWithOptions(request, runtime);
}

CreateSmsAuthorizationLetterResponse Alibabacloud_Dysmsapi20170525::Client::createSmsAuthorizationLetterWithOptions(shared_ptr<CreateSmsAuthorizationLetterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSmsAuthorizationLetterShrinkRequest> request = make_shared<CreateSmsAuthorizationLetterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->signList)) {
    request->signListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->signList, make_shared<string>("SignList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorization)) {
    query->insert(pair<string, string>("Authorization", *request->authorization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationLetterExpDate)) {
    query->insert(pair<string, string>("AuthorizationLetterExpDate", *request->authorizationLetterExpDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationLetterName)) {
    query->insert(pair<string, string>("AuthorizationLetterName", *request->authorizationLetterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationLetterPic)) {
    query->insert(pair<string, string>("AuthorizationLetterPic", *request->authorizationLetterPic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationCode)) {
    query->insert(pair<string, string>("OrganizationCode", *request->organizationCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyAuthorization)) {
    query->insert(pair<string, string>("ProxyAuthorization", *request->proxyAuthorization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signListShrink)) {
    query->insert(pair<string, string>("SignList", *request->signListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSmsAuthorizationLetter"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSmsAuthorizationLetterResponse(callApi(params, req, runtime));
}

CreateSmsAuthorizationLetterResponse Alibabacloud_Dysmsapi20170525::Client::createSmsAuthorizationLetter(shared_ptr<CreateSmsAuthorizationLetterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSmsAuthorizationLetterWithOptions(request, runtime);
}

CreateSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::createSmsSignWithOptions(shared_ptr<CreateSmsSignRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSmsSignShrinkRequest> request = make_shared<CreateSmsSignShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->moreData)) {
    request->moreDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->moreData, make_shared<string>("MoreData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applySceneContent)) {
    query->insert(pair<string, string>("ApplySceneContent", *request->applySceneContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->authorizationLetterId)) {
    query->insert(pair<string, long>("AuthorizationLetterId", *request->authorizationLetterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moreDataShrink)) {
    query->insert(pair<string, string>("MoreData", *request->moreDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->qualificationId)) {
    query->insert(pair<string, long>("QualificationId", *request->qualificationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->signSource)) {
    query->insert(pair<string, long>("SignSource", *request->signSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->signType)) {
    query->insert(pair<string, long>("SignType", *request->signType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->thirdParty)) {
    query->insert(pair<string, bool>("ThirdParty", *request->thirdParty));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSmsSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSmsSignResponse(callApi(params, req, runtime));
}

CreateSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::createSmsSign(shared_ptr<CreateSmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSmsSignWithOptions(request, runtime);
}

CreateSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::createSmsTemplateWithOptions(shared_ptr<CreateSmsTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSmsTemplateShrinkRequest> request = make_shared<CreateSmsTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->moreData)) {
    request->moreDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->moreData, make_shared<string>("MoreData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applySceneContent)) {
    query->insert(pair<string, string>("ApplySceneContent", *request->applySceneContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intlType)) {
    query->insert(pair<string, long>("IntlType", *request->intlType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moreDataShrink)) {
    query->insert(pair<string, string>("MoreData", *request->moreDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedSignName)) {
    query->insert(pair<string, string>("RelatedSignName", *request->relatedSignName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateContent)) {
    query->insert(pair<string, string>("TemplateContent", *request->templateContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateRule)) {
    query->insert(pair<string, string>("TemplateRule", *request->templateRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateType)) {
    query->insert(pair<string, long>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSmsTemplate"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSmsTemplateResponse(callApi(params, req, runtime));
}

CreateSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::createSmsTemplate(shared_ptr<CreateSmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSmsTemplateWithOptions(request, runtime);
}

DeleteExtCodeSignResponse Alibabacloud_Dysmsapi20170525::Client::deleteExtCodeSignWithOptions(shared_ptr<DeleteExtCodeSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extCode)) {
    query->insert(pair<string, string>("ExtCode", *request->extCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExtCodeSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteExtCodeSignResponse(callApi(params, req, runtime));
}

DeleteExtCodeSignResponse Alibabacloud_Dysmsapi20170525::Client::deleteExtCodeSign(shared_ptr<DeleteExtCodeSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteExtCodeSignWithOptions(request, runtime);
}

DeleteShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::deleteShortUrlWithOptions(shared_ptr<DeleteShortUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceUrl)) {
    body->insert(pair<string, string>("SourceUrl", *request->sourceUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteShortUrl"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteShortUrlResponse(callApi(params, req, runtime));
}

DeleteShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::deleteShortUrl(shared_ptr<DeleteShortUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteShortUrlWithOptions(request, runtime);
}

DeleteSmsQualificationResponse Alibabacloud_Dysmsapi20170525::Client::deleteSmsQualificationWithOptions(shared_ptr<DeleteSmsQualificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->qualificationGroupId)) {
    query->insert(pair<string, long>("QualificationGroupId", *request->qualificationGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSmsQualification"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSmsQualificationResponse(callApi(params, req, runtime));
}

DeleteSmsQualificationResponse Alibabacloud_Dysmsapi20170525::Client::deleteSmsQualification(shared_ptr<DeleteSmsQualificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmsQualificationWithOptions(request, runtime);
}

DeleteSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::deleteSmsSignWithOptions(shared_ptr<DeleteSmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSmsSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSmsSignResponse(callApi(params, req, runtime));
}

DeleteSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::deleteSmsSign(shared_ptr<DeleteSmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmsSignWithOptions(request, runtime);
}

DeleteSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::deleteSmsTemplateWithOptions(shared_ptr<DeleteSmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSmsTemplate"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSmsTemplateResponse(callApi(params, req, runtime));
}

DeleteSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::deleteSmsTemplate(shared_ptr<DeleteSmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmsTemplateWithOptions(request, runtime);
}

GetCardSmsDetailsResponse Alibabacloud_Dysmsapi20170525::Client::getCardSmsDetailsWithOptions(shared_ptr<GetCardSmsDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizCardId)) {
    query->insert(pair<string, string>("BizCardId", *request->bizCardId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizDigitId)) {
    query->insert(pair<string, string>("BizDigitId", *request->bizDigitId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizSmsId)) {
    query->insert(pair<string, string>("BizSmsId", *request->bizSmsId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sendDate)) {
    query->insert(pair<string, string>("SendDate", *request->sendDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCardSmsDetails"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCardSmsDetailsResponse(callApi(params, req, runtime));
}

GetCardSmsDetailsResponse Alibabacloud_Dysmsapi20170525::Client::getCardSmsDetails(shared_ptr<GetCardSmsDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCardSmsDetailsWithOptions(request, runtime);
}

GetCardSmsLinkResponse Alibabacloud_Dysmsapi20170525::Client::getCardSmsLinkWithOptions(shared_ptr<GetCardSmsLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cardCodeType)) {
    query->insert(pair<string, long>("CardCodeType", *request->cardCodeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cardLinkType)) {
    query->insert(pair<string, long>("CardLinkType", *request->cardLinkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardTemplateCode)) {
    query->insert(pair<string, string>("CardTemplateCode", *request->cardTemplateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardTemplateParamJson)) {
    query->insert(pair<string, string>("CardTemplateParamJson", *request->cardTemplateParamJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customShortCodeJson)) {
    query->insert(pair<string, string>("CustomShortCodeJson", *request->customShortCodeJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumberJson)) {
    query->insert(pair<string, string>("PhoneNumberJson", *request->phoneNumberJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signNameJson)) {
    query->insert(pair<string, string>("SignNameJson", *request->signNameJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCardSmsLink"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCardSmsLinkResponse(callApi(params, req, runtime));
}

GetCardSmsLinkResponse Alibabacloud_Dysmsapi20170525::Client::getCardSmsLink(shared_ptr<GetCardSmsLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCardSmsLinkWithOptions(request, runtime);
}

GetMediaResourceIdResponse Alibabacloud_Dysmsapi20170525::Client::getMediaResourceIdWithOptions(shared_ptr<GetMediaResourceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extendInfo)) {
    query->insert(pair<string, string>("ExtendInfo", *request->extendInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileSize)) {
    query->insert(pair<string, long>("FileSize", *request->fileSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    query->insert(pair<string, string>("Memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    query->insert(pair<string, string>("OssKey", *request->ossKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaResourceId"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaResourceIdResponse(callApi(params, req, runtime));
}

GetMediaResourceIdResponse Alibabacloud_Dysmsapi20170525::Client::getMediaResourceId(shared_ptr<GetMediaResourceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaResourceIdWithOptions(request, runtime);
}

GetOSSInfoForCardTemplateResponse Alibabacloud_Dysmsapi20170525::Client::getOSSInfoForCardTemplateWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOSSInfoForCardTemplate"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOSSInfoForCardTemplateResponse(callApi(params, req, runtime));
}

GetOSSInfoForCardTemplateResponse Alibabacloud_Dysmsapi20170525::Client::getOSSInfoForCardTemplate() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOSSInfoForCardTemplateWithOptions(runtime);
}

GetOSSInfoForUploadFileResponse Alibabacloud_Dysmsapi20170525::Client::getOSSInfoForUploadFileWithOptions(shared_ptr<GetOSSInfoForUploadFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOSSInfoForUploadFile"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOSSInfoForUploadFileResponse(callApi(params, req, runtime));
}

GetOSSInfoForUploadFileResponse Alibabacloud_Dysmsapi20170525::Client::getOSSInfoForUploadFile(shared_ptr<GetOSSInfoForUploadFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOSSInfoForUploadFileWithOptions(request, runtime);
}

GetQualificationOssInfoResponse Alibabacloud_Dysmsapi20170525::Client::getQualificationOssInfoWithOptions(shared_ptr<GetQualificationOssInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualificationOssInfo"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualificationOssInfoResponse(callApi(params, req, runtime));
}

GetQualificationOssInfoResponse Alibabacloud_Dysmsapi20170525::Client::getQualificationOssInfo(shared_ptr<GetQualificationOssInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualificationOssInfoWithOptions(request, runtime);
}

GetSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::getSmsSignWithOptions(shared_ptr<GetSmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSmsSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSmsSignResponse(callApi(params, req, runtime));
}

GetSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::getSmsSign(shared_ptr<GetSmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSmsSignWithOptions(request, runtime);
}

GetSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::getSmsTemplateWithOptions(shared_ptr<GetSmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSmsTemplate"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSmsTemplateResponse(callApi(params, req, runtime));
}

GetSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::getSmsTemplate(shared_ptr<GetSmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSmsTemplateWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Dysmsapi20170525::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Dysmsapi20170525::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifySmsSignResponse Alibabacloud_Dysmsapi20170525::Client::modifySmsSignWithOptions(shared_ptr<ModifySmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->signSource)) {
    query->insert(pair<string, long>("SignSource", *request->signSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->signType)) {
    query->insert(pair<string, long>("SignType", *request->signType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifySmsSignRequestSignFileList>>(request->signFileList)) {
    body->insert(pair<string, vector<ModifySmsSignRequestSignFileList>>("SignFileList", *request->signFileList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySmsSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySmsSignResponse(callApi(params, req, runtime));
}

ModifySmsSignResponse Alibabacloud_Dysmsapi20170525::Client::modifySmsSign(shared_ptr<ModifySmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySmsSignWithOptions(request, runtime);
}

ModifySmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::modifySmsTemplateWithOptions(shared_ptr<ModifySmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateContent)) {
    query->insert(pair<string, string>("TemplateContent", *request->templateContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateType)) {
    query->insert(pair<string, long>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySmsTemplate"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySmsTemplateResponse(callApi(params, req, runtime));
}

ModifySmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::modifySmsTemplate(shared_ptr<ModifySmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySmsTemplateWithOptions(request, runtime);
}

QueryCardSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::queryCardSmsTemplateWithOptions(shared_ptr<QueryCardSmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCardSmsTemplate"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCardSmsTemplateResponse(callApi(params, req, runtime));
}

QueryCardSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::queryCardSmsTemplate(shared_ptr<QueryCardSmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCardSmsTemplateWithOptions(request, runtime);
}

QueryCardSmsTemplateReportResponse Alibabacloud_Dysmsapi20170525::Client::queryCardSmsTemplateReportWithOptions(shared_ptr<QueryCardSmsTemplateReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->templateCodes)) {
    query->insert(pair<string, vector<string>>("TemplateCodes", *request->templateCodes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCardSmsTemplateReport"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCardSmsTemplateReportResponse(callApi(params, req, runtime));
}

QueryCardSmsTemplateReportResponse Alibabacloud_Dysmsapi20170525::Client::queryCardSmsTemplateReport(shared_ptr<QueryCardSmsTemplateReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCardSmsTemplateReportWithOptions(request, runtime);
}

QueryExtCodeSignResponse Alibabacloud_Dysmsapi20170525::Client::queryExtCodeSignWithOptions(shared_ptr<QueryExtCodeSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extCode)) {
    query->insert(pair<string, string>("ExtCode", *request->extCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryExtCodeSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryExtCodeSignResponse(callApi(params, req, runtime));
}

QueryExtCodeSignResponse Alibabacloud_Dysmsapi20170525::Client::queryExtCodeSign(shared_ptr<QueryExtCodeSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryExtCodeSignWithOptions(request, runtime);
}

QueryMobilesCardSupportResponse Alibabacloud_Dysmsapi20170525::Client::queryMobilesCardSupportWithOptions(shared_ptr<QueryMobilesCardSupportRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryMobilesCardSupportShrinkRequest> request = make_shared<QueryMobilesCardSupportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(tmpReq->mobiles)) {
    request->mobilesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->mobiles, make_shared<string>("Mobiles"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptType)) {
    query->insert(pair<string, string>("EncryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobilesShrink)) {
    query->insert(pair<string, string>("Mobiles", *request->mobilesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMobilesCardSupport"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMobilesCardSupportResponse(callApi(params, req, runtime));
}

QueryMobilesCardSupportResponse Alibabacloud_Dysmsapi20170525::Client::queryMobilesCardSupport(shared_ptr<QueryMobilesCardSupportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMobilesCardSupportWithOptions(request, runtime);
}

QueryPageSmartShortUrlLogResponse Alibabacloud_Dysmsapi20170525::Client::queryPageSmartShortUrlLogWithOptions(shared_ptr<QueryPageSmartShortUrlLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createDateEnd)) {
    query->insert(pair<string, long>("CreateDateEnd", *request->createDateEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createDateStart)) {
    query->insert(pair<string, long>("CreateDateStart", *request->createDateStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shortUrl)) {
    query->insert(pair<string, string>("ShortUrl", *request->shortUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPageSmartShortUrlLog"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPageSmartShortUrlLogResponse(callApi(params, req, runtime));
}

QueryPageSmartShortUrlLogResponse Alibabacloud_Dysmsapi20170525::Client::queryPageSmartShortUrlLog(shared_ptr<QueryPageSmartShortUrlLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPageSmartShortUrlLogWithOptions(request, runtime);
}

QuerySendDetailsResponse Alibabacloud_Dysmsapi20170525::Client::querySendDetailsWithOptions(shared_ptr<QuerySendDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sendDate)) {
    query->insert(pair<string, string>("SendDate", *request->sendDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySendDetails"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySendDetailsResponse(callApi(params, req, runtime));
}

QuerySendDetailsResponse Alibabacloud_Dysmsapi20170525::Client::querySendDetails(shared_ptr<QuerySendDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySendDetailsWithOptions(request, runtime);
}

QuerySendStatisticsResponse Alibabacloud_Dysmsapi20170525::Client::querySendStatisticsWithOptions(shared_ptr<QuerySendStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isGlobe)) {
    query->insert(pair<string, long>("IsGlobe", *request->isGlobe));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateType)) {
    query->insert(pair<string, long>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySendStatistics"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySendStatisticsResponse(callApi(params, req, runtime));
}

QuerySendStatisticsResponse Alibabacloud_Dysmsapi20170525::Client::querySendStatistics(shared_ptr<QuerySendStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySendStatisticsWithOptions(request, runtime);
}

QueryShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::queryShortUrlWithOptions(shared_ptr<QueryShortUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->shortUrl)) {
    body->insert(pair<string, string>("ShortUrl", *request->shortUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryShortUrl"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryShortUrlResponse(callApi(params, req, runtime));
}

QueryShortUrlResponse Alibabacloud_Dysmsapi20170525::Client::queryShortUrl(shared_ptr<QueryShortUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryShortUrlWithOptions(request, runtime);
}

QuerySingleSmsQualificationResponse Alibabacloud_Dysmsapi20170525::Client::querySingleSmsQualificationWithOptions(shared_ptr<QuerySingleSmsQualificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->qualificationGroupId)) {
    query->insert(pair<string, long>("QualificationGroupId", *request->qualificationGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySingleSmsQualification"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySingleSmsQualificationResponse(callApi(params, req, runtime));
}

QuerySingleSmsQualificationResponse Alibabacloud_Dysmsapi20170525::Client::querySingleSmsQualification(shared_ptr<QuerySingleSmsQualificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySingleSmsQualificationWithOptions(request, runtime);
}

QuerySmsAuthorizationLetterResponse Alibabacloud_Dysmsapi20170525::Client::querySmsAuthorizationLetterWithOptions(shared_ptr<QuerySmsAuthorizationLetterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QuerySmsAuthorizationLetterShrinkRequest> request = make_shared<QuerySmsAuthorizationLetterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->authorizationLetterIdList)) {
    request->authorizationLetterIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->authorizationLetterIdList, make_shared<string>("AuthorizationLetterIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationLetterIdListShrink)) {
    query->insert(pair<string, string>("AuthorizationLetterIdList", *request->authorizationLetterIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationCode)) {
    query->insert(pair<string, string>("OrganizationCode", *request->organizationCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySmsAuthorizationLetter"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySmsAuthorizationLetterResponse(callApi(params, req, runtime));
}

QuerySmsAuthorizationLetterResponse Alibabacloud_Dysmsapi20170525::Client::querySmsAuthorizationLetter(shared_ptr<QuerySmsAuthorizationLetterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmsAuthorizationLetterWithOptions(request, runtime);
}

QuerySmsQualificationRecordResponse Alibabacloud_Dysmsapi20170525::Client::querySmsQualificationRecordWithOptions(shared_ptr<QuerySmsQualificationRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->companyName)) {
    query->insert(pair<string, string>("CompanyName", *request->companyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonName)) {
    query->insert(pair<string, string>("LegalPersonName", *request->legalPersonName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualificationGroupName)) {
    query->insert(pair<string, string>("QualificationGroupName", *request->qualificationGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useBySelf)) {
    query->insert(pair<string, bool>("UseBySelf", *request->useBySelf));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workOrderId)) {
    query->insert(pair<string, long>("WorkOrderId", *request->workOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySmsQualificationRecord"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySmsQualificationRecordResponse(callApi(params, req, runtime));
}

QuerySmsQualificationRecordResponse Alibabacloud_Dysmsapi20170525::Client::querySmsQualificationRecord(shared_ptr<QuerySmsQualificationRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmsQualificationRecordWithOptions(request, runtime);
}

QuerySmsSignResponse Alibabacloud_Dysmsapi20170525::Client::querySmsSignWithOptions(shared_ptr<QuerySmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySmsSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySmsSignResponse(callApi(params, req, runtime));
}

QuerySmsSignResponse Alibabacloud_Dysmsapi20170525::Client::querySmsSign(shared_ptr<QuerySmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmsSignWithOptions(request, runtime);
}

QuerySmsSignListResponse Alibabacloud_Dysmsapi20170525::Client::querySmsSignListWithOptions(shared_ptr<QuerySmsSignListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySmsSignList"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySmsSignListResponse(callApi(params, req, runtime));
}

QuerySmsSignListResponse Alibabacloud_Dysmsapi20170525::Client::querySmsSignList(shared_ptr<QuerySmsSignListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmsSignListWithOptions(request, runtime);
}

QuerySmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::querySmsTemplateWithOptions(shared_ptr<QuerySmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySmsTemplate"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySmsTemplateResponse(callApi(params, req, runtime));
}

QuerySmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::querySmsTemplate(shared_ptr<QuerySmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmsTemplateWithOptions(request, runtime);
}

QuerySmsTemplateListResponse Alibabacloud_Dysmsapi20170525::Client::querySmsTemplateListWithOptions(shared_ptr<QuerySmsTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySmsTemplateList"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySmsTemplateListResponse(callApi(params, req, runtime));
}

QuerySmsTemplateListResponse Alibabacloud_Dysmsapi20170525::Client::querySmsTemplateList(shared_ptr<QuerySmsTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmsTemplateListWithOptions(request, runtime);
}

RequiredPhoneCodeResponse Alibabacloud_Dysmsapi20170525::Client::requiredPhoneCodeWithOptions(shared_ptr<RequiredPhoneCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNo)) {
    query->insert(pair<string, string>("PhoneNo", *request->phoneNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequiredPhoneCode"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequiredPhoneCodeResponse(callApi(params, req, runtime));
}

RequiredPhoneCodeResponse Alibabacloud_Dysmsapi20170525::Client::requiredPhoneCode(shared_ptr<RequiredPhoneCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requiredPhoneCodeWithOptions(request, runtime);
}

SendBatchCardSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendBatchCardSmsWithOptions(shared_ptr<SendBatchCardSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cardTemplateCode)) {
    query->insert(pair<string, string>("CardTemplateCode", *request->cardTemplateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardTemplateParamJson)) {
    query->insert(pair<string, string>("CardTemplateParamJson", *request->cardTemplateParamJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digitalTemplateCode)) {
    query->insert(pair<string, string>("DigitalTemplateCode", *request->digitalTemplateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digitalTemplateParamJson)) {
    query->insert(pair<string, string>("DigitalTemplateParamJson", *request->digitalTemplateParamJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallbackType)) {
    query->insert(pair<string, string>("FallbackType", *request->fallbackType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumberJson)) {
    query->insert(pair<string, string>("PhoneNumberJson", *request->phoneNumberJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signNameJson)) {
    query->insert(pair<string, string>("SignNameJson", *request->signNameJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsTemplateCode)) {
    query->insert(pair<string, string>("SmsTemplateCode", *request->smsTemplateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsTemplateParamJson)) {
    query->insert(pair<string, string>("SmsTemplateParamJson", *request->smsTemplateParamJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsUpExtendCodeJson)) {
    query->insert(pair<string, string>("SmsUpExtendCodeJson", *request->smsUpExtendCodeJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateParamJson)) {
    query->insert(pair<string, string>("TemplateParamJson", *request->templateParamJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendBatchCardSms"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendBatchCardSmsResponse(callApi(params, req, runtime));
}

SendBatchCardSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendBatchCardSms(shared_ptr<SendBatchCardSmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendBatchCardSmsWithOptions(request, runtime);
}

SendBatchSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendBatchSmsWithOptions(shared_ptr<SendBatchSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumberJson)) {
    body->insert(pair<string, string>("PhoneNumberJson", *request->phoneNumberJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signNameJson)) {
    body->insert(pair<string, string>("SignNameJson", *request->signNameJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsUpExtendCodeJson)) {
    body->insert(pair<string, string>("SmsUpExtendCodeJson", *request->smsUpExtendCodeJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateParamJson)) {
    body->insert(pair<string, string>("TemplateParamJson", *request->templateParamJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendBatchSms"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendBatchSmsResponse(callApi(params, req, runtime));
}

SendBatchSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendBatchSms(shared_ptr<SendBatchSmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendBatchSmsWithOptions(request, runtime);
}

SendCardSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendCardSmsWithOptions(shared_ptr<SendCardSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<SendCardSmsRequestCardObjects>>(request->cardObjects)) {
    query->insert(pair<string, vector<SendCardSmsRequestCardObjects>>("CardObjects", *request->cardObjects));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardTemplateCode)) {
    query->insert(pair<string, string>("CardTemplateCode", *request->cardTemplateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digitalTemplateCode)) {
    query->insert(pair<string, string>("DigitalTemplateCode", *request->digitalTemplateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digitalTemplateParam)) {
    query->insert(pair<string, string>("DigitalTemplateParam", *request->digitalTemplateParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fallbackType)) {
    query->insert(pair<string, string>("FallbackType", *request->fallbackType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsTemplateCode)) {
    query->insert(pair<string, string>("SmsTemplateCode", *request->smsTemplateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsTemplateParam)) {
    query->insert(pair<string, string>("SmsTemplateParam", *request->smsTemplateParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsUpExtendCode)) {
    query->insert(pair<string, string>("SmsUpExtendCode", *request->smsUpExtendCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateParam)) {
    query->insert(pair<string, string>("TemplateParam", *request->templateParam));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendCardSms"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendCardSmsResponse(callApi(params, req, runtime));
}

SendCardSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendCardSms(shared_ptr<SendCardSmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCardSmsWithOptions(request, runtime);
}

SendSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendSmsWithOptions(shared_ptr<SendSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumbers)) {
    query->insert(pair<string, string>("PhoneNumbers", *request->phoneNumbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsUpExtendCode)) {
    query->insert(pair<string, string>("SmsUpExtendCode", *request->smsUpExtendCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateParam)) {
    query->insert(pair<string, string>("TemplateParam", *request->templateParam));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendSms"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendSmsResponse(callApi(params, req, runtime));
}

SendSmsResponse Alibabacloud_Dysmsapi20170525::Client::sendSms(shared_ptr<SendSmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendSmsWithOptions(request, runtime);
}

SmsConversionIntlResponse Alibabacloud_Dysmsapi20170525::Client::smsConversionIntlWithOptions(shared_ptr<SmsConversionIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->conversionTime)) {
    query->insert(pair<string, long>("ConversionTime", *request->conversionTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->delivered)) {
    query->insert(pair<string, bool>("Delivered", *request->delivered));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageId)) {
    query->insert(pair<string, string>("MessageId", *request->messageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SmsConversionIntl"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SmsConversionIntlResponse(callApi(params, req, runtime));
}

SmsConversionIntlResponse Alibabacloud_Dysmsapi20170525::Client::smsConversionIntl(shared_ptr<SmsConversionIntlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return smsConversionIntlWithOptions(request, runtime);
}

SubmitSmsQualificationResponse Alibabacloud_Dysmsapi20170525::Client::submitSmsQualificationWithOptions(shared_ptr<SubmitSmsQualificationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSmsQualificationShrinkRequest> request = make_shared<SubmitSmsQualificationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitSmsQualificationRequestBusinessLicensePics>>(tmpReq->businessLicensePics)) {
    request->businessLicensePicsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->businessLicensePics, make_shared<string>("BusinessLicensePics"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitSmsQualificationRequestOtherFiles>>(tmpReq->otherFiles)) {
    request->otherFilesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->otherFiles, make_shared<string>("OtherFiles"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adminIDCardExpDate)) {
    query->insert(pair<string, string>("AdminIDCardExpDate", *request->adminIDCardExpDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminIDCardFrontFace)) {
    query->insert(pair<string, string>("AdminIDCardFrontFace", *request->adminIDCardFrontFace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminIDCardNo)) {
    query->insert(pair<string, string>("AdminIDCardNo", *request->adminIDCardNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminIDCardPic)) {
    query->insert(pair<string, string>("AdminIDCardPic", *request->adminIDCardPic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminIDCardType)) {
    query->insert(pair<string, string>("AdminIDCardType", *request->adminIDCardType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminName)) {
    query->insert(pair<string, string>("AdminName", *request->adminName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminPhoneNo)) {
    query->insert(pair<string, string>("AdminPhoneNo", *request->adminPhoneNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessLicensePicsShrink)) {
    query->insert(pair<string, string>("BusinessLicensePics", *request->businessLicensePicsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bussinessLicenseExpDate)) {
    query->insert(pair<string, string>("BussinessLicenseExpDate", *request->bussinessLicenseExpDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyCode)) {
    query->insert(pair<string, string>("CertifyCode", *request->certifyCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->companyName)) {
    query->insert(pair<string, string>("CompanyName", *request->companyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->companyType)) {
    query->insert(pair<string, string>("CompanyType", *request->companyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonIDCardNo)) {
    query->insert(pair<string, string>("LegalPersonIDCardNo", *request->legalPersonIDCardNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonIDCardType)) {
    query->insert(pair<string, string>("LegalPersonIDCardType", *request->legalPersonIDCardType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonIdCardBackSide)) {
    query->insert(pair<string, string>("LegalPersonIdCardBackSide", *request->legalPersonIdCardBackSide));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonIdCardEffTime)) {
    query->insert(pair<string, string>("LegalPersonIdCardEffTime", *request->legalPersonIdCardEffTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonIdCardFrontSide)) {
    query->insert(pair<string, string>("LegalPersonIdCardFrontSide", *request->legalPersonIdCardFrontSide));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonName)) {
    query->insert(pair<string, string>("LegalPersonName", *request->legalPersonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationCode)) {
    query->insert(pair<string, string>("OrganizationCode", *request->organizationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherFilesShrink)) {
    query->insert(pair<string, string>("OtherFiles", *request->otherFilesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualificationName)) {
    query->insert(pair<string, string>("QualificationName", *request->qualificationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useBySelf)) {
    query->insert(pair<string, bool>("UseBySelf", *request->useBySelf));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->whetherShare)) {
    query->insert(pair<string, bool>("WhetherShare", *request->whetherShare));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSmsQualification"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSmsQualificationResponse(callApi(params, req, runtime));
}

SubmitSmsQualificationResponse Alibabacloud_Dysmsapi20170525::Client::submitSmsQualification(shared_ptr<SubmitSmsQualificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmsQualificationWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Dysmsapi20170525::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Dysmsapi20170525::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Dysmsapi20170525::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Dysmsapi20170525::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateExtCodeSignResponse Alibabacloud_Dysmsapi20170525::Client::updateExtCodeSignWithOptions(shared_ptr<UpdateExtCodeSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->existExtCode)) {
    query->insert(pair<string, string>("ExistExtCode", *request->existExtCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newExtCode)) {
    query->insert(pair<string, string>("NewExtCode", *request->newExtCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateExtCodeSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateExtCodeSignResponse(callApi(params, req, runtime));
}

UpdateExtCodeSignResponse Alibabacloud_Dysmsapi20170525::Client::updateExtCodeSign(shared_ptr<UpdateExtCodeSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateExtCodeSignWithOptions(request, runtime);
}

UpdateSmsQualificationResponse Alibabacloud_Dysmsapi20170525::Client::updateSmsQualificationWithOptions(shared_ptr<UpdateSmsQualificationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSmsQualificationShrinkRequest> request = make_shared<UpdateSmsQualificationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSmsQualificationRequestBusinessLicensePics>>(tmpReq->businessLicensePics)) {
    request->businessLicensePicsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->businessLicensePics, make_shared<string>("BusinessLicensePics"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSmsQualificationRequestOtherFiles>>(tmpReq->otherFiles)) {
    request->otherFilesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->otherFiles, make_shared<string>("OtherFiles"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adminIDCardExpDate)) {
    query->insert(pair<string, string>("AdminIDCardExpDate", *request->adminIDCardExpDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminIDCardFrontFace)) {
    query->insert(pair<string, string>("AdminIDCardFrontFace", *request->adminIDCardFrontFace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminIDCardNo)) {
    query->insert(pair<string, string>("AdminIDCardNo", *request->adminIDCardNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminIDCardPic)) {
    query->insert(pair<string, string>("AdminIDCardPic", *request->adminIDCardPic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminIDCardType)) {
    query->insert(pair<string, string>("AdminIDCardType", *request->adminIDCardType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminName)) {
    query->insert(pair<string, string>("AdminName", *request->adminName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adminPhoneNo)) {
    query->insert(pair<string, string>("AdminPhoneNo", *request->adminPhoneNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessLicensePicsShrink)) {
    query->insert(pair<string, string>("BusinessLicensePics", *request->businessLicensePicsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bussinessLicenseExpDate)) {
    query->insert(pair<string, string>("BussinessLicenseExpDate", *request->bussinessLicenseExpDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyCode)) {
    query->insert(pair<string, string>("CertifyCode", *request->certifyCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->companyName)) {
    query->insert(pair<string, string>("CompanyName", *request->companyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonIDCardNo)) {
    query->insert(pair<string, string>("LegalPersonIDCardNo", *request->legalPersonIDCardNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonIDCardType)) {
    query->insert(pair<string, string>("LegalPersonIDCardType", *request->legalPersonIDCardType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonIdCardBackSide)) {
    query->insert(pair<string, string>("LegalPersonIdCardBackSide", *request->legalPersonIdCardBackSide));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonIdCardEffTime)) {
    query->insert(pair<string, string>("LegalPersonIdCardEffTime", *request->legalPersonIdCardEffTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonIdCardFrontSide)) {
    query->insert(pair<string, string>("LegalPersonIdCardFrontSide", *request->legalPersonIdCardFrontSide));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonName)) {
    query->insert(pair<string, string>("LegalPersonName", *request->legalPersonName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherFilesShrink)) {
    query->insert(pair<string, string>("OtherFiles", *request->otherFilesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->qualificationGroupId)) {
    query->insert(pair<string, long>("QualificationGroupId", *request->qualificationGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSmsQualification"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSmsQualificationResponse(callApi(params, req, runtime));
}

UpdateSmsQualificationResponse Alibabacloud_Dysmsapi20170525::Client::updateSmsQualification(shared_ptr<UpdateSmsQualificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSmsQualificationWithOptions(request, runtime);
}

UpdateSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::updateSmsSignWithOptions(shared_ptr<UpdateSmsSignRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSmsSignShrinkRequest> request = make_shared<UpdateSmsSignShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->moreData)) {
    request->moreDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->moreData, make_shared<string>("MoreData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applySceneContent)) {
    query->insert(pair<string, string>("ApplySceneContent", *request->applySceneContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->authorizationLetterId)) {
    query->insert(pair<string, long>("AuthorizationLetterId", *request->authorizationLetterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moreDataShrink)) {
    query->insert(pair<string, string>("MoreData", *request->moreDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->qualificationId)) {
    query->insert(pair<string, long>("QualificationId", *request->qualificationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    query->insert(pair<string, string>("SignName", *request->signName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->signSource)) {
    query->insert(pair<string, long>("SignSource", *request->signSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->signType)) {
    query->insert(pair<string, long>("SignType", *request->signType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->thirdParty)) {
    query->insert(pair<string, bool>("ThirdParty", *request->thirdParty));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSmsSign"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSmsSignResponse(callApi(params, req, runtime));
}

UpdateSmsSignResponse Alibabacloud_Dysmsapi20170525::Client::updateSmsSign(shared_ptr<UpdateSmsSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSmsSignWithOptions(request, runtime);
}

UpdateSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::updateSmsTemplateWithOptions(shared_ptr<UpdateSmsTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSmsTemplateShrinkRequest> request = make_shared<UpdateSmsTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->moreData)) {
    request->moreDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->moreData, make_shared<string>("MoreData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applySceneContent)) {
    query->insert(pair<string, string>("ApplySceneContent", *request->applySceneContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intlType)) {
    query->insert(pair<string, long>("IntlType", *request->intlType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moreDataShrink)) {
    query->insert(pair<string, string>("MoreData", *request->moreDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedSignName)) {
    query->insert(pair<string, string>("RelatedSignName", *request->relatedSignName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateContent)) {
    query->insert(pair<string, string>("TemplateContent", *request->templateContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateRule)) {
    query->insert(pair<string, string>("TemplateRule", *request->templateRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateType)) {
    query->insert(pair<string, long>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSmsTemplate"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSmsTemplateResponse(callApi(params, req, runtime));
}

UpdateSmsTemplateResponse Alibabacloud_Dysmsapi20170525::Client::updateSmsTemplate(shared_ptr<UpdateSmsTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSmsTemplateWithOptions(request, runtime);
}

ValidPhoneCodeResponse Alibabacloud_Dysmsapi20170525::Client::validPhoneCodeWithOptions(shared_ptr<ValidPhoneCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyCode)) {
    query->insert(pair<string, string>("CertifyCode", *request->certifyCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNo)) {
    query->insert(pair<string, string>("PhoneNo", *request->phoneNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidPhoneCode"))},
    {"version", boost::any(string("2017-05-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidPhoneCodeResponse(callApi(params, req, runtime));
}

ValidPhoneCodeResponse Alibabacloud_Dysmsapi20170525::Client::validPhoneCode(shared_ptr<ValidPhoneCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validPhoneCodeWithOptions(request, runtime);
}

