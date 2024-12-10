// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/mssp_20161228.hpp>
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

using namespace Alibabacloud_Mssp20161228;

Alibabacloud_Mssp20161228::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("mssp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Mssp20161228::Client::getEndpoint(shared_ptr<string> productId,
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

CreateServiceWorkOrderResponse Alibabacloud_Mssp20161228::Client::createServiceWorkOrderWithOptions(shared_ptr<CreateServiceWorkOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    body->insert(pair<string, string>("Creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerId)) {
    body->insert(pair<string, string>("CustomerId", *request->customerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->durationDay)) {
    body->insert(pair<string, string>("DurationDay", *request->durationDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isAttachment)) {
    body->insert(pair<string, string>("IsAttachment", *request->isAttachment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isWorkOrderNotify)) {
    body->insert(pair<string, string>("IsWorkOrderNotify", *request->isWorkOrderNotify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyDay)) {
    body->insert(pair<string, string>("NotifyDay", *request->notifyDay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->notifyId)) {
    body->insert(pair<string, long>("NotifyId", *request->notifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateRemark)) {
    body->insert(pair<string, string>("OperateRemark", *request->operateRemark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    body->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    body->insert(pair<string, string>("Operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    body->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workOrderDetail)) {
    body->insert(pair<string, string>("WorkOrderDetail", *request->workOrderDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workOrderName)) {
    body->insert(pair<string, string>("WorkOrderName", *request->workOrderName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workOrderSource)) {
    body->insert(pair<string, string>("WorkOrderSource", *request->workOrderSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workOrderStatus)) {
    body->insert(pair<string, string>("WorkOrderStatus", *request->workOrderStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workOrderType)) {
    body->insert(pair<string, string>("WorkOrderType", *request->workOrderType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceWorkOrder"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceWorkOrderResponse(callApi(params, req, runtime));
}

CreateServiceWorkOrderResponse Alibabacloud_Mssp20161228::Client::createServiceWorkOrder(shared_ptr<CreateServiceWorkOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceWorkOrderWithOptions(request, runtime);
}

DisposeServiceWorkOrderResponse Alibabacloud_Mssp20161228::Client::disposeServiceWorkOrderWithOptions(shared_ptr<DisposeServiceWorkOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachmentName)) {
    body->insert(pair<string, string>("AttachmentName", *request->attachmentName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forwardOwnerId)) {
    body->insert(pair<string, string>("ForwardOwnerId", *request->forwardOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isAttachment)) {
    body->insert(pair<string, string>("IsAttachment", *request->isAttachment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isWorkOrderNotify)) {
    body->insert(pair<string, string>("IsWorkOrderNotify", *request->isWorkOrderNotify));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->notifyId)) {
    body->insert(pair<string, long>("NotifyId", *request->notifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateRemark)) {
    body->insert(pair<string, string>("OperateRemark", *request->operateRemark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    body->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    body->insert(pair<string, string>("Operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upgradeOwnerId)) {
    body->insert(pair<string, string>("UpgradeOwnerId", *request->upgradeOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workOrderDetail)) {
    body->insert(pair<string, string>("WorkOrderDetail", *request->workOrderDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workOrderName)) {
    body->insert(pair<string, string>("WorkOrderName", *request->workOrderName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workOrderStatus)) {
    body->insert(pair<string, string>("WorkOrderStatus", *request->workOrderStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisposeServiceWorkOrder"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisposeServiceWorkOrderResponse(callApi(params, req, runtime));
}

DisposeServiceWorkOrderResponse Alibabacloud_Mssp20161228::Client::disposeServiceWorkOrder(shared_ptr<DisposeServiceWorkOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disposeServiceWorkOrderWithOptions(request, runtime);
}

DisposeWorkTaskResponse Alibabacloud_Mssp20161228::Client::disposeWorkTaskWithOptions(shared_ptr<DisposeWorkTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    body->insert(pair<string, string>("Operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optRemark)) {
    body->insert(pair<string, string>("OptRemark", *request->optRemark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskIds)) {
    body->insert(pair<string, string>("TaskIds", *request->taskIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisposeWorkTask"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisposeWorkTaskResponse(callApi(params, req, runtime));
}

DisposeWorkTaskResponse Alibabacloud_Mssp20161228::Client::disposeWorkTask(shared_ptr<DisposeWorkTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disposeWorkTaskWithOptions(request, runtime);
}

GetAlarmDetailByIdResponse Alibabacloud_Mssp20161228::Client::getAlarmDetailByIdWithOptions(shared_ptr<GetAlarmDetailByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlarmDetailById"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlarmDetailByIdResponse(callApi(params, req, runtime));
}

GetAlarmDetailByIdResponse Alibabacloud_Mssp20161228::Client::getAlarmDetailById(shared_ptr<GetAlarmDetailByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlarmDetailByIdWithOptions(request, runtime);
}

GetAttackedAssetDealResponse Alibabacloud_Mssp20161228::Client::getAttackedAssetDealWithOptions(shared_ptr<GetAttackedAssetDealRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateType)) {
    body->insert(pair<string, string>("DateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    body->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    body->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suspEventSource)) {
    body->insert(pair<string, string>("SuspEventSource", *request->suspEventSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAttackedAssetDeal"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAttackedAssetDealResponse(callApi(params, req, runtime));
}

GetAttackedAssetDealResponse Alibabacloud_Mssp20161228::Client::getAttackedAssetDeal(shared_ptr<GetAttackedAssetDealRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAttackedAssetDealWithOptions(request, runtime);
}

GetBaselineSummaryResponse Alibabacloud_Mssp20161228::Client::getBaselineSummaryWithOptions(shared_ptr<GetBaselineSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateType)) {
    body->insert(pair<string, string>("DateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    body->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    body->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suspEventSource)) {
    body->insert(pair<string, string>("SuspEventSource", *request->suspEventSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBaselineSummary"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBaselineSummaryResponse(callApi(params, req, runtime));
}

GetBaselineSummaryResponse Alibabacloud_Mssp20161228::Client::getBaselineSummary(shared_ptr<GetBaselineSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaselineSummaryWithOptions(request, runtime);
}

GetConsoleScoreResponse Alibabacloud_Mssp20161228::Client::getConsoleScoreWithOptions(shared_ptr<GetConsoleScoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateType)) {
    body->insert(pair<string, string>("DateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    body->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    body->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suspEventSource)) {
    body->insert(pair<string, string>("SuspEventSource", *request->suspEventSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConsoleScore"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConsoleScoreResponse(callApi(params, req, runtime));
}

GetConsoleScoreResponse Alibabacloud_Mssp20161228::Client::getConsoleScore(shared_ptr<GetConsoleScoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConsoleScoreWithOptions(request, runtime);
}

GetDetailByIdResponse Alibabacloud_Mssp20161228::Client::getDetailByIdWithOptions(shared_ptr<GetDetailByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDetailById"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDetailByIdResponse(callApi(params, req, runtime));
}

GetDetailByIdResponse Alibabacloud_Mssp20161228::Client::getDetailById(shared_ptr<GetDetailByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDetailByIdWithOptions(request, runtime);
}

GetDocumentDownloadUrlResponse Alibabacloud_Mssp20161228::Client::getDocumentDownloadUrlWithOptions(shared_ptr<GetDocumentDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocumentDownloadUrl"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocumentDownloadUrlResponse(callApi(params, req, runtime));
}

GetDocumentDownloadUrlResponse Alibabacloud_Mssp20161228::Client::getDocumentDownloadUrl(shared_ptr<GetDocumentDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDocumentDownloadUrlWithOptions(request, runtime);
}

GetDocumentPageResponse Alibabacloud_Mssp20161228::Client::getDocumentPageWithOptions(shared_ptr<GetDocumentPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveredBy)) {
    body->insert(pair<string, string>("DeliveredBy", *request->deliveredBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentName)) {
    body->insert(pair<string, string>("DocumentName", *request->documentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentType)) {
    body->insert(pair<string, string>("DocumentType", *request->documentType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportType)) {
    body->insert(pair<string, string>("ReportType", *request->reportType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocumentPage"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocumentPageResponse(callApi(params, req, runtime));
}

GetDocumentPageResponse Alibabacloud_Mssp20161228::Client::getDocumentPage(shared_ptr<GetDocumentPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDocumentPageWithOptions(request, runtime);
}

GetDocumentSummaryResponse Alibabacloud_Mssp20161228::Client::getDocumentSummaryWithOptions(shared_ptr<GetDocumentSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reportType)) {
    body->insert(pair<string, string>("ReportType", *request->reportType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocumentSummary"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocumentSummaryResponse(callApi(params, req, runtime));
}

GetDocumentSummaryResponse Alibabacloud_Mssp20161228::Client::getDocumentSummary(shared_ptr<GetDocumentSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDocumentSummaryWithOptions(request, runtime);
}

GetRecentDocumentResponse Alibabacloud_Mssp20161228::Client::getRecentDocumentWithOptions(shared_ptr<GetRecentDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateType)) {
    body->insert(pair<string, string>("DateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    body->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    body->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suspEventSource)) {
    body->insert(pair<string, string>("SuspEventSource", *request->suspEventSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRecentDocument"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRecentDocumentResponse(callApi(params, req, runtime));
}

GetRecentDocumentResponse Alibabacloud_Mssp20161228::Client::getRecentDocument(shared_ptr<GetRecentDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRecentDocumentWithOptions(request, runtime);
}

GetSafetyCoverResponse Alibabacloud_Mssp20161228::Client::getSafetyCoverWithOptions(shared_ptr<GetSafetyCoverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateType)) {
    body->insert(pair<string, string>("DateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    body->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    body->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suspEventSource)) {
    body->insert(pair<string, string>("SuspEventSource", *request->suspEventSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSafetyCover"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSafetyCoverResponse(callApi(params, req, runtime));
}

GetSafetyCoverResponse Alibabacloud_Mssp20161228::Client::getSafetyCover(shared_ptr<GetSafetyCoverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSafetyCoverWithOptions(request, runtime);
}

GetSowListResponse Alibabacloud_Mssp20161228::Client::getSowListWithOptions(shared_ptr<GetSowListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateType)) {
    body->insert(pair<string, string>("DateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    body->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    body->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suspEventSource)) {
    body->insert(pair<string, string>("SuspEventSource", *request->suspEventSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSowList"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSowListResponse(callApi(params, req, runtime));
}

GetSowListResponse Alibabacloud_Mssp20161228::Client::getSowList(shared_ptr<GetSowListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSowListWithOptions(request, runtime);
}

GetSuspEventPageResponse Alibabacloud_Mssp20161228::Client::getSuspEventPageWithOptions(shared_ptr<GetSuspEventPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alarmEndTime)) {
    body->insert(pair<string, long>("AlarmEndTime", *request->alarmEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->alarmStartTime)) {
    body->insert(pair<string, long>("AlarmStartTime", *request->alarmStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSuspEventPage"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSuspEventPageResponse(callApi(params, req, runtime));
}

GetSuspEventPageResponse Alibabacloud_Mssp20161228::Client::getSuspEventPage(shared_ptr<GetSuspEventPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSuspEventPageWithOptions(request, runtime);
}

GetSuspEventSummaryResponse Alibabacloud_Mssp20161228::Client::getSuspEventSummaryWithOptions(shared_ptr<GetSuspEventSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateType)) {
    body->insert(pair<string, string>("DateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    body->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    body->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suspEventSource)) {
    body->insert(pair<string, string>("SuspEventSource", *request->suspEventSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSuspEventSummary"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSuspEventSummaryResponse(callApi(params, req, runtime));
}

GetSuspEventSummaryResponse Alibabacloud_Mssp20161228::Client::getSuspEventSummary(shared_ptr<GetSuspEventSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSuspEventSummaryWithOptions(request, runtime);
}

GetSuspPageSummaryResponse Alibabacloud_Mssp20161228::Client::getSuspPageSummaryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSuspPageSummary"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSuspPageSummaryResponse(callApi(params, req, runtime));
}

GetSuspPageSummaryResponse Alibabacloud_Mssp20161228::Client::getSuspPageSummary() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSuspPageSummaryWithOptions(runtime);
}

GetUserStatusResponse Alibabacloud_Mssp20161228::Client::getUserStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserStatus"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserStatusResponse(callApi(params, req, runtime));
}

GetUserStatusResponse Alibabacloud_Mssp20161228::Client::getUserStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserStatusWithOptions(runtime);
}

GetVulItemPageResponse Alibabacloud_Mssp20161228::Client::getVulItemPageWithOptions(shared_ptr<GetVulItemPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasName)) {
    body->insert(pair<string, string>("AliasName", *request->aliasName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dealed)) {
    body->insert(pair<string, string>("Dealed", *request->dealed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    body->insert(pair<string, string>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanType)) {
    body->insert(pair<string, string>("ScanType", *request->scanType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVulItemPage"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVulItemPageResponse(callApi(params, req, runtime));
}

GetVulItemPageResponse Alibabacloud_Mssp20161228::Client::getVulItemPage(shared_ptr<GetVulItemPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVulItemPageWithOptions(request, runtime);
}

GetVulListByIdResponse Alibabacloud_Mssp20161228::Client::getVulListByIdWithOptions(shared_ptr<GetVulListByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dealed)) {
    body->insert(pair<string, string>("Dealed", *request->dealed));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->necessity)) {
    body->insert(pair<string, string>("Necessity", *request->necessity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuids)) {
    body->insert(pair<string, string>("Uuids", *request->uuids));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVulListById"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVulListByIdResponse(callApi(params, req, runtime));
}

GetVulListByIdResponse Alibabacloud_Mssp20161228::Client::getVulListById(shared_ptr<GetVulListByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVulListByIdWithOptions(request, runtime);
}

GetVulPageSummaryResponse Alibabacloud_Mssp20161228::Client::getVulPageSummaryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVulPageSummary"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVulPageSummaryResponse(callApi(params, req, runtime));
}

GetVulPageSummaryResponse Alibabacloud_Mssp20161228::Client::getVulPageSummary() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVulPageSummaryWithOptions(runtime);
}

GetVulSummaryResponse Alibabacloud_Mssp20161228::Client::getVulSummaryWithOptions(shared_ptr<GetVulSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateType)) {
    body->insert(pair<string, string>("DateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    body->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    body->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suspEventSource)) {
    body->insert(pair<string, string>("SuspEventSource", *request->suspEventSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVulSummary"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVulSummaryResponse(callApi(params, req, runtime));
}

GetVulSummaryResponse Alibabacloud_Mssp20161228::Client::getVulSummary(shared_ptr<GetVulSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVulSummaryWithOptions(request, runtime);
}

GetWorkTaskSummaryResponse Alibabacloud_Mssp20161228::Client::getWorkTaskSummaryWithOptions(shared_ptr<GetWorkTaskSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateType)) {
    body->insert(pair<string, string>("DateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    body->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    body->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suspEventSource)) {
    body->insert(pair<string, string>("SuspEventSource", *request->suspEventSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkTaskSummary"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkTaskSummaryResponse(callApi(params, req, runtime));
}

GetWorkTaskSummaryResponse Alibabacloud_Mssp20161228::Client::getWorkTaskSummary(shared_ptr<GetWorkTaskSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorkTaskSummaryWithOptions(request, runtime);
}

PageServiceCustomerResponse Alibabacloud_Mssp20161228::Client::pageServiceCustomerWithOptions(shared_ptr<PageServiceCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->authStatus)) {
    body->insert(pair<string, long>("AuthStatus", *request->authStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cmAuthStatus)) {
    body->insert(pair<string, long>("CmAuthStatus", *request->cmAuthStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->monitorAuthStatus)) {
    body->insert(pair<string, long>("MonitorAuthStatus", *request->monitorAuthStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PageServiceCustomer"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PageServiceCustomerResponse(callApi(params, req, runtime));
}

PageServiceCustomerResponse Alibabacloud_Mssp20161228::Client::pageServiceCustomer(shared_ptr<PageServiceCustomerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pageServiceCustomerWithOptions(request, runtime);
}

SendCustomEventResponse Alibabacloud_Mssp20161228::Client::sendCustomEventWithOptions(shared_ptr<SendCustomEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customerId)) {
    body->insert(pair<string, string>("CustomerId", *request->customerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSource)) {
    body->insert(pair<string, string>("DataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventDescription)) {
    body->insert(pair<string, string>("EventDescription", *request->eventDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventDetails)) {
    body->insert(pair<string, string>("EventDetails", *request->eventDetails));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    body->insert(pair<string, string>("EventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    body->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->findTime)) {
    body->insert(pair<string, long>("FindTime", *request->findTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isSend)) {
    body->insert(pair<string, string>("IsSend", *request->isSend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    body->insert(pair<string, string>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->occurrenceTime)) {
    body->insert(pair<string, long>("OccurrenceTime", *request->occurrenceTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    body->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    body->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniqueId)) {
    body->insert(pair<string, string>("UniqueId", *request->uniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendCustomEvent"))},
    {"version", boost::any(string("2016-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendCustomEventResponse(callApi(params, req, runtime));
}

SendCustomEventResponse Alibabacloud_Mssp20161228::Client::sendCustomEvent(shared_ptr<SendCustomEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCustomEventWithOptions(request, runtime);
}

