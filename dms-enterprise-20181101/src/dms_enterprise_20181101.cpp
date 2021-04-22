// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dms_enterprise_20181101.hpp>
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

using namespace Alibabacloud_Dms-enterprise20181101;

Alibabacloud_Dms-enterprise20181101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dms-enterprise"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dms-enterprise20181101::Client::getEndpoint(shared_ptr<string> productId,
                                                                shared_ptr<string> regionId,
                                                                shared_ptr<string> endpointRule,
                                                                shared_ptr<string> network,
                                                                shared_ptr<string> suffix,
                                                                shared_ptr<map<string, string>> endpointMap,
                                                                shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

SubmitStructSyncOrderApprovalResponse Alibabacloud_Dms-enterprise20181101::Client::submitStructSyncOrderApprovalWithOptions(shared_ptr<SubmitStructSyncOrderApprovalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitStructSyncOrderApprovalResponse(doRPCRequest(make_shared<string>("SubmitStructSyncOrderApproval"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitStructSyncOrderApprovalResponse Alibabacloud_Dms-enterprise20181101::Client::submitStructSyncOrderApproval(shared_ptr<SubmitStructSyncOrderApprovalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitStructSyncOrderApprovalWithOptions(request, runtime);
}

ListDatabaseUserPermssionsResponse Alibabacloud_Dms-enterprise20181101::Client::listDatabaseUserPermssionsWithOptions(shared_ptr<ListDatabaseUserPermssionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDatabaseUserPermssionsResponse(doRPCRequest(make_shared<string>("ListDatabaseUserPermssions"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDatabaseUserPermssionsResponse Alibabacloud_Dms-enterprise20181101::Client::listDatabaseUserPermssions(shared_ptr<ListDatabaseUserPermssionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatabaseUserPermssionsWithOptions(request, runtime);
}

ListSensitiveColumnsResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitiveColumnsWithOptions(shared_ptr<ListSensitiveColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSensitiveColumnsResponse(doRPCRequest(make_shared<string>("ListSensitiveColumns"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSensitiveColumnsResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitiveColumns(shared_ptr<ListSensitiveColumnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSensitiveColumnsWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_Dms-enterprise20181101::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUsersResponse(doRPCRequest(make_shared<string>("ListUsers"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsersResponse Alibabacloud_Dms-enterprise20181101::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

SubmitOrderApprovalResponse Alibabacloud_Dms-enterprise20181101::Client::submitOrderApprovalWithOptions(shared_ptr<SubmitOrderApprovalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitOrderApprovalResponse(doRPCRequest(make_shared<string>("SubmitOrderApproval"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitOrderApprovalResponse Alibabacloud_Dms-enterprise20181101::Client::submitOrderApproval(shared_ptr<SubmitOrderApprovalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitOrderApprovalWithOptions(request, runtime);
}

GrantUserPermissionResponse Alibabacloud_Dms-enterprise20181101::Client::grantUserPermissionWithOptions(shared_ptr<GrantUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GrantUserPermissionResponse(doRPCRequest(make_shared<string>("GrantUserPermission"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GrantUserPermissionResponse Alibabacloud_Dms-enterprise20181101::Client::grantUserPermission(shared_ptr<GrantUserPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantUserPermissionWithOptions(request, runtime);
}

GetMetaTableDetailInfoResponse Alibabacloud_Dms-enterprise20181101::Client::getMetaTableDetailInfoWithOptions(shared_ptr<GetMetaTableDetailInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMetaTableDetailInfoResponse(doRPCRequest(make_shared<string>("GetMetaTableDetailInfo"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTableDetailInfoResponse Alibabacloud_Dms-enterprise20181101::Client::getMetaTableDetailInfo(shared_ptr<GetMetaTableDetailInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableDetailInfoWithOptions(request, runtime);
}

GetDataCorrectSQLFileResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectSQLFileWithOptions(shared_ptr<GetDataCorrectSQLFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataCorrectSQLFileResponse(doRPCRequest(make_shared<string>("GetDataCorrectSQLFile"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataCorrectSQLFileResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectSQLFile(shared_ptr<GetDataCorrectSQLFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCorrectSQLFileWithOptions(request, runtime);
}

CreateFreeLockCorrectOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createFreeLockCorrectOrderWithOptions(shared_ptr<CreateFreeLockCorrectOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateFreeLockCorrectOrderShrinkRequest> request = make_shared<CreateFreeLockCorrectOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateFreeLockCorrectOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->param->toMap()), make_shared<string>("Param"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFreeLockCorrectOrderResponse(doRPCRequest(make_shared<string>("CreateFreeLockCorrectOrder"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFreeLockCorrectOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createFreeLockCorrectOrder(shared_ptr<CreateFreeLockCorrectOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFreeLockCorrectOrderWithOptions(request, runtime);
}

CreateOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createOrderWithOptions(shared_ptr<CreateOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateOrderShrinkRequest> request = make_shared<CreateOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->pluginParam)) {
    request->pluginParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pluginParam, make_shared<string>("PluginParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOrderResponse(doRPCRequest(make_shared<string>("CreateOrder"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createOrder(shared_ptr<CreateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderWithOptions(request, runtime);
}

ListDatabasesResponse Alibabacloud_Dms-enterprise20181101::Client::listDatabasesWithOptions(shared_ptr<ListDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDatabasesResponse(doRPCRequest(make_shared<string>("ListDatabases"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDatabasesResponse Alibabacloud_Dms-enterprise20181101::Client::listDatabases(shared_ptr<ListDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatabasesWithOptions(request, runtime);
}

ListUserPermissionsResponse Alibabacloud_Dms-enterprise20181101::Client::listUserPermissionsWithOptions(shared_ptr<ListUserPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUserPermissionsResponse(doRPCRequest(make_shared<string>("ListUserPermissions"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUserPermissionsResponse Alibabacloud_Dms-enterprise20181101::Client::listUserPermissions(shared_ptr<ListUserPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserPermissionsWithOptions(request, runtime);
}

ListWorkFlowTemplatesResponse Alibabacloud_Dms-enterprise20181101::Client::listWorkFlowTemplatesWithOptions(shared_ptr<ListWorkFlowTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListWorkFlowTemplatesResponse(doRPCRequest(make_shared<string>("ListWorkFlowTemplates"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListWorkFlowTemplatesResponse Alibabacloud_Dms-enterprise20181101::Client::listWorkFlowTemplates(shared_ptr<ListWorkFlowTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkFlowTemplatesWithOptions(request, runtime);
}

GetDataExportOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataExportOrderDetailWithOptions(shared_ptr<GetDataExportOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataExportOrderDetailResponse(doRPCRequest(make_shared<string>("GetDataExportOrderDetail"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataExportOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataExportOrderDetail(shared_ptr<GetDataExportOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataExportOrderDetailWithOptions(request, runtime);
}

ListInstancesResponse Alibabacloud_Dms-enterprise20181101::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListInstancesResponse(doRPCRequest(make_shared<string>("ListInstances"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInstancesResponse Alibabacloud_Dms-enterprise20181101::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesWithOptions(request, runtime);
}

GetUserUploadFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::getUserUploadFileJobWithOptions(shared_ptr<GetUserUploadFileJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserUploadFileJobResponse(doRPCRequest(make_shared<string>("GetUserUploadFileJob"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserUploadFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::getUserUploadFileJob(shared_ptr<GetUserUploadFileJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserUploadFileJobWithOptions(request, runtime);
}

ListDDLPublishRecordsResponse Alibabacloud_Dms-enterprise20181101::Client::listDDLPublishRecordsWithOptions(shared_ptr<ListDDLPublishRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDDLPublishRecordsResponse(doRPCRequest(make_shared<string>("ListDDLPublishRecords"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDDLPublishRecordsResponse Alibabacloud_Dms-enterprise20181101::Client::listDDLPublishRecords(shared_ptr<ListDDLPublishRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDDLPublishRecordsWithOptions(request, runtime);
}

GetStructSyncJobDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncJobDetailWithOptions(shared_ptr<GetStructSyncJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStructSyncJobDetailResponse(doRPCRequest(make_shared<string>("GetStructSyncJobDetail"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStructSyncJobDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncJobDetail(shared_ptr<GetStructSyncJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStructSyncJobDetailWithOptions(request, runtime);
}

CreateUploadOSSFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::createUploadOSSFileJobWithOptions(shared_ptr<CreateUploadOSSFileJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateUploadOSSFileJobShrinkRequest> request = make_shared<CreateUploadOSSFileJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateUploadOSSFileJobRequestUploadTarget>(tmpReq->uploadTarget)) {
    request->uploadTargetShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->uploadTarget->toMap()), make_shared<string>("UploadTarget"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUploadOSSFileJobResponse(doRPCRequest(make_shared<string>("CreateUploadOSSFileJob"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUploadOSSFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::createUploadOSSFileJob(shared_ptr<CreateUploadOSSFileJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadOSSFileJobWithOptions(request, runtime);
}

SearchDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::searchDatabaseWithOptions(shared_ptr<SearchDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchDatabaseResponse(doRPCRequest(make_shared<string>("SearchDatabase"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::searchDatabase(shared_ptr<SearchDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchDatabaseWithOptions(request, runtime);
}

GetDBTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getDBTopologyWithOptions(shared_ptr<GetDBTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDBTopologyResponse(doRPCRequest(make_shared<string>("GetDBTopology"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDBTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getDBTopology(shared_ptr<GetDBTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDBTopologyWithOptions(request, runtime);
}

SyncDatabaseMetaResponse Alibabacloud_Dms-enterprise20181101::Client::syncDatabaseMetaWithOptions(shared_ptr<SyncDatabaseMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SyncDatabaseMetaResponse(doRPCRequest(make_shared<string>("SyncDatabaseMeta"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SyncDatabaseMetaResponse Alibabacloud_Dms-enterprise20181101::Client::syncDatabaseMeta(shared_ptr<SyncDatabaseMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncDatabaseMetaWithOptions(request, runtime);
}

GetUserResponse Alibabacloud_Dms-enterprise20181101::Client::getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserResponse(doRPCRequest(make_shared<string>("GetUser"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserResponse Alibabacloud_Dms-enterprise20181101::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserWithOptions(request, runtime);
}

ExecuteStructSyncResponse Alibabacloud_Dms-enterprise20181101::Client::executeStructSyncWithOptions(shared_ptr<ExecuteStructSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteStructSyncResponse(doRPCRequest(make_shared<string>("ExecuteStructSync"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteStructSyncResponse Alibabacloud_Dms-enterprise20181101::Client::executeStructSync(shared_ptr<ExecuteStructSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeStructSyncWithOptions(request, runtime);
}

GetDataCorrectOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectOrderDetailWithOptions(shared_ptr<GetDataCorrectOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataCorrectOrderDetailResponse(doRPCRequest(make_shared<string>("GetDataCorrectOrderDetail"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataCorrectOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectOrderDetail(shared_ptr<GetDataCorrectOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCorrectOrderDetailWithOptions(request, runtime);
}

ListColumnsResponse Alibabacloud_Dms-enterprise20181101::Client::listColumnsWithOptions(shared_ptr<ListColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListColumnsResponse(doRPCRequest(make_shared<string>("ListColumns"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListColumnsResponse Alibabacloud_Dms-enterprise20181101::Client::listColumns(shared_ptr<ListColumnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listColumnsWithOptions(request, runtime);
}

RevokeUserPermissionResponse Alibabacloud_Dms-enterprise20181101::Client::revokeUserPermissionWithOptions(shared_ptr<RevokeUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RevokeUserPermissionResponse(doRPCRequest(make_shared<string>("RevokeUserPermission"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RevokeUserPermissionResponse Alibabacloud_Dms-enterprise20181101::Client::revokeUserPermission(shared_ptr<RevokeUserPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeUserPermissionWithOptions(request, runtime);
}

GetMetaTableColumnResponse Alibabacloud_Dms-enterprise20181101::Client::getMetaTableColumnWithOptions(shared_ptr<GetMetaTableColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMetaTableColumnResponse(doRPCRequest(make_shared<string>("GetMetaTableColumn"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMetaTableColumnResponse Alibabacloud_Dms-enterprise20181101::Client::getMetaTableColumn(shared_ptr<GetMetaTableColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableColumnWithOptions(request, runtime);
}

EnableUserResponse Alibabacloud_Dms-enterprise20181101::Client::enableUserWithOptions(shared_ptr<EnableUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableUserResponse(doRPCRequest(make_shared<string>("EnableUser"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableUserResponse Alibabacloud_Dms-enterprise20181101::Client::enableUser(shared_ptr<EnableUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableUserWithOptions(request, runtime);
}

UpdateInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::updateInstanceWithOptions(shared_ptr<UpdateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateInstanceResponse(doRPCRequest(make_shared<string>("UpdateInstance"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::updateInstance(shared_ptr<UpdateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceWithOptions(request, runtime);
}

ExecuteScriptResponse Alibabacloud_Dms-enterprise20181101::Client::executeScriptWithOptions(shared_ptr<ExecuteScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteScriptResponse(doRPCRequest(make_shared<string>("ExecuteScript"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteScriptResponse Alibabacloud_Dms-enterprise20181101::Client::executeScript(shared_ptr<ExecuteScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeScriptWithOptions(request, runtime);
}

ListDBTaskSQLJobDetailResponse Alibabacloud_Dms-enterprise20181101::Client::listDBTaskSQLJobDetailWithOptions(shared_ptr<ListDBTaskSQLJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDBTaskSQLJobDetailResponse(doRPCRequest(make_shared<string>("ListDBTaskSQLJobDetail"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDBTaskSQLJobDetailResponse Alibabacloud_Dms-enterprise20181101::Client::listDBTaskSQLJobDetail(shared_ptr<ListDBTaskSQLJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDBTaskSQLJobDetailWithOptions(request, runtime);
}

DisableUserResponse Alibabacloud_Dms-enterprise20181101::Client::disableUserWithOptions(shared_ptr<DisableUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableUserResponse(doRPCRequest(make_shared<string>("DisableUser"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableUserResponse Alibabacloud_Dms-enterprise20181101::Client::disableUser(shared_ptr<DisableUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableUserWithOptions(request, runtime);
}

GetApprovalDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getApprovalDetailWithOptions(shared_ptr<GetApprovalDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetApprovalDetailResponse(doRPCRequest(make_shared<string>("GetApprovalDetail"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetApprovalDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getApprovalDetail(shared_ptr<GetApprovalDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getApprovalDetailWithOptions(request, runtime);
}

GetUserActiveTenantResponse Alibabacloud_Dms-enterprise20181101::Client::getUserActiveTenantWithOptions(shared_ptr<GetUserActiveTenantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserActiveTenantResponse(doRPCRequest(make_shared<string>("GetUserActiveTenant"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserActiveTenantResponse Alibabacloud_Dms-enterprise20181101::Client::getUserActiveTenant(shared_ptr<GetUserActiveTenantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserActiveTenantWithOptions(request, runtime);
}

RegisterUserResponse Alibabacloud_Dms-enterprise20181101::Client::registerUserWithOptions(shared_ptr<RegisterUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterUserResponse(doRPCRequest(make_shared<string>("RegisterUser"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterUserResponse Alibabacloud_Dms-enterprise20181101::Client::registerUser(shared_ptr<RegisterUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerUserWithOptions(request, runtime);
}

GetInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceResponse(doRPCRequest(make_shared<string>("GetInstance"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::getInstance(shared_ptr<GetInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceWithOptions(request, runtime);
}

GetPermApplyOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getPermApplyOrderDetailWithOptions(shared_ptr<GetPermApplyOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPermApplyOrderDetailResponse(doRPCRequest(make_shared<string>("GetPermApplyOrderDetail"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPermApplyOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getPermApplyOrderDetail(shared_ptr<GetPermApplyOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPermApplyOrderDetailWithOptions(request, runtime);
}

ListIndexesResponse Alibabacloud_Dms-enterprise20181101::Client::listIndexesWithOptions(shared_ptr<ListIndexesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListIndexesResponse(doRPCRequest(make_shared<string>("ListIndexes"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListIndexesResponse Alibabacloud_Dms-enterprise20181101::Client::listIndexes(shared_ptr<ListIndexesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIndexesWithOptions(request, runtime);
}

ListLogicTablesResponse Alibabacloud_Dms-enterprise20181101::Client::listLogicTablesWithOptions(shared_ptr<ListLogicTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListLogicTablesResponse(doRPCRequest(make_shared<string>("ListLogicTables"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLogicTablesResponse Alibabacloud_Dms-enterprise20181101::Client::listLogicTables(shared_ptr<ListLogicTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLogicTablesWithOptions(request, runtime);
}

GetTableTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getTableTopologyWithOptions(shared_ptr<GetTableTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTableTopologyResponse(doRPCRequest(make_shared<string>("GetTableTopology"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTableTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getTableTopology(shared_ptr<GetTableTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableTopologyWithOptions(request, runtime);
}

GetDataExportDownloadURLResponse Alibabacloud_Dms-enterprise20181101::Client::getDataExportDownloadURLWithOptions(shared_ptr<GetDataExportDownloadURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataExportDownloadURLResponse(doRPCRequest(make_shared<string>("GetDataExportDownloadURL"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataExportDownloadURLResponse Alibabacloud_Dms-enterprise20181101::Client::getDataExportDownloadURL(shared_ptr<GetDataExportDownloadURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataExportDownloadURLWithOptions(request, runtime);
}

CreateDataCronClearOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataCronClearOrderWithOptions(shared_ptr<CreateDataCronClearOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataCronClearOrderShrinkRequest> request = make_shared<CreateDataCronClearOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataCronClearOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->param->toMap()), make_shared<string>("Param"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDataCronClearOrderResponse(doRPCRequest(make_shared<string>("CreateDataCronClearOrder"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDataCronClearOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataCronClearOrder(shared_ptr<CreateDataCronClearOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataCronClearOrderWithOptions(request, runtime);
}

CreatePublishGroupTaskResponse Alibabacloud_Dms-enterprise20181101::Client::createPublishGroupTaskWithOptions(shared_ptr<CreatePublishGroupTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePublishGroupTaskResponse(doRPCRequest(make_shared<string>("CreatePublishGroupTask"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePublishGroupTaskResponse Alibabacloud_Dms-enterprise20181101::Client::createPublishGroupTask(shared_ptr<CreatePublishGroupTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPublishGroupTaskWithOptions(request, runtime);
}

GetDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getDatabaseWithOptions(shared_ptr<GetDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDatabaseResponse(doRPCRequest(make_shared<string>("GetDatabase"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getDatabase(shared_ptr<GetDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDatabaseWithOptions(request, runtime);
}

GetOwnerApplyOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getOwnerApplyOrderDetailWithOptions(shared_ptr<GetOwnerApplyOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOwnerApplyOrderDetailResponse(doRPCRequest(make_shared<string>("GetOwnerApplyOrderDetail"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOwnerApplyOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getOwnerApplyOrderDetail(shared_ptr<GetOwnerApplyOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOwnerApplyOrderDetailWithOptions(request, runtime);
}

GetOpLogResponse Alibabacloud_Dms-enterprise20181101::Client::getOpLogWithOptions(shared_ptr<GetOpLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOpLogResponse(doRPCRequest(make_shared<string>("GetOpLog"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOpLogResponse Alibabacloud_Dms-enterprise20181101::Client::getOpLog(shared_ptr<GetOpLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOpLogWithOptions(request, runtime);
}

SearchTableResponse Alibabacloud_Dms-enterprise20181101::Client::searchTableWithOptions(shared_ptr<SearchTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchTableResponse(doRPCRequest(make_shared<string>("SearchTable"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchTableResponse Alibabacloud_Dms-enterprise20181101::Client::searchTable(shared_ptr<SearchTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTableWithOptions(request, runtime);
}

ListDBTaskSQLJobResponse Alibabacloud_Dms-enterprise20181101::Client::listDBTaskSQLJobWithOptions(shared_ptr<ListDBTaskSQLJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDBTaskSQLJobResponse(doRPCRequest(make_shared<string>("ListDBTaskSQLJob"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDBTaskSQLJobResponse Alibabacloud_Dms-enterprise20181101::Client::listDBTaskSQLJob(shared_ptr<ListDBTaskSQLJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDBTaskSQLJobWithOptions(request, runtime);
}

DeleteUserResponse Alibabacloud_Dms-enterprise20181101::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteUserResponse(doRPCRequest(make_shared<string>("DeleteUser"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUserResponse Alibabacloud_Dms-enterprise20181101::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWithOptions(request, runtime);
}

GetDataCronClearTaskDetailListResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCronClearTaskDetailListWithOptions(shared_ptr<GetDataCronClearTaskDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataCronClearTaskDetailListResponse(doRPCRequest(make_shared<string>("GetDataCronClearTaskDetailList"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataCronClearTaskDetailListResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCronClearTaskDetailList(shared_ptr<GetDataCronClearTaskDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCronClearTaskDetailListWithOptions(request, runtime);
}

GetStructSyncJobAnalyzeResultResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncJobAnalyzeResultWithOptions(shared_ptr<GetStructSyncJobAnalyzeResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStructSyncJobAnalyzeResultResponse(doRPCRequest(make_shared<string>("GetStructSyncJobAnalyzeResult"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStructSyncJobAnalyzeResultResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncJobAnalyzeResult(shared_ptr<GetStructSyncJobAnalyzeResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStructSyncJobAnalyzeResultWithOptions(request, runtime);
}

ApproveOrderResponse Alibabacloud_Dms-enterprise20181101::Client::approveOrderWithOptions(shared_ptr<ApproveOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ApproveOrderResponse(doRPCRequest(make_shared<string>("ApproveOrder"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ApproveOrderResponse Alibabacloud_Dms-enterprise20181101::Client::approveOrder(shared_ptr<ApproveOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approveOrderWithOptions(request, runtime);
}

GetDataCorrectTaskDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectTaskDetailWithOptions(shared_ptr<GetDataCorrectTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataCorrectTaskDetailResponse(doRPCRequest(make_shared<string>("GetDataCorrectTaskDetail"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataCorrectTaskDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectTaskDetail(shared_ptr<GetDataCorrectTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCorrectTaskDetailWithOptions(request, runtime);
}

CreateUploadFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::createUploadFileJobWithOptions(shared_ptr<CreateUploadFileJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUploadFileJobResponse(doRPCRequest(make_shared<string>("CreateUploadFileJob"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUploadFileJobResponse Alibabacloud_Dms-enterprise20181101::Client::createUploadFileJob(shared_ptr<CreateUploadFileJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadFileJobWithOptions(request, runtime);
}

ListLogicDatabasesResponse Alibabacloud_Dms-enterprise20181101::Client::listLogicDatabasesWithOptions(shared_ptr<ListLogicDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListLogicDatabasesResponse(doRPCRequest(make_shared<string>("ListLogicDatabases"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLogicDatabasesResponse Alibabacloud_Dms-enterprise20181101::Client::listLogicDatabases(shared_ptr<ListLogicDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLogicDatabasesWithOptions(request, runtime);
}

CreateDataImportOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataImportOrderWithOptions(shared_ptr<CreateDataImportOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataImportOrderShrinkRequest> request = make_shared<CreateDataImportOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataImportOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->param->toMap()), make_shared<string>("Param"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDataImportOrderResponse(doRPCRequest(make_shared<string>("CreateDataImportOrder"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDataImportOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataImportOrder(shared_ptr<CreateDataImportOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataImportOrderWithOptions(request, runtime);
}

CloseOrderResponse Alibabacloud_Dms-enterprise20181101::Client::closeOrderWithOptions(shared_ptr<CloseOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CloseOrderResponse(doRPCRequest(make_shared<string>("CloseOrder"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CloseOrderResponse Alibabacloud_Dms-enterprise20181101::Client::closeOrder(shared_ptr<CloseOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeOrderWithOptions(request, runtime);
}

SyncInstanceMetaResponse Alibabacloud_Dms-enterprise20181101::Client::syncInstanceMetaWithOptions(shared_ptr<SyncInstanceMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SyncInstanceMetaResponse(doRPCRequest(make_shared<string>("SyncInstanceMeta"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SyncInstanceMetaResponse Alibabacloud_Dms-enterprise20181101::Client::syncInstanceMeta(shared_ptr<SyncInstanceMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncInstanceMetaWithOptions(request, runtime);
}

ListOrdersResponse Alibabacloud_Dms-enterprise20181101::Client::listOrdersWithOptions(shared_ptr<ListOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOrdersResponse(doRPCRequest(make_shared<string>("ListOrders"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOrdersResponse Alibabacloud_Dms-enterprise20181101::Client::listOrders(shared_ptr<ListOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOrdersWithOptions(request, runtime);
}

GetOrderBaseInfoResponse Alibabacloud_Dms-enterprise20181101::Client::getOrderBaseInfoWithOptions(shared_ptr<GetOrderBaseInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOrderBaseInfoResponse(doRPCRequest(make_shared<string>("GetOrderBaseInfo"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOrderBaseInfoResponse Alibabacloud_Dms-enterprise20181101::Client::getOrderBaseInfo(shared_ptr<GetOrderBaseInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOrderBaseInfoWithOptions(request, runtime);
}

ListUserTenantsResponse Alibabacloud_Dms-enterprise20181101::Client::listUserTenantsWithOptions(shared_ptr<ListUserTenantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUserTenantsResponse(doRPCRequest(make_shared<string>("ListUserTenants"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUserTenantsResponse Alibabacloud_Dms-enterprise20181101::Client::listUserTenants(shared_ptr<ListUserTenantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserTenantsWithOptions(request, runtime);
}

SetOwnersResponse Alibabacloud_Dms-enterprise20181101::Client::setOwnersWithOptions(shared_ptr<SetOwnersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetOwnersResponse(doRPCRequest(make_shared<string>("SetOwners"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetOwnersResponse Alibabacloud_Dms-enterprise20181101::Client::setOwners(shared_ptr<SetOwnersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setOwnersWithOptions(request, runtime);
}

CreateDataCorrectOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataCorrectOrderWithOptions(shared_ptr<CreateDataCorrectOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDataCorrectOrderShrinkRequest> request = make_shared<CreateDataCorrectOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataCorrectOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->param->toMap()), make_shared<string>("Param"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDataCorrectOrderResponse(doRPCRequest(make_shared<string>("CreateDataCorrectOrder"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDataCorrectOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createDataCorrectOrder(shared_ptr<CreateDataCorrectOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataCorrectOrderWithOptions(request, runtime);
}

GetLogicDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getLogicDatabaseWithOptions(shared_ptr<GetLogicDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLogicDatabaseResponse(doRPCRequest(make_shared<string>("GetLogicDatabase"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLogicDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getLogicDatabase(shared_ptr<GetLogicDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogicDatabaseWithOptions(request, runtime);
}

GetDataCorrectBackupFilesResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectBackupFilesWithOptions(shared_ptr<GetDataCorrectBackupFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDataCorrectBackupFilesShrinkRequest> request = make_shared<GetDataCorrectBackupFilesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->actionDetail)) {
    request->actionDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->actionDetail, make_shared<string>("ActionDetail"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataCorrectBackupFilesResponse(doRPCRequest(make_shared<string>("GetDataCorrectBackupFiles"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataCorrectBackupFilesResponse Alibabacloud_Dms-enterprise20181101::Client::getDataCorrectBackupFiles(shared_ptr<GetDataCorrectBackupFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataCorrectBackupFilesWithOptions(request, runtime);
}

RegisterInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::registerInstanceWithOptions(shared_ptr<RegisterInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterInstanceResponse(doRPCRequest(make_shared<string>("RegisterInstance"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::registerInstance(shared_ptr<RegisterInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerInstanceWithOptions(request, runtime);
}

CreateStructSyncOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createStructSyncOrderWithOptions(shared_ptr<CreateStructSyncOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateStructSyncOrderShrinkRequest> request = make_shared<CreateStructSyncOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->relatedUserList)) {
    request->relatedUserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedUserList, make_shared<string>("RelatedUserList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateStructSyncOrderRequestParam>(tmpReq->param)) {
    request->paramShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->param->toMap()), make_shared<string>("Param"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateStructSyncOrderResponse(doRPCRequest(make_shared<string>("CreateStructSyncOrder"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateStructSyncOrderResponse Alibabacloud_Dms-enterprise20181101::Client::createStructSyncOrder(shared_ptr<CreateStructSyncOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStructSyncOrderWithOptions(request, runtime);
}

ExecuteDataExportResponse Alibabacloud_Dms-enterprise20181101::Client::executeDataExportWithOptions(shared_ptr<ExecuteDataExportRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExecuteDataExportShrinkRequest> request = make_shared<ExecuteDataExportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->actionDetail)) {
    request->actionDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->actionDetail, make_shared<string>("ActionDetail"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteDataExportResponse(doRPCRequest(make_shared<string>("ExecuteDataExport"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteDataExportResponse Alibabacloud_Dms-enterprise20181101::Client::executeDataExport(shared_ptr<ExecuteDataExportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeDataExportWithOptions(request, runtime);
}

ExecuteDataCorrectResponse Alibabacloud_Dms-enterprise20181101::Client::executeDataCorrectWithOptions(shared_ptr<ExecuteDataCorrectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExecuteDataCorrectShrinkRequest> request = make_shared<ExecuteDataCorrectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->actionDetail)) {
    request->actionDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->actionDetail, make_shared<string>("ActionDetail"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteDataCorrectResponse(doRPCRequest(make_shared<string>("ExecuteDataCorrect"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteDataCorrectResponse Alibabacloud_Dms-enterprise20181101::Client::executeDataCorrect(shared_ptr<ExecuteDataCorrectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeDataCorrectWithOptions(request, runtime);
}

ListTablesResponse Alibabacloud_Dms-enterprise20181101::Client::listTablesWithOptions(shared_ptr<ListTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTablesResponse(doRPCRequest(make_shared<string>("ListTables"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTablesResponse Alibabacloud_Dms-enterprise20181101::Client::listTables(shared_ptr<ListTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTablesWithOptions(request, runtime);
}

ListWorkFlowNodesResponse Alibabacloud_Dms-enterprise20181101::Client::listWorkFlowNodesWithOptions(shared_ptr<ListWorkFlowNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListWorkFlowNodesResponse(doRPCRequest(make_shared<string>("ListWorkFlowNodes"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListWorkFlowNodesResponse Alibabacloud_Dms-enterprise20181101::Client::listWorkFlowNodes(shared_ptr<ListWorkFlowNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkFlowNodesWithOptions(request, runtime);
}

GetStructSyncOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncOrderDetailWithOptions(shared_ptr<GetStructSyncOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStructSyncOrderDetailResponse(doRPCRequest(make_shared<string>("GetStructSyncOrderDetail"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStructSyncOrderDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncOrderDetail(shared_ptr<GetStructSyncOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStructSyncOrderDetailWithOptions(request, runtime);
}

ListSensitiveColumnsDetailResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitiveColumnsDetailWithOptions(shared_ptr<ListSensitiveColumnsDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSensitiveColumnsDetailResponse(doRPCRequest(make_shared<string>("ListSensitiveColumnsDetail"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSensitiveColumnsDetailResponse Alibabacloud_Dms-enterprise20181101::Client::listSensitiveColumnsDetail(shared_ptr<ListSensitiveColumnsDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSensitiveColumnsDetailWithOptions(request, runtime);
}

UpdateUserResponse Alibabacloud_Dms-enterprise20181101::Client::updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateUserResponse(doRPCRequest(make_shared<string>("UpdateUser"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateUserResponse Alibabacloud_Dms-enterprise20181101::Client::updateUser(shared_ptr<UpdateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserWithOptions(request, runtime);
}

GetPhysicalDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getPhysicalDatabaseWithOptions(shared_ptr<GetPhysicalDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPhysicalDatabaseResponse(doRPCRequest(make_shared<string>("GetPhysicalDatabase"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPhysicalDatabaseResponse Alibabacloud_Dms-enterprise20181101::Client::getPhysicalDatabase(shared_ptr<GetPhysicalDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPhysicalDatabaseWithOptions(request, runtime);
}

GetStructSyncExecSqlDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncExecSqlDetailWithOptions(shared_ptr<GetStructSyncExecSqlDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStructSyncExecSqlDetailResponse(doRPCRequest(make_shared<string>("GetStructSyncExecSqlDetail"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStructSyncExecSqlDetailResponse Alibabacloud_Dms-enterprise20181101::Client::getStructSyncExecSqlDetail(shared_ptr<GetStructSyncExecSqlDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStructSyncExecSqlDetailWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteInstanceResponse(doRPCRequest(make_shared<string>("DeleteInstance"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteInstanceResponse Alibabacloud_Dms-enterprise20181101::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

GetTableDBTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getTableDBTopologyWithOptions(shared_ptr<GetTableDBTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTableDBTopologyResponse(doRPCRequest(make_shared<string>("GetTableDBTopology"), make_shared<string>("2018-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTableDBTopologyResponse Alibabacloud_Dms-enterprise20181101::Client::getTableDBTopology(shared_ptr<GetTableDBTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableDBTopologyWithOptions(request, runtime);
}

