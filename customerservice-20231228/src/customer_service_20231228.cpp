// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/customer_service_20231228.hpp>
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

using namespace Alibabacloud_CustomerService20231228;

Alibabacloud_CustomerService20231228::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("customerservice"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CustomerService20231228::Client::getEndpoint(shared_ptr<string> productId,
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

GetDownloadUrlResponse Alibabacloud_CustomerService20231228::Client::getDownloadUrlWithOptions(shared_ptr<GetDownloadUrlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    body->insert(pair<string, long>("fileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    body->insert(pair<string, string>("fileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->freeOrderApplyCode)) {
    body->insert(pair<string, string>("freeOrderApplyCode", *request->freeOrderApplyCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("orderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDownloadUrl"))},
    {"version", boost::any(string("2023-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/customerWorkbench/pop/api/file/getDownloadUrl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDownloadUrlResponse(callApi(params, req, runtime));
}

GetDownloadUrlResponse Alibabacloud_CustomerService20231228::Client::getDownloadUrl(shared_ptr<GetDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDownloadUrlWithOptions(request, headers, runtime);
}

GetEnterpriseSupportPlanDetailResponse Alibabacloud_CustomerService20231228::Client::getEnterpriseSupportPlanDetailWithOptions(shared_ptr<GetEnterpriseSupportPlanDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->freeOrderApplyCodes)) {
    body->insert(pair<string, vector<string>>("freeOrderApplyCodes", *request->freeOrderApplyCodes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->orderIds)) {
    body->insert(pair<string, vector<long>>("orderIds", *request->orderIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnterpriseSupportPlanDetail"))},
    {"version", boost::any(string("2023-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/customerWorkbench/pop/api/enterpriseSupport/getEnterpriseSupportPlanDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnterpriseSupportPlanDetailResponse(callApi(params, req, runtime));
}

GetEnterpriseSupportPlanDetailResponse Alibabacloud_CustomerService20231228::Client::getEnterpriseSupportPlanDetail(shared_ptr<GetEnterpriseSupportPlanDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEnterpriseSupportPlanDetailWithOptions(request, headers, runtime);
}

GetPreViewUrlResponse Alibabacloud_CustomerService20231228::Client::getPreViewUrlWithOptions(shared_ptr<GetPreViewUrlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyCode)) {
    body->insert(pair<string, string>("applyCode", *request->applyCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    body->insert(pair<string, long>("fileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    body->insert(pair<string, string>("fileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("orderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPreViewUrl"))},
    {"version", boost::any(string("2023-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/customerWorkbench/pop/api/file/getPreViewUrl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPreViewUrlResponse(callApi(params, req, runtime));
}

GetPreViewUrlResponse Alibabacloud_CustomerService20231228::Client::getPreViewUrl(shared_ptr<GetPreViewUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPreViewUrlWithOptions(request, headers, runtime);
}

GetServiceDetailResponse Alibabacloud_CustomerService20231228::Client::getServiceDetailWithOptions(shared_ptr<GetServiceDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyCode)) {
    body->insert(pair<string, string>("applyCode", *request->applyCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceDetail"))},
    {"version", boost::any(string("2023-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/customerWorkbench/pop/api/expert/service/getServiceDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceDetailResponse(callApi(params, req, runtime));
}

GetServiceDetailResponse Alibabacloud_CustomerService20231228::Client::getServiceDetail(shared_ptr<GetServiceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceDetailWithOptions(request, headers, runtime);
}

GetYunQiTaskByRecordIdResponse Alibabacloud_CustomerService20231228::Client::getYunQiTaskByRecordIdWithOptions(shared_ptr<GetYunQiTaskByRecordIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->recordId)) {
    query->insert(pair<string, string>("recordId", *request->recordId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetYunQiTaskByRecordId"))},
    {"version", boost::any(string("2023-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/customerWorkbench/pop/api/record/getYunQiTaskByRecordId"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetYunQiTaskByRecordIdResponse(callApi(params, req, runtime));
}

GetYunQiTaskByRecordIdResponse Alibabacloud_CustomerService20231228::Client::getYunQiTaskByRecordId(shared_ptr<GetYunQiTaskByRecordIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getYunQiTaskByRecordIdWithOptions(request, headers, runtime);
}

ListDocsGroupByYearResponse Alibabacloud_CustomerService20231228::Client::listDocsGroupByYearWithOptions(shared_ptr<ListDocsGroupByYearRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applyCodes)) {
    body->insert(pair<string, vector<string>>("applyCodes", *request->applyCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileNameKeyword)) {
    body->insert(pair<string, string>("fileNameKeyword", *request->fileNameKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->orderIds)) {
    body->insert(pair<string, vector<long>>("orderIds", *request->orderIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("productCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDocsGroupByYear"))},
    {"version", boost::any(string("2023-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/customerWorkbench/pop/api/file/listDocsGroupByYear"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDocsGroupByYearResponse(callApi(params, req, runtime));
}

ListDocsGroupByYearResponse Alibabacloud_CustomerService20231228::Client::listDocsGroupByYear(shared_ptr<ListDocsGroupByYearRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDocsGroupByYearWithOptions(request, headers, runtime);
}

ListEnterpriseSupportPlanResponse Alibabacloud_CustomerService20231228::Client::listEnterpriseSupportPlanWithOptions(shared_ptr<ListEnterpriseSupportPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnterpriseSupportPlan"))},
    {"version", boost::any(string("2023-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/customerWorkbench/pop/api/enterpriseSupport/listEnterpriseSupportPlan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnterpriseSupportPlanResponse(callApi(params, req, runtime));
}

ListEnterpriseSupportPlanResponse Alibabacloud_CustomerService20231228::Client::listEnterpriseSupportPlan(shared_ptr<ListEnterpriseSupportPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEnterpriseSupportPlanWithOptions(request, headers, runtime);
}

ListEnterpriseSupportPlanSimpleResponse Alibabacloud_CustomerService20231228::Client::listEnterpriseSupportPlanSimpleWithOptions(shared_ptr<ListEnterpriseSupportPlanSimpleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnterpriseSupportPlanSimple"))},
    {"version", boost::any(string("2023-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/customerWorkbench/pop/api/enterpriseSupport/listEnterpriseSupportPlanSimple"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnterpriseSupportPlanSimpleResponse(callApi(params, req, runtime));
}

ListEnterpriseSupportPlanSimpleResponse Alibabacloud_CustomerService20231228::Client::listEnterpriseSupportPlanSimple(shared_ptr<ListEnterpriseSupportPlanSimpleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEnterpriseSupportPlanSimpleWithOptions(request, headers, runtime);
}

ListServiceApplyResponse Alibabacloud_CustomerService20231228::Client::listServiceApplyWithOptions(shared_ptr<ListServiceApplyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applyType)) {
    body->insert(pair<string, vector<string>>("applyType", *request->applyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    body->insert(pair<string, long>("endDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productCode)) {
    body->insert(pair<string, long>("productCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    body->insert(pair<string, long>("startDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceApply"))},
    {"version", boost::any(string("2023-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/customerWorkbench/pop/api/expert/service/listServiceApply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceApplyResponse(callApi(params, req, runtime));
}

ListServiceApplyResponse Alibabacloud_CustomerService20231228::Client::listServiceApply(shared_ptr<ListServiceApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceApplyWithOptions(request, headers, runtime);
}

ListYunQiTaskByUidResponse Alibabacloud_CustomerService20231228::Client::listYunQiTaskByUidWithOptions(shared_ptr<ListYunQiTaskByUidRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeEnd)) {
    body->insert(pair<string, long>("createTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeStart)) {
    body->insert(pair<string, long>("createTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->freeOrderApplyCodes)) {
    body->insert(pair<string, vector<string>>("freeOrderApplyCodes", *request->freeOrderApplyCodes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->freeOrderApplyIds)) {
    body->insert(pair<string, vector<long>>("freeOrderApplyIds", *request->freeOrderApplyIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->orderIds)) {
    body->insert(pair<string, vector<long>>("orderIds", *request->orderIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->statusList)) {
    body->insert(pair<string, vector<string>>("statusList", *request->statusList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListYunQiTaskByUid"))},
    {"version", boost::any(string("2023-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/customerWorkbench/pop/api/record/listYunQiTaskByUid"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListYunQiTaskByUidResponse(callApi(params, req, runtime));
}

ListYunQiTaskByUidResponse Alibabacloud_CustomerService20231228::Client::listYunQiTaskByUid(shared_ptr<ListYunQiTaskByUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listYunQiTaskByUidWithOptions(request, headers, runtime);
}

MarkFileReadedResponse Alibabacloud_CustomerService20231228::Client::markFileReadedWithOptions(shared_ptr<MarkFileReadedRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyCode)) {
    body->insert(pair<string, string>("applyCode", *request->applyCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    body->insert(pair<string, long>("fileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("orderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    body->insert(pair<string, string>("scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MarkFileReaded"))},
    {"version", boost::any(string("2023-12-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/customerWorkbench/pop/api/file/markFileReaded"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MarkFileReadedResponse(callApi(params, req, runtime));
}

MarkFileReadedResponse Alibabacloud_CustomerService20231228::Client::markFileReaded(shared_ptr<MarkFileReadedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return markFileReadedWithOptions(request, headers, runtime);
}

