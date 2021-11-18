// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ccc20170705.hpp>
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

using namespace Alibabacloud_CCC20170705;

Alibabacloud_CCC20170705::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "ccc.aliyuncs.com"},
    {"ap-south-1", "ccc.aliyuncs.com"},
    {"ap-southeast-1", "ccc.aliyuncs.com"},
    {"ap-southeast-2", "ccc.aliyuncs.com"},
    {"ap-southeast-3", "ccc.aliyuncs.com"},
    {"ap-southeast-5", "ccc.aliyuncs.com"},
    {"cn-beijing", "ccc.aliyuncs.com"},
    {"cn-chengdu", "ccc.aliyuncs.com"},
    {"cn-hongkong", "ccc.aliyuncs.com"},
    {"cn-huhehaote", "ccc.aliyuncs.com"},
    {"cn-qingdao", "ccc.aliyuncs.com"},
    {"cn-shenzhen", "ccc.aliyuncs.com"},
    {"cn-zhangjiakou", "ccc.aliyuncs.com"},
    {"eu-central-1", "ccc.aliyuncs.com"},
    {"eu-west-1", "ccc.aliyuncs.com"},
    {"me-east-1", "ccc.aliyuncs.com"},
    {"us-east-1", "ccc.aliyuncs.com"},
    {"us-west-1", "ccc.aliyuncs.com"},
    {"cn-hangzhou-finance", "ccc.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ccc.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ccc.aliyuncs.com"},
    {"cn-north-2-gov-1", "ccc.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ccc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CCC20170705::Client::getEndpoint(shared_ptr<string> productId,
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

AbortPredictiveJobsResponse Alibabacloud_CCC20170705::Client::abortPredictiveJobsWithOptions(shared_ptr<AbortPredictiveJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AbortPredictiveJobsResponse(doRPCRequest(make_shared<string>("AbortPredictiveJobs"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AbortPredictiveJobsResponse Alibabacloud_CCC20170705::Client::abortPredictiveJobs(shared_ptr<AbortPredictiveJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abortPredictiveJobsWithOptions(request, runtime);
}

AddAgentDeviceResponse Alibabacloud_CCC20170705::Client::addAgentDeviceWithOptions(shared_ptr<AddAgentDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddAgentDeviceResponse(doRPCRequest(make_shared<string>("AddAgentDevice"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddAgentDeviceResponse Alibabacloud_CCC20170705::Client::addAgentDevice(shared_ptr<AddAgentDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAgentDeviceWithOptions(request, runtime);
}

AddBulkPhoneNumbersResponse Alibabacloud_CCC20170705::Client::addBulkPhoneNumbersWithOptions(shared_ptr<AddBulkPhoneNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddBulkPhoneNumbersResponse(doRPCRequest(make_shared<string>("AddBulkPhoneNumbers"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddBulkPhoneNumbersResponse Alibabacloud_CCC20170705::Client::addBulkPhoneNumbers(shared_ptr<AddBulkPhoneNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBulkPhoneNumbersWithOptions(request, runtime);
}

AddJobsToPredictiveJobGroupResponse Alibabacloud_CCC20170705::Client::addJobsToPredictiveJobGroupWithOptions(shared_ptr<AddJobsToPredictiveJobGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddJobsToPredictiveJobGroupResponse(doRPCRequest(make_shared<string>("AddJobsToPredictiveJobGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddJobsToPredictiveJobGroupResponse Alibabacloud_CCC20170705::Client::addJobsToPredictiveJobGroup(shared_ptr<AddJobsToPredictiveJobGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addJobsToPredictiveJobGroupWithOptions(request, runtime);
}

AddPhoneNumberResponse Alibabacloud_CCC20170705::Client::addPhoneNumberWithOptions(shared_ptr<AddPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddPhoneNumberResponse(doRPCRequest(make_shared<string>("AddPhoneNumber"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddPhoneNumberResponse Alibabacloud_CCC20170705::Client::addPhoneNumber(shared_ptr<AddPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPhoneNumberWithOptions(request, runtime);
}

AddPhoneTagsResponse Alibabacloud_CCC20170705::Client::addPhoneTagsWithOptions(shared_ptr<AddPhoneTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddPhoneTagsResponse(doRPCRequest(make_shared<string>("AddPhoneTags"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddPhoneTagsResponse Alibabacloud_CCC20170705::Client::addPhoneTags(shared_ptr<AddPhoneTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPhoneTagsWithOptions(request, runtime);
}

AssignJobsResponse Alibabacloud_CCC20170705::Client::assignJobsWithOptions(shared_ptr<AssignJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssignJobsResponse(doRPCRequest(make_shared<string>("AssignJobs"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssignJobsResponse Alibabacloud_CCC20170705::Client::assignJobs(shared_ptr<AssignJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignJobsWithOptions(request, runtime);
}

AssignUsersResponse Alibabacloud_CCC20170705::Client::assignUsersWithOptions(shared_ptr<AssignUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssignUsersResponse(doRPCRequest(make_shared<string>("AssignUsers"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssignUsersResponse Alibabacloud_CCC20170705::Client::assignUsers(shared_ptr<AssignUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignUsersWithOptions(request, runtime);
}

CallOnlinePrivacyNumberResponse Alibabacloud_CCC20170705::Client::callOnlinePrivacyNumberWithOptions(shared_ptr<CallOnlinePrivacyNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CallOnlinePrivacyNumberResponse(doRPCRequest(make_shared<string>("CallOnlinePrivacyNumber"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CallOnlinePrivacyNumberResponse Alibabacloud_CCC20170705::Client::callOnlinePrivacyNumber(shared_ptr<CallOnlinePrivacyNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return callOnlinePrivacyNumberWithOptions(request, runtime);
}

CancelJobsResponse Alibabacloud_CCC20170705::Client::cancelJobsWithOptions(shared_ptr<CancelJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelJobsResponse(doRPCRequest(make_shared<string>("CancelJobs"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelJobsResponse Alibabacloud_CCC20170705::Client::cancelJobs(shared_ptr<CancelJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelJobsWithOptions(request, runtime);
}

CheckNumberAvaliableResponse Alibabacloud_CCC20170705::Client::checkNumberAvaliableWithOptions(shared_ptr<CheckNumberAvaliableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckNumberAvaliableResponse(doRPCRequest(make_shared<string>("CheckNumberAvaliable"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckNumberAvaliableResponse Alibabacloud_CCC20170705::Client::checkNumberAvaliable(shared_ptr<CheckNumberAvaliableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkNumberAvaliableWithOptions(request, runtime);
}

CommitContactFlowVersionModificationResponse Alibabacloud_CCC20170705::Client::commitContactFlowVersionModificationWithOptions(shared_ptr<CommitContactFlowVersionModificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CommitContactFlowVersionModificationResponse(doRPCRequest(make_shared<string>("CommitContactFlowVersionModification"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CommitContactFlowVersionModificationResponse Alibabacloud_CCC20170705::Client::commitContactFlowVersionModification(shared_ptr<CommitContactFlowVersionModificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return commitContactFlowVersionModificationWithOptions(request, runtime);
}

CreateBatchJobsResponse Alibabacloud_CCC20170705::Client::createBatchJobsWithOptions(shared_ptr<CreateBatchJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateBatchJobsResponse(doRPCRequest(make_shared<string>("CreateBatchJobs"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateBatchJobsResponse Alibabacloud_CCC20170705::Client::createBatchJobs(shared_ptr<CreateBatchJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBatchJobsWithOptions(request, runtime);
}

CreateCabInstanceResponse Alibabacloud_CCC20170705::Client::createCabInstanceWithOptions(shared_ptr<CreateCabInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCabInstanceResponse(doRPCRequest(make_shared<string>("CreateCabInstance"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCabInstanceResponse Alibabacloud_CCC20170705::Client::createCabInstance(shared_ptr<CreateCabInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCabInstanceWithOptions(request, runtime);
}

CreateContactFlowResponse Alibabacloud_CCC20170705::Client::createContactFlowWithOptions(shared_ptr<CreateContactFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateContactFlowResponse(doRPCRequest(make_shared<string>("CreateContactFlow"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateContactFlowResponse Alibabacloud_CCC20170705::Client::createContactFlow(shared_ptr<CreateContactFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createContactFlowWithOptions(request, runtime);
}

CreateFaultResponse Alibabacloud_CCC20170705::Client::createFaultWithOptions(shared_ptr<CreateFaultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFaultResponse(doRPCRequest(make_shared<string>("CreateFault"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFaultResponse Alibabacloud_CCC20170705::Client::createFault(shared_ptr<CreateFaultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFaultWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_CCC20170705::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateInstanceResponse(doRPCRequest(make_shared<string>("CreateInstance"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateInstanceResponse Alibabacloud_CCC20170705::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

CreateJobGroupResponse Alibabacloud_CCC20170705::Client::createJobGroupWithOptions(shared_ptr<CreateJobGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateJobGroupResponse(doRPCRequest(make_shared<string>("CreateJobGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateJobGroupResponse Alibabacloud_CCC20170705::Client::createJobGroup(shared_ptr<CreateJobGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobGroupWithOptions(request, runtime);
}

CreateMediaResponse Alibabacloud_CCC20170705::Client::createMediaWithOptions(shared_ptr<CreateMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMediaResponse(doRPCRequest(make_shared<string>("CreateMedia"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMediaResponse Alibabacloud_CCC20170705::Client::createMedia(shared_ptr<CreateMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMediaWithOptions(request, runtime);
}

CreatePredictiveJobGroupResponse Alibabacloud_CCC20170705::Client::createPredictiveJobGroupWithOptions(shared_ptr<CreatePredictiveJobGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePredictiveJobGroupResponse(doRPCRequest(make_shared<string>("CreatePredictiveJobGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePredictiveJobGroupResponse Alibabacloud_CCC20170705::Client::createPredictiveJobGroup(shared_ptr<CreatePredictiveJobGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPredictiveJobGroupWithOptions(request, runtime);
}

CreateScenarioResponse Alibabacloud_CCC20170705::Client::createScenarioWithOptions(shared_ptr<CreateScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateScenarioResponse(doRPCRequest(make_shared<string>("CreateScenario"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateScenarioResponse Alibabacloud_CCC20170705::Client::createScenario(shared_ptr<CreateScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScenarioWithOptions(request, runtime);
}

CreateScenarioFromTemplateResponse Alibabacloud_CCC20170705::Client::createScenarioFromTemplateWithOptions(shared_ptr<CreateScenarioFromTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateScenarioFromTemplateResponse(doRPCRequest(make_shared<string>("CreateScenarioFromTemplate"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateScenarioFromTemplateResponse Alibabacloud_CCC20170705::Client::createScenarioFromTemplate(shared_ptr<CreateScenarioFromTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScenarioFromTemplateWithOptions(request, runtime);
}

CreateSkillGroupResponse Alibabacloud_CCC20170705::Client::createSkillGroupWithOptions(shared_ptr<CreateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSkillGroupResponse(doRPCRequest(make_shared<string>("CreateSkillGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSkillGroupResponse Alibabacloud_CCC20170705::Client::createSkillGroup(shared_ptr<CreateSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSkillGroupWithOptions(request, runtime);
}

CreateSurveyResponse Alibabacloud_CCC20170705::Client::createSurveyWithOptions(shared_ptr<CreateSurveyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSurveyResponse(doRPCRequest(make_shared<string>("CreateSurvey"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSurveyResponse Alibabacloud_CCC20170705::Client::createSurvey(shared_ptr<CreateSurveyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSurveyWithOptions(request, runtime);
}

CreateUserResponse Alibabacloud_CCC20170705::Client::createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUserResponse(doRPCRequest(make_shared<string>("CreateUser"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUserResponse Alibabacloud_CCC20170705::Client::createUser(shared_ptr<CreateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserWithOptions(request, runtime);
}

CreateVoiceAppraiseResponse Alibabacloud_CCC20170705::Client::createVoiceAppraiseWithOptions(shared_ptr<CreateVoiceAppraiseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVoiceAppraiseResponse(doRPCRequest(make_shared<string>("CreateVoiceAppraise"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVoiceAppraiseResponse Alibabacloud_CCC20170705::Client::createVoiceAppraise(shared_ptr<CreateVoiceAppraiseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVoiceAppraiseWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_CCC20170705::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteInstanceResponse(doRPCRequest(make_shared<string>("DeleteInstance"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteInstanceResponse Alibabacloud_CCC20170705::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

DeleteJobGroupResponse Alibabacloud_CCC20170705::Client::deleteJobGroupWithOptions(shared_ptr<DeleteJobGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteJobGroupResponse(doRPCRequest(make_shared<string>("DeleteJobGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteJobGroupResponse Alibabacloud_CCC20170705::Client::deleteJobGroup(shared_ptr<DeleteJobGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteJobGroupWithOptions(request, runtime);
}

DeleteMediaResponse Alibabacloud_CCC20170705::Client::deleteMediaWithOptions(shared_ptr<DeleteMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMediaResponse(doRPCRequest(make_shared<string>("DeleteMedia"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMediaResponse Alibabacloud_CCC20170705::Client::deleteMedia(shared_ptr<DeleteMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaWithOptions(request, runtime);
}

DeletePhoneTagsResponse Alibabacloud_CCC20170705::Client::deletePhoneTagsWithOptions(shared_ptr<DeletePhoneTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePhoneTagsResponse(doRPCRequest(make_shared<string>("DeletePhoneTags"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePhoneTagsResponse Alibabacloud_CCC20170705::Client::deletePhoneTags(shared_ptr<DeletePhoneTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePhoneTagsWithOptions(request, runtime);
}

DeleteSkillGroupResponse Alibabacloud_CCC20170705::Client::deleteSkillGroupWithOptions(shared_ptr<DeleteSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSkillGroupResponse(doRPCRequest(make_shared<string>("DeleteSkillGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSkillGroupResponse Alibabacloud_CCC20170705::Client::deleteSkillGroup(shared_ptr<DeleteSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSkillGroupWithOptions(request, runtime);
}

DeleteSurveyResponse Alibabacloud_CCC20170705::Client::deleteSurveyWithOptions(shared_ptr<DeleteSurveyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSurveyResponse(doRPCRequest(make_shared<string>("DeleteSurvey"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSurveyResponse Alibabacloud_CCC20170705::Client::deleteSurvey(shared_ptr<DeleteSurveyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSurveyWithOptions(request, runtime);
}

DialExResponse Alibabacloud_CCC20170705::Client::dialExWithOptions(shared_ptr<DialExRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DialExResponse(doRPCRequest(make_shared<string>("DialEx"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DialExResponse Alibabacloud_CCC20170705::Client::dialEx(shared_ptr<DialExRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dialExWithOptions(request, runtime);
}

DialogueResponse Alibabacloud_CCC20170705::Client::dialogueWithOptions(shared_ptr<DialogueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DialogueResponse(doRPCRequest(make_shared<string>("Dialogue"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DialogueResponse Alibabacloud_CCC20170705::Client::dialogue(shared_ptr<DialogueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dialogueWithOptions(request, runtime);
}

DisableTrunkProvidersResponse Alibabacloud_CCC20170705::Client::disableTrunkProvidersWithOptions(shared_ptr<DisableTrunkProvidersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableTrunkProvidersResponse(doRPCRequest(make_shared<string>("DisableTrunkProviders"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableTrunkProvidersResponse Alibabacloud_CCC20170705::Client::disableTrunkProviders(shared_ptr<DisableTrunkProvidersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableTrunkProvidersWithOptions(request, runtime);
}

DownloadAllTypeRecordingResponse Alibabacloud_CCC20170705::Client::downloadAllTypeRecordingWithOptions(shared_ptr<DownloadAllTypeRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DownloadAllTypeRecordingResponse(doRPCRequest(make_shared<string>("DownloadAllTypeRecording"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DownloadAllTypeRecordingResponse Alibabacloud_CCC20170705::Client::downloadAllTypeRecording(shared_ptr<DownloadAllTypeRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadAllTypeRecordingWithOptions(request, runtime);
}

DownloadCabRecordingResponse Alibabacloud_CCC20170705::Client::downloadCabRecordingWithOptions(shared_ptr<DownloadCabRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DownloadCabRecordingResponse(doRPCRequest(make_shared<string>("DownloadCabRecording"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DownloadCabRecordingResponse Alibabacloud_CCC20170705::Client::downloadCabRecording(shared_ptr<DownloadCabRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadCabRecordingWithOptions(request, runtime);
}

DownloadOriginalStatisticsReportResponse Alibabacloud_CCC20170705::Client::downloadOriginalStatisticsReportWithOptions(shared_ptr<DownloadOriginalStatisticsReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DownloadOriginalStatisticsReportResponse(doRPCRequest(make_shared<string>("DownloadOriginalStatisticsReport"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DownloadOriginalStatisticsReportResponse Alibabacloud_CCC20170705::Client::downloadOriginalStatisticsReport(shared_ptr<DownloadOriginalStatisticsReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadOriginalStatisticsReportWithOptions(request, runtime);
}

DownloadRecordingResponse Alibabacloud_CCC20170705::Client::downloadRecordingWithOptions(shared_ptr<DownloadRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DownloadRecordingResponse(doRPCRequest(make_shared<string>("DownloadRecording"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DownloadRecordingResponse Alibabacloud_CCC20170705::Client::downloadRecording(shared_ptr<DownloadRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadRecordingWithOptions(request, runtime);
}

DownloadUnreachableContactsResponse Alibabacloud_CCC20170705::Client::downloadUnreachableContactsWithOptions(shared_ptr<DownloadUnreachableContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DownloadUnreachableContactsResponse(doRPCRequest(make_shared<string>("DownloadUnreachableContacts"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DownloadUnreachableContactsResponse Alibabacloud_CCC20170705::Client::downloadUnreachableContacts(shared_ptr<DownloadUnreachableContactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadUnreachableContactsWithOptions(request, runtime);
}

FindUsersResponse Alibabacloud_CCC20170705::Client::findUsersWithOptions(shared_ptr<FindUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindUsersResponse(doRPCRequest(make_shared<string>("FindUsers"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindUsersResponse Alibabacloud_CCC20170705::Client::findUsers(shared_ptr<FindUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findUsersWithOptions(request, runtime);
}

GenerateAgentStatisticReportResponse Alibabacloud_CCC20170705::Client::generateAgentStatisticReportWithOptions(shared_ptr<GenerateAgentStatisticReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateAgentStatisticReportResponse(doRPCRequest(make_shared<string>("GenerateAgentStatisticReport"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateAgentStatisticReportResponse Alibabacloud_CCC20170705::Client::generateAgentStatisticReport(shared_ptr<GenerateAgentStatisticReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateAgentStatisticReportWithOptions(request, runtime);
}

GetAgentDataResponse Alibabacloud_CCC20170705::Client::getAgentDataWithOptions(shared_ptr<GetAgentDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAgentDataResponse(doRPCRequest(make_shared<string>("GetAgentData"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAgentDataResponse Alibabacloud_CCC20170705::Client::getAgentData(shared_ptr<GetAgentDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentDataWithOptions(request, runtime);
}

GetCallMeasureSummaryReportResponse Alibabacloud_CCC20170705::Client::getCallMeasureSummaryReportWithOptions(shared_ptr<GetCallMeasureSummaryReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCallMeasureSummaryReportResponse(doRPCRequest(make_shared<string>("GetCallMeasureSummaryReport"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCallMeasureSummaryReportResponse Alibabacloud_CCC20170705::Client::getCallMeasureSummaryReport(shared_ptr<GetCallMeasureSummaryReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCallMeasureSummaryReportWithOptions(request, runtime);
}

GetConfigResponse Alibabacloud_CCC20170705::Client::getConfigWithOptions(shared_ptr<GetConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetConfigResponse(doRPCRequest(make_shared<string>("GetConfig"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetConfigResponse Alibabacloud_CCC20170705::Client::getConfig(shared_ptr<GetConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConfigWithOptions(request, runtime);
}

GetContactInfoByOutboundTaskIdResponse Alibabacloud_CCC20170705::Client::getContactInfoByOutboundTaskIdWithOptions(shared_ptr<GetContactInfoByOutboundTaskIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetContactInfoByOutboundTaskIdResponse(doRPCRequest(make_shared<string>("GetContactInfoByOutboundTaskId"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetContactInfoByOutboundTaskIdResponse Alibabacloud_CCC20170705::Client::getContactInfoByOutboundTaskId(shared_ptr<GetContactInfoByOutboundTaskIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getContactInfoByOutboundTaskIdWithOptions(request, runtime);
}

GetConversationDetailByContactIdResponse Alibabacloud_CCC20170705::Client::getConversationDetailByContactIdWithOptions(shared_ptr<GetConversationDetailByContactIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetConversationDetailByContactIdResponse(doRPCRequest(make_shared<string>("GetConversationDetailByContactId"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetConversationDetailByContactIdResponse Alibabacloud_CCC20170705::Client::getConversationDetailByContactId(shared_ptr<GetConversationDetailByContactIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConversationDetailByContactIdWithOptions(request, runtime);
}

GetConversationListResponse Alibabacloud_CCC20170705::Client::getConversationListWithOptions(shared_ptr<GetConversationListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetConversationListResponse(doRPCRequest(make_shared<string>("GetConversationList"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetConversationListResponse Alibabacloud_CCC20170705::Client::getConversationList(shared_ptr<GetConversationListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConversationListWithOptions(request, runtime);
}

GetInstanceResponse Alibabacloud_CCC20170705::Client::getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceResponse(doRPCRequest(make_shared<string>("GetInstance"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceResponse Alibabacloud_CCC20170705::Client::getInstance(shared_ptr<GetInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceWithOptions(request, runtime);
}

GetInstanceStateResponse Alibabacloud_CCC20170705::Client::getInstanceStateWithOptions(shared_ptr<GetInstanceStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceStateResponse(doRPCRequest(make_shared<string>("GetInstanceState"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceStateResponse Alibabacloud_CCC20170705::Client::getInstanceState(shared_ptr<GetInstanceStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceStateWithOptions(request, runtime);
}

GetInstanceSummaryReportResponse Alibabacloud_CCC20170705::Client::getInstanceSummaryReportWithOptions(shared_ptr<GetInstanceSummaryReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceSummaryReportResponse(doRPCRequest(make_shared<string>("GetInstanceSummaryReport"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceSummaryReportResponse Alibabacloud_CCC20170705::Client::getInstanceSummaryReport(shared_ptr<GetInstanceSummaryReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceSummaryReportWithOptions(request, runtime);
}

GetInstanceSummaryReportByIntervalResponse Alibabacloud_CCC20170705::Client::getInstanceSummaryReportByIntervalWithOptions(shared_ptr<GetInstanceSummaryReportByIntervalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceSummaryReportByIntervalResponse(doRPCRequest(make_shared<string>("GetInstanceSummaryReportByInterval"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceSummaryReportByIntervalResponse Alibabacloud_CCC20170705::Client::getInstanceSummaryReportByInterval(shared_ptr<GetInstanceSummaryReportByIntervalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceSummaryReportByIntervalWithOptions(request, runtime);
}

GetInstanceSummaryReportSinceMidnightResponse Alibabacloud_CCC20170705::Client::getInstanceSummaryReportSinceMidnightWithOptions(shared_ptr<GetInstanceSummaryReportSinceMidnightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceSummaryReportSinceMidnightResponse(doRPCRequest(make_shared<string>("GetInstanceSummaryReportSinceMidnight"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceSummaryReportSinceMidnightResponse Alibabacloud_CCC20170705::Client::getInstanceSummaryReportSinceMidnight(shared_ptr<GetInstanceSummaryReportSinceMidnightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceSummaryReportSinceMidnightWithOptions(request, runtime);
}

GetJobResponse Alibabacloud_CCC20170705::Client::getJobWithOptions(shared_ptr<GetJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetJobResponse(doRPCRequest(make_shared<string>("GetJob"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJobResponse Alibabacloud_CCC20170705::Client::getJob(shared_ptr<GetJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobWithOptions(request, runtime);
}

GetJobDataUploadParamsResponse Alibabacloud_CCC20170705::Client::getJobDataUploadParamsWithOptions(shared_ptr<GetJobDataUploadParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetJobDataUploadParamsResponse(doRPCRequest(make_shared<string>("GetJobDataUploadParams"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJobDataUploadParamsResponse Alibabacloud_CCC20170705::Client::getJobDataUploadParams(shared_ptr<GetJobDataUploadParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobDataUploadParamsWithOptions(request, runtime);
}

GetJobFileUploadUrlResponse Alibabacloud_CCC20170705::Client::getJobFileUploadUrlWithOptions(shared_ptr<GetJobFileUploadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetJobFileUploadUrlResponse(doRPCRequest(make_shared<string>("GetJobFileUploadUrl"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJobFileUploadUrlResponse Alibabacloud_CCC20170705::Client::getJobFileUploadUrl(shared_ptr<GetJobFileUploadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobFileUploadUrlWithOptions(request, runtime);
}

GetJobGroupResponse Alibabacloud_CCC20170705::Client::getJobGroupWithOptions(shared_ptr<GetJobGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetJobGroupResponse(doRPCRequest(make_shared<string>("GetJobGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJobGroupResponse Alibabacloud_CCC20170705::Client::getJobGroup(shared_ptr<GetJobGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobGroupWithOptions(request, runtime);
}

GetJobListResponse Alibabacloud_CCC20170705::Client::getJobListWithOptions(shared_ptr<GetJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetJobListResponse(doRPCRequest(make_shared<string>("GetJobList"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJobListResponse Alibabacloud_CCC20170705::Client::getJobList(shared_ptr<GetJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobListWithOptions(request, runtime);
}

GetJobStatusByCallIdResponse Alibabacloud_CCC20170705::Client::getJobStatusByCallIdWithOptions(shared_ptr<GetJobStatusByCallIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetJobStatusByCallIdResponse(doRPCRequest(make_shared<string>("GetJobStatusByCallId"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJobStatusByCallIdResponse Alibabacloud_CCC20170705::Client::getJobStatusByCallId(shared_ptr<GetJobStatusByCallIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobStatusByCallIdWithOptions(request, runtime);
}

GetJobTemplateDownloadParamsResponse Alibabacloud_CCC20170705::Client::getJobTemplateDownloadParamsWithOptions(shared_ptr<GetJobTemplateDownloadParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetJobTemplateDownloadParamsResponse(doRPCRequest(make_shared<string>("GetJobTemplateDownloadParams"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJobTemplateDownloadParamsResponse Alibabacloud_CCC20170705::Client::getJobTemplateDownloadParams(shared_ptr<GetJobTemplateDownloadParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobTemplateDownloadParamsWithOptions(request, runtime);
}

GetNumberRegionInfoResponse Alibabacloud_CCC20170705::Client::getNumberRegionInfoWithOptions(shared_ptr<GetNumberRegionInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNumberRegionInfoResponse(doRPCRequest(make_shared<string>("GetNumberRegionInfo"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNumberRegionInfoResponse Alibabacloud_CCC20170705::Client::getNumberRegionInfo(shared_ptr<GetNumberRegionInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNumberRegionInfoWithOptions(request, runtime);
}

GetPredictiveJobGroupResponse Alibabacloud_CCC20170705::Client::getPredictiveJobGroupWithOptions(shared_ptr<GetPredictiveJobGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPredictiveJobGroupResponse(doRPCRequest(make_shared<string>("GetPredictiveJobGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPredictiveJobGroupResponse Alibabacloud_CCC20170705::Client::getPredictiveJobGroup(shared_ptr<GetPredictiveJobGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPredictiveJobGroupWithOptions(request, runtime);
}

GetPredictiveTaskDataResponse Alibabacloud_CCC20170705::Client::getPredictiveTaskDataWithOptions(shared_ptr<GetPredictiveTaskDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetPredictiveTaskDataResponse(doRPCRequest(make_shared<string>("GetPredictiveTaskData"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPredictiveTaskDataResponse Alibabacloud_CCC20170705::Client::getPredictiveTaskData(shared_ptr<GetPredictiveTaskDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPredictiveTaskDataWithOptions(request, runtime);
}

GetRecordOssUploadParamResponse Alibabacloud_CCC20170705::Client::getRecordOssUploadParamWithOptions(shared_ptr<GetRecordOssUploadParamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRecordOssUploadParamResponse(doRPCRequest(make_shared<string>("GetRecordOssUploadParam"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRecordOssUploadParamResponse Alibabacloud_CCC20170705::Client::getRecordOssUploadParam(shared_ptr<GetRecordOssUploadParamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRecordOssUploadParamWithOptions(request, runtime);
}

GetRoutePointResponse Alibabacloud_CCC20170705::Client::getRoutePointWithOptions(shared_ptr<GetRoutePointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRoutePointResponse(doRPCRequest(make_shared<string>("GetRoutePoint"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRoutePointResponse Alibabacloud_CCC20170705::Client::getRoutePoint(shared_ptr<GetRoutePointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRoutePointWithOptions(request, runtime);
}

GetScenarioResponse Alibabacloud_CCC20170705::Client::getScenarioWithOptions(shared_ptr<GetScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetScenarioResponse(doRPCRequest(make_shared<string>("GetScenario"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetScenarioResponse Alibabacloud_CCC20170705::Client::getScenario(shared_ptr<GetScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScenarioWithOptions(request, runtime);
}

GetServiceExtensionsResponse Alibabacloud_CCC20170705::Client::getServiceExtensionsWithOptions(shared_ptr<GetServiceExtensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetServiceExtensionsResponse(doRPCRequest(make_shared<string>("GetServiceExtensions"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetServiceExtensionsResponse Alibabacloud_CCC20170705::Client::getServiceExtensions(shared_ptr<GetServiceExtensionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceExtensionsWithOptions(request, runtime);
}

GetSmsConfigResponse Alibabacloud_CCC20170705::Client::getSmsConfigWithOptions(shared_ptr<GetSmsConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSmsConfigResponse(doRPCRequest(make_shared<string>("GetSmsConfig"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSmsConfigResponse Alibabacloud_CCC20170705::Client::getSmsConfig(shared_ptr<GetSmsConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSmsConfigWithOptions(request, runtime);
}

GetSurveyResponse Alibabacloud_CCC20170705::Client::getSurveyWithOptions(shared_ptr<GetSurveyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSurveyResponse(doRPCRequest(make_shared<string>("GetSurvey"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSurveyResponse Alibabacloud_CCC20170705::Client::getSurvey(shared_ptr<GetSurveyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSurveyWithOptions(request, runtime);
}

GetTURNCredentialsResponse Alibabacloud_CCC20170705::Client::getTURNCredentialsWithOptions(shared_ptr<GetTURNCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTURNCredentialsResponse(doRPCRequest(make_shared<string>("GetTURNCredentials"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTURNCredentialsResponse Alibabacloud_CCC20170705::Client::getTURNCredentials(shared_ptr<GetTURNCredentialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTURNCredentialsWithOptions(request, runtime);
}

GetTURNServerListResponse Alibabacloud_CCC20170705::Client::getTURNServerListWithOptions(shared_ptr<GetTURNServerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTURNServerListResponse(doRPCRequest(make_shared<string>("GetTURNServerList"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTURNServerListResponse Alibabacloud_CCC20170705::Client::getTURNServerList(shared_ptr<GetTURNServerListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTURNServerListWithOptions(request, runtime);
}

GetTaskListResponse Alibabacloud_CCC20170705::Client::getTaskListWithOptions(shared_ptr<GetTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTaskListResponse(doRPCRequest(make_shared<string>("GetTaskList"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTaskListResponse Alibabacloud_CCC20170705::Client::getTaskList(shared_ptr<GetTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskListWithOptions(request, runtime);
}

GetUserResponse Alibabacloud_CCC20170705::Client::getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserResponse(doRPCRequest(make_shared<string>("GetUser"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserResponse Alibabacloud_CCC20170705::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserWithOptions(request, runtime);
}

GetUserByExtensionResponse Alibabacloud_CCC20170705::Client::getUserByExtensionWithOptions(shared_ptr<GetUserByExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserByExtensionResponse(doRPCRequest(make_shared<string>("GetUserByExtension"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserByExtensionResponse Alibabacloud_CCC20170705::Client::getUserByExtension(shared_ptr<GetUserByExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserByExtensionWithOptions(request, runtime);
}

InflightTaskTimeoutResponse Alibabacloud_CCC20170705::Client::inflightTaskTimeoutWithOptions(shared_ptr<InflightTaskTimeoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InflightTaskTimeoutResponse(doRPCRequest(make_shared<string>("InflightTaskTimeout"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InflightTaskTimeoutResponse Alibabacloud_CCC20170705::Client::inflightTaskTimeout(shared_ptr<InflightTaskTimeoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return inflightTaskTimeoutWithOptions(request, runtime);
}

LaunchAppraiseResponse Alibabacloud_CCC20170705::Client::launchAppraiseWithOptions(shared_ptr<LaunchAppraiseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LaunchAppraiseResponse(doRPCRequest(make_shared<string>("LaunchAppraise"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LaunchAppraiseResponse Alibabacloud_CCC20170705::Client::launchAppraise(shared_ptr<LaunchAppraiseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return launchAppraiseWithOptions(request, runtime);
}

LaunchShortMessageAppraiseResponse Alibabacloud_CCC20170705::Client::launchShortMessageAppraiseWithOptions(shared_ptr<LaunchShortMessageAppraiseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LaunchShortMessageAppraiseResponse(doRPCRequest(make_shared<string>("LaunchShortMessageAppraise"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LaunchShortMessageAppraiseResponse Alibabacloud_CCC20170705::Client::launchShortMessageAppraise(shared_ptr<LaunchShortMessageAppraiseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return launchShortMessageAppraiseWithOptions(request, runtime);
}

ListAgentDevicesResponse Alibabacloud_CCC20170705::Client::listAgentDevicesWithOptions(shared_ptr<ListAgentDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAgentDevicesResponse(doRPCRequest(make_shared<string>("ListAgentDevices"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAgentDevicesResponse Alibabacloud_CCC20170705::Client::listAgentDevices(shared_ptr<ListAgentDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentDevicesWithOptions(request, runtime);
}

ListAgentEventsResponse Alibabacloud_CCC20170705::Client::listAgentEventsWithOptions(shared_ptr<ListAgentEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAgentEventsResponse(doRPCRequest(make_shared<string>("ListAgentEvents"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAgentEventsResponse Alibabacloud_CCC20170705::Client::listAgentEvents(shared_ptr<ListAgentEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentEventsWithOptions(request, runtime);
}

ListAgentStateLogsResponse Alibabacloud_CCC20170705::Client::listAgentStateLogsWithOptions(shared_ptr<ListAgentStateLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAgentStateLogsResponse(doRPCRequest(make_shared<string>("ListAgentStateLogs"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAgentStateLogsResponse Alibabacloud_CCC20170705::Client::listAgentStateLogs(shared_ptr<ListAgentStateLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentStateLogsWithOptions(request, runtime);
}

ListAgentStatesResponse Alibabacloud_CCC20170705::Client::listAgentStatesWithOptions(shared_ptr<ListAgentStatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAgentStatesResponse(doRPCRequest(make_shared<string>("ListAgentStates"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAgentStatesResponse Alibabacloud_CCC20170705::Client::listAgentStates(shared_ptr<ListAgentStatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentStatesWithOptions(request, runtime);
}

ListAgentSummaryReportsResponse Alibabacloud_CCC20170705::Client::listAgentSummaryReportsWithOptions(shared_ptr<ListAgentSummaryReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAgentSummaryReportsResponse(doRPCRequest(make_shared<string>("ListAgentSummaryReports"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAgentSummaryReportsResponse Alibabacloud_CCC20170705::Client::listAgentSummaryReports(shared_ptr<ListAgentSummaryReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentSummaryReportsWithOptions(request, runtime);
}

ListAgentSummaryReportsByIntervalResponse Alibabacloud_CCC20170705::Client::listAgentSummaryReportsByIntervalWithOptions(shared_ptr<ListAgentSummaryReportsByIntervalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAgentSummaryReportsByIntervalResponse(doRPCRequest(make_shared<string>("ListAgentSummaryReportsByInterval"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAgentSummaryReportsByIntervalResponse Alibabacloud_CCC20170705::Client::listAgentSummaryReportsByInterval(shared_ptr<ListAgentSummaryReportsByIntervalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentSummaryReportsByIntervalWithOptions(request, runtime);
}

ListAgentSummaryReportsSinceMidnightResponse Alibabacloud_CCC20170705::Client::listAgentSummaryReportsSinceMidnightWithOptions(shared_ptr<ListAgentSummaryReportsSinceMidnightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAgentSummaryReportsSinceMidnightResponse(doRPCRequest(make_shared<string>("ListAgentSummaryReportsSinceMidnight"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAgentSummaryReportsSinceMidnightResponse Alibabacloud_CCC20170705::Client::listAgentSummaryReportsSinceMidnight(shared_ptr<ListAgentSummaryReportsSinceMidnightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentSummaryReportsSinceMidnightWithOptions(request, runtime);
}

ListBasicStatisticsReportSubItemsResponse Alibabacloud_CCC20170705::Client::listBasicStatisticsReportSubItemsWithOptions(shared_ptr<ListBasicStatisticsReportSubItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBasicStatisticsReportSubItemsResponse(doRPCRequest(make_shared<string>("ListBasicStatisticsReportSubItems"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBasicStatisticsReportSubItemsResponse Alibabacloud_CCC20170705::Client::listBasicStatisticsReportSubItems(shared_ptr<ListBasicStatisticsReportSubItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBasicStatisticsReportSubItemsWithOptions(request, runtime);
}

ListCallDetailRecordsResponse Alibabacloud_CCC20170705::Client::listCallDetailRecordsWithOptions(shared_ptr<ListCallDetailRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCallDetailRecordsResponse(doRPCRequest(make_shared<string>("ListCallDetailRecords"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCallDetailRecordsResponse Alibabacloud_CCC20170705::Client::listCallDetailRecords(shared_ptr<ListCallDetailRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCallDetailRecordsWithOptions(request, runtime);
}

ListCallEventDetailByContactIdResponse Alibabacloud_CCC20170705::Client::listCallEventDetailByContactIdWithOptions(shared_ptr<ListCallEventDetailByContactIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCallEventDetailByContactIdResponse(doRPCRequest(make_shared<string>("ListCallEventDetailByContactId"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCallEventDetailByContactIdResponse Alibabacloud_CCC20170705::Client::listCallEventDetailByContactId(shared_ptr<ListCallEventDetailByContactIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCallEventDetailByContactIdWithOptions(request, runtime);
}

ListCallMeasureSummaryReportsResponse Alibabacloud_CCC20170705::Client::listCallMeasureSummaryReportsWithOptions(shared_ptr<ListCallMeasureSummaryReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCallMeasureSummaryReportsResponse(doRPCRequest(make_shared<string>("ListCallMeasureSummaryReports"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCallMeasureSummaryReportsResponse Alibabacloud_CCC20170705::Client::listCallMeasureSummaryReports(shared_ptr<ListCallMeasureSummaryReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCallMeasureSummaryReportsWithOptions(request, runtime);
}

ListConfigResponse Alibabacloud_CCC20170705::Client::listConfigWithOptions(shared_ptr<ListConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListConfigResponse(doRPCRequest(make_shared<string>("ListConfig"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListConfigResponse Alibabacloud_CCC20170705::Client::listConfig(shared_ptr<ListConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigWithOptions(request, runtime);
}

ListContactFlowsResponse Alibabacloud_CCC20170705::Client::listContactFlowsWithOptions(shared_ptr<ListContactFlowsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListContactFlowsResponse(doRPCRequest(make_shared<string>("ListContactFlows"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListContactFlowsResponse Alibabacloud_CCC20170705::Client::listContactFlows(shared_ptr<ListContactFlowsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listContactFlowsWithOptions(request, runtime);
}

ListInstancesOfUserResponse Alibabacloud_CCC20170705::Client::listInstancesOfUserWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListInstancesOfUserResponse(doRPCRequest(make_shared<string>("ListInstancesOfUser"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInstancesOfUserResponse Alibabacloud_CCC20170705::Client::listInstancesOfUser() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesOfUserWithOptions(runtime);
}

ListIvrTrackingDetailResponse Alibabacloud_CCC20170705::Client::listIvrTrackingDetailWithOptions(shared_ptr<ListIvrTrackingDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListIvrTrackingDetailResponse(doRPCRequest(make_shared<string>("ListIvrTrackingDetail"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListIvrTrackingDetailResponse Alibabacloud_CCC20170705::Client::listIvrTrackingDetail(shared_ptr<ListIvrTrackingDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIvrTrackingDetailWithOptions(request, runtime);
}

ListJobGroupsResponse Alibabacloud_CCC20170705::Client::listJobGroupsWithOptions(shared_ptr<ListJobGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListJobGroupsResponse(doRPCRequest(make_shared<string>("ListJobGroups"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListJobGroupsResponse Alibabacloud_CCC20170705::Client::listJobGroups(shared_ptr<ListJobGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobGroupsWithOptions(request, runtime);
}

ListJobStatusResponse Alibabacloud_CCC20170705::Client::listJobStatusWithOptions(shared_ptr<ListJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListJobStatusResponse(doRPCRequest(make_shared<string>("ListJobStatus"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListJobStatusResponse Alibabacloud_CCC20170705::Client::listJobStatus(shared_ptr<ListJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobStatusWithOptions(request, runtime);
}

ListJobsByGroupResponse Alibabacloud_CCC20170705::Client::listJobsByGroupWithOptions(shared_ptr<ListJobsByGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListJobsByGroupResponse(doRPCRequest(make_shared<string>("ListJobsByGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListJobsByGroupResponse Alibabacloud_CCC20170705::Client::listJobsByGroup(shared_ptr<ListJobsByGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobsByGroupWithOptions(request, runtime);
}

ListMediasResponse Alibabacloud_CCC20170705::Client::listMediasWithOptions(shared_ptr<ListMediasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMediasResponse(doRPCRequest(make_shared<string>("ListMedias"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMediasResponse Alibabacloud_CCC20170705::Client::listMedias(shared_ptr<ListMediasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediasWithOptions(request, runtime);
}

ListOutboundPhoneNumberOfUserResponse Alibabacloud_CCC20170705::Client::listOutboundPhoneNumberOfUserWithOptions(shared_ptr<ListOutboundPhoneNumberOfUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOutboundPhoneNumberOfUserResponse(doRPCRequest(make_shared<string>("ListOutboundPhoneNumberOfUser"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOutboundPhoneNumberOfUserResponse Alibabacloud_CCC20170705::Client::listOutboundPhoneNumberOfUser(shared_ptr<ListOutboundPhoneNumberOfUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOutboundPhoneNumberOfUserWithOptions(request, runtime);
}

ListPhoneNumbersResponse Alibabacloud_CCC20170705::Client::listPhoneNumbersWithOptions(shared_ptr<ListPhoneNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPhoneNumbersResponse(doRPCRequest(make_shared<string>("ListPhoneNumbers"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPhoneNumbersResponse Alibabacloud_CCC20170705::Client::listPhoneNumbers(shared_ptr<ListPhoneNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPhoneNumbersWithOptions(request, runtime);
}

ListPhoneTagsResponse Alibabacloud_CCC20170705::Client::listPhoneTagsWithOptions(shared_ptr<ListPhoneTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPhoneTagsResponse(doRPCRequest(make_shared<string>("ListPhoneTags"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPhoneTagsResponse Alibabacloud_CCC20170705::Client::listPhoneTags(shared_ptr<ListPhoneTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPhoneTagsWithOptions(request, runtime);
}

ListRealTimeAgentResponse Alibabacloud_CCC20170705::Client::listRealTimeAgentWithOptions(shared_ptr<ListRealTimeAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRealTimeAgentResponse(doRPCRequest(make_shared<string>("ListRealTimeAgent"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRealTimeAgentResponse Alibabacloud_CCC20170705::Client::listRealTimeAgent(shared_ptr<ListRealTimeAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRealTimeAgentWithOptions(request, runtime);
}

ListRecentCallRecordsResponse Alibabacloud_CCC20170705::Client::listRecentCallRecordsWithOptions(shared_ptr<ListRecentCallRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRecentCallRecordsResponse(doRPCRequest(make_shared<string>("ListRecentCallRecords"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRecentCallRecordsResponse Alibabacloud_CCC20170705::Client::listRecentCallRecords(shared_ptr<ListRecentCallRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRecentCallRecordsWithOptions(request, runtime);
}

ListRecordingOfDualTrackResponse Alibabacloud_CCC20170705::Client::listRecordingOfDualTrackWithOptions(shared_ptr<ListRecordingOfDualTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRecordingOfDualTrackResponse(doRPCRequest(make_shared<string>("ListRecordingOfDualTrack"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRecordingOfDualTrackResponse Alibabacloud_CCC20170705::Client::listRecordingOfDualTrack(shared_ptr<ListRecordingOfDualTrackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRecordingOfDualTrackWithOptions(request, runtime);
}

ListRecordingsResponse Alibabacloud_CCC20170705::Client::listRecordingsWithOptions(shared_ptr<ListRecordingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRecordingsResponse(doRPCRequest(make_shared<string>("ListRecordings"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRecordingsResponse Alibabacloud_CCC20170705::Client::listRecordings(shared_ptr<ListRecordingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRecordingsWithOptions(request, runtime);
}

ListRecordingsByContactIdResponse Alibabacloud_CCC20170705::Client::listRecordingsByContactIdWithOptions(shared_ptr<ListRecordingsByContactIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRecordingsByContactIdResponse(doRPCRequest(make_shared<string>("ListRecordingsByContactId"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRecordingsByContactIdResponse Alibabacloud_CCC20170705::Client::listRecordingsByContactId(shared_ptr<ListRecordingsByContactIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRecordingsByContactIdWithOptions(request, runtime);
}

ListRolesResponse Alibabacloud_CCC20170705::Client::listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRolesResponse(doRPCRequest(make_shared<string>("ListRoles"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRolesResponse Alibabacloud_CCC20170705::Client::listRoles(shared_ptr<ListRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRolesWithOptions(request, runtime);
}

ListScenarioTemplatesResponse Alibabacloud_CCC20170705::Client::listScenarioTemplatesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListScenarioTemplatesResponse(doRPCRequest(make_shared<string>("ListScenarioTemplates"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListScenarioTemplatesResponse Alibabacloud_CCC20170705::Client::listScenarioTemplates() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScenarioTemplatesWithOptions(runtime);
}

ListScenariosResponse Alibabacloud_CCC20170705::Client::listScenariosWithOptions(shared_ptr<ListScenariosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListScenariosResponse(doRPCRequest(make_shared<string>("ListScenarios"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListScenariosResponse Alibabacloud_CCC20170705::Client::listScenarios(shared_ptr<ListScenariosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScenariosWithOptions(request, runtime);
}

ListSkillGroupStatesResponse Alibabacloud_CCC20170705::Client::listSkillGroupStatesWithOptions(shared_ptr<ListSkillGroupStatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSkillGroupStatesResponse(doRPCRequest(make_shared<string>("ListSkillGroupStates"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSkillGroupStatesResponse Alibabacloud_CCC20170705::Client::listSkillGroupStates(shared_ptr<ListSkillGroupStatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupStatesWithOptions(request, runtime);
}

ListSkillGroupSummaryReportsResponse Alibabacloud_CCC20170705::Client::listSkillGroupSummaryReportsWithOptions(shared_ptr<ListSkillGroupSummaryReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSkillGroupSummaryReportsResponse(doRPCRequest(make_shared<string>("ListSkillGroupSummaryReports"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSkillGroupSummaryReportsResponse Alibabacloud_CCC20170705::Client::listSkillGroupSummaryReports(shared_ptr<ListSkillGroupSummaryReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupSummaryReportsWithOptions(request, runtime);
}

ListSkillGroupSummaryReportsByIntervalResponse Alibabacloud_CCC20170705::Client::listSkillGroupSummaryReportsByIntervalWithOptions(shared_ptr<ListSkillGroupSummaryReportsByIntervalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSkillGroupSummaryReportsByIntervalResponse(doRPCRequest(make_shared<string>("ListSkillGroupSummaryReportsByInterval"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSkillGroupSummaryReportsByIntervalResponse Alibabacloud_CCC20170705::Client::listSkillGroupSummaryReportsByInterval(shared_ptr<ListSkillGroupSummaryReportsByIntervalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupSummaryReportsByIntervalWithOptions(request, runtime);
}

ListSkillGroupSummaryReportsSinceMidnightResponse Alibabacloud_CCC20170705::Client::listSkillGroupSummaryReportsSinceMidnightWithOptions(shared_ptr<ListSkillGroupSummaryReportsSinceMidnightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSkillGroupSummaryReportsSinceMidnightResponse(doRPCRequest(make_shared<string>("ListSkillGroupSummaryReportsSinceMidnight"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSkillGroupSummaryReportsSinceMidnightResponse Alibabacloud_CCC20170705::Client::listSkillGroupSummaryReportsSinceMidnight(shared_ptr<ListSkillGroupSummaryReportsSinceMidnightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupSummaryReportsSinceMidnightWithOptions(request, runtime);
}

ListSkillGroupsResponse Alibabacloud_CCC20170705::Client::listSkillGroupsWithOptions(shared_ptr<ListSkillGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSkillGroupsResponse(doRPCRequest(make_shared<string>("ListSkillGroups"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSkillGroupsResponse Alibabacloud_CCC20170705::Client::listSkillGroups(shared_ptr<ListSkillGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupsWithOptions(request, runtime);
}

ListSkillGroupsOfUserResponse Alibabacloud_CCC20170705::Client::listSkillGroupsOfUserWithOptions(shared_ptr<ListSkillGroupsOfUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSkillGroupsOfUserResponse(doRPCRequest(make_shared<string>("ListSkillGroupsOfUser"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSkillGroupsOfUserResponse Alibabacloud_CCC20170705::Client::listSkillGroupsOfUser(shared_ptr<ListSkillGroupsOfUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupsOfUserWithOptions(request, runtime);
}

ListSurveysResponse Alibabacloud_CCC20170705::Client::listSurveysWithOptions(shared_ptr<ListSurveysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSurveysResponse(doRPCRequest(make_shared<string>("ListSurveys"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSurveysResponse Alibabacloud_CCC20170705::Client::listSurveys(shared_ptr<ListSurveysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSurveysWithOptions(request, runtime);
}

ListTransferableSkillGroupsResponse Alibabacloud_CCC20170705::Client::listTransferableSkillGroupsWithOptions(shared_ptr<ListTransferableSkillGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTransferableSkillGroupsResponse(doRPCRequest(make_shared<string>("ListTransferableSkillGroups"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTransferableSkillGroupsResponse Alibabacloud_CCC20170705::Client::listTransferableSkillGroups(shared_ptr<ListTransferableSkillGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTransferableSkillGroupsWithOptions(request, runtime);
}

ListTrunkProvidersResponse Alibabacloud_CCC20170705::Client::listTrunkProvidersWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListTrunkProvidersResponse(doRPCRequest(make_shared<string>("ListTrunkProviders"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTrunkProvidersResponse Alibabacloud_CCC20170705::Client::listTrunkProviders() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTrunkProvidersWithOptions(runtime);
}

ListTrunksOfSkillGroupResponse Alibabacloud_CCC20170705::Client::listTrunksOfSkillGroupWithOptions(shared_ptr<ListTrunksOfSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTrunksOfSkillGroupResponse(doRPCRequest(make_shared<string>("ListTrunksOfSkillGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTrunksOfSkillGroupResponse Alibabacloud_CCC20170705::Client::listTrunksOfSkillGroup(shared_ptr<ListTrunksOfSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTrunksOfSkillGroupWithOptions(request, runtime);
}

ListUnreachableContactsResponse Alibabacloud_CCC20170705::Client::listUnreachableContactsWithOptions(shared_ptr<ListUnreachableContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUnreachableContactsResponse(doRPCRequest(make_shared<string>("ListUnreachableContacts"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUnreachableContactsResponse Alibabacloud_CCC20170705::Client::listUnreachableContacts(shared_ptr<ListUnreachableContactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUnreachableContactsWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_CCC20170705::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUsersResponse(doRPCRequest(make_shared<string>("ListUsers"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsersResponse Alibabacloud_CCC20170705::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

ListUsersOfSkillGroupResponse Alibabacloud_CCC20170705::Client::listUsersOfSkillGroupWithOptions(shared_ptr<ListUsersOfSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUsersOfSkillGroupResponse(doRPCRequest(make_shared<string>("ListUsersOfSkillGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsersOfSkillGroupResponse Alibabacloud_CCC20170705::Client::listUsersOfSkillGroup(shared_ptr<ListUsersOfSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersOfSkillGroupWithOptions(request, runtime);
}

ListVoiceAppraiseResponse Alibabacloud_CCC20170705::Client::listVoiceAppraiseWithOptions(shared_ptr<ListVoiceAppraiseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVoiceAppraiseResponse(doRPCRequest(make_shared<string>("ListVoiceAppraise"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVoiceAppraiseResponse Alibabacloud_CCC20170705::Client::listVoiceAppraise(shared_ptr<ListVoiceAppraiseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVoiceAppraiseWithOptions(request, runtime);
}

ModifyAgentDeviceResponse Alibabacloud_CCC20170705::Client::modifyAgentDeviceWithOptions(shared_ptr<ModifyAgentDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAgentDeviceResponse(doRPCRequest(make_shared<string>("ModifyAgentDevice"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAgentDeviceResponse Alibabacloud_CCC20170705::Client::modifyAgentDevice(shared_ptr<ModifyAgentDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAgentDeviceWithOptions(request, runtime);
}

ModifyCabInstanceResponse Alibabacloud_CCC20170705::Client::modifyCabInstanceWithOptions(shared_ptr<ModifyCabInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyCabInstanceResponse(doRPCRequest(make_shared<string>("ModifyCabInstance"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyCabInstanceResponse Alibabacloud_CCC20170705::Client::modifyCabInstance(shared_ptr<ModifyCabInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCabInstanceWithOptions(request, runtime);
}

ModifyCallRatioResponse Alibabacloud_CCC20170705::Client::modifyCallRatioWithOptions(shared_ptr<ModifyCallRatioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyCallRatioResponse(doRPCRequest(make_shared<string>("ModifyCallRatio"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyCallRatioResponse Alibabacloud_CCC20170705::Client::modifyCallRatio(shared_ptr<ModifyCallRatioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCallRatioWithOptions(request, runtime);
}

ModifyPhoneNumberResponse Alibabacloud_CCC20170705::Client::modifyPhoneNumberWithOptions(shared_ptr<ModifyPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPhoneNumberResponse(doRPCRequest(make_shared<string>("ModifyPhoneNumber"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPhoneNumberResponse Alibabacloud_CCC20170705::Client::modifyPhoneNumber(shared_ptr<ModifyPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPhoneNumberWithOptions(request, runtime);
}

ModifyPhoneTagsResponse Alibabacloud_CCC20170705::Client::modifyPhoneTagsWithOptions(shared_ptr<ModifyPhoneTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPhoneTagsResponse(doRPCRequest(make_shared<string>("ModifyPhoneTags"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPhoneTagsResponse Alibabacloud_CCC20170705::Client::modifyPhoneTags(shared_ptr<ModifyPhoneTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPhoneTagsWithOptions(request, runtime);
}

ModifyPrimaryTrunksOfSkillGroupResponse Alibabacloud_CCC20170705::Client::modifyPrimaryTrunksOfSkillGroupWithOptions(shared_ptr<ModifyPrimaryTrunksOfSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPrimaryTrunksOfSkillGroupResponse(doRPCRequest(make_shared<string>("ModifyPrimaryTrunksOfSkillGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPrimaryTrunksOfSkillGroupResponse Alibabacloud_CCC20170705::Client::modifyPrimaryTrunksOfSkillGroup(shared_ptr<ModifyPrimaryTrunksOfSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPrimaryTrunksOfSkillGroupWithOptions(request, runtime);
}

ModifyPrivacyNumberCallDetailResponse Alibabacloud_CCC20170705::Client::modifyPrivacyNumberCallDetailWithOptions(shared_ptr<ModifyPrivacyNumberCallDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPrivacyNumberCallDetailResponse(doRPCRequest(make_shared<string>("ModifyPrivacyNumberCallDetail"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPrivacyNumberCallDetailResponse Alibabacloud_CCC20170705::Client::modifyPrivacyNumberCallDetail(shared_ptr<ModifyPrivacyNumberCallDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPrivacyNumberCallDetailWithOptions(request, runtime);
}

ModifyScenarioResponse Alibabacloud_CCC20170705::Client::modifyScenarioWithOptions(shared_ptr<ModifyScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyScenarioResponse(doRPCRequest(make_shared<string>("ModifyScenario"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyScenarioResponse Alibabacloud_CCC20170705::Client::modifyScenario(shared_ptr<ModifyScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScenarioWithOptions(request, runtime);
}

ModifySkillGroupResponse Alibabacloud_CCC20170705::Client::modifySkillGroupWithOptions(shared_ptr<ModifySkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySkillGroupResponse(doRPCRequest(make_shared<string>("ModifySkillGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySkillGroupResponse Alibabacloud_CCC20170705::Client::modifySkillGroup(shared_ptr<ModifySkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySkillGroupWithOptions(request, runtime);
}

ModifySkillGroupOfUserResponse Alibabacloud_CCC20170705::Client::modifySkillGroupOfUserWithOptions(shared_ptr<ModifySkillGroupOfUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySkillGroupOfUserResponse(doRPCRequest(make_shared<string>("ModifySkillGroupOfUser"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySkillGroupOfUserResponse Alibabacloud_CCC20170705::Client::modifySkillGroupOfUser(shared_ptr<ModifySkillGroupOfUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySkillGroupOfUserWithOptions(request, runtime);
}

ModifySkillGroupOutboundNumbersResponse Alibabacloud_CCC20170705::Client::modifySkillGroupOutboundNumbersWithOptions(shared_ptr<ModifySkillGroupOutboundNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySkillGroupOutboundNumbersResponse(doRPCRequest(make_shared<string>("ModifySkillGroupOutboundNumbers"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySkillGroupOutboundNumbersResponse Alibabacloud_CCC20170705::Client::modifySkillGroupOutboundNumbers(shared_ptr<ModifySkillGroupOutboundNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySkillGroupOutboundNumbersWithOptions(request, runtime);
}

ModifySurveyResponse Alibabacloud_CCC20170705::Client::modifySurveyWithOptions(shared_ptr<ModifySurveyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySurveyResponse(doRPCRequest(make_shared<string>("ModifySurvey"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySurveyResponse Alibabacloud_CCC20170705::Client::modifySurvey(shared_ptr<ModifySurveyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySurveyWithOptions(request, runtime);
}

ModifyUserResponse Alibabacloud_CCC20170705::Client::modifyUserWithOptions(shared_ptr<ModifyUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyUserResponse(doRPCRequest(make_shared<string>("ModifyUser"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyUserResponse Alibabacloud_CCC20170705::Client::modifyUser(shared_ptr<ModifyUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserWithOptions(request, runtime);
}

PickGlobalOutboundNumbersResponse Alibabacloud_CCC20170705::Client::pickGlobalOutboundNumbersWithOptions(shared_ptr<PickGlobalOutboundNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PickGlobalOutboundNumbersResponse(doRPCRequest(make_shared<string>("PickGlobalOutboundNumbers"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PickGlobalOutboundNumbersResponse Alibabacloud_CCC20170705::Client::pickGlobalOutboundNumbers(shared_ptr<PickGlobalOutboundNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pickGlobalOutboundNumbersWithOptions(request, runtime);
}

PickLocalNumberResponse Alibabacloud_CCC20170705::Client::pickLocalNumberWithOptions(shared_ptr<PickLocalNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PickLocalNumberResponse(doRPCRequest(make_shared<string>("PickLocalNumber"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PickLocalNumberResponse Alibabacloud_CCC20170705::Client::pickLocalNumber(shared_ptr<PickLocalNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pickLocalNumberWithOptions(request, runtime);
}

PickOutboundNumbersResponse Alibabacloud_CCC20170705::Client::pickOutboundNumbersWithOptions(shared_ptr<PickOutboundNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PickOutboundNumbersResponse(doRPCRequest(make_shared<string>("PickOutboundNumbers"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PickOutboundNumbersResponse Alibabacloud_CCC20170705::Client::pickOutboundNumbers(shared_ptr<PickOutboundNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pickOutboundNumbersWithOptions(request, runtime);
}

PublishContactFlowVersionResponse Alibabacloud_CCC20170705::Client::publishContactFlowVersionWithOptions(shared_ptr<PublishContactFlowVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishContactFlowVersionResponse(doRPCRequest(make_shared<string>("PublishContactFlowVersion"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishContactFlowVersionResponse Alibabacloud_CCC20170705::Client::publishContactFlowVersion(shared_ptr<PublishContactFlowVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishContactFlowVersionWithOptions(request, runtime);
}

PublishPredictiveJobGroupResponse Alibabacloud_CCC20170705::Client::publishPredictiveJobGroupWithOptions(shared_ptr<PublishPredictiveJobGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishPredictiveJobGroupResponse(doRPCRequest(make_shared<string>("PublishPredictiveJobGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishPredictiveJobGroupResponse Alibabacloud_CCC20170705::Client::publishPredictiveJobGroup(shared_ptr<PublishPredictiveJobGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishPredictiveJobGroupWithOptions(request, runtime);
}

PublishSurveyResponse Alibabacloud_CCC20170705::Client::publishSurveyWithOptions(shared_ptr<PublishSurveyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishSurveyResponse(doRPCRequest(make_shared<string>("PublishSurvey"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishSurveyResponse Alibabacloud_CCC20170705::Client::publishSurvey(shared_ptr<PublishSurveyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishSurveyWithOptions(request, runtime);
}

RefreshTokenResponse Alibabacloud_CCC20170705::Client::refreshTokenWithOptions(shared_ptr<RefreshTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshTokenResponse(doRPCRequest(make_shared<string>("RefreshToken"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshTokenResponse Alibabacloud_CCC20170705::Client::refreshToken(shared_ptr<RefreshTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshTokenWithOptions(request, runtime);
}

RemovePhoneNumberResponse Alibabacloud_CCC20170705::Client::removePhoneNumberWithOptions(shared_ptr<RemovePhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemovePhoneNumberResponse(doRPCRequest(make_shared<string>("RemovePhoneNumber"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemovePhoneNumberResponse Alibabacloud_CCC20170705::Client::removePhoneNumber(shared_ptr<RemovePhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removePhoneNumberWithOptions(request, runtime);
}

RemoveUsersResponse Alibabacloud_CCC20170705::Client::removeUsersWithOptions(shared_ptr<RemoveUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveUsersResponse(doRPCRequest(make_shared<string>("RemoveUsers"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveUsersResponse Alibabacloud_CCC20170705::Client::removeUsers(shared_ptr<RemoveUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUsersWithOptions(request, runtime);
}

RemoveUsersFromSkillGroupResponse Alibabacloud_CCC20170705::Client::removeUsersFromSkillGroupWithOptions(shared_ptr<RemoveUsersFromSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveUsersFromSkillGroupResponse(doRPCRequest(make_shared<string>("RemoveUsersFromSkillGroup"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveUsersFromSkillGroupResponse Alibabacloud_CCC20170705::Client::removeUsersFromSkillGroup(shared_ptr<RemoveUsersFromSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUsersFromSkillGroupWithOptions(request, runtime);
}

RequestLoginInfoResponse Alibabacloud_CCC20170705::Client::requestLoginInfoWithOptions(shared_ptr<RequestLoginInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RequestLoginInfoResponse(doRPCRequest(make_shared<string>("RequestLoginInfo"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RequestLoginInfoResponse Alibabacloud_CCC20170705::Client::requestLoginInfo(shared_ptr<RequestLoginInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestLoginInfoWithOptions(request, runtime);
}

ResetUserStatusResponse Alibabacloud_CCC20170705::Client::resetUserStatusWithOptions(shared_ptr<ResetUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetUserStatusResponse(doRPCRequest(make_shared<string>("ResetUserStatus"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetUserStatusResponse Alibabacloud_CCC20170705::Client::resetUserStatus(shared_ptr<ResetUserStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetUserStatusWithOptions(request, runtime);
}

ResumeJobsResponse Alibabacloud_CCC20170705::Client::resumeJobsWithOptions(shared_ptr<ResumeJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResumeJobsResponse(doRPCRequest(make_shared<string>("ResumeJobs"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResumeJobsResponse Alibabacloud_CCC20170705::Client::resumeJobs(shared_ptr<ResumeJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeJobsWithOptions(request, runtime);
}

ResumePredictiveJobsResponse Alibabacloud_CCC20170705::Client::resumePredictiveJobsWithOptions(shared_ptr<ResumePredictiveJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResumePredictiveJobsResponse(doRPCRequest(make_shared<string>("ResumePredictiveJobs"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResumePredictiveJobsResponse Alibabacloud_CCC20170705::Client::resumePredictiveJobs(shared_ptr<ResumePredictiveJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumePredictiveJobsWithOptions(request, runtime);
}

SaveStatsResponse Alibabacloud_CCC20170705::Client::saveStatsWithOptions(shared_ptr<SaveStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveStatsResponse(doRPCRequest(make_shared<string>("SaveStats"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveStatsResponse Alibabacloud_CCC20170705::Client::saveStats(shared_ptr<SaveStatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveStatsWithOptions(request, runtime);
}

SaveTerminalLogResponse Alibabacloud_CCC20170705::Client::saveTerminalLogWithOptions(shared_ptr<SaveTerminalLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveTerminalLogResponse(doRPCRequest(make_shared<string>("SaveTerminalLog"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveTerminalLogResponse Alibabacloud_CCC20170705::Client::saveTerminalLog(shared_ptr<SaveTerminalLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTerminalLogWithOptions(request, runtime);
}

SaveWebRTCStatsResponse Alibabacloud_CCC20170705::Client::saveWebRTCStatsWithOptions(shared_ptr<SaveWebRTCStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveWebRTCStatsResponse(doRPCRequest(make_shared<string>("SaveWebRTCStats"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveWebRTCStatsResponse Alibabacloud_CCC20170705::Client::saveWebRTCStats(shared_ptr<SaveWebRTCStatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveWebRTCStatsWithOptions(request, runtime);
}

SendPredefinedShortMessageResponse Alibabacloud_CCC20170705::Client::sendPredefinedShortMessageWithOptions(shared_ptr<SendPredefinedShortMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendPredefinedShortMessageResponse(doRPCRequest(make_shared<string>("SendPredefinedShortMessage"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendPredefinedShortMessageResponse Alibabacloud_CCC20170705::Client::sendPredefinedShortMessage(shared_ptr<SendPredefinedShortMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendPredefinedShortMessageWithOptions(request, runtime);
}

StartBack2BackCallResponse Alibabacloud_CCC20170705::Client::startBack2BackCallWithOptions(shared_ptr<StartBack2BackCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartBack2BackCallResponse(doRPCRequest(make_shared<string>("StartBack2BackCall"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartBack2BackCallResponse Alibabacloud_CCC20170705::Client::startBack2BackCall(shared_ptr<StartBack2BackCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startBack2BackCallWithOptions(request, runtime);
}

StartJobResponse Alibabacloud_CCC20170705::Client::startJobWithOptions(shared_ptr<StartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartJobResponse(doRPCRequest(make_shared<string>("StartJob"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartJobResponse Alibabacloud_CCC20170705::Client::startJob(shared_ptr<StartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startJobWithOptions(request, runtime);
}

SubmitBatchJobsResponse Alibabacloud_CCC20170705::Client::submitBatchJobsWithOptions(shared_ptr<SubmitBatchJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitBatchJobsResponse(doRPCRequest(make_shared<string>("SubmitBatchJobs"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitBatchJobsResponse Alibabacloud_CCC20170705::Client::submitBatchJobs(shared_ptr<SubmitBatchJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitBatchJobsWithOptions(request, runtime);
}

SubmitCabRecordingResponse Alibabacloud_CCC20170705::Client::submitCabRecordingWithOptions(shared_ptr<SubmitCabRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitCabRecordingResponse(doRPCRequest(make_shared<string>("SubmitCabRecording"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitCabRecordingResponse Alibabacloud_CCC20170705::Client::submitCabRecording(shared_ptr<SubmitCabRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCabRecordingWithOptions(request, runtime);
}

SuspendJobsResponse Alibabacloud_CCC20170705::Client::suspendJobsWithOptions(shared_ptr<SuspendJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SuspendJobsResponse(doRPCRequest(make_shared<string>("SuspendJobs"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SuspendJobsResponse Alibabacloud_CCC20170705::Client::suspendJobs(shared_ptr<SuspendJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendJobsWithOptions(request, runtime);
}

SuspendPredictiveJobsResponse Alibabacloud_CCC20170705::Client::suspendPredictiveJobsWithOptions(shared_ptr<SuspendPredictiveJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SuspendPredictiveJobsResponse(doRPCRequest(make_shared<string>("SuspendPredictiveJobs"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SuspendPredictiveJobsResponse Alibabacloud_CCC20170705::Client::suspendPredictiveJobs(shared_ptr<SuspendPredictiveJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendPredictiveJobsWithOptions(request, runtime);
}

TaskPreparingResponse Alibabacloud_CCC20170705::Client::taskPreparingWithOptions(shared_ptr<TaskPreparingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TaskPreparingResponse(doRPCRequest(make_shared<string>("TaskPreparing"), make_shared<string>("2017-07-05"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TaskPreparingResponse Alibabacloud_CCC20170705::Client::taskPreparing(shared_ptr<TaskPreparingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return taskPreparingWithOptions(request, runtime);
}

