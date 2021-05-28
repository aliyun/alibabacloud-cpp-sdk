// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/rtc_white_board_20201214.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Rtc-white-board20201214;

Alibabacloud_Rtc-white-board20201214::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("rtc-white-board"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Rtc-white-board20201214::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeAppsResponse Alibabacloud_Rtc-white-board20201214::Client::describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAppsResponse(doRPCRequest(make_shared<string>("DescribeApps"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAppsResponse Alibabacloud_Rtc-white-board20201214::Client::describeApps(shared_ptr<DescribeAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppsWithOptions(request, runtime);
}

PauseWhiteBoardRecordingResponse Alibabacloud_Rtc-white-board20201214::Client::pauseWhiteBoardRecordingWithOptions(shared_ptr<PauseWhiteBoardRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PauseWhiteBoardRecordingResponse(doRPCRequest(make_shared<string>("PauseWhiteBoardRecording"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PauseWhiteBoardRecordingResponse Alibabacloud_Rtc-white-board20201214::Client::pauseWhiteBoardRecording(shared_ptr<PauseWhiteBoardRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pauseWhiteBoardRecordingWithOptions(request, runtime);
}

SetAppCallbackUrlResponse Alibabacloud_Rtc-white-board20201214::Client::setAppCallbackUrlWithOptions(shared_ptr<SetAppCallbackUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetAppCallbackUrlResponse(doRPCRequest(make_shared<string>("SetAppCallbackUrl"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetAppCallbackUrlResponse Alibabacloud_Rtc-white-board20201214::Client::setAppCallbackUrl(shared_ptr<SetAppCallbackUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAppCallbackUrlWithOptions(request, runtime);
}

StartWhiteBoardRecordingResponse Alibabacloud_Rtc-white-board20201214::Client::startWhiteBoardRecordingWithOptions(shared_ptr<StartWhiteBoardRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartWhiteBoardRecordingResponse(doRPCRequest(make_shared<string>("StartWhiteBoardRecording"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartWhiteBoardRecordingResponse Alibabacloud_Rtc-white-board20201214::Client::startWhiteBoardRecording(shared_ptr<StartWhiteBoardRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startWhiteBoardRecordingWithOptions(request, runtime);
}

SetAppNameResponse Alibabacloud_Rtc-white-board20201214::Client::setAppNameWithOptions(shared_ptr<SetAppNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetAppNameResponse(doRPCRequest(make_shared<string>("SetAppName"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetAppNameResponse Alibabacloud_Rtc-white-board20201214::Client::setAppName(shared_ptr<SetAppNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAppNameWithOptions(request, runtime);
}

DescribeWhiteBoardsResponse Alibabacloud_Rtc-white-board20201214::Client::describeWhiteBoardsWithOptions(shared_ptr<DescribeWhiteBoardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeWhiteBoardsResponse(doRPCRequest(make_shared<string>("DescribeWhiteBoards"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeWhiteBoardsResponse Alibabacloud_Rtc-white-board20201214::Client::describeWhiteBoards(shared_ptr<DescribeWhiteBoardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWhiteBoardsWithOptions(request, runtime);
}

ResumeWhiteBoardRecordingResponse Alibabacloud_Rtc-white-board20201214::Client::resumeWhiteBoardRecordingWithOptions(shared_ptr<ResumeWhiteBoardRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResumeWhiteBoardRecordingResponse(doRPCRequest(make_shared<string>("ResumeWhiteBoardRecording"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResumeWhiteBoardRecordingResponse Alibabacloud_Rtc-white-board20201214::Client::resumeWhiteBoardRecording(shared_ptr<ResumeWhiteBoardRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeWhiteBoardRecordingWithOptions(request, runtime);
}

SetAppDomainNamesResponse Alibabacloud_Rtc-white-board20201214::Client::setAppDomainNamesWithOptions(shared_ptr<SetAppDomainNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetAppDomainNamesResponse(doRPCRequest(make_shared<string>("SetAppDomainNames"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetAppDomainNamesResponse Alibabacloud_Rtc-white-board20201214::Client::setAppDomainNames(shared_ptr<SetAppDomainNamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAppDomainNamesWithOptions(request, runtime);
}

OpenWhiteBoardResponse Alibabacloud_Rtc-white-board20201214::Client::openWhiteBoardWithOptions(shared_ptr<OpenWhiteBoardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OpenWhiteBoardResponse(doRPCRequest(make_shared<string>("OpenWhiteBoard"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenWhiteBoardResponse Alibabacloud_Rtc-white-board20201214::Client::openWhiteBoard(shared_ptr<OpenWhiteBoardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openWhiteBoardWithOptions(request, runtime);
}

RefreshUsersPermissionsResponse Alibabacloud_Rtc-white-board20201214::Client::refreshUsersPermissionsWithOptions(shared_ptr<RefreshUsersPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshUsersPermissionsResponse(doRPCRequest(make_shared<string>("RefreshUsersPermissions"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshUsersPermissionsResponse Alibabacloud_Rtc-white-board20201214::Client::refreshUsersPermissions(shared_ptr<RefreshUsersPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshUsersPermissionsWithOptions(request, runtime);
}

SetAppCallbackTypeResponse Alibabacloud_Rtc-white-board20201214::Client::setAppCallbackTypeWithOptions(shared_ptr<SetAppCallbackTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetAppCallbackTypeResponse(doRPCRequest(make_shared<string>("SetAppCallbackType"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetAppCallbackTypeResponse Alibabacloud_Rtc-white-board20201214::Client::setAppCallbackType(shared_ptr<SetAppCallbackTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAppCallbackTypeWithOptions(request, runtime);
}

CreateAppResponse Alibabacloud_Rtc-white-board20201214::Client::createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAppResponse(doRPCRequest(make_shared<string>("CreateApp"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAppResponse Alibabacloud_Rtc-white-board20201214::Client::createApp(shared_ptr<CreateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppWithOptions(request, runtime);
}

SetUsersPermissionsResponse Alibabacloud_Rtc-white-board20201214::Client::setUsersPermissionsWithOptions(shared_ptr<SetUsersPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetUsersPermissionsResponse(doRPCRequest(make_shared<string>("SetUsersPermissions"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetUsersPermissionsResponse Alibabacloud_Rtc-white-board20201214::Client::setUsersPermissions(shared_ptr<SetUsersPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setUsersPermissionsWithOptions(request, runtime);
}

CreateWhiteBoardResponse Alibabacloud_Rtc-white-board20201214::Client::createWhiteBoardWithOptions(shared_ptr<CreateWhiteBoardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateWhiteBoardResponse(doRPCRequest(make_shared<string>("CreateWhiteBoard"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateWhiteBoardResponse Alibabacloud_Rtc-white-board20201214::Client::createWhiteBoard(shared_ptr<CreateWhiteBoardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWhiteBoardWithOptions(request, runtime);
}

SetAppStatusResponse Alibabacloud_Rtc-white-board20201214::Client::setAppStatusWithOptions(shared_ptr<SetAppStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetAppStatusResponse(doRPCRequest(make_shared<string>("SetAppStatus"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetAppStatusResponse Alibabacloud_Rtc-white-board20201214::Client::setAppStatus(shared_ptr<SetAppStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAppStatusWithOptions(request, runtime);
}

StopWhiteBoardRecordingResponse Alibabacloud_Rtc-white-board20201214::Client::stopWhiteBoardRecordingWithOptions(shared_ptr<StopWhiteBoardRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopWhiteBoardRecordingResponse(doRPCRequest(make_shared<string>("StopWhiteBoardRecording"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopWhiteBoardRecordingResponse Alibabacloud_Rtc-white-board20201214::Client::stopWhiteBoardRecording(shared_ptr<StopWhiteBoardRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopWhiteBoardRecordingWithOptions(request, runtime);
}

