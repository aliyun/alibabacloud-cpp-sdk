// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ddi_20200617.hpp>
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

using namespace Alibabacloud_Ddi20200617;

Alibabacloud_Ddi20200617::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "ddi.cn-qingdao.aliyuncs.com"},
    {"cn-chengdu", "ddi.cn-chengdu.aliyuncs.com"},
    {"cn-zhangjiakou", "ddi.cn-zhangjiakou.aliyuncs.com"},
    {"cn-huhehaote", "ddi.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong", "ddi.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-2", "ddi.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "ddi.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "ddi.ap-southeast-5.aliyuncs.com"},
    {"ap-northeast-1", "ddi.ap-northeast-1.aliyuncs.com"},
    {"eu-west-1", "ddi.eu-west-1.aliyuncs.com"},
    {"us-east-1", "ddi.us-east-1.aliyuncs.com"},
    {"eu-central-1", "ddi.eu-central-1.aliyuncs.com"},
    {"me-east-1", "ddi.me-east-1.aliyuncs.com"},
    {"ap-south-1", "ddi.ap-south-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ddi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ddi20200617::Client::getEndpoint(shared_ptr<string> productId,
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

CreateFlowResponse Alibabacloud_Ddi20200617::Client::createFlowWithOptions(shared_ptr<CreateFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFlowResponse(doRPCRequest(make_shared<string>("CreateFlow"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFlowResponse Alibabacloud_Ddi20200617::Client::createFlow(shared_ptr<CreateFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_Ddi20200617::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUsersResponse(doRPCRequest(make_shared<string>("ListUsers"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsersResponse Alibabacloud_Ddi20200617::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

ModifyFlowProjectResponse Alibabacloud_Ddi20200617::Client::modifyFlowProjectWithOptions(shared_ptr<ModifyFlowProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyFlowProjectResponse(doRPCRequest(make_shared<string>("ModifyFlowProject"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyFlowProjectResponse Alibabacloud_Ddi20200617::Client::modifyFlowProject(shared_ptr<ModifyFlowProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFlowProjectWithOptions(request, runtime);
}

QueryKnoxUserPasswordResponse Alibabacloud_Ddi20200617::Client::queryKnoxUserPasswordWithOptions(shared_ptr<QueryKnoxUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryKnoxUserPasswordResponse(doRPCRequest(make_shared<string>("QueryKnoxUserPassword"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryKnoxUserPasswordResponse Alibabacloud_Ddi20200617::Client::queryKnoxUserPassword(shared_ptr<QueryKnoxUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryKnoxUserPasswordWithOptions(request, runtime);
}

DescribeFlowNodeInstanceLauncherLogResponse Alibabacloud_Ddi20200617::Client::describeFlowNodeInstanceLauncherLogWithOptions(shared_ptr<DescribeFlowNodeInstanceLauncherLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFlowNodeInstanceLauncherLogResponse(doRPCRequest(make_shared<string>("DescribeFlowNodeInstanceLauncherLog"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFlowNodeInstanceLauncherLogResponse Alibabacloud_Ddi20200617::Client::describeFlowNodeInstanceLauncherLog(shared_ptr<DescribeFlowNodeInstanceLauncherLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowNodeInstanceLauncherLogWithOptions(request, runtime);
}

ListFlowResponse Alibabacloud_Ddi20200617::Client::listFlowWithOptions(shared_ptr<ListFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowResponse(doRPCRequest(make_shared<string>("ListFlow"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowResponse Alibabacloud_Ddi20200617::Client::listFlow(shared_ptr<ListFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Ddi20200617::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Ddi20200617::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

ListFlowClusterHostResponse Alibabacloud_Ddi20200617::Client::listFlowClusterHostWithOptions(shared_ptr<ListFlowClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowClusterHostResponse(doRPCRequest(make_shared<string>("ListFlowClusterHost"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowClusterHostResponse Alibabacloud_Ddi20200617::Client::listFlowClusterHost(shared_ptr<ListFlowClusterHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowClusterHostWithOptions(request, runtime);
}

ListClusterOperationResponse Alibabacloud_Ddi20200617::Client::listClusterOperationWithOptions(shared_ptr<ListClusterOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClusterOperationResponse(doRPCRequest(make_shared<string>("ListClusterOperation"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClusterOperationResponse Alibabacloud_Ddi20200617::Client::listClusterOperation(shared_ptr<ListClusterOperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterOperationWithOptions(request, runtime);
}

ListFlowEntitySnapshotResponse Alibabacloud_Ddi20200617::Client::listFlowEntitySnapshotWithOptions(shared_ptr<ListFlowEntitySnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowEntitySnapshotResponse(doRPCRequest(make_shared<string>("ListFlowEntitySnapshot"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowEntitySnapshotResponse Alibabacloud_Ddi20200617::Client::listFlowEntitySnapshot(shared_ptr<ListFlowEntitySnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowEntitySnapshotWithOptions(request, runtime);
}

DeleteClusterTemplateResponse Alibabacloud_Ddi20200617::Client::deleteClusterTemplateWithOptions(shared_ptr<DeleteClusterTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteClusterTemplateResponse(doRPCRequest(make_shared<string>("DeleteClusterTemplate"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteClusterTemplateResponse Alibabacloud_Ddi20200617::Client::deleteClusterTemplate(shared_ptr<DeleteClusterTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClusterTemplateWithOptions(request, runtime);
}

CancelOrderResponse Alibabacloud_Ddi20200617::Client::cancelOrderWithOptions(shared_ptr<CancelOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelOrderResponse(doRPCRequest(make_shared<string>("CancelOrder"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelOrderResponse Alibabacloud_Ddi20200617::Client::cancelOrder(shared_ptr<CancelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOrderWithOptions(request, runtime);
}

CloneFlowJobResponse Alibabacloud_Ddi20200617::Client::cloneFlowJobWithOptions(shared_ptr<CloneFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CloneFlowJobResponse(doRPCRequest(make_shared<string>("CloneFlowJob"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CloneFlowJobResponse Alibabacloud_Ddi20200617::Client::cloneFlowJob(shared_ptr<CloneFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cloneFlowJobWithOptions(request, runtime);
}

StartFlowResponse Alibabacloud_Ddi20200617::Client::startFlowWithOptions(shared_ptr<StartFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartFlowResponse(doRPCRequest(make_shared<string>("StartFlow"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartFlowResponse Alibabacloud_Ddi20200617::Client::startFlow(shared_ptr<StartFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startFlowWithOptions(request, runtime);
}

CreateFlowJobResponse Alibabacloud_Ddi20200617::Client::createFlowJobWithOptions(shared_ptr<CreateFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFlowJobResponse(doRPCRequest(make_shared<string>("CreateFlowJob"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFlowJobResponse Alibabacloud_Ddi20200617::Client::createFlowJob(shared_ptr<CreateFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowJobWithOptions(request, runtime);
}

DeleteFlowCategoryResponse Alibabacloud_Ddi20200617::Client::deleteFlowCategoryWithOptions(shared_ptr<DeleteFlowCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFlowCategoryResponse(doRPCRequest(make_shared<string>("DeleteFlowCategory"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFlowCategoryResponse Alibabacloud_Ddi20200617::Client::deleteFlowCategory(shared_ptr<DeleteFlowCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowCategoryWithOptions(request, runtime);
}

DeleteFlowEditLockResponse Alibabacloud_Ddi20200617::Client::deleteFlowEditLockWithOptions(shared_ptr<DeleteFlowEditLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFlowEditLockResponse(doRPCRequest(make_shared<string>("DeleteFlowEditLock"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFlowEditLockResponse Alibabacloud_Ddi20200617::Client::deleteFlowEditLock(shared_ptr<DeleteFlowEditLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowEditLockWithOptions(request, runtime);
}

ResizeClusterResponse Alibabacloud_Ddi20200617::Client::resizeClusterWithOptions(shared_ptr<ResizeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResizeClusterResponse(doRPCRequest(make_shared<string>("ResizeCluster"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResizeClusterResponse Alibabacloud_Ddi20200617::Client::resizeCluster(shared_ptr<ResizeClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resizeClusterWithOptions(request, runtime);
}

DescribeMetaTablePreviewTaskResponse Alibabacloud_Ddi20200617::Client::describeMetaTablePreviewTaskWithOptions(shared_ptr<DescribeMetaTablePreviewTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMetaTablePreviewTaskResponse(doRPCRequest(make_shared<string>("DescribeMetaTablePreviewTask"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMetaTablePreviewTaskResponse Alibabacloud_Ddi20200617::Client::describeMetaTablePreviewTask(shared_ptr<DescribeMetaTablePreviewTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMetaTablePreviewTaskWithOptions(request, runtime);
}

ListClusterServiceConfigHistoryResponse Alibabacloud_Ddi20200617::Client::listClusterServiceConfigHistoryWithOptions(shared_ptr<ListClusterServiceConfigHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClusterServiceConfigHistoryResponse(doRPCRequest(make_shared<string>("ListClusterServiceConfigHistory"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClusterServiceConfigHistoryResponse Alibabacloud_Ddi20200617::Client::listClusterServiceConfigHistory(shared_ptr<ListClusterServiceConfigHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterServiceConfigHistoryWithOptions(request, runtime);
}

ModifyScalingConfigItemResponse Alibabacloud_Ddi20200617::Client::modifyScalingConfigItemWithOptions(shared_ptr<ModifyScalingConfigItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyScalingConfigItemResponse(doRPCRequest(make_shared<string>("ModifyScalingConfigItem"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyScalingConfigItemResponse Alibabacloud_Ddi20200617::Client::modifyScalingConfigItem(shared_ptr<ModifyScalingConfigItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScalingConfigItemWithOptions(request, runtime);
}

ListFlowClusterAllResponse Alibabacloud_Ddi20200617::Client::listFlowClusterAllWithOptions(shared_ptr<ListFlowClusterAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowClusterAllResponse(doRPCRequest(make_shared<string>("ListFlowClusterAll"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowClusterAllResponse Alibabacloud_Ddi20200617::Client::listFlowClusterAll(shared_ptr<ListFlowClusterAllRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowClusterAllWithOptions(request, runtime);
}

DescribeScalingGroupResponse Alibabacloud_Ddi20200617::Client::describeScalingGroupWithOptions(shared_ptr<DescribeScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScalingGroupResponse(doRPCRequest(make_shared<string>("DescribeScalingGroup"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScalingGroupResponse Alibabacloud_Ddi20200617::Client::describeScalingGroup(shared_ptr<DescribeScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingGroupWithOptions(request, runtime);
}

ListScalingGroupResponse Alibabacloud_Ddi20200617::Client::listScalingGroupWithOptions(shared_ptr<ListScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListScalingGroupResponse(doRPCRequest(make_shared<string>("ListScalingGroup"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListScalingGroupResponse Alibabacloud_Ddi20200617::Client::listScalingGroup(shared_ptr<ListScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScalingGroupWithOptions(request, runtime);
}

ModifyFlowCategoryResponse Alibabacloud_Ddi20200617::Client::modifyFlowCategoryWithOptions(shared_ptr<ModifyFlowCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyFlowCategoryResponse(doRPCRequest(make_shared<string>("ModifyFlowCategory"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyFlowCategoryResponse Alibabacloud_Ddi20200617::Client::modifyFlowCategory(shared_ptr<ModifyFlowCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFlowCategoryWithOptions(request, runtime);
}

ModifyClusterServiceConfigResponse Alibabacloud_Ddi20200617::Client::modifyClusterServiceConfigWithOptions(shared_ptr<ModifyClusterServiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyClusterServiceConfigResponse(doRPCRequest(make_shared<string>("ModifyClusterServiceConfig"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyClusterServiceConfigResponse Alibabacloud_Ddi20200617::Client::modifyClusterServiceConfig(shared_ptr<ModifyClusterServiceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyClusterServiceConfigWithOptions(request, runtime);
}

CloneFlowResponse Alibabacloud_Ddi20200617::Client::cloneFlowWithOptions(shared_ptr<CloneFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CloneFlowResponse(doRPCRequest(make_shared<string>("CloneFlow"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CloneFlowResponse Alibabacloud_Ddi20200617::Client::cloneFlow(shared_ptr<CloneFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cloneFlowWithOptions(request, runtime);
}

CreateClusterTemplateResponse Alibabacloud_Ddi20200617::Client::createClusterTemplateWithOptions(shared_ptr<CreateClusterTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateClusterTemplateResponse(doRPCRequest(make_shared<string>("CreateClusterTemplate"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateClusterTemplateResponse Alibabacloud_Ddi20200617::Client::createClusterTemplate(shared_ptr<CreateClusterTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClusterTemplateWithOptions(request, runtime);
}

UpdateLibraryInstallTaskStatusResponse Alibabacloud_Ddi20200617::Client::updateLibraryInstallTaskStatusWithOptions(shared_ptr<UpdateLibraryInstallTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateLibraryInstallTaskStatusResponse(doRPCRequest(make_shared<string>("UpdateLibraryInstallTaskStatus"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateLibraryInstallTaskStatusResponse Alibabacloud_Ddi20200617::Client::updateLibraryInstallTaskStatus(shared_ptr<UpdateLibraryInstallTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLibraryInstallTaskStatusWithOptions(request, runtime);
}

ListScalingConfigItemResponse Alibabacloud_Ddi20200617::Client::listScalingConfigItemWithOptions(shared_ptr<ListScalingConfigItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListScalingConfigItemResponse(doRPCRequest(make_shared<string>("ListScalingConfigItem"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListScalingConfigItemResponse Alibabacloud_Ddi20200617::Client::listScalingConfigItem(shared_ptr<ListScalingConfigItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScalingConfigItemWithOptions(request, runtime);
}

ListFlowInstanceResponse Alibabacloud_Ddi20200617::Client::listFlowInstanceWithOptions(shared_ptr<ListFlowInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowInstanceResponse(doRPCRequest(make_shared<string>("ListFlowInstance"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowInstanceResponse Alibabacloud_Ddi20200617::Client::listFlowInstance(shared_ptr<ListFlowInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowInstanceWithOptions(request, runtime);
}

DescribeScalingMetricsResponse Alibabacloud_Ddi20200617::Client::describeScalingMetricsWithOptions(shared_ptr<DescribeScalingMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScalingMetricsResponse(doRPCRequest(make_shared<string>("DescribeScalingMetrics"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScalingMetricsResponse Alibabacloud_Ddi20200617::Client::describeScalingMetrics(shared_ptr<DescribeScalingMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingMetricsWithOptions(request, runtime);
}

UntagResourcesSystemTagsResponse Alibabacloud_Ddi20200617::Client::untagResourcesSystemTagsWithOptions(shared_ptr<UntagResourcesSystemTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesSystemTagsResponse(doRPCRequest(make_shared<string>("UntagResourcesSystemTags"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesSystemTagsResponse Alibabacloud_Ddi20200617::Client::untagResourcesSystemTags(shared_ptr<UntagResourcesSystemTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesSystemTagsWithOptions(request, runtime);
}

DescribeFlowProjectResponse Alibabacloud_Ddi20200617::Client::describeFlowProjectWithOptions(shared_ptr<DescribeFlowProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFlowProjectResponse(doRPCRequest(make_shared<string>("DescribeFlowProject"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFlowProjectResponse Alibabacloud_Ddi20200617::Client::describeFlowProject(shared_ptr<DescribeFlowProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowProjectWithOptions(request, runtime);
}

DeleteSecurityWhiteListResponse Alibabacloud_Ddi20200617::Client::deleteSecurityWhiteListWithOptions(shared_ptr<DeleteSecurityWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSecurityWhiteListResponse(doRPCRequest(make_shared<string>("DeleteSecurityWhiteList"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSecurityWhiteListResponse Alibabacloud_Ddi20200617::Client::deleteSecurityWhiteList(shared_ptr<DeleteSecurityWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecurityWhiteListWithOptions(request, runtime);
}

ListScalingActivityResponse Alibabacloud_Ddi20200617::Client::listScalingActivityWithOptions(shared_ptr<ListScalingActivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListScalingActivityResponse(doRPCRequest(make_shared<string>("ListScalingActivity"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListScalingActivityResponse Alibabacloud_Ddi20200617::Client::listScalingActivity(shared_ptr<ListScalingActivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScalingActivityWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_Ddi20200617::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListTagValuesResponse(doRPCRequest(make_shared<string>("ListTagValues"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagValuesResponse Alibabacloud_Ddi20200617::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

ListClusterInstalledServiceResponse Alibabacloud_Ddi20200617::Client::listClusterInstalledServiceWithOptions(shared_ptr<ListClusterInstalledServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClusterInstalledServiceResponse(doRPCRequest(make_shared<string>("ListClusterInstalledService"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClusterInstalledServiceResponse Alibabacloud_Ddi20200617::Client::listClusterInstalledService(shared_ptr<ListClusterInstalledServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterInstalledServiceWithOptions(request, runtime);
}

RunClusterServiceActionResponse Alibabacloud_Ddi20200617::Client::runClusterServiceActionWithOptions(shared_ptr<RunClusterServiceActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RunClusterServiceActionResponse(doRPCRequest(make_shared<string>("RunClusterServiceAction"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunClusterServiceActionResponse Alibabacloud_Ddi20200617::Client::runClusterServiceAction(shared_ptr<RunClusterServiceActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runClusterServiceActionWithOptions(request, runtime);
}

SuspendFlowResponse Alibabacloud_Ddi20200617::Client::suspendFlowWithOptions(shared_ptr<SuspendFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SuspendFlowResponse(doRPCRequest(make_shared<string>("SuspendFlow"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SuspendFlowResponse Alibabacloud_Ddi20200617::Client::suspendFlow(shared_ptr<SuspendFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendFlowWithOptions(request, runtime);
}

CreateFlowProjectResponse Alibabacloud_Ddi20200617::Client::createFlowProjectWithOptions(shared_ptr<CreateFlowProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFlowProjectResponse(doRPCRequest(make_shared<string>("CreateFlowProject"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFlowProjectResponse Alibabacloud_Ddi20200617::Client::createFlowProject(shared_ptr<CreateFlowProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowProjectWithOptions(request, runtime);
}

ListFlowNodeInstanceContainerStatusResponse Alibabacloud_Ddi20200617::Client::listFlowNodeInstanceContainerStatusWithOptions(shared_ptr<ListFlowNodeInstanceContainerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowNodeInstanceContainerStatusResponse(doRPCRequest(make_shared<string>("ListFlowNodeInstanceContainerStatus"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowNodeInstanceContainerStatusResponse Alibabacloud_Ddi20200617::Client::listFlowNodeInstanceContainerStatus(shared_ptr<ListFlowNodeInstanceContainerStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowNodeInstanceContainerStatusWithOptions(request, runtime);
}

ModifyClusterTemplateResponse Alibabacloud_Ddi20200617::Client::modifyClusterTemplateWithOptions(shared_ptr<ModifyClusterTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyClusterTemplateResponse(doRPCRequest(make_shared<string>("ModifyClusterTemplate"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyClusterTemplateResponse Alibabacloud_Ddi20200617::Client::modifyClusterTemplate(shared_ptr<ModifyClusterTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyClusterTemplateWithOptions(request, runtime);
}

AddSecurityWhiteListResponse Alibabacloud_Ddi20200617::Client::addSecurityWhiteListWithOptions(shared_ptr<AddSecurityWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddSecurityWhiteListResponse(doRPCRequest(make_shared<string>("AddSecurityWhiteList"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddSecurityWhiteListResponse Alibabacloud_Ddi20200617::Client::addSecurityWhiteList(shared_ptr<AddSecurityWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSecurityWhiteListWithOptions(request, runtime);
}

ListMetaClusterResponse Alibabacloud_Ddi20200617::Client::listMetaClusterWithOptions(shared_ptr<ListMetaClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMetaClusterResponse(doRPCRequest(make_shared<string>("ListMetaCluster"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMetaClusterResponse Alibabacloud_Ddi20200617::Client::listMetaCluster(shared_ptr<ListMetaClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMetaClusterWithOptions(request, runtime);
}

ListClusterOperationHostResponse Alibabacloud_Ddi20200617::Client::listClusterOperationHostWithOptions(shared_ptr<ListClusterOperationHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClusterOperationHostResponse(doRPCRequest(make_shared<string>("ListClusterOperationHost"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClusterOperationHostResponse Alibabacloud_Ddi20200617::Client::listClusterOperationHost(shared_ptr<ListClusterOperationHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterOperationHostWithOptions(request, runtime);
}

ListClusterTemplatesResponse Alibabacloud_Ddi20200617::Client::listClusterTemplatesWithOptions(shared_ptr<ListClusterTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClusterTemplatesResponse(doRPCRequest(make_shared<string>("ListClusterTemplates"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClusterTemplatesResponse Alibabacloud_Ddi20200617::Client::listClusterTemplates(shared_ptr<ListClusterTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterTemplatesWithOptions(request, runtime);
}

ListClustersResponse Alibabacloud_Ddi20200617::Client::listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClustersResponse(doRPCRequest(make_shared<string>("ListClusters"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClustersResponse Alibabacloud_Ddi20200617::Client::listClusters(shared_ptr<ListClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClustersWithOptions(request, runtime);
}

TagResourcesSystemTagsResponse Alibabacloud_Ddi20200617::Client::tagResourcesSystemTagsWithOptions(shared_ptr<TagResourcesSystemTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesSystemTagsResponse(doRPCRequest(make_shared<string>("TagResourcesSystemTags"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesSystemTagsResponse Alibabacloud_Ddi20200617::Client::tagResourcesSystemTags(shared_ptr<TagResourcesSystemTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesSystemTagsWithOptions(request, runtime);
}

ModifyFlowJobResponse Alibabacloud_Ddi20200617::Client::modifyFlowJobWithOptions(shared_ptr<ModifyFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyFlowJobResponse(doRPCRequest(make_shared<string>("ModifyFlowJob"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyFlowJobResponse Alibabacloud_Ddi20200617::Client::modifyFlowJob(shared_ptr<ModifyFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFlowJobWithOptions(request, runtime);
}

DeleteFlowResponse Alibabacloud_Ddi20200617::Client::deleteFlowWithOptions(shared_ptr<DeleteFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFlowResponse(doRPCRequest(make_shared<string>("DeleteFlow"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFlowResponse Alibabacloud_Ddi20200617::Client::deleteFlow(shared_ptr<DeleteFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowWithOptions(request, runtime);
}

CreateFlowEditLockResponse Alibabacloud_Ddi20200617::Client::createFlowEditLockWithOptions(shared_ptr<CreateFlowEditLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFlowEditLockResponse(doRPCRequest(make_shared<string>("CreateFlowEditLock"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFlowEditLockResponse Alibabacloud_Ddi20200617::Client::createFlowEditLock(shared_ptr<CreateFlowEditLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowEditLockWithOptions(request, runtime);
}

DescribeFlowNodeInstanceResponse Alibabacloud_Ddi20200617::Client::describeFlowNodeInstanceWithOptions(shared_ptr<DescribeFlowNodeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFlowNodeInstanceResponse(doRPCRequest(make_shared<string>("DescribeFlowNodeInstance"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFlowNodeInstanceResponse Alibabacloud_Ddi20200617::Client::describeFlowNodeInstance(shared_ptr<DescribeFlowNodeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowNodeInstanceWithOptions(request, runtime);
}

DetachAndReleaseClusterEniResponse Alibabacloud_Ddi20200617::Client::detachAndReleaseClusterEniWithOptions(shared_ptr<DetachAndReleaseClusterEniRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachAndReleaseClusterEniResponse(doRPCRequest(make_shared<string>("DetachAndReleaseClusterEni"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachAndReleaseClusterEniResponse Alibabacloud_Ddi20200617::Client::detachAndReleaseClusterEni(shared_ptr<DetachAndReleaseClusterEniRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachAndReleaseClusterEniWithOptions(request, runtime);
}

DescribeScalingGroupInstanceResponse Alibabacloud_Ddi20200617::Client::describeScalingGroupInstanceWithOptions(shared_ptr<DescribeScalingGroupInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScalingGroupInstanceResponse(doRPCRequest(make_shared<string>("DescribeScalingGroupInstance"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScalingGroupInstanceResponse Alibabacloud_Ddi20200617::Client::describeScalingGroupInstance(shared_ptr<DescribeScalingGroupInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingGroupInstanceWithOptions(request, runtime);
}

CreateClusterHostGroupResponse Alibabacloud_Ddi20200617::Client::createClusterHostGroupWithOptions(shared_ptr<CreateClusterHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateClusterHostGroupResponse(doRPCRequest(make_shared<string>("CreateClusterHostGroup"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateClusterHostGroupResponse Alibabacloud_Ddi20200617::Client::createClusterHostGroup(shared_ptr<CreateClusterHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClusterHostGroupWithOptions(request, runtime);
}

DescribeClusterTemplateResponse Alibabacloud_Ddi20200617::Client::describeClusterTemplateWithOptions(shared_ptr<DescribeClusterTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClusterTemplateResponse(doRPCRequest(make_shared<string>("DescribeClusterTemplate"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClusterTemplateResponse Alibabacloud_Ddi20200617::Client::describeClusterTemplate(shared_ptr<DescribeClusterTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterTemplateWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Ddi20200617::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Ddi20200617::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

CommitFlowEntitySnapshotResponse Alibabacloud_Ddi20200617::Client::commitFlowEntitySnapshotWithOptions(shared_ptr<CommitFlowEntitySnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CommitFlowEntitySnapshotResponse(doRPCRequest(make_shared<string>("CommitFlowEntitySnapshot"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CommitFlowEntitySnapshotResponse Alibabacloud_Ddi20200617::Client::commitFlowEntitySnapshot(shared_ptr<CommitFlowEntitySnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return commitFlowEntitySnapshotWithOptions(request, runtime);
}

SubmitFlowJobResponse Alibabacloud_Ddi20200617::Client::submitFlowJobWithOptions(shared_ptr<SubmitFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitFlowJobResponse(doRPCRequest(make_shared<string>("SubmitFlowJob"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitFlowJobResponse Alibabacloud_Ddi20200617::Client::submitFlowJob(shared_ptr<SubmitFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFlowJobWithOptions(request, runtime);
}

ListFlowJobHistoryResponse Alibabacloud_Ddi20200617::Client::listFlowJobHistoryWithOptions(shared_ptr<ListFlowJobHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowJobHistoryResponse(doRPCRequest(make_shared<string>("ListFlowJobHistory"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowJobHistoryResponse Alibabacloud_Ddi20200617::Client::listFlowJobHistory(shared_ptr<ListFlowJobHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowJobHistoryWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Ddi20200617::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Ddi20200617::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListClusterHostComponentResponse Alibabacloud_Ddi20200617::Client::listClusterHostComponentWithOptions(shared_ptr<ListClusterHostComponentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClusterHostComponentResponse(doRPCRequest(make_shared<string>("ListClusterHostComponent"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClusterHostComponentResponse Alibabacloud_Ddi20200617::Client::listClusterHostComponent(shared_ptr<ListClusterHostComponentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterHostComponentWithOptions(request, runtime);
}

ModifyScalingGroupResponse Alibabacloud_Ddi20200617::Client::modifyScalingGroupWithOptions(shared_ptr<ModifyScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyScalingGroupResponse(doRPCRequest(make_shared<string>("ModifyScalingGroup"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyScalingGroupResponse Alibabacloud_Ddi20200617::Client::modifyScalingGroup(shared_ptr<ModifyScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScalingGroupWithOptions(request, runtime);
}

DescribeFlowProjectClusterSettingResponse Alibabacloud_Ddi20200617::Client::describeFlowProjectClusterSettingWithOptions(shared_ptr<DescribeFlowProjectClusterSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFlowProjectClusterSettingResponse(doRPCRequest(make_shared<string>("DescribeFlowProjectClusterSetting"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFlowProjectClusterSettingResponse Alibabacloud_Ddi20200617::Client::describeFlowProjectClusterSetting(shared_ptr<DescribeFlowProjectClusterSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowProjectClusterSettingWithOptions(request, runtime);
}

ListFlowProjectClusterSettingResponse Alibabacloud_Ddi20200617::Client::listFlowProjectClusterSettingWithOptions(shared_ptr<ListFlowProjectClusterSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowProjectClusterSettingResponse(doRPCRequest(make_shared<string>("ListFlowProjectClusterSetting"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowProjectClusterSettingResponse Alibabacloud_Ddi20200617::Client::listFlowProjectClusterSetting(shared_ptr<ListFlowProjectClusterSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowProjectClusterSettingWithOptions(request, runtime);
}

SubmitFlowResponse Alibabacloud_Ddi20200617::Client::submitFlowWithOptions(shared_ptr<SubmitFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitFlowResponse(doRPCRequest(make_shared<string>("SubmitFlow"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitFlowResponse Alibabacloud_Ddi20200617::Client::submitFlow(shared_ptr<SubmitFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFlowWithOptions(request, runtime);
}

DescribeScalingCommonConfigResponse Alibabacloud_Ddi20200617::Client::describeScalingCommonConfigWithOptions(shared_ptr<DescribeScalingCommonConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScalingCommonConfigResponse(doRPCRequest(make_shared<string>("DescribeScalingCommonConfig"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScalingCommonConfigResponse Alibabacloud_Ddi20200617::Client::describeScalingCommonConfig(shared_ptr<DescribeScalingCommonConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingCommonConfigWithOptions(request, runtime);
}

ResumeFlowResponse Alibabacloud_Ddi20200617::Client::resumeFlowWithOptions(shared_ptr<ResumeFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResumeFlowResponse(doRPCRequest(make_shared<string>("ResumeFlow"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResumeFlowResponse Alibabacloud_Ddi20200617::Client::resumeFlow(shared_ptr<ResumeFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeFlowWithOptions(request, runtime);
}

RestoreFlowEntitySnapshotResponse Alibabacloud_Ddi20200617::Client::restoreFlowEntitySnapshotWithOptions(shared_ptr<RestoreFlowEntitySnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestoreFlowEntitySnapshotResponse(doRPCRequest(make_shared<string>("RestoreFlowEntitySnapshot"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestoreFlowEntitySnapshotResponse Alibabacloud_Ddi20200617::Client::restoreFlowEntitySnapshot(shared_ptr<RestoreFlowEntitySnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restoreFlowEntitySnapshotWithOptions(request, runtime);
}

CreateLibraryResponse Alibabacloud_Ddi20200617::Client::createLibraryWithOptions(shared_ptr<CreateLibraryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLibraryResponse(doRPCRequest(make_shared<string>("CreateLibrary"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLibraryResponse Alibabacloud_Ddi20200617::Client::createLibrary(shared_ptr<CreateLibraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLibraryWithOptions(request, runtime);
}

ListVswitchResponse Alibabacloud_Ddi20200617::Client::listVswitchWithOptions(shared_ptr<ListVswitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVswitchResponse(doRPCRequest(make_shared<string>("ListVswitch"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVswitchResponse Alibabacloud_Ddi20200617::Client::listVswitch(shared_ptr<ListVswitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVswitchWithOptions(request, runtime);
}

DeleteFlowProjectResponse Alibabacloud_Ddi20200617::Client::deleteFlowProjectWithOptions(shared_ptr<DeleteFlowProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFlowProjectResponse(doRPCRequest(make_shared<string>("DeleteFlowProject"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFlowProjectResponse Alibabacloud_Ddi20200617::Client::deleteFlowProject(shared_ptr<DeleteFlowProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowProjectWithOptions(request, runtime);
}

ReleaseClusterResponse Alibabacloud_Ddi20200617::Client::releaseClusterWithOptions(shared_ptr<ReleaseClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseClusterResponse(doRPCRequest(make_shared<string>("ReleaseCluster"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseClusterResponse Alibabacloud_Ddi20200617::Client::releaseCluster(shared_ptr<ReleaseClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseClusterWithOptions(request, runtime);
}

AddScalingConfigItemResponse Alibabacloud_Ddi20200617::Client::addScalingConfigItemWithOptions(shared_ptr<AddScalingConfigItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddScalingConfigItemResponse(doRPCRequest(make_shared<string>("AddScalingConfigItem"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddScalingConfigItemResponse Alibabacloud_Ddi20200617::Client::addScalingConfigItem(shared_ptr<AddScalingConfigItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addScalingConfigItemWithOptions(request, runtime);
}

ResetUserPasswordResponse Alibabacloud_Ddi20200617::Client::resetUserPasswordWithOptions(shared_ptr<ResetUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetUserPasswordResponse(doRPCRequest(make_shared<string>("ResetUserPassword"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetUserPasswordResponse Alibabacloud_Ddi20200617::Client::resetUserPassword(shared_ptr<ResetUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetUserPasswordWithOptions(request, runtime);
}

ListFlowClusterAllHostsResponse Alibabacloud_Ddi20200617::Client::listFlowClusterAllHostsWithOptions(shared_ptr<ListFlowClusterAllHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowClusterAllHostsResponse(doRPCRequest(make_shared<string>("ListFlowClusterAllHosts"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowClusterAllHostsResponse Alibabacloud_Ddi20200617::Client::listFlowClusterAllHosts(shared_ptr<ListFlowClusterAllHostsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowClusterAllHostsWithOptions(request, runtime);
}

DeleteLibrariesResponse Alibabacloud_Ddi20200617::Client::deleteLibrariesWithOptions(shared_ptr<DeleteLibrariesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLibrariesResponse(doRPCRequest(make_shared<string>("DeleteLibraries"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLibrariesResponse Alibabacloud_Ddi20200617::Client::deleteLibraries(shared_ptr<DeleteLibrariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLibrariesWithOptions(request, runtime);
}

DescribeFlowCategoryTreeResponse Alibabacloud_Ddi20200617::Client::describeFlowCategoryTreeWithOptions(shared_ptr<DescribeFlowCategoryTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFlowCategoryTreeResponse(doRPCRequest(make_shared<string>("DescribeFlowCategoryTree"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFlowCategoryTreeResponse Alibabacloud_Ddi20200617::Client::describeFlowCategoryTree(shared_ptr<DescribeFlowCategoryTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowCategoryTreeWithOptions(request, runtime);
}

ListDatasourceInstancesResponse Alibabacloud_Ddi20200617::Client::listDatasourceInstancesWithOptions(shared_ptr<ListDatasourceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDatasourceInstancesResponse(doRPCRequest(make_shared<string>("ListDatasourceInstances"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDatasourceInstancesResponse Alibabacloud_Ddi20200617::Client::listDatasourceInstances(shared_ptr<ListDatasourceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatasourceInstancesWithOptions(request, runtime);
}

ListFlowNodeSqlResultResponse Alibabacloud_Ddi20200617::Client::listFlowNodeSqlResultWithOptions(shared_ptr<ListFlowNodeSqlResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowNodeSqlResultResponse(doRPCRequest(make_shared<string>("ListFlowNodeSqlResult"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowNodeSqlResultResponse Alibabacloud_Ddi20200617::Client::listFlowNodeSqlResult(shared_ptr<ListFlowNodeSqlResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowNodeSqlResultWithOptions(request, runtime);
}

DescribeFlowJobResponse Alibabacloud_Ddi20200617::Client::describeFlowJobWithOptions(shared_ptr<DescribeFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFlowJobResponse(doRPCRequest(make_shared<string>("DescribeFlowJob"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFlowJobResponse Alibabacloud_Ddi20200617::Client::describeFlowJob(shared_ptr<DescribeFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowJobWithOptions(request, runtime);
}

DescribeLibraryInstallTaskDetailResponse Alibabacloud_Ddi20200617::Client::describeLibraryInstallTaskDetailWithOptions(shared_ptr<DescribeLibraryInstallTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLibraryInstallTaskDetailResponse(doRPCRequest(make_shared<string>("DescribeLibraryInstallTaskDetail"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLibraryInstallTaskDetailResponse Alibabacloud_Ddi20200617::Client::describeLibraryInstallTaskDetail(shared_ptr<DescribeLibraryInstallTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLibraryInstallTaskDetailWithOptions(request, runtime);
}

ModifyFlowForWebResponse Alibabacloud_Ddi20200617::Client::modifyFlowForWebWithOptions(shared_ptr<ModifyFlowForWebRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyFlowForWebResponse(doRPCRequest(make_shared<string>("ModifyFlowForWeb"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyFlowForWebResponse Alibabacloud_Ddi20200617::Client::modifyFlowForWeb(shared_ptr<ModifyFlowForWebRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFlowForWebWithOptions(request, runtime);
}

RemoveScalingConfigItemResponse Alibabacloud_Ddi20200617::Client::removeScalingConfigItemWithOptions(shared_ptr<RemoveScalingConfigItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveScalingConfigItemResponse(doRPCRequest(make_shared<string>("RemoveScalingConfigItem"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveScalingConfigItemResponse Alibabacloud_Ddi20200617::Client::removeScalingConfigItem(shared_ptr<RemoveScalingConfigItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeScalingConfigItemWithOptions(request, runtime);
}

DescribeSecurityWhiteListResponse Alibabacloud_Ddi20200617::Client::describeSecurityWhiteListWithOptions(shared_ptr<DescribeSecurityWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityWhiteListResponse(doRPCRequest(make_shared<string>("DescribeSecurityWhiteList"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityWhiteListResponse Alibabacloud_Ddi20200617::Client::describeSecurityWhiteList(shared_ptr<DescribeSecurityWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityWhiteListWithOptions(request, runtime);
}

DescribeFlowNodeInstanceContainerLogResponse Alibabacloud_Ddi20200617::Client::describeFlowNodeInstanceContainerLogWithOptions(shared_ptr<DescribeFlowNodeInstanceContainerLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFlowNodeInstanceContainerLogResponse(doRPCRequest(make_shared<string>("DescribeFlowNodeInstanceContainerLog"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFlowNodeInstanceContainerLogResponse Alibabacloud_Ddi20200617::Client::describeFlowNodeInstanceContainerLog(shared_ptr<DescribeFlowNodeInstanceContainerLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowNodeInstanceContainerLogWithOptions(request, runtime);
}

RerunFlowResponse Alibabacloud_Ddi20200617::Client::rerunFlowWithOptions(shared_ptr<RerunFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RerunFlowResponse(doRPCRequest(make_shared<string>("RerunFlow"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RerunFlowResponse Alibabacloud_Ddi20200617::Client::rerunFlow(shared_ptr<RerunFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rerunFlowWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_Ddi20200617::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagKeysResponse(doRPCRequest(make_shared<string>("ListTagKeys"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagKeysResponse Alibabacloud_Ddi20200617::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

DescribeClusterOperationHostTaskLogResponse Alibabacloud_Ddi20200617::Client::describeClusterOperationHostTaskLogWithOptions(shared_ptr<DescribeClusterOperationHostTaskLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClusterOperationHostTaskLogResponse(doRPCRequest(make_shared<string>("DescribeClusterOperationHostTaskLog"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClusterOperationHostTaskLogResponse Alibabacloud_Ddi20200617::Client::describeClusterOperationHostTaskLog(shared_ptr<DescribeClusterOperationHostTaskLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterOperationHostTaskLogWithOptions(request, runtime);
}

KillFlowJobResponse Alibabacloud_Ddi20200617::Client::killFlowJobWithOptions(shared_ptr<KillFlowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return KillFlowJobResponse(doRPCRequest(make_shared<string>("KillFlowJob"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

KillFlowJobResponse Alibabacloud_Ddi20200617::Client::killFlowJob(shared_ptr<KillFlowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return killFlowJobWithOptions(request, runtime);
}

UninstallLibrariesResponse Alibabacloud_Ddi20200617::Client::uninstallLibrariesWithOptions(shared_ptr<UninstallLibrariesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UninstallLibrariesResponse(doRPCRequest(make_shared<string>("UninstallLibraries"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UninstallLibrariesResponse Alibabacloud_Ddi20200617::Client::uninstallLibraries(shared_ptr<UninstallLibrariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uninstallLibrariesWithOptions(request, runtime);
}

DescribeClusterV2Response Alibabacloud_Ddi20200617::Client::describeClusterV2WithOptions(shared_ptr<DescribeClusterV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClusterV2Response(doRPCRequest(make_shared<string>("DescribeClusterV2"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClusterV2Response Alibabacloud_Ddi20200617::Client::describeClusterV2(shared_ptr<DescribeClusterV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterV2WithOptions(request, runtime);
}

DescribeFlowResponse Alibabacloud_Ddi20200617::Client::describeFlowWithOptions(shared_ptr<DescribeFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFlowResponse(doRPCRequest(make_shared<string>("DescribeFlow"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFlowResponse Alibabacloud_Ddi20200617::Client::describeFlow(shared_ptr<DescribeFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowWithOptions(request, runtime);
}

ListFlowClusterResponse Alibabacloud_Ddi20200617::Client::listFlowClusterWithOptions(shared_ptr<ListFlowClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowClusterResponse(doRPCRequest(make_shared<string>("ListFlowCluster"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowClusterResponse Alibabacloud_Ddi20200617::Client::listFlowCluster(shared_ptr<ListFlowClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowClusterWithOptions(request, runtime);
}

ListLdapUsersResponse Alibabacloud_Ddi20200617::Client::listLdapUsersWithOptions(shared_ptr<ListLdapUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListLdapUsersResponse(doRPCRequest(make_shared<string>("ListLdapUsers"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLdapUsersResponse Alibabacloud_Ddi20200617::Client::listLdapUsers(shared_ptr<ListLdapUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLdapUsersWithOptions(request, runtime);
}

DeleteUserResponse Alibabacloud_Ddi20200617::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteUserResponse(doRPCRequest(make_shared<string>("DeleteUser"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUserResponse Alibabacloud_Ddi20200617::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWithOptions(request, runtime);
}

CreateFlowProjectClusterSettingResponse Alibabacloud_Ddi20200617::Client::createFlowProjectClusterSettingWithOptions(shared_ptr<CreateFlowProjectClusterSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFlowProjectClusterSettingResponse(doRPCRequest(make_shared<string>("CreateFlowProjectClusterSetting"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFlowProjectClusterSettingResponse Alibabacloud_Ddi20200617::Client::createFlowProjectClusterSetting(shared_ptr<CreateFlowProjectClusterSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowProjectClusterSettingWithOptions(request, runtime);
}

DescribeFlowInstanceResponse Alibabacloud_Ddi20200617::Client::describeFlowInstanceWithOptions(shared_ptr<DescribeFlowInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFlowInstanceResponse(doRPCRequest(make_shared<string>("DescribeFlowInstance"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFlowInstanceResponse Alibabacloud_Ddi20200617::Client::describeFlowInstance(shared_ptr<DescribeFlowInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFlowInstanceWithOptions(request, runtime);
}

CreateFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::createFlowProjectUserWithOptions(shared_ptr<CreateFlowProjectUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFlowProjectUserResponse(doRPCRequest(make_shared<string>("CreateFlowProjectUser"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::createFlowProjectUser(shared_ptr<CreateFlowProjectUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowProjectUserWithOptions(request, runtime);
}

CreateFlowCategoryResponse Alibabacloud_Ddi20200617::Client::createFlowCategoryWithOptions(shared_ptr<CreateFlowCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFlowCategoryResponse(doRPCRequest(make_shared<string>("CreateFlowCategory"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFlowCategoryResponse Alibabacloud_Ddi20200617::Client::createFlowCategory(shared_ptr<CreateFlowCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFlowCategoryWithOptions(request, runtime);
}

DeleteFlowProjectClusterSettingResponse Alibabacloud_Ddi20200617::Client::deleteFlowProjectClusterSettingWithOptions(shared_ptr<DeleteFlowProjectClusterSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFlowProjectClusterSettingResponse(doRPCRequest(make_shared<string>("DeleteFlowProjectClusterSetting"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFlowProjectClusterSettingResponse Alibabacloud_Ddi20200617::Client::deleteFlowProjectClusterSetting(shared_ptr<DeleteFlowProjectClusterSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowProjectClusterSettingWithOptions(request, runtime);
}

ListLibrariesResponse Alibabacloud_Ddi20200617::Client::listLibrariesWithOptions(shared_ptr<ListLibrariesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListLibrariesResponse(doRPCRequest(make_shared<string>("ListLibraries"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLibrariesResponse Alibabacloud_Ddi20200617::Client::listLibraries(shared_ptr<ListLibrariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLibrariesWithOptions(request, runtime);
}

RunScalingActionResponse Alibabacloud_Ddi20200617::Client::runScalingActionWithOptions(shared_ptr<RunScalingActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RunScalingActionResponse(doRPCRequest(make_shared<string>("RunScalingAction"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunScalingActionResponse Alibabacloud_Ddi20200617::Client::runScalingAction(shared_ptr<RunScalingActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runScalingActionWithOptions(request, runtime);
}

InstallLibrariesResponse Alibabacloud_Ddi20200617::Client::installLibrariesWithOptions(shared_ptr<InstallLibrariesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InstallLibrariesResponse(doRPCRequest(make_shared<string>("InstallLibraries"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InstallLibrariesResponse Alibabacloud_Ddi20200617::Client::installLibraries(shared_ptr<InstallLibrariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installLibrariesWithOptions(request, runtime);
}

ListFlowJobsResponse Alibabacloud_Ddi20200617::Client::listFlowJobsWithOptions(shared_ptr<ListFlowJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowJobsResponse(doRPCRequest(make_shared<string>("ListFlowJobs"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowJobsResponse Alibabacloud_Ddi20200617::Client::listFlowJobs(shared_ptr<ListFlowJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowJobsWithOptions(request, runtime);
}

ModifyFlowResponse Alibabacloud_Ddi20200617::Client::modifyFlowWithOptions(shared_ptr<ModifyFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyFlowResponse(doRPCRequest(make_shared<string>("ModifyFlow"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyFlowResponse Alibabacloud_Ddi20200617::Client::modifyFlow(shared_ptr<ModifyFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFlowWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ddi20200617::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Ddi20200617::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

ListLibraryStatusResponse Alibabacloud_Ddi20200617::Client::listLibraryStatusWithOptions(shared_ptr<ListLibraryStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListLibraryStatusResponse(doRPCRequest(make_shared<string>("ListLibraryStatus"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLibraryStatusResponse Alibabacloud_Ddi20200617::Client::listLibraryStatus(shared_ptr<ListLibraryStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLibraryStatusWithOptions(request, runtime);
}

DescribeClusterServiceConfigResponse Alibabacloud_Ddi20200617::Client::describeClusterServiceConfigWithOptions(shared_ptr<DescribeClusterServiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClusterServiceConfigResponse(doRPCRequest(make_shared<string>("DescribeClusterServiceConfig"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClusterServiceConfigResponse Alibabacloud_Ddi20200617::Client::describeClusterServiceConfig(shared_ptr<DescribeClusterServiceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterServiceConfigWithOptions(request, runtime);
}

ModifyFlowProjectClusterSettingResponse Alibabacloud_Ddi20200617::Client::modifyFlowProjectClusterSettingWithOptions(shared_ptr<ModifyFlowProjectClusterSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyFlowProjectClusterSettingResponse(doRPCRequest(make_shared<string>("ModifyFlowProjectClusterSetting"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyFlowProjectClusterSettingResponse Alibabacloud_Ddi20200617::Client::modifyFlowProjectClusterSetting(shared_ptr<ModifyFlowProjectClusterSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFlowProjectClusterSettingWithOptions(request, runtime);
}

DeleteFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::deleteFlowProjectUserWithOptions(shared_ptr<DeleteFlowProjectUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFlowProjectUserResponse(doRPCRequest(make_shared<string>("DeleteFlowProjectUser"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::deleteFlowProjectUser(shared_ptr<DeleteFlowProjectUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFlowProjectUserWithOptions(request, runtime);
}

CreateClusterV2Response Alibabacloud_Ddi20200617::Client::createClusterV2WithOptions(shared_ptr<CreateClusterV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateClusterV2Response(doRPCRequest(make_shared<string>("CreateClusterV2"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateClusterV2Response Alibabacloud_Ddi20200617::Client::createClusterV2(shared_ptr<CreateClusterV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClusterV2WithOptions(request, runtime);
}

ModifyClusterNameResponse Alibabacloud_Ddi20200617::Client::modifyClusterNameWithOptions(shared_ptr<ModifyClusterNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyClusterNameResponse(doRPCRequest(make_shared<string>("ModifyClusterName"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyClusterNameResponse Alibabacloud_Ddi20200617::Client::modifyClusterName(shared_ptr<ModifyClusterNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyClusterNameWithOptions(request, runtime);
}

ListClusterOperationHostTaskResponse Alibabacloud_Ddi20200617::Client::listClusterOperationHostTaskWithOptions(shared_ptr<ListClusterOperationHostTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClusterOperationHostTaskResponse(doRPCRequest(make_shared<string>("ListClusterOperationHostTask"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClusterOperationHostTaskResponse Alibabacloud_Ddi20200617::Client::listClusterOperationHostTask(shared_ptr<ListClusterOperationHostTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterOperationHostTaskWithOptions(request, runtime);
}

DescribeScalingConfigItemResponse Alibabacloud_Ddi20200617::Client::describeScalingConfigItemWithOptions(shared_ptr<DescribeScalingConfigItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScalingConfigItemResponse(doRPCRequest(make_shared<string>("DescribeScalingConfigItem"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScalingConfigItemResponse Alibabacloud_Ddi20200617::Client::describeScalingConfigItem(shared_ptr<DescribeScalingConfigItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScalingConfigItemWithOptions(request, runtime);
}

ListClusterHostResponse Alibabacloud_Ddi20200617::Client::listClusterHostWithOptions(shared_ptr<ListClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListClusterHostResponse(doRPCRequest(make_shared<string>("ListClusterHost"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListClusterHostResponse Alibabacloud_Ddi20200617::Client::listClusterHost(shared_ptr<ListClusterHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterHostWithOptions(request, runtime);
}

CreateScalingGroupResponse Alibabacloud_Ddi20200617::Client::createScalingGroupWithOptions(shared_ptr<CreateScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateScalingGroupResponse(doRPCRequest(make_shared<string>("CreateScalingGroup"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateScalingGroupResponse Alibabacloud_Ddi20200617::Client::createScalingGroup(shared_ptr<CreateScalingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScalingGroupWithOptions(request, runtime);
}

DescribeClusterServiceResponse Alibabacloud_Ddi20200617::Client::describeClusterServiceWithOptions(shared_ptr<DescribeClusterServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClusterServiceResponse(doRPCRequest(make_shared<string>("DescribeClusterService"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClusterServiceResponse Alibabacloud_Ddi20200617::Client::describeClusterService(shared_ptr<DescribeClusterServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterServiceWithOptions(request, runtime);
}

ListFlowProjectsResponse Alibabacloud_Ddi20200617::Client::listFlowProjectsWithOptions(shared_ptr<ListFlowProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowProjectsResponse(doRPCRequest(make_shared<string>("ListFlowProjects"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowProjectsResponse Alibabacloud_Ddi20200617::Client::listFlowProjects(shared_ptr<ListFlowProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowProjectsWithOptions(request, runtime);
}

CreateMetaTablePreviewTaskResponse Alibabacloud_Ddi20200617::Client::createMetaTablePreviewTaskWithOptions(shared_ptr<CreateMetaTablePreviewTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMetaTablePreviewTaskResponse(doRPCRequest(make_shared<string>("CreateMetaTablePreviewTask"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMetaTablePreviewTaskResponse Alibabacloud_Ddi20200617::Client::createMetaTablePreviewTask(shared_ptr<CreateMetaTablePreviewTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMetaTablePreviewTaskWithOptions(request, runtime);
}

ListFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::listFlowProjectUserWithOptions(shared_ptr<ListFlowProjectUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowProjectUserResponse(doRPCRequest(make_shared<string>("ListFlowProjectUser"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowProjectUserResponse Alibabacloud_Ddi20200617::Client::listFlowProjectUser(shared_ptr<ListFlowProjectUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowProjectUserWithOptions(request, runtime);
}

DeleteClusterHostGroupResponse Alibabacloud_Ddi20200617::Client::deleteClusterHostGroupWithOptions(shared_ptr<DeleteClusterHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteClusterHostGroupResponse(doRPCRequest(make_shared<string>("DeleteClusterHostGroup"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteClusterHostGroupResponse Alibabacloud_Ddi20200617::Client::deleteClusterHostGroup(shared_ptr<DeleteClusterHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClusterHostGroupWithOptions(request, runtime);
}

DescribeLibraryDetailResponse Alibabacloud_Ddi20200617::Client::describeLibraryDetailWithOptions(shared_ptr<DescribeLibraryDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLibraryDetailResponse(doRPCRequest(make_shared<string>("DescribeLibraryDetail"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLibraryDetailResponse Alibabacloud_Ddi20200617::Client::describeLibraryDetail(shared_ptr<DescribeLibraryDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLibraryDetailWithOptions(request, runtime);
}

ListFlowsResponse Alibabacloud_Ddi20200617::Client::listFlowsWithOptions(shared_ptr<ListFlowsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFlowsResponse(doRPCRequest(make_shared<string>("ListFlows"), make_shared<string>("2020-06-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFlowsResponse Alibabacloud_Ddi20200617::Client::listFlows(shared_ptr<ListFlowsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlowsWithOptions(request, runtime);
}

