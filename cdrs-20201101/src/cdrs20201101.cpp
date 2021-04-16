// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cdrs20201101.hpp>
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

using namespace Alibabacloud_CDRS20201101;

Alibabacloud_CDRS20201101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cdrs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CDRS20201101::Client::getEndpoint(shared_ptr<string> productId,
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

SearchObjectResponse Alibabacloud_CDRS20201101::Client::searchObjectWithOptions(shared_ptr<SearchObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchObjectResponse(doRPCRequest(make_shared<string>("SearchObject"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchObjectResponse Alibabacloud_CDRS20201101::Client::searchObject(shared_ptr<SearchObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchObjectWithOptions(request, runtime);
}

ListAreaHotSpotMetricsResponse Alibabacloud_CDRS20201101::Client::listAreaHotSpotMetricsWithOptions(shared_ptr<ListAreaHotSpotMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAreaHotSpotMetricsResponse(doRPCRequest(make_shared<string>("ListAreaHotSpotMetrics"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAreaHotSpotMetricsResponse Alibabacloud_CDRS20201101::Client::listAreaHotSpotMetrics(shared_ptr<ListAreaHotSpotMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAreaHotSpotMetricsWithOptions(request, runtime);
}

BindDeviceResponse Alibabacloud_CDRS20201101::Client::bindDeviceWithOptions(shared_ptr<BindDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindDeviceResponse(doRPCRequest(make_shared<string>("BindDevice"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindDeviceResponse Alibabacloud_CDRS20201101::Client::bindDevice(shared_ptr<BindDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindDeviceWithOptions(request, runtime);
}

GetCdrsMonitorResultResponse Alibabacloud_CDRS20201101::Client::getCdrsMonitorResultWithOptions(shared_ptr<GetCdrsMonitorResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCdrsMonitorResultResponse(doRPCRequest(make_shared<string>("GetCdrsMonitorResult"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCdrsMonitorResultResponse Alibabacloud_CDRS20201101::Client::getCdrsMonitorResult(shared_ptr<GetCdrsMonitorResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCdrsMonitorResultWithOptions(request, runtime);
}

ListVehicleDetailsResponse Alibabacloud_CDRS20201101::Client::listVehicleDetailsWithOptions(shared_ptr<ListVehicleDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVehicleDetailsResponse(doRPCRequest(make_shared<string>("ListVehicleDetails"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVehicleDetailsResponse Alibabacloud_CDRS20201101::Client::listVehicleDetails(shared_ptr<ListVehicleDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVehicleDetailsWithOptions(request, runtime);
}

GetCdrsMonitorListResponse Alibabacloud_CDRS20201101::Client::getCdrsMonitorListWithOptions(shared_ptr<GetCdrsMonitorListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCdrsMonitorListResponse(doRPCRequest(make_shared<string>("GetCdrsMonitorList"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCdrsMonitorListResponse Alibabacloud_CDRS20201101::Client::getCdrsMonitorList(shared_ptr<GetCdrsMonitorListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCdrsMonitorListWithOptions(request, runtime);
}

UpdateMonitorResponse Alibabacloud_CDRS20201101::Client::updateMonitorWithOptions(shared_ptr<UpdateMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMonitorResponse(doRPCRequest(make_shared<string>("UpdateMonitor"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMonitorResponse Alibabacloud_CDRS20201101::Client::updateMonitor(shared_ptr<UpdateMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMonitorWithOptions(request, runtime);
}

ListDataStatisticsResponse Alibabacloud_CDRS20201101::Client::listDataStatisticsWithOptions(shared_ptr<ListDataStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataStatisticsResponse(doRPCRequest(make_shared<string>("ListDataStatistics"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataStatisticsResponse Alibabacloud_CDRS20201101::Client::listDataStatistics(shared_ptr<ListDataStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataStatisticsWithOptions(request, runtime);
}

UnbindDeviceResponse Alibabacloud_CDRS20201101::Client::unbindDeviceWithOptions(shared_ptr<UnbindDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindDeviceResponse(doRPCRequest(make_shared<string>("UnbindDevice"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindDeviceResponse Alibabacloud_CDRS20201101::Client::unbindDevice(shared_ptr<UnbindDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindDeviceWithOptions(request, runtime);
}

ListPersonDetailsResponse Alibabacloud_CDRS20201101::Client::listPersonDetailsWithOptions(shared_ptr<ListPersonDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPersonDetailsResponse(doRPCRequest(make_shared<string>("ListPersonDetails"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPersonDetailsResponse Alibabacloud_CDRS20201101::Client::listPersonDetails(shared_ptr<ListPersonDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPersonDetailsWithOptions(request, runtime);
}

ListVehicleTagDistributeResponse Alibabacloud_CDRS20201101::Client::listVehicleTagDistributeWithOptions(shared_ptr<ListVehicleTagDistributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVehicleTagDistributeResponse(doRPCRequest(make_shared<string>("ListVehicleTagDistribute"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVehicleTagDistributeResponse Alibabacloud_CDRS20201101::Client::listVehicleTagDistribute(shared_ptr<ListVehicleTagDistributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVehicleTagDistributeWithOptions(request, runtime);
}

ListDevicePersonStatisticsResponse Alibabacloud_CDRS20201101::Client::listDevicePersonStatisticsWithOptions(shared_ptr<ListDevicePersonStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDevicePersonStatisticsResponse(doRPCRequest(make_shared<string>("ListDevicePersonStatistics"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDevicePersonStatisticsResponse Alibabacloud_CDRS20201101::Client::listDevicePersonStatistics(shared_ptr<ListDevicePersonStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevicePersonStatisticsWithOptions(request, runtime);
}

AddMonitorResponse Alibabacloud_CDRS20201101::Client::addMonitorWithOptions(shared_ptr<AddMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddMonitorResponse(doRPCRequest(make_shared<string>("AddMonitor"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddMonitorResponse Alibabacloud_CDRS20201101::Client::addMonitor(shared_ptr<AddMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMonitorWithOptions(request, runtime);
}

PaginateDeviceResponse Alibabacloud_CDRS20201101::Client::paginateDeviceWithOptions(shared_ptr<PaginateDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PaginateDeviceResponse(doRPCRequest(make_shared<string>("PaginateDevice"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PaginateDeviceResponse Alibabacloud_CDRS20201101::Client::paginateDevice(shared_ptr<PaginateDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return paginateDeviceWithOptions(request, runtime);
}

StopCdrsMonitorResponse Alibabacloud_CDRS20201101::Client::stopCdrsMonitorWithOptions(shared_ptr<StopCdrsMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopCdrsMonitorResponse(doRPCRequest(make_shared<string>("StopCdrsMonitor"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopCdrsMonitorResponse Alibabacloud_CDRS20201101::Client::stopCdrsMonitor(shared_ptr<StopCdrsMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopCdrsMonitorWithOptions(request, runtime);
}

RecallTrajectoryByCoordinateTimeResponse Alibabacloud_CDRS20201101::Client::recallTrajectoryByCoordinateTimeWithOptions(shared_ptr<RecallTrajectoryByCoordinateTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecallTrajectoryByCoordinateTimeResponse(doRPCRequest(make_shared<string>("RecallTrajectoryByCoordinateTime"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecallTrajectoryByCoordinateTimeResponse Alibabacloud_CDRS20201101::Client::recallTrajectoryByCoordinateTime(shared_ptr<RecallTrajectoryByCoordinateTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recallTrajectoryByCoordinateTimeWithOptions(request, runtime);
}

ListCityMapPersonFlowResponse Alibabacloud_CDRS20201101::Client::listCityMapPersonFlowWithOptions(shared_ptr<ListCityMapPersonFlowRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCityMapPersonFlowShrinkRequest> request = make_shared<ListCityMapPersonFlowShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->originDataSourceIdList)) {
    request->originDataSourceIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->originDataSourceIdList, make_shared<string>("OriginDataSourceIdList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->targetDataSourceIdList)) {
    request->targetDataSourceIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->targetDataSourceIdList, make_shared<string>("TargetDataSourceIdList"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCityMapPersonFlowResponse(doRPCRequest(make_shared<string>("ListCityMapPersonFlow"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCityMapPersonFlowResponse Alibabacloud_CDRS20201101::Client::listCityMapPersonFlow(shared_ptr<ListCityMapPersonFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCityMapPersonFlowWithOptions(request, runtime);
}

AddCdrsMonitorResponse Alibabacloud_CDRS20201101::Client::addCdrsMonitorWithOptions(shared_ptr<AddCdrsMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddCdrsMonitorResponse(doRPCRequest(make_shared<string>("AddCdrsMonitor"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddCdrsMonitorResponse Alibabacloud_CDRS20201101::Client::addCdrsMonitor(shared_ptr<AddCdrsMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCdrsMonitorWithOptions(request, runtime);
}

ListMapRouteDetailsResponse Alibabacloud_CDRS20201101::Client::listMapRouteDetailsWithOptions(shared_ptr<ListMapRouteDetailsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListMapRouteDetailsShrinkRequest> request = make_shared<ListMapRouteDetailsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->routeList)) {
    request->routeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->routeList, make_shared<string>("RouteList"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMapRouteDetailsResponse(doRPCRequest(make_shared<string>("ListMapRouteDetails"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMapRouteDetailsResponse Alibabacloud_CDRS20201101::Client::listMapRouteDetails(shared_ptr<ListMapRouteDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMapRouteDetailsWithOptions(request, runtime);
}

ListPersonTopResponse Alibabacloud_CDRS20201101::Client::listPersonTopWithOptions(shared_ptr<ListPersonTopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPersonTopResponse(doRPCRequest(make_shared<string>("ListPersonTop"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPersonTopResponse Alibabacloud_CDRS20201101::Client::listPersonTop(shared_ptr<ListPersonTopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPersonTopWithOptions(request, runtime);
}

GetMonitorResultResponse Alibabacloud_CDRS20201101::Client::getMonitorResultWithOptions(shared_ptr<GetMonitorResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMonitorResultResponse(doRPCRequest(make_shared<string>("GetMonitorResult"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMonitorResultResponse Alibabacloud_CDRS20201101::Client::getMonitorResult(shared_ptr<GetMonitorResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMonitorResultWithOptions(request, runtime);
}

ListCityMapAoisResponse Alibabacloud_CDRS20201101::Client::listCityMapAoisWithOptions(shared_ptr<ListCityMapAoisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCityMapAoisResponse(doRPCRequest(make_shared<string>("ListCityMapAois"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCityMapAoisResponse Alibabacloud_CDRS20201101::Client::listCityMapAois(shared_ptr<ListCityMapAoisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCityMapAoisWithOptions(request, runtime);
}

RecognizeImageResponse Alibabacloud_CDRS20201101::Client::recognizeImageWithOptions(shared_ptr<RecognizeImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecognizeImageResponse(doRPCRequest(make_shared<string>("RecognizeImage"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeImageResponse Alibabacloud_CDRS20201101::Client::recognizeImage(shared_ptr<RecognizeImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeImageWithOptions(request, runtime);
}

GetMonitorListResponse Alibabacloud_CDRS20201101::Client::getMonitorListWithOptions(shared_ptr<GetMonitorListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMonitorListResponse(doRPCRequest(make_shared<string>("GetMonitorList"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMonitorListResponse Alibabacloud_CDRS20201101::Client::getMonitorList(shared_ptr<GetMonitorListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMonitorListWithOptions(request, runtime);
}

ListDeviceRelationResponse Alibabacloud_CDRS20201101::Client::listDeviceRelationWithOptions(shared_ptr<ListDeviceRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDeviceRelationResponse(doRPCRequest(make_shared<string>("ListDeviceRelation"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDeviceRelationResponse Alibabacloud_CDRS20201101::Client::listDeviceRelation(shared_ptr<ListDeviceRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceRelationWithOptions(request, runtime);
}

ListPersonTrackResponse Alibabacloud_CDRS20201101::Client::listPersonTrackWithOptions(shared_ptr<ListPersonTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPersonTrackResponse(doRPCRequest(make_shared<string>("ListPersonTrack"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPersonTrackResponse Alibabacloud_CDRS20201101::Client::listPersonTrack(shared_ptr<ListPersonTrackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPersonTrackWithOptions(request, runtime);
}

ListCityMapCameraResultsResponse Alibabacloud_CDRS20201101::Client::listCityMapCameraResultsWithOptions(shared_ptr<ListCityMapCameraResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCityMapCameraResultsShrinkRequest> request = make_shared<ListCityMapCameraResultsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->dataSourceIdList)) {
    request->dataSourceIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataSourceIdList, make_shared<string>("DataSourceIdList"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCityMapCameraResultsResponse(doRPCRequest(make_shared<string>("ListCityMapCameraResults"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCityMapCameraResultsResponse Alibabacloud_CDRS20201101::Client::listCityMapCameraResults(shared_ptr<ListCityMapCameraResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCityMapCameraResultsWithOptions(request, runtime);
}

QueryTrajectoryByIdResponse Alibabacloud_CDRS20201101::Client::queryTrajectoryByIdWithOptions(shared_ptr<QueryTrajectoryByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTrajectoryByIdResponse(doRPCRequest(make_shared<string>("QueryTrajectoryById"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTrajectoryByIdResponse Alibabacloud_CDRS20201101::Client::queryTrajectoryById(shared_ptr<QueryTrajectoryByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrajectoryByIdWithOptions(request, runtime);
}

ListCityMapImageDetailsResponse Alibabacloud_CDRS20201101::Client::listCityMapImageDetailsWithOptions(shared_ptr<ListCityMapImageDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCityMapImageDetailsResponse(doRPCRequest(make_shared<string>("ListCityMapImageDetails"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCityMapImageDetailsResponse Alibabacloud_CDRS20201101::Client::listCityMapImageDetails(shared_ptr<ListCityMapImageDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCityMapImageDetailsWithOptions(request, runtime);
}

CreateProjectResponse Alibabacloud_CDRS20201101::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProjectResponse(doRPCRequest(make_shared<string>("CreateProject"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProjectResponse Alibabacloud_CDRS20201101::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectWithOptions(request, runtime);
}

ListVehicleTopResponse Alibabacloud_CDRS20201101::Client::listVehicleTopWithOptions(shared_ptr<ListVehicleTopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVehicleTopResponse(doRPCRequest(make_shared<string>("ListVehicleTop"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVehicleTopResponse Alibabacloud_CDRS20201101::Client::listVehicleTop(shared_ptr<ListVehicleTopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVehicleTopWithOptions(request, runtime);
}

ListDataStatisticsByDayResponse Alibabacloud_CDRS20201101::Client::listDataStatisticsByDayWithOptions(shared_ptr<ListDataStatisticsByDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataStatisticsByDayResponse(doRPCRequest(make_shared<string>("ListDataStatisticsByDay"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataStatisticsByDayResponse Alibabacloud_CDRS20201101::Client::listDataStatisticsByDay(shared_ptr<ListDataStatisticsByDayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataStatisticsByDayWithOptions(request, runtime);
}

ListVehicleResultsResponse Alibabacloud_CDRS20201101::Client::listVehicleResultsWithOptions(shared_ptr<ListVehicleResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVehicleResultsResponse(doRPCRequest(make_shared<string>("ListVehicleResults"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVehicleResultsResponse Alibabacloud_CDRS20201101::Client::listVehicleResults(shared_ptr<ListVehicleResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVehicleResultsWithOptions(request, runtime);
}

SearchAggregateObjectResponse Alibabacloud_CDRS20201101::Client::searchAggregateObjectWithOptions(shared_ptr<SearchAggregateObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchAggregateObjectResponse(doRPCRequest(make_shared<string>("SearchAggregateObject"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchAggregateObjectResponse Alibabacloud_CDRS20201101::Client::searchAggregateObject(shared_ptr<SearchAggregateObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchAggregateObjectWithOptions(request, runtime);
}

ListCorpMetricsStatisticResponse Alibabacloud_CDRS20201101::Client::listCorpMetricsStatisticWithOptions(shared_ptr<ListCorpMetricsStatisticRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCorpMetricsStatisticShrinkRequest> request = make_shared<ListCorpMetricsStatisticShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->userGroupList)) {
    request->userGroupListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userGroupList, make_shared<string>("UserGroupList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->deviceGroupList)) {
    request->deviceGroupListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceGroupList, make_shared<string>("DeviceGroupList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->deviceIdList)) {
    request->deviceIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceIdList, make_shared<string>("DeviceIdList"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCorpMetricsStatisticResponse(doRPCRequest(make_shared<string>("ListCorpMetricsStatistic"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCorpMetricsStatisticResponse Alibabacloud_CDRS20201101::Client::listCorpMetricsStatistic(shared_ptr<ListCorpMetricsStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCorpMetricsStatisticWithOptions(request, runtime);
}

DetectTrajectoryRegularPatternResponse Alibabacloud_CDRS20201101::Client::detectTrajectoryRegularPatternWithOptions(shared_ptr<DetectTrajectoryRegularPatternRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectTrajectoryRegularPatternResponse(doRPCRequest(make_shared<string>("DetectTrajectoryRegularPattern"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectTrajectoryRegularPatternResponse Alibabacloud_CDRS20201101::Client::detectTrajectoryRegularPattern(shared_ptr<DetectTrajectoryRegularPatternRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectTrajectoryRegularPatternWithOptions(request, runtime);
}

ListVehicleTrackResponse Alibabacloud_CDRS20201101::Client::listVehicleTrackWithOptions(shared_ptr<ListVehicleTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVehicleTrackResponse(doRPCRequest(make_shared<string>("ListVehicleTrack"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVehicleTrackResponse Alibabacloud_CDRS20201101::Client::listVehicleTrack(shared_ptr<ListVehicleTrackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVehicleTrackWithOptions(request, runtime);
}

ListStructureStatisticsResponse Alibabacloud_CDRS20201101::Client::listStructureStatisticsWithOptions(shared_ptr<ListStructureStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListStructureStatisticsResponse(doRPCRequest(make_shared<string>("ListStructureStatistics"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListStructureStatisticsResponse Alibabacloud_CDRS20201101::Client::listStructureStatistics(shared_ptr<ListStructureStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStructureStatisticsWithOptions(request, runtime);
}

StopMonitorResponse Alibabacloud_CDRS20201101::Client::stopMonitorWithOptions(shared_ptr<StopMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopMonitorResponse(doRPCRequest(make_shared<string>("StopMonitor"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopMonitorResponse Alibabacloud_CDRS20201101::Client::stopMonitor(shared_ptr<StopMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopMonitorWithOptions(request, runtime);
}

PredictTrajectoryDestinationResponse Alibabacloud_CDRS20201101::Client::predictTrajectoryDestinationWithOptions(shared_ptr<PredictTrajectoryDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PredictTrajectoryDestinationResponse(doRPCRequest(make_shared<string>("PredictTrajectoryDestination"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PredictTrajectoryDestinationResponse Alibabacloud_CDRS20201101::Client::predictTrajectoryDestination(shared_ptr<PredictTrajectoryDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return predictTrajectoryDestinationWithOptions(request, runtime);
}

ListRangeDeviceResponse Alibabacloud_CDRS20201101::Client::listRangeDeviceWithOptions(shared_ptr<ListRangeDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRangeDeviceResponse(doRPCRequest(make_shared<string>("ListRangeDevice"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRangeDeviceResponse Alibabacloud_CDRS20201101::Client::listRangeDevice(shared_ptr<ListRangeDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRangeDeviceWithOptions(request, runtime);
}

ListCityMapRangeStatisticResponse Alibabacloud_CDRS20201101::Client::listCityMapRangeStatisticWithOptions(shared_ptr<ListCityMapRangeStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCityMapRangeStatisticResponse(doRPCRequest(make_shared<string>("ListCityMapRangeStatistic"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCityMapRangeStatisticResponse Alibabacloud_CDRS20201101::Client::listCityMapRangeStatistic(shared_ptr<ListCityMapRangeStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCityMapRangeStatisticWithOptions(request, runtime);
}

ListStorageStatisticsResponse Alibabacloud_CDRS20201101::Client::listStorageStatisticsWithOptions(shared_ptr<ListStorageStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListStorageStatisticsResponse(doRPCRequest(make_shared<string>("ListStorageStatistics"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListStorageStatisticsResponse Alibabacloud_CDRS20201101::Client::listStorageStatistics(shared_ptr<ListStorageStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStorageStatisticsWithOptions(request, runtime);
}

PaginateProjectResponse Alibabacloud_CDRS20201101::Client::paginateProjectWithOptions(shared_ptr<PaginateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PaginateProjectResponse(doRPCRequest(make_shared<string>("PaginateProject"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PaginateProjectResponse Alibabacloud_CDRS20201101::Client::paginateProject(shared_ptr<PaginateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return paginateProjectWithOptions(request, runtime);
}

ListCityMapCameraStatisticsResponse Alibabacloud_CDRS20201101::Client::listCityMapCameraStatisticsWithOptions(shared_ptr<ListCityMapCameraStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCityMapCameraStatisticsResponse(doRPCRequest(make_shared<string>("ListCityMapCameraStatistics"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCityMapCameraStatisticsResponse Alibabacloud_CDRS20201101::Client::listCityMapCameraStatistics(shared_ptr<ListCityMapCameraStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCityMapCameraStatisticsWithOptions(request, runtime);
}

UpdateCdrsMonitorResponse Alibabacloud_CDRS20201101::Client::updateCdrsMonitorWithOptions(shared_ptr<UpdateCdrsMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCdrsMonitorResponse(doRPCRequest(make_shared<string>("UpdateCdrsMonitor"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCdrsMonitorResponse Alibabacloud_CDRS20201101::Client::updateCdrsMonitor(shared_ptr<UpdateCdrsMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCdrsMonitorWithOptions(request, runtime);
}

ListPersonResultResponse Alibabacloud_CDRS20201101::Client::listPersonResultWithOptions(shared_ptr<ListPersonResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPersonResultResponse(doRPCRequest(make_shared<string>("ListPersonResult"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPersonResultResponse Alibabacloud_CDRS20201101::Client::listPersonResult(shared_ptr<ListPersonResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPersonResultWithOptions(request, runtime);
}

ListTagMetricsResponse Alibabacloud_CDRS20201101::Client::listTagMetricsWithOptions(shared_ptr<ListTagMetricsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTagMetricsShrinkRequest> request = make_shared<ListTagMetricsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tagCode)) {
    request->tagCodeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagCode, make_shared<string>("TagCode"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagMetricsResponse(doRPCRequest(make_shared<string>("ListTagMetrics"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagMetricsResponse Alibabacloud_CDRS20201101::Client::listTagMetrics(shared_ptr<ListTagMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagMetricsWithOptions(request, runtime);
}

ListPersonTagResponse Alibabacloud_CDRS20201101::Client::listPersonTagWithOptions(shared_ptr<ListPersonTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPersonTagResponse(doRPCRequest(make_shared<string>("ListPersonTag"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPersonTagResponse Alibabacloud_CDRS20201101::Client::listPersonTag(shared_ptr<ListPersonTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPersonTagWithOptions(request, runtime);
}

UpdateProjectResponse Alibabacloud_CDRS20201101::Client::updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateProjectResponse(doRPCRequest(make_shared<string>("UpdateProject"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateProjectResponse Alibabacloud_CDRS20201101::Client::updateProject(shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectWithOptions(request, runtime);
}

ListDevicePersonResponse Alibabacloud_CDRS20201101::Client::listDevicePersonWithOptions(shared_ptr<ListDevicePersonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDevicePersonResponse(doRPCRequest(make_shared<string>("ListDevicePerson"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDevicePersonResponse Alibabacloud_CDRS20201101::Client::listDevicePerson(shared_ptr<ListDevicePersonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevicePersonWithOptions(request, runtime);
}

ListDeviceDetailResponse Alibabacloud_CDRS20201101::Client::listDeviceDetailWithOptions(shared_ptr<ListDeviceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDeviceDetailResponse(doRPCRequest(make_shared<string>("ListDeviceDetail"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDeviceDetailResponse Alibabacloud_CDRS20201101::Client::listDeviceDetail(shared_ptr<ListDeviceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceDetailWithOptions(request, runtime);
}

ListDeviceGenderStatisticsResponse Alibabacloud_CDRS20201101::Client::listDeviceGenderStatisticsWithOptions(shared_ptr<ListDeviceGenderStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDeviceGenderStatisticsResponse(doRPCRequest(make_shared<string>("ListDeviceGenderStatistics"), make_shared<string>("2020-11-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDeviceGenderStatisticsResponse Alibabacloud_CDRS20201101::Client::listDeviceGenderStatistics(shared_ptr<ListDeviceGenderStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceGenderStatisticsWithOptions(request, runtime);
}

