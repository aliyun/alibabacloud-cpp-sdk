// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sddp_20190103.hpp>
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

using namespace Alibabacloud_Sddp20190103;

Alibabacloud_Sddp20190103::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hongkong", "sddp-api.cn-hongkong.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("sddp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Sddp20190103::Client::getEndpoint(shared_ptr<string> productId,
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

CreateConfigResponse Alibabacloud_Sddp20190103::Client::createConfigWithOptions(shared_ptr<CreateConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConfig"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConfigResponse(callApi(params, req, runtime));
}

CreateConfigResponse Alibabacloud_Sddp20190103::Client::createConfig(shared_ptr<CreateConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConfigWithOptions(request, runtime);
}

CreateDataLimitResponse Alibabacloud_Sddp20190103::Client::createDataLimitWithOptions(shared_ptr<CreateDataLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->auditStatus)) {
    query->insert(pair<string, long>("AuditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoScan)) {
    query->insert(pair<string, long>("AutoScan", *request->autoScan));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificatePermission)) {
    query->insert(pair<string, string>("CertificatePermission", *request->certificatePermission));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enable)) {
    query->insert(pair<string, long>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineType)) {
    query->insert(pair<string, string>("EngineType", *request->engineType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventStatus)) {
    query->insert(pair<string, long>("EventStatus", *request->eventStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->instantlyScan)) {
    query->insert(pair<string, bool>("InstantlyScan", *request->instantlyScan));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logStoreDay)) {
    query->insert(pair<string, long>("LogStoreDay", *request->logStoreDay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ocrStatus)) {
    query->insert(pair<string, long>("OcrStatus", *request->ocrStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentId)) {
    query->insert(pair<string, string>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->samplingSize)) {
    query->insert(pair<string, long>("SamplingSize", *request->samplingSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRegionId)) {
    query->insert(pair<string, string>("ServiceRegionId", *request->serviceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataLimit"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataLimitResponse(callApi(params, req, runtime));
}

CreateDataLimitResponse Alibabacloud_Sddp20190103::Client::createDataLimit(shared_ptr<CreateDataLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataLimitWithOptions(request, runtime);
}

CreateRuleResponse Alibabacloud_Sddp20190103::Client::createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->category)) {
    query->insert(pair<string, long>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->contentCategory)) {
    query->insert(pair<string, long>("ContentCategory", *request->contentCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->matchType)) {
    query->insert(pair<string, long>("MatchType", *request->matchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelRuleIds)) {
    query->insert(pair<string, string>("ModelRuleIds", *request->modelRuleIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    query->insert(pair<string, long>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevelId)) {
    query->insert(pair<string, long>("RiskLevelId", *request->riskLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleType)) {
    query->insert(pair<string, long>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statExpress)) {
    query->insert(pair<string, string>("StatExpress", *request->statExpress));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->supportForm)) {
    query->insert(pair<string, long>("SupportForm", *request->supportForm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateRuleIds)) {
    query->insert(pair<string, string>("TemplateRuleIds", *request->templateRuleIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->warnLevel)) {
    query->insert(pair<string, long>("WarnLevel", *request->warnLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRule"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRuleResponse(callApi(params, req, runtime));
}

CreateRuleResponse Alibabacloud_Sddp20190103::Client::createRule(shared_ptr<CreateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleWithOptions(request, runtime);
}

CreateScanTaskResponse Alibabacloud_Sddp20190103::Client::createScanTaskWithOptions(shared_ptr<CreateScanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataLimitId)) {
    query->insert(pair<string, long>("DataLimitId", *request->dataLimitId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intervalDay)) {
    query->insert(pair<string, long>("IntervalDay", *request->intervalDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossScanPath)) {
    query->insert(pair<string, string>("OssScanPath", *request->ossScanPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->runHour)) {
    query->insert(pair<string, long>("RunHour", *request->runHour));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->runMinute)) {
    query->insert(pair<string, long>("RunMinute", *request->runMinute));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scanRange)) {
    query->insert(pair<string, long>("ScanRange", *request->scanRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanRangeContent)) {
    query->insert(pair<string, string>("ScanRangeContent", *request->scanRangeContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskUserName)) {
    query->insert(pair<string, string>("TaskUserName", *request->taskUserName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScanTask"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScanTaskResponse(callApi(params, req, runtime));
}

CreateScanTaskResponse Alibabacloud_Sddp20190103::Client::createScanTask(shared_ptr<CreateScanTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScanTaskWithOptions(request, runtime);
}

CreateSlrRoleResponse Alibabacloud_Sddp20190103::Client::createSlrRoleWithOptions(shared_ptr<CreateSlrRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSlrRole"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSlrRoleResponse(callApi(params, req, runtime));
}

CreateSlrRoleResponse Alibabacloud_Sddp20190103::Client::createSlrRole(shared_ptr<CreateSlrRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSlrRoleWithOptions(request, runtime);
}

DeleteDataLimitResponse Alibabacloud_Sddp20190103::Client::deleteDataLimitWithOptions(shared_ptr<DeleteDataLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataLimit"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataLimitResponse(callApi(params, req, runtime));
}

DeleteDataLimitResponse Alibabacloud_Sddp20190103::Client::deleteDataLimit(shared_ptr<DeleteDataLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataLimitWithOptions(request, runtime);
}

DeleteRuleResponse Alibabacloud_Sddp20190103::Client::deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRule"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRuleResponse(callApi(params, req, runtime));
}

DeleteRuleResponse Alibabacloud_Sddp20190103::Client::deleteRule(shared_ptr<DeleteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleWithOptions(request, runtime);
}

DescribeCategoryTemplateListResponse Alibabacloud_Sddp20190103::Client::describeCategoryTemplateListWithOptions(shared_ptr<DescribeCategoryTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->usageScenario)) {
    query->insert(pair<string, long>("UsageScenario", *request->usageScenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCategoryTemplateList"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCategoryTemplateListResponse(callApi(params, req, runtime));
}

DescribeCategoryTemplateListResponse Alibabacloud_Sddp20190103::Client::describeCategoryTemplateList(shared_ptr<DescribeCategoryTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCategoryTemplateListWithOptions(request, runtime);
}

DescribeCategoryTemplateRuleListResponse Alibabacloud_Sddp20190103::Client::describeCategoryTemplateRuleListWithOptions(shared_ptr<DescribeCategoryTemplateRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevelId)) {
    query->insert(pair<string, long>("RiskLevelId", *request->riskLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCategoryTemplateRuleList"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCategoryTemplateRuleListResponse(callApi(params, req, runtime));
}

DescribeCategoryTemplateRuleListResponse Alibabacloud_Sddp20190103::Client::describeCategoryTemplateRuleList(shared_ptr<DescribeCategoryTemplateRuleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCategoryTemplateRuleListWithOptions(request, runtime);
}

DescribeColumnsResponse Alibabacloud_Sddp20190103::Client::describeColumnsWithOptions(shared_ptr<DescribeColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineType)) {
    query->insert(pair<string, string>("EngineType", *request->engineType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelTagId)) {
    query->insert(pair<string, string>("ModelTagId", *request->modelTagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    query->insert(pair<string, string>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevelId)) {
    query->insert(pair<string, long>("RiskLevelId", *request->riskLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sensLevelName)) {
    query->insert(pair<string, string>("SensLevelName", *request->sensLevelName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tableId)) {
    query->insert(pair<string, long>("TableId", *request->tableId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateRuleId)) {
    query->insert(pair<string, string>("TemplateRuleId", *request->templateRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeColumns"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeColumnsResponse(callApi(params, req, runtime));
}

DescribeColumnsResponse Alibabacloud_Sddp20190103::Client::describeColumns(shared_ptr<DescribeColumnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeColumnsWithOptions(request, runtime);
}

DescribeColumnsV2Response Alibabacloud_Sddp20190103::Client::describeColumnsV2WithOptions(shared_ptr<DescribeColumnsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevelId)) {
    query->insert(pair<string, long>("RiskLevelId", *request->riskLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sensLevelName)) {
    query->insert(pair<string, string>("SensLevelName", *request->sensLevelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableId)) {
    query->insert(pair<string, string>("TableId", *request->tableId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeColumnsV2"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeColumnsV2Response(callApi(params, req, runtime));
}

DescribeColumnsV2Response Alibabacloud_Sddp20190103::Client::describeColumnsV2(shared_ptr<DescribeColumnsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeColumnsV2WithOptions(request, runtime);
}

DescribeConfigsResponse Alibabacloud_Sddp20190103::Client::describeConfigsWithOptions(shared_ptr<DescribeConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConfigs"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConfigsResponse(callApi(params, req, runtime));
}

DescribeConfigsResponse Alibabacloud_Sddp20190103::Client::describeConfigs(shared_ptr<DescribeConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConfigsWithOptions(request, runtime);
}

DescribeDataAssetsResponse Alibabacloud_Sddp20190103::Client::describeDataAssetsWithOptions(shared_ptr<DescribeDataAssetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rangeId)) {
    query->insert(pair<string, long>("RangeId", *request->rangeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskLevels)) {
    query->insert(pair<string, string>("RiskLevels", *request->riskLevels));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataAssets"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataAssetsResponse(callApi(params, req, runtime));
}

DescribeDataAssetsResponse Alibabacloud_Sddp20190103::Client::describeDataAssets(shared_ptr<DescribeDataAssetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataAssetsWithOptions(request, runtime);
}

DescribeDataLimitDetailResponse Alibabacloud_Sddp20190103::Client::describeDataLimitDetailWithOptions(shared_ptr<DescribeDataLimitDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->networkType)) {
    query->insert(pair<string, long>("NetworkType", *request->networkType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataLimitDetail"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataLimitDetailResponse(callApi(params, req, runtime));
}

DescribeDataLimitDetailResponse Alibabacloud_Sddp20190103::Client::describeDataLimitDetail(shared_ptr<DescribeDataLimitDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataLimitDetailWithOptions(request, runtime);
}

DescribeDataLimitSetResponse Alibabacloud_Sddp20190103::Client::describeDataLimitSetWithOptions(shared_ptr<DescribeDataLimitSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentId)) {
    query->insert(pair<string, string>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataLimitSet"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataLimitSetResponse(callApi(params, req, runtime));
}

DescribeDataLimitSetResponse Alibabacloud_Sddp20190103::Client::describeDataLimitSet(shared_ptr<DescribeDataLimitSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataLimitSetWithOptions(request, runtime);
}

DescribeDataLimitsResponse Alibabacloud_Sddp20190103::Client::describeDataLimitsWithOptions(shared_ptr<DescribeDataLimitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->auditStatus)) {
    query->insert(pair<string, long>("AuditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkStatus)) {
    query->insert(pair<string, long>("CheckStatus", *request->checkStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datamaskStatus)) {
    query->insert(pair<string, long>("DatamaskStatus", *request->datamaskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enable)) {
    query->insert(pair<string, long>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineType)) {
    query->insert(pair<string, string>("EngineType", *request->engineType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memberAccount)) {
    query->insert(pair<string, long>("MemberAccount", *request->memberAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentId)) {
    query->insert(pair<string, string>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRegionId)) {
    query->insert(pair<string, string>("ServiceRegionId", *request->serviceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataLimits"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataLimitsResponse(callApi(params, req, runtime));
}

DescribeDataLimitsResponse Alibabacloud_Sddp20190103::Client::describeDataLimits(shared_ptr<DescribeDataLimitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataLimitsWithOptions(request, runtime);
}

DescribeDataMaskingRunHistoryResponse Alibabacloud_Sddp20190103::Client::describeDataMaskingRunHistoryWithOptions(shared_ptr<DescribeDataMaskingRunHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dstType)) {
    query->insert(pair<string, long>("DstType", *request->dstType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mainProcessId)) {
    query->insert(pair<string, long>("MainProcessId", *request->mainProcessId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcTableName)) {
    query->insert(pair<string, string>("SrcTableName", *request->srcTableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->srcType)) {
    query->insert(pair<string, long>("SrcType", *request->srcType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataMaskingRunHistory"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataMaskingRunHistoryResponse(callApi(params, req, runtime));
}

DescribeDataMaskingRunHistoryResponse Alibabacloud_Sddp20190103::Client::describeDataMaskingRunHistory(shared_ptr<DescribeDataMaskingRunHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataMaskingRunHistoryWithOptions(request, runtime);
}

DescribeDataMaskingTasksResponse Alibabacloud_Sddp20190103::Client::describeDataMaskingTasksWithOptions(shared_ptr<DescribeDataMaskingTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dstType)) {
    query->insert(pair<string, long>("DstType", *request->dstType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    query->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataMaskingTasks"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataMaskingTasksResponse(callApi(params, req, runtime));
}

DescribeDataMaskingTasksResponse Alibabacloud_Sddp20190103::Client::describeDataMaskingTasks(shared_ptr<DescribeDataMaskingTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataMaskingTasksWithOptions(request, runtime);
}

DescribeDataObjectColumnDetailResponse Alibabacloud_Sddp20190103::Client::describeDataObjectColumnDetailWithOptions(shared_ptr<DescribeDataObjectColumnDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    query->insert(pair<string, long>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataObjectColumnDetail"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataObjectColumnDetailResponse(callApi(params, req, runtime));
}

DescribeDataObjectColumnDetailResponse Alibabacloud_Sddp20190103::Client::describeDataObjectColumnDetail(shared_ptr<DescribeDataObjectColumnDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataObjectColumnDetailWithOptions(request, runtime);
}

DescribeDataObjectColumnDetailV2Response Alibabacloud_Sddp20190103::Client::describeDataObjectColumnDetailV2WithOptions(shared_ptr<DescribeDataObjectColumnDetailV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    query->insert(pair<string, long>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataObjectColumnDetailV2"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataObjectColumnDetailV2Response(callApi(params, req, runtime));
}

DescribeDataObjectColumnDetailV2Response Alibabacloud_Sddp20190103::Client::describeDataObjectColumnDetailV2(shared_ptr<DescribeDataObjectColumnDetailV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataObjectColumnDetailV2WithOptions(request, runtime);
}

DescribeDataObjectsResponse Alibabacloud_Sddp20190103::Client::describeDataObjectsWithOptions(shared_ptr<DescribeDataObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->domainId)) {
    query->insert(pair<string, long>("DomainId", *request->domainId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileCategoryCode)) {
    query->insert(pair<string, long>("FileCategoryCode", *request->fileCategoryCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileType)) {
    query->insert(pair<string, long>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memberAccount)) {
    query->insert(pair<string, long>("MemberAccount", *request->memberAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelIds)) {
    query->insert(pair<string, string>("ModelIds", *request->modelIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelTagIds)) {
    query->insert(pair<string, string>("ModelTagIds", *request->modelTagIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentCategoryIds)) {
    query->insert(pair<string, string>("ParentCategoryIds", *request->parentCategoryIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productIds)) {
    query->insert(pair<string, string>("ProductIds", *request->productIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryName)) {
    query->insert(pair<string, string>("QueryName", *request->queryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskLevels)) {
    query->insert(pair<string, string>("RiskLevels", *request->riskLevels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRegionId)) {
    query->insert(pair<string, string>("ServiceRegionId", *request->serviceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataObjects"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataObjectsResponse(callApi(params, req, runtime));
}

DescribeDataObjectsResponse Alibabacloud_Sddp20190103::Client::describeDataObjects(shared_ptr<DescribeDataObjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataObjectsWithOptions(request, runtime);
}

DescribeDocTypesResponse Alibabacloud_Sddp20190103::Client::describeDocTypesWithOptions(shared_ptr<DescribeDocTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDocTypes"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDocTypesResponse(callApi(params, req, runtime));
}

DescribeDocTypesResponse Alibabacloud_Sddp20190103::Client::describeDocTypes(shared_ptr<DescribeDocTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDocTypesWithOptions(request, runtime);
}

DescribeEventDetailResponse Alibabacloud_Sddp20190103::Client::describeEventDetailWithOptions(shared_ptr<DescribeEventDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventDetail"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventDetailResponse(callApi(params, req, runtime));
}

DescribeEventDetailResponse Alibabacloud_Sddp20190103::Client::describeEventDetail(shared_ptr<DescribeEventDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventDetailWithOptions(request, runtime);
}

DescribeEventTypesResponse Alibabacloud_Sddp20190103::Client::describeEventTypesWithOptions(shared_ptr<DescribeEventTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentTypeId)) {
    query->insert(pair<string, long>("ParentTypeId", *request->parentTypeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceId)) {
    query->insert(pair<string, long>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventTypes"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventTypesResponse(callApi(params, req, runtime));
}

DescribeEventTypesResponse Alibabacloud_Sddp20190103::Client::describeEventTypes(shared_ptr<DescribeEventTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventTypesWithOptions(request, runtime);
}

DescribeEventsResponse Alibabacloud_Sddp20190103::Client::describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dealUserId)) {
    query->insert(pair<string, string>("DealUserId", *request->dealUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subTypeCode)) {
    query->insert(pair<string, string>("SubTypeCode", *request->subTypeCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetProductCode)) {
    query->insert(pair<string, string>("TargetProductCode", *request->targetProductCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->typeCode)) {
    query->insert(pair<string, string>("TypeCode", *request->typeCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    query->insert(pair<string, long>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->warnLevel)) {
    query->insert(pair<string, long>("WarnLevel", *request->warnLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEvents"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventsResponse(callApi(params, req, runtime));
}

DescribeEventsResponse Alibabacloud_Sddp20190103::Client::describeEvents(shared_ptr<DescribeEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventsWithOptions(request, runtime);
}

DescribeIdentifyTaskStatusResponse Alibabacloud_Sddp20190103::Client::describeIdentifyTaskStatusWithOptions(shared_ptr<DescribeIdentifyTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIdentifyTaskStatus"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIdentifyTaskStatusResponse(callApi(params, req, runtime));
}

DescribeIdentifyTaskStatusResponse Alibabacloud_Sddp20190103::Client::describeIdentifyTaskStatus(shared_ptr<DescribeIdentifyTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIdentifyTaskStatusWithOptions(request, runtime);
}

DescribeInstanceSourcesResponse Alibabacloud_Sddp20190103::Client::describeInstanceSourcesWithOptions(shared_ptr<DescribeInstanceSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->auditStatus)) {
    query->insert(pair<string, long>("AuditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->authStatus)) {
    query->insert(pair<string, long>("AuthStatus", *request->authStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineType)) {
    query->insert(pair<string, string>("EngineType", *request->engineType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    query->insert(pair<string, long>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    query->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchType)) {
    query->insert(pair<string, string>("SearchType", *request->searchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRegionId)) {
    query->insert(pair<string, string>("ServiceRegionId", *request->serviceRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceSources"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceSourcesResponse(callApi(params, req, runtime));
}

DescribeInstanceSourcesResponse Alibabacloud_Sddp20190103::Client::describeInstanceSources(shared_ptr<DescribeInstanceSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSourcesWithOptions(request, runtime);
}

DescribeInstancesResponse Alibabacloud_Sddp20190103::Client::describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    query->insert(pair<string, long>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevelId)) {
    query->insert(pair<string, long>("RiskLevelId", *request->riskLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRegionId)) {
    query->insert(pair<string, string>("ServiceRegionId", *request->serviceRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstances"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstancesResponse(callApi(params, req, runtime));
}

DescribeInstancesResponse Alibabacloud_Sddp20190103::Client::describeInstances(shared_ptr<DescribeInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancesWithOptions(request, runtime);
}

DescribeOssObjectDetailResponse Alibabacloud_Sddp20190103::Client::describeOssObjectDetailWithOptions(shared_ptr<DescribeOssObjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssObjectDetail"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssObjectDetailResponse(callApi(params, req, runtime));
}

DescribeOssObjectDetailResponse Alibabacloud_Sddp20190103::Client::describeOssObjectDetail(shared_ptr<DescribeOssObjectDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssObjectDetailWithOptions(request, runtime);
}

DescribeOssObjectDetailV2Response Alibabacloud_Sddp20190103::Client::describeOssObjectDetailV2WithOptions(shared_ptr<DescribeOssObjectDetailV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectKey)) {
    query->insert(pair<string, string>("ObjectKey", *request->objectKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRegionId)) {
    query->insert(pair<string, string>("ServiceRegionId", *request->serviceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssObjectDetailV2"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssObjectDetailV2Response(callApi(params, req, runtime));
}

DescribeOssObjectDetailV2Response Alibabacloud_Sddp20190103::Client::describeOssObjectDetailV2(shared_ptr<DescribeOssObjectDetailV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssObjectDetailV2WithOptions(request, runtime);
}

DescribeOssObjectsResponse Alibabacloud_Sddp20190103::Client::describeOssObjectsWithOptions(shared_ptr<DescribeOssObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileCategoryCode)) {
    query->insert(pair<string, long>("FileCategoryCode", *request->fileCategoryCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lastScanTimeEnd)) {
    query->insert(pair<string, long>("LastScanTimeEnd", *request->lastScanTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lastScanTimeStart)) {
    query->insert(pair<string, long>("LastScanTimeStart", *request->lastScanTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->marker)) {
    query->insert(pair<string, long>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevelId)) {
    query->insert(pair<string, long>("RiskLevelId", *request->riskLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRegionId)) {
    query->insert(pair<string, string>("ServiceRegionId", *request->serviceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssObjects"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssObjectsResponse(callApi(params, req, runtime));
}

DescribeOssObjectsResponse Alibabacloud_Sddp20190103::Client::describeOssObjects(shared_ptr<DescribeOssObjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssObjectsWithOptions(request, runtime);
}

DescribePackagesResponse Alibabacloud_Sddp20190103::Client::describePackagesWithOptions(shared_ptr<DescribePackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    query->insert(pair<string, long>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevelId)) {
    query->insert(pair<string, long>("RiskLevelId", *request->riskLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePackages"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePackagesResponse(callApi(params, req, runtime));
}

DescribePackagesResponse Alibabacloud_Sddp20190103::Client::describePackages(shared_ptr<DescribePackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePackagesWithOptions(request, runtime);
}

DescribeParentInstanceResponse Alibabacloud_Sddp20190103::Client::describeParentInstanceWithOptions(shared_ptr<DescribeParentInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->authStatus)) {
    query->insert(pair<string, long>("AuthStatus", *request->authStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkStatus)) {
    query->insert(pair<string, long>("CheckStatus", *request->checkStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterStatus)) {
    query->insert(pair<string, string>("ClusterStatus", *request->clusterStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineType)) {
    query->insert(pair<string, string>("EngineType", *request->engineType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memberAccount)) {
    query->insert(pair<string, long>("MemberAccount", *request->memberAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRegionId)) {
    query->insert(pair<string, string>("ServiceRegionId", *request->serviceRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeParentInstance"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeParentInstanceResponse(callApi(params, req, runtime));
}

DescribeParentInstanceResponse Alibabacloud_Sddp20190103::Client::describeParentInstance(shared_ptr<DescribeParentInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParentInstanceWithOptions(request, runtime);
}

DescribeRiskLevelsResponse Alibabacloud_Sddp20190103::Client::describeRiskLevelsWithOptions(shared_ptr<DescribeRiskLevelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRiskLevels"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskLevelsResponse(callApi(params, req, runtime));
}

DescribeRiskLevelsResponse Alibabacloud_Sddp20190103::Client::describeRiskLevels(shared_ptr<DescribeRiskLevelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskLevelsWithOptions(request, runtime);
}

DescribeRulesResponse Alibabacloud_Sddp20190103::Client::describeRulesWithOptions(shared_ptr<DescribeRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->category)) {
    query->insert(pair<string, long>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->contentCategory)) {
    query->insert(pair<string, long>("ContentCategory", *request->contentCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cooperationChannel)) {
    query->insert(pair<string, string>("CooperationChannel", *request->cooperationChannel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->customType)) {
    query->insert(pair<string, long>("CustomType", *request->customType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keywordCompatible)) {
    query->insert(pair<string, bool>("KeywordCompatible", *request->keywordCompatible));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->matchType)) {
    query->insert(pair<string, long>("MatchType", *request->matchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productCode)) {
    query->insert(pair<string, long>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    query->insert(pair<string, long>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevelId)) {
    query->insert(pair<string, long>("RiskLevelId", *request->riskLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleType)) {
    query->insert(pair<string, long>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->simplify)) {
    query->insert(pair<string, bool>("Simplify", *request->simplify));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->supportForm)) {
    query->insert(pair<string, long>("SupportForm", *request->supportForm));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->warnLevel)) {
    query->insert(pair<string, long>("WarnLevel", *request->warnLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRules"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRulesResponse(callApi(params, req, runtime));
}

DescribeRulesResponse Alibabacloud_Sddp20190103::Client::describeRules(shared_ptr<DescribeRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRulesWithOptions(request, runtime);
}

DescribeTablesResponse Alibabacloud_Sddp20190103::Client::describeTablesWithOptions(shared_ptr<DescribeTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->packageId)) {
    query->insert(pair<string, long>("PackageId", *request->packageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    query->insert(pair<string, long>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevelId)) {
    query->insert(pair<string, long>("RiskLevelId", *request->riskLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRegionId)) {
    query->insert(pair<string, string>("ServiceRegionId", *request->serviceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTables"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTablesResponse(callApi(params, req, runtime));
}

DescribeTablesResponse Alibabacloud_Sddp20190103::Client::describeTables(shared_ptr<DescribeTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTablesWithOptions(request, runtime);
}

DescribeTemplateAllRulesResponse Alibabacloud_Sddp20190103::Client::describeTemplateAllRulesWithOptions(shared_ptr<DescribeTemplateAllRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplateAllRules"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTemplateAllRulesResponse(callApi(params, req, runtime));
}

DescribeTemplateAllRulesResponse Alibabacloud_Sddp20190103::Client::describeTemplateAllRules(shared_ptr<DescribeTemplateAllRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTemplateAllRulesWithOptions(request, runtime);
}

DescribeUserStatusResponse Alibabacloud_Sddp20190103::Client::describeUserStatusWithOptions(shared_ptr<DescribeUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserStatus"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserStatusResponse(callApi(params, req, runtime));
}

DescribeUserStatusResponse Alibabacloud_Sddp20190103::Client::describeUserStatus(shared_ptr<DescribeUserStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserStatusWithOptions(request, runtime);
}

DisableUserConfigResponse Alibabacloud_Sddp20190103::Client::disableUserConfigWithOptions(shared_ptr<DisableUserConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableUserConfig"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableUserConfigResponse(callApi(params, req, runtime));
}

DisableUserConfigResponse Alibabacloud_Sddp20190103::Client::disableUserConfig(shared_ptr<DisableUserConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableUserConfigWithOptions(request, runtime);
}

ExecDatamaskResponse Alibabacloud_Sddp20190103::Client::execDatamaskWithOptions(shared_ptr<ExecDatamaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecDatamask"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecDatamaskResponse(callApi(params, req, runtime));
}

ExecDatamaskResponse Alibabacloud_Sddp20190103::Client::execDatamask(shared_ptr<ExecDatamaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return execDatamaskWithOptions(request, runtime);
}

ManualTriggerMaskingProcessResponse Alibabacloud_Sddp20190103::Client::manualTriggerMaskingProcessWithOptions(shared_ptr<ManualTriggerMaskingProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ManualTriggerMaskingProcess"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ManualTriggerMaskingProcessResponse(callApi(params, req, runtime));
}

ManualTriggerMaskingProcessResponse Alibabacloud_Sddp20190103::Client::manualTriggerMaskingProcess(shared_ptr<ManualTriggerMaskingProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return manualTriggerMaskingProcessWithOptions(request, runtime);
}

ModifyDataLimitResponse Alibabacloud_Sddp20190103::Client::modifyDataLimitWithOptions(shared_ptr<ModifyDataLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->auditStatus)) {
    query->insert(pair<string, long>("AuditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoScan)) {
    query->insert(pair<string, long>("AutoScan", *request->autoScan));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineType)) {
    query->insert(pair<string, string>("EngineType", *request->engineType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logStoreDay)) {
    query->insert(pair<string, long>("LogStoreDay", *request->logStoreDay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->modifyPassword)) {
    query->insert(pair<string, bool>("ModifyPassword", *request->modifyPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->samplingSize)) {
    query->insert(pair<string, long>("SamplingSize", *request->samplingSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->securityGroupIdList)) {
    query->insert(pair<string, vector<string>>("SecurityGroupIdList", *request->securityGroupIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRegionId)) {
    query->insert(pair<string, string>("ServiceRegionId", *request->serviceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vSwitchIdList)) {
    query->insert(pair<string, vector<string>>("VSwitchIdList", *request->vSwitchIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDataLimit"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDataLimitResponse(callApi(params, req, runtime));
}

ModifyDataLimitResponse Alibabacloud_Sddp20190103::Client::modifyDataLimit(shared_ptr<ModifyDataLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDataLimitWithOptions(request, runtime);
}

ModifyDefaultLevelResponse Alibabacloud_Sddp20190103::Client::modifyDefaultLevelWithOptions(shared_ptr<ModifyDefaultLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->defaultId)) {
    query->insert(pair<string, long>("DefaultId", *request->defaultId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sensitiveIds)) {
    query->insert(pair<string, string>("SensitiveIds", *request->sensitiveIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDefaultLevel"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDefaultLevelResponse(callApi(params, req, runtime));
}

ModifyDefaultLevelResponse Alibabacloud_Sddp20190103::Client::modifyDefaultLevel(shared_ptr<ModifyDefaultLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDefaultLevelWithOptions(request, runtime);
}

ModifyEventStatusResponse Alibabacloud_Sddp20190103::Client::modifyEventStatusWithOptions(shared_ptr<ModifyEventStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->backed)) {
    query->insert(pair<string, bool>("Backed", *request->backed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dealReason)) {
    query->insert(pair<string, string>("DealReason", *request->dealReason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEventStatus"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyEventStatusResponse(callApi(params, req, runtime));
}

ModifyEventStatusResponse Alibabacloud_Sddp20190103::Client::modifyEventStatus(shared_ptr<ModifyEventStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEventStatusWithOptions(request, runtime);
}

ModifyEventTypeStatusResponse Alibabacloud_Sddp20190103::Client::modifyEventTypeStatusWithOptions(shared_ptr<ModifyEventTypeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subTypeIds)) {
    query->insert(pair<string, string>("SubTypeIds", *request->subTypeIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEventTypeStatus"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyEventTypeStatusResponse(callApi(params, req, runtime));
}

ModifyEventTypeStatusResponse Alibabacloud_Sddp20190103::Client::modifyEventTypeStatus(shared_ptr<ModifyEventTypeStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEventTypeStatusWithOptions(request, runtime);
}

ModifyReportTaskStatusResponse Alibabacloud_Sddp20190103::Client::modifyReportTaskStatusWithOptions(shared_ptr<ModifyReportTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->featureType)) {
    query->insert(pair<string, long>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reportTaskStatus)) {
    query->insert(pair<string, long>("ReportTaskStatus", *request->reportTaskStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyReportTaskStatus"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyReportTaskStatusResponse(callApi(params, req, runtime));
}

ModifyReportTaskStatusResponse Alibabacloud_Sddp20190103::Client::modifyReportTaskStatus(shared_ptr<ModifyReportTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyReportTaskStatusWithOptions(request, runtime);
}

ModifyRuleResponse Alibabacloud_Sddp20190103::Client::modifyRuleWithOptions(shared_ptr<ModifyRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->category)) {
    query->insert(pair<string, long>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->matchType)) {
    query->insert(pair<string, long>("MatchType", *request->matchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelRuleIds)) {
    query->insert(pair<string, string>("ModelRuleIds", *request->modelRuleIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    query->insert(pair<string, long>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskLevelId)) {
    query->insert(pair<string, long>("RiskLevelId", *request->riskLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleType)) {
    query->insert(pair<string, long>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->supportForm)) {
    query->insert(pair<string, long>("SupportForm", *request->supportForm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateRuleIds)) {
    query->insert(pair<string, string>("TemplateRuleIds", *request->templateRuleIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->warnLevel)) {
    query->insert(pair<string, long>("WarnLevel", *request->warnLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyRule"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyRuleResponse(callApi(params, req, runtime));
}

ModifyRuleResponse Alibabacloud_Sddp20190103::Client::modifyRule(shared_ptr<ModifyRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRuleWithOptions(request, runtime);
}

ModifyRuleStatusResponse Alibabacloud_Sddp20190103::Client::modifyRuleStatusWithOptions(shared_ptr<ModifyRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("Ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyRuleStatus"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyRuleStatusResponse(callApi(params, req, runtime));
}

ModifyRuleStatusResponse Alibabacloud_Sddp20190103::Client::modifyRuleStatus(shared_ptr<ModifyRuleStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRuleStatusWithOptions(request, runtime);
}

ScanOssObjectV1Response Alibabacloud_Sddp20190103::Client::scanOssObjectV1WithOptions(shared_ptr<ScanOssObjectV1Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ScanOssObjectV1ShrinkRequest> request = make_shared<ScanOssObjectV1ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->objectKeyList)) {
    request->objectKeyListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->objectKeyList, make_shared<string>("ObjectKeyList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("BucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectKeyListShrink)) {
    query->insert(pair<string, string>("ObjectKeyList", *request->objectKeyListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRegionId)) {
    query->insert(pair<string, string>("ServiceRegionId", *request->serviceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScanOssObjectV1"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScanOssObjectV1Response(callApi(params, req, runtime));
}

ScanOssObjectV1Response Alibabacloud_Sddp20190103::Client::scanOssObjectV1(shared_ptr<ScanOssObjectV1Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return scanOssObjectV1WithOptions(request, runtime);
}

StopMaskingProcessResponse Alibabacloud_Sddp20190103::Client::stopMaskingProcessWithOptions(shared_ptr<StopMaskingProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopMaskingProcess"))},
    {"version", boost::any(string("2019-01-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopMaskingProcessResponse(callApi(params, req, runtime));
}

StopMaskingProcessResponse Alibabacloud_Sddp20190103::Client::stopMaskingProcess(shared_ptr<StopMaskingProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopMaskingProcessWithOptions(request, runtime);
}

