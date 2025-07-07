// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dataworks_public_20240518.hpp>
#include <alibabacloud/credential.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <darabonba/xml.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Dataworks-public20240518;

Alibabacloud_Dataworks-public20240518::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "dataworks.ap-northeast-1.aliyuncs.com"},
    {"ap-south-1", "dataworks.ap-south-1.aliyuncs.com"},
    {"ap-southeast-1", "dataworks.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "dataworks.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "dataworks.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "dataworks.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing", "dataworks.cn-beijing.aliyuncs.com"},
    {"cn-chengdu", "dataworks.cn-chengdu.aliyuncs.com"},
    {"cn-hangzhou", "dataworks.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong", "dataworks.cn-hongkong.aliyuncs.com"},
    {"cn-huhehaote", "dataworks.aliyuncs.com"},
    {"cn-qingdao", "dataworks.aliyuncs.com"},
    {"cn-shanghai", "dataworks.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "dataworks.cn-shenzhen.aliyuncs.com"},
    {"cn-zhangjiakou", "dataworks.aliyuncs.com"},
    {"eu-central-1", "dataworks.eu-central-1.aliyuncs.com"},
    {"eu-west-1", "dataworks.eu-west-1.aliyuncs.com"},
    {"me-east-1", "dataworks.me-east-1.aliyuncs.com"},
    {"us-east-1", "dataworks.us-east-1.aliyuncs.com"},
    {"us-west-1", "dataworks.us-west-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "dataworks.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "dataworks.aliyuncs.com"},
    {"cn-shanghai-finance-1", "dataworks.aliyuncs.com"},
    {"cn-north-2-gov-1", "dataworks.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dataworks-public"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

map<string, boost::any> Alibabacloud_Dataworks-public20240518::Client::_postOSSObject(shared_ptr<string> bucketName, shared_ptr<map<string, boost::any>> data) {
  shared_ptr<Darabonba::Request> request_ = make_shared<Darabonba::Request>();
  shared_ptr<map<string, boost::any>> form = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(data));
  shared_ptr<string> boundary = make_shared<string>(Darabonba_FileForm::Client::getBoundary());
  shared_ptr<string> host = make_shared<string>(Darabonba_Util::Client::assertAsString(make_shared<boost::any>((*form)["host"])));
  request_->protocol = "HTTPS";
  request_->method = "POST";
  request_->pathname = string("/");
  request_->headers = {
    {"host", !host ? string() : *host},
    {"date", Darabonba_Util::Client::getDateUTCString()},
    {"user-agent", Darabonba_Util::Client::getUserAgent(make_shared<string>(""))}
  };
  request_->headers.insert(pair<string, string>("content-type", string("multipart/form-data; boundary=") + string(*boundary)));
  request_->body = Darabonba::Converter::toStream(Darabonba_FileForm::Client::toFileForm(form, boundary));
  shared_ptr<Darabonba::Request> _lastRequest = request_;
  shared_ptr<Darabonba::Response> response_ = make_shared<Darabonba::Response>(Darabonba::Core::doAction(request_));
  shared_ptr<map<string, boost::any>> respMap;
  shared_ptr<string> bodyStr = make_shared<string>(Darabonba_Util::Client::readAsString(response_->body));
  if (Darabonba_Util::Client::is4xx(make_shared<int>(response_->statusCode)) || Darabonba_Util::Client::is5xx(make_shared<int>(response_->statusCode))) {
    respMap = make_shared<map<string, boost::any>>(Darabonba_XML::Client::parseXml(bodyStr, nullptr));
    shared_ptr<map<string, boost::any>> err = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(make_shared<boost::any>((*respMap)["Error"])));
    BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, boost::any>({
      {"code", (*err)["Code"]},
      {"message", (*err)["Message"]},
      {"data", boost::any(map<string, boost::any>({
        {"httpCode", boost::any(response_->statusCode)},
        {"requestId", (*err)["RequestId"]},
        {"hostId", (*err)["HostId"]}
      }))}
    })));
  }
  respMap = make_shared<map<string, boost::any>>(Darabonba_XML::Client::parseXml(bodyStr, nullptr));
  return Darabonba::Converter::merge(map<string, boost::any>(), !respMap ? map<string, boost::any>() : *respMap);
}

string Alibabacloud_Dataworks-public20240518::Client::getEndpoint(shared_ptr<string> productId,
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

AbolishPipelineRunResponse Alibabacloud_Dataworks-public20240518::Client::abolishPipelineRunWithOptions(shared_ptr<AbolishPipelineRunRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbolishPipelineRun"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbolishPipelineRunResponse(callApi(params, req, runtime));
}

AbolishPipelineRunResponse Alibabacloud_Dataworks-public20240518::Client::abolishPipelineRun(shared_ptr<AbolishPipelineRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abolishPipelineRunWithOptions(request, runtime);
}

AddEntityIntoMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::addEntityIntoMetaCollectionWithOptions(shared_ptr<AddEntityIntoMetaCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metaCollectionId)) {
    query->insert(pair<string, string>("MetaCollectionId", *request->metaCollectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEntityIntoMetaCollection"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEntityIntoMetaCollectionResponse(callApi(params, req, runtime));
}

AddEntityIntoMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::addEntityIntoMetaCollection(shared_ptr<AddEntityIntoMetaCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEntityIntoMetaCollectionWithOptions(request, runtime);
}

AssociateProjectToResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::associateProjectToResourceGroupWithOptions(shared_ptr<AssociateProjectToResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateProjectToResourceGroup"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateProjectToResourceGroupResponse(callApi(params, req, runtime));
}

AssociateProjectToResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::associateProjectToResourceGroup(shared_ptr<AssociateProjectToResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateProjectToResourceGroupWithOptions(request, runtime);
}

AttachDataQualityRulesToEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::attachDataQualityRulesToEvaluationTaskWithOptions(shared_ptr<AttachDataQualityRulesToEvaluationTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AttachDataQualityRulesToEvaluationTaskShrinkRequest> request = make_shared<AttachDataQualityRulesToEvaluationTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->dataQualityRuleIds)) {
    request->dataQualityRuleIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataQualityRuleIds, make_shared<string>("DataQualityRuleIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataQualityEvaluationTaskId)) {
    body->insert(pair<string, long>("DataQualityEvaluationTaskId", *request->dataQualityEvaluationTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataQualityRuleIdsShrink)) {
    body->insert(pair<string, string>("DataQualityRuleIds", *request->dataQualityRuleIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachDataQualityRulesToEvaluationTask"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachDataQualityRulesToEvaluationTaskResponse(callApi(params, req, runtime));
}

AttachDataQualityRulesToEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::attachDataQualityRulesToEvaluationTask(shared_ptr<AttachDataQualityRulesToEvaluationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDataQualityRulesToEvaluationTaskWithOptions(request, runtime);
}

BatchUpdateTasksResponse Alibabacloud_Dataworks-public20240518::Client::batchUpdateTasksWithOptions(shared_ptr<BatchUpdateTasksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchUpdateTasksShrinkRequest> request = make_shared<BatchUpdateTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<BatchUpdateTasksRequestTasks>>(tmpReq->tasks)) {
    request->tasksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tasks, make_shared<string>("Tasks"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tasksShrink)) {
    body->insert(pair<string, string>("Tasks", *request->tasksShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUpdateTasks"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUpdateTasksResponse(callApi(params, req, runtime));
}

BatchUpdateTasksResponse Alibabacloud_Dataworks-public20240518::Client::batchUpdateTasks(shared_ptr<BatchUpdateTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUpdateTasksWithOptions(request, runtime);
}

CloneDataSourceResponse Alibabacloud_Dataworks-public20240518::Client::cloneDataSourceWithOptions(shared_ptr<CloneDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cloneDataSourceName)) {
    query->insert(pair<string, string>("CloneDataSourceName", *request->cloneDataSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneDataSource"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneDataSourceResponse(callApi(params, req, runtime));
}

CloneDataSourceResponse Alibabacloud_Dataworks-public20240518::Client::cloneDataSource(shared_ptr<CloneDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cloneDataSourceWithOptions(request, runtime);
}

CreateAlertRuleResponse Alibabacloud_Dataworks-public20240518::Client::createAlertRuleWithOptions(shared_ptr<CreateAlertRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAlertRuleShrinkRequest> request = make_shared<CreateAlertRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateAlertRuleRequestNotification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAlertRuleRequestTriggerCondition>(tmpReq->triggerCondition)) {
    request->triggerConditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->triggerCondition, make_shared<string>("TriggerCondition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    query->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerConditionShrink)) {
    query->insert(pair<string, string>("TriggerCondition", *request->triggerConditionShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlertRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAlertRuleResponse(callApi(params, req, runtime));
}

CreateAlertRuleResponse Alibabacloud_Dataworks-public20240518::Client::createAlertRule(shared_ptr<CreateAlertRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAlertRuleWithOptions(request, runtime);
}

CreateBusinessResponse Alibabacloud_Dataworks-public20240518::Client::createBusinessWithOptions(shared_ptr<CreateBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessName)) {
    body->insert(pair<string, string>("BusinessName", *request->businessName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->useType)) {
    body->insert(pair<string, string>("UseType", *request->useType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBusiness"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBusinessResponse(callApi(params, req, runtime));
}

CreateBusinessResponse Alibabacloud_Dataworks-public20240518::Client::createBusiness(shared_ptr<CreateBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBusinessWithOptions(request, runtime);
}

CreateDIAlarmRuleResponse Alibabacloud_Dataworks-public20240518::Client::createDIAlarmRuleWithOptions(shared_ptr<CreateDIAlarmRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDIAlarmRuleShrinkRequest> request = make_shared<CreateDIAlarmRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDIAlarmRuleRequestNotificationSettings>(tmpReq->notificationSettings)) {
    request->notificationSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notificationSettings, make_shared<string>("NotificationSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDIAlarmRuleRequestTriggerConditions>>(tmpReq->triggerConditions)) {
    request->triggerConditionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->triggerConditions, make_shared<string>("TriggerConditions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDIAlarmRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDIAlarmRuleResponse(callApi(params, req, runtime));
}

CreateDIAlarmRuleResponse Alibabacloud_Dataworks-public20240518::Client::createDIAlarmRule(shared_ptr<CreateDIAlarmRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDIAlarmRuleWithOptions(request, runtime);
}

CreateDIJobResponse Alibabacloud_Dataworks-public20240518::Client::createDIJobWithOptions(shared_ptr<CreateDIJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDIJobShrinkRequest> request = make_shared<CreateDIJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateDIJobRequestDestinationDataSourceSettings>>(tmpReq->destinationDataSourceSettings)) {
    request->destinationDataSourceSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->destinationDataSourceSettings, make_shared<string>("DestinationDataSourceSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDIJobRequestJobSettings>(tmpReq->jobSettings)) {
    request->jobSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->jobSettings, make_shared<string>("JobSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDIJobRequestResourceSettings>(tmpReq->resourceSettings)) {
    request->resourceSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceSettings, make_shared<string>("ResourceSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDIJobRequestSourceDataSourceSettings>>(tmpReq->sourceDataSourceSettings)) {
    request->sourceDataSourceSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceDataSourceSettings, make_shared<string>("SourceDataSourceSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDIJobRequestTableMappings>>(tmpReq->tableMappings)) {
    request->tableMappingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tableMappings, make_shared<string>("TableMappings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDIJobRequestTransformationRules>>(tmpReq->transformationRules)) {
    request->transformationRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transformationRules, make_shared<string>("TransformationRules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationDataSourceType)) {
    query->insert(pair<string, string>("DestinationDataSourceType", *request->destinationDataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobName)) {
    query->insert(pair<string, string>("JobName", *request->jobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationType)) {
    query->insert(pair<string, string>("MigrationType", *request->migrationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceDataSourceType)) {
    query->insert(pair<string, string>("SourceDataSourceType", *request->sourceDataSourceType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationDataSourceSettingsShrink)) {
    body->insert(pair<string, string>("DestinationDataSourceSettings", *request->destinationDataSourceSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobSettingsShrink)) {
    body->insert(pair<string, string>("JobSettings", *request->jobSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceSettingsShrink)) {
    body->insert(pair<string, string>("ResourceSettings", *request->resourceSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceDataSourceSettingsShrink)) {
    body->insert(pair<string, string>("SourceDataSourceSettings", *request->sourceDataSourceSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableMappingsShrink)) {
    body->insert(pair<string, string>("TableMappings", *request->tableMappingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transformationRulesShrink)) {
    body->insert(pair<string, string>("TransformationRules", *request->transformationRulesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDIJob"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDIJobResponse(callApi(params, req, runtime));
}

CreateDIJobResponse Alibabacloud_Dataworks-public20240518::Client::createDIJob(shared_ptr<CreateDIJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDIJobWithOptions(request, runtime);
}

CreateDataAssetTagResponse Alibabacloud_Dataworks-public20240518::Client::createDataAssetTagWithOptions(shared_ptr<CreateDataAssetTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataAssetTagShrinkRequest> request = make_shared<CreateDataAssetTagShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->managers)) {
    request->managersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->managers, make_shared<string>("Managers"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->values)) {
    request->valuesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->values, make_shared<string>("Values"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managersShrink)) {
    query->insert(pair<string, string>("Managers", *request->managersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->valueType)) {
    query->insert(pair<string, string>("ValueType", *request->valueType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->valuesShrink)) {
    query->insert(pair<string, string>("Values", *request->valuesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataAssetTag"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataAssetTagResponse(callApi(params, req, runtime));
}

CreateDataAssetTagResponse Alibabacloud_Dataworks-public20240518::Client::createDataAssetTag(shared_ptr<CreateDataAssetTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataAssetTagWithOptions(request, runtime);
}

CreateDataQualityEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::createDataQualityEvaluationTaskWithOptions(shared_ptr<CreateDataQualityEvaluationTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataQualityEvaluationTaskShrinkRequest> request = make_shared<CreateDataQualityEvaluationTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateDataQualityEvaluationTaskRequestDataQualityRules>>(tmpReq->dataQualityRules)) {
    request->dataQualityRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataQualityRules, make_shared<string>("DataQualityRules"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDataQualityEvaluationTaskRequestHooks>>(tmpReq->hooks)) {
    request->hooksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hooks, make_shared<string>("Hooks"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataQualityEvaluationTaskRequestNotifications>(tmpReq->notifications)) {
    request->notificationsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notifications, make_shared<string>("Notifications"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataQualityEvaluationTaskRequestTarget>(tmpReq->target)) {
    request->targetShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->target, make_shared<string>("Target"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataQualityEvaluationTaskRequestTrigger>(tmpReq->trigger)) {
    request->triggerShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->trigger, make_shared<string>("Trigger"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataQualityRulesShrink)) {
    body->insert(pair<string, string>("DataQualityRules", *request->dataQualityRulesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    body->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hooksShrink)) {
    body->insert(pair<string, string>("Hooks", *request->hooksShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationsShrink)) {
    body->insert(pair<string, string>("Notifications", *request->notificationsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeConf)) {
    body->insert(pair<string, string>("RuntimeConf", *request->runtimeConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetShrink)) {
    body->insert(pair<string, string>("Target", *request->targetShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerShrink)) {
    body->insert(pair<string, string>("Trigger", *request->triggerShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataQualityEvaluationTask"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataQualityEvaluationTaskResponse(callApi(params, req, runtime));
}

CreateDataQualityEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::createDataQualityEvaluationTask(shared_ptr<CreateDataQualityEvaluationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataQualityEvaluationTaskWithOptions(request, runtime);
}

CreateDataQualityEvaluationTaskInstanceResponse Alibabacloud_Dataworks-public20240518::Client::createDataQualityEvaluationTaskInstanceWithOptions(shared_ptr<CreateDataQualityEvaluationTaskInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataQualityEvaluationTaskInstanceShrinkRequest> request = make_shared<CreateDataQualityEvaluationTaskInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataQualityEvaluationTaskInstanceRequestRuntimeResource>(tmpReq->runtimeResource)) {
    request->runtimeResourceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->runtimeResource, make_shared<string>("RuntimeResource"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataQualityEvaluationTaskId)) {
    body->insert(pair<string, long>("DataQualityEvaluationTaskId", *request->dataQualityEvaluationTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    body->insert(pair<string, string>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeResourceShrink)) {
    body->insert(pair<string, string>("RuntimeResource", *request->runtimeResourceShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataQualityEvaluationTaskInstance"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataQualityEvaluationTaskInstanceResponse(callApi(params, req, runtime));
}

CreateDataQualityEvaluationTaskInstanceResponse Alibabacloud_Dataworks-public20240518::Client::createDataQualityEvaluationTaskInstance(shared_ptr<CreateDataQualityEvaluationTaskInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataQualityEvaluationTaskInstanceWithOptions(request, runtime);
}

CreateDataQualityRuleResponse Alibabacloud_Dataworks-public20240518::Client::createDataQualityRuleWithOptions(shared_ptr<CreateDataQualityRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataQualityRuleShrinkRequest> request = make_shared<CreateDataQualityRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataQualityRuleRequestCheckingConfig>(tmpReq->checkingConfig)) {
    request->checkingConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->checkingConfig, make_shared<string>("CheckingConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDataQualityRuleRequestErrorHandlers>>(tmpReq->errorHandlers)) {
    request->errorHandlersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->errorHandlers, make_shared<string>("ErrorHandlers"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataQualityRuleRequestSamplingConfig>(tmpReq->samplingConfig)) {
    request->samplingConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->samplingConfig, make_shared<string>("SamplingConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataQualityRuleRequestTarget>(tmpReq->target)) {
    request->targetShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->target, make_shared<string>("Target"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkingConfigShrink)) {
    body->insert(pair<string, string>("CheckingConfig", *request->checkingConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    body->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorHandlersShrink)) {
    body->insert(pair<string, string>("ErrorHandlers", *request->errorHandlersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->samplingConfigShrink)) {
    body->insert(pair<string, string>("SamplingConfig", *request->samplingConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    body->insert(pair<string, string>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetShrink)) {
    body->insert(pair<string, string>("Target", *request->targetShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    body->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataQualityRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataQualityRuleResponse(callApi(params, req, runtime));
}

CreateDataQualityRuleResponse Alibabacloud_Dataworks-public20240518::Client::createDataQualityRule(shared_ptr<CreateDataQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataQualityRuleWithOptions(request, runtime);
}

CreateDataQualityRuleTemplateResponse Alibabacloud_Dataworks-public20240518::Client::createDataQualityRuleTemplateWithOptions(shared_ptr<CreateDataQualityRuleTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataQualityRuleTemplateShrinkRequest> request = make_shared<CreateDataQualityRuleTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDataQualityRuleTemplateRequestCheckingConfig>(tmpReq->checkingConfig)) {
    request->checkingConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->checkingConfig, make_shared<string>("CheckingConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataQualityRuleTemplateRequestSamplingConfig>(tmpReq->samplingConfig)) {
    request->samplingConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->samplingConfig, make_shared<string>("SamplingConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkingConfigShrink)) {
    body->insert(pair<string, string>("CheckingConfig", *request->checkingConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryPath)) {
    body->insert(pair<string, string>("DirectoryPath", *request->directoryPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->samplingConfigShrink)) {
    body->insert(pair<string, string>("SamplingConfig", *request->samplingConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visibleScope)) {
    body->insert(pair<string, string>("VisibleScope", *request->visibleScope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataQualityRuleTemplate"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataQualityRuleTemplateResponse(callApi(params, req, runtime));
}

CreateDataQualityRuleTemplateResponse Alibabacloud_Dataworks-public20240518::Client::createDataQualityRuleTemplate(shared_ptr<CreateDataQualityRuleTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataQualityRuleTemplateWithOptions(request, runtime);
}

CreateDataSourceResponse Alibabacloud_Dataworks-public20240518::Client::createDataSourceWithOptions(shared_ptr<CreateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionProperties)) {
    query->insert(pair<string, string>("ConnectionProperties", *request->connectionProperties));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPropertiesMode)) {
    query->insert(pair<string, string>("ConnectionPropertiesMode", *request->connectionPropertiesMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataSource"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataSourceResponse(callApi(params, req, runtime));
}

CreateDataSourceResponse Alibabacloud_Dataworks-public20240518::Client::createDataSource(shared_ptr<CreateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataSourceWithOptions(request, runtime);
}

CreateDataSourceSharedRuleResponse Alibabacloud_Dataworks-public20240518::Client::createDataSourceSharedRuleWithOptions(shared_ptr<CreateDataSourceSharedRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sharedUser)) {
    query->insert(pair<string, string>("SharedUser", *request->sharedUser));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetProjectId)) {
    query->insert(pair<string, long>("TargetProjectId", *request->targetProjectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataSourceSharedRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataSourceSharedRuleResponse(callApi(params, req, runtime));
}

CreateDataSourceSharedRuleResponse Alibabacloud_Dataworks-public20240518::Client::createDataSourceSharedRule(shared_ptr<CreateDataSourceSharedRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataSourceSharedRuleWithOptions(request, runtime);
}

CreateFileResponse Alibabacloud_Dataworks-public20240518::Client::createFileWithOptions(shared_ptr<CreateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->advancedSettings)) {
    body->insert(pair<string, string>("AdvancedSettings", *request->advancedSettings));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->applyScheduleImmediately)) {
    body->insert(pair<string, bool>("ApplyScheduleImmediately", *request->applyScheduleImmediately));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoParsing)) {
    body->insert(pair<string, bool>("AutoParsing", *request->autoParsing));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRerunIntervalMillis)) {
    body->insert(pair<string, long>("AutoRerunIntervalMillis", *request->autoRerunIntervalMillis));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRerunTimes)) {
    body->insert(pair<string, long>("AutoRerunTimes", *request->autoRerunTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionName)) {
    body->insert(pair<string, string>("ConnectionName", *request->connectionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->createFolderIfNotExists)) {
    body->insert(pair<string, bool>("CreateFolderIfNotExists", *request->createFolderIfNotExists));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cronExpress)) {
    body->insert(pair<string, string>("CronExpress", *request->cronExpress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cycleType)) {
    body->insert(pair<string, string>("CycleType", *request->cycleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dependentNodeIdList)) {
    body->insert(pair<string, string>("DependentNodeIdList", *request->dependentNodeIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dependentType)) {
    body->insert(pair<string, string>("DependentType", *request->dependentType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endEffectDate)) {
    body->insert(pair<string, long>("EndEffectDate", *request->endEffectDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileDescription)) {
    body->insert(pair<string, string>("FileDescription", *request->fileDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileFolderPath)) {
    body->insert(pair<string, string>("FileFolderPath", *request->fileFolderPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileType)) {
    body->insert(pair<string, long>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreParentSkipRunningProperty)) {
    body->insert(pair<string, bool>("IgnoreParentSkipRunningProperty", *request->ignoreParentSkipRunningProperty));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputList)) {
    body->insert(pair<string, string>("InputList", *request->inputList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputParameters)) {
    body->insert(pair<string, string>("InputParameters", *request->inputParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputParameters)) {
    body->insert(pair<string, string>("OutputParameters", *request->outputParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paraValue)) {
    body->insert(pair<string, string>("ParaValue", *request->paraValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rerunMode)) {
    body->insert(pair<string, string>("RerunMode", *request->rerunMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceGroupId)) {
    body->insert(pair<string, long>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdentifier)) {
    body->insert(pair<string, string>("ResourceGroupIdentifier", *request->resourceGroupIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulerType)) {
    body->insert(pair<string, string>("SchedulerType", *request->schedulerType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startEffectDate)) {
    body->insert(pair<string, long>("StartEffectDate", *request->startEffectDate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->startImmediately)) {
    body->insert(pair<string, bool>("StartImmediately", *request->startImmediately));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stop)) {
    body->insert(pair<string, bool>("Stop", *request->stop));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFile"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFileResponse(callApi(params, req, runtime));
}

CreateFileResponse Alibabacloud_Dataworks-public20240518::Client::createFile(shared_ptr<CreateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFileWithOptions(request, runtime);
}

CreateFolderResponse Alibabacloud_Dataworks-public20240518::Client::createFolderWithOptions(shared_ptr<CreateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderPath)) {
    body->insert(pair<string, string>("FolderPath", *request->folderPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFolder"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFolderResponse(callApi(params, req, runtime));
}

CreateFolderResponse Alibabacloud_Dataworks-public20240518::Client::createFolder(shared_ptr<CreateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFolderWithOptions(request, runtime);
}

CreateFunctionResponse Alibabacloud_Dataworks-public20240518::Client::createFunctionWithOptions(shared_ptr<CreateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFunction"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFunctionResponse(callApi(params, req, runtime));
}

CreateFunctionResponse Alibabacloud_Dataworks-public20240518::Client::createFunction(shared_ptr<CreateFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFunctionWithOptions(request, runtime);
}

CreateLineageRelationshipResponse Alibabacloud_Dataworks-public20240518::Client::createLineageRelationshipWithOptions(shared_ptr<CreateLineageRelationshipRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLineageRelationshipShrinkRequest> request = make_shared<CreateLineageRelationshipShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<LineageEntity>(tmpReq->dstEntity)) {
    request->dstEntityShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dstEntity, make_shared<string>("DstEntity"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<LineageEntity>(tmpReq->srcEntity)) {
    request->srcEntityShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->srcEntity, make_shared<string>("SrcEntity"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<LineageTask>(tmpReq->task)) {
    request->taskShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->task, make_shared<string>("Task"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dstEntityShrink)) {
    query->insert(pair<string, string>("DstEntity", *request->dstEntityShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcEntityShrink)) {
    query->insert(pair<string, string>("SrcEntity", *request->srcEntityShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskShrink)) {
    query->insert(pair<string, string>("Task", *request->taskShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLineageRelationship"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLineageRelationshipResponse(callApi(params, req, runtime));
}

CreateLineageRelationshipResponse Alibabacloud_Dataworks-public20240518::Client::createLineageRelationship(shared_ptr<CreateLineageRelationshipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLineageRelationshipWithOptions(request, runtime);
}

CreateMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::createMetaCollectionWithOptions(shared_ptr<CreateMetaCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentId)) {
    query->insert(pair<string, string>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMetaCollection"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMetaCollectionResponse(callApi(params, req, runtime));
}

CreateMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::createMetaCollection(shared_ptr<CreateMetaCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMetaCollectionWithOptions(request, runtime);
}

CreateNetworkResponse Alibabacloud_Dataworks-public20240518::Client::createNetworkWithOptions(shared_ptr<CreateNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vswitchId)) {
    body->insert(pair<string, string>("VswitchId", *request->vswitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNetwork"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNetworkResponse(callApi(params, req, runtime));
}

CreateNetworkResponse Alibabacloud_Dataworks-public20240518::Client::createNetwork(shared_ptr<CreateNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkWithOptions(request, runtime);
}

CreateNodeResponse Alibabacloud_Dataworks-public20240518::Client::createNodeWithOptions(shared_ptr<CreateNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->containerId)) {
    body->insert(pair<string, long>("ContainerId", *request->containerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNode"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNodeResponse(callApi(params, req, runtime));
}

CreateNodeResponse Alibabacloud_Dataworks-public20240518::Client::createNode(shared_ptr<CreateNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNodeWithOptions(request, runtime);
}

CreatePipelineRunResponse Alibabacloud_Dataworks-public20240518::Client::createPipelineRunWithOptions(shared_ptr<CreatePipelineRunRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePipelineRunShrinkRequest> request = make_shared<CreatePipelineRunShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->objectIds)) {
    request->objectIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->objectIds, make_shared<string>("ObjectIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectIdsShrink)) {
    body->insert(pair<string, string>("ObjectIds", *request->objectIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePipelineRun"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePipelineRunResponse(callApi(params, req, runtime));
}

CreatePipelineRunResponse Alibabacloud_Dataworks-public20240518::Client::createPipelineRun(shared_ptr<CreatePipelineRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPipelineRunWithOptions(request, runtime);
}

CreateProjectResponse Alibabacloud_Dataworks-public20240518::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateProjectShrinkRequest> request = make_shared<CreateProjectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateProjectRequestAliyunResourceTags>>(tmpReq->aliyunResourceTags)) {
    request->aliyunResourceTagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->aliyunResourceTags, make_shared<string>("AliyunResourceTags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunResourceGroupId)) {
    body->insert(pair<string, string>("AliyunResourceGroupId", *request->aliyunResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunResourceTagsShrink)) {
    body->insert(pair<string, string>("AliyunResourceTags", *request->aliyunResourceTagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->devEnvironmentEnabled)) {
    body->insert(pair<string, bool>("DevEnvironmentEnabled", *request->devEnvironmentEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->devRoleDisabled)) {
    body->insert(pair<string, bool>("DevRoleDisabled", *request->devRoleDisabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->paiTaskEnabled)) {
    body->insert(pair<string, bool>("PaiTaskEnabled", *request->paiTaskEnabled));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProject"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectResponse(callApi(params, req, runtime));
}

CreateProjectResponse Alibabacloud_Dataworks-public20240518::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectWithOptions(request, runtime);
}

CreateProjectMemberResponse Alibabacloud_Dataworks-public20240518::Client::createProjectMemberWithOptions(shared_ptr<CreateProjectMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateProjectMemberShrinkRequest> request = make_shared<CreateProjectMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->roleCodes)) {
    request->roleCodesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roleCodes, make_shared<string>("RoleCodes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleCodesShrink)) {
    body->insert(pair<string, string>("RoleCodes", *request->roleCodesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProjectMember"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectMemberResponse(callApi(params, req, runtime));
}

CreateProjectMemberResponse Alibabacloud_Dataworks-public20240518::Client::createProjectMember(shared_ptr<CreateProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectMemberWithOptions(request, runtime);
}

CreateResourceResponse Alibabacloud_Dataworks-public20240518::Client::createResourceWithOptions(shared_ptr<CreateResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceFile)) {
    body->insert(pair<string, string>("ResourceFile", *request->resourceFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResource"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceResponse(callApi(params, req, runtime));
}

CreateResourceResponse Alibabacloud_Dataworks-public20240518::Client::createResource(shared_ptr<CreateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceWithOptions(request, runtime);
}

CreateResourceResponse Alibabacloud_Dataworks-public20240518::Client::createResourceAdvance(shared_ptr<CreateResourceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<Alibabacloud_Credential::CredentialModel> credentialModel;
  if (Darabonba_Util::Client::isUnset<Alibabacloud_Credential::Client>(_credential)) {
    BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, string>({
      {"code", "InvalidCredentials"},
      {"message", "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    })));
  }
  credentialModel = make_shared<Alibabacloud_Credential::CredentialModel>(_credential->getCredential());
  shared_ptr<string> accessKeyId = credentialModel->accessKeyId;
  shared_ptr<string> accessKeySecret = credentialModel->accessKeySecret;
  shared_ptr<string> securityToken = credentialModel->securityToken;
  shared_ptr<string> credentialType = credentialModel->type;
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Client> authClient = make_shared<Alibabacloud_OpenApi::Client>(authConfig);
  shared_ptr<map<string, string>> authRequest = make_shared<map<string, string>>(map<string, string>({
    {"Product", "dataworks-public"},
    {"RegionId", !_regionId ? string() : *_regionId}
  })
);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> authReq = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(authRequest))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> authParams = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeFileUpload"))},
    {"version", boost::any(string("2019-12-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  shared_ptr<map<string, boost::any>> authResponse = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<map<string, boost::any>> ossHeader = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> tmpBody = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<bool> useAccelerate = make_shared<bool>(false);
  shared_ptr<map<string, string>> authResponseBody = make_shared<map<string, string>>(map<string, string>());
  shared_ptr<CreateResourceRequest> createResourceReq = make_shared<CreateResourceRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, createResourceReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->resourceFileObject)) {
    shared_ptr<boost::any> tmpResp0 = make_shared<boost::any>(authClient->callApi(authParams, authReq, runtime));
    authResponse = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(tmpResp0));
    tmpBody = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(make_shared<boost::any>((*authResponse)["body"])));
    useAccelerate = make_shared<bool>(Darabonba_Util::Client::assertAsBoolean(make_shared<boost::any>((*tmpBody)["UseAccelerate"])));
    authResponseBody = make_shared<map<string, string>>(Darabonba_Util::Client::stringifyMapValue(tmpBody));
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", boost::any(string((*authResponseBody)["ObjectKey"]))},
      {"content", !request->resourceFileObject ? boost::any() : boost::any(*request->resourceFileObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<map<string, boost::any>>(map<string, boost::any>({
      {"host", boost::any(string((*authResponseBody)["Bucket"]) + string(".") + string(Alibabacloud_OpenApiUtil::Client::getEndpoint(make_shared<string>((*authResponseBody)["Endpoint"]), useAccelerate, _endpointType)))},
      {"OSSAccessKeyId", boost::any(string((*authResponseBody)["AccessKeyId"]))},
      {"policy", boost::any(string((*authResponseBody)["EncodedPolicy"]))},
      {"Signature", boost::any(string((*authResponseBody)["Signature"]))},
      {"key", boost::any(string((*authResponseBody)["ObjectKey"]))},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"success_action_status", boost::any(string("201"))}
    })
);
    _postOSSObject(make_shared<string>((*authResponseBody)["Bucket"]), ossHeader);
    createResourceReq->resourceFile = make_shared<string>(string("http://") + string((*authResponseBody)["Bucket"]) + string(".") + string((*authResponseBody)["Endpoint"]) + string("/") + string((*authResponseBody)["ObjectKey"]));
  }
  shared_ptr<CreateResourceResponse> createResourceResp = make_shared<CreateResourceResponse>(createResourceWithOptions(createResourceReq, runtime));
  return *createResourceResp;
}

CreateResourceFileResponse Alibabacloud_Dataworks-public20240518::Client::createResourceFileWithOptions(shared_ptr<CreateResourceFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileDescription)) {
    body->insert(pair<string, string>("FileDescription", *request->fileDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileFolderPath)) {
    body->insert(pair<string, string>("FileFolderPath", *request->fileFolderPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileType)) {
    body->insert(pair<string, long>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originResourceName)) {
    body->insert(pair<string, string>("OriginResourceName", *request->originResourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->registerToCalcEngine)) {
    body->insert(pair<string, bool>("RegisterToCalcEngine", *request->registerToCalcEngine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceFile)) {
    body->insert(pair<string, string>("ResourceFile", *request->resourceFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageURL)) {
    body->insert(pair<string, string>("StorageURL", *request->storageURL));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->uploadMode)) {
    body->insert(pair<string, bool>("UploadMode", *request->uploadMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceFile"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceFileResponse(callApi(params, req, runtime));
}

CreateResourceFileResponse Alibabacloud_Dataworks-public20240518::Client::createResourceFile(shared_ptr<CreateResourceFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceFileWithOptions(request, runtime);
}

CreateResourceFileResponse Alibabacloud_Dataworks-public20240518::Client::createResourceFileAdvance(shared_ptr<CreateResourceFileAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<Alibabacloud_Credential::CredentialModel> credentialModel;
  if (Darabonba_Util::Client::isUnset<Alibabacloud_Credential::Client>(_credential)) {
    BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, string>({
      {"code", "InvalidCredentials"},
      {"message", "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    })));
  }
  credentialModel = make_shared<Alibabacloud_Credential::CredentialModel>(_credential->getCredential());
  shared_ptr<string> accessKeyId = credentialModel->accessKeyId;
  shared_ptr<string> accessKeySecret = credentialModel->accessKeySecret;
  shared_ptr<string> securityToken = credentialModel->securityToken;
  shared_ptr<string> credentialType = credentialModel->type;
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Client> authClient = make_shared<Alibabacloud_OpenApi::Client>(authConfig);
  shared_ptr<map<string, string>> authRequest = make_shared<map<string, string>>(map<string, string>({
    {"Product", "dataworks-public"},
    {"RegionId", !_regionId ? string() : *_regionId}
  })
);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> authReq = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(authRequest))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> authParams = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeFileUpload"))},
    {"version", boost::any(string("2019-12-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  shared_ptr<map<string, boost::any>> authResponse = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<map<string, boost::any>> ossHeader = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> tmpBody = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<bool> useAccelerate = make_shared<bool>(false);
  shared_ptr<map<string, string>> authResponseBody = make_shared<map<string, string>>(map<string, string>());
  shared_ptr<CreateResourceFileRequest> createResourceFileReq = make_shared<CreateResourceFileRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, createResourceFileReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->resourceFileObject)) {
    shared_ptr<boost::any> tmpResp0 = make_shared<boost::any>(authClient->callApi(authParams, authReq, runtime));
    authResponse = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(tmpResp0));
    tmpBody = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(make_shared<boost::any>((*authResponse)["body"])));
    useAccelerate = make_shared<bool>(Darabonba_Util::Client::assertAsBoolean(make_shared<boost::any>((*tmpBody)["UseAccelerate"])));
    authResponseBody = make_shared<map<string, string>>(Darabonba_Util::Client::stringifyMapValue(tmpBody));
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", boost::any(string((*authResponseBody)["ObjectKey"]))},
      {"content", !request->resourceFileObject ? boost::any() : boost::any(*request->resourceFileObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<map<string, boost::any>>(map<string, boost::any>({
      {"host", boost::any(string((*authResponseBody)["Bucket"]) + string(".") + string(Alibabacloud_OpenApiUtil::Client::getEndpoint(make_shared<string>((*authResponseBody)["Endpoint"]), useAccelerate, _endpointType)))},
      {"OSSAccessKeyId", boost::any(string((*authResponseBody)["AccessKeyId"]))},
      {"policy", boost::any(string((*authResponseBody)["EncodedPolicy"]))},
      {"Signature", boost::any(string((*authResponseBody)["Signature"]))},
      {"key", boost::any(string((*authResponseBody)["ObjectKey"]))},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"success_action_status", boost::any(string("201"))}
    })
);
    _postOSSObject(make_shared<string>((*authResponseBody)["Bucket"]), ossHeader);
    createResourceFileReq->resourceFile = make_shared<string>(string("http://") + string((*authResponseBody)["Bucket"]) + string(".") + string((*authResponseBody)["Endpoint"]) + string("/") + string((*authResponseBody)["ObjectKey"]));
  }
  shared_ptr<CreateResourceFileResponse> createResourceFileResp = make_shared<CreateResourceFileResponse>(createResourceFileWithOptions(createResourceFileReq, runtime));
  return *createResourceFileResp;
}

CreateResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::createResourceGroupWithOptions(shared_ptr<CreateResourceGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateResourceGroupShrinkRequest> request = make_shared<CreateResourceGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateResourceGroupRequestAliyunResourceTags>>(tmpReq->aliyunResourceTags)) {
    request->aliyunResourceTagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->aliyunResourceTags, make_shared<string>("AliyunResourceTags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunResourceGroupId)) {
    body->insert(pair<string, string>("AliyunResourceGroupId", *request->aliyunResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunResourceTagsShrink)) {
    body->insert(pair<string, string>("AliyunResourceTags", *request->aliyunResourceTagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenewEnabled)) {
    body->insert(pair<string, bool>("AutoRenewEnabled", *request->autoRenewEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->paymentDuration)) {
    body->insert(pair<string, long>("PaymentDuration", *request->paymentDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentDurationUnit)) {
    body->insert(pair<string, string>("PaymentDurationUnit", *request->paymentDurationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    body->insert(pair<string, string>("PaymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spec)) {
    body->insert(pair<string, long>("Spec", *request->spec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vswitchId)) {
    body->insert(pair<string, string>("VswitchId", *request->vswitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceGroup"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceGroupResponse(callApi(params, req, runtime));
}

CreateResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::createResourceGroup(shared_ptr<CreateResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceGroupWithOptions(request, runtime);
}

CreateRouteResponse Alibabacloud_Dataworks-public20240518::Client::createRouteWithOptions(shared_ptr<CreateRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidr)) {
    body->insert(pair<string, string>("DestinationCidr", *request->destinationCidr));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->networkId)) {
    body->insert(pair<string, long>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRoute"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRouteResponse(callApi(params, req, runtime));
}

CreateRouteResponse Alibabacloud_Dataworks-public20240518::Client::createRoute(shared_ptr<CreateRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRouteWithOptions(request, runtime);
}

CreateUdfFileResponse Alibabacloud_Dataworks-public20240518::Client::createUdfFileWithOptions(shared_ptr<CreateUdfFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->className)) {
    body->insert(pair<string, string>("ClassName", *request->className));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cmdDescription)) {
    body->insert(pair<string, string>("CmdDescription", *request->cmdDescription));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->createFolderIfNotExists)) {
    body->insert(pair<string, bool>("CreateFolderIfNotExists", *request->createFolderIfNotExists));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->example)) {
    body->insert(pair<string, string>("Example", *request->example));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileFolderPath)) {
    body->insert(pair<string, string>("FileFolderPath", *request->fileFolderPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionType)) {
    body->insert(pair<string, string>("FunctionType", *request->functionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameterDescription)) {
    body->insert(pair<string, string>("ParameterDescription", *request->parameterDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resources)) {
    body->insert(pair<string, string>("Resources", *request->resources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->returnValue)) {
    body->insert(pair<string, string>("ReturnValue", *request->returnValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->udfDescription)) {
    body->insert(pair<string, string>("UdfDescription", *request->udfDescription));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUdfFile"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUdfFileResponse(callApi(params, req, runtime));
}

CreateUdfFileResponse Alibabacloud_Dataworks-public20240518::Client::createUdfFile(shared_ptr<CreateUdfFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUdfFileWithOptions(request, runtime);
}

CreateWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::createWorkflowDefinitionWithOptions(shared_ptr<CreateWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkflowDefinition"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkflowDefinitionResponse(callApi(params, req, runtime));
}

CreateWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::createWorkflowDefinition(shared_ptr<CreateWorkflowDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWorkflowDefinitionWithOptions(request, runtime);
}

CreateWorkflowInstancesResponse Alibabacloud_Dataworks-public20240518::Client::createWorkflowInstancesWithOptions(shared_ptr<CreateWorkflowInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateWorkflowInstancesShrinkRequest> request = make_shared<CreateWorkflowInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateWorkflowInstancesRequestDefaultRunProperties>(tmpReq->defaultRunProperties)) {
    request->defaultRunPropertiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->defaultRunProperties, make_shared<string>("DefaultRunProperties"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateWorkflowInstancesRequestPeriods>(tmpReq->periods)) {
    request->periodsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->periods, make_shared<string>("Periods"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoStartEnabled)) {
    body->insert(pair<string, bool>("AutoStartEnabled", *request->autoStartEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultRunPropertiesShrink)) {
    body->insert(pair<string, string>("DefaultRunProperties", *request->defaultRunPropertiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodsShrink)) {
    body->insert(pair<string, string>("Periods", *request->periodsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskParameters)) {
    body->insert(pair<string, string>("TaskParameters", *request->taskParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workflowId)) {
    body->insert(pair<string, long>("WorkflowId", *request->workflowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowParameters)) {
    body->insert(pair<string, string>("WorkflowParameters", *request->workflowParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkflowInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkflowInstancesResponse(callApi(params, req, runtime));
}

CreateWorkflowInstancesResponse Alibabacloud_Dataworks-public20240518::Client::createWorkflowInstances(shared_ptr<CreateWorkflowInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWorkflowInstancesWithOptions(request, runtime);
}

DeleteAlertRuleResponse Alibabacloud_Dataworks-public20240518::Client::deleteAlertRuleWithOptions(shared_ptr<DeleteAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlertRuleResponse(callApi(params, req, runtime));
}

DeleteAlertRuleResponse Alibabacloud_Dataworks-public20240518::Client::deleteAlertRule(shared_ptr<DeleteAlertRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlertRuleWithOptions(request, runtime);
}

DeleteBusinessResponse Alibabacloud_Dataworks-public20240518::Client::deleteBusinessWithOptions(shared_ptr<DeleteBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->businessId)) {
    body->insert(pair<string, long>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBusiness"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBusinessResponse(callApi(params, req, runtime));
}

DeleteBusinessResponse Alibabacloud_Dataworks-public20240518::Client::deleteBusiness(shared_ptr<DeleteBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBusinessWithOptions(request, runtime);
}

DeleteCertificateResponse Alibabacloud_Dataworks-public20240518::Client::deleteCertificateWithOptions(shared_ptr<DeleteCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCertificate"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCertificateResponse(callApi(params, req, runtime));
}

DeleteCertificateResponse Alibabacloud_Dataworks-public20240518::Client::deleteCertificate(shared_ptr<DeleteCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCertificateWithOptions(request, runtime);
}

DeleteDIAlarmRuleResponse Alibabacloud_Dataworks-public20240518::Client::deleteDIAlarmRuleWithOptions(shared_ptr<DeleteDIAlarmRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDIAlarmRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDIAlarmRuleResponse(callApi(params, req, runtime));
}

DeleteDIAlarmRuleResponse Alibabacloud_Dataworks-public20240518::Client::deleteDIAlarmRule(shared_ptr<DeleteDIAlarmRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDIAlarmRuleWithOptions(request, runtime);
}

DeleteDIJobResponse Alibabacloud_Dataworks-public20240518::Client::deleteDIJobWithOptions(shared_ptr<DeleteDIJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDIJob"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDIJobResponse(callApi(params, req, runtime));
}

DeleteDIJobResponse Alibabacloud_Dataworks-public20240518::Client::deleteDIJob(shared_ptr<DeleteDIJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDIJobWithOptions(request, runtime);
}

DeleteDataAssetTagResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataAssetTagWithOptions(shared_ptr<DeleteDataAssetTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteDataAssetTagShrinkRequest> request = make_shared<DeleteDataAssetTagShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->values)) {
    request->valuesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->values, make_shared<string>("Values"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->valuesShrink)) {
    query->insert(pair<string, string>("Values", *request->valuesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataAssetTag"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataAssetTagResponse(callApi(params, req, runtime));
}

DeleteDataAssetTagResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataAssetTag(shared_ptr<DeleteDataAssetTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataAssetTagWithOptions(request, runtime);
}

DeleteDataQualityEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataQualityEvaluationTaskWithOptions(shared_ptr<DeleteDataQualityEvaluationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataQualityEvaluationTask"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataQualityEvaluationTaskResponse(callApi(params, req, runtime));
}

DeleteDataQualityEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataQualityEvaluationTask(shared_ptr<DeleteDataQualityEvaluationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataQualityEvaluationTaskWithOptions(request, runtime);
}

DeleteDataQualityRuleResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataQualityRuleWithOptions(shared_ptr<DeleteDataQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataQualityRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataQualityRuleResponse(callApi(params, req, runtime));
}

DeleteDataQualityRuleResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataQualityRule(shared_ptr<DeleteDataQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataQualityRuleWithOptions(request, runtime);
}

DeleteDataQualityRuleTemplateResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataQualityRuleTemplateWithOptions(shared_ptr<DeleteDataQualityRuleTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataQualityRuleTemplate"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataQualityRuleTemplateResponse(callApi(params, req, runtime));
}

DeleteDataQualityRuleTemplateResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataQualityRuleTemplate(shared_ptr<DeleteDataQualityRuleTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataQualityRuleTemplateWithOptions(request, runtime);
}

DeleteDataSourceResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSource"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataSourceResponse(callApi(params, req, runtime));
}

DeleteDataSourceResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataSource(shared_ptr<DeleteDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceWithOptions(request, runtime);
}

DeleteDataSourceSharedRuleResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataSourceSharedRuleWithOptions(shared_ptr<DeleteDataSourceSharedRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSourceSharedRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataSourceSharedRuleResponse(callApi(params, req, runtime));
}

DeleteDataSourceSharedRuleResponse Alibabacloud_Dataworks-public20240518::Client::deleteDataSourceSharedRule(shared_ptr<DeleteDataSourceSharedRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceSharedRuleWithOptions(request, runtime);
}

DeleteFileResponse Alibabacloud_Dataworks-public20240518::Client::deleteFileWithOptions(shared_ptr<DeleteFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    body->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFile"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFileResponse(callApi(params, req, runtime));
}

DeleteFileResponse Alibabacloud_Dataworks-public20240518::Client::deleteFile(shared_ptr<DeleteFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFileWithOptions(request, runtime);
}

DeleteFolderResponse Alibabacloud_Dataworks-public20240518::Client::deleteFolderWithOptions(shared_ptr<DeleteFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    body->insert(pair<string, string>("FolderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFolder"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFolderResponse(callApi(params, req, runtime));
}

DeleteFolderResponse Alibabacloud_Dataworks-public20240518::Client::deleteFolder(shared_ptr<DeleteFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFolderWithOptions(request, runtime);
}

DeleteFunctionResponse Alibabacloud_Dataworks-public20240518::Client::deleteFunctionWithOptions(shared_ptr<DeleteFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunction"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFunctionResponse(callApi(params, req, runtime));
}

DeleteFunctionResponse Alibabacloud_Dataworks-public20240518::Client::deleteFunction(shared_ptr<DeleteFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFunctionWithOptions(request, runtime);
}

DeleteLineageRelationshipResponse Alibabacloud_Dataworks-public20240518::Client::deleteLineageRelationshipWithOptions(shared_ptr<DeleteLineageRelationshipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLineageRelationship"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLineageRelationshipResponse(callApi(params, req, runtime));
}

DeleteLineageRelationshipResponse Alibabacloud_Dataworks-public20240518::Client::deleteLineageRelationship(shared_ptr<DeleteLineageRelationshipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLineageRelationshipWithOptions(request, runtime);
}

DeleteMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::deleteMetaCollectionWithOptions(shared_ptr<DeleteMetaCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMetaCollection"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMetaCollectionResponse(callApi(params, req, runtime));
}

DeleteMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::deleteMetaCollection(shared_ptr<DeleteMetaCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMetaCollectionWithOptions(request, runtime);
}

DeleteNetworkResponse Alibabacloud_Dataworks-public20240518::Client::deleteNetworkWithOptions(shared_ptr<DeleteNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNetwork"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNetworkResponse(callApi(params, req, runtime));
}

DeleteNetworkResponse Alibabacloud_Dataworks-public20240518::Client::deleteNetwork(shared_ptr<DeleteNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkWithOptions(request, runtime);
}

DeleteNodeResponse Alibabacloud_Dataworks-public20240518::Client::deleteNodeWithOptions(shared_ptr<DeleteNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNode"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNodeResponse(callApi(params, req, runtime));
}

DeleteNodeResponse Alibabacloud_Dataworks-public20240518::Client::deleteNode(shared_ptr<DeleteNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNodeWithOptions(request, runtime);
}

DeleteProjectResponse Alibabacloud_Dataworks-public20240518::Client::deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProject"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProjectResponse(callApi(params, req, runtime));
}

DeleteProjectResponse Alibabacloud_Dataworks-public20240518::Client::deleteProject(shared_ptr<DeleteProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectWithOptions(request, runtime);
}

DeleteProjectMemberResponse Alibabacloud_Dataworks-public20240518::Client::deleteProjectMemberWithOptions(shared_ptr<DeleteProjectMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProjectMember"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProjectMemberResponse(callApi(params, req, runtime));
}

DeleteProjectMemberResponse Alibabacloud_Dataworks-public20240518::Client::deleteProjectMember(shared_ptr<DeleteProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectMemberWithOptions(request, runtime);
}

DeleteResourceResponse Alibabacloud_Dataworks-public20240518::Client::deleteResourceWithOptions(shared_ptr<DeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResource"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceResponse(callApi(params, req, runtime));
}

DeleteResourceResponse Alibabacloud_Dataworks-public20240518::Client::deleteResource(shared_ptr<DeleteResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteResourceWithOptions(request, runtime);
}

DeleteResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::deleteResourceGroupWithOptions(shared_ptr<DeleteResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceGroup"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceGroupResponse(callApi(params, req, runtime));
}

DeleteResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::deleteResourceGroup(shared_ptr<DeleteResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteResourceGroupWithOptions(request, runtime);
}

DeleteRouteResponse Alibabacloud_Dataworks-public20240518::Client::deleteRouteWithOptions(shared_ptr<DeleteRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRoute"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRouteResponse(callApi(params, req, runtime));
}

DeleteRouteResponse Alibabacloud_Dataworks-public20240518::Client::deleteRoute(shared_ptr<DeleteRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRouteWithOptions(request, runtime);
}

DeleteTaskResponse Alibabacloud_Dataworks-public20240518::Client::deleteTaskWithOptions(shared_ptr<DeleteTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    query->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTask"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTaskResponse(callApi(params, req, runtime));
}

DeleteTaskResponse Alibabacloud_Dataworks-public20240518::Client::deleteTask(shared_ptr<DeleteTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTaskWithOptions(request, runtime);
}

DeleteWorkflowResponse Alibabacloud_Dataworks-public20240518::Client::deleteWorkflowWithOptions(shared_ptr<DeleteWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUniqueCode)) {
    body->insert(pair<string, string>("ClientUniqueCode", *request->clientUniqueCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkflow"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkflowResponse(callApi(params, req, runtime));
}

DeleteWorkflowResponse Alibabacloud_Dataworks-public20240518::Client::deleteWorkflow(shared_ptr<DeleteWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWorkflowWithOptions(request, runtime);
}

DeleteWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::deleteWorkflowDefinitionWithOptions(shared_ptr<DeleteWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkflowDefinition"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkflowDefinitionResponse(callApi(params, req, runtime));
}

DeleteWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::deleteWorkflowDefinition(shared_ptr<DeleteWorkflowDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWorkflowDefinitionWithOptions(request, runtime);
}

DeployFileResponse Alibabacloud_Dataworks-public20240518::Client::deployFileWithOptions(shared_ptr<DeployFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    body->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployFile"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployFileResponse(callApi(params, req, runtime));
}

DeployFileResponse Alibabacloud_Dataworks-public20240518::Client::deployFile(shared_ptr<DeployFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployFileWithOptions(request, runtime);
}

DetachDataQualityRulesFromEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::detachDataQualityRulesFromEvaluationTaskWithOptions(shared_ptr<DetachDataQualityRulesFromEvaluationTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetachDataQualityRulesFromEvaluationTaskShrinkRequest> request = make_shared<DetachDataQualityRulesFromEvaluationTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->dataQualityRuleIds)) {
    request->dataQualityRuleIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataQualityRuleIds, make_shared<string>("DataQualityRuleIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataQualityEvaluationTaskId)) {
    body->insert(pair<string, long>("DataQualityEvaluationTaskId", *request->dataQualityEvaluationTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataQualityRuleIdsShrink)) {
    body->insert(pair<string, string>("DataQualityRuleIds", *request->dataQualityRuleIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachDataQualityRulesFromEvaluationTask"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachDataQualityRulesFromEvaluationTaskResponse(callApi(params, req, runtime));
}

DetachDataQualityRulesFromEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::detachDataQualityRulesFromEvaluationTask(shared_ptr<DetachDataQualityRulesFromEvaluationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachDataQualityRulesFromEvaluationTaskWithOptions(request, runtime);
}

DissociateProjectFromResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::dissociateProjectFromResourceGroupWithOptions(shared_ptr<DissociateProjectFromResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DissociateProjectFromResourceGroup"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DissociateProjectFromResourceGroupResponse(callApi(params, req, runtime));
}

DissociateProjectFromResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::dissociateProjectFromResourceGroup(shared_ptr<DissociateProjectFromResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dissociateProjectFromResourceGroupWithOptions(request, runtime);
}

EstablishRelationTableToBusinessResponse Alibabacloud_Dataworks-public20240518::Client::establishRelationTableToBusinessWithOptions(shared_ptr<EstablishRelationTableToBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessId)) {
    body->insert(pair<string, string>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    body->insert(pair<string, string>("FolderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    body->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EstablishRelationTableToBusiness"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EstablishRelationTableToBusinessResponse(callApi(params, req, runtime));
}

EstablishRelationTableToBusinessResponse Alibabacloud_Dataworks-public20240518::Client::establishRelationTableToBusiness(shared_ptr<EstablishRelationTableToBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return establishRelationTableToBusinessWithOptions(request, runtime);
}

ExecPipelineRunStageResponse Alibabacloud_Dataworks-public20240518::Client::execPipelineRunStageWithOptions(shared_ptr<ExecPipelineRunStageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecPipelineRunStage"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecPipelineRunStageResponse(callApi(params, req, runtime));
}

ExecPipelineRunStageResponse Alibabacloud_Dataworks-public20240518::Client::execPipelineRunStage(shared_ptr<ExecPipelineRunStageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return execPipelineRunStageWithOptions(request, runtime);
}

ExecuteAdhocWorkflowInstanceResponse Alibabacloud_Dataworks-public20240518::Client::executeAdhocWorkflowInstanceWithOptions(shared_ptr<ExecuteAdhocWorkflowInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExecuteAdhocWorkflowInstanceShrinkRequest> request = make_shared<ExecuteAdhocWorkflowInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteAdhocWorkflowInstanceRequestTasks>>(tmpReq->tasks)) {
    request->tasksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tasks, make_shared<string>("Tasks"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizDate)) {
    body->insert(pair<string, long>("BizDate", *request->bizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tasksShrink)) {
    body->insert(pair<string, string>("Tasks", *request->tasksShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteAdhocWorkflowInstance"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteAdhocWorkflowInstanceResponse(callApi(params, req, runtime));
}

ExecuteAdhocWorkflowInstanceResponse Alibabacloud_Dataworks-public20240518::Client::executeAdhocWorkflowInstance(shared_ptr<ExecuteAdhocWorkflowInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeAdhocWorkflowInstanceWithOptions(request, runtime);
}

GetAlertRuleResponse Alibabacloud_Dataworks-public20240518::Client::getAlertRuleWithOptions(shared_ptr<GetAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlertRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlertRuleResponse(callApi(params, req, runtime));
}

GetAlertRuleResponse Alibabacloud_Dataworks-public20240518::Client::getAlertRule(shared_ptr<GetAlertRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlertRuleWithOptions(request, runtime);
}

GetBusinessResponse Alibabacloud_Dataworks-public20240518::Client::getBusinessWithOptions(shared_ptr<GetBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->businessId)) {
    body->insert(pair<string, long>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusiness"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessResponse(callApi(params, req, runtime));
}

GetBusinessResponse Alibabacloud_Dataworks-public20240518::Client::getBusiness(shared_ptr<GetBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessWithOptions(request, runtime);
}

GetCatalogResponse Alibabacloud_Dataworks-public20240518::Client::getCatalogWithOptions(shared_ptr<GetCatalogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCatalog"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCatalogResponse(callApi(params, req, runtime));
}

GetCatalogResponse Alibabacloud_Dataworks-public20240518::Client::getCatalog(shared_ptr<GetCatalogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCatalogWithOptions(request, runtime);
}

GetCertificateResponse Alibabacloud_Dataworks-public20240518::Client::getCertificateWithOptions(shared_ptr<GetCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCertificate"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCertificateResponse(callApi(params, req, runtime));
}

GetCertificateResponse Alibabacloud_Dataworks-public20240518::Client::getCertificate(shared_ptr<GetCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCertificateWithOptions(request, runtime);
}

GetColumnResponse Alibabacloud_Dataworks-public20240518::Client::getColumnWithOptions(shared_ptr<GetColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetColumn"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetColumnResponse(callApi(params, req, runtime));
}

GetColumnResponse Alibabacloud_Dataworks-public20240518::Client::getColumn(shared_ptr<GetColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getColumnWithOptions(request, runtime);
}

GetCreateWorkflowInstancesResultResponse Alibabacloud_Dataworks-public20240518::Client::getCreateWorkflowInstancesResultWithOptions(shared_ptr<GetCreateWorkflowInstancesResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCreateWorkflowInstancesResult"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCreateWorkflowInstancesResultResponse(callApi(params, req, runtime));
}

GetCreateWorkflowInstancesResultResponse Alibabacloud_Dataworks-public20240518::Client::getCreateWorkflowInstancesResult(shared_ptr<GetCreateWorkflowInstancesResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCreateWorkflowInstancesResultWithOptions(request, runtime);
}

GetDIJobResponse Alibabacloud_Dataworks-public20240518::Client::getDIJobWithOptions(shared_ptr<GetDIJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDIJob"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDIJobResponse(callApi(params, req, runtime));
}

GetDIJobResponse Alibabacloud_Dataworks-public20240518::Client::getDIJob(shared_ptr<GetDIJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDIJobWithOptions(request, runtime);
}

GetDIJobLogResponse Alibabacloud_Dataworks-public20240518::Client::getDIJobLogWithOptions(shared_ptr<GetDIJobLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDIJobLog"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDIJobLogResponse(callApi(params, req, runtime));
}

GetDIJobLogResponse Alibabacloud_Dataworks-public20240518::Client::getDIJobLog(shared_ptr<GetDIJobLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDIJobLogWithOptions(request, runtime);
}

GetDataQualityEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::getDataQualityEvaluationTaskWithOptions(shared_ptr<GetDataQualityEvaluationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataQualityEvaluationTask"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataQualityEvaluationTaskResponse(callApi(params, req, runtime));
}

GetDataQualityEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::getDataQualityEvaluationTask(shared_ptr<GetDataQualityEvaluationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataQualityEvaluationTaskWithOptions(request, runtime);
}

GetDataQualityEvaluationTaskInstanceResponse Alibabacloud_Dataworks-public20240518::Client::getDataQualityEvaluationTaskInstanceWithOptions(shared_ptr<GetDataQualityEvaluationTaskInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataQualityEvaluationTaskInstance"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataQualityEvaluationTaskInstanceResponse(callApi(params, req, runtime));
}

GetDataQualityEvaluationTaskInstanceResponse Alibabacloud_Dataworks-public20240518::Client::getDataQualityEvaluationTaskInstance(shared_ptr<GetDataQualityEvaluationTaskInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataQualityEvaluationTaskInstanceWithOptions(request, runtime);
}

GetDataQualityRuleResponse Alibabacloud_Dataworks-public20240518::Client::getDataQualityRuleWithOptions(shared_ptr<GetDataQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataQualityRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataQualityRuleResponse(callApi(params, req, runtime));
}

GetDataQualityRuleResponse Alibabacloud_Dataworks-public20240518::Client::getDataQualityRule(shared_ptr<GetDataQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataQualityRuleWithOptions(request, runtime);
}

GetDataQualityRuleTemplateResponse Alibabacloud_Dataworks-public20240518::Client::getDataQualityRuleTemplateWithOptions(shared_ptr<GetDataQualityRuleTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataQualityRuleTemplate"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataQualityRuleTemplateResponse(callApi(params, req, runtime));
}

GetDataQualityRuleTemplateResponse Alibabacloud_Dataworks-public20240518::Client::getDataQualityRuleTemplate(shared_ptr<GetDataQualityRuleTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataQualityRuleTemplateWithOptions(request, runtime);
}

GetDataSourceResponse Alibabacloud_Dataworks-public20240518::Client::getDataSourceWithOptions(shared_ptr<GetDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataSource"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataSourceResponse(callApi(params, req, runtime));
}

GetDataSourceResponse Alibabacloud_Dataworks-public20240518::Client::getDataSource(shared_ptr<GetDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataSourceWithOptions(request, runtime);
}

GetDatabaseResponse Alibabacloud_Dataworks-public20240518::Client::getDatabaseWithOptions(shared_ptr<GetDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDatabase"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatabaseResponse(callApi(params, req, runtime));
}

GetDatabaseResponse Alibabacloud_Dataworks-public20240518::Client::getDatabase(shared_ptr<GetDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDatabaseWithOptions(request, runtime);
}

GetDeploymentPackageResponse Alibabacloud_Dataworks-public20240518::Client::getDeploymentPackageWithOptions(shared_ptr<GetDeploymentPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->deploymentId)) {
    body->insert(pair<string, long>("DeploymentId", *request->deploymentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeploymentPackage"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeploymentPackageResponse(callApi(params, req, runtime));
}

GetDeploymentPackageResponse Alibabacloud_Dataworks-public20240518::Client::getDeploymentPackage(shared_ptr<GetDeploymentPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeploymentPackageWithOptions(request, runtime);
}

GetFileResponse Alibabacloud_Dataworks-public20240518::Client::getFileWithOptions(shared_ptr<GetFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    body->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFile"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileResponse(callApi(params, req, runtime));
}

GetFileResponse Alibabacloud_Dataworks-public20240518::Client::getFile(shared_ptr<GetFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileWithOptions(request, runtime);
}

GetFileVersionResponse Alibabacloud_Dataworks-public20240518::Client::getFileVersionWithOptions(shared_ptr<GetFileVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    body->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileVersion)) {
    body->insert(pair<string, long>("FileVersion", *request->fileVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileVersion"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileVersionResponse(callApi(params, req, runtime));
}

GetFileVersionResponse Alibabacloud_Dataworks-public20240518::Client::getFileVersion(shared_ptr<GetFileVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileVersionWithOptions(request, runtime);
}

GetFolderResponse Alibabacloud_Dataworks-public20240518::Client::getFolderWithOptions(shared_ptr<GetFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    body->insert(pair<string, string>("FolderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderPath)) {
    body->insert(pair<string, string>("FolderPath", *request->folderPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFolder"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFolderResponse(callApi(params, req, runtime));
}

GetFolderResponse Alibabacloud_Dataworks-public20240518::Client::getFolder(shared_ptr<GetFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFolderWithOptions(request, runtime);
}

GetFunctionResponse Alibabacloud_Dataworks-public20240518::Client::getFunctionWithOptions(shared_ptr<GetFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunction"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionResponse(callApi(params, req, runtime));
}

GetFunctionResponse Alibabacloud_Dataworks-public20240518::Client::getFunction(shared_ptr<GetFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFunctionWithOptions(request, runtime);
}

GetIDEEventDetailResponse Alibabacloud_Dataworks-public20240518::Client::getIDEEventDetailWithOptions(shared_ptr<GetIDEEventDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->messageId)) {
    body->insert(pair<string, string>("MessageId", *request->messageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIDEEventDetail"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIDEEventDetailResponse(callApi(params, req, runtime));
}

GetIDEEventDetailResponse Alibabacloud_Dataworks-public20240518::Client::getIDEEventDetail(shared_ptr<GetIDEEventDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIDEEventDetailWithOptions(request, runtime);
}

GetJobStatusResponse Alibabacloud_Dataworks-public20240518::Client::getJobStatusWithOptions(shared_ptr<GetJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobStatus"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobStatusResponse(callApi(params, req, runtime));
}

GetJobStatusResponse Alibabacloud_Dataworks-public20240518::Client::getJobStatus(shared_ptr<GetJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobStatusWithOptions(request, runtime);
}

GetLineageRelationshipResponse Alibabacloud_Dataworks-public20240518::Client::getLineageRelationshipWithOptions(shared_ptr<GetLineageRelationshipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLineageRelationship"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLineageRelationshipResponse(callApi(params, req, runtime));
}

GetLineageRelationshipResponse Alibabacloud_Dataworks-public20240518::Client::getLineageRelationship(shared_ptr<GetLineageRelationshipRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLineageRelationshipWithOptions(request, runtime);
}

GetMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::getMetaCollectionWithOptions(shared_ptr<GetMetaCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaCollection"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaCollectionResponse(callApi(params, req, runtime));
}

GetMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::getMetaCollection(shared_ptr<GetMetaCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaCollectionWithOptions(request, runtime);
}

GetNetworkResponse Alibabacloud_Dataworks-public20240518::Client::getNetworkWithOptions(shared_ptr<GetNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNetwork"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNetworkResponse(callApi(params, req, runtime));
}

GetNetworkResponse Alibabacloud_Dataworks-public20240518::Client::getNetwork(shared_ptr<GetNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNetworkWithOptions(request, runtime);
}

GetNodeResponse Alibabacloud_Dataworks-public20240518::Client::getNodeWithOptions(shared_ptr<GetNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNode"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeResponse(callApi(params, req, runtime));
}

GetNodeResponse Alibabacloud_Dataworks-public20240518::Client::getNode(shared_ptr<GetNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeWithOptions(request, runtime);
}

GetPartitionResponse Alibabacloud_Dataworks-public20240518::Client::getPartitionWithOptions(shared_ptr<GetPartitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPartition"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPartitionResponse(callApi(params, req, runtime));
}

GetPartitionResponse Alibabacloud_Dataworks-public20240518::Client::getPartition(shared_ptr<GetPartitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPartitionWithOptions(request, runtime);
}

GetPipelineRunResponse Alibabacloud_Dataworks-public20240518::Client::getPipelineRunWithOptions(shared_ptr<GetPipelineRunRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipelineRun"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPipelineRunResponse(callApi(params, req, runtime));
}

GetPipelineRunResponse Alibabacloud_Dataworks-public20240518::Client::getPipelineRun(shared_ptr<GetPipelineRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipelineRunWithOptions(request, runtime);
}

GetProjectResponse Alibabacloud_Dataworks-public20240518::Client::getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProject"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectResponse(callApi(params, req, runtime));
}

GetProjectResponse Alibabacloud_Dataworks-public20240518::Client::getProject(shared_ptr<GetProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectWithOptions(request, runtime);
}

GetProjectMemberResponse Alibabacloud_Dataworks-public20240518::Client::getProjectMemberWithOptions(shared_ptr<GetProjectMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectMember"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectMemberResponse(callApi(params, req, runtime));
}

GetProjectMemberResponse Alibabacloud_Dataworks-public20240518::Client::getProjectMember(shared_ptr<GetProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectMemberWithOptions(request, runtime);
}

GetProjectRoleResponse Alibabacloud_Dataworks-public20240518::Client::getProjectRoleWithOptions(shared_ptr<GetProjectRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectRole"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectRoleResponse(callApi(params, req, runtime));
}

GetProjectRoleResponse Alibabacloud_Dataworks-public20240518::Client::getProjectRole(shared_ptr<GetProjectRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectRoleWithOptions(request, runtime);
}

GetRerunWorkflowInstancesResultResponse Alibabacloud_Dataworks-public20240518::Client::getRerunWorkflowInstancesResultWithOptions(shared_ptr<GetRerunWorkflowInstancesResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operationId)) {
    query->insert(pair<string, string>("OperationId", *request->operationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRerunWorkflowInstancesResult"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRerunWorkflowInstancesResultResponse(callApi(params, req, runtime));
}

GetRerunWorkflowInstancesResultResponse Alibabacloud_Dataworks-public20240518::Client::getRerunWorkflowInstancesResult(shared_ptr<GetRerunWorkflowInstancesResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRerunWorkflowInstancesResultWithOptions(request, runtime);
}

GetResourceResponse Alibabacloud_Dataworks-public20240518::Client::getResourceWithOptions(shared_ptr<GetResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResource"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceResponse(callApi(params, req, runtime));
}

GetResourceResponse Alibabacloud_Dataworks-public20240518::Client::getResource(shared_ptr<GetResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceWithOptions(request, runtime);
}

GetResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::getResourceGroupWithOptions(shared_ptr<GetResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceGroup"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceGroupResponse(callApi(params, req, runtime));
}

GetResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::getResourceGroup(shared_ptr<GetResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceGroupWithOptions(request, runtime);
}

GetRouteResponse Alibabacloud_Dataworks-public20240518::Client::getRouteWithOptions(shared_ptr<GetRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRoute"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRouteResponse(callApi(params, req, runtime));
}

GetRouteResponse Alibabacloud_Dataworks-public20240518::Client::getRoute(shared_ptr<GetRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRouteWithOptions(request, runtime);
}

GetSchemaResponse Alibabacloud_Dataworks-public20240518::Client::getSchemaWithOptions(shared_ptr<GetSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSchema"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSchemaResponse(callApi(params, req, runtime));
}

GetSchemaResponse Alibabacloud_Dataworks-public20240518::Client::getSchema(shared_ptr<GetSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSchemaWithOptions(request, runtime);
}

GetTableResponse Alibabacloud_Dataworks-public20240518::Client::getTableWithOptions(shared_ptr<GetTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTable"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableResponse(callApi(params, req, runtime));
}

GetTableResponse Alibabacloud_Dataworks-public20240518::Client::getTable(shared_ptr<GetTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableWithOptions(request, runtime);
}

GetTaskResponse Alibabacloud_Dataworks-public20240518::Client::getTaskWithOptions(shared_ptr<GetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTask"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskResponse(callApi(params, req, runtime));
}

GetTaskResponse Alibabacloud_Dataworks-public20240518::Client::getTask(shared_ptr<GetTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskWithOptions(request, runtime);
}

GetTaskInstanceResponse Alibabacloud_Dataworks-public20240518::Client::getTaskInstanceWithOptions(shared_ptr<GetTaskInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskInstance"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskInstanceResponse(callApi(params, req, runtime));
}

GetTaskInstanceResponse Alibabacloud_Dataworks-public20240518::Client::getTaskInstance(shared_ptr<GetTaskInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskInstanceWithOptions(request, runtime);
}

GetTaskInstanceLogResponse Alibabacloud_Dataworks-public20240518::Client::getTaskInstanceLogWithOptions(shared_ptr<GetTaskInstanceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskInstanceLog"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskInstanceLogResponse(callApi(params, req, runtime));
}

GetTaskInstanceLogResponse Alibabacloud_Dataworks-public20240518::Client::getTaskInstanceLog(shared_ptr<GetTaskInstanceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskInstanceLogWithOptions(request, runtime);
}

GetWorkflowResponse Alibabacloud_Dataworks-public20240518::Client::getWorkflowWithOptions(shared_ptr<GetWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkflow"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkflowResponse(callApi(params, req, runtime));
}

GetWorkflowResponse Alibabacloud_Dataworks-public20240518::Client::getWorkflow(shared_ptr<GetWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorkflowWithOptions(request, runtime);
}

GetWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::getWorkflowDefinitionWithOptions(shared_ptr<GetWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkflowDefinition"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkflowDefinitionResponse(callApi(params, req, runtime));
}

GetWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::getWorkflowDefinition(shared_ptr<GetWorkflowDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorkflowDefinitionWithOptions(request, runtime);
}

GetWorkflowInstanceResponse Alibabacloud_Dataworks-public20240518::Client::getWorkflowInstanceWithOptions(shared_ptr<GetWorkflowInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkflowInstance"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkflowInstanceResponse(callApi(params, req, runtime));
}

GetWorkflowInstanceResponse Alibabacloud_Dataworks-public20240518::Client::getWorkflowInstance(shared_ptr<GetWorkflowInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorkflowInstanceWithOptions(request, runtime);
}

GrantMemberProjectRolesResponse Alibabacloud_Dataworks-public20240518::Client::grantMemberProjectRolesWithOptions(shared_ptr<GrantMemberProjectRolesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GrantMemberProjectRolesShrinkRequest> request = make_shared<GrantMemberProjectRolesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->roleCodes)) {
    request->roleCodesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roleCodes, make_shared<string>("RoleCodes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleCodesShrink)) {
    body->insert(pair<string, string>("RoleCodes", *request->roleCodesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantMemberProjectRoles"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantMemberProjectRolesResponse(callApi(params, req, runtime));
}

GrantMemberProjectRolesResponse Alibabacloud_Dataworks-public20240518::Client::grantMemberProjectRoles(shared_ptr<GrantMemberProjectRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantMemberProjectRolesWithOptions(request, runtime);
}

ImportCertificateResponse Alibabacloud_Dataworks-public20240518::Client::importCertificateWithOptions(shared_ptr<ImportCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateFile)) {
    query->insert(pair<string, string>("CertificateFile", *request->certificateFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportCertificate"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportCertificateResponse(callApi(params, req, runtime));
}

ImportCertificateResponse Alibabacloud_Dataworks-public20240518::Client::importCertificate(shared_ptr<ImportCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importCertificateWithOptions(request, runtime);
}

ImportCertificateResponse Alibabacloud_Dataworks-public20240518::Client::importCertificateAdvance(shared_ptr<ImportCertificateAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<Alibabacloud_Credential::CredentialModel> credentialModel;
  if (Darabonba_Util::Client::isUnset<Alibabacloud_Credential::Client>(_credential)) {
    BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, string>({
      {"code", "InvalidCredentials"},
      {"message", "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    })));
  }
  credentialModel = make_shared<Alibabacloud_Credential::CredentialModel>(_credential->getCredential());
  shared_ptr<string> accessKeyId = credentialModel->accessKeyId;
  shared_ptr<string> accessKeySecret = credentialModel->accessKeySecret;
  shared_ptr<string> securityToken = credentialModel->securityToken;
  shared_ptr<string> credentialType = credentialModel->type;
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Client> authClient = make_shared<Alibabacloud_OpenApi::Client>(authConfig);
  shared_ptr<map<string, string>> authRequest = make_shared<map<string, string>>(map<string, string>({
    {"Product", "dataworks-public"},
    {"RegionId", !_regionId ? string() : *_regionId}
  })
);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> authReq = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(authRequest))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> authParams = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeFileUpload"))},
    {"version", boost::any(string("2019-12-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  shared_ptr<map<string, boost::any>> authResponse = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<map<string, boost::any>> ossHeader = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> tmpBody = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<bool> useAccelerate = make_shared<bool>(false);
  shared_ptr<map<string, string>> authResponseBody = make_shared<map<string, string>>(map<string, string>());
  shared_ptr<ImportCertificateRequest> importCertificateReq = make_shared<ImportCertificateRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, importCertificateReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->certificateFileObject)) {
    shared_ptr<boost::any> tmpResp0 = make_shared<boost::any>(authClient->callApi(authParams, authReq, runtime));
    authResponse = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(tmpResp0));
    tmpBody = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(make_shared<boost::any>((*authResponse)["body"])));
    useAccelerate = make_shared<bool>(Darabonba_Util::Client::assertAsBoolean(make_shared<boost::any>((*tmpBody)["UseAccelerate"])));
    authResponseBody = make_shared<map<string, string>>(Darabonba_Util::Client::stringifyMapValue(tmpBody));
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", boost::any(string((*authResponseBody)["ObjectKey"]))},
      {"content", !request->certificateFileObject ? boost::any() : boost::any(*request->certificateFileObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<map<string, boost::any>>(map<string, boost::any>({
      {"host", boost::any(string((*authResponseBody)["Bucket"]) + string(".") + string(Alibabacloud_OpenApiUtil::Client::getEndpoint(make_shared<string>((*authResponseBody)["Endpoint"]), useAccelerate, _endpointType)))},
      {"OSSAccessKeyId", boost::any(string((*authResponseBody)["AccessKeyId"]))},
      {"policy", boost::any(string((*authResponseBody)["EncodedPolicy"]))},
      {"Signature", boost::any(string((*authResponseBody)["Signature"]))},
      {"key", boost::any(string((*authResponseBody)["ObjectKey"]))},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"success_action_status", boost::any(string("201"))}
    })
);
    _postOSSObject(make_shared<string>((*authResponseBody)["Bucket"]), ossHeader);
    importCertificateReq->certificateFile = make_shared<string>(string("http://") + string((*authResponseBody)["Bucket"]) + string(".") + string((*authResponseBody)["Endpoint"]) + string("/") + string((*authResponseBody)["ObjectKey"]));
  }
  shared_ptr<ImportCertificateResponse> importCertificateResp = make_shared<ImportCertificateResponse>(importCertificateWithOptions(importCertificateReq, runtime));
  return *importCertificateResp;
}

ImportWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::importWorkflowDefinitionWithOptions(shared_ptr<ImportWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportWorkflowDefinition"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportWorkflowDefinitionResponse(callApi(params, req, runtime));
}

ImportWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::importWorkflowDefinition(shared_ptr<ImportWorkflowDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importWorkflowDefinitionWithOptions(request, runtime);
}

ListAlertRulesResponse Alibabacloud_Dataworks-public20240518::Client::listAlertRulesWithOptions(shared_ptr<ListAlertRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAlertRulesShrinkRequest> request = make_shared<ListAlertRulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->taskIds)) {
    request->taskIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskIds, make_shared<string>("TaskIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->types)) {
    request->typesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->types, make_shared<string>("Types"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    query->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiver)) {
    query->insert(pair<string, string>("Receiver", *request->receiver));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskIdsShrink)) {
    query->insert(pair<string, string>("TaskIds", *request->taskIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->typesShrink)) {
    query->insert(pair<string, string>("Types", *request->typesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlertRules"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlertRulesResponse(callApi(params, req, runtime));
}

ListAlertRulesResponse Alibabacloud_Dataworks-public20240518::Client::listAlertRules(shared_ptr<ListAlertRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlertRulesWithOptions(request, runtime);
}

ListBusinessResponse Alibabacloud_Dataworks-public20240518::Client::listBusinessWithOptions(shared_ptr<ListBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBusiness"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBusinessResponse(callApi(params, req, runtime));
}

ListBusinessResponse Alibabacloud_Dataworks-public20240518::Client::listBusiness(shared_ptr<ListBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBusinessWithOptions(request, runtime);
}

ListCatalogsResponse Alibabacloud_Dataworks-public20240518::Client::listCatalogsWithOptions(shared_ptr<ListCatalogsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCatalogsShrinkRequest> request = make_shared<ListCatalogsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->types)) {
    request->typesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->types, make_shared<string>("Types"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCatalogs"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCatalogsResponse(callApi(params, req, runtime));
}

ListCatalogsResponse Alibabacloud_Dataworks-public20240518::Client::listCatalogs(shared_ptr<ListCatalogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCatalogsWithOptions(request, runtime);
}

ListCertificatesResponse Alibabacloud_Dataworks-public20240518::Client::listCertificatesWithOptions(shared_ptr<ListCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCertificates"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCertificatesResponse(callApi(params, req, runtime));
}

ListCertificatesResponse Alibabacloud_Dataworks-public20240518::Client::listCertificates(shared_ptr<ListCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCertificatesWithOptions(request, runtime);
}

ListColumnsResponse Alibabacloud_Dataworks-public20240518::Client::listColumnsWithOptions(shared_ptr<ListColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListColumns"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListColumnsResponse(callApi(params, req, runtime));
}

ListColumnsResponse Alibabacloud_Dataworks-public20240518::Client::listColumns(shared_ptr<ListColumnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listColumnsWithOptions(request, runtime);
}

ListCrawlerTypesResponse Alibabacloud_Dataworks-public20240518::Client::listCrawlerTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCrawlerTypes"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCrawlerTypesResponse(callApi(params, req, runtime));
}

ListCrawlerTypesResponse Alibabacloud_Dataworks-public20240518::Client::listCrawlerTypes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCrawlerTypesWithOptions(runtime);
}

ListDIAlarmRulesResponse Alibabacloud_Dataworks-public20240518::Client::listDIAlarmRulesWithOptions(shared_ptr<ListDIAlarmRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDIAlarmRules"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDIAlarmRulesResponse(callApi(params, req, runtime));
}

ListDIAlarmRulesResponse Alibabacloud_Dataworks-public20240518::Client::listDIAlarmRules(shared_ptr<ListDIAlarmRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDIAlarmRulesWithOptions(request, runtime);
}

ListDIJobEventsResponse Alibabacloud_Dataworks-public20240518::Client::listDIJobEventsWithOptions(shared_ptr<ListDIJobEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDIJobEvents"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDIJobEventsResponse(callApi(params, req, runtime));
}

ListDIJobEventsResponse Alibabacloud_Dataworks-public20240518::Client::listDIJobEvents(shared_ptr<ListDIJobEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDIJobEventsWithOptions(request, runtime);
}

ListDIJobMetricsResponse Alibabacloud_Dataworks-public20240518::Client::listDIJobMetricsWithOptions(shared_ptr<ListDIJobMetricsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDIJobMetricsShrinkRequest> request = make_shared<ListDIJobMetricsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->metricName)) {
    request->metricNameShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->metricName, make_shared<string>("MetricName"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDIJobMetrics"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDIJobMetricsResponse(callApi(params, req, runtime));
}

ListDIJobMetricsResponse Alibabacloud_Dataworks-public20240518::Client::listDIJobMetrics(shared_ptr<ListDIJobMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDIJobMetricsWithOptions(request, runtime);
}

ListDIJobRunDetailsResponse Alibabacloud_Dataworks-public20240518::Client::listDIJobRunDetailsWithOptions(shared_ptr<ListDIJobRunDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDIJobRunDetails"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDIJobRunDetailsResponse(callApi(params, req, runtime));
}

ListDIJobRunDetailsResponse Alibabacloud_Dataworks-public20240518::Client::listDIJobRunDetails(shared_ptr<ListDIJobRunDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDIJobRunDetailsWithOptions(request, runtime);
}

ListDIJobsResponse Alibabacloud_Dataworks-public20240518::Client::listDIJobsWithOptions(shared_ptr<ListDIJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDIJobs"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDIJobsResponse(callApi(params, req, runtime));
}

ListDIJobsResponse Alibabacloud_Dataworks-public20240518::Client::listDIJobs(shared_ptr<ListDIJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDIJobsWithOptions(request, runtime);
}

ListDataAssetTagsResponse Alibabacloud_Dataworks-public20240518::Client::listDataAssetTagsWithOptions(shared_ptr<ListDataAssetTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataAssetTags"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataAssetTagsResponse(callApi(params, req, runtime));
}

ListDataAssetTagsResponse Alibabacloud_Dataworks-public20240518::Client::listDataAssetTags(shared_ptr<ListDataAssetTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataAssetTagsWithOptions(request, runtime);
}

ListDataAssetsResponse Alibabacloud_Dataworks-public20240518::Client::listDataAssetsWithOptions(shared_ptr<ListDataAssetsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataAssetsShrinkRequest> request = make_shared<ListDataAssetsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->dataAssetIds)) {
    request->dataAssetIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataAssetIds, make_shared<string>("DataAssetIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListDataAssetsRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataAssets"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataAssetsResponse(callApi(params, req, runtime));
}

ListDataAssetsResponse Alibabacloud_Dataworks-public20240518::Client::listDataAssets(shared_ptr<ListDataAssetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataAssetsWithOptions(request, runtime);
}

ListDataQualityEvaluationTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::listDataQualityEvaluationTaskInstancesWithOptions(shared_ptr<ListDataQualityEvaluationTaskInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataQualityEvaluationTaskInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataQualityEvaluationTaskInstancesResponse(callApi(params, req, runtime));
}

ListDataQualityEvaluationTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::listDataQualityEvaluationTaskInstances(shared_ptr<ListDataQualityEvaluationTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataQualityEvaluationTaskInstancesWithOptions(request, runtime);
}

ListDataQualityEvaluationTasksResponse Alibabacloud_Dataworks-public20240518::Client::listDataQualityEvaluationTasksWithOptions(shared_ptr<ListDataQualityEvaluationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataQualityEvaluationTasks"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataQualityEvaluationTasksResponse(callApi(params, req, runtime));
}

ListDataQualityEvaluationTasksResponse Alibabacloud_Dataworks-public20240518::Client::listDataQualityEvaluationTasks(shared_ptr<ListDataQualityEvaluationTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataQualityEvaluationTasksWithOptions(request, runtime);
}

ListDataQualityResultsResponse Alibabacloud_Dataworks-public20240518::Client::listDataQualityResultsWithOptions(shared_ptr<ListDataQualityResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataQualityResults"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataQualityResultsResponse(callApi(params, req, runtime));
}

ListDataQualityResultsResponse Alibabacloud_Dataworks-public20240518::Client::listDataQualityResults(shared_ptr<ListDataQualityResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataQualityResultsWithOptions(request, runtime);
}

ListDataQualityRuleTemplatesResponse Alibabacloud_Dataworks-public20240518::Client::listDataQualityRuleTemplatesWithOptions(shared_ptr<ListDataQualityRuleTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataQualityRuleTemplates"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataQualityRuleTemplatesResponse(callApi(params, req, runtime));
}

ListDataQualityRuleTemplatesResponse Alibabacloud_Dataworks-public20240518::Client::listDataQualityRuleTemplates(shared_ptr<ListDataQualityRuleTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataQualityRuleTemplatesWithOptions(request, runtime);
}

ListDataQualityRulesResponse Alibabacloud_Dataworks-public20240518::Client::listDataQualityRulesWithOptions(shared_ptr<ListDataQualityRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataQualityRules"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataQualityRulesResponse(callApi(params, req, runtime));
}

ListDataQualityRulesResponse Alibabacloud_Dataworks-public20240518::Client::listDataQualityRules(shared_ptr<ListDataQualityRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataQualityRulesWithOptions(request, runtime);
}

ListDataSourceSharedRulesResponse Alibabacloud_Dataworks-public20240518::Client::listDataSourceSharedRulesWithOptions(shared_ptr<ListDataSourceSharedRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSourceSharedRules"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceSharedRulesResponse(callApi(params, req, runtime));
}

ListDataSourceSharedRulesResponse Alibabacloud_Dataworks-public20240518::Client::listDataSourceSharedRules(shared_ptr<ListDataSourceSharedRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSourceSharedRulesWithOptions(request, runtime);
}

ListDataSourcesResponse Alibabacloud_Dataworks-public20240518::Client::listDataSourcesWithOptions(shared_ptr<ListDataSourcesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDataSourcesShrinkRequest> request = make_shared<ListDataSourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->types)) {
    request->typesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->types, make_shared<string>("Types"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSources"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourcesResponse(callApi(params, req, runtime));
}

ListDataSourcesResponse Alibabacloud_Dataworks-public20240518::Client::listDataSources(shared_ptr<ListDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSourcesWithOptions(request, runtime);
}

ListDatabasesResponse Alibabacloud_Dataworks-public20240518::Client::listDatabasesWithOptions(shared_ptr<ListDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatabases"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatabasesResponse(callApi(params, req, runtime));
}

ListDatabasesResponse Alibabacloud_Dataworks-public20240518::Client::listDatabases(shared_ptr<ListDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatabasesWithOptions(request, runtime);
}

ListDeploymentPackageFilesResponse Alibabacloud_Dataworks-public20240518::Client::listDeploymentPackageFilesWithOptions(shared_ptr<ListDeploymentPackageFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDeploymentPackageFilesShrinkRequest> request = make_shared<ListDeploymentPackageFilesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->fileIds)) {
    request->fileIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fileIds, make_shared<string>("FileIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->businessId)) {
    query->insert(pair<string, long>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeType)) {
    query->insert(pair<string, long>("ChangeType", *request->changeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commitFrom)) {
    query->insert(pair<string, string>("CommitFrom", *request->commitFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commitTo)) {
    query->insert(pair<string, string>("CommitTo", *request->commitTo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commitUserId)) {
    query->insert(pair<string, string>("CommitUserId", *request->commitUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileIdsShrink)) {
    query->insert(pair<string, string>("FileIds", *request->fileIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileType)) {
    query->insert(pair<string, long>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->solutionId)) {
    query->insert(pair<string, long>("SolutionId", *request->solutionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeploymentPackageFiles"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeploymentPackageFilesResponse(callApi(params, req, runtime));
}

ListDeploymentPackageFilesResponse Alibabacloud_Dataworks-public20240518::Client::listDeploymentPackageFiles(shared_ptr<ListDeploymentPackageFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeploymentPackageFilesWithOptions(request, runtime);
}

ListDeploymentPackagesResponse Alibabacloud_Dataworks-public20240518::Client::listDeploymentPackagesWithOptions(shared_ptr<ListDeploymentPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    body->insert(pair<string, string>("Creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endCreateTime)) {
    body->insert(pair<string, long>("EndCreateTime", *request->endCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endExecuteTime)) {
    body->insert(pair<string, long>("EndExecuteTime", *request->endExecuteTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executor)) {
    body->insert(pair<string, string>("Executor", *request->executor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeploymentPackages"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeploymentPackagesResponse(callApi(params, req, runtime));
}

ListDeploymentPackagesResponse Alibabacloud_Dataworks-public20240518::Client::listDeploymentPackages(shared_ptr<ListDeploymentPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeploymentPackagesWithOptions(request, runtime);
}

ListDownstreamTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::listDownstreamTaskInstancesWithOptions(shared_ptr<ListDownstreamTaskInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDownstreamTaskInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDownstreamTaskInstancesResponse(callApi(params, req, runtime));
}

ListDownstreamTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::listDownstreamTaskInstances(shared_ptr<ListDownstreamTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDownstreamTaskInstancesWithOptions(request, runtime);
}

ListDownstreamTasksResponse Alibabacloud_Dataworks-public20240518::Client::listDownstreamTasksWithOptions(shared_ptr<ListDownstreamTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDownstreamTasks"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDownstreamTasksResponse(callApi(params, req, runtime));
}

ListDownstreamTasksResponse Alibabacloud_Dataworks-public20240518::Client::listDownstreamTasks(shared_ptr<ListDownstreamTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDownstreamTasksWithOptions(request, runtime);
}

ListEntitiesInMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::listEntitiesInMetaCollectionWithOptions(shared_ptr<ListEntitiesInMetaCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEntitiesInMetaCollection"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEntitiesInMetaCollectionResponse(callApi(params, req, runtime));
}

ListEntitiesInMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::listEntitiesInMetaCollection(shared_ptr<ListEntitiesInMetaCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEntitiesInMetaCollectionWithOptions(request, runtime);
}

ListFileVersionsResponse Alibabacloud_Dataworks-public20240518::Client::listFileVersionsWithOptions(shared_ptr<ListFileVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    body->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFileVersions"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFileVersionsResponse(callApi(params, req, runtime));
}

ListFileVersionsResponse Alibabacloud_Dataworks-public20240518::Client::listFileVersions(shared_ptr<ListFileVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFileVersionsWithOptions(request, runtime);
}

ListFilesResponse Alibabacloud_Dataworks-public20240518::Client::listFilesWithOptions(shared_ptr<ListFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->commitStatus)) {
    body->insert(pair<string, long>("CommitStatus", *request->commitStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exactFileName)) {
    body->insert(pair<string, string>("ExactFileName", *request->exactFileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileFolderPath)) {
    body->insert(pair<string, string>("FileFolderPath", *request->fileFolderPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileIdIn)) {
    body->insert(pair<string, string>("FileIdIn", *request->fileIdIn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileTypes)) {
    body->insert(pair<string, string>("FileTypes", *request->fileTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastEditUser)) {
    body->insert(pair<string, string>("LastEditUser", *request->lastEditUser));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needAbsoluteFolderPath)) {
    body->insert(pair<string, bool>("NeedAbsoluteFolderPath", *request->needAbsoluteFolderPath));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needContent)) {
    body->insert(pair<string, bool>("NeedContent", *request->needContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->useType)) {
    body->insert(pair<string, string>("UseType", *request->useType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFiles"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFilesResponse(callApi(params, req, runtime));
}

ListFilesResponse Alibabacloud_Dataworks-public20240518::Client::listFiles(shared_ptr<ListFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFilesWithOptions(request, runtime);
}

ListFoldersResponse Alibabacloud_Dataworks-public20240518::Client::listFoldersWithOptions(shared_ptr<ListFoldersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFolderPath)) {
    body->insert(pair<string, string>("ParentFolderPath", *request->parentFolderPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFolders"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFoldersResponse(callApi(params, req, runtime));
}

ListFoldersResponse Alibabacloud_Dataworks-public20240518::Client::listFolders(shared_ptr<ListFoldersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFoldersWithOptions(request, runtime);
}

ListFunctionsResponse Alibabacloud_Dataworks-public20240518::Client::listFunctionsWithOptions(shared_ptr<ListFunctionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunctions"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionsResponse(callApi(params, req, runtime));
}

ListFunctionsResponse Alibabacloud_Dataworks-public20240518::Client::listFunctions(shared_ptr<ListFunctionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFunctionsWithOptions(request, runtime);
}

ListLineageRelationshipsResponse Alibabacloud_Dataworks-public20240518::Client::listLineageRelationshipsWithOptions(shared_ptr<ListLineageRelationshipsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLineageRelationships"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLineageRelationshipsResponse(callApi(params, req, runtime));
}

ListLineageRelationshipsResponse Alibabacloud_Dataworks-public20240518::Client::listLineageRelationships(shared_ptr<ListLineageRelationshipsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLineageRelationshipsWithOptions(request, runtime);
}

ListLineagesResponse Alibabacloud_Dataworks-public20240518::Client::listLineagesWithOptions(shared_ptr<ListLineagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLineages"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLineagesResponse(callApi(params, req, runtime));
}

ListLineagesResponse Alibabacloud_Dataworks-public20240518::Client::listLineages(shared_ptr<ListLineagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLineagesWithOptions(request, runtime);
}

ListMetaCollectionsResponse Alibabacloud_Dataworks-public20240518::Client::listMetaCollectionsWithOptions(shared_ptr<ListMetaCollectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMetaCollections"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMetaCollectionsResponse(callApi(params, req, runtime));
}

ListMetaCollectionsResponse Alibabacloud_Dataworks-public20240518::Client::listMetaCollections(shared_ptr<ListMetaCollectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMetaCollectionsWithOptions(request, runtime);
}

ListNetworksResponse Alibabacloud_Dataworks-public20240518::Client::listNetworksWithOptions(shared_ptr<ListNetworksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNetworks"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNetworksResponse(callApi(params, req, runtime));
}

ListNetworksResponse Alibabacloud_Dataworks-public20240518::Client::listNetworks(shared_ptr<ListNetworksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNetworksWithOptions(request, runtime);
}

ListNodeDependenciesResponse Alibabacloud_Dataworks-public20240518::Client::listNodeDependenciesWithOptions(shared_ptr<ListNodeDependenciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodeDependencies"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodeDependenciesResponse(callApi(params, req, runtime));
}

ListNodeDependenciesResponse Alibabacloud_Dataworks-public20240518::Client::listNodeDependencies(shared_ptr<ListNodeDependenciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodeDependenciesWithOptions(request, runtime);
}

ListNodesResponse Alibabacloud_Dataworks-public20240518::Client::listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodes"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodesResponse(callApi(params, req, runtime));
}

ListNodesResponse Alibabacloud_Dataworks-public20240518::Client::listNodes(shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesWithOptions(request, runtime);
}

ListPartitionsResponse Alibabacloud_Dataworks-public20240518::Client::listPartitionsWithOptions(shared_ptr<ListPartitionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPartitions"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPartitionsResponse(callApi(params, req, runtime));
}

ListPartitionsResponse Alibabacloud_Dataworks-public20240518::Client::listPartitions(shared_ptr<ListPartitionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPartitionsWithOptions(request, runtime);
}

ListPipelineRunItemsResponse Alibabacloud_Dataworks-public20240518::Client::listPipelineRunItemsWithOptions(shared_ptr<ListPipelineRunItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineRunItems"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPipelineRunItemsResponse(callApi(params, req, runtime));
}

ListPipelineRunItemsResponse Alibabacloud_Dataworks-public20240518::Client::listPipelineRunItems(shared_ptr<ListPipelineRunItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPipelineRunItemsWithOptions(request, runtime);
}

ListPipelineRunsResponse Alibabacloud_Dataworks-public20240518::Client::listPipelineRunsWithOptions(shared_ptr<ListPipelineRunsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineRuns"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPipelineRunsResponse(callApi(params, req, runtime));
}

ListPipelineRunsResponse Alibabacloud_Dataworks-public20240518::Client::listPipelineRuns(shared_ptr<ListPipelineRunsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPipelineRunsWithOptions(request, runtime);
}

ListProjectMembersResponse Alibabacloud_Dataworks-public20240518::Client::listProjectMembersWithOptions(shared_ptr<ListProjectMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProjectMembersShrinkRequest> request = make_shared<ListProjectMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->roleCodes)) {
    request->roleCodesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roleCodes, make_shared<string>("RoleCodes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->userIds)) {
    request->userIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userIds, make_shared<string>("UserIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleCodesShrink)) {
    body->insert(pair<string, string>("RoleCodes", *request->roleCodesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdsShrink)) {
    body->insert(pair<string, string>("UserIds", *request->userIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectMembers"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectMembersResponse(callApi(params, req, runtime));
}

ListProjectMembersResponse Alibabacloud_Dataworks-public20240518::Client::listProjectMembers(shared_ptr<ListProjectMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectMembersWithOptions(request, runtime);
}

ListProjectRolesResponse Alibabacloud_Dataworks-public20240518::Client::listProjectRolesWithOptions(shared_ptr<ListProjectRolesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProjectRolesShrinkRequest> request = make_shared<ListProjectRolesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->codes)) {
    request->codesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->codes, make_shared<string>("Codes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->names)) {
    request->namesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->names, make_shared<string>("Names"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->codesShrink)) {
    body->insert(pair<string, string>("Codes", *request->codesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namesShrink)) {
    body->insert(pair<string, string>("Names", *request->namesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectRoles"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectRolesResponse(callApi(params, req, runtime));
}

ListProjectRolesResponse Alibabacloud_Dataworks-public20240518::Client::listProjectRoles(shared_ptr<ListProjectRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectRolesWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_Dataworks-public20240518::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProjectsShrinkRequest> request = make_shared<ListProjectsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListProjectsRequestAliyunResourceTags>>(tmpReq->aliyunResourceTags)) {
    request->aliyunResourceTagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->aliyunResourceTags, make_shared<string>("AliyunResourceTags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->names)) {
    request->namesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->names, make_shared<string>("Names"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunResourceGroupId)) {
    body->insert(pair<string, string>("AliyunResourceGroupId", *request->aliyunResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunResourceTagsShrink)) {
    body->insert(pair<string, string>("AliyunResourceTags", *request->aliyunResourceTagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->devEnvironmentEnabled)) {
    body->insert(pair<string, bool>("DevEnvironmentEnabled", *request->devEnvironmentEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->devRoleDisabled)) {
    body->insert(pair<string, bool>("DevRoleDisabled", *request->devRoleDisabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namesShrink)) {
    body->insert(pair<string, string>("Names", *request->namesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->paiTaskEnabled)) {
    body->insert(pair<string, bool>("PaiTaskEnabled", *request->paiTaskEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectsResponse(callApi(params, req, runtime));
}

ListProjectsResponse Alibabacloud_Dataworks-public20240518::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(request, runtime);
}

ListResourceGroupsResponse Alibabacloud_Dataworks-public20240518::Client::listResourceGroupsWithOptions(shared_ptr<ListResourceGroupsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListResourceGroupsShrinkRequest> request = make_shared<ListResourceGroupsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListResourceGroupsRequestAliyunResourceTags>>(tmpReq->aliyunResourceTags)) {
    request->aliyunResourceTagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->aliyunResourceTags, make_shared<string>("AliyunResourceTags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceGroupTypes)) {
    request->resourceGroupTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceGroupTypes, make_shared<string>("ResourceGroupTypes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->statuses)) {
    request->statusesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->statuses, make_shared<string>("Statuses"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceGroups"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceGroupsResponse(callApi(params, req, runtime));
}

ListResourceGroupsResponse Alibabacloud_Dataworks-public20240518::Client::listResourceGroups(shared_ptr<ListResourceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceGroupsWithOptions(request, runtime);
}

ListResourcesResponse Alibabacloud_Dataworks-public20240518::Client::listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResources"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourcesResponse(callApi(params, req, runtime));
}

ListResourcesResponse Alibabacloud_Dataworks-public20240518::Client::listResources(shared_ptr<ListResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourcesWithOptions(request, runtime);
}

ListRoutesResponse Alibabacloud_Dataworks-public20240518::Client::listRoutesWithOptions(shared_ptr<ListRoutesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRoutes"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRoutesResponse(callApi(params, req, runtime));
}

ListRoutesResponse Alibabacloud_Dataworks-public20240518::Client::listRoutes(shared_ptr<ListRoutesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRoutesWithOptions(request, runtime);
}

ListSchemasResponse Alibabacloud_Dataworks-public20240518::Client::listSchemasWithOptions(shared_ptr<ListSchemasRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSchemasShrinkRequest> request = make_shared<ListSchemasShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->types)) {
    request->typesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->types, make_shared<string>("Types"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSchemas"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSchemasResponse(callApi(params, req, runtime));
}

ListSchemasResponse Alibabacloud_Dataworks-public20240518::Client::listSchemas(shared_ptr<ListSchemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSchemasWithOptions(request, runtime);
}

ListTablesResponse Alibabacloud_Dataworks-public20240518::Client::listTablesWithOptions(shared_ptr<ListTablesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTablesShrinkRequest> request = make_shared<ListTablesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tableTypes)) {
    request->tableTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tableTypes, make_shared<string>("TableTypes"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTables"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTablesResponse(callApi(params, req, runtime));
}

ListTablesResponse Alibabacloud_Dataworks-public20240518::Client::listTables(shared_ptr<ListTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTablesWithOptions(request, runtime);
}

ListTaskInstanceOperationLogsResponse Alibabacloud_Dataworks-public20240518::Client::listTaskInstanceOperationLogsWithOptions(shared_ptr<ListTaskInstanceOperationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskInstanceOperationLogs"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskInstanceOperationLogsResponse(callApi(params, req, runtime));
}

ListTaskInstanceOperationLogsResponse Alibabacloud_Dataworks-public20240518::Client::listTaskInstanceOperationLogs(shared_ptr<ListTaskInstanceOperationLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskInstanceOperationLogsWithOptions(request, runtime);
}

ListTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::listTaskInstancesWithOptions(shared_ptr<ListTaskInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTaskInstancesShrinkRequest> request = make_shared<ListTaskInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->taskIds)) {
    request->taskIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskIds, make_shared<string>("TaskIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizdate)) {
    body->insert(pair<string, long>("Bizdate", *request->bizdate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeResource)) {
    body->insert(pair<string, string>("RuntimeResource", *request->runtimeResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    body->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskIdsShrink)) {
    body->insert(pair<string, string>("TaskIds", *request->taskIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    body->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerRecurrence)) {
    body->insert(pair<string, string>("TriggerRecurrence", *request->triggerRecurrence));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerType)) {
    body->insert(pair<string, string>("TriggerType", *request->triggerType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workflowId)) {
    body->insert(pair<string, long>("WorkflowId", *request->workflowId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workflowInstanceId)) {
    body->insert(pair<string, long>("WorkflowInstanceId", *request->workflowInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowInstanceType)) {
    body->insert(pair<string, string>("WorkflowInstanceType", *request->workflowInstanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskInstancesResponse(callApi(params, req, runtime));
}

ListTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::listTaskInstances(shared_ptr<ListTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskInstancesWithOptions(request, runtime);
}

ListTaskOperationLogsResponse Alibabacloud_Dataworks-public20240518::Client::listTaskOperationLogsWithOptions(shared_ptr<ListTaskOperationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskOperationLogs"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskOperationLogsResponse(callApi(params, req, runtime));
}

ListTaskOperationLogsResponse Alibabacloud_Dataworks-public20240518::Client::listTaskOperationLogs(shared_ptr<ListTaskOperationLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskOperationLogsWithOptions(request, runtime);
}

ListTasksResponse Alibabacloud_Dataworks-public20240518::Client::listTasksWithOptions(shared_ptr<ListTasksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTasksShrinkRequest> request = make_shared<ListTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeResource)) {
    body->insert(pair<string, string>("RuntimeResource", *request->runtimeResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    body->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    body->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerRecurrence)) {
    body->insert(pair<string, string>("TriggerRecurrence", *request->triggerRecurrence));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerType)) {
    body->insert(pair<string, string>("TriggerType", *request->triggerType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workflowId)) {
    body->insert(pair<string, long>("WorkflowId", *request->workflowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTasks"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTasksResponse(callApi(params, req, runtime));
}

ListTasksResponse Alibabacloud_Dataworks-public20240518::Client::listTasks(shared_ptr<ListTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTasksWithOptions(request, runtime);
}

ListUpstreamTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::listUpstreamTaskInstancesWithOptions(shared_ptr<ListUpstreamTaskInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUpstreamTaskInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUpstreamTaskInstancesResponse(callApi(params, req, runtime));
}

ListUpstreamTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::listUpstreamTaskInstances(shared_ptr<ListUpstreamTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUpstreamTaskInstancesWithOptions(request, runtime);
}

ListUpstreamTasksResponse Alibabacloud_Dataworks-public20240518::Client::listUpstreamTasksWithOptions(shared_ptr<ListUpstreamTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUpstreamTasks"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUpstreamTasksResponse(callApi(params, req, runtime));
}

ListUpstreamTasksResponse Alibabacloud_Dataworks-public20240518::Client::listUpstreamTasks(shared_ptr<ListUpstreamTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUpstreamTasksWithOptions(request, runtime);
}

ListWorkflowDefinitionsResponse Alibabacloud_Dataworks-public20240518::Client::listWorkflowDefinitionsWithOptions(shared_ptr<ListWorkflowDefinitionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkflowDefinitions"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkflowDefinitionsResponse(callApi(params, req, runtime));
}

ListWorkflowDefinitionsResponse Alibabacloud_Dataworks-public20240518::Client::listWorkflowDefinitions(shared_ptr<ListWorkflowDefinitionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkflowDefinitionsWithOptions(request, runtime);
}

ListWorkflowInstancesResponse Alibabacloud_Dataworks-public20240518::Client::listWorkflowInstancesWithOptions(shared_ptr<ListWorkflowInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListWorkflowInstancesShrinkRequest> request = make_shared<ListWorkflowInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizDate)) {
    body->insert(pair<string, long>("BizDate", *request->bizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    body->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workflowId)) {
    body->insert(pair<string, long>("WorkflowId", *request->workflowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkflowInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkflowInstancesResponse(callApi(params, req, runtime));
}

ListWorkflowInstancesResponse Alibabacloud_Dataworks-public20240518::Client::listWorkflowInstances(shared_ptr<ListWorkflowInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkflowInstancesWithOptions(request, runtime);
}

ListWorkflowsResponse Alibabacloud_Dataworks-public20240518::Client::listWorkflowsWithOptions(shared_ptr<ListWorkflowsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListWorkflowsShrinkRequest> request = make_shared<ListWorkflowsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    body->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerType)) {
    body->insert(pair<string, string>("TriggerType", *request->triggerType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkflows"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkflowsResponse(callApi(params, req, runtime));
}

ListWorkflowsResponse Alibabacloud_Dataworks-public20240518::Client::listWorkflows(shared_ptr<ListWorkflowsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkflowsWithOptions(request, runtime);
}

MoveFunctionResponse Alibabacloud_Dataworks-public20240518::Client::moveFunctionWithOptions(shared_ptr<MoveFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveFunction"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveFunctionResponse(callApi(params, req, runtime));
}

MoveFunctionResponse Alibabacloud_Dataworks-public20240518::Client::moveFunction(shared_ptr<MoveFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveFunctionWithOptions(request, runtime);
}

MoveNodeResponse Alibabacloud_Dataworks-public20240518::Client::moveNodeWithOptions(shared_ptr<MoveNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveNode"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveNodeResponse(callApi(params, req, runtime));
}

MoveNodeResponse Alibabacloud_Dataworks-public20240518::Client::moveNode(shared_ptr<MoveNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveNodeWithOptions(request, runtime);
}

MoveResourceResponse Alibabacloud_Dataworks-public20240518::Client::moveResourceWithOptions(shared_ptr<MoveResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveResource"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveResourceResponse(callApi(params, req, runtime));
}

MoveResourceResponse Alibabacloud_Dataworks-public20240518::Client::moveResource(shared_ptr<MoveResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceWithOptions(request, runtime);
}

MoveWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::moveWorkflowDefinitionWithOptions(shared_ptr<MoveWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveWorkflowDefinition"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveWorkflowDefinitionResponse(callApi(params, req, runtime));
}

MoveWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::moveWorkflowDefinition(shared_ptr<MoveWorkflowDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveWorkflowDefinitionWithOptions(request, runtime);
}

RemoveEntityFromMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::removeEntityFromMetaCollectionWithOptions(shared_ptr<RemoveEntityFromMetaCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metaCollectionId)) {
    query->insert(pair<string, string>("MetaCollectionId", *request->metaCollectionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveEntityFromMetaCollection"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveEntityFromMetaCollectionResponse(callApi(params, req, runtime));
}

RemoveEntityFromMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::removeEntityFromMetaCollection(shared_ptr<RemoveEntityFromMetaCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeEntityFromMetaCollectionWithOptions(request, runtime);
}

RemoveTaskInstanceDependenciesResponse Alibabacloud_Dataworks-public20240518::Client::removeTaskInstanceDependenciesWithOptions(shared_ptr<RemoveTaskInstanceDependenciesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveTaskInstanceDependenciesShrinkRequest> request = make_shared<RemoveTaskInstanceDependenciesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->upstreamTaskInstanceIds)) {
    request->upstreamTaskInstanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->upstreamTaskInstanceIds, make_shared<string>("UpstreamTaskInstanceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upstreamTaskInstanceIdsShrink)) {
    body->insert(pair<string, string>("UpstreamTaskInstanceIds", *request->upstreamTaskInstanceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveTaskInstanceDependencies"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveTaskInstanceDependenciesResponse(callApi(params, req, runtime));
}

RemoveTaskInstanceDependenciesResponse Alibabacloud_Dataworks-public20240518::Client::removeTaskInstanceDependencies(shared_ptr<RemoveTaskInstanceDependenciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTaskInstanceDependenciesWithOptions(request, runtime);
}

RenameFunctionResponse Alibabacloud_Dataworks-public20240518::Client::renameFunctionWithOptions(shared_ptr<RenameFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenameFunction"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenameFunctionResponse(callApi(params, req, runtime));
}

RenameFunctionResponse Alibabacloud_Dataworks-public20240518::Client::renameFunction(shared_ptr<RenameFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renameFunctionWithOptions(request, runtime);
}

RenameNodeResponse Alibabacloud_Dataworks-public20240518::Client::renameNodeWithOptions(shared_ptr<RenameNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenameNode"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenameNodeResponse(callApi(params, req, runtime));
}

RenameNodeResponse Alibabacloud_Dataworks-public20240518::Client::renameNode(shared_ptr<RenameNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renameNodeWithOptions(request, runtime);
}

RenameResourceResponse Alibabacloud_Dataworks-public20240518::Client::renameResourceWithOptions(shared_ptr<RenameResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenameResource"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenameResourceResponse(callApi(params, req, runtime));
}

RenameResourceResponse Alibabacloud_Dataworks-public20240518::Client::renameResource(shared_ptr<RenameResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renameResourceWithOptions(request, runtime);
}

RenameWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::renameWorkflowDefinitionWithOptions(shared_ptr<RenameWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenameWorkflowDefinition"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenameWorkflowDefinitionResponse(callApi(params, req, runtime));
}

RenameWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::renameWorkflowDefinition(shared_ptr<RenameWorkflowDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renameWorkflowDefinitionWithOptions(request, runtime);
}

RerunTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::rerunTaskInstancesWithOptions(shared_ptr<RerunTaskInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RerunTaskInstancesShrinkRequest> request = make_shared<RerunTaskInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RerunTaskInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RerunTaskInstancesResponse(callApi(params, req, runtime));
}

RerunTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::rerunTaskInstances(shared_ptr<RerunTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rerunTaskInstancesWithOptions(request, runtime);
}

RerunWorkflowInstancesResponse Alibabacloud_Dataworks-public20240518::Client::rerunWorkflowInstancesWithOptions(shared_ptr<RerunWorkflowInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RerunWorkflowInstancesShrinkRequest> request = make_shared<RerunWorkflowInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RerunWorkflowInstancesRequestFilter>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("Filter"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizdate)) {
    body->insert(pair<string, long>("Bizdate", *request->bizdate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTriggerTime)) {
    body->insert(pair<string, long>("EndTriggerTime", *request->endTriggerTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterShrink)) {
    body->insert(pair<string, string>("Filter", *request->filterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTriggerTime)) {
    body->insert(pair<string, long>("StartTriggerTime", *request->startTriggerTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workflowId)) {
    body->insert(pair<string, long>("WorkflowId", *request->workflowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RerunWorkflowInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RerunWorkflowInstancesResponse(callApi(params, req, runtime));
}

RerunWorkflowInstancesResponse Alibabacloud_Dataworks-public20240518::Client::rerunWorkflowInstances(shared_ptr<RerunWorkflowInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rerunWorkflowInstancesWithOptions(request, runtime);
}

ResumeTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::resumeTaskInstancesWithOptions(shared_ptr<ResumeTaskInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ResumeTaskInstancesShrinkRequest> request = make_shared<ResumeTaskInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeTaskInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeTaskInstancesResponse(callApi(params, req, runtime));
}

ResumeTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::resumeTaskInstances(shared_ptr<ResumeTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeTaskInstancesWithOptions(request, runtime);
}

RevokeMemberProjectRolesResponse Alibabacloud_Dataworks-public20240518::Client::revokeMemberProjectRolesWithOptions(shared_ptr<RevokeMemberProjectRolesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RevokeMemberProjectRolesShrinkRequest> request = make_shared<RevokeMemberProjectRolesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->roleCodes)) {
    request->roleCodesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roleCodes, make_shared<string>("RoleCodes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleCodesShrink)) {
    body->insert(pair<string, string>("RoleCodes", *request->roleCodesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeMemberProjectRoles"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeMemberProjectRolesResponse(callApi(params, req, runtime));
}

RevokeMemberProjectRolesResponse Alibabacloud_Dataworks-public20240518::Client::revokeMemberProjectRoles(shared_ptr<RevokeMemberProjectRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeMemberProjectRolesWithOptions(request, runtime);
}

SetSuccessTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::setSuccessTaskInstancesWithOptions(shared_ptr<SetSuccessTaskInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetSuccessTaskInstancesShrinkRequest> request = make_shared<SetSuccessTaskInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetSuccessTaskInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetSuccessTaskInstancesResponse(callApi(params, req, runtime));
}

SetSuccessTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::setSuccessTaskInstances(shared_ptr<SetSuccessTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSuccessTaskInstancesWithOptions(request, runtime);
}

StartDIJobResponse Alibabacloud_Dataworks-public20240518::Client::startDIJobWithOptions(shared_ptr<StartDIJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartDIJobShrinkRequest> request = make_shared<StartDIJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<StartDIJobRequestRealtimeStartSettings>(tmpReq->realtimeStartSettings)) {
    request->realtimeStartSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->realtimeStartSettings, make_shared<string>("RealtimeStartSettings"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartDIJob"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartDIJobResponse(callApi(params, req, runtime));
}

StartDIJobResponse Alibabacloud_Dataworks-public20240518::Client::startDIJob(shared_ptr<StartDIJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDIJobWithOptions(request, runtime);
}

StartWorkflowInstancesResponse Alibabacloud_Dataworks-public20240518::Client::startWorkflowInstancesWithOptions(shared_ptr<StartWorkflowInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartWorkflowInstancesShrinkRequest> request = make_shared<StartWorkflowInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartWorkflowInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartWorkflowInstancesResponse(callApi(params, req, runtime));
}

StartWorkflowInstancesResponse Alibabacloud_Dataworks-public20240518::Client::startWorkflowInstances(shared_ptr<StartWorkflowInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startWorkflowInstancesWithOptions(request, runtime);
}

StopDIJobResponse Alibabacloud_Dataworks-public20240518::Client::stopDIJobWithOptions(shared_ptr<StopDIJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopDIJob"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopDIJobResponse(callApi(params, req, runtime));
}

StopDIJobResponse Alibabacloud_Dataworks-public20240518::Client::stopDIJob(shared_ptr<StopDIJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDIJobWithOptions(request, runtime);
}

StopTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::stopTaskInstancesWithOptions(shared_ptr<StopTaskInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopTaskInstancesShrinkRequest> request = make_shared<StopTaskInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopTaskInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopTaskInstancesResponse(callApi(params, req, runtime));
}

StopTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::stopTaskInstances(shared_ptr<StopTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopTaskInstancesWithOptions(request, runtime);
}

StopWorkflowInstancesResponse Alibabacloud_Dataworks-public20240518::Client::stopWorkflowInstancesWithOptions(shared_ptr<StopWorkflowInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopWorkflowInstancesShrinkRequest> request = make_shared<StopWorkflowInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopWorkflowInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopWorkflowInstancesResponse(callApi(params, req, runtime));
}

StopWorkflowInstancesResponse Alibabacloud_Dataworks-public20240518::Client::stopWorkflowInstances(shared_ptr<StopWorkflowInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopWorkflowInstancesWithOptions(request, runtime);
}

SubmitFileResponse Alibabacloud_Dataworks-public20240518::Client::submitFileWithOptions(shared_ptr<SubmitFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    body->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->skipAllDeployFileExtensions)) {
    body->insert(pair<string, bool>("SkipAllDeployFileExtensions", *request->skipAllDeployFileExtensions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitFile"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitFileResponse(callApi(params, req, runtime));
}

SubmitFileResponse Alibabacloud_Dataworks-public20240518::Client::submitFile(shared_ptr<SubmitFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFileWithOptions(request, runtime);
}

SuspendTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::suspendTaskInstancesWithOptions(shared_ptr<SuspendTaskInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SuspendTaskInstancesShrinkRequest> request = make_shared<SuspendTaskInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    body->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendTaskInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendTaskInstancesResponse(callApi(params, req, runtime));
}

SuspendTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::suspendTaskInstances(shared_ptr<SuspendTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendTaskInstancesWithOptions(request, runtime);
}

TagDataAssetsResponse Alibabacloud_Dataworks-public20240518::Client::tagDataAssetsWithOptions(shared_ptr<TagDataAssetsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TagDataAssetsShrinkRequest> request = make_shared<TagDataAssetsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->dataAssetIds)) {
    request->dataAssetIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataAssetIds, make_shared<string>("DataAssetIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagDataAssetsRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoTraceEnabled)) {
    query->insert(pair<string, bool>("AutoTraceEnabled", *request->autoTraceEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataAssetIdsShrink)) {
    query->insert(pair<string, string>("DataAssetIds", *request->dataAssetIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataAssetType)) {
    query->insert(pair<string, string>("DataAssetType", *request->dataAssetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagDataAssets"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagDataAssetsResponse(callApi(params, req, runtime));
}

TagDataAssetsResponse Alibabacloud_Dataworks-public20240518::Client::tagDataAssets(shared_ptr<TagDataAssetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagDataAssetsWithOptions(request, runtime);
}

TestDataSourceConnectivityResponse Alibabacloud_Dataworks-public20240518::Client::testDataSourceConnectivityWithOptions(shared_ptr<TestDataSourceConnectivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TestDataSourceConnectivity"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TestDataSourceConnectivityResponse(callApi(params, req, runtime));
}

TestDataSourceConnectivityResponse Alibabacloud_Dataworks-public20240518::Client::testDataSourceConnectivity(shared_ptr<TestDataSourceConnectivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testDataSourceConnectivityWithOptions(request, runtime);
}

TriggerSchedulerTaskInstanceResponse Alibabacloud_Dataworks-public20240518::Client::triggerSchedulerTaskInstanceWithOptions(shared_ptr<TriggerSchedulerTaskInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->triggerTime)) {
    body->insert(pair<string, long>("TriggerTime", *request->triggerTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerSchedulerTaskInstance"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TriggerSchedulerTaskInstanceResponse(callApi(params, req, runtime));
}

TriggerSchedulerTaskInstanceResponse Alibabacloud_Dataworks-public20240518::Client::triggerSchedulerTaskInstance(shared_ptr<TriggerSchedulerTaskInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerSchedulerTaskInstanceWithOptions(request, runtime);
}

UnTagDataAssetsResponse Alibabacloud_Dataworks-public20240518::Client::unTagDataAssetsWithOptions(shared_ptr<UnTagDataAssetsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UnTagDataAssetsShrinkRequest> request = make_shared<UnTagDataAssetsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->dataAssetIds)) {
    request->dataAssetIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataAssetIds, make_shared<string>("DataAssetIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UnTagDataAssetsRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataAssetIdsShrink)) {
    query->insert(pair<string, string>("DataAssetIds", *request->dataAssetIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataAssetType)) {
    query->insert(pair<string, string>("DataAssetType", *request->dataAssetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnTagDataAssets"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnTagDataAssetsResponse(callApi(params, req, runtime));
}

UnTagDataAssetsResponse Alibabacloud_Dataworks-public20240518::Client::unTagDataAssets(shared_ptr<UnTagDataAssetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unTagDataAssetsWithOptions(request, runtime);
}

UpdateAlertRuleResponse Alibabacloud_Dataworks-public20240518::Client::updateAlertRuleWithOptions(shared_ptr<UpdateAlertRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAlertRuleShrinkRequest> request = make_shared<UpdateAlertRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateAlertRuleRequestNotification>(tmpReq->notification)) {
    request->notificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notification, make_shared<string>("Notification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateAlertRuleRequestTriggerCondition>(tmpReq->triggerCondition)) {
    request->triggerConditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->triggerCondition, make_shared<string>("TriggerCondition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationShrink)) {
    query->insert(pair<string, string>("Notification", *request->notificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    query->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerConditionShrink)) {
    query->insert(pair<string, string>("TriggerCondition", *request->triggerConditionShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAlertRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAlertRuleResponse(callApi(params, req, runtime));
}

UpdateAlertRuleResponse Alibabacloud_Dataworks-public20240518::Client::updateAlertRule(shared_ptr<UpdateAlertRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAlertRuleWithOptions(request, runtime);
}

UpdateBusinessResponse Alibabacloud_Dataworks-public20240518::Client::updateBusinessWithOptions(shared_ptr<UpdateBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->businessId)) {
    body->insert(pair<string, long>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessName)) {
    body->insert(pair<string, string>("BusinessName", *request->businessName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBusiness"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBusinessResponse(callApi(params, req, runtime));
}

UpdateBusinessResponse Alibabacloud_Dataworks-public20240518::Client::updateBusiness(shared_ptr<UpdateBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBusinessWithOptions(request, runtime);
}

UpdateColumnBusinessMetadataResponse Alibabacloud_Dataworks-public20240518::Client::updateColumnBusinessMetadataWithOptions(shared_ptr<UpdateColumnBusinessMetadataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateColumnBusinessMetadata"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateColumnBusinessMetadataResponse(callApi(params, req, runtime));
}

UpdateColumnBusinessMetadataResponse Alibabacloud_Dataworks-public20240518::Client::updateColumnBusinessMetadata(shared_ptr<UpdateColumnBusinessMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateColumnBusinessMetadataWithOptions(request, runtime);
}

UpdateDIAlarmRuleResponse Alibabacloud_Dataworks-public20240518::Client::updateDIAlarmRuleWithOptions(shared_ptr<UpdateDIAlarmRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDIAlarmRuleShrinkRequest> request = make_shared<UpdateDIAlarmRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateDIAlarmRuleRequestNotificationSettings>(tmpReq->notificationSettings)) {
    request->notificationSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notificationSettings, make_shared<string>("NotificationSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDIAlarmRuleRequestTriggerConditions>>(tmpReq->triggerConditions)) {
    request->triggerConditionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->triggerConditions, make_shared<string>("TriggerConditions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDIAlarmRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDIAlarmRuleResponse(callApi(params, req, runtime));
}

UpdateDIAlarmRuleResponse Alibabacloud_Dataworks-public20240518::Client::updateDIAlarmRule(shared_ptr<UpdateDIAlarmRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDIAlarmRuleWithOptions(request, runtime);
}

UpdateDIJobResponse Alibabacloud_Dataworks-public20240518::Client::updateDIJobWithOptions(shared_ptr<UpdateDIJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDIJobShrinkRequest> request = make_shared<UpdateDIJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateDIJobRequestJobSettings>(tmpReq->jobSettings)) {
    request->jobSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->jobSettings, make_shared<string>("JobSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateDIJobRequestResourceSettings>(tmpReq->resourceSettings)) {
    request->resourceSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceSettings, make_shared<string>("ResourceSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDIJobRequestTableMappings>>(tmpReq->tableMappings)) {
    request->tableMappingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tableMappings, make_shared<string>("TableMappings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDIJobRequestTransformationRules>>(tmpReq->transformationRules)) {
    request->transformationRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transformationRules, make_shared<string>("TransformationRules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->DIJobId)) {
    query->insert(pair<string, long>("DIJobId", *request->DIJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobSettingsShrink)) {
    body->insert(pair<string, string>("JobSettings", *request->jobSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceSettingsShrink)) {
    body->insert(pair<string, string>("ResourceSettings", *request->resourceSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableMappingsShrink)) {
    body->insert(pair<string, string>("TableMappings", *request->tableMappingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transformationRulesShrink)) {
    body->insert(pair<string, string>("TransformationRules", *request->transformationRulesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDIJob"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDIJobResponse(callApi(params, req, runtime));
}

UpdateDIJobResponse Alibabacloud_Dataworks-public20240518::Client::updateDIJob(shared_ptr<UpdateDIJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDIJobWithOptions(request, runtime);
}

UpdateDataAssetTagResponse Alibabacloud_Dataworks-public20240518::Client::updateDataAssetTagWithOptions(shared_ptr<UpdateDataAssetTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDataAssetTagShrinkRequest> request = make_shared<UpdateDataAssetTagShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->managers)) {
    request->managersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->managers, make_shared<string>("Managers"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->values)) {
    request->valuesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->values, make_shared<string>("Values"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managersShrink)) {
    query->insert(pair<string, string>("Managers", *request->managersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->valuesShrink)) {
    query->insert(pair<string, string>("Values", *request->valuesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataAssetTag"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataAssetTagResponse(callApi(params, req, runtime));
}

UpdateDataAssetTagResponse Alibabacloud_Dataworks-public20240518::Client::updateDataAssetTag(shared_ptr<UpdateDataAssetTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataAssetTagWithOptions(request, runtime);
}

UpdateDataQualityEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::updateDataQualityEvaluationTaskWithOptions(shared_ptr<UpdateDataQualityEvaluationTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDataQualityEvaluationTaskShrinkRequest> request = make_shared<UpdateDataQualityEvaluationTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDataQualityEvaluationTaskRequestDataQualityRules>>(tmpReq->dataQualityRules)) {
    request->dataQualityRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataQualityRules, make_shared<string>("DataQualityRules"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDataQualityEvaluationTaskRequestHooks>>(tmpReq->hooks)) {
    request->hooksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hooks, make_shared<string>("Hooks"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateDataQualityEvaluationTaskRequestNotifications>(tmpReq->notifications)) {
    request->notificationsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notifications, make_shared<string>("Notifications"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateDataQualityEvaluationTaskRequestTarget>(tmpReq->target)) {
    request->targetShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->target, make_shared<string>("Target"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateDataQualityEvaluationTaskRequestTrigger>(tmpReq->trigger)) {
    request->triggerShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->trigger, make_shared<string>("Trigger"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataQualityRulesShrink)) {
    body->insert(pair<string, string>("DataQualityRules", *request->dataQualityRulesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    body->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hooksShrink)) {
    body->insert(pair<string, string>("Hooks", *request->hooksShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationsShrink)) {
    body->insert(pair<string, string>("Notifications", *request->notificationsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeConf)) {
    body->insert(pair<string, string>("RuntimeConf", *request->runtimeConf));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetShrink)) {
    body->insert(pair<string, string>("Target", *request->targetShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerShrink)) {
    body->insert(pair<string, string>("Trigger", *request->triggerShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataQualityEvaluationTask"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataQualityEvaluationTaskResponse(callApi(params, req, runtime));
}

UpdateDataQualityEvaluationTaskResponse Alibabacloud_Dataworks-public20240518::Client::updateDataQualityEvaluationTask(shared_ptr<UpdateDataQualityEvaluationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataQualityEvaluationTaskWithOptions(request, runtime);
}

UpdateDataQualityRuleResponse Alibabacloud_Dataworks-public20240518::Client::updateDataQualityRuleWithOptions(shared_ptr<UpdateDataQualityRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDataQualityRuleShrinkRequest> request = make_shared<UpdateDataQualityRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateDataQualityRuleRequestCheckingConfig>(tmpReq->checkingConfig)) {
    request->checkingConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->checkingConfig, make_shared<string>("CheckingConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDataQualityRuleRequestErrorHandlers>>(tmpReq->errorHandlers)) {
    request->errorHandlersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->errorHandlers, make_shared<string>("ErrorHandlers"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateDataQualityRuleRequestSamplingConfig>(tmpReq->samplingConfig)) {
    request->samplingConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->samplingConfig, make_shared<string>("SamplingConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkingConfigShrink)) {
    body->insert(pair<string, string>("CheckingConfig", *request->checkingConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    body->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorHandlersShrink)) {
    body->insert(pair<string, string>("ErrorHandlers", *request->errorHandlersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->samplingConfigShrink)) {
    body->insert(pair<string, string>("SamplingConfig", *request->samplingConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    body->insert(pair<string, string>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    body->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataQualityRule"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataQualityRuleResponse(callApi(params, req, runtime));
}

UpdateDataQualityRuleResponse Alibabacloud_Dataworks-public20240518::Client::updateDataQualityRule(shared_ptr<UpdateDataQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataQualityRuleWithOptions(request, runtime);
}

UpdateDataQualityRuleTemplateResponse Alibabacloud_Dataworks-public20240518::Client::updateDataQualityRuleTemplateWithOptions(shared_ptr<UpdateDataQualityRuleTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDataQualityRuleTemplateShrinkRequest> request = make_shared<UpdateDataQualityRuleTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateDataQualityRuleTemplateRequestCheckingConfig>(tmpReq->checkingConfig)) {
    request->checkingConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->checkingConfig, make_shared<string>("CheckingConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateDataQualityRuleTemplateRequestSamplingConfig>(tmpReq->samplingConfig)) {
    request->samplingConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->samplingConfig, make_shared<string>("SamplingConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkingConfigShrink)) {
    body->insert(pair<string, string>("CheckingConfig", *request->checkingConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryPath)) {
    body->insert(pair<string, string>("DirectoryPath", *request->directoryPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->samplingConfigShrink)) {
    body->insert(pair<string, string>("SamplingConfig", *request->samplingConfigShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataQualityRuleTemplate"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataQualityRuleTemplateResponse(callApi(params, req, runtime));
}

UpdateDataQualityRuleTemplateResponse Alibabacloud_Dataworks-public20240518::Client::updateDataQualityRuleTemplate(shared_ptr<UpdateDataQualityRuleTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataQualityRuleTemplateWithOptions(request, runtime);
}

UpdateDataSourceResponse Alibabacloud_Dataworks-public20240518::Client::updateDataSourceWithOptions(shared_ptr<UpdateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionProperties)) {
    query->insert(pair<string, string>("ConnectionProperties", *request->connectionProperties));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionPropertiesMode)) {
    query->insert(pair<string, string>("ConnectionPropertiesMode", *request->connectionPropertiesMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataSource"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataSourceResponse(callApi(params, req, runtime));
}

UpdateDataSourceResponse Alibabacloud_Dataworks-public20240518::Client::updateDataSource(shared_ptr<UpdateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataSourceWithOptions(request, runtime);
}

UpdateFileResponse Alibabacloud_Dataworks-public20240518::Client::updateFileWithOptions(shared_ptr<UpdateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->advancedSettings)) {
    body->insert(pair<string, string>("AdvancedSettings", *request->advancedSettings));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->applyScheduleImmediately)) {
    body->insert(pair<string, bool>("ApplyScheduleImmediately", *request->applyScheduleImmediately));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoParsing)) {
    body->insert(pair<string, bool>("AutoParsing", *request->autoParsing));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRerunIntervalMillis)) {
    body->insert(pair<string, long>("AutoRerunIntervalMillis", *request->autoRerunIntervalMillis));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoRerunTimes)) {
    body->insert(pair<string, long>("AutoRerunTimes", *request->autoRerunTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionName)) {
    body->insert(pair<string, string>("ConnectionName", *request->connectionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cronExpress)) {
    body->insert(pair<string, string>("CronExpress", *request->cronExpress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cycleType)) {
    body->insert(pair<string, string>("CycleType", *request->cycleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dependentNodeIdList)) {
    body->insert(pair<string, string>("DependentNodeIdList", *request->dependentNodeIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dependentType)) {
    body->insert(pair<string, string>("DependentType", *request->dependentType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endEffectDate)) {
    body->insert(pair<string, long>("EndEffectDate", *request->endEffectDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileDescription)) {
    body->insert(pair<string, string>("FileDescription", *request->fileDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileFolderPath)) {
    body->insert(pair<string, string>("FileFolderPath", *request->fileFolderPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    body->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreParentSkipRunningProperty)) {
    body->insert(pair<string, bool>("IgnoreParentSkipRunningProperty", *request->ignoreParentSkipRunningProperty));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputList)) {
    body->insert(pair<string, string>("InputList", *request->inputList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputParameters)) {
    body->insert(pair<string, string>("InputParameters", *request->inputParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputList)) {
    body->insert(pair<string, string>("OutputList", *request->outputList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputParameters)) {
    body->insert(pair<string, string>("OutputParameters", *request->outputParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paraValue)) {
    body->insert(pair<string, string>("ParaValue", *request->paraValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rerunMode)) {
    body->insert(pair<string, string>("RerunMode", *request->rerunMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdentifier)) {
    body->insert(pair<string, string>("ResourceGroupIdentifier", *request->resourceGroupIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulerType)) {
    body->insert(pair<string, string>("SchedulerType", *request->schedulerType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startEffectDate)) {
    body->insert(pair<string, long>("StartEffectDate", *request->startEffectDate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->startImmediately)) {
    body->insert(pair<string, bool>("StartImmediately", *request->startImmediately));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stop)) {
    body->insert(pair<string, bool>("Stop", *request->stop));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFile"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFileResponse(callApi(params, req, runtime));
}

UpdateFileResponse Alibabacloud_Dataworks-public20240518::Client::updateFile(shared_ptr<UpdateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFileWithOptions(request, runtime);
}

UpdateFolderResponse Alibabacloud_Dataworks-public20240518::Client::updateFolderWithOptions(shared_ptr<UpdateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    body->insert(pair<string, string>("FolderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderName)) {
    body->insert(pair<string, string>("FolderName", *request->folderName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFolder"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFolderResponse(callApi(params, req, runtime));
}

UpdateFolderResponse Alibabacloud_Dataworks-public20240518::Client::updateFolder(shared_ptr<UpdateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFolderWithOptions(request, runtime);
}

UpdateFunctionResponse Alibabacloud_Dataworks-public20240518::Client::updateFunctionWithOptions(shared_ptr<UpdateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFunction"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFunctionResponse(callApi(params, req, runtime));
}

UpdateFunctionResponse Alibabacloud_Dataworks-public20240518::Client::updateFunction(shared_ptr<UpdateFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFunctionWithOptions(request, runtime);
}

UpdateIDEEventResultResponse Alibabacloud_Dataworks-public20240518::Client::updateIDEEventResultWithOptions(shared_ptr<UpdateIDEEventResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkResult)) {
    body->insert(pair<string, string>("CheckResult", *request->checkResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkResultTip)) {
    body->insert(pair<string, string>("CheckResultTip", *request->checkResultTip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extensionCode)) {
    body->insert(pair<string, string>("ExtensionCode", *request->extensionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageId)) {
    body->insert(pair<string, string>("MessageId", *request->messageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIDEEventResult"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIDEEventResultResponse(callApi(params, req, runtime));
}

UpdateIDEEventResultResponse Alibabacloud_Dataworks-public20240518::Client::updateIDEEventResult(shared_ptr<UpdateIDEEventResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIDEEventResultWithOptions(request, runtime);
}

UpdateMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::updateMetaCollectionWithOptions(shared_ptr<UpdateMetaCollectionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMetaCollectionShrinkRequest> request = make_shared<UpdateMetaCollectionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->administrators)) {
    request->administratorsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->administrators, make_shared<string>("Administrators"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->administratorsShrink)) {
    query->insert(pair<string, string>("Administrators", *request->administratorsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMetaCollection"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMetaCollectionResponse(callApi(params, req, runtime));
}

UpdateMetaCollectionResponse Alibabacloud_Dataworks-public20240518::Client::updateMetaCollection(shared_ptr<UpdateMetaCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetaCollectionWithOptions(request, runtime);
}

UpdateNodeResponse Alibabacloud_Dataworks-public20240518::Client::updateNodeWithOptions(shared_ptr<UpdateNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNode"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNodeResponse(callApi(params, req, runtime));
}

UpdateNodeResponse Alibabacloud_Dataworks-public20240518::Client::updateNode(shared_ptr<UpdateNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNodeWithOptions(request, runtime);
}

UpdateProjectResponse Alibabacloud_Dataworks-public20240518::Client::updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->devEnvironmentEnabled)) {
    body->insert(pair<string, bool>("DevEnvironmentEnabled", *request->devEnvironmentEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->devRoleDisabled)) {
    body->insert(pair<string, bool>("DevRoleDisabled", *request->devRoleDisabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->paiTaskEnabled)) {
    body->insert(pair<string, bool>("PaiTaskEnabled", *request->paiTaskEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProject"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectResponse(callApi(params, req, runtime));
}

UpdateProjectResponse Alibabacloud_Dataworks-public20240518::Client::updateProject(shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectWithOptions(request, runtime);
}

UpdateResourceResponse Alibabacloud_Dataworks-public20240518::Client::updateResourceWithOptions(shared_ptr<UpdateResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceFile)) {
    body->insert(pair<string, string>("ResourceFile", *request->resourceFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResource"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceResponse(callApi(params, req, runtime));
}

UpdateResourceResponse Alibabacloud_Dataworks-public20240518::Client::updateResource(shared_ptr<UpdateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateResourceWithOptions(request, runtime);
}

UpdateResourceResponse Alibabacloud_Dataworks-public20240518::Client::updateResourceAdvance(shared_ptr<UpdateResourceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<Alibabacloud_Credential::CredentialModel> credentialModel;
  if (Darabonba_Util::Client::isUnset<Alibabacloud_Credential::Client>(_credential)) {
    BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, string>({
      {"code", "InvalidCredentials"},
      {"message", "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    })));
  }
  credentialModel = make_shared<Alibabacloud_Credential::CredentialModel>(_credential->getCredential());
  shared_ptr<string> accessKeyId = credentialModel->accessKeyId;
  shared_ptr<string> accessKeySecret = credentialModel->accessKeySecret;
  shared_ptr<string> securityToken = credentialModel->securityToken;
  shared_ptr<string> credentialType = credentialModel->type;
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Client> authClient = make_shared<Alibabacloud_OpenApi::Client>(authConfig);
  shared_ptr<map<string, string>> authRequest = make_shared<map<string, string>>(map<string, string>({
    {"Product", "dataworks-public"},
    {"RegionId", !_regionId ? string() : *_regionId}
  })
);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> authReq = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(authRequest))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> authParams = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeFileUpload"))},
    {"version", boost::any(string("2019-12-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  shared_ptr<map<string, boost::any>> authResponse = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<map<string, boost::any>> ossHeader = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> tmpBody = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<bool> useAccelerate = make_shared<bool>(false);
  shared_ptr<map<string, string>> authResponseBody = make_shared<map<string, string>>(map<string, string>());
  shared_ptr<UpdateResourceRequest> updateResourceReq = make_shared<UpdateResourceRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, updateResourceReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->resourceFileObject)) {
    shared_ptr<boost::any> tmpResp0 = make_shared<boost::any>(authClient->callApi(authParams, authReq, runtime));
    authResponse = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(tmpResp0));
    tmpBody = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(make_shared<boost::any>((*authResponse)["body"])));
    useAccelerate = make_shared<bool>(Darabonba_Util::Client::assertAsBoolean(make_shared<boost::any>((*tmpBody)["UseAccelerate"])));
    authResponseBody = make_shared<map<string, string>>(Darabonba_Util::Client::stringifyMapValue(tmpBody));
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", boost::any(string((*authResponseBody)["ObjectKey"]))},
      {"content", !request->resourceFileObject ? boost::any() : boost::any(*request->resourceFileObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<map<string, boost::any>>(map<string, boost::any>({
      {"host", boost::any(string((*authResponseBody)["Bucket"]) + string(".") + string(Alibabacloud_OpenApiUtil::Client::getEndpoint(make_shared<string>((*authResponseBody)["Endpoint"]), useAccelerate, _endpointType)))},
      {"OSSAccessKeyId", boost::any(string((*authResponseBody)["AccessKeyId"]))},
      {"policy", boost::any(string((*authResponseBody)["EncodedPolicy"]))},
      {"Signature", boost::any(string((*authResponseBody)["Signature"]))},
      {"key", boost::any(string((*authResponseBody)["ObjectKey"]))},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"success_action_status", boost::any(string("201"))}
    })
);
    _postOSSObject(make_shared<string>((*authResponseBody)["Bucket"]), ossHeader);
    updateResourceReq->resourceFile = make_shared<string>(string("http://") + string((*authResponseBody)["Bucket"]) + string(".") + string((*authResponseBody)["Endpoint"]) + string("/") + string((*authResponseBody)["ObjectKey"]));
  }
  shared_ptr<UpdateResourceResponse> updateResourceResp = make_shared<UpdateResourceResponse>(updateResourceWithOptions(updateResourceReq, runtime));
  return *updateResourceResp;
}

UpdateResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::updateResourceGroupWithOptions(shared_ptr<UpdateResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunResourceGroupId)) {
    body->insert(pair<string, string>("AliyunResourceGroupId", *request->aliyunResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceGroup"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceGroupResponse(callApi(params, req, runtime));
}

UpdateResourceGroupResponse Alibabacloud_Dataworks-public20240518::Client::updateResourceGroup(shared_ptr<UpdateResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateResourceGroupWithOptions(request, runtime);
}

UpdateRouteResponse Alibabacloud_Dataworks-public20240518::Client::updateRouteWithOptions(shared_ptr<UpdateRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidr)) {
    body->insert(pair<string, string>("DestinationCidr", *request->destinationCidr));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRoute"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRouteResponse(callApi(params, req, runtime));
}

UpdateRouteResponse Alibabacloud_Dataworks-public20240518::Client::updateRoute(shared_ptr<UpdateRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRouteWithOptions(request, runtime);
}

UpdateTableBusinessMetadataResponse Alibabacloud_Dataworks-public20240518::Client::updateTableBusinessMetadataWithOptions(shared_ptr<UpdateTableBusinessMetadataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readme)) {
    body->insert(pair<string, string>("Readme", *request->readme));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTableBusinessMetadata"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTableBusinessMetadataResponse(callApi(params, req, runtime));
}

UpdateTableBusinessMetadataResponse Alibabacloud_Dataworks-public20240518::Client::updateTableBusinessMetadata(shared_ptr<UpdateTableBusinessMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableBusinessMetadataWithOptions(request, runtime);
}

UpdateTaskResponse Alibabacloud_Dataworks-public20240518::Client::updateTaskWithOptions(shared_ptr<UpdateTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTaskShrinkRequest> request = make_shared<UpdateTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateTaskRequestDataSource>(tmpReq->dataSource)) {
    request->dataSourceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataSource, make_shared<string>("DataSource"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTaskRequestDependencies>>(tmpReq->dependencies)) {
    request->dependenciesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dependencies, make_shared<string>("Dependencies"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTaskRequestInputs>(tmpReq->inputs)) {
    request->inputsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputs, make_shared<string>("Inputs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTaskRequestOutputs>(tmpReq->outputs)) {
    request->outputsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outputs, make_shared<string>("Outputs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTaskRequestRuntimeResource>(tmpReq->runtimeResource)) {
    request->runtimeResourceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->runtimeResource, make_shared<string>("RuntimeResource"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTaskRequestScript>(tmpReq->script)) {
    request->scriptShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->script, make_shared<string>("Script"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTaskRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTaskRequestTrigger>(tmpReq->trigger)) {
    request->triggerShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->trigger, make_shared<string>("Trigger"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUniqueCode)) {
    body->insert(pair<string, string>("ClientUniqueCode", *request->clientUniqueCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceShrink)) {
    body->insert(pair<string, string>("DataSource", *request->dataSourceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dependenciesShrink)) {
    body->insert(pair<string, string>("Dependencies", *request->dependenciesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputsShrink)) {
    body->insert(pair<string, string>("Inputs", *request->inputsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceMode)) {
    body->insert(pair<string, string>("InstanceMode", *request->instanceMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputsShrink)) {
    body->insert(pair<string, string>("Outputs", *request->outputsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rerunInterval)) {
    body->insert(pair<string, long>("RerunInterval", *request->rerunInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rerunMode)) {
    body->insert(pair<string, string>("RerunMode", *request->rerunMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rerunTimes)) {
    body->insert(pair<string, long>("RerunTimes", *request->rerunTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeResourceShrink)) {
    body->insert(pair<string, string>("RuntimeResource", *request->runtimeResourceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptShrink)) {
    body->insert(pair<string, string>("Script", *request->scriptShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerShrink)) {
    body->insert(pair<string, string>("Trigger", *request->triggerShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTask"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskResponse(callApi(params, req, runtime));
}

UpdateTaskResponse Alibabacloud_Dataworks-public20240518::Client::updateTask(shared_ptr<UpdateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskWithOptions(request, runtime);
}

UpdateTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::updateTaskInstancesWithOptions(shared_ptr<UpdateTaskInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTaskInstancesShrinkRequest> request = make_shared<UpdateTaskInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTaskInstancesRequestTaskInstances>>(tmpReq->taskInstances)) {
    request->taskInstancesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskInstances, make_shared<string>("TaskInstances"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskInstancesShrink)) {
    body->insert(pair<string, string>("TaskInstances", *request->taskInstancesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskInstances"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTaskInstancesResponse(callApi(params, req, runtime));
}

UpdateTaskInstancesResponse Alibabacloud_Dataworks-public20240518::Client::updateTaskInstances(shared_ptr<UpdateTaskInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskInstancesWithOptions(request, runtime);
}

UpdateUdfFileResponse Alibabacloud_Dataworks-public20240518::Client::updateUdfFileWithOptions(shared_ptr<UpdateUdfFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->className)) {
    body->insert(pair<string, string>("ClassName", *request->className));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cmdDescription)) {
    body->insert(pair<string, string>("CmdDescription", *request->cmdDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->example)) {
    body->insert(pair<string, string>("Example", *request->example));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileFolderPath)) {
    body->insert(pair<string, string>("FileFolderPath", *request->fileFolderPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    body->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionType)) {
    body->insert(pair<string, string>("FunctionType", *request->functionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameterDescription)) {
    body->insert(pair<string, string>("ParameterDescription", *request->parameterDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resources)) {
    body->insert(pair<string, string>("Resources", *request->resources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->returnValue)) {
    body->insert(pair<string, string>("ReturnValue", *request->returnValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->udfDescription)) {
    body->insert(pair<string, string>("UdfDescription", *request->udfDescription));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUdfFile"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUdfFileResponse(callApi(params, req, runtime));
}

UpdateUdfFileResponse Alibabacloud_Dataworks-public20240518::Client::updateUdfFile(shared_ptr<UpdateUdfFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUdfFileWithOptions(request, runtime);
}

UpdateWorkflowResponse Alibabacloud_Dataworks-public20240518::Client::updateWorkflowWithOptions(shared_ptr<UpdateWorkflowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateWorkflowShrinkRequest> request = make_shared<UpdateWorkflowShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateWorkflowRequestDependencies>>(tmpReq->dependencies)) {
    request->dependenciesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dependencies, make_shared<string>("Dependencies"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateWorkflowRequestOutputs>(tmpReq->outputs)) {
    request->outputsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outputs, make_shared<string>("Outputs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateWorkflowRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateWorkflowRequestTasks>>(tmpReq->tasks)) {
    request->tasksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tasks, make_shared<string>("Tasks"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateWorkflowRequestTrigger>(tmpReq->trigger)) {
    request->triggerShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->trigger, make_shared<string>("Trigger"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUniqueCode)) {
    body->insert(pair<string, string>("ClientUniqueCode", *request->clientUniqueCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dependenciesShrink)) {
    body->insert(pair<string, string>("Dependencies", *request->dependenciesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceMode)) {
    body->insert(pair<string, string>("InstanceMode", *request->instanceMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputsShrink)) {
    body->insert(pair<string, string>("Outputs", *request->outputsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    body->insert(pair<string, string>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tasksShrink)) {
    body->insert(pair<string, string>("Tasks", *request->tasksShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerShrink)) {
    body->insert(pair<string, string>("Trigger", *request->triggerShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkflow"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkflowResponse(callApi(params, req, runtime));
}

UpdateWorkflowResponse Alibabacloud_Dataworks-public20240518::Client::updateWorkflow(shared_ptr<UpdateWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWorkflowWithOptions(request, runtime);
}

UpdateWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::updateWorkflowDefinitionWithOptions(shared_ptr<UpdateWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spec)) {
    body->insert(pair<string, string>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkflowDefinition"))},
    {"version", boost::any(string("2024-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkflowDefinitionResponse(callApi(params, req, runtime));
}

UpdateWorkflowDefinitionResponse Alibabacloud_Dataworks-public20240518::Client::updateWorkflowDefinition(shared_ptr<UpdateWorkflowDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWorkflowDefinitionWithOptions(request, runtime);
}

