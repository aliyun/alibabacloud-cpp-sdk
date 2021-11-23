// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/rtc_20180111.hpp>
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

using namespace Alibabacloud_Rtc20180111;

Alibabacloud_Rtc20180111::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("rtc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Rtc20180111::Client::getEndpoint(shared_ptr<string> productId,
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

AddRecordTemplateResponse Alibabacloud_Rtc20180111::Client::addRecordTemplateWithOptions(shared_ptr<AddRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddRecordTemplateResponse(doRPCRequest(make_shared<string>("AddRecordTemplate"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddRecordTemplateResponse Alibabacloud_Rtc20180111::Client::addRecordTemplate(shared_ptr<AddRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addRecordTemplateWithOptions(request, runtime);
}

CreateAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::createAutoLiveStreamRuleWithOptions(shared_ptr<CreateAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAutoLiveStreamRuleResponse(doRPCRequest(make_shared<string>("CreateAutoLiveStreamRule"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::createAutoLiveStreamRule(shared_ptr<CreateAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAutoLiveStreamRuleWithOptions(request, runtime);
}

CreateEventSubscribeResponse Alibabacloud_Rtc20180111::Client::createEventSubscribeWithOptions(shared_ptr<CreateEventSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEventSubscribeResponse(doRPCRequest(make_shared<string>("CreateEventSubscribe"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEventSubscribeResponse Alibabacloud_Rtc20180111::Client::createEventSubscribe(shared_ptr<CreateEventSubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEventSubscribeWithOptions(request, runtime);
}

CreateMPULayoutResponse Alibabacloud_Rtc20180111::Client::createMPULayoutWithOptions(shared_ptr<CreateMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMPULayoutResponse(doRPCRequest(make_shared<string>("CreateMPULayout"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMPULayoutResponse Alibabacloud_Rtc20180111::Client::createMPULayout(shared_ptr<CreateMPULayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMPULayoutWithOptions(request, runtime);
}

CreateRecordIndexFileResponse Alibabacloud_Rtc20180111::Client::createRecordIndexFileWithOptions(shared_ptr<CreateRecordIndexFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRecordIndexFileResponse(doRPCRequest(make_shared<string>("CreateRecordIndexFile"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRecordIndexFileResponse Alibabacloud_Rtc20180111::Client::createRecordIndexFile(shared_ptr<CreateRecordIndexFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRecordIndexFileWithOptions(request, runtime);
}

DeleteAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::deleteAutoLiveStreamRuleWithOptions(shared_ptr<DeleteAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAutoLiveStreamRuleResponse(doRPCRequest(make_shared<string>("DeleteAutoLiveStreamRule"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::deleteAutoLiveStreamRule(shared_ptr<DeleteAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAutoLiveStreamRuleWithOptions(request, runtime);
}

DeleteEventSubscribeResponse Alibabacloud_Rtc20180111::Client::deleteEventSubscribeWithOptions(shared_ptr<DeleteEventSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEventSubscribeResponse(doRPCRequest(make_shared<string>("DeleteEventSubscribe"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEventSubscribeResponse Alibabacloud_Rtc20180111::Client::deleteEventSubscribe(shared_ptr<DeleteEventSubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEventSubscribeWithOptions(request, runtime);
}

DeleteMPULayoutResponse Alibabacloud_Rtc20180111::Client::deleteMPULayoutWithOptions(shared_ptr<DeleteMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMPULayoutResponse(doRPCRequest(make_shared<string>("DeleteMPULayout"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMPULayoutResponse Alibabacloud_Rtc20180111::Client::deleteMPULayout(shared_ptr<DeleteMPULayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMPULayoutWithOptions(request, runtime);
}

DeleteRecordTemplateResponse Alibabacloud_Rtc20180111::Client::deleteRecordTemplateWithOptions(shared_ptr<DeleteRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRecordTemplateResponse(doRPCRequest(make_shared<string>("DeleteRecordTemplate"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRecordTemplateResponse Alibabacloud_Rtc20180111::Client::deleteRecordTemplate(shared_ptr<DeleteRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRecordTemplateWithOptions(request, runtime);
}

DescribeAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::describeAutoLiveStreamRuleWithOptions(shared_ptr<DescribeAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAutoLiveStreamRuleResponse(doRPCRequest(make_shared<string>("DescribeAutoLiveStreamRule"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::describeAutoLiveStreamRule(shared_ptr<DescribeAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoLiveStreamRuleWithOptions(request, runtime);
}

DescribeChannelParticipantsResponse Alibabacloud_Rtc20180111::Client::describeChannelParticipantsWithOptions(shared_ptr<DescribeChannelParticipantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeChannelParticipantsResponse(doRPCRequest(make_shared<string>("DescribeChannelParticipants"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeChannelParticipantsResponse Alibabacloud_Rtc20180111::Client::describeChannelParticipants(shared_ptr<DescribeChannelParticipantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelParticipantsWithOptions(request, runtime);
}

DescribeChannelUsersResponse Alibabacloud_Rtc20180111::Client::describeChannelUsersWithOptions(shared_ptr<DescribeChannelUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeChannelUsersResponse(doRPCRequest(make_shared<string>("DescribeChannelUsers"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeChannelUsersResponse Alibabacloud_Rtc20180111::Client::describeChannelUsers(shared_ptr<DescribeChannelUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelUsersWithOptions(request, runtime);
}

DescribeMPULayoutInfoListResponse Alibabacloud_Rtc20180111::Client::describeMPULayoutInfoListWithOptions(shared_ptr<DescribeMPULayoutInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMPULayoutInfoListResponse(doRPCRequest(make_shared<string>("DescribeMPULayoutInfoList"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMPULayoutInfoListResponse Alibabacloud_Rtc20180111::Client::describeMPULayoutInfoList(shared_ptr<DescribeMPULayoutInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMPULayoutInfoListWithOptions(request, runtime);
}

DescribeRecordFilesResponse Alibabacloud_Rtc20180111::Client::describeRecordFilesWithOptions(shared_ptr<DescribeRecordFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRecordFilesResponse(doRPCRequest(make_shared<string>("DescribeRecordFiles"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRecordFilesResponse Alibabacloud_Rtc20180111::Client::describeRecordFiles(shared_ptr<DescribeRecordFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecordFilesWithOptions(request, runtime);
}

DescribeRecordTasksResponse Alibabacloud_Rtc20180111::Client::describeRecordTasksWithOptions(shared_ptr<DescribeRecordTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRecordTasksResponse(doRPCRequest(make_shared<string>("DescribeRecordTasks"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRecordTasksResponse Alibabacloud_Rtc20180111::Client::describeRecordTasks(shared_ptr<DescribeRecordTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecordTasksWithOptions(request, runtime);
}

DescribeRecordTemplatesResponse Alibabacloud_Rtc20180111::Client::describeRecordTemplatesWithOptions(shared_ptr<DescribeRecordTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRecordTemplatesResponse(doRPCRequest(make_shared<string>("DescribeRecordTemplates"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRecordTemplatesResponse Alibabacloud_Rtc20180111::Client::describeRecordTemplates(shared_ptr<DescribeRecordTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecordTemplatesWithOptions(request, runtime);
}

DescribeUserInfoInChannelResponse Alibabacloud_Rtc20180111::Client::describeUserInfoInChannelWithOptions(shared_ptr<DescribeUserInfoInChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserInfoInChannelResponse(doRPCRequest(make_shared<string>("DescribeUserInfoInChannel"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserInfoInChannelResponse Alibabacloud_Rtc20180111::Client::describeUserInfoInChannel(shared_ptr<DescribeUserInfoInChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserInfoInChannelWithOptions(request, runtime);
}

DisableAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::disableAutoLiveStreamRuleWithOptions(shared_ptr<DisableAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableAutoLiveStreamRuleResponse(doRPCRequest(make_shared<string>("DisableAutoLiveStreamRule"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::disableAutoLiveStreamRule(shared_ptr<DisableAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableAutoLiveStreamRuleWithOptions(request, runtime);
}

EnableAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::enableAutoLiveStreamRuleWithOptions(shared_ptr<EnableAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableAutoLiveStreamRuleResponse(doRPCRequest(make_shared<string>("EnableAutoLiveStreamRule"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::enableAutoLiveStreamRule(shared_ptr<EnableAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableAutoLiveStreamRuleWithOptions(request, runtime);
}

GetMPUTaskStatusResponse Alibabacloud_Rtc20180111::Client::getMPUTaskStatusWithOptions(shared_ptr<GetMPUTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMPUTaskStatusResponse(doRPCRequest(make_shared<string>("GetMPUTaskStatus"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMPUTaskStatusResponse Alibabacloud_Rtc20180111::Client::getMPUTaskStatus(shared_ptr<GetMPUTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMPUTaskStatusWithOptions(request, runtime);
}

ModifyMPULayoutResponse Alibabacloud_Rtc20180111::Client::modifyMPULayoutWithOptions(shared_ptr<ModifyMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyMPULayoutResponse(doRPCRequest(make_shared<string>("ModifyMPULayout"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyMPULayoutResponse Alibabacloud_Rtc20180111::Client::modifyMPULayout(shared_ptr<ModifyMPULayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyMPULayoutWithOptions(request, runtime);
}

RemoveTerminalsResponse Alibabacloud_Rtc20180111::Client::removeTerminalsWithOptions(shared_ptr<RemoveTerminalsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveTerminalsResponse(doRPCRequest(make_shared<string>("RemoveTerminals"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveTerminalsResponse Alibabacloud_Rtc20180111::Client::removeTerminals(shared_ptr<RemoveTerminalsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTerminalsWithOptions(request, runtime);
}

StartMPUTaskResponse Alibabacloud_Rtc20180111::Client::startMPUTaskWithOptions(shared_ptr<StartMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartMPUTaskResponse(doRPCRequest(make_shared<string>("StartMPUTask"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartMPUTaskResponse Alibabacloud_Rtc20180111::Client::startMPUTask(shared_ptr<StartMPUTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startMPUTaskWithOptions(request, runtime);
}

StartRecordTaskResponse Alibabacloud_Rtc20180111::Client::startRecordTaskWithOptions(shared_ptr<StartRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartRecordTaskResponse(doRPCRequest(make_shared<string>("StartRecordTask"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartRecordTaskResponse Alibabacloud_Rtc20180111::Client::startRecordTask(shared_ptr<StartRecordTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRecordTaskWithOptions(request, runtime);
}

StopChannelUserPublishResponse Alibabacloud_Rtc20180111::Client::stopChannelUserPublishWithOptions(shared_ptr<StopChannelUserPublishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopChannelUserPublishResponse(doRPCRequest(make_shared<string>("StopChannelUserPublish"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopChannelUserPublishResponse Alibabacloud_Rtc20180111::Client::stopChannelUserPublish(shared_ptr<StopChannelUserPublishRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopChannelUserPublishWithOptions(request, runtime);
}

StopMPUTaskResponse Alibabacloud_Rtc20180111::Client::stopMPUTaskWithOptions(shared_ptr<StopMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopMPUTaskResponse(doRPCRequest(make_shared<string>("StopMPUTask"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopMPUTaskResponse Alibabacloud_Rtc20180111::Client::stopMPUTask(shared_ptr<StopMPUTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopMPUTaskWithOptions(request, runtime);
}

StopRecordTaskResponse Alibabacloud_Rtc20180111::Client::stopRecordTaskWithOptions(shared_ptr<StopRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopRecordTaskResponse(doRPCRequest(make_shared<string>("StopRecordTask"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopRecordTaskResponse Alibabacloud_Rtc20180111::Client::stopRecordTask(shared_ptr<StopRecordTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopRecordTaskWithOptions(request, runtime);
}

UpdateAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::updateAutoLiveStreamRuleWithOptions(shared_ptr<UpdateAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAutoLiveStreamRuleResponse(doRPCRequest(make_shared<string>("UpdateAutoLiveStreamRule"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::updateAutoLiveStreamRule(shared_ptr<UpdateAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAutoLiveStreamRuleWithOptions(request, runtime);
}

UpdateMPUTaskResponse Alibabacloud_Rtc20180111::Client::updateMPUTaskWithOptions(shared_ptr<UpdateMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMPUTaskResponse(doRPCRequest(make_shared<string>("UpdateMPUTask"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMPUTaskResponse Alibabacloud_Rtc20180111::Client::updateMPUTask(shared_ptr<UpdateMPUTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMPUTaskWithOptions(request, runtime);
}

UpdateRecordTaskResponse Alibabacloud_Rtc20180111::Client::updateRecordTaskWithOptions(shared_ptr<UpdateRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRecordTaskResponse(doRPCRequest(make_shared<string>("UpdateRecordTask"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRecordTaskResponse Alibabacloud_Rtc20180111::Client::updateRecordTask(shared_ptr<UpdateRecordTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRecordTaskWithOptions(request, runtime);
}

UpdateRecordTemplateResponse Alibabacloud_Rtc20180111::Client::updateRecordTemplateWithOptions(shared_ptr<UpdateRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRecordTemplateResponse(doRPCRequest(make_shared<string>("UpdateRecordTemplate"), make_shared<string>("2018-01-11"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRecordTemplateResponse Alibabacloud_Rtc20180111::Client::updateRecordTemplate(shared_ptr<UpdateRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRecordTemplateWithOptions(request, runtime);
}

