// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dataworks_public_20200518.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <alibabacloud/open_platform_20191219.hpp>
#include <alibabacloud/oss.hpp>
#include <alibabacloud/ossutil.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Dataworks-public20200518;

Alibabacloud_Dataworks-public20200518::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Dataworks-public20200518::Client::getEndpoint(shared_ptr<string> productId,
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

AbolishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::abolishDataServiceApiWithOptions(shared_ptr<AbolishDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    body->insert(pair<string, long>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbolishDataServiceApi"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbolishDataServiceApiResponse(callApi(params, req, runtime));
}

AbolishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::abolishDataServiceApi(shared_ptr<AbolishDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abolishDataServiceApiWithOptions(request, runtime);
}

AddMetaCollectionEntityResponse Alibabacloud_Dataworks-public20200518::Client::addMetaCollectionEntityWithOptions(shared_ptr<AddMetaCollectionEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionQualifiedName)) {
    query->insert(pair<string, string>("CollectionQualifiedName", *request->collectionQualifiedName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityQualifiedName)) {
    query->insert(pair<string, string>("EntityQualifiedName", *request->entityQualifiedName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMetaCollectionEntity"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMetaCollectionEntityResponse(callApi(params, req, runtime));
}

AddMetaCollectionEntityResponse Alibabacloud_Dataworks-public20200518::Client::addMetaCollectionEntity(shared_ptr<AddMetaCollectionEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMetaCollectionEntityWithOptions(request, runtime);
}

AddProjectMemberToRoleResponse Alibabacloud_Dataworks-public20200518::Client::addProjectMemberToRoleWithOptions(shared_ptr<AddProjectMemberToRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleCode)) {
    query->insert(pair<string, string>("RoleCode", *request->roleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddProjectMemberToRole"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddProjectMemberToRoleResponse(callApi(params, req, runtime));
}

AddProjectMemberToRoleResponse Alibabacloud_Dataworks-public20200518::Client::addProjectMemberToRole(shared_ptr<AddProjectMemberToRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addProjectMemberToRoleWithOptions(request, runtime);
}

AddToMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::addToMetaCategoryWithOptions(shared_ptr<AddToMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddToMetaCategory"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddToMetaCategoryResponse(callApi(params, req, runtime));
}

AddToMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::addToMetaCategory(shared_ptr<AddToMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addToMetaCategoryWithOptions(request, runtime);
}

ApprovePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::approvePermissionApplyOrderWithOptions(shared_ptr<ApprovePermissionApplyOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->approveAction)) {
    query->insert(pair<string, long>("ApproveAction", *request->approveAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->approveComment)) {
    query->insert(pair<string, string>("ApproveComment", *request->approveComment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApprovePermissionApplyOrder"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApprovePermissionApplyOrderResponse(callApi(params, req, runtime));
}

ApprovePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::approvePermissionApplyOrder(shared_ptr<ApprovePermissionApplyOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approvePermissionApplyOrderWithOptions(request, runtime);
}

ChangeResourceManagerResourceGroupResponse Alibabacloud_Dataworks-public20200518::Client::changeResourceManagerResourceGroupWithOptions(shared_ptr<ChangeResourceManagerResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceManagerResourceGroup"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceManagerResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceManagerResourceGroupResponse Alibabacloud_Dataworks-public20200518::Client::changeResourceManagerResourceGroup(shared_ptr<ChangeResourceManagerResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceManagerResourceGroupWithOptions(request, runtime);
}

CheckFileDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::checkFileDeploymentWithOptions(shared_ptr<CheckFileDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkDetailUrl)) {
    body->insert(pair<string, string>("CheckDetailUrl", *request->checkDetailUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkerInstanceId)) {
    body->insert(pair<string, string>("CheckerInstanceId", *request->checkerInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckFileDeployment"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckFileDeploymentResponse(callApi(params, req, runtime));
}

CheckFileDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::checkFileDeployment(shared_ptr<CheckFileDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkFileDeploymentWithOptions(request, runtime);
}

CheckMetaPartitionResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaPartitionWithOptions(shared_ptr<CheckMetaPartitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partition)) {
    query->insert(pair<string, string>("Partition", *request->partition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckMetaPartition"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckMetaPartitionResponse(callApi(params, req, runtime));
}

CheckMetaPartitionResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaPartition(shared_ptr<CheckMetaPartitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMetaPartitionWithOptions(request, runtime);
}

CheckMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaTableWithOptions(shared_ptr<CheckMetaTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckMetaTable"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckMetaTableResponse(callApi(params, req, runtime));
}

CheckMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaTable(shared_ptr<CheckMetaTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMetaTableWithOptions(request, runtime);
}

CreateBaselineResponse Alibabacloud_Dataworks-public20200518::Client::createBaselineWithOptions(shared_ptr<CreateBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertMarginThreshold)) {
    body->insert(pair<string, long>("AlertMarginThreshold", *request->alertMarginThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineName)) {
    body->insert(pair<string, string>("BaselineName", *request->baselineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineType)) {
    body->insert(pair<string, string>("BaselineType", *request->baselineType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIds)) {
    body->insert(pair<string, string>("NodeIds", *request->nodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateBaselineRequestOvertimeSettings>>(request->overtimeSettings)) {
    body->insert(pair<string, vector<CreateBaselineRequestOvertimeSettings>>("OvertimeSettings", *request->overtimeSettings));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBaseline"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBaselineResponse(callApi(params, req, runtime));
}

CreateBaselineResponse Alibabacloud_Dataworks-public20200518::Client::createBaseline(shared_ptr<CreateBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBaselineWithOptions(request, runtime);
}

CreateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::createBusinessWithOptions(shared_ptr<CreateBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

CreateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::createBusiness(shared_ptr<CreateBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBusinessWithOptions(request, runtime);
}

CreateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::createConnectionWithOptions(shared_ptr<CreateConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionType)) {
    query->insert(pair<string, string>("ConnectionType", *request->connectionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->envType)) {
    query->insert(pair<string, long>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subType)) {
    query->insert(pair<string, string>("SubType", *request->subType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConnection"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConnectionResponse(callApi(params, req, runtime));
}

CreateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::createConnection(shared_ptr<CreateConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConnectionWithOptions(request, runtime);
}

CreateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::createDISyncTaskWithOptions(shared_ptr<CreateDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskContent)) {
    query->insert(pair<string, string>("TaskContent", *request->taskContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskParam)) {
    query->insert(pair<string, string>("TaskParam", *request->taskParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDISyncTask"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDISyncTaskResponse(callApi(params, req, runtime));
}

CreateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::createDISyncTask(shared_ptr<CreateDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDISyncTaskWithOptions(request, runtime);
}

CreateDagComplementResponse Alibabacloud_Dataworks-public20200518::Client::createDagComplementWithOptions(shared_ptr<CreateDagComplementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizBeginTime)) {
    body->insert(pair<string, string>("BizBeginTime", *request->bizBeginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizEndTime)) {
    body->insert(pair<string, string>("BizEndTime", *request->bizEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endBizDate)) {
    body->insert(pair<string, string>("EndBizDate", *request->endBizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeNodeIds)) {
    body->insert(pair<string, string>("ExcludeNodeIds", *request->excludeNodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeNodeIds)) {
    body->insert(pair<string, string>("IncludeNodeIds", *request->includeNodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeParams)) {
    body->insert(pair<string, string>("NodeParams", *request->nodeParams));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->parallelism)) {
    body->insert(pair<string, bool>("Parallelism", *request->parallelism));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rootNodeId)) {
    body->insert(pair<string, long>("RootNodeId", *request->rootNodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startBizDate)) {
    body->insert(pair<string, string>("StartBizDate", *request->startBizDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDagComplement"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDagComplementResponse(callApi(params, req, runtime));
}

CreateDagComplementResponse Alibabacloud_Dataworks-public20200518::Client::createDagComplement(shared_ptr<CreateDagComplementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDagComplementWithOptions(request, runtime);
}

CreateDagTestResponse Alibabacloud_Dataworks-public20200518::Client::createDagTestWithOptions(shared_ptr<CreateDagTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizdate)) {
    body->insert(pair<string, string>("Bizdate", *request->bizdate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeParams)) {
    body->insert(pair<string, string>("NodeParams", *request->nodeParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDagTest"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDagTestResponse(callApi(params, req, runtime));
}

CreateDagTestResponse Alibabacloud_Dataworks-public20200518::Client::createDagTest(shared_ptr<CreateDagTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDagTestWithOptions(request, runtime);
}

CreateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApiWithOptions(shared_ptr<CreateDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiDescription)) {
    body->insert(pair<string, string>("ApiDescription", *request->apiDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->apiMode)) {
    body->insert(pair<string, long>("ApiMode", *request->apiMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    body->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiPath)) {
    body->insert(pair<string, string>("ApiPath", *request->apiPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->folderId)) {
    body->insert(pair<string, long>("FolderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocols)) {
    body->insert(pair<string, string>("Protocols", *request->protocols));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrationDetails)) {
    body->insert(pair<string, string>("RegistrationDetails", *request->registrationDetails));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestContentType)) {
    body->insert(pair<string, long>("RequestContentType", *request->requestContentType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestMethod)) {
    body->insert(pair<string, long>("RequestMethod", *request->requestMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceGroupId)) {
    body->insert(pair<string, long>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->responseContentType)) {
    body->insert(pair<string, long>("ResponseContentType", *request->responseContentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptDetails)) {
    body->insert(pair<string, string>("ScriptDetails", *request->scriptDetails));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sqlMode)) {
    body->insert(pair<string, long>("SqlMode", *request->sqlMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibleRange)) {
    body->insert(pair<string, long>("VisibleRange", *request->visibleRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wizardDetails)) {
    body->insert(pair<string, string>("WizardDetails", *request->wizardDetails));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataServiceApi"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataServiceApiResponse(callApi(params, req, runtime));
}

CreateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApi(shared_ptr<CreateDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceApiWithOptions(request, runtime);
}

CreateDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApiAuthorityWithOptions(shared_ptr<CreateDataServiceApiAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    body->insert(pair<string, long>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->authorizedProjectId)) {
    body->insert(pair<string, long>("AuthorizedProjectId", *request->authorizedProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataServiceApiAuthority"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataServiceApiAuthorityResponse(callApi(params, req, runtime));
}

CreateDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApiAuthority(shared_ptr<CreateDataServiceApiAuthorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceApiAuthorityWithOptions(request, runtime);
}

CreateDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceFolderWithOptions(shared_ptr<CreateDataServiceFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderName)) {
    body->insert(pair<string, string>("FolderName", *request->folderName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    body->insert(pair<string, long>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataServiceFolder"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataServiceFolderResponse(callApi(params, req, runtime));
}

CreateDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceFolder(shared_ptr<CreateDataServiceFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceFolderWithOptions(request, runtime);
}

CreateDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceGroupWithOptions(shared_ptr<CreateDataServiceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiGatewayGroupId)) {
    body->insert(pair<string, string>("ApiGatewayGroupId", *request->apiGatewayGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataServiceGroup"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataServiceGroupResponse(callApi(params, req, runtime));
}

CreateDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceGroup(shared_ptr<CreateDataServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceGroupWithOptions(request, runtime);
}

CreateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::createDataSourceWithOptions(shared_ptr<CreateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->envType)) {
    query->insert(pair<string, long>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subType)) {
    query->insert(pair<string, string>("SubType", *request->subType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataSource"))},
    {"version", boost::any(string("2020-05-18"))},
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

CreateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::createDataSource(shared_ptr<CreateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataSourceWithOptions(request, runtime);
}

CreateExportMigrationResponse Alibabacloud_Dataworks-public20200518::Client::createExportMigrationWithOptions(shared_ptr<CreateExportMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exportMode)) {
    body->insert(pair<string, string>("ExportMode", *request->exportMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exportObjectStatus)) {
    body->insert(pair<string, string>("ExportObjectStatus", *request->exportObjectStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->incrementalSince)) {
    body->insert(pair<string, long>("IncrementalSince", *request->incrementalSince));
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
    {"action", boost::any(string("CreateExportMigration"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateExportMigrationResponse(callApi(params, req, runtime));
}

CreateExportMigrationResponse Alibabacloud_Dataworks-public20200518::Client::createExportMigration(shared_ptr<CreateExportMigrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createExportMigrationWithOptions(request, runtime);
}

CreateFileResponse Alibabacloud_Dataworks-public20200518::Client::createFileWithOptions(shared_ptr<CreateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->advancedSettings)) {
    body->insert(pair<string, string>("AdvancedSettings", *request->advancedSettings));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFile"))},
    {"version", boost::any(string("2020-05-18"))},
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

CreateFileResponse Alibabacloud_Dataworks-public20200518::Client::createFile(shared_ptr<CreateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFileWithOptions(request, runtime);
}

CreateFolderResponse Alibabacloud_Dataworks-public20200518::Client::createFolderWithOptions(shared_ptr<CreateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

CreateFolderResponse Alibabacloud_Dataworks-public20200518::Client::createFolder(shared_ptr<CreateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFolderWithOptions(request, runtime);
}

CreateImportMigrationResponse Alibabacloud_Dataworks-public20200518::Client::createImportMigrationWithOptions(shared_ptr<CreateImportMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calculateEngineMap)) {
    body->insert(pair<string, string>("CalculateEngineMap", *request->calculateEngineMap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commitRule)) {
    body->insert(pair<string, string>("CommitRule", *request->commitRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageFile)) {
    body->insert(pair<string, string>("PackageFile", *request->packageFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    body->insert(pair<string, string>("PackageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupMap)) {
    body->insert(pair<string, string>("ResourceGroupMap", *request->resourceGroupMap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceMap)) {
    body->insert(pair<string, string>("WorkspaceMap", *request->workspaceMap));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateImportMigration"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateImportMigrationResponse(callApi(params, req, runtime));
}

CreateImportMigrationResponse Alibabacloud_Dataworks-public20200518::Client::createImportMigration(shared_ptr<CreateImportMigrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImportMigrationWithOptions(request, runtime);
}

CreateImportMigrationResponse Alibabacloud_Dataworks-public20200518::Client::createImportMigrationAdvance(shared_ptr<CreateImportMigrationAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
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
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("dataworks-public"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<CreateImportMigrationRequest> createImportMigrationReq = make_shared<CreateImportMigrationRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, createImportMigrationReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->packageFileObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->packageFileObject ? boost::any() : boost::any(*request->packageFileObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    createImportMigrationReq->packageFile = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<CreateImportMigrationResponse> createImportMigrationResp = make_shared<CreateImportMigrationResponse>(createImportMigrationWithOptions(createImportMigrationReq, runtime));
  return *createImportMigrationResp;
}

CreateManualDagResponse Alibabacloud_Dataworks-public20200518::Client::createManualDagWithOptions(shared_ptr<CreateManualDagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizDate)) {
    body->insert(pair<string, string>("BizDate", *request->bizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dagParameters)) {
    body->insert(pair<string, string>("DagParameters", *request->dagParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeNodeIds)) {
    body->insert(pair<string, string>("ExcludeNodeIds", *request->excludeNodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowName)) {
    body->insert(pair<string, string>("FlowName", *request->flowName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeNodeIds)) {
    body->insert(pair<string, string>("IncludeNodeIds", *request->includeNodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeParameters)) {
    body->insert(pair<string, string>("NodeParameters", *request->nodeParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateManualDag"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateManualDagResponse(callApi(params, req, runtime));
}

CreateManualDagResponse Alibabacloud_Dataworks-public20200518::Client::createManualDag(shared_ptr<CreateManualDagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createManualDagWithOptions(request, runtime);
}

CreateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::createMetaCategoryWithOptions(shared_ptr<CreateMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    body->insert(pair<string, long>("ParentId", *request->parentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMetaCategory"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMetaCategoryResponse(callApi(params, req, runtime));
}

CreateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::createMetaCategory(shared_ptr<CreateMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMetaCategoryWithOptions(request, runtime);
}

CreateMetaCollectionResponse Alibabacloud_Dataworks-public20200518::Client::createMetaCollectionWithOptions(shared_ptr<CreateMetaCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionType)) {
    query->insert(pair<string, string>("CollectionType", *request->collectionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentQualifiedName)) {
    query->insert(pair<string, string>("ParentQualifiedName", *request->parentQualifiedName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMetaCollection"))},
    {"version", boost::any(string("2020-05-18"))},
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

CreateMetaCollectionResponse Alibabacloud_Dataworks-public20200518::Client::createMetaCollection(shared_ptr<CreateMetaCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMetaCollectionWithOptions(request, runtime);
}

CreatePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::createPermissionApplyOrderWithOptions(shared_ptr<CreatePermissionApplyOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreatePermissionApplyOrderRequestApplyObject>>(request->applyObject)) {
    query->insert(pair<string, vector<CreatePermissionApplyOrderRequestApplyObject>>("ApplyObject", *request->applyObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyReason)) {
    query->insert(pair<string, string>("ApplyReason", *request->applyReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyUserIds)) {
    query->insert(pair<string, string>("ApplyUserIds", *request->applyUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->deadline)) {
    query->insert(pair<string, long>("Deadline", *request->deadline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineType)) {
    query->insert(pair<string, string>("EngineType", *request->engineType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxComputeProjectName)) {
    query->insert(pair<string, string>("MaxComputeProjectName", *request->maxComputeProjectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderType)) {
    query->insert(pair<string, long>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workspaceId)) {
    query->insert(pair<string, long>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePermissionApplyOrder"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePermissionApplyOrderResponse(callApi(params, req, runtime));
}

CreatePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::createPermissionApplyOrder(shared_ptr<CreatePermissionApplyOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPermissionApplyOrderWithOptions(request, runtime);
}

CreateProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::createProjectMemberWithOptions(shared_ptr<CreateProjectMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleCode)) {
    query->insert(pair<string, string>("RoleCode", *request->roleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProjectMember"))},
    {"version", boost::any(string("2020-05-18"))},
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

CreateProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::createProjectMember(shared_ptr<CreateProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectMemberWithOptions(request, runtime);
}

CreateQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::createQualityEntityWithOptions(shared_ptr<CreateQualityEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->entityLevel)) {
    body->insert(pair<string, long>("EntityLevel", *request->entityLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchExpression)) {
    body->insert(pair<string, string>("MatchExpression", *request->matchExpression));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    body->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQualityEntity"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQualityEntityResponse(callApi(params, req, runtime));
}

CreateQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::createQualityEntity(shared_ptr<CreateQualityEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityEntityWithOptions(request, runtime);
}

CreateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::createQualityFollowerWithOptions(shared_ptr<CreateQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alarmMode)) {
    body->insert(pair<string, long>("AlarmMode", *request->alarmMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    body->insert(pair<string, long>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->follower)) {
    body->insert(pair<string, string>("Follower", *request->follower));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQualityFollower"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQualityFollowerResponse(callApi(params, req, runtime));
}

CreateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::createQualityFollower(shared_ptr<CreateQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityFollowerWithOptions(request, runtime);
}

CreateQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRelativeNodeWithOptions(shared_ptr<CreateQualityRelativeNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchExpression)) {
    body->insert(pair<string, string>("MatchExpression", *request->matchExpression));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    body->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetNodeProjectId)) {
    body->insert(pair<string, long>("TargetNodeProjectId", *request->targetNodeProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetNodeProjectName)) {
    body->insert(pair<string, string>("TargetNodeProjectName", *request->targetNodeProjectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQualityRelativeNode"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQualityRelativeNodeResponse(callApi(params, req, runtime));
}

CreateQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRelativeNode(shared_ptr<CreateQualityRelativeNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityRelativeNodeWithOptions(request, runtime);
}

CreateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRuleWithOptions(shared_ptr<CreateQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->blockType)) {
    body->insert(pair<string, long>("BlockType", *request->blockType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checker)) {
    body->insert(pair<string, long>("Checker", *request->checker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->criticalThreshold)) {
    body->insert(pair<string, string>("CriticalThreshold", *request->criticalThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    body->insert(pair<string, long>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expectValue)) {
    body->insert(pair<string, string>("ExpectValue", *request->expectValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodName)) {
    body->insert(pair<string, string>("MethodName", *request->methodName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    body->insert(pair<string, string>("Operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictType)) {
    body->insert(pair<string, long>("PredictType", *request->predictType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->property)) {
    body->insert(pair<string, string>("Property", *request->property));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyType)) {
    body->insert(pair<string, string>("PropertyType", *request->propertyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleType)) {
    body->insert(pair<string, long>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    body->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trend)) {
    body->insert(pair<string, string>("Trend", *request->trend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->warningThreshold)) {
    body->insert(pair<string, string>("WarningThreshold", *request->warningThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whereCondition)) {
    body->insert(pair<string, string>("WhereCondition", *request->whereCondition));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQualityRule"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQualityRuleResponse(callApi(params, req, runtime));
}

CreateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRule(shared_ptr<CreateQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityRuleWithOptions(request, runtime);
}

CreateRemindResponse Alibabacloud_Dataworks-public20200518::Client::createRemindWithOptions(shared_ptr<CreateRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertInterval)) {
    body->insert(pair<string, long>("AlertInterval", *request->alertInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertMethods)) {
    body->insert(pair<string, string>("AlertMethods", *request->alertMethods));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertTargets)) {
    body->insert(pair<string, string>("AlertTargets", *request->alertTargets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertUnit)) {
    body->insert(pair<string, string>("AlertUnit", *request->alertUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineIds)) {
    body->insert(pair<string, string>("BaselineIds", *request->baselineIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizProcessIds)) {
    body->insert(pair<string, string>("BizProcessIds", *request->bizProcessIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detail)) {
    body->insert(pair<string, string>("Detail", *request->detail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dndEnd)) {
    body->insert(pair<string, string>("DndEnd", *request->dndEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAlertTimes)) {
    body->insert(pair<string, long>("MaxAlertTimes", *request->maxAlertTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIds)) {
    body->insert(pair<string, string>("NodeIds", *request->nodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remindName)) {
    body->insert(pair<string, string>("RemindName", *request->remindName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remindType)) {
    body->insert(pair<string, string>("RemindType", *request->remindType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remindUnit)) {
    body->insert(pair<string, string>("RemindUnit", *request->remindUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotUrls)) {
    body->insert(pair<string, string>("RobotUrls", *request->robotUrls));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhooks)) {
    body->insert(pair<string, string>("Webhooks", *request->webhooks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRemind"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRemindResponse(callApi(params, req, runtime));
}

CreateRemindResponse Alibabacloud_Dataworks-public20200518::Client::createRemind(shared_ptr<CreateRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRemindWithOptions(request, runtime);
}

CreateResourceFileResponse Alibabacloud_Dataworks-public20200518::Client::createResourceFileWithOptions(shared_ptr<CreateResourceFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

CreateResourceFileResponse Alibabacloud_Dataworks-public20200518::Client::createResourceFile(shared_ptr<CreateResourceFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceFileWithOptions(request, runtime);
}

CreateResourceFileResponse Alibabacloud_Dataworks-public20200518::Client::createResourceFileAdvance(shared_ptr<CreateResourceFileAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
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
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("dataworks-public"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<CreateResourceFileRequest> createResourceFileReq = make_shared<CreateResourceFileRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, createResourceFileReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->resourceFileObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->resourceFileObject ? boost::any() : boost::any(*request->resourceFileObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    createResourceFileReq->resourceFile = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<CreateResourceFileResponse> createResourceFileResp = make_shared<CreateResourceFileResponse>(createResourceFileWithOptions(createResourceFileReq, runtime));
  return *createResourceFileResp;
}

CreateTableResponse Alibabacloud_Dataworks-public20200518::Client::createTableWithOptions(shared_ptr<CreateTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appGuid)) {
    query->insert(pair<string, string>("AppGuid", *request->appGuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalTableType)) {
    query->insert(pair<string, string>("ExternalTableType", *request->externalTableType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hasPart)) {
    query->insert(pair<string, long>("HasPart", *request->hasPart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isView)) {
    query->insert(pair<string, long>("IsView", *request->isView));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lifeCycle)) {
    query->insert(pair<string, long>("LifeCycle", *request->lifeCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    query->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logicalLevelId)) {
    query->insert(pair<string, long>("LogicalLevelId", *request->logicalLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->physicsLevelId)) {
    query->insert(pair<string, long>("PhysicsLevelId", *request->physicsLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schema)) {
    query->insert(pair<string, string>("Schema", *request->schema));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibility)) {
    query->insert(pair<string, long>("Visibility", *request->visibility));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateTableRequestColumns>>(request->columns)) {
    body->insert(pair<string, vector<CreateTableRequestColumns>>("Columns", *request->columns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpoint)) {
    body->insert(pair<string, string>("Endpoint", *request->endpoint));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->envType)) {
    body->insert(pair<string, long>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTableRequestThemes>>(request->themes)) {
    body->insert(pair<string, vector<CreateTableRequestThemes>>("Themes", *request->themes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTable"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTableResponse(callApi(params, req, runtime));
}

CreateTableResponse Alibabacloud_Dataworks-public20200518::Client::createTable(shared_ptr<CreateTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTableWithOptions(request, runtime);
}

CreateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::createTableLevelWithOptions(shared_ptr<CreateTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->levelType)) {
    query->insert(pair<string, long>("LevelType", *request->levelType));
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
    {"action", boost::any(string("CreateTableLevel"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTableLevelResponse(callApi(params, req, runtime));
}

CreateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::createTableLevel(shared_ptr<CreateTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTableLevelWithOptions(request, runtime);
}

CreateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::createTableThemeWithOptions(shared_ptr<CreateTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    query->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    query->insert(pair<string, long>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTableTheme"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTableThemeResponse(callApi(params, req, runtime));
}

CreateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::createTableTheme(shared_ptr<CreateTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTableThemeWithOptions(request, runtime);
}

CreateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::createUdfFileWithOptions(shared_ptr<CreateUdfFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

CreateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::createUdfFile(shared_ptr<CreateUdfFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUdfFileWithOptions(request, runtime);
}

DeleteBaselineResponse Alibabacloud_Dataworks-public20200518::Client::deleteBaselineWithOptions(shared_ptr<DeleteBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baselineId)) {
    body->insert(pair<string, long>("BaselineId", *request->baselineId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBaseline"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBaselineResponse(callApi(params, req, runtime));
}

DeleteBaselineResponse Alibabacloud_Dataworks-public20200518::Client::deleteBaseline(shared_ptr<DeleteBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBaselineWithOptions(request, runtime);
}

DeleteBusinessResponse Alibabacloud_Dataworks-public20200518::Client::deleteBusinessWithOptions(shared_ptr<DeleteBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

DeleteBusinessResponse Alibabacloud_Dataworks-public20200518::Client::deleteBusiness(shared_ptr<DeleteBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBusinessWithOptions(request, runtime);
}

DeleteConnectionResponse Alibabacloud_Dataworks-public20200518::Client::deleteConnectionWithOptions(shared_ptr<DeleteConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->connectionId)) {
    query->insert(pair<string, long>("ConnectionId", *request->connectionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConnection"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConnectionResponse(callApi(params, req, runtime));
}

DeleteConnectionResponse Alibabacloud_Dataworks-public20200518::Client::deleteConnection(shared_ptr<DeleteConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConnectionWithOptions(request, runtime);
}

DeleteDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deleteDISyncTaskWithOptions(shared_ptr<DeleteDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDISyncTask"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDISyncTaskResponse(callApi(params, req, runtime));
}

DeleteDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deleteDISyncTask(shared_ptr<DeleteDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDISyncTaskWithOptions(request, runtime);
}

DeleteDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApiWithOptions(shared_ptr<DeleteDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    body->insert(pair<string, long>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataServiceApi"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataServiceApiResponse(callApi(params, req, runtime));
}

DeleteDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApi(shared_ptr<DeleteDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataServiceApiWithOptions(request, runtime);
}

DeleteDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApiAuthorityWithOptions(shared_ptr<DeleteDataServiceApiAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    body->insert(pair<string, long>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->authorizedProjectId)) {
    body->insert(pair<string, long>("AuthorizedProjectId", *request->authorizedProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataServiceApiAuthority"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataServiceApiAuthorityResponse(callApi(params, req, runtime));
}

DeleteDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApiAuthority(shared_ptr<DeleteDataServiceApiAuthorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataServiceApiAuthorityWithOptions(request, runtime);
}

DeleteDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSource"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataSourceResponse(callApi(params, req, runtime));
}

DeleteDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataSource(shared_ptr<DeleteDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceWithOptions(request, runtime);
}

DeleteFileResponse Alibabacloud_Dataworks-public20200518::Client::deleteFileWithOptions(shared_ptr<DeleteFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

DeleteFileResponse Alibabacloud_Dataworks-public20200518::Client::deleteFile(shared_ptr<DeleteFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFileWithOptions(request, runtime);
}

DeleteFolderResponse Alibabacloud_Dataworks-public20200518::Client::deleteFolderWithOptions(shared_ptr<DeleteFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

DeleteFolderResponse Alibabacloud_Dataworks-public20200518::Client::deleteFolder(shared_ptr<DeleteFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFolderWithOptions(request, runtime);
}

DeleteFromMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteFromMetaCategoryWithOptions(shared_ptr<DeleteFromMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFromMetaCategory"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFromMetaCategoryResponse(callApi(params, req, runtime));
}

DeleteFromMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteFromMetaCategory(shared_ptr<DeleteFromMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFromMetaCategoryWithOptions(request, runtime);
}

DeleteLineageRelationResponse Alibabacloud_Dataworks-public20200518::Client::deleteLineageRelationWithOptions(shared_ptr<DeleteLineageRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destEntityQualifiedName)) {
    query->insert(pair<string, string>("DestEntityQualifiedName", *request->destEntityQualifiedName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relationshipGuid)) {
    query->insert(pair<string, string>("RelationshipGuid", *request->relationshipGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcEntityQualifiedName)) {
    query->insert(pair<string, string>("SrcEntityQualifiedName", *request->srcEntityQualifiedName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLineageRelation"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLineageRelationResponse(callApi(params, req, runtime));
}

DeleteLineageRelationResponse Alibabacloud_Dataworks-public20200518::Client::deleteLineageRelation(shared_ptr<DeleteLineageRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLineageRelationWithOptions(request, runtime);
}

DeleteMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteMetaCategoryWithOptions(shared_ptr<DeleteMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMetaCategory"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMetaCategoryResponse(callApi(params, req, runtime));
}

DeleteMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteMetaCategory(shared_ptr<DeleteMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMetaCategoryWithOptions(request, runtime);
}

DeleteMetaCollectionResponse Alibabacloud_Dataworks-public20200518::Client::deleteMetaCollectionWithOptions(shared_ptr<DeleteMetaCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifiedName)) {
    query->insert(pair<string, string>("QualifiedName", *request->qualifiedName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMetaCollection"))},
    {"version", boost::any(string("2020-05-18"))},
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

DeleteMetaCollectionResponse Alibabacloud_Dataworks-public20200518::Client::deleteMetaCollection(shared_ptr<DeleteMetaCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMetaCollectionWithOptions(request, runtime);
}

DeleteMetaCollectionEntityResponse Alibabacloud_Dataworks-public20200518::Client::deleteMetaCollectionEntityWithOptions(shared_ptr<DeleteMetaCollectionEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionQualifiedName)) {
    query->insert(pair<string, string>("CollectionQualifiedName", *request->collectionQualifiedName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityQualifiedName)) {
    query->insert(pair<string, string>("EntityQualifiedName", *request->entityQualifiedName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMetaCollectionEntity"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMetaCollectionEntityResponse(callApi(params, req, runtime));
}

DeleteMetaCollectionEntityResponse Alibabacloud_Dataworks-public20200518::Client::deleteMetaCollectionEntity(shared_ptr<DeleteMetaCollectionEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMetaCollectionEntityWithOptions(request, runtime);
}

DeleteProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::deleteProjectMemberWithOptions(shared_ptr<DeleteProjectMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProjectMember"))},
    {"version", boost::any(string("2020-05-18"))},
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

DeleteProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::deleteProjectMember(shared_ptr<DeleteProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectMemberWithOptions(request, runtime);
}

DeleteQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityEntityWithOptions(shared_ptr<DeleteQualityEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    body->insert(pair<string, long>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQualityEntity"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQualityEntityResponse(callApi(params, req, runtime));
}

DeleteQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityEntity(shared_ptr<DeleteQualityEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityEntityWithOptions(request, runtime);
}

DeleteQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityFollowerWithOptions(shared_ptr<DeleteQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->followerId)) {
    body->insert(pair<string, long>("FollowerId", *request->followerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQualityFollower"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQualityFollowerResponse(callApi(params, req, runtime));
}

DeleteQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityFollower(shared_ptr<DeleteQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityFollowerWithOptions(request, runtime);
}

DeleteQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRelativeNodeWithOptions(shared_ptr<DeleteQualityRelativeNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchExpression)) {
    body->insert(pair<string, string>("MatchExpression", *request->matchExpression));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    body->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetNodeProjectId)) {
    body->insert(pair<string, long>("TargetNodeProjectId", *request->targetNodeProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetNodeProjectName)) {
    body->insert(pair<string, string>("TargetNodeProjectName", *request->targetNodeProjectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQualityRelativeNode"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQualityRelativeNodeResponse(callApi(params, req, runtime));
}

DeleteQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRelativeNode(shared_ptr<DeleteQualityRelativeNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityRelativeNodeWithOptions(request, runtime);
}

DeleteQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRuleWithOptions(shared_ptr<DeleteQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQualityRule"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQualityRuleResponse(callApi(params, req, runtime));
}

DeleteQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRule(shared_ptr<DeleteQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityRuleWithOptions(request, runtime);
}

DeleteRemindResponse Alibabacloud_Dataworks-public20200518::Client::deleteRemindWithOptions(shared_ptr<DeleteRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->remindId)) {
    body->insert(pair<string, long>("RemindId", *request->remindId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRemind"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRemindResponse(callApi(params, req, runtime));
}

DeleteRemindResponse Alibabacloud_Dataworks-public20200518::Client::deleteRemind(shared_ptr<DeleteRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRemindWithOptions(request, runtime);
}

DeleteTableResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableWithOptions(shared_ptr<DeleteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appGuid)) {
    query->insert(pair<string, string>("AppGuid", *request->appGuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->envType)) {
    query->insert(pair<string, long>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schema)) {
    query->insert(pair<string, string>("Schema", *request->schema));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTable"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTableResponse(callApi(params, req, runtime));
}

DeleteTableResponse Alibabacloud_Dataworks-public20200518::Client::deleteTable(shared_ptr<DeleteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTableWithOptions(request, runtime);
}

DeleteTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableLevelWithOptions(shared_ptr<DeleteTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->levelId)) {
    query->insert(pair<string, long>("LevelId", *request->levelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTableLevel"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTableLevelResponse(callApi(params, req, runtime));
}

DeleteTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableLevel(shared_ptr<DeleteTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTableLevelWithOptions(request, runtime);
}

DeleteTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableThemeWithOptions(shared_ptr<DeleteTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->themeId)) {
    query->insert(pair<string, long>("ThemeId", *request->themeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTableTheme"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTableThemeResponse(callApi(params, req, runtime));
}

DeleteTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableTheme(shared_ptr<DeleteTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTableThemeWithOptions(request, runtime);
}

DeployDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deployDISyncTaskWithOptions(shared_ptr<DeployDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployDISyncTask"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployDISyncTaskResponse(callApi(params, req, runtime));
}

DeployDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deployDISyncTask(shared_ptr<DeployDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployDISyncTaskWithOptions(request, runtime);
}

DeployFileResponse Alibabacloud_Dataworks-public20200518::Client::deployFileWithOptions(shared_ptr<DeployFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

DeployFileResponse Alibabacloud_Dataworks-public20200518::Client::deployFile(shared_ptr<DeployFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployFileWithOptions(request, runtime);
}

DesensitizeDataResponse Alibabacloud_Dataworks-public20200518::Client::desensitizeDataWithOptions(shared_ptr<DesensitizeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DesensitizeData"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DesensitizeDataResponse(callApi(params, req, runtime));
}

DesensitizeDataResponse Alibabacloud_Dataworks-public20200518::Client::desensitizeData(shared_ptr<DesensitizeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return desensitizeDataWithOptions(request, runtime);
}

EstablishRelationTableToBusinessResponse Alibabacloud_Dataworks-public20200518::Client::establishRelationTableToBusinessWithOptions(shared_ptr<EstablishRelationTableToBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

EstablishRelationTableToBusinessResponse Alibabacloud_Dataworks-public20200518::Client::establishRelationTableToBusiness(shared_ptr<EstablishRelationTableToBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return establishRelationTableToBusinessWithOptions(request, runtime);
}

ExportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::exportDataSourcesWithOptions(shared_ptr<ExportDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportDataSources"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportDataSourcesResponse(callApi(params, req, runtime));
}

ExportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::exportDataSources(shared_ptr<ExportDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportDataSourcesWithOptions(request, runtime);
}

GenerateDISyncTaskConfigForCreatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForCreatingWithOptions(shared_ptr<GenerateDISyncTaskConfigForCreatingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskParam)) {
    query->insert(pair<string, string>("TaskParam", *request->taskParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateDISyncTaskConfigForCreating"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateDISyncTaskConfigForCreatingResponse(callApi(params, req, runtime));
}

GenerateDISyncTaskConfigForCreatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForCreating(shared_ptr<GenerateDISyncTaskConfigForCreatingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDISyncTaskConfigForCreatingWithOptions(request, runtime);
}

GenerateDISyncTaskConfigForUpdatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForUpdatingWithOptions(shared_ptr<GenerateDISyncTaskConfigForUpdatingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskParam)) {
    query->insert(pair<string, string>("TaskParam", *request->taskParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateDISyncTaskConfigForUpdating"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateDISyncTaskConfigForUpdatingResponse(callApi(params, req, runtime));
}

GenerateDISyncTaskConfigForUpdatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForUpdating(shared_ptr<GenerateDISyncTaskConfigForUpdatingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDISyncTaskConfigForUpdatingWithOptions(request, runtime);
}

GetBaselineResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineWithOptions(shared_ptr<GetBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baselineId)) {
    body->insert(pair<string, long>("BaselineId", *request->baselineId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBaseline"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBaselineResponse(callApi(params, req, runtime));
}

GetBaselineResponse Alibabacloud_Dataworks-public20200518::Client::getBaseline(shared_ptr<GetBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaselineWithOptions(request, runtime);
}

GetBaselineConfigResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineConfigWithOptions(shared_ptr<GetBaselineConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baselineId)) {
    body->insert(pair<string, long>("BaselineId", *request->baselineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBaselineConfig"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBaselineConfigResponse(callApi(params, req, runtime));
}

GetBaselineConfigResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineConfig(shared_ptr<GetBaselineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaselineConfigWithOptions(request, runtime);
}

GetBaselineKeyPathResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineKeyPathWithOptions(shared_ptr<GetBaselineKeyPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baselineId)) {
    body->insert(pair<string, long>("BaselineId", *request->baselineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizdate)) {
    body->insert(pair<string, string>("Bizdate", *request->bizdate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inGroupId)) {
    body->insert(pair<string, long>("InGroupId", *request->inGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBaselineKeyPath"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBaselineKeyPathResponse(callApi(params, req, runtime));
}

GetBaselineKeyPathResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineKeyPath(shared_ptr<GetBaselineKeyPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaselineKeyPathWithOptions(request, runtime);
}

GetBaselineStatusResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineStatusWithOptions(shared_ptr<GetBaselineStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baselineId)) {
    body->insert(pair<string, long>("BaselineId", *request->baselineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizdate)) {
    body->insert(pair<string, string>("Bizdate", *request->bizdate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->inGroupId)) {
    body->insert(pair<string, long>("InGroupId", *request->inGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBaselineStatus"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBaselineStatusResponse(callApi(params, req, runtime));
}

GetBaselineStatusResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineStatus(shared_ptr<GetBaselineStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaselineStatusWithOptions(request, runtime);
}

GetBusinessResponse Alibabacloud_Dataworks-public20200518::Client::getBusinessWithOptions(shared_ptr<GetBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

GetBusinessResponse Alibabacloud_Dataworks-public20200518::Client::getBusiness(shared_ptr<GetBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessWithOptions(request, runtime);
}

GetDDLJobStatusResponse Alibabacloud_Dataworks-public20200518::Client::getDDLJobStatusWithOptions(shared_ptr<GetDDLJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDDLJobStatus"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDDLJobStatusResponse(callApi(params, req, runtime));
}

GetDDLJobStatusResponse Alibabacloud_Dataworks-public20200518::Client::getDDLJobStatus(shared_ptr<GetDDLJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDDLJobStatusWithOptions(request, runtime);
}

GetDISyncInstanceInfoResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncInstanceInfoWithOptions(shared_ptr<GetDISyncInstanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDISyncInstanceInfo"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDISyncInstanceInfoResponse(callApi(params, req, runtime));
}

GetDISyncInstanceInfoResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncInstanceInfo(shared_ptr<GetDISyncInstanceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDISyncInstanceInfoWithOptions(request, runtime);
}

GetDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncTaskWithOptions(shared_ptr<GetDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDISyncTask"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDISyncTaskResponse(callApi(params, req, runtime));
}

GetDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncTask(shared_ptr<GetDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDISyncTaskWithOptions(request, runtime);
}

GetDagResponse Alibabacloud_Dataworks-public20200518::Client::getDagWithOptions(shared_ptr<GetDagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    body->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDag"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDagResponse(callApi(params, req, runtime));
}

GetDagResponse Alibabacloud_Dataworks-public20200518::Client::getDag(shared_ptr<GetDagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDagWithOptions(request, runtime);
}

GetDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApiWithOptions(shared_ptr<GetDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    body->insert(pair<string, long>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceApi"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceApiResponse(callApi(params, req, runtime));
}

GetDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApi(shared_ptr<GetDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApiWithOptions(request, runtime);
}

GetDataServiceApiTestResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApiTestWithOptions(shared_ptr<GetDataServiceApiTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceApiTest"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceApiTestResponse(callApi(params, req, runtime));
}

GetDataServiceApiTestResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApiTest(shared_ptr<GetDataServiceApiTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApiTestWithOptions(request, runtime);
}

GetDataServiceApplicationResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApplicationWithOptions(shared_ptr<GetDataServiceApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applicationId)) {
    body->insert(pair<string, long>("ApplicationId", *request->applicationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceApplication"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceApplicationResponse(callApi(params, req, runtime));
}

GetDataServiceApplicationResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApplication(shared_ptr<GetDataServiceApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApplicationWithOptions(request, runtime);
}

GetDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceFolderWithOptions(shared_ptr<GetDataServiceFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->folderId)) {
    body->insert(pair<string, long>("FolderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceFolder"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceFolderResponse(callApi(params, req, runtime));
}

GetDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceFolder(shared_ptr<GetDataServiceFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceFolderWithOptions(request, runtime);
}

GetDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceGroupWithOptions(shared_ptr<GetDataServiceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceGroup"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceGroupResponse(callApi(params, req, runtime));
}

GetDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceGroup(shared_ptr<GetDataServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceGroupWithOptions(request, runtime);
}

GetDataServicePublishedApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServicePublishedApiWithOptions(shared_ptr<GetDataServicePublishedApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    body->insert(pair<string, long>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServicePublishedApi"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServicePublishedApiResponse(callApi(params, req, runtime));
}

GetDataServicePublishedApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServicePublishedApi(shared_ptr<GetDataServicePublishedApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServicePublishedApiWithOptions(request, runtime);
}

GetDataSourceMetaResponse Alibabacloud_Dataworks-public20200518::Client::getDataSourceMetaWithOptions(shared_ptr<GetDataSourceMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasourceName)) {
    query->insert(pair<string, string>("DatasourceName", *request->datasourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataSourceMeta"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataSourceMetaResponse(callApi(params, req, runtime));
}

GetDataSourceMetaResponse Alibabacloud_Dataworks-public20200518::Client::getDataSourceMeta(shared_ptr<GetDataSourceMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataSourceMetaWithOptions(request, runtime);
}

GetDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::getDeploymentWithOptions(shared_ptr<GetDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("GetDeployment"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeploymentResponse(callApi(params, req, runtime));
}

GetDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::getDeployment(shared_ptr<GetDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeploymentWithOptions(request, runtime);
}

GetExtensionResponse Alibabacloud_Dataworks-public20200518::Client::getExtensionWithOptions(shared_ptr<GetExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extensionCode)) {
    query->insert(pair<string, string>("ExtensionCode", *request->extensionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExtension"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExtensionResponse(callApi(params, req, runtime));
}

GetExtensionResponse Alibabacloud_Dataworks-public20200518::Client::getExtension(shared_ptr<GetExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getExtensionWithOptions(request, runtime);
}

GetFileResponse Alibabacloud_Dataworks-public20200518::Client::getFileWithOptions(shared_ptr<GetFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

GetFileResponse Alibabacloud_Dataworks-public20200518::Client::getFile(shared_ptr<GetFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileWithOptions(request, runtime);
}

GetFileTypeStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getFileTypeStatisticWithOptions(shared_ptr<GetFileTypeStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileTypeStatistic"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileTypeStatisticResponse(callApi(params, req, runtime));
}

GetFileTypeStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getFileTypeStatistic(shared_ptr<GetFileTypeStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileTypeStatisticWithOptions(request, runtime);
}

GetFileVersionResponse Alibabacloud_Dataworks-public20200518::Client::getFileVersionWithOptions(shared_ptr<GetFileVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

GetFileVersionResponse Alibabacloud_Dataworks-public20200518::Client::getFileVersion(shared_ptr<GetFileVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileVersionWithOptions(request, runtime);
}

GetFolderResponse Alibabacloud_Dataworks-public20200518::Client::getFolderWithOptions(shared_ptr<GetFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

GetFolderResponse Alibabacloud_Dataworks-public20200518::Client::getFolder(shared_ptr<GetFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFolderWithOptions(request, runtime);
}

GetIDEEventDetailResponse Alibabacloud_Dataworks-public20200518::Client::getIDEEventDetailWithOptions(shared_ptr<GetIDEEventDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

GetIDEEventDetailResponse Alibabacloud_Dataworks-public20200518::Client::getIDEEventDetail(shared_ptr<GetIDEEventDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIDEEventDetailWithOptions(request, runtime);
}

GetInstanceResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstance"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceResponse(callApi(params, req, runtime));
}

GetInstanceResponse Alibabacloud_Dataworks-public20200518::Client::getInstance(shared_ptr<GetInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceWithOptions(request, runtime);
}

GetInstanceConsumeTimeRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceConsumeTimeRankWithOptions(shared_ptr<GetInstanceConsumeTimeRankRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizdate)) {
    body->insert(pair<string, string>("Bizdate", *request->bizdate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceConsumeTimeRank"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceConsumeTimeRankResponse(callApi(params, req, runtime));
}

GetInstanceConsumeTimeRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceConsumeTimeRank(shared_ptr<GetInstanceConsumeTimeRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceConsumeTimeRankWithOptions(request, runtime);
}

GetInstanceCountTrendResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceCountTrendWithOptions(shared_ptr<GetInstanceCountTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginDate)) {
    body->insert(pair<string, string>("BeginDate", *request->beginDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceCountTrend"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceCountTrendResponse(callApi(params, req, runtime));
}

GetInstanceCountTrendResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceCountTrend(shared_ptr<GetInstanceCountTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceCountTrendWithOptions(request, runtime);
}

GetInstanceErrorRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceErrorRankWithOptions(shared_ptr<GetInstanceErrorRankRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceErrorRank"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceErrorRankResponse(callApi(params, req, runtime));
}

GetInstanceErrorRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceErrorRank(shared_ptr<GetInstanceErrorRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceErrorRankWithOptions(request, runtime);
}

GetInstanceLogResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceLogWithOptions(shared_ptr<GetInstanceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceHistoryId)) {
    body->insert(pair<string, long>("InstanceHistoryId", *request->instanceHistoryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceLog"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceLogResponse(callApi(params, req, runtime));
}

GetInstanceLogResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceLog(shared_ptr<GetInstanceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceLogWithOptions(request, runtime);
}

GetInstanceStatusCountResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusCountWithOptions(shared_ptr<GetInstanceStatusCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizDate)) {
    body->insert(pair<string, string>("BizDate", *request->bizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceStatusCount"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceStatusCountResponse(callApi(params, req, runtime));
}

GetInstanceStatusCountResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusCount(shared_ptr<GetInstanceStatusCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceStatusCountWithOptions(request, runtime);
}

GetInstanceStatusStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusStatisticWithOptions(shared_ptr<GetInstanceStatusStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizDate)) {
    body->insert(pair<string, string>("BizDate", *request->bizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dagType)) {
    body->insert(pair<string, string>("DagType", *request->dagType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schedulerType)) {
    body->insert(pair<string, string>("SchedulerType", *request->schedulerType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceStatusStatistic"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceStatusStatisticResponse(callApi(params, req, runtime));
}

GetInstanceStatusStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusStatistic(shared_ptr<GetInstanceStatusStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceStatusStatisticWithOptions(request, runtime);
}

GetManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::getManualDagInstancesWithOptions(shared_ptr<GetManualDagInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dagId)) {
    body->insert(pair<string, string>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetManualDagInstances"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetManualDagInstancesResponse(callApi(params, req, runtime));
}

GetManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::getManualDagInstances(shared_ptr<GetManualDagInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getManualDagInstancesWithOptions(request, runtime);
}

GetMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaCategoryWithOptions(shared_ptr<GetMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentCategoryId)) {
    query->insert(pair<string, long>("ParentCategoryId", *request->parentCategoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaCategory"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaCategoryResponse(callApi(params, req, runtime));
}

GetMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaCategory(shared_ptr<GetMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaCategoryWithOptions(request, runtime);
}

GetMetaCollectionDetailResponse Alibabacloud_Dataworks-public20200518::Client::getMetaCollectionDetailWithOptions(shared_ptr<GetMetaCollectionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifiedName)) {
    query->insert(pair<string, string>("QualifiedName", *request->qualifiedName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaCollectionDetail"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaCollectionDetailResponse(callApi(params, req, runtime));
}

GetMetaCollectionDetailResponse Alibabacloud_Dataworks-public20200518::Client::getMetaCollectionDetail(shared_ptr<GetMetaCollectionDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaCollectionDetailWithOptions(request, runtime);
}

GetMetaColumnLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaColumnLineageWithOptions(shared_ptr<GetMetaColumnLineageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->columnGuid)) {
    query->insert(pair<string, string>("ColumnGuid", *request->columnGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->columnName)) {
    query->insert(pair<string, string>("ColumnName", *request->columnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaColumnLineage"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaColumnLineageResponse(callApi(params, req, runtime));
}

GetMetaColumnLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaColumnLineage(shared_ptr<GetMetaColumnLineageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaColumnLineageWithOptions(request, runtime);
}

GetMetaDBInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBInfoWithOptions(shared_ptr<GetMetaDBInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaDBInfo"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaDBInfoResponse(callApi(params, req, runtime));
}

GetMetaDBInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBInfo(shared_ptr<GetMetaDBInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaDBInfoWithOptions(request, runtime);
}

GetMetaDBTableListResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBTableListWithOptions(shared_ptr<GetMetaDBTableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appGuid)) {
    query->insert(pair<string, string>("AppGuid", *request->appGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaDBTableList"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaDBTableListResponse(callApi(params, req, runtime));
}

GetMetaDBTableListResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBTableList(shared_ptr<GetMetaDBTableListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaDBTableListWithOptions(request, runtime);
}

GetMetaTableBasicInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableBasicInfoWithOptions(shared_ptr<GetMetaTableBasicInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableBasicInfo"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableBasicInfoResponse(callApi(params, req, runtime));
}

GetMetaTableBasicInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableBasicInfo(shared_ptr<GetMetaTableBasicInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableBasicInfoWithOptions(request, runtime);
}

GetMetaTableChangeLogResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableChangeLogWithOptions(shared_ptr<GetMetaTableChangeLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeType)) {
    body->insert(pair<string, string>("ChangeType", *request->changeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    body->insert(pair<string, string>("ObjectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    body->insert(pair<string, string>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    body->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableChangeLog"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableChangeLogResponse(callApi(params, req, runtime));
}

GetMetaTableChangeLogResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableChangeLog(shared_ptr<GetMetaTableChangeLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableChangeLogWithOptions(request, runtime);
}

GetMetaTableColumnResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableColumnWithOptions(shared_ptr<GetMetaTableColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableColumn"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableColumnResponse(callApi(params, req, runtime));
}

GetMetaTableColumnResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableColumn(shared_ptr<GetMetaTableColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableColumnWithOptions(request, runtime);
}

GetMetaTableFullInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableFullInfoWithOptions(shared_ptr<GetMetaTableFullInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableFullInfo"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableFullInfoResponse(callApi(params, req, runtime));
}

GetMetaTableFullInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableFullInfo(shared_ptr<GetMetaTableFullInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableFullInfoWithOptions(request, runtime);
}

GetMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableIntroWikiWithOptions(shared_ptr<GetMetaTableIntroWikiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->wikiVersion)) {
    query->insert(pair<string, long>("WikiVersion", *request->wikiVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableIntroWiki"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableIntroWikiResponse(callApi(params, req, runtime));
}

GetMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableIntroWiki(shared_ptr<GetMetaTableIntroWikiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableIntroWikiWithOptions(request, runtime);
}

GetMetaTableLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableLineageWithOptions(shared_ptr<GetMetaTableLineageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPrimaryKey)) {
    query->insert(pair<string, string>("NextPrimaryKey", *request->nextPrimaryKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableLineage"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableLineageResponse(callApi(params, req, runtime));
}

GetMetaTableLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableLineage(shared_ptr<GetMetaTableLineageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableLineageWithOptions(request, runtime);
}

GetMetaTableListByCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableListByCategoryWithOptions(shared_ptr<GetMetaTableListByCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableListByCategory"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableListByCategoryResponse(callApi(params, req, runtime));
}

GetMetaTableListByCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableListByCategory(shared_ptr<GetMetaTableListByCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableListByCategoryWithOptions(request, runtime);
}

GetMetaTableOutputResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableOutputWithOptions(shared_ptr<GetMetaTableOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableOutput"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableOutputResponse(callApi(params, req, runtime));
}

GetMetaTableOutputResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableOutput(shared_ptr<GetMetaTableOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableOutputWithOptions(request, runtime);
}

GetMetaTablePartitionResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTablePartitionWithOptions(shared_ptr<GetMetaTablePartitionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetMetaTablePartitionShrinkRequest> request = make_shared<GetMetaTablePartitionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetMetaTablePartitionRequestSortCriterion>(tmpReq->sortCriterion)) {
    request->sortCriterionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sortCriterion, make_shared<string>("SortCriterion"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortCriterionShrink)) {
    query->insert(pair<string, string>("SortCriterion", *request->sortCriterionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTablePartition"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTablePartitionResponse(callApi(params, req, runtime));
}

GetMetaTablePartitionResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTablePartition(shared_ptr<GetMetaTablePartitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTablePartitionWithOptions(request, runtime);
}

GetMetaTableProducingTasksResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableProducingTasksWithOptions(shared_ptr<GetMetaTableProducingTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableProducingTasks"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableProducingTasksResponse(callApi(params, req, runtime));
}

GetMetaTableProducingTasksResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableProducingTasks(shared_ptr<GetMetaTableProducingTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableProducingTasksWithOptions(request, runtime);
}

GetMetaTableThemeLevelResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableThemeLevelWithOptions(shared_ptr<GetMetaTableThemeLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetaTableThemeLevel"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetaTableThemeLevelResponse(callApi(params, req, runtime));
}

GetMetaTableThemeLevelResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableThemeLevel(shared_ptr<GetMetaTableThemeLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableThemeLevelWithOptions(request, runtime);
}

GetMigrationProcessResponse Alibabacloud_Dataworks-public20200518::Client::getMigrationProcessWithOptions(shared_ptr<GetMigrationProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->migrationId)) {
    body->insert(pair<string, long>("MigrationId", *request->migrationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMigrationProcess"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMigrationProcessResponse(callApi(params, req, runtime));
}

GetMigrationProcessResponse Alibabacloud_Dataworks-public20200518::Client::getMigrationProcess(shared_ptr<GetMigrationProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMigrationProcessWithOptions(request, runtime);
}

GetMigrationSummaryResponse Alibabacloud_Dataworks-public20200518::Client::getMigrationSummaryWithOptions(shared_ptr<GetMigrationSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->migrationId)) {
    body->insert(pair<string, long>("MigrationId", *request->migrationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMigrationSummary"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMigrationSummaryResponse(callApi(params, req, runtime));
}

GetMigrationSummaryResponse Alibabacloud_Dataworks-public20200518::Client::getMigrationSummary(shared_ptr<GetMigrationSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMigrationSummaryWithOptions(request, runtime);
}

GetNodeResponse Alibabacloud_Dataworks-public20200518::Client::getNodeWithOptions(shared_ptr<GetNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNode"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeResponse(callApi(params, req, runtime));
}

GetNodeResponse Alibabacloud_Dataworks-public20200518::Client::getNode(shared_ptr<GetNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeWithOptions(request, runtime);
}

GetNodeChildrenResponse Alibabacloud_Dataworks-public20200518::Client::getNodeChildrenWithOptions(shared_ptr<GetNodeChildrenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodeChildren"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeChildrenResponse(callApi(params, req, runtime));
}

GetNodeChildrenResponse Alibabacloud_Dataworks-public20200518::Client::getNodeChildren(shared_ptr<GetNodeChildrenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeChildrenWithOptions(request, runtime);
}

GetNodeCodeResponse Alibabacloud_Dataworks-public20200518::Client::getNodeCodeWithOptions(shared_ptr<GetNodeCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodeCode"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeCodeResponse(callApi(params, req, runtime));
}

GetNodeCodeResponse Alibabacloud_Dataworks-public20200518::Client::getNodeCode(shared_ptr<GetNodeCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeCodeWithOptions(request, runtime);
}

GetNodeOnBaselineResponse Alibabacloud_Dataworks-public20200518::Client::getNodeOnBaselineWithOptions(shared_ptr<GetNodeOnBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baselineId)) {
    body->insert(pair<string, long>("BaselineId", *request->baselineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodeOnBaseline"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeOnBaselineResponse(callApi(params, req, runtime));
}

GetNodeOnBaselineResponse Alibabacloud_Dataworks-public20200518::Client::getNodeOnBaseline(shared_ptr<GetNodeOnBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeOnBaselineWithOptions(request, runtime);
}

GetNodeParentsResponse Alibabacloud_Dataworks-public20200518::Client::getNodeParentsWithOptions(shared_ptr<GetNodeParentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodeParents"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeParentsResponse(callApi(params, req, runtime));
}

GetNodeParentsResponse Alibabacloud_Dataworks-public20200518::Client::getNodeParents(shared_ptr<GetNodeParentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeParentsWithOptions(request, runtime);
}

GetNodeTypeListInfoResponse Alibabacloud_Dataworks-public20200518::Client::getNodeTypeListInfoWithOptions(shared_ptr<GetNodeTypeListInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locale)) {
    body->insert(pair<string, string>("Locale", *request->locale));
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
    {"action", boost::any(string("GetNodeTypeListInfo"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeTypeListInfoResponse(callApi(params, req, runtime));
}

GetNodeTypeListInfoResponse Alibabacloud_Dataworks-public20200518::Client::getNodeTypeListInfo(shared_ptr<GetNodeTypeListInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeTypeListInfoWithOptions(request, runtime);
}

GetOpRiskDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpRiskDataWithOptions(shared_ptr<GetOpRiskDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOpRiskData"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOpRiskDataResponse(callApi(params, req, runtime));
}

GetOpRiskDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpRiskData(shared_ptr<GetOpRiskDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOpRiskDataWithOptions(request, runtime);
}

GetOpSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpSensitiveDataWithOptions(shared_ptr<GetOpSensitiveDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOpSensitiveData"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOpSensitiveDataResponse(callApi(params, req, runtime));
}

GetOpSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpSensitiveData(shared_ptr<GetOpSensitiveDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOpSensitiveDataWithOptions(request, runtime);
}

GetOptionValueForProjectResponse Alibabacloud_Dataworks-public20200518::Client::getOptionValueForProjectWithOptions(shared_ptr<GetOptionValueForProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extensionCode)) {
    body->insert(pair<string, string>("ExtensionCode", *request->extensionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOptionValueForProject"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOptionValueForProjectResponse(callApi(params, req, runtime));
}

GetOptionValueForProjectResponse Alibabacloud_Dataworks-public20200518::Client::getOptionValueForProject(shared_ptr<GetOptionValueForProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOptionValueForProjectWithOptions(request, runtime);
}

GetPermissionApplyOrderDetailResponse Alibabacloud_Dataworks-public20200518::Client::getPermissionApplyOrderDetailWithOptions(shared_ptr<GetPermissionApplyOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPermissionApplyOrderDetail"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPermissionApplyOrderDetailResponse(callApi(params, req, runtime));
}

GetPermissionApplyOrderDetailResponse Alibabacloud_Dataworks-public20200518::Client::getPermissionApplyOrderDetail(shared_ptr<GetPermissionApplyOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPermissionApplyOrderDetailWithOptions(request, runtime);
}

GetProjectResponse Alibabacloud_Dataworks-public20200518::Client::getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProject"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectResponse(callApi(params, req, runtime));
}

GetProjectResponse Alibabacloud_Dataworks-public20200518::Client::getProject(shared_ptr<GetProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectWithOptions(request, runtime);
}

GetProjectDetailResponse Alibabacloud_Dataworks-public20200518::Client::getProjectDetailWithOptions(shared_ptr<GetProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectDetail"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectDetailResponse(callApi(params, req, runtime));
}

GetProjectDetailResponse Alibabacloud_Dataworks-public20200518::Client::getProjectDetail(shared_ptr<GetProjectDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectDetailWithOptions(request, runtime);
}

GetQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::getQualityEntityWithOptions(shared_ptr<GetQualityEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    body->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchExpression)) {
    body->insert(pair<string, string>("MatchExpression", *request->matchExpression));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    body->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualityEntity"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualityEntityResponse(callApi(params, req, runtime));
}

GetQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::getQualityEntity(shared_ptr<GetQualityEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityEntityWithOptions(request, runtime);
}

GetQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::getQualityFollowerWithOptions(shared_ptr<GetQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    body->insert(pair<string, long>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualityFollower"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualityFollowerResponse(callApi(params, req, runtime));
}

GetQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::getQualityFollower(shared_ptr<GetQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityFollowerWithOptions(request, runtime);
}

GetQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::getQualityRuleWithOptions(shared_ptr<GetQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualityRule"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualityRuleResponse(callApi(params, req, runtime));
}

GetQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::getQualityRule(shared_ptr<GetQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityRuleWithOptions(request, runtime);
}

GetRemindResponse Alibabacloud_Dataworks-public20200518::Client::getRemindWithOptions(shared_ptr<GetRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->remindId)) {
    body->insert(pair<string, long>("RemindId", *request->remindId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRemind"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRemindResponse(callApi(params, req, runtime));
}

GetRemindResponse Alibabacloud_Dataworks-public20200518::Client::getRemind(shared_ptr<GetRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRemindWithOptions(request, runtime);
}

GetSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getSensitiveDataWithOptions(shared_ptr<GetSensitiveDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSensitiveData"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSensitiveDataResponse(callApi(params, req, runtime));
}

GetSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getSensitiveData(shared_ptr<GetSensitiveDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSensitiveDataWithOptions(request, runtime);
}

GetSuccessInstanceTrendResponse Alibabacloud_Dataworks-public20200518::Client::getSuccessInstanceTrendWithOptions(shared_ptr<GetSuccessInstanceTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSuccessInstanceTrend"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSuccessInstanceTrendResponse(callApi(params, req, runtime));
}

GetSuccessInstanceTrendResponse Alibabacloud_Dataworks-public20200518::Client::getSuccessInstanceTrend(shared_ptr<GetSuccessInstanceTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSuccessInstanceTrendWithOptions(request, runtime);
}

GetTopicResponse Alibabacloud_Dataworks-public20200518::Client::getTopicWithOptions(shared_ptr<GetTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->topicId)) {
    body->insert(pair<string, long>("TopicId", *request->topicId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTopic"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTopicResponse(callApi(params, req, runtime));
}

GetTopicResponse Alibabacloud_Dataworks-public20200518::Client::getTopic(shared_ptr<GetTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopicWithOptions(request, runtime);
}

GetTopicInfluenceResponse Alibabacloud_Dataworks-public20200518::Client::getTopicInfluenceWithOptions(shared_ptr<GetTopicInfluenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->topicId)) {
    body->insert(pair<string, long>("TopicId", *request->topicId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTopicInfluence"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTopicInfluenceResponse(callApi(params, req, runtime));
}

GetTopicInfluenceResponse Alibabacloud_Dataworks-public20200518::Client::getTopicInfluence(shared_ptr<GetTopicInfluenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopicInfluenceWithOptions(request, runtime);
}

ImportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::importDataSourcesWithOptions(shared_ptr<ImportDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSources)) {
    query->insert(pair<string, string>("DataSources", *request->dataSources));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportDataSources"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportDataSourcesResponse(callApi(params, req, runtime));
}

ImportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::importDataSources(shared_ptr<ImportDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importDataSourcesWithOptions(request, runtime);
}

ListAlertMessagesResponse Alibabacloud_Dataworks-public20200518::Client::listAlertMessagesWithOptions(shared_ptr<ListAlertMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertMethods)) {
    body->insert(pair<string, string>("AlertMethods", *request->alertMethods));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertRuleTypes)) {
    body->insert(pair<string, string>("AlertRuleTypes", *request->alertRuleTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertUser)) {
    body->insert(pair<string, string>("AlertUser", *request->alertUser));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->baselineId)) {
    body->insert(pair<string, long>("BaselineId", *request->baselineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTime)) {
    body->insert(pair<string, string>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->remindId)) {
    body->insert(pair<string, long>("RemindId", *request->remindId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlertMessages"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlertMessagesResponse(callApi(params, req, runtime));
}

ListAlertMessagesResponse Alibabacloud_Dataworks-public20200518::Client::listAlertMessages(shared_ptr<ListAlertMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlertMessagesWithOptions(request, runtime);
}

ListBaselineConfigsResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineConfigsWithOptions(shared_ptr<ListBaselineConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineTypes)) {
    body->insert(pair<string, string>("BaselineTypes", *request->baselineTypes));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->priority)) {
    body->insert(pair<string, string>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchText)) {
    body->insert(pair<string, string>("SearchText", *request->searchText));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useflag)) {
    body->insert(pair<string, bool>("Useflag", *request->useflag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBaselineConfigs"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBaselineConfigsResponse(callApi(params, req, runtime));
}

ListBaselineConfigsResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineConfigs(shared_ptr<ListBaselineConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBaselineConfigsWithOptions(request, runtime);
}

ListBaselineStatusesResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineStatusesWithOptions(shared_ptr<ListBaselineStatusesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineTypes)) {
    body->insert(pair<string, string>("BaselineTypes", *request->baselineTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizdate)) {
    body->insert(pair<string, string>("Bizdate", *request->bizdate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->finishStatus)) {
    body->insert(pair<string, string>("FinishStatus", *request->finishStatus));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->priority)) {
    body->insert(pair<string, string>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchText)) {
    body->insert(pair<string, string>("SearchText", *request->searchText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topicId)) {
    body->insert(pair<string, long>("TopicId", *request->topicId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBaselineStatuses"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBaselineStatusesResponse(callApi(params, req, runtime));
}

ListBaselineStatusesResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineStatuses(shared_ptr<ListBaselineStatusesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBaselineStatusesWithOptions(request, runtime);
}

ListBaselinesResponse Alibabacloud_Dataworks-public20200518::Client::listBaselinesWithOptions(shared_ptr<ListBaselinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineTypes)) {
    body->insert(pair<string, string>("BaselineTypes", *request->baselineTypes));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    body->insert(pair<string, bool>("Enable", *request->enable));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->priority)) {
    body->insert(pair<string, string>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchText)) {
    body->insert(pair<string, string>("SearchText", *request->searchText));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBaselines"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBaselinesResponse(callApi(params, req, runtime));
}

ListBaselinesResponse Alibabacloud_Dataworks-public20200518::Client::listBaselines(shared_ptr<ListBaselinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBaselinesWithOptions(request, runtime);
}

ListBusinessResponse Alibabacloud_Dataworks-public20200518::Client::listBusinessWithOptions(shared_ptr<ListBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

ListBusinessResponse Alibabacloud_Dataworks-public20200518::Client::listBusiness(shared_ptr<ListBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBusinessWithOptions(request, runtime);
}

ListCalcEnginesResponse Alibabacloud_Dataworks-public20200518::Client::listCalcEnginesWithOptions(shared_ptr<ListCalcEnginesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calcEngineType)) {
    query->insert(pair<string, string>("CalcEngineType", *request->calcEngineType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCalcEngines"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCalcEnginesResponse(callApi(params, req, runtime));
}

ListCalcEnginesResponse Alibabacloud_Dataworks-public20200518::Client::listCalcEngines(shared_ptr<ListCalcEnginesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCalcEnginesWithOptions(request, runtime);
}

ListConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::listConnectionsWithOptions(shared_ptr<ListConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConnections"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConnectionsResponse(callApi(params, req, runtime));
}

ListConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::listConnections(shared_ptr<ListConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnectionsWithOptions(request, runtime);
}

ListDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::listDIProjectConfigWithOptions(shared_ptr<ListDIProjectConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDIProjectConfig"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDIProjectConfigResponse(callApi(params, req, runtime));
}

ListDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::listDIProjectConfig(shared_ptr<ListDIProjectConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDIProjectConfigWithOptions(request, runtime);
}

ListDagsResponse Alibabacloud_Dataworks-public20200518::Client::listDagsWithOptions(shared_ptr<ListDagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->opSeq)) {
    body->insert(pair<string, long>("OpSeq", *request->opSeq));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDags"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDagsResponse(callApi(params, req, runtime));
}

ListDagsResponse Alibabacloud_Dataworks-public20200518::Client::listDags(shared_ptr<ListDagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDagsWithOptions(request, runtime);
}

ListDataServiceApiAuthoritiesResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApiAuthoritiesWithOptions(shared_ptr<ListDataServiceApiAuthoritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiNameKeyword)) {
    body->insert(pair<string, string>("ApiNameKeyword", *request->apiNameKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceApiAuthorities"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceApiAuthoritiesResponse(callApi(params, req, runtime));
}

ListDataServiceApiAuthoritiesResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApiAuthorities(shared_ptr<ListDataServiceApiAuthoritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApiAuthoritiesWithOptions(request, runtime);
}

ListDataServiceApiTestResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApiTestWithOptions(shared_ptr<ListDataServiceApiTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceApiTest"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceApiTestResponse(callApi(params, req, runtime));
}

ListDataServiceApiTestResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApiTest(shared_ptr<ListDataServiceApiTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApiTestWithOptions(request, runtime);
}

ListDataServiceApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApisWithOptions(shared_ptr<ListDataServiceApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiNameKeyword)) {
    body->insert(pair<string, string>("ApiNameKeyword", *request->apiNameKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiPathKeyword)) {
    body->insert(pair<string, string>("ApiPathKeyword", *request->apiPathKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorId)) {
    body->insert(pair<string, string>("CreatorId", *request->creatorId));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceApis"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceApisResponse(callApi(params, req, runtime));
}

ListDataServiceApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApis(shared_ptr<ListDataServiceApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApisWithOptions(request, runtime);
}

ListDataServiceApplicationsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApplicationsWithOptions(shared_ptr<ListDataServiceApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdList)) {
    body->insert(pair<string, string>("ProjectIdList", *request->projectIdList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceApplications"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceApplicationsResponse(callApi(params, req, runtime));
}

ListDataServiceApplicationsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApplications(shared_ptr<ListDataServiceApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApplicationsWithOptions(request, runtime);
}

ListDataServiceAuthorizedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceAuthorizedApisWithOptions(shared_ptr<ListDataServiceAuthorizedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiNameKeyword)) {
    body->insert(pair<string, string>("ApiNameKeyword", *request->apiNameKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceAuthorizedApis"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceAuthorizedApisResponse(callApi(params, req, runtime));
}

ListDataServiceAuthorizedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceAuthorizedApis(shared_ptr<ListDataServiceAuthorizedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceAuthorizedApisWithOptions(request, runtime);
}

ListDataServiceFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceFoldersWithOptions(shared_ptr<ListDataServiceFoldersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderNameKeyword)) {
    body->insert(pair<string, string>("FolderNameKeyword", *request->folderNameKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceFolders"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceFoldersResponse(callApi(params, req, runtime));
}

ListDataServiceFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceFolders(shared_ptr<ListDataServiceFoldersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceFoldersWithOptions(request, runtime);
}

ListDataServiceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceGroupsWithOptions(shared_ptr<ListDataServiceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupNameKeyword)) {
    body->insert(pair<string, string>("GroupNameKeyword", *request->groupNameKeyword));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServiceGroups"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServiceGroupsResponse(callApi(params, req, runtime));
}

ListDataServiceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceGroups(shared_ptr<ListDataServiceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceGroupsWithOptions(request, runtime);
}

ListDataServicePublishedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServicePublishedApisWithOptions(shared_ptr<ListDataServicePublishedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiNameKeyword)) {
    body->insert(pair<string, string>("ApiNameKeyword", *request->apiNameKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiPathKeyword)) {
    body->insert(pair<string, string>("ApiPathKeyword", *request->apiPathKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorId)) {
    body->insert(pair<string, string>("CreatorId", *request->creatorId));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataServicePublishedApis"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataServicePublishedApisResponse(callApi(params, req, runtime));
}

ListDataServicePublishedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServicePublishedApis(shared_ptr<ListDataServicePublishedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServicePublishedApisWithOptions(request, runtime);
}

ListDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::listDataSourcesWithOptions(shared_ptr<ListDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSources"))},
    {"version", boost::any(string("2020-05-18"))},
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

ListDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::listDataSources(shared_ptr<ListDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSourcesWithOptions(request, runtime);
}

ListDeploymentsResponse Alibabacloud_Dataworks-public20200518::Client::listDeploymentsWithOptions(shared_ptr<ListDeploymentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ListDeployments"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeploymentsResponse(callApi(params, req, runtime));
}

ListDeploymentsResponse Alibabacloud_Dataworks-public20200518::Client::listDeployments(shared_ptr<ListDeploymentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeploymentsWithOptions(request, runtime);
}

ListEnabledExtensionsForProjectResponse Alibabacloud_Dataworks-public20200518::Client::listEnabledExtensionsForProjectWithOptions(shared_ptr<ListEnabledExtensionsForProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    body->insert(pair<string, string>("EventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    body->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnabledExtensionsForProject"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnabledExtensionsForProjectResponse(callApi(params, req, runtime));
}

ListEnabledExtensionsForProjectResponse Alibabacloud_Dataworks-public20200518::Client::listEnabledExtensionsForProject(shared_ptr<ListEnabledExtensionsForProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnabledExtensionsForProjectWithOptions(request, runtime);
}

ListExtensionsResponse Alibabacloud_Dataworks-public20200518::Client::listExtensionsWithOptions(shared_ptr<ListExtensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExtensions"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExtensionsResponse(callApi(params, req, runtime));
}

ListExtensionsResponse Alibabacloud_Dataworks-public20200518::Client::listExtensions(shared_ptr<ListExtensionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listExtensionsWithOptions(request, runtime);
}

ListFileTypeResponse Alibabacloud_Dataworks-public20200518::Client::listFileTypeWithOptions(shared_ptr<ListFileTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locale)) {
    body->insert(pair<string, string>("Locale", *request->locale));
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
    {"action", boost::any(string("ListFileType"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFileTypeResponse(callApi(params, req, runtime));
}

ListFileTypeResponse Alibabacloud_Dataworks-public20200518::Client::listFileType(shared_ptr<ListFileTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFileTypeWithOptions(request, runtime);
}

ListFileVersionsResponse Alibabacloud_Dataworks-public20200518::Client::listFileVersionsWithOptions(shared_ptr<ListFileVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

ListFileVersionsResponse Alibabacloud_Dataworks-public20200518::Client::listFileVersions(shared_ptr<ListFileVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFileVersionsWithOptions(request, runtime);
}

ListFilesResponse Alibabacloud_Dataworks-public20200518::Client::listFilesWithOptions(shared_ptr<ListFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"version", boost::any(string("2020-05-18"))},
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

ListFilesResponse Alibabacloud_Dataworks-public20200518::Client::listFiles(shared_ptr<ListFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFilesWithOptions(request, runtime);
}

ListFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listFoldersWithOptions(shared_ptr<ListFoldersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

ListFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listFolders(shared_ptr<ListFoldersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFoldersWithOptions(request, runtime);
}

ListInnerNodesResponse Alibabacloud_Dataworks-public20200518::Client::listInnerNodesWithOptions(shared_ptr<ListInnerNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    body->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outerNodeId)) {
    body->insert(pair<string, long>("OuterNodeId", *request->outerNodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programType)) {
    body->insert(pair<string, string>("ProgramType", *request->programType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInnerNodes"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInnerNodesResponse(callApi(params, req, runtime));
}

ListInnerNodesResponse Alibabacloud_Dataworks-public20200518::Client::listInnerNodes(shared_ptr<ListInnerNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInnerNodesWithOptions(request, runtime);
}

ListInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listInstanceAmountWithOptions(shared_ptr<ListInstanceAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginDate)) {
    body->insert(pair<string, string>("BeginDate", *request->beginDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceAmount"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceAmountResponse(callApi(params, req, runtime));
}

ListInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listInstanceAmount(shared_ptr<ListInstanceAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceAmountWithOptions(request, runtime);
}

ListInstanceHistoryResponse Alibabacloud_Dataworks-public20200518::Client::listInstanceHistoryWithOptions(shared_ptr<ListInstanceHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceHistory"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceHistoryResponse(callApi(params, req, runtime));
}

ListInstanceHistoryResponse Alibabacloud_Dataworks-public20200518::Client::listInstanceHistory(shared_ptr<ListInstanceHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceHistoryWithOptions(request, runtime);
}

ListInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginBizdate)) {
    body->insert(pair<string, string>("BeginBizdate", *request->beginBizdate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizdate)) {
    body->insert(pair<string, string>("Bizdate", *request->bizdate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    body->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endBizdate)) {
    body->insert(pair<string, string>("EndBizdate", *request->endBizdate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    body->insert(pair<string, string>("NodeName", *request->nodeName));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->programType)) {
    body->insert(pair<string, string>("ProgramType", *request->programType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesWithOptions(request, runtime);
}

ListLineageResponse Alibabacloud_Dataworks-public20200518::Client::listLineageWithOptions(shared_ptr<ListLineageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityQualifiedName)) {
    query->insert(pair<string, string>("EntityQualifiedName", *request->entityQualifiedName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLineage"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLineageResponse(callApi(params, req, runtime));
}

ListLineageResponse Alibabacloud_Dataworks-public20200518::Client::listLineage(shared_ptr<ListLineageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLineageWithOptions(request, runtime);
}

ListManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listManualDagInstancesWithOptions(shared_ptr<ListManualDagInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dagId)) {
    body->insert(pair<string, string>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListManualDagInstances"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListManualDagInstancesResponse(callApi(params, req, runtime));
}

ListManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listManualDagInstances(shared_ptr<ListManualDagInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listManualDagInstancesWithOptions(request, runtime);
}

ListMetaCollectionEntitiesResponse Alibabacloud_Dataworks-public20200518::Client::listMetaCollectionEntitiesWithOptions(shared_ptr<ListMetaCollectionEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionQualifiedName)) {
    query->insert(pair<string, string>("CollectionQualifiedName", *request->collectionQualifiedName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMetaCollectionEntities"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMetaCollectionEntitiesResponse(callApi(params, req, runtime));
}

ListMetaCollectionEntitiesResponse Alibabacloud_Dataworks-public20200518::Client::listMetaCollectionEntities(shared_ptr<ListMetaCollectionEntitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMetaCollectionEntitiesWithOptions(request, runtime);
}

ListMetaCollectionsResponse Alibabacloud_Dataworks-public20200518::Client::listMetaCollectionsWithOptions(shared_ptr<ListMetaCollectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->administrator)) {
    query->insert(pair<string, string>("Administrator", *request->administrator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionType)) {
    query->insert(pair<string, string>("CollectionType", *request->collectionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    query->insert(pair<string, string>("Creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->follower)) {
    query->insert(pair<string, string>("Follower", *request->follower));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentQualifiedName)) {
    query->insert(pair<string, string>("ParentQualifiedName", *request->parentQualifiedName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMetaCollections"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMetaCollectionsResponse(callApi(params, req, runtime));
}

ListMetaCollectionsResponse Alibabacloud_Dataworks-public20200518::Client::listMetaCollections(shared_ptr<ListMetaCollectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMetaCollectionsWithOptions(request, runtime);
}

ListMetaDBResponse Alibabacloud_Dataworks-public20200518::Client::listMetaDBWithOptions(shared_ptr<ListMetaDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMetaDB"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMetaDBResponse(callApi(params, req, runtime));
}

ListMetaDBResponse Alibabacloud_Dataworks-public20200518::Client::listMetaDB(shared_ptr<ListMetaDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMetaDBWithOptions(request, runtime);
}

ListMigrationsResponse Alibabacloud_Dataworks-public20200518::Client::listMigrationsWithOptions(shared_ptr<ListMigrationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationType)) {
    body->insert(pair<string, string>("MigrationType", *request->migrationType));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMigrations"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMigrationsResponse(callApi(params, req, runtime));
}

ListMigrationsResponse Alibabacloud_Dataworks-public20200518::Client::listMigrations(shared_ptr<ListMigrationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMigrationsWithOptions(request, runtime);
}

ListNodeIOResponse Alibabacloud_Dataworks-public20200518::Client::listNodeIOWithOptions(shared_ptr<ListNodeIORequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ioType)) {
    body->insert(pair<string, string>("IoType", *request->ioType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodeIO"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodeIOResponse(callApi(params, req, runtime));
}

ListNodeIOResponse Alibabacloud_Dataworks-public20200518::Client::listNodeIO(shared_ptr<ListNodeIORequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodeIOWithOptions(request, runtime);
}

ListNodeInputOrOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodeInputOrOutputWithOptions(shared_ptr<ListNodeInputOrOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ioType)) {
    body->insert(pair<string, string>("IoType", *request->ioType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodeInputOrOutput"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodeInputOrOutputResponse(callApi(params, req, runtime));
}

ListNodeInputOrOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodeInputOrOutput(shared_ptr<ListNodeInputOrOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodeInputOrOutputWithOptions(request, runtime);
}

ListNodesResponse Alibabacloud_Dataworks-public20200518::Client::listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    body->insert(pair<string, string>("NodeName", *request->nodeName));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->programType)) {
    body->insert(pair<string, string>("ProgramType", *request->programType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodes"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodesResponse(callApi(params, req, runtime));
}

ListNodesResponse Alibabacloud_Dataworks-public20200518::Client::listNodes(shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesWithOptions(request, runtime);
}

ListNodesByBaselineResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByBaselineWithOptions(shared_ptr<ListNodesByBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baselineId)) {
    body->insert(pair<string, long>("BaselineId", *request->baselineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodesByBaseline"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodesByBaselineResponse(callApi(params, req, runtime));
}

ListNodesByBaselineResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByBaseline(shared_ptr<ListNodesByBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesByBaselineWithOptions(request, runtime);
}

ListNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByOutputWithOptions(shared_ptr<ListNodesByOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outputs)) {
    body->insert(pair<string, string>("Outputs", *request->outputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodesByOutput"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodesByOutputResponse(callApi(params, req, runtime));
}

ListNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByOutput(shared_ptr<ListNodesByOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesByOutputWithOptions(request, runtime);
}

ListPermissionApplyOrdersResponse Alibabacloud_Dataworks-public20200518::Client::listPermissionApplyOrdersWithOptions(shared_ptr<ListPermissionApplyOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engineType)) {
    query->insert(pair<string, string>("EngineType", *request->engineType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flowStatus)) {
    query->insert(pair<string, long>("FlowStatus", *request->flowStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxComputeProjectName)) {
    query->insert(pair<string, string>("MaxComputeProjectName", *request->maxComputeProjectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderType)) {
    query->insert(pair<string, long>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->queryType)) {
    query->insert(pair<string, long>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workspaceId)) {
    query->insert(pair<string, long>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPermissionApplyOrders"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPermissionApplyOrdersResponse(callApi(params, req, runtime));
}

ListPermissionApplyOrdersResponse Alibabacloud_Dataworks-public20200518::Client::listPermissionApplyOrders(shared_ptr<ListPermissionApplyOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPermissionApplyOrdersWithOptions(request, runtime);
}

ListProgramTypeCountResponse Alibabacloud_Dataworks-public20200518::Client::listProgramTypeCountWithOptions(shared_ptr<ListProgramTypeCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProgramTypeCount"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProgramTypeCountResponse(callApi(params, req, runtime));
}

ListProgramTypeCountResponse Alibabacloud_Dataworks-public20200518::Client::listProgramTypeCount(shared_ptr<ListProgramTypeCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProgramTypeCountWithOptions(request, runtime);
}

ListProjectIdsResponse Alibabacloud_Dataworks-public20200518::Client::listProjectIdsWithOptions(shared_ptr<ListProjectIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectIds"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectIdsResponse(callApi(params, req, runtime));
}

ListProjectIdsResponse Alibabacloud_Dataworks-public20200518::Client::listProjectIds(shared_ptr<ListProjectIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectIdsWithOptions(request, runtime);
}

ListProjectMembersResponse Alibabacloud_Dataworks-public20200518::Client::listProjectMembersWithOptions(shared_ptr<ListProjectMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectMembers"))},
    {"version", boost::any(string("2020-05-18"))},
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

ListProjectMembersResponse Alibabacloud_Dataworks-public20200518::Client::listProjectMembers(shared_ptr<ListProjectMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectMembersWithOptions(request, runtime);
}

ListProjectRolesResponse Alibabacloud_Dataworks-public20200518::Client::listProjectRolesWithOptions(shared_ptr<ListProjectRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectRoles"))},
    {"version", boost::any(string("2020-05-18"))},
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

ListProjectRolesResponse Alibabacloud_Dataworks-public20200518::Client::listProjectRoles(shared_ptr<ListProjectRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectRolesWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_Dataworks-public20200518::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProjectsShrinkRequest> request = make_shared<ListProjectsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListProjectsRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2020-05-18"))},
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

ListProjectsResponse Alibabacloud_Dataworks-public20200518::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(request, runtime);
}

ListQualityResultsByEntityResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByEntityWithOptions(shared_ptr<ListQualityResultsByEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    body->insert(pair<string, long>("EntityId", *request->entityId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    body->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQualityResultsByEntity"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQualityResultsByEntityResponse(callApi(params, req, runtime));
}

ListQualityResultsByEntityResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByEntity(shared_ptr<ListQualityResultsByEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQualityResultsByEntityWithOptions(request, runtime);
}

ListQualityResultsByRuleResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByRuleWithOptions(shared_ptr<ListQualityResultsByRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("EndDate", *request->endDate));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    body->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQualityResultsByRule"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQualityResultsByRuleResponse(callApi(params, req, runtime));
}

ListQualityResultsByRuleResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByRule(shared_ptr<ListQualityResultsByRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQualityResultsByRuleWithOptions(request, runtime);
}

ListQualityRulesResponse Alibabacloud_Dataworks-public20200518::Client::listQualityRulesWithOptions(shared_ptr<ListQualityRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    body->insert(pair<string, long>("EntityId", *request->entityId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQualityRules"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQualityRulesResponse(callApi(params, req, runtime));
}

ListQualityRulesResponse Alibabacloud_Dataworks-public20200518::Client::listQualityRules(shared_ptr<ListQualityRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQualityRulesWithOptions(request, runtime);
}

ListRefDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::listRefDISyncTasksWithOptions(shared_ptr<ListRefDISyncTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasourceName)) {
    query->insert(pair<string, string>("DatasourceName", *request->datasourceName));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->refType)) {
    query->insert(pair<string, string>("RefType", *request->refType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRefDISyncTasks"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRefDISyncTasksResponse(callApi(params, req, runtime));
}

ListRefDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::listRefDISyncTasks(shared_ptr<ListRefDISyncTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRefDISyncTasksWithOptions(request, runtime);
}

ListRemindsResponse Alibabacloud_Dataworks-public20200518::Client::listRemindsWithOptions(shared_ptr<ListRemindsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertTarget)) {
    body->insert(pair<string, string>("AlertTarget", *request->alertTarget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->founder)) {
    body->insert(pair<string, string>("Founder", *request->founder));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remindTypes)) {
    body->insert(pair<string, string>("RemindTypes", *request->remindTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchText)) {
    body->insert(pair<string, string>("SearchText", *request->searchText));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListReminds"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRemindsResponse(callApi(params, req, runtime));
}

ListRemindsResponse Alibabacloud_Dataworks-public20200518::Client::listReminds(shared_ptr<ListRemindsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRemindsWithOptions(request, runtime);
}

ListResourceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listResourceGroupsWithOptions(shared_ptr<ListResourceGroupsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListResourceGroupsShrinkRequest> request = make_shared<ListResourceGroupsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListResourceGroupsRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizExtKey)) {
    query->insert(pair<string, string>("BizExtKey", *request->bizExtKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceGroupType)) {
    query->insert(pair<string, long>("ResourceGroupType", *request->resourceGroupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceManagerResourceGroupId)) {
    query->insert(pair<string, string>("ResourceManagerResourceGroupId", *request->resourceManagerResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceGroups"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceGroupsResponse(callApi(params, req, runtime));
}

ListResourceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listResourceGroups(shared_ptr<ListResourceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceGroupsWithOptions(request, runtime);
}

ListShiftPersonnelsResponse Alibabacloud_Dataworks-public20200518::Client::listShiftPersonnelsWithOptions(shared_ptr<ListShiftPersonnelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    body->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shiftPersonUID)) {
    body->insert(pair<string, string>("ShiftPersonUID", *request->shiftPersonUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shiftScheduleIdentifier)) {
    body->insert(pair<string, string>("ShiftScheduleIdentifier", *request->shiftScheduleIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    body->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListShiftPersonnels"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListShiftPersonnelsResponse(callApi(params, req, runtime));
}

ListShiftPersonnelsResponse Alibabacloud_Dataworks-public20200518::Client::listShiftPersonnels(shared_ptr<ListShiftPersonnelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listShiftPersonnelsWithOptions(request, runtime);
}

ListShiftSchedulesResponse Alibabacloud_Dataworks-public20200518::Client::listShiftSchedulesWithOptions(shared_ptr<ListShiftSchedulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shiftScheduleName)) {
    body->insert(pair<string, string>("ShiftScheduleName", *request->shiftScheduleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListShiftSchedules"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListShiftSchedulesResponse(callApi(params, req, runtime));
}

ListShiftSchedulesResponse Alibabacloud_Dataworks-public20200518::Client::listShiftSchedules(shared_ptr<ListShiftSchedulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listShiftSchedulesWithOptions(request, runtime);
}

ListSuccessInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listSuccessInstanceAmountWithOptions(shared_ptr<ListSuccessInstanceAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSuccessInstanceAmount"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSuccessInstanceAmountResponse(callApi(params, req, runtime));
}

ListSuccessInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listSuccessInstanceAmount(shared_ptr<ListSuccessInstanceAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSuccessInstanceAmountWithOptions(request, runtime);
}

ListTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::listTableLevelWithOptions(shared_ptr<ListTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTableLevel"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTableLevelResponse(callApi(params, req, runtime));
}

ListTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::listTableLevel(shared_ptr<ListTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTableLevelWithOptions(request, runtime);
}

ListTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::listTableThemeWithOptions(shared_ptr<ListTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTableTheme"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTableThemeResponse(callApi(params, req, runtime));
}

ListTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::listTableTheme(shared_ptr<ListTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTableThemeWithOptions(request, runtime);
}

ListTopicsResponse Alibabacloud_Dataworks-public20200518::Client::listTopicsWithOptions(shared_ptr<ListTopicsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTime)) {
    body->insert(pair<string, string>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("InstanceId", *request->instanceId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->topicStatuses)) {
    body->insert(pair<string, string>("TopicStatuses", *request->topicStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicTypes)) {
    body->insert(pair<string, string>("TopicTypes", *request->topicTypes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTopics"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTopicsResponse(callApi(params, req, runtime));
}

ListTopicsResponse Alibabacloud_Dataworks-public20200518::Client::listTopics(shared_ptr<ListTopicsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTopicsWithOptions(request, runtime);
}

MountDirectoryResponse Alibabacloud_Dataworks-public20200518::Client::mountDirectoryWithOptions(shared_ptr<MountDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    body->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    body->insert(pair<string, string>("TargetType", *request->targetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    body->insert(pair<string, string>("TargetUserId", *request->targetUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MountDirectory"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MountDirectoryResponse(callApi(params, req, runtime));
}

MountDirectoryResponse Alibabacloud_Dataworks-public20200518::Client::mountDirectory(shared_ptr<MountDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mountDirectoryWithOptions(request, runtime);
}

OfflineNodeResponse Alibabacloud_Dataworks-public20200518::Client::offlineNodeWithOptions(shared_ptr<OfflineNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OfflineNode"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OfflineNodeResponse(callApi(params, req, runtime));
}

OfflineNodeResponse Alibabacloud_Dataworks-public20200518::Client::offlineNode(shared_ptr<OfflineNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return offlineNodeWithOptions(request, runtime);
}

PublishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::publishDataServiceApiWithOptions(shared_ptr<PublishDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    body->insert(pair<string, long>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishDataServiceApi"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishDataServiceApiResponse(callApi(params, req, runtime));
}

PublishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::publishDataServiceApi(shared_ptr<PublishDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishDataServiceApiWithOptions(request, runtime);
}

QueryDISyncTaskConfigProcessResultResponse Alibabacloud_Dataworks-public20200518::Client::queryDISyncTaskConfigProcessResultWithOptions(shared_ptr<QueryDISyncTaskConfigProcessResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asyncProcessId)) {
    query->insert(pair<string, long>("AsyncProcessId", *request->asyncProcessId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDISyncTaskConfigProcessResult"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDISyncTaskConfigProcessResultResponse(callApi(params, req, runtime));
}

QueryDISyncTaskConfigProcessResultResponse Alibabacloud_Dataworks-public20200518::Client::queryDISyncTaskConfigProcessResult(shared_ptr<QueryDISyncTaskConfigProcessResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDISyncTaskConfigProcessResultWithOptions(request, runtime);
}

QueryPublicModelEngineResponse Alibabacloud_Dataworks-public20200518::Client::queryPublicModelEngineWithOptions(shared_ptr<QueryPublicModelEngineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPublicModelEngine"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPublicModelEngineResponse(callApi(params, req, runtime));
}

QueryPublicModelEngineResponse Alibabacloud_Dataworks-public20200518::Client::queryPublicModelEngine(shared_ptr<QueryPublicModelEngineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPublicModelEngineWithOptions(request, runtime);
}

RegisterLineageRelationResponse Alibabacloud_Dataworks-public20200518::Client::registerLineageRelationWithOptions(shared_ptr<RegisterLineageRelationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RegisterLineageRelationShrinkRequest> request = make_shared<RegisterLineageRelationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<LineageRelationRegisterVO>(tmpReq->lineageRelationRegisterVO)) {
    request->lineageRelationRegisterVOShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lineageRelationRegisterVO, make_shared<string>("LineageRelationRegisterVO"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lineageRelationRegisterVOShrink)) {
    body->insert(pair<string, string>("LineageRelationRegisterVO", *request->lineageRelationRegisterVOShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterLineageRelation"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterLineageRelationResponse(callApi(params, req, runtime));
}

RegisterLineageRelationResponse Alibabacloud_Dataworks-public20200518::Client::registerLineageRelation(shared_ptr<RegisterLineageRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerLineageRelationWithOptions(request, runtime);
}

RemoveProjectMemberFromRoleResponse Alibabacloud_Dataworks-public20200518::Client::removeProjectMemberFromRoleWithOptions(shared_ptr<RemoveProjectMemberFromRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleCode)) {
    query->insert(pair<string, string>("RoleCode", *request->roleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveProjectMemberFromRole"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveProjectMemberFromRoleResponse(callApi(params, req, runtime));
}

RemoveProjectMemberFromRoleResponse Alibabacloud_Dataworks-public20200518::Client::removeProjectMemberFromRole(shared_ptr<RemoveProjectMemberFromRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeProjectMemberFromRoleWithOptions(request, runtime);
}

RestartInstanceResponse Alibabacloud_Dataworks-public20200518::Client::restartInstanceWithOptions(shared_ptr<RestartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartInstance"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartInstanceResponse(callApi(params, req, runtime));
}

RestartInstanceResponse Alibabacloud_Dataworks-public20200518::Client::restartInstance(shared_ptr<RestartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartInstanceWithOptions(request, runtime);
}

ResumeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::resumeInstanceWithOptions(shared_ptr<ResumeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeInstance"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeInstanceResponse(callApi(params, req, runtime));
}

ResumeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::resumeInstance(shared_ptr<ResumeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeInstanceWithOptions(request, runtime);
}

RevokeColumnPermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeColumnPermissionWithOptions(shared_ptr<RevokeColumnPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columns)) {
    query->insert(pair<string, string>("Columns", *request->columns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxComputeProjectName)) {
    query->insert(pair<string, string>("MaxComputeProjectName", *request->maxComputeProjectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revokeUserId)) {
    query->insert(pair<string, string>("RevokeUserId", *request->revokeUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revokeUserName)) {
    query->insert(pair<string, string>("RevokeUserName", *request->revokeUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workspaceId)) {
    query->insert(pair<string, long>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeColumnPermission"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeColumnPermissionResponse(callApi(params, req, runtime));
}

RevokeColumnPermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeColumnPermission(shared_ptr<RevokeColumnPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeColumnPermissionWithOptions(request, runtime);
}

RevokeTablePermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeTablePermissionWithOptions(shared_ptr<RevokeTablePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actions)) {
    query->insert(pair<string, string>("Actions", *request->actions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxComputeProjectName)) {
    query->insert(pair<string, string>("MaxComputeProjectName", *request->maxComputeProjectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revokeUserId)) {
    query->insert(pair<string, string>("RevokeUserId", *request->revokeUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revokeUserName)) {
    query->insert(pair<string, string>("RevokeUserName", *request->revokeUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workspaceId)) {
    query->insert(pair<string, long>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeTablePermission"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeTablePermissionResponse(callApi(params, req, runtime));
}

RevokeTablePermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeTablePermission(shared_ptr<RevokeTablePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeTablePermissionWithOptions(request, runtime);
}

RunCycleDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runCycleDagNodesWithOptions(shared_ptr<RunCycleDagNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizBeginTime)) {
    body->insert(pair<string, string>("BizBeginTime", *request->bizBeginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizEndTime)) {
    body->insert(pair<string, string>("BizEndTime", *request->bizEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endBizDate)) {
    body->insert(pair<string, string>("EndBizDate", *request->endBizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeNodeIds)) {
    body->insert(pair<string, string>("ExcludeNodeIds", *request->excludeNodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeNodeIds)) {
    body->insert(pair<string, string>("IncludeNodeIds", *request->includeNodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeParams)) {
    body->insert(pair<string, string>("NodeParams", *request->nodeParams));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->parallelism)) {
    body->insert(pair<string, bool>("Parallelism", *request->parallelism));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rootNodeId)) {
    body->insert(pair<string, long>("RootNodeId", *request->rootNodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startBizDate)) {
    body->insert(pair<string, string>("StartBizDate", *request->startBizDate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->startFutureInstanceImmediately)) {
    body->insert(pair<string, bool>("StartFutureInstanceImmediately", *request->startFutureInstanceImmediately));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCycleDagNodes"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunCycleDagNodesResponse(callApi(params, req, runtime));
}

RunCycleDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runCycleDagNodes(shared_ptr<RunCycleDagNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCycleDagNodesWithOptions(request, runtime);
}

RunManualDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runManualDagNodesWithOptions(shared_ptr<RunManualDagNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizDate)) {
    body->insert(pair<string, string>("BizDate", *request->bizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dagParameters)) {
    body->insert(pair<string, string>("DagParameters", *request->dagParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endBizDate)) {
    body->insert(pair<string, string>("EndBizDate", *request->endBizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeNodeIds)) {
    body->insert(pair<string, string>("ExcludeNodeIds", *request->excludeNodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowName)) {
    body->insert(pair<string, string>("FlowName", *request->flowName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeNodeIds)) {
    body->insert(pair<string, string>("IncludeNodeIds", *request->includeNodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeParameters)) {
    body->insert(pair<string, string>("NodeParameters", *request->nodeParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startBizDate)) {
    body->insert(pair<string, string>("StartBizDate", *request->startBizDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunManualDagNodes"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunManualDagNodesResponse(callApi(params, req, runtime));
}

RunManualDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runManualDagNodes(shared_ptr<RunManualDagNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runManualDagNodesWithOptions(request, runtime);
}

RunSmokeTestResponse Alibabacloud_Dataworks-public20200518::Client::runSmokeTestWithOptions(shared_ptr<RunSmokeTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizdate)) {
    body->insert(pair<string, string>("Bizdate", *request->bizdate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeParams)) {
    body->insert(pair<string, string>("NodeParams", *request->nodeParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunSmokeTest"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunSmokeTestResponse(callApi(params, req, runtime));
}

RunSmokeTestResponse Alibabacloud_Dataworks-public20200518::Client::runSmokeTest(shared_ptr<RunSmokeTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runSmokeTestWithOptions(request, runtime);
}

RunTriggerNodeResponse Alibabacloud_Dataworks-public20200518::Client::runTriggerNodeWithOptions(shared_ptr<RunTriggerNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    body->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizDate)) {
    body->insert(pair<string, long>("BizDate", *request->bizDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cycleTime)) {
    body->insert(pair<string, long>("CycleTime", *request->cycleTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunTriggerNode"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunTriggerNodeResponse(callApi(params, req, runtime));
}

RunTriggerNodeResponse Alibabacloud_Dataworks-public20200518::Client::runTriggerNode(shared_ptr<RunTriggerNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runTriggerNodeWithOptions(request, runtime);
}

SaveDataServiceApiTestResultResponse Alibabacloud_Dataworks-public20200518::Client::saveDataServiceApiTestResultWithOptions(shared_ptr<SaveDataServiceApiTestResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    body->insert(pair<string, long>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoGenerate)) {
    body->insert(pair<string, bool>("AutoGenerate", *request->autoGenerate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->failResultSample)) {
    body->insert(pair<string, string>("FailResultSample", *request->failResultSample));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultSample)) {
    body->insert(pair<string, string>("ResultSample", *request->resultSample));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveDataServiceApiTestResult"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveDataServiceApiTestResultResponse(callApi(params, req, runtime));
}

SaveDataServiceApiTestResultResponse Alibabacloud_Dataworks-public20200518::Client::saveDataServiceApiTestResult(shared_ptr<SaveDataServiceApiTestResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveDataServiceApiTestResultWithOptions(request, runtime);
}

ScanSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::scanSensitiveDataWithOptions(shared_ptr<ScanSensitiveDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScanSensitiveData"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScanSensitiveDataResponse(callApi(params, req, runtime));
}

ScanSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::scanSensitiveData(shared_ptr<ScanSensitiveDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return scanSensitiveDataWithOptions(request, runtime);
}

SearchMetaTablesResponse Alibabacloud_Dataworks-public20200518::Client::searchMetaTablesWithOptions(shared_ptr<SearchMetaTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appGuid)) {
    query->insert(pair<string, string>("AppGuid", *request->appGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->entityType)) {
    query->insert(pair<string, long>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schema)) {
    query->insert(pair<string, string>("Schema", *request->schema));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMetaTables"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchMetaTablesResponse(callApi(params, req, runtime));
}

SearchMetaTablesResponse Alibabacloud_Dataworks-public20200518::Client::searchMetaTables(shared_ptr<SearchMetaTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMetaTablesWithOptions(request, runtime);
}

SearchNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::searchNodesByOutputWithOptions(shared_ptr<SearchNodesByOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outputs)) {
    body->insert(pair<string, string>("Outputs", *request->outputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchNodesByOutput"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchNodesByOutputResponse(callApi(params, req, runtime));
}

SearchNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::searchNodesByOutput(shared_ptr<SearchNodesByOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchNodesByOutputWithOptions(request, runtime);
}

SetDataSourceShareResponse Alibabacloud_Dataworks-public20200518::Client::setDataSourceShareWithOptions(shared_ptr<SetDataSourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasourceName)) {
    query->insert(pair<string, string>("DatasourceName", *request->datasourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectPermissions)) {
    query->insert(pair<string, string>("ProjectPermissions", *request->projectPermissions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPermissions)) {
    query->insert(pair<string, string>("UserPermissions", *request->userPermissions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDataSourceShare"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDataSourceShareResponse(callApi(params, req, runtime));
}

SetDataSourceShareResponse Alibabacloud_Dataworks-public20200518::Client::setDataSourceShare(shared_ptr<SetDataSourceShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDataSourceShareWithOptions(request, runtime);
}

SetSuccessInstanceResponse Alibabacloud_Dataworks-public20200518::Client::setSuccessInstanceWithOptions(shared_ptr<SetSuccessInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetSuccessInstance"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetSuccessInstanceResponse(callApi(params, req, runtime));
}

SetSuccessInstanceResponse Alibabacloud_Dataworks-public20200518::Client::setSuccessInstance(shared_ptr<SetSuccessInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSuccessInstanceWithOptions(request, runtime);
}

StartDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::startDISyncInstanceWithOptions(shared_ptr<StartDISyncInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startParam)) {
    query->insert(pair<string, string>("StartParam", *request->startParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartDISyncInstance"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartDISyncInstanceResponse(callApi(params, req, runtime));
}

StartDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::startDISyncInstance(shared_ptr<StartDISyncInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDISyncInstanceWithOptions(request, runtime);
}

StartMigrationResponse Alibabacloud_Dataworks-public20200518::Client::startMigrationWithOptions(shared_ptr<StartMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->migrationId)) {
    body->insert(pair<string, long>("MigrationId", *request->migrationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartMigration"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartMigrationResponse(callApi(params, req, runtime));
}

StartMigrationResponse Alibabacloud_Dataworks-public20200518::Client::startMigration(shared_ptr<StartMigrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startMigrationWithOptions(request, runtime);
}

StopDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopDISyncInstanceWithOptions(shared_ptr<StopDISyncInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopDISyncInstance"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopDISyncInstanceResponse(callApi(params, req, runtime));
}

StopDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopDISyncInstance(shared_ptr<StopDISyncInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDISyncInstanceWithOptions(request, runtime);
}

StopInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopInstanceWithOptions(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopInstance"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopInstanceResponse(callApi(params, req, runtime));
}

StopInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopInstance(shared_ptr<StopInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInstanceWithOptions(request, runtime);
}

SubmitDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::submitDataServiceApiWithOptions(shared_ptr<SubmitDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    body->insert(pair<string, long>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDataServiceApi"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDataServiceApiResponse(callApi(params, req, runtime));
}

SubmitDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::submitDataServiceApi(shared_ptr<SubmitDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDataServiceApiWithOptions(request, runtime);
}

SubmitFileResponse Alibabacloud_Dataworks-public20200518::Client::submitFileWithOptions(shared_ptr<SubmitFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

SubmitFileResponse Alibabacloud_Dataworks-public20200518::Client::submitFile(shared_ptr<SubmitFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFileWithOptions(request, runtime);
}

SuspendInstanceResponse Alibabacloud_Dataworks-public20200518::Client::suspendInstanceWithOptions(shared_ptr<SuspendInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendInstance"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendInstanceResponse(callApi(params, req, runtime));
}

SuspendInstanceResponse Alibabacloud_Dataworks-public20200518::Client::suspendInstance(shared_ptr<SuspendInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendInstanceWithOptions(request, runtime);
}

TerminateDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::terminateDISyncInstanceWithOptions(shared_ptr<TerminateDISyncInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TerminateDISyncInstance"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TerminateDISyncInstanceResponse(callApi(params, req, runtime));
}

TerminateDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::terminateDISyncInstance(shared_ptr<TerminateDISyncInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return terminateDISyncInstanceWithOptions(request, runtime);
}

TestDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::testDataServiceApiWithOptions(shared_ptr<TestDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    query->insert(pair<string, long>("ApiId", *request->apiId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyContent)) {
    body->insert(pair<string, string>("BodyContent", *request->bodyContent));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TestDataServiceApiRequestBodyParams>>(request->bodyParams)) {
    body->insert(pair<string, vector<TestDataServiceApiRequestBodyParams>>("BodyParams", *request->bodyParams));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TestDataServiceApiRequestHeadParams>>(request->headParams)) {
    body->insert(pair<string, vector<TestDataServiceApiRequestHeadParams>>("HeadParams", *request->headParams));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TestDataServiceApiRequestPathParams>>(request->pathParams)) {
    body->insert(pair<string, vector<TestDataServiceApiRequestPathParams>>("PathParams", *request->pathParams));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TestDataServiceApiRequestQueryParam>>(request->queryParam)) {
    body->insert(pair<string, vector<TestDataServiceApiRequestQueryParam>>("QueryParam", *request->queryParam));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TestDataServiceApi"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TestDataServiceApiResponse(callApi(params, req, runtime));
}

TestDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::testDataServiceApi(shared_ptr<TestDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testDataServiceApiWithOptions(request, runtime);
}

TestNetworkConnectionResponse Alibabacloud_Dataworks-public20200518::Client::testNetworkConnectionWithOptions(shared_ptr<TestNetworkConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasourceName)) {
    query->insert(pair<string, string>("DatasourceName", *request->datasourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroup)) {
    query->insert(pair<string, string>("ResourceGroup", *request->resourceGroup));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TestNetworkConnection"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TestNetworkConnectionResponse(callApi(params, req, runtime));
}

TestNetworkConnectionResponse Alibabacloud_Dataworks-public20200518::Client::testNetworkConnection(shared_ptr<TestNetworkConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testNetworkConnectionWithOptions(request, runtime);
}

TopTenElapsedTimeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenElapsedTimeInstanceWithOptions(shared_ptr<TopTenElapsedTimeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TopTenElapsedTimeInstance"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TopTenElapsedTimeInstanceResponse(callApi(params, req, runtime));
}

TopTenElapsedTimeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenElapsedTimeInstance(shared_ptr<TopTenElapsedTimeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return topTenElapsedTimeInstanceWithOptions(request, runtime);
}

TopTenErrorTimesInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenErrorTimesInstanceWithOptions(shared_ptr<TopTenErrorTimesInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TopTenErrorTimesInstance"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TopTenErrorTimesInstanceResponse(callApi(params, req, runtime));
}

TopTenErrorTimesInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenErrorTimesInstance(shared_ptr<TopTenErrorTimesInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return topTenErrorTimesInstanceWithOptions(request, runtime);
}

UmountDirectoryResponse Alibabacloud_Dataworks-public20200518::Client::umountDirectoryWithOptions(shared_ptr<UmountDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    body->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    body->insert(pair<string, string>("TargetType", *request->targetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    body->insert(pair<string, string>("TargetUserId", *request->targetUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UmountDirectory"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UmountDirectoryResponse(callApi(params, req, runtime));
}

UmountDirectoryResponse Alibabacloud_Dataworks-public20200518::Client::umountDirectory(shared_ptr<UmountDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return umountDirectoryWithOptions(request, runtime);
}

UpdateBaselineResponse Alibabacloud_Dataworks-public20200518::Client::updateBaselineWithOptions(shared_ptr<UpdateBaselineRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateBaselineShrinkRequest> request = make_shared<UpdateBaselineShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateBaselineRequestAlertSettings>>(tmpReq->alertSettings)) {
    request->alertSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->alertSettings, make_shared<string>("AlertSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateBaselineRequestOvertimeSettings>>(tmpReq->overtimeSettings)) {
    request->overtimeSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->overtimeSettings, make_shared<string>("OvertimeSettings"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->alertEnabled)) {
    body->insert(pair<string, bool>("AlertEnabled", *request->alertEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->alertMarginThreshold)) {
    body->insert(pair<string, long>("AlertMarginThreshold", *request->alertMarginThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertSettingsShrink)) {
    body->insert(pair<string, string>("AlertSettings", *request->alertSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->baselineId)) {
    body->insert(pair<string, long>("BaselineId", *request->baselineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineName)) {
    body->insert(pair<string, string>("BaselineName", *request->baselineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineType)) {
    body->insert(pair<string, string>("BaselineType", *request->baselineType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    body->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIds)) {
    body->insert(pair<string, string>("NodeIds", *request->nodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->overtimeSettingsShrink)) {
    body->insert(pair<string, string>("OvertimeSettings", *request->overtimeSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    body->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->removeNodeIds)) {
    body->insert(pair<string, string>("RemoveNodeIds", *request->removeNodeIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBaseline"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBaselineResponse(callApi(params, req, runtime));
}

UpdateBaselineResponse Alibabacloud_Dataworks-public20200518::Client::updateBaseline(shared_ptr<UpdateBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBaselineWithOptions(request, runtime);
}

UpdateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::updateBusinessWithOptions(shared_ptr<UpdateBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

UpdateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::updateBusiness(shared_ptr<UpdateBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBusinessWithOptions(request, runtime);
}

UpdateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::updateConnectionWithOptions(shared_ptr<UpdateConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->connectionId)) {
    query->insert(pair<string, long>("ConnectionId", *request->connectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->envType)) {
    query->insert(pair<string, long>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConnection"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConnectionResponse(callApi(params, req, runtime));
}

UpdateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::updateConnection(shared_ptr<UpdateConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConnectionWithOptions(request, runtime);
}

UpdateDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::updateDIProjectConfigWithOptions(shared_ptr<UpdateDIProjectConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectConfig)) {
    query->insert(pair<string, string>("ProjectConfig", *request->projectConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDIProjectConfig"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDIProjectConfigResponse(callApi(params, req, runtime));
}

UpdateDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::updateDIProjectConfig(shared_ptr<UpdateDIProjectConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDIProjectConfigWithOptions(request, runtime);
}

UpdateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::updateDISyncTaskWithOptions(shared_ptr<UpdateDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    query->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskContent)) {
    query->insert(pair<string, string>("TaskContent", *request->taskContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskParam)) {
    query->insert(pair<string, string>("TaskParam", *request->taskParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDISyncTask"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDISyncTaskResponse(callApi(params, req, runtime));
}

UpdateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::updateDISyncTask(shared_ptr<UpdateDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDISyncTaskWithOptions(request, runtime);
}

UpdateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::updateDataServiceApiWithOptions(shared_ptr<UpdateDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiDescription)) {
    body->insert(pair<string, string>("ApiDescription", *request->apiDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->apiId)) {
    body->insert(pair<string, long>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiPath)) {
    body->insert(pair<string, string>("ApiPath", *request->apiPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocols)) {
    body->insert(pair<string, string>("Protocols", *request->protocols));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrationDetails)) {
    body->insert(pair<string, string>("RegistrationDetails", *request->registrationDetails));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestMethod)) {
    body->insert(pair<string, long>("RequestMethod", *request->requestMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceGroupId)) {
    body->insert(pair<string, long>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->responseContentType)) {
    body->insert(pair<string, long>("ResponseContentType", *request->responseContentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptDetails)) {
    body->insert(pair<string, string>("ScriptDetails", *request->scriptDetails));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibleRange)) {
    body->insert(pair<string, long>("VisibleRange", *request->visibleRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wizardDetails)) {
    body->insert(pair<string, string>("WizardDetails", *request->wizardDetails));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataServiceApi"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataServiceApiResponse(callApi(params, req, runtime));
}

UpdateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::updateDataServiceApi(shared_ptr<UpdateDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataServiceApiWithOptions(request, runtime);
}

UpdateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::updateDataSourceWithOptions(shared_ptr<UpdateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->envType)) {
    query->insert(pair<string, long>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataSource"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataSourceResponse(callApi(params, req, runtime));
}

UpdateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::updateDataSource(shared_ptr<UpdateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataSourceWithOptions(request, runtime);
}

UpdateFileResponse Alibabacloud_Dataworks-public20200518::Client::updateFileWithOptions(shared_ptr<UpdateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->advancedSettings)) {
    body->insert(pair<string, string>("AdvancedSettings", *request->advancedSettings));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFile"))},
    {"version", boost::any(string("2020-05-18"))},
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

UpdateFileResponse Alibabacloud_Dataworks-public20200518::Client::updateFile(shared_ptr<UpdateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFileWithOptions(request, runtime);
}

UpdateFolderResponse Alibabacloud_Dataworks-public20200518::Client::updateFolderWithOptions(shared_ptr<UpdateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

UpdateFolderResponse Alibabacloud_Dataworks-public20200518::Client::updateFolder(shared_ptr<UpdateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFolderWithOptions(request, runtime);
}

UpdateIDEEventResultResponse Alibabacloud_Dataworks-public20200518::Client::updateIDEEventResultWithOptions(shared_ptr<UpdateIDEEventResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

UpdateIDEEventResultResponse Alibabacloud_Dataworks-public20200518::Client::updateIDEEventResult(shared_ptr<UpdateIDEEventResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIDEEventResultWithOptions(request, runtime);
}

UpdateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaCategoryWithOptions(shared_ptr<UpdateMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    body->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMetaCategory"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMetaCategoryResponse(callApi(params, req, runtime));
}

UpdateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaCategory(shared_ptr<UpdateMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetaCategoryWithOptions(request, runtime);
}

UpdateMetaCollectionResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaCollectionWithOptions(shared_ptr<UpdateMetaCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifiedName)) {
    query->insert(pair<string, string>("QualifiedName", *request->qualifiedName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMetaCollection"))},
    {"version", boost::any(string("2020-05-18"))},
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

UpdateMetaCollectionResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaCollection(shared_ptr<UpdateMetaCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetaCollectionWithOptions(request, runtime);
}

UpdateMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTableWithOptions(shared_ptr<UpdateMetaTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caption)) {
    query->insert(pair<string, string>("Caption", *request->caption));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->envType)) {
    query->insert(pair<string, long>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newOwnerId)) {
    query->insert(pair<string, string>("NewOwnerId", *request->newOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schema)) {
    query->insert(pair<string, string>("Schema", *request->schema));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibility)) {
    query->insert(pair<string, long>("Visibility", *request->visibility));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addedLabels)) {
    body->insert(pair<string, string>("AddedLabels", *request->addedLabels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->removedLabels)) {
    body->insert(pair<string, string>("RemovedLabels", *request->removedLabels));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMetaTable"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMetaTableResponse(callApi(params, req, runtime));
}

UpdateMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTable(shared_ptr<UpdateMetaTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetaTableWithOptions(request, runtime);
}

UpdateMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTableIntroWikiWithOptions(shared_ptr<UpdateMetaTableIntroWikiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMetaTableIntroWiki"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMetaTableIntroWikiResponse(callApi(params, req, runtime));
}

UpdateMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTableIntroWiki(shared_ptr<UpdateMetaTableIntroWikiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetaTableIntroWikiWithOptions(request, runtime);
}

UpdateNodeOwnerResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeOwnerWithOptions(shared_ptr<UpdateNodeOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNodeOwner"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNodeOwnerResponse(callApi(params, req, runtime));
}

UpdateNodeOwnerResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeOwner(shared_ptr<UpdateNodeOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNodeOwnerWithOptions(request, runtime);
}

UpdateNodeRunModeResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeRunModeWithOptions(shared_ptr<UpdateNodeRunModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeId)) {
    body->insert(pair<string, long>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectEnv)) {
    body->insert(pair<string, string>("ProjectEnv", *request->projectEnv));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->schedulerType)) {
    body->insert(pair<string, long>("SchedulerType", *request->schedulerType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNodeRunMode"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNodeRunModeResponse(callApi(params, req, runtime));
}

UpdateNodeRunModeResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeRunMode(shared_ptr<UpdateNodeRunModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNodeRunModeWithOptions(request, runtime);
}

UpdateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityFollowerWithOptions(shared_ptr<UpdateQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alarmMode)) {
    body->insert(pair<string, long>("AlarmMode", *request->alarmMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->follower)) {
    body->insert(pair<string, string>("Follower", *request->follower));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->followerId)) {
    body->insert(pair<string, long>("FollowerId", *request->followerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQualityFollower"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateQualityFollowerResponse(callApi(params, req, runtime));
}

UpdateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityFollower(shared_ptr<UpdateQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQualityFollowerWithOptions(request, runtime);
}

UpdateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityRuleWithOptions(shared_ptr<UpdateQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->blockType)) {
    body->insert(pair<string, long>("BlockType", *request->blockType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checker)) {
    body->insert(pair<string, long>("Checker", *request->checker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->criticalThreshold)) {
    body->insert(pair<string, string>("CriticalThreshold", *request->criticalThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->entityId)) {
    body->insert(pair<string, long>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expectValue)) {
    body->insert(pair<string, string>("ExpectValue", *request->expectValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodName)) {
    body->insert(pair<string, string>("MethodName", *request->methodName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->openSwitch)) {
    body->insert(pair<string, bool>("OpenSwitch", *request->openSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    body->insert(pair<string, string>("Operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictType)) {
    body->insert(pair<string, long>("PredictType", *request->predictType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->property)) {
    body->insert(pair<string, string>("Property", *request->property));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyType)) {
    body->insert(pair<string, string>("PropertyType", *request->propertyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    body->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleType)) {
    body->insert(pair<string, long>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    body->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trend)) {
    body->insert(pair<string, string>("Trend", *request->trend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->warningThreshold)) {
    body->insert(pair<string, string>("WarningThreshold", *request->warningThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whereCondition)) {
    body->insert(pair<string, string>("WhereCondition", *request->whereCondition));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQualityRule"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateQualityRuleResponse(callApi(params, req, runtime));
}

UpdateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityRule(shared_ptr<UpdateQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQualityRuleWithOptions(request, runtime);
}

UpdateRemindResponse Alibabacloud_Dataworks-public20200518::Client::updateRemindWithOptions(shared_ptr<UpdateRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertInterval)) {
    body->insert(pair<string, long>("AlertInterval", *request->alertInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertMethods)) {
    body->insert(pair<string, string>("AlertMethods", *request->alertMethods));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertTargets)) {
    body->insert(pair<string, string>("AlertTargets", *request->alertTargets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertUnit)) {
    body->insert(pair<string, string>("AlertUnit", *request->alertUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineIds)) {
    body->insert(pair<string, string>("BaselineIds", *request->baselineIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizProcessIds)) {
    body->insert(pair<string, string>("BizProcessIds", *request->bizProcessIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detail)) {
    body->insert(pair<string, string>("Detail", *request->detail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dndEnd)) {
    body->insert(pair<string, string>("DndEnd", *request->dndEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAlertTimes)) {
    body->insert(pair<string, long>("MaxAlertTimes", *request->maxAlertTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIds)) {
    body->insert(pair<string, string>("NodeIds", *request->nodeIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->remindId)) {
    body->insert(pair<string, long>("RemindId", *request->remindId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remindName)) {
    body->insert(pair<string, string>("RemindName", *request->remindName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remindType)) {
    body->insert(pair<string, string>("RemindType", *request->remindType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remindUnit)) {
    body->insert(pair<string, string>("RemindUnit", *request->remindUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotUrls)) {
    body->insert(pair<string, string>("RobotUrls", *request->robotUrls));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useFlag)) {
    body->insert(pair<string, bool>("UseFlag", *request->useFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhooks)) {
    body->insert(pair<string, string>("Webhooks", *request->webhooks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRemind"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRemindResponse(callApi(params, req, runtime));
}

UpdateRemindResponse Alibabacloud_Dataworks-public20200518::Client::updateRemind(shared_ptr<UpdateRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRemindWithOptions(request, runtime);
}

UpdateTableResponse Alibabacloud_Dataworks-public20200518::Client::updateTableWithOptions(shared_ptr<UpdateTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appGuid)) {
    query->insert(pair<string, string>("AppGuid", *request->appGuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->createIfNotExists)) {
    query->insert(pair<string, bool>("CreateIfNotExists", *request->createIfNotExists));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalTableType)) {
    query->insert(pair<string, string>("ExternalTableType", *request->externalTableType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hasPart)) {
    query->insert(pair<string, long>("HasPart", *request->hasPart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isView)) {
    query->insert(pair<string, long>("IsView", *request->isView));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lifeCycle)) {
    query->insert(pair<string, long>("LifeCycle", *request->lifeCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    query->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logicalLevelId)) {
    query->insert(pair<string, long>("LogicalLevelId", *request->logicalLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->physicsLevelId)) {
    query->insert(pair<string, long>("PhysicsLevelId", *request->physicsLevelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schema)) {
    query->insert(pair<string, string>("Schema", *request->schema));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibility)) {
    query->insert(pair<string, long>("Visibility", *request->visibility));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTableRequestColumns>>(request->columns)) {
    body->insert(pair<string, vector<UpdateTableRequestColumns>>("Columns", *request->columns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpoint)) {
    body->insert(pair<string, string>("Endpoint", *request->endpoint));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->envType)) {
    body->insert(pair<string, long>("EnvType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTableRequestThemes>>(request->themes)) {
    body->insert(pair<string, vector<UpdateTableRequestThemes>>("Themes", *request->themes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTable"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTableResponse(callApi(params, req, runtime));
}

UpdateTableResponse Alibabacloud_Dataworks-public20200518::Client::updateTable(shared_ptr<UpdateTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableWithOptions(request, runtime);
}

UpdateTableAddColumnResponse Alibabacloud_Dataworks-public20200518::Client::updateTableAddColumnWithOptions(shared_ptr<UpdateTableAddColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTableAddColumnRequestColumn>>(request->column)) {
    body->insert(pair<string, vector<UpdateTableAddColumnRequestColumn>>("Column", *request->column));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTableAddColumn"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTableAddColumnResponse(callApi(params, req, runtime));
}

UpdateTableAddColumnResponse Alibabacloud_Dataworks-public20200518::Client::updateTableAddColumn(shared_ptr<UpdateTableAddColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableAddColumnWithOptions(request, runtime);
}

UpdateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::updateTableLevelWithOptions(shared_ptr<UpdateTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->levelId)) {
    query->insert(pair<string, long>("LevelId", *request->levelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->levelType)) {
    query->insert(pair<string, long>("LevelType", *request->levelType));
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
    {"action", boost::any(string("UpdateTableLevel"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTableLevelResponse(callApi(params, req, runtime));
}

UpdateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::updateTableLevel(shared_ptr<UpdateTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableLevelWithOptions(request, runtime);
}

UpdateTableModelInfoResponse Alibabacloud_Dataworks-public20200518::Client::updateTableModelInfoWithOptions(shared_ptr<UpdateTableModelInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->firstLevelThemeId)) {
    query->insert(pair<string, long>("FirstLevelThemeId", *request->firstLevelThemeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->levelId)) {
    query->insert(pair<string, long>("LevelId", *request->levelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->levelType)) {
    query->insert(pair<string, long>("LevelType", *request->levelType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->secondLevelThemeId)) {
    query->insert(pair<string, long>("SecondLevelThemeId", *request->secondLevelThemeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableGuid)) {
    query->insert(pair<string, string>("TableGuid", *request->tableGuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTableModelInfo"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTableModelInfoResponse(callApi(params, req, runtime));
}

UpdateTableModelInfoResponse Alibabacloud_Dataworks-public20200518::Client::updateTableModelInfo(shared_ptr<UpdateTableModelInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableModelInfoWithOptions(request, runtime);
}

UpdateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::updateTableThemeWithOptions(shared_ptr<UpdateTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->themeId)) {
    query->insert(pair<string, long>("ThemeId", *request->themeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTableTheme"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTableThemeResponse(callApi(params, req, runtime));
}

UpdateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::updateTableTheme(shared_ptr<UpdateTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableThemeWithOptions(request, runtime);
}

UpdateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::updateUdfFileWithOptions(shared_ptr<UpdateUdfFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2020-05-18"))},
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

UpdateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::updateUdfFile(shared_ptr<UpdateUdfFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUdfFileWithOptions(request, runtime);
}

UpdateWorkbenchEventResultResponse Alibabacloud_Dataworks-public20200518::Client::updateWorkbenchEventResultWithOptions(shared_ptr<UpdateWorkbenchEventResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkResult)) {
    query->insert(pair<string, string>("CheckResult", *request->checkResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkResultTip)) {
    query->insert(pair<string, string>("CheckResultTip", *request->checkResultTip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extensionCode)) {
    query->insert(pair<string, string>("ExtensionCode", *request->extensionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageId)) {
    query->insert(pair<string, string>("MessageId", *request->messageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkbenchEventResult"))},
    {"version", boost::any(string("2020-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkbenchEventResultResponse(callApi(params, req, runtime));
}

UpdateWorkbenchEventResultResponse Alibabacloud_Dataworks-public20200518::Client::updateWorkbenchEventResult(shared_ptr<UpdateWorkbenchEventResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWorkbenchEventResultWithOptions(request, runtime);
}

