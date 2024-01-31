// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/quotas_20200510.hpp>
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

using namespace Alibabacloud_Quotas20200510;

Alibabacloud_Quotas20200510::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("quotas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Quotas20200510::Client::getEndpoint(shared_ptr<string> productId,
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

CreateQuotaAlarmResponse Alibabacloud_Quotas20200510::Client::createQuotaAlarmWithOptions(shared_ptr<CreateQuotaAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmName)) {
    body->insert(pair<string, string>("AlarmName", *request->alarmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateQuotaAlarmRequestQuotaDimensions>>(request->quotaDimensions)) {
    body->insert(pair<string, vector<CreateQuotaAlarmRequestQuotaDimensions>>("QuotaDimensions", *request->quotaDimensions));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    body->insert(pair<string, double>("Threshold", *request->threshold));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->thresholdPercent)) {
    body->insert(pair<string, double>("ThresholdPercent", *request->thresholdPercent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thresholdType)) {
    body->insert(pair<string, string>("ThresholdType", *request->thresholdType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webHook)) {
    body->insert(pair<string, string>("WebHook", *request->webHook));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQuotaAlarm"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQuotaAlarmResponse(callApi(params, req, runtime));
}

CreateQuotaAlarmResponse Alibabacloud_Quotas20200510::Client::createQuotaAlarm(shared_ptr<CreateQuotaAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQuotaAlarmWithOptions(request, runtime);
}

CreateQuotaApplicationResponse Alibabacloud_Quotas20200510::Client::createQuotaApplicationWithOptions(shared_ptr<CreateQuotaApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->auditMode)) {
    body->insert(pair<string, string>("AuditMode", *request->auditMode));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->desireValue)) {
    body->insert(pair<string, double>("DesireValue", *request->desireValue));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateQuotaApplicationRequestDimensions>>(request->dimensions)) {
    body->insert(pair<string, vector<CreateQuotaApplicationRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectiveTime)) {
    body->insert(pair<string, string>("EffectiveTime", *request->effectiveTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envLanguage)) {
    body->insert(pair<string, string>("EnvLanguage", *request->envLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTime)) {
    body->insert(pair<string, string>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->noticeType)) {
    body->insert(pair<string, long>("NoticeType", *request->noticeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaCategory)) {
    body->insert(pair<string, string>("QuotaCategory", *request->quotaCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("Reason", *request->reason));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQuotaApplication"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQuotaApplicationResponse(callApi(params, req, runtime));
}

CreateQuotaApplicationResponse Alibabacloud_Quotas20200510::Client::createQuotaApplication(shared_ptr<CreateQuotaApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQuotaApplicationWithOptions(request, runtime);
}

CreateQuotaApplicationsForTemplateResponse Alibabacloud_Quotas20200510::Client::createQuotaApplicationsForTemplateWithOptions(shared_ptr<CreateQuotaApplicationsForTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aliyunUids)) {
    body->insert(pair<string, vector<string>>("AliyunUids", *request->aliyunUids));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->desireValue)) {
    body->insert(pair<string, double>("DesireValue", *request->desireValue));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateQuotaApplicationsForTemplateRequestDimensions>>(request->dimensions)) {
    body->insert(pair<string, vector<CreateQuotaApplicationsForTemplateRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectiveTime)) {
    body->insert(pair<string, string>("EffectiveTime", *request->effectiveTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envLanguage)) {
    body->insert(pair<string, string>("EnvLanguage", *request->envLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTime)) {
    body->insert(pair<string, string>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->noticeType)) {
    body->insert(pair<string, long>("NoticeType", *request->noticeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaCategory)) {
    body->insert(pair<string, string>("QuotaCategory", *request->quotaCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("Reason", *request->reason));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQuotaApplicationsForTemplate"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQuotaApplicationsForTemplateResponse(callApi(params, req, runtime));
}

CreateQuotaApplicationsForTemplateResponse Alibabacloud_Quotas20200510::Client::createQuotaApplicationsForTemplate(shared_ptr<CreateQuotaApplicationsForTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQuotaApplicationsForTemplateWithOptions(request, runtime);
}

CreateTemplateQuotaItemResponse Alibabacloud_Quotas20200510::Client::createTemplateQuotaItemWithOptions(shared_ptr<CreateTemplateQuotaItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<double>(request->desireValue)) {
    body->insert(pair<string, double>("DesireValue", *request->desireValue));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTemplateQuotaItemRequestDimensions>>(request->dimensions)) {
    body->insert(pair<string, vector<CreateTemplateQuotaItemRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectiveTime)) {
    body->insert(pair<string, string>("EffectiveTime", *request->effectiveTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envLanguage)) {
    body->insert(pair<string, string>("EnvLanguage", *request->envLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTime)) {
    body->insert(pair<string, string>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->noticeType)) {
    body->insert(pair<string, long>("NoticeType", *request->noticeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaCategory)) {
    body->insert(pair<string, string>("QuotaCategory", *request->quotaCategory));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTemplateQuotaItem"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTemplateQuotaItemResponse(callApi(params, req, runtime));
}

CreateTemplateQuotaItemResponse Alibabacloud_Quotas20200510::Client::createTemplateQuotaItem(shared_ptr<CreateTemplateQuotaItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTemplateQuotaItemWithOptions(request, runtime);
}

DeleteQuotaAlarmResponse Alibabacloud_Quotas20200510::Client::deleteQuotaAlarmWithOptions(shared_ptr<DeleteQuotaAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmId)) {
    body->insert(pair<string, string>("AlarmId", *request->alarmId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQuotaAlarm"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQuotaAlarmResponse(callApi(params, req, runtime));
}

DeleteQuotaAlarmResponse Alibabacloud_Quotas20200510::Client::deleteQuotaAlarm(shared_ptr<DeleteQuotaAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQuotaAlarmWithOptions(request, runtime);
}

DeleteTemplateQuotaItemResponse Alibabacloud_Quotas20200510::Client::deleteTemplateQuotaItemWithOptions(shared_ptr<DeleteTemplateQuotaItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTemplateQuotaItem"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTemplateQuotaItemResponse(callApi(params, req, runtime));
}

DeleteTemplateQuotaItemResponse Alibabacloud_Quotas20200510::Client::deleteTemplateQuotaItem(shared_ptr<DeleteTemplateQuotaItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateQuotaItemWithOptions(request, runtime);
}

GetProductQuotaResponse Alibabacloud_Quotas20200510::Client::getProductQuotaWithOptions(shared_ptr<GetProductQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GetProductQuotaRequestDimensions>>(request->dimensions)) {
    body->insert(pair<string, vector<GetProductQuotaRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductQuota"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductQuotaResponse(callApi(params, req, runtime));
}

GetProductQuotaResponse Alibabacloud_Quotas20200510::Client::getProductQuota(shared_ptr<GetProductQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProductQuotaWithOptions(request, runtime);
}

GetProductQuotaDimensionResponse Alibabacloud_Quotas20200510::Client::getProductQuotaDimensionWithOptions(shared_ptr<GetProductQuotaDimensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GetProductQuotaDimensionRequestDependentDimensions>>(request->dependentDimensions)) {
    body->insert(pair<string, vector<GetProductQuotaDimensionRequestDependentDimensions>>("DependentDimensions", *request->dependentDimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dimensionKey)) {
    body->insert(pair<string, string>("DimensionKey", *request->dimensionKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductQuotaDimension"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductQuotaDimensionResponse(callApi(params, req, runtime));
}

GetProductQuotaDimensionResponse Alibabacloud_Quotas20200510::Client::getProductQuotaDimension(shared_ptr<GetProductQuotaDimensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProductQuotaDimensionWithOptions(request, runtime);
}

GetQuotaAlarmResponse Alibabacloud_Quotas20200510::Client::getQuotaAlarmWithOptions(shared_ptr<GetQuotaAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmId)) {
    body->insert(pair<string, string>("AlarmId", *request->alarmId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQuotaAlarm"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQuotaAlarmResponse(callApi(params, req, runtime));
}

GetQuotaAlarmResponse Alibabacloud_Quotas20200510::Client::getQuotaAlarm(shared_ptr<GetQuotaAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQuotaAlarmWithOptions(request, runtime);
}

GetQuotaApplicationResponse Alibabacloud_Quotas20200510::Client::getQuotaApplicationWithOptions(shared_ptr<GetQuotaApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationId)) {
    body->insert(pair<string, string>("ApplicationId", *request->applicationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQuotaApplication"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQuotaApplicationResponse(callApi(params, req, runtime));
}

GetQuotaApplicationResponse Alibabacloud_Quotas20200510::Client::getQuotaApplication(shared_ptr<GetQuotaApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQuotaApplicationWithOptions(request, runtime);
}

GetQuotaTemplateServiceStatusResponse Alibabacloud_Quotas20200510::Client::getQuotaTemplateServiceStatusWithOptions(shared_ptr<GetQuotaTemplateServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceDirectoryId)) {
    body->insert(pair<string, string>("ResourceDirectoryId", *request->resourceDirectoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQuotaTemplateServiceStatus"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQuotaTemplateServiceStatusResponse(callApi(params, req, runtime));
}

GetQuotaTemplateServiceStatusResponse Alibabacloud_Quotas20200510::Client::getQuotaTemplateServiceStatus(shared_ptr<GetQuotaTemplateServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQuotaTemplateServiceStatusWithOptions(request, runtime);
}

ListAlarmHistoriesResponse Alibabacloud_Quotas20200510::Client::listAlarmHistoriesWithOptions(shared_ptr<ListAlarmHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmId)) {
    body->insert(pair<string, string>("AlarmId", *request->alarmId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlarmHistories"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlarmHistoriesResponse(callApi(params, req, runtime));
}

ListAlarmHistoriesResponse Alibabacloud_Quotas20200510::Client::listAlarmHistories(shared_ptr<ListAlarmHistoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlarmHistoriesWithOptions(request, runtime);
}

ListDependentQuotasResponse Alibabacloud_Quotas20200510::Client::listDependentQuotasWithOptions(shared_ptr<ListDependentQuotasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDependentQuotas"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDependentQuotasResponse(callApi(params, req, runtime));
}

ListDependentQuotasResponse Alibabacloud_Quotas20200510::Client::listDependentQuotas(shared_ptr<ListDependentQuotasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDependentQuotasWithOptions(request, runtime);
}

ListProductDimensionGroupsResponse Alibabacloud_Quotas20200510::Client::listProductDimensionGroupsWithOptions(shared_ptr<ListProductDimensionGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductDimensionGroups"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductDimensionGroupsResponse(callApi(params, req, runtime));
}

ListProductDimensionGroupsResponse Alibabacloud_Quotas20200510::Client::listProductDimensionGroups(shared_ptr<ListProductDimensionGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductDimensionGroupsWithOptions(request, runtime);
}

ListProductQuotaDimensionsResponse Alibabacloud_Quotas20200510::Client::listProductQuotaDimensionsWithOptions(shared_ptr<ListProductQuotaDimensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaCategory)) {
    body->insert(pair<string, string>("QuotaCategory", *request->quotaCategory));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductQuotaDimensions"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductQuotaDimensionsResponse(callApi(params, req, runtime));
}

ListProductQuotaDimensionsResponse Alibabacloud_Quotas20200510::Client::listProductQuotaDimensions(shared_ptr<ListProductQuotaDimensionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductQuotaDimensionsWithOptions(request, runtime);
}

ListProductQuotasResponse Alibabacloud_Quotas20200510::Client::listProductQuotasWithOptions(shared_ptr<ListProductQuotasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListProductQuotasRequestDimensions>>(request->dimensions)) {
    body->insert(pair<string, vector<ListProductQuotasRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupCode)) {
    body->insert(pair<string, string>("GroupCode", *request->groupCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    body->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaCategory)) {
    body->insert(pair<string, string>("QuotaCategory", *request->quotaCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortField)) {
    body->insert(pair<string, string>("SortField", *request->sortField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    body->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductQuotas"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductQuotasResponse(callApi(params, req, runtime));
}

ListProductQuotasResponse Alibabacloud_Quotas20200510::Client::listProductQuotas(shared_ptr<ListProductQuotasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductQuotasWithOptions(request, runtime);
}

ListProductsResponse Alibabacloud_Quotas20200510::Client::listProductsWithOptions(shared_ptr<ListProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProducts"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductsResponse(callApi(params, req, runtime));
}

ListProductsResponse Alibabacloud_Quotas20200510::Client::listProducts(shared_ptr<ListProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductsWithOptions(request, runtime);
}

ListQuotaAlarmsResponse Alibabacloud_Quotas20200510::Client::listQuotaAlarmsWithOptions(shared_ptr<ListQuotaAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmName)) {
    body->insert(pair<string, string>("AlarmName", *request->alarmName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListQuotaAlarmsRequestQuotaDimensions>>(request->quotaDimensions)) {
    body->insert(pair<string, vector<ListQuotaAlarmsRequestQuotaDimensions>>("QuotaDimensions", *request->quotaDimensions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQuotaAlarms"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQuotaAlarmsResponse(callApi(params, req, runtime));
}

ListQuotaAlarmsResponse Alibabacloud_Quotas20200510::Client::listQuotaAlarms(shared_ptr<ListQuotaAlarmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQuotaAlarmsWithOptions(request, runtime);
}

ListQuotaApplicationTemplatesResponse Alibabacloud_Quotas20200510::Client::listQuotaApplicationTemplatesWithOptions(shared_ptr<ListQuotaApplicationTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListQuotaApplicationTemplatesRequestDimensions>>(request->dimensions)) {
    body->insert(pair<string, vector<ListQuotaApplicationTemplatesRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaCategory)) {
    body->insert(pair<string, string>("QuotaCategory", *request->quotaCategory));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQuotaApplicationTemplates"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQuotaApplicationTemplatesResponse(callApi(params, req, runtime));
}

ListQuotaApplicationTemplatesResponse Alibabacloud_Quotas20200510::Client::listQuotaApplicationTemplates(shared_ptr<ListQuotaApplicationTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQuotaApplicationTemplatesWithOptions(request, runtime);
}

ListQuotaApplicationsResponse Alibabacloud_Quotas20200510::Client::listQuotaApplicationsWithOptions(shared_ptr<ListQuotaApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListQuotaApplicationsRequestDimensions>>(request->dimensions)) {
    body->insert(pair<string, vector<ListQuotaApplicationsRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    body->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaCategory)) {
    body->insert(pair<string, string>("QuotaCategory", *request->quotaCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQuotaApplications"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQuotaApplicationsResponse(callApi(params, req, runtime));
}

ListQuotaApplicationsResponse Alibabacloud_Quotas20200510::Client::listQuotaApplications(shared_ptr<ListQuotaApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQuotaApplicationsWithOptions(request, runtime);
}

ListQuotaApplicationsDetailForTemplateResponse Alibabacloud_Quotas20200510::Client::listQuotaApplicationsDetailForTemplateWithOptions(shared_ptr<ListQuotaApplicationsDetailForTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunUid)) {
    body->insert(pair<string, string>("AliyunUid", *request->aliyunUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->batchQuotaApplicationId)) {
    body->insert(pair<string, string>("BatchQuotaApplicationId", *request->batchQuotaApplicationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaCategory)) {
    body->insert(pair<string, string>("QuotaCategory", *request->quotaCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQuotaApplicationsDetailForTemplate"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQuotaApplicationsDetailForTemplateResponse(callApi(params, req, runtime));
}

ListQuotaApplicationsDetailForTemplateResponse Alibabacloud_Quotas20200510::Client::listQuotaApplicationsDetailForTemplate(shared_ptr<ListQuotaApplicationsDetailForTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQuotaApplicationsDetailForTemplateWithOptions(request, runtime);
}

ListQuotaApplicationsForTemplateResponse Alibabacloud_Quotas20200510::Client::listQuotaApplicationsForTemplateWithOptions(shared_ptr<ListQuotaApplicationsForTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyEndTime)) {
    body->insert(pair<string, string>("ApplyEndTime", *request->applyEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyStartTime)) {
    body->insert(pair<string, string>("ApplyStartTime", *request->applyStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->batchQuotaApplicationId)) {
    body->insert(pair<string, string>("BatchQuotaApplicationId", *request->batchQuotaApplicationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaCategory)) {
    body->insert(pair<string, string>("QuotaCategory", *request->quotaCategory));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQuotaApplicationsForTemplate"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQuotaApplicationsForTemplateResponse(callApi(params, req, runtime));
}

ListQuotaApplicationsForTemplateResponse Alibabacloud_Quotas20200510::Client::listQuotaApplicationsForTemplate(shared_ptr<ListQuotaApplicationsForTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQuotaApplicationsForTemplateWithOptions(request, runtime);
}

ModifyQuotaTemplateServiceStatusResponse Alibabacloud_Quotas20200510::Client::modifyQuotaTemplateServiceStatusWithOptions(shared_ptr<ModifyQuotaTemplateServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceStatus)) {
    body->insert(pair<string, long>("ServiceStatus", *request->serviceStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyQuotaTemplateServiceStatus"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyQuotaTemplateServiceStatusResponse(callApi(params, req, runtime));
}

ModifyQuotaTemplateServiceStatusResponse Alibabacloud_Quotas20200510::Client::modifyQuotaTemplateServiceStatus(shared_ptr<ModifyQuotaTemplateServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyQuotaTemplateServiceStatusWithOptions(request, runtime);
}

ModifyTemplateQuotaItemResponse Alibabacloud_Quotas20200510::Client::modifyTemplateQuotaItemWithOptions(shared_ptr<ModifyTemplateQuotaItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaCategory)) {
    query->insert(pair<string, string>("QuotaCategory", *request->quotaCategory));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<double>(request->desireValue)) {
    body->insert(pair<string, double>("DesireValue", *request->desireValue));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyTemplateQuotaItemRequestDimensions>>(request->dimensions)) {
    body->insert(pair<string, vector<ModifyTemplateQuotaItemRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectiveTime)) {
    body->insert(pair<string, string>("EffectiveTime", *request->effectiveTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envLanguage)) {
    body->insert(pair<string, string>("EnvLanguage", *request->envLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTime)) {
    body->insert(pair<string, string>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->noticeType)) {
    body->insert(pair<string, long>("NoticeType", *request->noticeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaActionCode)) {
    body->insert(pair<string, string>("QuotaActionCode", *request->quotaActionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTemplateQuotaItem"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTemplateQuotaItemResponse(callApi(params, req, runtime));
}

ModifyTemplateQuotaItemResponse Alibabacloud_Quotas20200510::Client::modifyTemplateQuotaItem(shared_ptr<ModifyTemplateQuotaItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTemplateQuotaItemWithOptions(request, runtime);
}

UpdateQuotaAlarmResponse Alibabacloud_Quotas20200510::Client::updateQuotaAlarmWithOptions(shared_ptr<UpdateQuotaAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmId)) {
    body->insert(pair<string, string>("AlarmId", *request->alarmId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmName)) {
    body->insert(pair<string, string>("AlarmName", *request->alarmName));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    body->insert(pair<string, double>("Threshold", *request->threshold));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->thresholdPercent)) {
    body->insert(pair<string, double>("ThresholdPercent", *request->thresholdPercent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thresholdType)) {
    body->insert(pair<string, string>("ThresholdType", *request->thresholdType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webHook)) {
    body->insert(pair<string, string>("WebHook", *request->webHook));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQuotaAlarm"))},
    {"version", boost::any(string("2020-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateQuotaAlarmResponse(callApi(params, req, runtime));
}

UpdateQuotaAlarmResponse Alibabacloud_Quotas20200510::Client::updateQuotaAlarm(shared_ptr<UpdateQuotaAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQuotaAlarmWithOptions(request, runtime);
}

