// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pts20201020.hpp>
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

using namespace Alibabacloud_PTS20201020;

Alibabacloud_PTS20201020::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("pts"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_PTS20201020::Client::getEndpoint(shared_ptr<string> productId,
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

CreatePtsSceneResponse Alibabacloud_PTS20201020::Client::createPtsSceneWithOptions(shared_ptr<CreatePtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePtsSceneResponse(doRPCRequest(make_shared<string>("CreatePtsScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePtsSceneResponse Alibabacloud_PTS20201020::Client::createPtsScene(shared_ptr<CreatePtsSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPtsSceneWithOptions(request, runtime);
}

CreatePtsSceneBaseLineFromReportResponse Alibabacloud_PTS20201020::Client::createPtsSceneBaseLineFromReportWithOptions(shared_ptr<CreatePtsSceneBaseLineFromReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePtsSceneBaseLineFromReportResponse(doRPCRequest(make_shared<string>("CreatePtsSceneBaseLineFromReport"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePtsSceneBaseLineFromReportResponse Alibabacloud_PTS20201020::Client::createPtsSceneBaseLineFromReport(shared_ptr<CreatePtsSceneBaseLineFromReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPtsSceneBaseLineFromReportWithOptions(request, runtime);
}

DeletePtsSceneResponse Alibabacloud_PTS20201020::Client::deletePtsSceneWithOptions(shared_ptr<DeletePtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePtsSceneResponse(doRPCRequest(make_shared<string>("DeletePtsScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePtsSceneResponse Alibabacloud_PTS20201020::Client::deletePtsScene(shared_ptr<DeletePtsSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePtsSceneWithOptions(request, runtime);
}

DeletePtsSceneBaseLineResponse Alibabacloud_PTS20201020::Client::deletePtsSceneBaseLineWithOptions(shared_ptr<DeletePtsSceneBaseLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePtsSceneBaseLineResponse(doRPCRequest(make_shared<string>("DeletePtsSceneBaseLine"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePtsSceneBaseLineResponse Alibabacloud_PTS20201020::Client::deletePtsSceneBaseLine(shared_ptr<DeletePtsSceneBaseLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePtsSceneBaseLineWithOptions(request, runtime);
}

DeletePtsScenesResponse Alibabacloud_PTS20201020::Client::deletePtsScenesWithOptions(shared_ptr<DeletePtsScenesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeletePtsScenesShrinkRequest> request = make_shared<DeletePtsScenesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->sceneIds)) {
    request->sceneIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sceneIds, make_shared<string>("SceneIds"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePtsScenesResponse(doRPCRequest(make_shared<string>("DeletePtsScenes"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePtsScenesResponse Alibabacloud_PTS20201020::Client::deletePtsScenes(shared_ptr<DeletePtsScenesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePtsScenesWithOptions(request, runtime);
}

GetJMeterLogsResponse Alibabacloud_PTS20201020::Client::getJMeterLogsWithOptions(shared_ptr<GetJMeterLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetJMeterLogsResponse(doRPCRequest(make_shared<string>("GetJMeterLogs"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJMeterLogsResponse Alibabacloud_PTS20201020::Client::getJMeterLogs(shared_ptr<GetJMeterLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJMeterLogsWithOptions(request, runtime);
}

GetJMeterSampleMetricsResponse Alibabacloud_PTS20201020::Client::getJMeterSampleMetricsWithOptions(shared_ptr<GetJMeterSampleMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetJMeterSampleMetricsResponse(doRPCRequest(make_shared<string>("GetJMeterSampleMetrics"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJMeterSampleMetricsResponse Alibabacloud_PTS20201020::Client::getJMeterSampleMetrics(shared_ptr<GetJMeterSampleMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJMeterSampleMetricsWithOptions(request, runtime);
}

GetJMeterSamplingLogsResponse Alibabacloud_PTS20201020::Client::getJMeterSamplingLogsWithOptions(shared_ptr<GetJMeterSamplingLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetJMeterSamplingLogsResponse(doRPCRequest(make_shared<string>("GetJMeterSamplingLogs"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJMeterSamplingLogsResponse Alibabacloud_PTS20201020::Client::getJMeterSamplingLogs(shared_ptr<GetJMeterSamplingLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJMeterSamplingLogsWithOptions(request, runtime);
}

GetJMeterSceneRunningDataResponse Alibabacloud_PTS20201020::Client::getJMeterSceneRunningDataWithOptions(shared_ptr<GetJMeterSceneRunningDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetJMeterSceneRunningDataResponse(doRPCRequest(make_shared<string>("GetJMeterSceneRunningData"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJMeterSceneRunningDataResponse Alibabacloud_PTS20201020::Client::getJMeterSceneRunningData(shared_ptr<GetJMeterSceneRunningDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJMeterSceneRunningDataWithOptions(request, runtime);
}

GetOpenJMeterSceneResponse Alibabacloud_PTS20201020::Client::getOpenJMeterSceneWithOptions(shared_ptr<GetOpenJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOpenJMeterSceneResponse(doRPCRequest(make_shared<string>("GetOpenJMeterScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOpenJMeterSceneResponse Alibabacloud_PTS20201020::Client::getOpenJMeterScene(shared_ptr<GetOpenJMeterSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOpenJMeterSceneWithOptions(request, runtime);
}

GetPtsReportDetailsResponse Alibabacloud_PTS20201020::Client::getPtsReportDetailsWithOptions(shared_ptr<GetPtsReportDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPtsReportDetailsResponse(doRPCRequest(make_shared<string>("GetPtsReportDetails"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPtsReportDetailsResponse Alibabacloud_PTS20201020::Client::getPtsReportDetails(shared_ptr<GetPtsReportDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPtsReportDetailsWithOptions(request, runtime);
}

GetPtsReportsBySceneIdResponse Alibabacloud_PTS20201020::Client::getPtsReportsBySceneIdWithOptions(shared_ptr<GetPtsReportsBySceneIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPtsReportsBySceneIdResponse(doRPCRequest(make_shared<string>("GetPtsReportsBySceneId"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPtsReportsBySceneIdResponse Alibabacloud_PTS20201020::Client::getPtsReportsBySceneId(shared_ptr<GetPtsReportsBySceneIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPtsReportsBySceneIdWithOptions(request, runtime);
}

GetPtsSceneResponse Alibabacloud_PTS20201020::Client::getPtsSceneWithOptions(shared_ptr<GetPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPtsSceneResponse(doRPCRequest(make_shared<string>("GetPtsScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPtsSceneResponse Alibabacloud_PTS20201020::Client::getPtsScene(shared_ptr<GetPtsSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPtsSceneWithOptions(request, runtime);
}

GetPtsSceneBaseLineResponse Alibabacloud_PTS20201020::Client::getPtsSceneBaseLineWithOptions(shared_ptr<GetPtsSceneBaseLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPtsSceneBaseLineResponse(doRPCRequest(make_shared<string>("GetPtsSceneBaseLine"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPtsSceneBaseLineResponse Alibabacloud_PTS20201020::Client::getPtsSceneBaseLine(shared_ptr<GetPtsSceneBaseLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPtsSceneBaseLineWithOptions(request, runtime);
}

GetPtsSceneRunningDataResponse Alibabacloud_PTS20201020::Client::getPtsSceneRunningDataWithOptions(shared_ptr<GetPtsSceneRunningDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPtsSceneRunningDataResponse(doRPCRequest(make_shared<string>("GetPtsSceneRunningData"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPtsSceneRunningDataResponse Alibabacloud_PTS20201020::Client::getPtsSceneRunningData(shared_ptr<GetPtsSceneRunningDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPtsSceneRunningDataWithOptions(request, runtime);
}

GetPtsSceneRunningStatusResponse Alibabacloud_PTS20201020::Client::getPtsSceneRunningStatusWithOptions(shared_ptr<GetPtsSceneRunningStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPtsSceneRunningStatusResponse(doRPCRequest(make_shared<string>("GetPtsSceneRunningStatus"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPtsSceneRunningStatusResponse Alibabacloud_PTS20201020::Client::getPtsSceneRunningStatus(shared_ptr<GetPtsSceneRunningStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPtsSceneRunningStatusWithOptions(request, runtime);
}

ListEnvsResponse Alibabacloud_PTS20201020::Client::listEnvsWithOptions(shared_ptr<ListEnvsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListEnvsResponse(doRPCRequest(make_shared<string>("ListEnvs"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListEnvsResponse Alibabacloud_PTS20201020::Client::listEnvs(shared_ptr<ListEnvsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnvsWithOptions(request, runtime);
}

ListJMeterReportsResponse Alibabacloud_PTS20201020::Client::listJMeterReportsWithOptions(shared_ptr<ListJMeterReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListJMeterReportsResponse(doRPCRequest(make_shared<string>("ListJMeterReports"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListJMeterReportsResponse Alibabacloud_PTS20201020::Client::listJMeterReports(shared_ptr<ListJMeterReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJMeterReportsWithOptions(request, runtime);
}

ListOpenJMeterScenesResponse Alibabacloud_PTS20201020::Client::listOpenJMeterScenesWithOptions(shared_ptr<ListOpenJMeterScenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOpenJMeterScenesResponse(doRPCRequest(make_shared<string>("ListOpenJMeterScenes"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOpenJMeterScenesResponse Alibabacloud_PTS20201020::Client::listOpenJMeterScenes(shared_ptr<ListOpenJMeterScenesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOpenJMeterScenesWithOptions(request, runtime);
}

ListPtsSceneResponse Alibabacloud_PTS20201020::Client::listPtsSceneWithOptions(shared_ptr<ListPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPtsSceneResponse(doRPCRequest(make_shared<string>("ListPtsScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPtsSceneResponse Alibabacloud_PTS20201020::Client::listPtsScene(shared_ptr<ListPtsSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPtsSceneWithOptions(request, runtime);
}

ModifyPtsSceneResponse Alibabacloud_PTS20201020::Client::modifyPtsSceneWithOptions(shared_ptr<ModifyPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPtsSceneResponse(doRPCRequest(make_shared<string>("ModifyPtsScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPtsSceneResponse Alibabacloud_PTS20201020::Client::modifyPtsScene(shared_ptr<ModifyPtsSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPtsSceneWithOptions(request, runtime);
}

RemoveEnvResponse Alibabacloud_PTS20201020::Client::removeEnvWithOptions(shared_ptr<RemoveEnvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveEnvResponse(doRPCRequest(make_shared<string>("RemoveEnv"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveEnvResponse Alibabacloud_PTS20201020::Client::removeEnv(shared_ptr<RemoveEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeEnvWithOptions(request, runtime);
}

RemoveOpenJMeterSceneResponse Alibabacloud_PTS20201020::Client::removeOpenJMeterSceneWithOptions(shared_ptr<RemoveOpenJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveOpenJMeterSceneResponse(doRPCRequest(make_shared<string>("RemoveOpenJMeterScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveOpenJMeterSceneResponse Alibabacloud_PTS20201020::Client::removeOpenJMeterScene(shared_ptr<RemoveOpenJMeterSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeOpenJMeterSceneWithOptions(request, runtime);
}

SaveEnvResponse Alibabacloud_PTS20201020::Client::saveEnvWithOptions(shared_ptr<SaveEnvRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SaveEnvShrinkRequest> request = make_shared<SaveEnvShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SaveEnvRequestEnv>(tmpReq->env)) {
    request->envShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->env->toMap()), make_shared<string>("Env"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveEnvResponse(doRPCRequest(make_shared<string>("SaveEnv"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveEnvResponse Alibabacloud_PTS20201020::Client::saveEnv(shared_ptr<SaveEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveEnvWithOptions(request, runtime);
}

SaveOpenJMeterSceneResponse Alibabacloud_PTS20201020::Client::saveOpenJMeterSceneWithOptions(shared_ptr<SaveOpenJMeterSceneRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SaveOpenJMeterSceneShrinkRequest> request = make_shared<SaveOpenJMeterSceneShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SaveOpenJMeterSceneRequestOpenJMeterScene>(tmpReq->openJMeterScene)) {
    request->openJMeterSceneShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->openJMeterScene->toMap()), make_shared<string>("OpenJMeterScene"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveOpenJMeterSceneResponse(doRPCRequest(make_shared<string>("SaveOpenJMeterScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveOpenJMeterSceneResponse Alibabacloud_PTS20201020::Client::saveOpenJMeterScene(shared_ptr<SaveOpenJMeterSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveOpenJMeterSceneWithOptions(request, runtime);
}

StartDebugPtsSceneResponse Alibabacloud_PTS20201020::Client::startDebugPtsSceneWithOptions(shared_ptr<StartDebugPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartDebugPtsSceneResponse(doRPCRequest(make_shared<string>("StartDebugPtsScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartDebugPtsSceneResponse Alibabacloud_PTS20201020::Client::startDebugPtsScene(shared_ptr<StartDebugPtsSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDebugPtsSceneWithOptions(request, runtime);
}

StartDebuggingJMeterSceneResponse Alibabacloud_PTS20201020::Client::startDebuggingJMeterSceneWithOptions(shared_ptr<StartDebuggingJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartDebuggingJMeterSceneResponse(doRPCRequest(make_shared<string>("StartDebuggingJMeterScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartDebuggingJMeterSceneResponse Alibabacloud_PTS20201020::Client::startDebuggingJMeterScene(shared_ptr<StartDebuggingJMeterSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDebuggingJMeterSceneWithOptions(request, runtime);
}

StartPtsSceneResponse Alibabacloud_PTS20201020::Client::startPtsSceneWithOptions(shared_ptr<StartPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartPtsSceneResponse(doRPCRequest(make_shared<string>("StartPtsScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartPtsSceneResponse Alibabacloud_PTS20201020::Client::startPtsScene(shared_ptr<StartPtsSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startPtsSceneWithOptions(request, runtime);
}

StartTestingJMeterSceneResponse Alibabacloud_PTS20201020::Client::startTestingJMeterSceneWithOptions(shared_ptr<StartTestingJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartTestingJMeterSceneResponse(doRPCRequest(make_shared<string>("StartTestingJMeterScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartTestingJMeterSceneResponse Alibabacloud_PTS20201020::Client::startTestingJMeterScene(shared_ptr<StartTestingJMeterSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startTestingJMeterSceneWithOptions(request, runtime);
}

StopDebugPtsSceneResponse Alibabacloud_PTS20201020::Client::stopDebugPtsSceneWithOptions(shared_ptr<StopDebugPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDebugPtsSceneResponse(doRPCRequest(make_shared<string>("StopDebugPtsScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDebugPtsSceneResponse Alibabacloud_PTS20201020::Client::stopDebugPtsScene(shared_ptr<StopDebugPtsSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDebugPtsSceneWithOptions(request, runtime);
}

StopDebuggingJMeterSceneResponse Alibabacloud_PTS20201020::Client::stopDebuggingJMeterSceneWithOptions(shared_ptr<StopDebuggingJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDebuggingJMeterSceneResponse(doRPCRequest(make_shared<string>("StopDebuggingJMeterScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDebuggingJMeterSceneResponse Alibabacloud_PTS20201020::Client::stopDebuggingJMeterScene(shared_ptr<StopDebuggingJMeterSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDebuggingJMeterSceneWithOptions(request, runtime);
}

StopPtsSceneResponse Alibabacloud_PTS20201020::Client::stopPtsSceneWithOptions(shared_ptr<StopPtsSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopPtsSceneResponse(doRPCRequest(make_shared<string>("StopPtsScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopPtsSceneResponse Alibabacloud_PTS20201020::Client::stopPtsScene(shared_ptr<StopPtsSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopPtsSceneWithOptions(request, runtime);
}

StopTestingJMeterSceneResponse Alibabacloud_PTS20201020::Client::stopTestingJMeterSceneWithOptions(shared_ptr<StopTestingJMeterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopTestingJMeterSceneResponse(doRPCRequest(make_shared<string>("StopTestingJMeterScene"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopTestingJMeterSceneResponse Alibabacloud_PTS20201020::Client::stopTestingJMeterScene(shared_ptr<StopTestingJMeterSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopTestingJMeterSceneWithOptions(request, runtime);
}

UpdatePtsSceneBaseLineResponse Alibabacloud_PTS20201020::Client::updatePtsSceneBaseLineWithOptions(shared_ptr<UpdatePtsSceneBaseLineRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdatePtsSceneBaseLineShrinkRequest> request = make_shared<UpdatePtsSceneBaseLineShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->apiBaselines)) {
    request->apiBaselinesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->apiBaselines, make_shared<string>("ApiBaselines"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->sceneBaseline)) {
    request->sceneBaselineShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sceneBaseline, make_shared<string>("SceneBaseline"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdatePtsSceneBaseLineResponse(doRPCRequest(make_shared<string>("UpdatePtsSceneBaseLine"), make_shared<string>("2020-10-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdatePtsSceneBaseLineResponse Alibabacloud_PTS20201020::Client::updatePtsSceneBaseLine(shared_ptr<UpdatePtsSceneBaseLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePtsSceneBaseLineWithOptions(request, runtime);
}

