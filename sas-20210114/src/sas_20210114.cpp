// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sas_20210114.hpp>
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

using namespace Alibabacloud_Sas20210114;

Alibabacloud_Sas20210114::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-beijing", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-zhangjiakou", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-huhehaote", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-wulanchabu", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-nanjing", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-fuzhou", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-heyuan", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-guangzhou", "tds.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-2", "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-6", "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2", "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1", "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-7", "tds.ap-southeast-1.aliyuncs.com"},
    {"cn-chengdu", "tds.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1", "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "tds.ap-southeast-1.aliyuncs.com"},
    {"cn-hongkong", "tds.cn-shanghai.aliyuncs.com"},
    {"eu-central-1", "tds.ap-southeast-1.aliyuncs.com"},
    {"us-east-1", "tds.ap-southeast-1.aliyuncs.com"},
    {"us-west-1", "tds.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "tds.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "tds.ap-southeast-1.aliyuncs.com"},
    {"me-central-1", "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "tds.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou-finance", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai-finance-1", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-heyuan-acdr-1", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-north-2-gov-1", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao-acdr-ut-1", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai-mybk", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-wuhan-lr", "tds.cn-shanghai.aliyuncs.com"},
    {"cn-zhengzhou-jva", "tds.cn-shanghai.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("sas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Sas20210114::Client::getEndpoint(shared_ptr<string> productId,
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

CreateScreenSettingResponse Alibabacloud_Sas20210114::Client::createScreenSettingWithOptions(shared_ptr<CreateScreenSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logoPower)) {
    query->insert(pair<string, bool>("LogoPower", *request->logoPower));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logoUrl)) {
    query->insert(pair<string, string>("LogoUrl", *request->logoUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorUrl)) {
    query->insert(pair<string, string>("MonitorUrl", *request->monitorUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->screenDataMap)) {
    query->insert(pair<string, string>("ScreenDataMap", *request->screenDataMap));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->screenDefault)) {
    query->insert(pair<string, long>("ScreenDefault", *request->screenDefault));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScreenSetting"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateScreenSettingResponse(callApi(params, req, runtime));
  }
  else {
    return CreateScreenSettingResponse(execute(params, req, runtime));
  }
}

CreateScreenSettingResponse Alibabacloud_Sas20210114::Client::createScreenSetting(shared_ptr<CreateScreenSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScreenSettingWithOptions(request, runtime);
}

DeleteScreenSettingResponse Alibabacloud_Sas20210114::Client::deleteScreenSettingWithOptions(shared_ptr<DeleteScreenSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScreenSetting"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteScreenSettingResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteScreenSettingResponse(execute(params, req, runtime));
  }
}

DeleteScreenSettingResponse Alibabacloud_Sas20210114::Client::deleteScreenSetting(shared_ptr<DeleteScreenSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScreenSettingWithOptions(request, runtime);
}

DescribeScreenAlarmEventListResponse Alibabacloud_Sas20210114::Client::describeScreenAlarmEventListWithOptions(shared_ptr<DescribeScreenAlarmEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmEventName)) {
    query->insert(pair<string, string>("AlarmEventName", *request->alarmEventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmEventType)) {
    query->insert(pair<string, string>("AlarmEventType", *request->alarmEventType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dealed)) {
    query->insert(pair<string, string>("Dealed", *request->dealed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->from)) {
    query->insert(pair<string, string>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->levels)) {
    query->insert(pair<string, string>("Levels", *request->levels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeEnd)) {
    query->insert(pair<string, string>("TimeEnd", *request->timeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeStart)) {
    query->insert(pair<string, string>("TimeStart", *request->timeStart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenAlarmEventList"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenAlarmEventListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenAlarmEventListResponse(execute(params, req, runtime));
  }
}

DescribeScreenAlarmEventListResponse Alibabacloud_Sas20210114::Client::describeScreenAlarmEventList(shared_ptr<DescribeScreenAlarmEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenAlarmEventListWithOptions(request, runtime);
}

DescribeScreenAttackAnalysisDataResponse Alibabacloud_Sas20210114::Client::describeScreenAttackAnalysisDataWithOptions(shared_ptr<DescribeScreenAttackAnalysisDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->base64)) {
    query->insert(pair<string, string>("Base64", *request->base64));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenAttackAnalysisData"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenAttackAnalysisDataResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenAttackAnalysisDataResponse(execute(params, req, runtime));
  }
}

DescribeScreenAttackAnalysisDataResponse Alibabacloud_Sas20210114::Client::describeScreenAttackAnalysisData(shared_ptr<DescribeScreenAttackAnalysisDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenAttackAnalysisDataWithOptions(request, runtime);
}

DescribeScreenCloudHcRiskResponse Alibabacloud_Sas20210114::Client::describeScreenCloudHcRiskWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenCloudHcRisk"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenCloudHcRiskResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenCloudHcRiskResponse(execute(params, req, runtime));
  }
}

DescribeScreenCloudHcRiskResponse Alibabacloud_Sas20210114::Client::describeScreenCloudHcRisk() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenCloudHcRiskWithOptions(runtime);
}

DescribeScreenDataMapResponse Alibabacloud_Sas20210114::Client::describeScreenDataMapWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenDataMap"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenDataMapResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenDataMapResponse(execute(params, req, runtime));
  }
}

DescribeScreenDataMapResponse Alibabacloud_Sas20210114::Client::describeScreenDataMap() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenDataMapWithOptions(runtime);
}

DescribeScreenEmerRiskResponse Alibabacloud_Sas20210114::Client::describeScreenEmerRiskWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenEmerRisk"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenEmerRiskResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenEmerRiskResponse(execute(params, req, runtime));
  }
}

DescribeScreenEmerRiskResponse Alibabacloud_Sas20210114::Client::describeScreenEmerRisk() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenEmerRiskWithOptions(runtime);
}

DescribeScreenHostStatisticsResponse Alibabacloud_Sas20210114::Client::describeScreenHostStatisticsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenHostStatistics"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenHostStatisticsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenHostStatisticsResponse(execute(params, req, runtime));
  }
}

DescribeScreenHostStatisticsResponse Alibabacloud_Sas20210114::Client::describeScreenHostStatistics() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenHostStatisticsWithOptions(runtime);
}

DescribeScreenOperateInfoResponse Alibabacloud_Sas20210114::Client::describeScreenOperateInfoWithOptions(shared_ptr<DescribeScreenOperateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenOperateInfo"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenOperateInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenOperateInfoResponse(execute(params, req, runtime));
  }
}

DescribeScreenOperateInfoResponse Alibabacloud_Sas20210114::Client::describeScreenOperateInfo(shared_ptr<DescribeScreenOperateInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenOperateInfoWithOptions(request, runtime);
}

DescribeScreenOssUploadInfoResponse Alibabacloud_Sas20210114::Client::describeScreenOssUploadInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenOssUploadInfo"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenOssUploadInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenOssUploadInfoResponse(execute(params, req, runtime));
  }
}

DescribeScreenOssUploadInfoResponse Alibabacloud_Sas20210114::Client::describeScreenOssUploadInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenOssUploadInfoWithOptions(runtime);
}

DescribeScreenScoreThreadResponse Alibabacloud_Sas20210114::Client::describeScreenScoreThreadWithOptions(shared_ptr<DescribeScreenScoreThreadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenScoreThread"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenScoreThreadResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenScoreThreadResponse(execute(params, req, runtime));
  }
}

DescribeScreenScoreThreadResponse Alibabacloud_Sas20210114::Client::describeScreenScoreThread(shared_ptr<DescribeScreenScoreThreadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenScoreThreadWithOptions(request, runtime);
}

DescribeScreenSecurityStatInfoResponse Alibabacloud_Sas20210114::Client::describeScreenSecurityStatInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenSecurityStatInfo"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenSecurityStatInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenSecurityStatInfoResponse(execute(params, req, runtime));
  }
}

DescribeScreenSecurityStatInfoResponse Alibabacloud_Sas20210114::Client::describeScreenSecurityStatInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenSecurityStatInfoWithOptions(runtime);
}

DescribeScreenSettingResponse Alibabacloud_Sas20210114::Client::describeScreenSettingWithOptions(shared_ptr<DescribeScreenSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenSetting"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenSettingResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenSettingResponse(execute(params, req, runtime));
  }
}

DescribeScreenSettingResponse Alibabacloud_Sas20210114::Client::describeScreenSetting(shared_ptr<DescribeScreenSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenSettingWithOptions(request, runtime);
}

DescribeScreenSummaryInfoResponse Alibabacloud_Sas20210114::Client::describeScreenSummaryInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenSummaryInfo"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenSummaryInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenSummaryInfoResponse(execute(params, req, runtime));
  }
}

DescribeScreenSummaryInfoResponse Alibabacloud_Sas20210114::Client::describeScreenSummaryInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenSummaryInfoWithOptions(runtime);
}

DescribeScreenTitlesResponse Alibabacloud_Sas20210114::Client::describeScreenTitlesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenTitles"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenTitlesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenTitlesResponse(execute(params, req, runtime));
  }
}

DescribeScreenTitlesResponse Alibabacloud_Sas20210114::Client::describeScreenTitles() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenTitlesWithOptions(runtime);
}

DescribeScreenUploadPictureResponse Alibabacloud_Sas20210114::Client::describeScreenUploadPictureWithOptions(shared_ptr<DescribeScreenUploadPictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logoUrl)) {
    query->insert(pair<string, string>("LogoUrl", *request->logoUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenUploadPicture"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenUploadPictureResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenUploadPictureResponse(execute(params, req, runtime));
  }
}

DescribeScreenUploadPictureResponse Alibabacloud_Sas20210114::Client::describeScreenUploadPicture(shared_ptr<DescribeScreenUploadPictureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenUploadPictureWithOptions(request, runtime);
}

DescribeScreenVersionConfigResponse Alibabacloud_Sas20210114::Client::describeScreenVersionConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScreenVersionConfig"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScreenVersionConfigResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScreenVersionConfigResponse(execute(params, req, runtime));
  }
}

DescribeScreenVersionConfigResponse Alibabacloud_Sas20210114::Client::describeScreenVersionConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScreenVersionConfigWithOptions(runtime);
}

GetFileDetectResultInnerResponse Alibabacloud_Sas20210114::Client::getFileDetectResultInnerWithOptions(shared_ptr<GetFileDetectResultInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dnaHashKeyList)) {
    query->insert(pair<string, vector<string>>("DnaHashKeyList", *request->dnaHashKeyList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->hashKeyList)) {
    query->insert(pair<string, vector<string>>("HashKeyList", *request->hashKeyList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    query->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileDetectResultInner"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetFileDetectResultInnerResponse(callApi(params, req, runtime));
  }
  else {
    return GetFileDetectResultInnerResponse(execute(params, req, runtime));
  }
}

GetFileDetectResultInnerResponse Alibabacloud_Sas20210114::Client::getFileDetectResultInner(shared_ptr<GetFileDetectResultInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileDetectResultInnerWithOptions(request, runtime);
}

ListGlobalUserConfigResponse Alibabacloud_Sas20210114::Client::listGlobalUserConfigWithOptions(shared_ptr<ListGlobalUserConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListGlobalUserConfigShrinkRequest> request = make_shared<ListGlobalUserConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->moduleList)) {
    request->moduleListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->moduleList, make_shared<string>("ModuleList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleListShrink)) {
    query->insert(pair<string, string>("ModuleList", *request->moduleListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGlobalUserConfig"))},
    {"version", boost::any(string("2021-01-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListGlobalUserConfigResponse(callApi(params, req, runtime));
  }
  else {
    return ListGlobalUserConfigResponse(execute(params, req, runtime));
  }
}

ListGlobalUserConfigResponse Alibabacloud_Sas20210114::Client::listGlobalUserConfig(shared_ptr<ListGlobalUserConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGlobalUserConfigWithOptions(request, runtime);
}

