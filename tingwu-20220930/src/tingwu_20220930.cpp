// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/tingwu_20220930.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Tingwu20220930;

Alibabacloud_Tingwu20220930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("tingwu"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Tingwu20220930::Client::getEndpoint(shared_ptr<string> productId,
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

CreateFileTransResponse Alibabacloud_Tingwu20220930::Client::createFileTrans(shared_ptr<CreateFileTransRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFileTransWithOptions(request, headers, runtime);
}

CreateFileTransResponse Alibabacloud_Tingwu20220930::Client::createFileTransWithOptions(shared_ptr<CreateFileTransRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioLanguage)) {
    body->insert(pair<string, string>("AudioLanguage", *request->audioLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioOssBucket)) {
    body->insert(pair<string, string>("AudioOssBucket", *request->audioOssBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioOssPath)) {
    body->insert(pair<string, string>("AudioOssPath", *request->audioOssPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioOutputEnabled)) {
    body->insert(pair<string, string>("AudioOutputEnabled", *request->audioOutputEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioOutputOssBucket)) {
    body->insert(pair<string, string>("AudioOutputOssBucket", *request->audioOutputOssBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioOutputOssPath)) {
    body->insert(pair<string, string>("AudioOutputOssPath", *request->audioOutputOssPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioRoleNum)) {
    body->insert(pair<string, string>("AudioRoleNum", *request->audioRoleNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioSegmentsEnabled)) {
    body->insert(pair<string, string>("AudioSegmentsEnabled", *request->audioSegmentsEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transKey)) {
    body->insert(pair<string, string>("TransKey", *request->transKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transResultOssBucket)) {
    body->insert(pair<string, string>("TransResultOssBucket", *request->transResultOssBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transResultOssPath)) {
    body->insert(pair<string, string>("TransResultOssPath", *request->transResultOssPath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFileTrans"))},
    {"version", boost::any(string("2022-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/file-trans"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFileTransResponse(callApi(params, req, runtime));
}

CreateMeetingTransResponse Alibabacloud_Tingwu20220930::Client::createMeetingTrans(shared_ptr<CreateMeetingTransRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createMeetingTransWithOptions(request, headers, runtime);
}

CreateMeetingTransResponse Alibabacloud_Tingwu20220930::Client::createMeetingTransWithOptions(shared_ptr<CreateMeetingTransRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->audioBitRate)) {
    body->insert(pair<string, long>("AudioBitRate", *request->audioBitRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioFormat)) {
    body->insert(pair<string, string>("AudioFormat", *request->audioFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioLanguage)) {
    body->insert(pair<string, string>("AudioLanguage", *request->audioLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->audioOutputEnabled)) {
    body->insert(pair<string, bool>("AudioOutputEnabled", *request->audioOutputEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioOutputOssBucket)) {
    body->insert(pair<string, string>("AudioOutputOssBucket", *request->audioOutputOssBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioOutputOssPath)) {
    body->insert(pair<string, string>("AudioOutputOssPath", *request->audioOutputOssPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioPackage)) {
    body->insert(pair<string, string>("AudioPackage", *request->audioPackage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->audioSampleRate)) {
    body->insert(pair<string, long>("AudioSampleRate", *request->audioSampleRate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->audioSegmentsEnabled)) {
    body->insert(pair<string, bool>("AudioSegmentsEnabled", *request->audioSegmentsEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->docResultEnabled)) {
    body->insert(pair<string, bool>("DocResultEnabled", *request->docResultEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->meetingKey)) {
    body->insert(pair<string, string>("MeetingKey", *request->meetingKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->meetingResultEnabled)) {
    body->insert(pair<string, bool>("MeetingResultEnabled", *request->meetingResultEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->meetingResultOssBucket)) {
    body->insert(pair<string, string>("MeetingResultOssBucket", *request->meetingResultOssBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->meetingResultOssPath)) {
    body->insert(pair<string, string>("MeetingResultOssPath", *request->meetingResultOssPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->realtimeActiveResultLevel)) {
    body->insert(pair<string, long>("RealtimeActiveResultLevel", *request->realtimeActiveResultLevel));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->realtimeResultEnabled)) {
    body->insert(pair<string, bool>("RealtimeResultEnabled", *request->realtimeResultEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->realtimeResultLevel)) {
    body->insert(pair<string, long>("RealtimeResultLevel", *request->realtimeResultLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMeetingTrans"))},
    {"version", boost::any(string("2022-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/meeting-trans"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMeetingTransResponse(callApi(params, req, runtime));
}

GetFileTransResponse Alibabacloud_Tingwu20220930::Client::getFileTrans(shared_ptr<string> TransId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFileTransWithOptions(TransId, headers, runtime);
}

GetFileTransResponse Alibabacloud_Tingwu20220930::Client::getFileTransWithOptions(shared_ptr<string> TransId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileTrans"))},
    {"version", boost::any(string("2022-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/file-trans/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TransId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileTransResponse(callApi(params, req, runtime));
}

GetMeetingTransResponse Alibabacloud_Tingwu20220930::Client::getMeetingTrans(shared_ptr<string> MeetingId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMeetingTransWithOptions(MeetingId, headers, runtime);
}

GetMeetingTransResponse Alibabacloud_Tingwu20220930::Client::getMeetingTransWithOptions(shared_ptr<string> MeetingId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMeetingTrans"))},
    {"version", boost::any(string("2022-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/meeting-trans/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MeetingId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMeetingTransResponse(callApi(params, req, runtime));
}

StopMeetingTransResponse Alibabacloud_Tingwu20220930::Client::stopMeetingTrans(shared_ptr<string> MeetingId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopMeetingTransWithOptions(MeetingId, headers, runtime);
}

StopMeetingTransResponse Alibabacloud_Tingwu20220930::Client::stopMeetingTransWithOptions(shared_ptr<string> MeetingId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopMeetingTrans"))},
    {"version", boost::any(string("2022-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/meeting-trans/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MeetingId)) + string("/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopMeetingTransResponse(callApi(params, req, runtime));
}

