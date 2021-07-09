// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/devops_rdc_20200303.hpp>
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

using namespace Alibabacloud_Devops-rdc20200303;

Alibabacloud_Devops-rdc20200303::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("devops-rdc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Devops-rdc20200303::Client::getEndpoint(shared_ptr<string> productId,
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

InsertPipelineMemberResponse Alibabacloud_Devops-rdc20200303::Client::insertPipelineMemberWithOptions(shared_ptr<InsertPipelineMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InsertPipelineMemberResponse(doRPCRequest(make_shared<string>("InsertPipelineMember"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InsertPipelineMemberResponse Alibabacloud_Devops-rdc20200303::Client::insertPipelineMember(shared_ptr<InsertPipelineMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertPipelineMemberWithOptions(request, runtime);
}

ListDevopsProjectTaskFlowResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjectTaskFlowWithOptions(shared_ptr<ListDevopsProjectTaskFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDevopsProjectTaskFlowResponse(doRPCRequest(make_shared<string>("ListDevopsProjectTaskFlow"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDevopsProjectTaskFlowResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjectTaskFlow(shared_ptr<ListDevopsProjectTaskFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevopsProjectTaskFlowWithOptions(request, runtime);
}

GetDevopsProjectMembersResponse Alibabacloud_Devops-rdc20200303::Client::getDevopsProjectMembersWithOptions(shared_ptr<GetDevopsProjectMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDevopsProjectMembersResponse(doRPCRequest(make_shared<string>("GetDevopsProjectMembers"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDevopsProjectMembersResponse Alibabacloud_Devops-rdc20200303::Client::getDevopsProjectMembers(shared_ptr<GetDevopsProjectMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDevopsProjectMembersWithOptions(request, runtime);
}

AddCodeupSourceToPipelineResponse Alibabacloud_Devops-rdc20200303::Client::addCodeupSourceToPipelineWithOptions(shared_ptr<AddCodeupSourceToPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddCodeupSourceToPipelineResponse(doRPCRequest(make_shared<string>("AddCodeupSourceToPipeline"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddCodeupSourceToPipelineResponse Alibabacloud_Devops-rdc20200303::Client::addCodeupSourceToPipeline(shared_ptr<AddCodeupSourceToPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCodeupSourceToPipelineWithOptions(request, runtime);
}

DeleteDevopsProjectSprintResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsProjectSprintWithOptions(shared_ptr<DeleteDevopsProjectSprintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDevopsProjectSprintResponse(doRPCRequest(make_shared<string>("DeleteDevopsProjectSprint"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDevopsProjectSprintResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsProjectSprint(shared_ptr<DeleteDevopsProjectSprintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevopsProjectSprintWithOptions(request, runtime);
}

DeleteCommonGroupResponse Alibabacloud_Devops-rdc20200303::Client::deleteCommonGroupWithOptions(shared_ptr<DeleteCommonGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCommonGroupResponse(doRPCRequest(make_shared<string>("DeleteCommonGroup"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCommonGroupResponse Alibabacloud_Devops-rdc20200303::Client::deleteCommonGroup(shared_ptr<DeleteCommonGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCommonGroupWithOptions(request, runtime);
}

ListProjectCustomFieldsResponse Alibabacloud_Devops-rdc20200303::Client::listProjectCustomFieldsWithOptions(shared_ptr<ListProjectCustomFieldsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProjectCustomFieldsResponse(doRPCRequest(make_shared<string>("ListProjectCustomFields"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProjectCustomFieldsResponse Alibabacloud_Devops-rdc20200303::Client::listProjectCustomFields(shared_ptr<ListProjectCustomFieldsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectCustomFieldsWithOptions(request, runtime);
}

InsertDevopsUserResponse Alibabacloud_Devops-rdc20200303::Client::insertDevopsUserWithOptions(shared_ptr<InsertDevopsUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InsertDevopsUserResponse(doRPCRequest(make_shared<string>("InsertDevopsUser"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InsertDevopsUserResponse Alibabacloud_Devops-rdc20200303::Client::insertDevopsUser(shared_ptr<InsertDevopsUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertDevopsUserWithOptions(request, runtime);
}

UpdateDevopsProjectResponse Alibabacloud_Devops-rdc20200303::Client::updateDevopsProjectWithOptions(shared_ptr<UpdateDevopsProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDevopsProjectResponse(doRPCRequest(make_shared<string>("UpdateDevopsProject"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDevopsProjectResponse Alibabacloud_Devops-rdc20200303::Client::updateDevopsProject(shared_ptr<UpdateDevopsProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDevopsProjectWithOptions(request, runtime);
}

CheckAliyunAccountExistsResponse Alibabacloud_Devops-rdc20200303::Client::checkAliyunAccountExistsWithOptions(shared_ptr<CheckAliyunAccountExistsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckAliyunAccountExistsResponse(doRPCRequest(make_shared<string>("CheckAliyunAccountExists"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckAliyunAccountExistsResponse Alibabacloud_Devops-rdc20200303::Client::checkAliyunAccountExists(shared_ptr<CheckAliyunAccountExistsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkAliyunAccountExistsWithOptions(request, runtime);
}

GetPipelineInstanceInfoResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineInstanceInfoWithOptions(shared_ptr<GetPipelineInstanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPipelineInstanceInfoResponse(doRPCRequest(make_shared<string>("GetPipelineInstanceInfo"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPipelineInstanceInfoResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineInstanceInfo(shared_ptr<GetPipelineInstanceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipelineInstanceInfoWithOptions(request, runtime);
}

BatchInsertMembersResponse Alibabacloud_Devops-rdc20200303::Client::batchInsertMembersWithOptions(shared_ptr<BatchInsertMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchInsertMembersResponse(doRPCRequest(make_shared<string>("BatchInsertMembers"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchInsertMembersResponse Alibabacloud_Devops-rdc20200303::Client::batchInsertMembers(shared_ptr<BatchInsertMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchInsertMembersWithOptions(request, runtime);
}

ListServiceConnectionsResponse Alibabacloud_Devops-rdc20200303::Client::listServiceConnectionsWithOptions(shared_ptr<ListServiceConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListServiceConnectionsResponse(doRPCRequest(make_shared<string>("ListServiceConnections"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListServiceConnectionsResponse Alibabacloud_Devops-rdc20200303::Client::listServiceConnections(shared_ptr<ListServiceConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceConnectionsWithOptions(request, runtime);
}

GetUserNameResponse Alibabacloud_Devops-rdc20200303::Client::getUserNameWithOptions(shared_ptr<GetUserNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserNameResponse(doRPCRequest(make_shared<string>("GetUserName"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserNameResponse Alibabacloud_Devops-rdc20200303::Client::getUserName(shared_ptr<GetUserNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserNameWithOptions(request, runtime);
}

InsertProjectMembersResponse Alibabacloud_Devops-rdc20200303::Client::insertProjectMembersWithOptions(shared_ptr<InsertProjectMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InsertProjectMembersResponse(doRPCRequest(make_shared<string>("InsertProjectMembers"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InsertProjectMembersResponse Alibabacloud_Devops-rdc20200303::Client::insertProjectMembers(shared_ptr<InsertProjectMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertProjectMembersWithOptions(request, runtime);
}

ListDevopsProjectTaskListResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjectTaskListWithOptions(shared_ptr<ListDevopsProjectTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDevopsProjectTaskListResponse(doRPCRequest(make_shared<string>("ListDevopsProjectTaskList"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDevopsProjectTaskListResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjectTaskList(shared_ptr<ListDevopsProjectTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevopsProjectTaskListWithOptions(request, runtime);
}

GetTaskDetailBaseResponse Alibabacloud_Devops-rdc20200303::Client::getTaskDetailBaseWithOptions(shared_ptr<GetTaskDetailBaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTaskDetailBaseResponse(doRPCRequest(make_shared<string>("GetTaskDetailBase"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTaskDetailBaseResponse Alibabacloud_Devops-rdc20200303::Client::getTaskDetailBase(shared_ptr<GetTaskDetailBaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskDetailBaseWithOptions(request, runtime);
}

DeleteDevopsProjectMembersResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsProjectMembersWithOptions(shared_ptr<DeleteDevopsProjectMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDevopsProjectMembersResponse(doRPCRequest(make_shared<string>("DeleteDevopsProjectMembers"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDevopsProjectMembersResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsProjectMembers(shared_ptr<DeleteDevopsProjectMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevopsProjectMembersWithOptions(request, runtime);
}

CreateDevopsProjectSprintResponse Alibabacloud_Devops-rdc20200303::Client::createDevopsProjectSprintWithOptions(shared_ptr<CreateDevopsProjectSprintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDevopsProjectSprintResponse(doRPCRequest(make_shared<string>("CreateDevopsProjectSprint"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDevopsProjectSprintResponse Alibabacloud_Devops-rdc20200303::Client::createDevopsProjectSprint(shared_ptr<CreateDevopsProjectSprintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDevopsProjectSprintWithOptions(request, runtime);
}

UpdateDevopsProjectSprintResponse Alibabacloud_Devops-rdc20200303::Client::updateDevopsProjectSprintWithOptions(shared_ptr<UpdateDevopsProjectSprintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDevopsProjectSprintResponse(doRPCRequest(make_shared<string>("UpdateDevopsProjectSprint"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDevopsProjectSprintResponse Alibabacloud_Devops-rdc20200303::Client::updateDevopsProjectSprint(shared_ptr<UpdateDevopsProjectSprintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDevopsProjectSprintWithOptions(request, runtime);
}

DeleteDevopsOrganizationResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsOrganizationWithOptions(shared_ptr<DeleteDevopsOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDevopsOrganizationResponse(doRPCRequest(make_shared<string>("DeleteDevopsOrganization"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDevopsOrganizationResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsOrganization(shared_ptr<DeleteDevopsOrganizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevopsOrganizationWithOptions(request, runtime);
}

CancelPipelineResponse Alibabacloud_Devops-rdc20200303::Client::cancelPipelineWithOptions(shared_ptr<CancelPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelPipelineResponse(doRPCRequest(make_shared<string>("CancelPipeline"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelPipelineResponse Alibabacloud_Devops-rdc20200303::Client::cancelPipeline(shared_ptr<CancelPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelPipelineWithOptions(request, runtime);
}

ListDevopsProjectTaskFlowStatusResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjectTaskFlowStatusWithOptions(shared_ptr<ListDevopsProjectTaskFlowStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDevopsProjectTaskFlowStatusResponse(doRPCRequest(make_shared<string>("ListDevopsProjectTaskFlowStatus"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDevopsProjectTaskFlowStatusResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjectTaskFlowStatus(shared_ptr<ListDevopsProjectTaskFlowStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevopsProjectTaskFlowStatusWithOptions(request, runtime);
}

ListUserOrganizationResponse Alibabacloud_Devops-rdc20200303::Client::listUserOrganizationWithOptions(shared_ptr<ListUserOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUserOrganizationResponse(doRPCRequest(make_shared<string>("ListUserOrganization"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUserOrganizationResponse Alibabacloud_Devops-rdc20200303::Client::listUserOrganization(shared_ptr<ListUserOrganizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserOrganizationWithOptions(request, runtime);
}

UpdatePipelineEnvVarsResponse Alibabacloud_Devops-rdc20200303::Client::updatePipelineEnvVarsWithOptions(shared_ptr<UpdatePipelineEnvVarsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdatePipelineEnvVarsResponse(doRPCRequest(make_shared<string>("UpdatePipelineEnvVars"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdatePipelineEnvVarsResponse Alibabacloud_Devops-rdc20200303::Client::updatePipelineEnvVars(shared_ptr<UpdatePipelineEnvVarsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePipelineEnvVarsWithOptions(request, runtime);
}

DeleteDevopsProjectResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsProjectWithOptions(shared_ptr<DeleteDevopsProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDevopsProjectResponse(doRPCRequest(make_shared<string>("DeleteDevopsProject"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDevopsProjectResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsProject(shared_ptr<DeleteDevopsProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevopsProjectWithOptions(request, runtime);
}

GetPipelineInstanceStatusResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineInstanceStatusWithOptions(shared_ptr<GetPipelineInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPipelineInstanceStatusResponse(doRPCRequest(make_shared<string>("GetPipelineInstanceStatus"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPipelineInstanceStatusResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineInstanceStatus(shared_ptr<GetPipelineInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipelineInstanceStatusWithOptions(request, runtime);
}

GetPipelineLogResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineLogWithOptions(shared_ptr<GetPipelineLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPipelineLogResponse(doRPCRequest(make_shared<string>("GetPipelineLog"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPipelineLogResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineLog(shared_ptr<GetPipelineLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipelineLogWithOptions(request, runtime);
}

GetUserByAliyunUidResponse Alibabacloud_Devops-rdc20200303::Client::getUserByAliyunUidWithOptions(shared_ptr<GetUserByAliyunUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserByAliyunUidResponse(doRPCRequest(make_shared<string>("GetUserByAliyunUid"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserByAliyunUidResponse Alibabacloud_Devops-rdc20200303::Client::getUserByAliyunUid(shared_ptr<GetUserByAliyunUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserByAliyunUidWithOptions(request, runtime);
}

UpdatePipelineMemberResponse Alibabacloud_Devops-rdc20200303::Client::updatePipelineMemberWithOptions(shared_ptr<UpdatePipelineMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdatePipelineMemberResponse(doRPCRequest(make_shared<string>("UpdatePipelineMember"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdatePipelineMemberResponse Alibabacloud_Devops-rdc20200303::Client::updatePipelineMember(shared_ptr<UpdatePipelineMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePipelineMemberWithOptions(request, runtime);
}

ListDevopsProjectsResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjectsWithOptions(shared_ptr<ListDevopsProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDevopsProjectsResponse(doRPCRequest(make_shared<string>("ListDevopsProjects"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDevopsProjectsResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjects(shared_ptr<ListDevopsProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevopsProjectsWithOptions(request, runtime);
}

CreateDevopsProjectTaskResponse Alibabacloud_Devops-rdc20200303::Client::createDevopsProjectTaskWithOptions(shared_ptr<CreateDevopsProjectTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDevopsProjectTaskResponse(doRPCRequest(make_shared<string>("CreateDevopsProjectTask"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDevopsProjectTaskResponse Alibabacloud_Devops-rdc20200303::Client::createDevopsProjectTask(shared_ptr<CreateDevopsProjectTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDevopsProjectTaskWithOptions(request, runtime);
}

GetPipelineInstanceBuildNumberStatusResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineInstanceBuildNumberStatusWithOptions(shared_ptr<GetPipelineInstanceBuildNumberStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPipelineInstanceBuildNumberStatusResponse(doRPCRequest(make_shared<string>("GetPipelineInstanceBuildNumberStatus"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPipelineInstanceBuildNumberStatusResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineInstanceBuildNumberStatus(shared_ptr<GetPipelineInstanceBuildNumberStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipelineInstanceBuildNumberStatusWithOptions(request, runtime);
}

ListDevopsProjectSprintsResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjectSprintsWithOptions(shared_ptr<ListDevopsProjectSprintsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDevopsProjectSprintsResponse(doRPCRequest(make_shared<string>("ListDevopsProjectSprints"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDevopsProjectSprintsResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjectSprints(shared_ptr<ListDevopsProjectSprintsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevopsProjectSprintsWithOptions(request, runtime);
}

GetDevopsProjectInfoResponse Alibabacloud_Devops-rdc20200303::Client::getDevopsProjectInfoWithOptions(shared_ptr<GetDevopsProjectInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDevopsProjectInfoResponse(doRPCRequest(make_shared<string>("GetDevopsProjectInfo"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDevopsProjectInfoResponse Alibabacloud_Devops-rdc20200303::Client::getDevopsProjectInfo(shared_ptr<GetDevopsProjectInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDevopsProjectInfoWithOptions(request, runtime);
}

DeletePipelineMemberResponse Alibabacloud_Devops-rdc20200303::Client::deletePipelineMemberWithOptions(shared_ptr<DeletePipelineMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePipelineMemberResponse(doRPCRequest(make_shared<string>("DeletePipelineMember"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePipelineMemberResponse Alibabacloud_Devops-rdc20200303::Client::deletePipelineMember(shared_ptr<DeletePipelineMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePipelineMemberWithOptions(request, runtime);
}

GetDevopsProjectSprintInfoResponse Alibabacloud_Devops-rdc20200303::Client::getDevopsProjectSprintInfoWithOptions(shared_ptr<GetDevopsProjectSprintInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDevopsProjectSprintInfoResponse(doRPCRequest(make_shared<string>("GetDevopsProjectSprintInfo"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDevopsProjectSprintInfoResponse Alibabacloud_Devops-rdc20200303::Client::getDevopsProjectSprintInfo(shared_ptr<GetDevopsProjectSprintInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDevopsProjectSprintInfoWithOptions(request, runtime);
}

DeleteDevopsOrganizationMembersResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsOrganizationMembersWithOptions(shared_ptr<DeleteDevopsOrganizationMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDevopsOrganizationMembersResponse(doRPCRequest(make_shared<string>("DeleteDevopsOrganizationMembers"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDevopsOrganizationMembersResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsOrganizationMembers(shared_ptr<DeleteDevopsOrganizationMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevopsOrganizationMembersWithOptions(request, runtime);
}

GetLastWorkspaceResponse Alibabacloud_Devops-rdc20200303::Client::getLastWorkspaceWithOptions(shared_ptr<GetLastWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLastWorkspaceResponse(doRPCRequest(make_shared<string>("GetLastWorkspace"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLastWorkspaceResponse Alibabacloud_Devops-rdc20200303::Client::getLastWorkspace(shared_ptr<GetLastWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLastWorkspaceWithOptions(request, runtime);
}

CreateCredentialResponse Alibabacloud_Devops-rdc20200303::Client::createCredentialWithOptions(shared_ptr<CreateCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCredentialResponse(doRPCRequest(make_shared<string>("CreateCredential"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCredentialResponse Alibabacloud_Devops-rdc20200303::Client::createCredential(shared_ptr<CreateCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCredentialWithOptions(request, runtime);
}

ListCredentialsResponse Alibabacloud_Devops-rdc20200303::Client::listCredentialsWithOptions(shared_ptr<ListCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCredentialsResponse(doRPCRequest(make_shared<string>("ListCredentials"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCredentialsResponse Alibabacloud_Devops-rdc20200303::Client::listCredentials(shared_ptr<ListCredentialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCredentialsWithOptions(request, runtime);
}

CreatePipelineResponse Alibabacloud_Devops-rdc20200303::Client::createPipelineWithOptions(shared_ptr<CreatePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePipelineResponse(doRPCRequest(make_shared<string>("CreatePipeline"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePipelineResponse Alibabacloud_Devops-rdc20200303::Client::createPipeline(shared_ptr<CreatePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPipelineWithOptions(request, runtime);
}

ListPipelinesResponse Alibabacloud_Devops-rdc20200303::Client::listPipelinesWithOptions(shared_ptr<ListPipelinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPipelinesResponse(doRPCRequest(make_shared<string>("ListPipelines"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPipelinesResponse Alibabacloud_Devops-rdc20200303::Client::listPipelines(shared_ptr<ListPipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPipelinesWithOptions(request, runtime);
}

CreatePipelineFromTemplateResponse Alibabacloud_Devops-rdc20200303::Client::createPipelineFromTemplateWithOptions(shared_ptr<CreatePipelineFromTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePipelineFromTemplateResponse(doRPCRequest(make_shared<string>("CreatePipelineFromTemplate"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePipelineFromTemplateResponse Alibabacloud_Devops-rdc20200303::Client::createPipelineFromTemplate(shared_ptr<CreatePipelineFromTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPipelineFromTemplateWithOptions(request, runtime);
}

ListSmartGroupResponse Alibabacloud_Devops-rdc20200303::Client::listSmartGroupWithOptions(shared_ptr<ListSmartGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSmartGroupResponse(doRPCRequest(make_shared<string>("ListSmartGroup"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSmartGroupResponse Alibabacloud_Devops-rdc20200303::Client::listSmartGroup(shared_ptr<ListSmartGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartGroupWithOptions(request, runtime);
}

TransferPipelineOwnerResponse Alibabacloud_Devops-rdc20200303::Client::transferPipelineOwnerWithOptions(shared_ptr<TransferPipelineOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TransferPipelineOwnerResponse(doRPCRequest(make_shared<string>("TransferPipelineOwner"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TransferPipelineOwnerResponse Alibabacloud_Devops-rdc20200303::Client::transferPipelineOwner(shared_ptr<TransferPipelineOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferPipelineOwnerWithOptions(request, runtime);
}

CreateCommonGroupResponse Alibabacloud_Devops-rdc20200303::Client::createCommonGroupWithOptions(shared_ptr<CreateCommonGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCommonGroupResponse(doRPCRequest(make_shared<string>("CreateCommonGroup"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCommonGroupResponse Alibabacloud_Devops-rdc20200303::Client::createCommonGroup(shared_ptr<CreateCommonGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCommonGroupWithOptions(request, runtime);
}

CreateDevopsOrganizationResponse Alibabacloud_Devops-rdc20200303::Client::createDevopsOrganizationWithOptions(shared_ptr<CreateDevopsOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDevopsOrganizationResponse(doRPCRequest(make_shared<string>("CreateDevopsOrganization"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDevopsOrganizationResponse Alibabacloud_Devops-rdc20200303::Client::createDevopsOrganization(shared_ptr<CreateDevopsOrganizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDevopsOrganizationWithOptions(request, runtime);
}

ListDevopsScenarioFieldConfigResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsScenarioFieldConfigWithOptions(shared_ptr<ListDevopsScenarioFieldConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDevopsScenarioFieldConfigResponse(doRPCRequest(make_shared<string>("ListDevopsScenarioFieldConfig"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDevopsScenarioFieldConfigResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsScenarioFieldConfig(shared_ptr<ListDevopsScenarioFieldConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevopsScenarioFieldConfigWithOptions(request, runtime);
}

ListPipelineTemplatesResponse Alibabacloud_Devops-rdc20200303::Client::listPipelineTemplatesWithOptions(shared_ptr<ListPipelineTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListPipelineTemplatesResponse(doRPCRequest(make_shared<string>("ListPipelineTemplates"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPipelineTemplatesResponse Alibabacloud_Devops-rdc20200303::Client::listPipelineTemplates(shared_ptr<ListPipelineTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPipelineTemplatesWithOptions(request, runtime);
}

UpdateDevopsProjectTaskResponse Alibabacloud_Devops-rdc20200303::Client::updateDevopsProjectTaskWithOptions(shared_ptr<UpdateDevopsProjectTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDevopsProjectTaskResponse(doRPCRequest(make_shared<string>("UpdateDevopsProjectTask"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDevopsProjectTaskResponse Alibabacloud_Devops-rdc20200303::Client::updateDevopsProjectTask(shared_ptr<UpdateDevopsProjectTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDevopsProjectTaskWithOptions(request, runtime);
}

GetDevopsProjectTaskInfoResponse Alibabacloud_Devops-rdc20200303::Client::getDevopsProjectTaskInfoWithOptions(shared_ptr<GetDevopsProjectTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDevopsProjectTaskInfoResponse(doRPCRequest(make_shared<string>("GetDevopsProjectTaskInfo"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDevopsProjectTaskInfoResponse Alibabacloud_Devops-rdc20200303::Client::getDevopsProjectTaskInfo(shared_ptr<GetDevopsProjectTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDevopsProjectTaskInfoWithOptions(request, runtime);
}

GetPipelineInstanceGroupStatusResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineInstanceGroupStatusWithOptions(shared_ptr<GetPipelineInstanceGroupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPipelineInstanceGroupStatusResponse(doRPCRequest(make_shared<string>("GetPipelineInstanceGroupStatus"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPipelineInstanceGroupStatusResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineInstanceGroupStatus(shared_ptr<GetPipelineInstanceGroupStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipelineInstanceGroupStatusWithOptions(request, runtime);
}

UpdateTaskDetailResponse Alibabacloud_Devops-rdc20200303::Client::updateTaskDetailWithOptions(shared_ptr<UpdateTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTaskDetailResponse(doRPCRequest(make_shared<string>("UpdateTaskDetail"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTaskDetailResponse Alibabacloud_Devops-rdc20200303::Client::updateTaskDetail(shared_ptr<UpdateTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskDetailWithOptions(request, runtime);
}

GetTaskListFilterResponse Alibabacloud_Devops-rdc20200303::Client::getTaskListFilterWithOptions(shared_ptr<GetTaskListFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTaskListFilterResponse(doRPCRequest(make_shared<string>("GetTaskListFilter"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTaskListFilterResponse Alibabacloud_Devops-rdc20200303::Client::getTaskListFilter(shared_ptr<GetTaskListFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskListFilterWithOptions(request, runtime);
}

GetProjectOptionResponse Alibabacloud_Devops-rdc20200303::Client::getProjectOptionWithOptions(shared_ptr<GetProjectOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetProjectOptionResponse(doRPCRequest(make_shared<string>("GetProjectOption"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetProjectOptionResponse Alibabacloud_Devops-rdc20200303::Client::getProjectOption(shared_ptr<GetProjectOptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectOptionWithOptions(request, runtime);
}

UpdateCommonGroupResponse Alibabacloud_Devops-rdc20200303::Client::updateCommonGroupWithOptions(shared_ptr<UpdateCommonGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCommonGroupResponse(doRPCRequest(make_shared<string>("UpdateCommonGroup"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCommonGroupResponse Alibabacloud_Devops-rdc20200303::Client::updateCommonGroup(shared_ptr<UpdateCommonGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCommonGroupWithOptions(request, runtime);
}

ListCommonGroupResponse Alibabacloud_Devops-rdc20200303::Client::listCommonGroupWithOptions(shared_ptr<ListCommonGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCommonGroupResponse(doRPCRequest(make_shared<string>("ListCommonGroup"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCommonGroupResponse Alibabacloud_Devops-rdc20200303::Client::listCommonGroup(shared_ptr<ListCommonGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCommonGroupWithOptions(request, runtime);
}

DeleteDevopsProjectTaskResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsProjectTaskWithOptions(shared_ptr<DeleteDevopsProjectTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDevopsProjectTaskResponse(doRPCRequest(make_shared<string>("DeleteDevopsProjectTask"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDevopsProjectTaskResponse Alibabacloud_Devops-rdc20200303::Client::deleteDevopsProjectTask(shared_ptr<DeleteDevopsProjectTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevopsProjectTaskWithOptions(request, runtime);
}

GetDevopsOrganizationMembersResponse Alibabacloud_Devops-rdc20200303::Client::getDevopsOrganizationMembersWithOptions(shared_ptr<GetDevopsOrganizationMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDevopsOrganizationMembersResponse(doRPCRequest(make_shared<string>("GetDevopsOrganizationMembers"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDevopsOrganizationMembersResponse Alibabacloud_Devops-rdc20200303::Client::getDevopsOrganizationMembers(shared_ptr<GetDevopsOrganizationMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDevopsOrganizationMembersWithOptions(request, runtime);
}

CreateDevopsProjectResponse Alibabacloud_Devops-rdc20200303::Client::createDevopsProjectWithOptions(shared_ptr<CreateDevopsProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDevopsProjectResponse(doRPCRequest(make_shared<string>("CreateDevopsProject"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDevopsProjectResponse Alibabacloud_Devops-rdc20200303::Client::createDevopsProject(shared_ptr<CreateDevopsProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDevopsProjectWithOptions(request, runtime);
}

GetTaskDetailActivityResponse Alibabacloud_Devops-rdc20200303::Client::getTaskDetailActivityWithOptions(shared_ptr<GetTaskDetailActivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTaskDetailActivityResponse(doRPCRequest(make_shared<string>("GetTaskDetailActivity"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTaskDetailActivityResponse Alibabacloud_Devops-rdc20200303::Client::getTaskDetailActivity(shared_ptr<GetTaskDetailActivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskDetailActivityWithOptions(request, runtime);
}

ExecutePipelineResponse Alibabacloud_Devops-rdc20200303::Client::executePipelineWithOptions(shared_ptr<ExecutePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecutePipelineResponse(doRPCRequest(make_shared<string>("ExecutePipeline"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecutePipelineResponse Alibabacloud_Devops-rdc20200303::Client::executePipeline(shared_ptr<ExecutePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executePipelineWithOptions(request, runtime);
}

CreateServiceConnectionResponse Alibabacloud_Devops-rdc20200303::Client::createServiceConnectionWithOptions(shared_ptr<CreateServiceConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateServiceConnectionResponse(doRPCRequest(make_shared<string>("CreateServiceConnection"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateServiceConnectionResponse Alibabacloud_Devops-rdc20200303::Client::createServiceConnection(shared_ptr<CreateServiceConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceConnectionWithOptions(request, runtime);
}

GetPipelineInstHistoryResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineInstHistoryWithOptions(shared_ptr<GetPipelineInstHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPipelineInstHistoryResponse(doRPCRequest(make_shared<string>("GetPipelineInstHistory"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPipelineInstHistoryResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineInstHistory(shared_ptr<GetPipelineInstHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipelineInstHistoryWithOptions(request, runtime);
}

GetPipelineStepLogResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineStepLogWithOptions(shared_ptr<GetPipelineStepLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPipelineStepLogResponse(doRPCRequest(make_shared<string>("GetPipelineStepLog"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPipelineStepLogResponse Alibabacloud_Devops-rdc20200303::Client::getPipelineStepLog(shared_ptr<GetPipelineStepLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipelineStepLogWithOptions(request, runtime);
}

GetPipleineLatestInstanceStatusResponse Alibabacloud_Devops-rdc20200303::Client::getPipleineLatestInstanceStatusWithOptions(shared_ptr<GetPipleineLatestInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPipleineLatestInstanceStatusResponse(doRPCRequest(make_shared<string>("GetPipleineLatestInstanceStatus"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPipleineLatestInstanceStatusResponse Alibabacloud_Devops-rdc20200303::Client::getPipleineLatestInstanceStatus(shared_ptr<GetPipleineLatestInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipleineLatestInstanceStatusWithOptions(request, runtime);
}

ListDevopsProjectTasksResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjectTasksWithOptions(shared_ptr<ListDevopsProjectTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDevopsProjectTasksResponse(doRPCRequest(make_shared<string>("ListDevopsProjectTasks"), make_shared<string>("2020-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDevopsProjectTasksResponse Alibabacloud_Devops-rdc20200303::Client::listDevopsProjectTasks(shared_ptr<ListDevopsProjectTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevopsProjectTasksWithOptions(request, runtime);
}

