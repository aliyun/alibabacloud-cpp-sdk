// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sas_20181203.hpp>
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

using namespace Alibabacloud_Sas20181203;

Alibabacloud_Sas20181203::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "tds.aliyuncs.com"},
    {"ap-southeast-3", "tds.ap-southeast-3.aliyuncs.com"},
    {"ap-northeast-1", "tds.aliyuncs.com"},
    {"ap-northeast-2-pop", "tds.aliyuncs.com"},
    {"ap-south-1", "tds.aliyuncs.com"},
    {"ap-southeast-1", "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "tds.aliyuncs.com"},
    {"ap-southeast-5", "tds.aliyuncs.com"},
    {"cn-beijing", "tds.aliyuncs.com"},
    {"cn-beijing-finance-1", "tds.aliyuncs.com"},
    {"cn-beijing-finance-pop", "tds.aliyuncs.com"},
    {"cn-beijing-gov-1", "tds.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "tds.aliyuncs.com"},
    {"cn-chengdu", "tds.aliyuncs.com"},
    {"cn-edge-1", "tds.aliyuncs.com"},
    {"cn-fujian", "tds.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "tds.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "tds.aliyuncs.com"},
    {"cn-hangzhou-finance", "tds.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "tds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "tds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "tds.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "tds.aliyuncs.com"},
    {"cn-hangzhou-test-306", "tds.aliyuncs.com"},
    {"cn-hongkong", "tds.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "tds.aliyuncs.com"},
    {"cn-huhehaote", "tds.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "tds.aliyuncs.com"},
    {"cn-north-2-gov-1", "tds.aliyuncs.com"},
    {"cn-qingdao", "tds.aliyuncs.com"},
    {"cn-qingdao-nebula", "tds.aliyuncs.com"},
    {"cn-shanghai", "tds.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "tds.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "tds.aliyuncs.com"},
    {"cn-shanghai-finance-1", "tds.aliyuncs.com"},
    {"cn-shanghai-inner", "tds.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "tds.aliyuncs.com"},
    {"cn-shenzhen", "tds.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "tds.aliyuncs.com"},
    {"cn-shenzhen-inner", "tds.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "tds.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "tds.aliyuncs.com"},
    {"cn-wuhan", "tds.aliyuncs.com"},
    {"cn-wulanchabu", "tds.aliyuncs.com"},
    {"cn-yushanfang", "tds.aliyuncs.com"},
    {"cn-zhangbei", "tds.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "tds.aliyuncs.com"},
    {"cn-zhangjiakou", "tds.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "tds.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "tds.aliyuncs.com"},
    {"eu-central-1", "tds.aliyuncs.com"},
    {"eu-west-1", "tds.aliyuncs.com"},
    {"eu-west-1-oxs", "tds.aliyuncs.com"},
    {"me-east-1", "tds.aliyuncs.com"},
    {"rus-west-1-pop", "tds.aliyuncs.com"},
    {"us-east-1", "tds.aliyuncs.com"},
    {"us-west-1", "tds.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("sas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Sas20181203::Client::getEndpoint(shared_ptr<string> productId,
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

AddVpcHoneyPotResponse Alibabacloud_Sas20181203::Client::addVpcHoneyPotWithOptions(shared_ptr<AddVpcHoneyPotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVpcHoneyPotResponse(doRPCRequest(make_shared<string>("AddVpcHoneyPot"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVpcHoneyPotResponse Alibabacloud_Sas20181203::Client::addVpcHoneyPot(shared_ptr<AddVpcHoneyPotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVpcHoneyPotWithOptions(request, runtime);
}

CheckQuaraFileIdResponse Alibabacloud_Sas20181203::Client::checkQuaraFileIdWithOptions(shared_ptr<CheckQuaraFileIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckQuaraFileIdResponse(doRPCRequest(make_shared<string>("CheckQuaraFileId"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckQuaraFileIdResponse Alibabacloud_Sas20181203::Client::checkQuaraFileId(shared_ptr<CheckQuaraFileIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkQuaraFileIdWithOptions(request, runtime);
}

CheckSecurityEventIdResponse Alibabacloud_Sas20181203::Client::checkSecurityEventIdWithOptions(shared_ptr<CheckSecurityEventIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckSecurityEventIdResponse(doRPCRequest(make_shared<string>("CheckSecurityEventId"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckSecurityEventIdResponse Alibabacloud_Sas20181203::Client::checkSecurityEventId(shared_ptr<CheckSecurityEventIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkSecurityEventIdWithOptions(request, runtime);
}

CreateAntiBruteForceRuleResponse Alibabacloud_Sas20181203::Client::createAntiBruteForceRuleWithOptions(shared_ptr<CreateAntiBruteForceRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAntiBruteForceRuleResponse(doRPCRequest(make_shared<string>("CreateAntiBruteForceRule"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAntiBruteForceRuleResponse Alibabacloud_Sas20181203::Client::createAntiBruteForceRule(shared_ptr<CreateAntiBruteForceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntiBruteForceRuleWithOptions(request, runtime);
}

CreateAssetResponse Alibabacloud_Sas20181203::Client::createAssetWithOptions(shared_ptr<CreateAssetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAssetResponse(doRPCRequest(make_shared<string>("CreateAsset"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAssetResponse Alibabacloud_Sas20181203::Client::createAsset(shared_ptr<CreateAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAssetWithOptions(request, runtime);
}

CreateBackupPolicyResponse Alibabacloud_Sas20181203::Client::createBackupPolicyWithOptions(shared_ptr<CreateBackupPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateBackupPolicyShrinkRequest> request = make_shared<CreateBackupPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->policy)) {
    request->policyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->policy, make_shared<string>("Policy"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateBackupPolicyResponse(doRPCRequest(make_shared<string>("CreateBackupPolicy"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateBackupPolicyResponse Alibabacloud_Sas20181203::Client::createBackupPolicy(shared_ptr<CreateBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBackupPolicyWithOptions(request, runtime);
}

CreateOrUpdateAssetGroupResponse Alibabacloud_Sas20181203::Client::createOrUpdateAssetGroupWithOptions(shared_ptr<CreateOrUpdateAssetGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOrUpdateAssetGroupResponse(doRPCRequest(make_shared<string>("CreateOrUpdateAssetGroup"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOrUpdateAssetGroupResponse Alibabacloud_Sas20181203::Client::createOrUpdateAssetGroup(shared_ptr<CreateOrUpdateAssetGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrUpdateAssetGroupWithOptions(request, runtime);
}

CreateRestoreJobResponse Alibabacloud_Sas20181203::Client::createRestoreJobWithOptions(shared_ptr<CreateRestoreJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRestoreJobResponse(doRPCRequest(make_shared<string>("CreateRestoreJob"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRestoreJobResponse Alibabacloud_Sas20181203::Client::createRestoreJob(shared_ptr<CreateRestoreJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRestoreJobWithOptions(request, runtime);
}

CreateSasOrderResponse Alibabacloud_Sas20181203::Client::createSasOrderWithOptions(shared_ptr<CreateSasOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSasOrderResponse(doRPCRequest(make_shared<string>("CreateSasOrder"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSasOrderResponse Alibabacloud_Sas20181203::Client::createSasOrder(shared_ptr<CreateSasOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSasOrderWithOptions(request, runtime);
}

CreateServiceLinkedRoleResponse Alibabacloud_Sas20181203::Client::createServiceLinkedRoleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return CreateServiceLinkedRoleResponse(doRPCRequest(make_shared<string>("CreateServiceLinkedRole"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateServiceLinkedRoleResponse Alibabacloud_Sas20181203::Client::createServiceLinkedRole() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceLinkedRoleWithOptions(runtime);
}

CreateSimilarSecurityEventsQueryTaskResponse Alibabacloud_Sas20181203::Client::createSimilarSecurityEventsQueryTaskWithOptions(shared_ptr<CreateSimilarSecurityEventsQueryTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSimilarSecurityEventsQueryTaskResponse(doRPCRequest(make_shared<string>("CreateSimilarSecurityEventsQueryTask"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSimilarSecurityEventsQueryTaskResponse Alibabacloud_Sas20181203::Client::createSimilarSecurityEventsQueryTask(shared_ptr<CreateSimilarSecurityEventsQueryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSimilarSecurityEventsQueryTaskWithOptions(request, runtime);
}

CreateUniBackupPolicyResponse Alibabacloud_Sas20181203::Client::createUniBackupPolicyWithOptions(shared_ptr<CreateUniBackupPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateUniBackupPolicyShrinkRequest> request = make_shared<CreateUniBackupPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->fullPlan)) {
    request->fullPlanShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fullPlan, make_shared<string>("FullPlan"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->incPlan)) {
    request->incPlanShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->incPlan, make_shared<string>("IncPlan"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUniBackupPolicyResponse(doRPCRequest(make_shared<string>("CreateUniBackupPolicy"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUniBackupPolicyResponse Alibabacloud_Sas20181203::Client::createUniBackupPolicy(shared_ptr<CreateUniBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUniBackupPolicyWithOptions(request, runtime);
}

CreateUniRestorePlanResponse Alibabacloud_Sas20181203::Client::createUniRestorePlanWithOptions(shared_ptr<CreateUniRestorePlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUniRestorePlanResponse(doRPCRequest(make_shared<string>("CreateUniRestorePlan"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUniRestorePlanResponse Alibabacloud_Sas20181203::Client::createUniRestorePlan(shared_ptr<CreateUniRestorePlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUniRestorePlanWithOptions(request, runtime);
}

DeleteAssetResponse Alibabacloud_Sas20181203::Client::deleteAssetWithOptions(shared_ptr<DeleteAssetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAssetResponse(doRPCRequest(make_shared<string>("DeleteAsset"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAssetResponse Alibabacloud_Sas20181203::Client::deleteAsset(shared_ptr<DeleteAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAssetWithOptions(request, runtime);
}

DeleteBackupPolicyResponse Alibabacloud_Sas20181203::Client::deleteBackupPolicyWithOptions(shared_ptr<DeleteBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBackupPolicyResponse(doRPCRequest(make_shared<string>("DeleteBackupPolicy"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBackupPolicyResponse Alibabacloud_Sas20181203::Client::deleteBackupPolicy(shared_ptr<DeleteBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBackupPolicyWithOptions(request, runtime);
}

DeleteBackupPolicyMachineResponse Alibabacloud_Sas20181203::Client::deleteBackupPolicyMachineWithOptions(shared_ptr<DeleteBackupPolicyMachineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBackupPolicyMachineResponse(doRPCRequest(make_shared<string>("DeleteBackupPolicyMachine"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBackupPolicyMachineResponse Alibabacloud_Sas20181203::Client::deleteBackupPolicyMachine(shared_ptr<DeleteBackupPolicyMachineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBackupPolicyMachineWithOptions(request, runtime);
}

DeleteGroupResponse Alibabacloud_Sas20181203::Client::deleteGroupWithOptions(shared_ptr<DeleteGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteGroupResponse(doRPCRequest(make_shared<string>("DeleteGroup"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteGroupResponse Alibabacloud_Sas20181203::Client::deleteGroup(shared_ptr<DeleteGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGroupWithOptions(request, runtime);
}

DeleteLoginBaseConfigResponse Alibabacloud_Sas20181203::Client::deleteLoginBaseConfigWithOptions(shared_ptr<DeleteLoginBaseConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLoginBaseConfigResponse(doRPCRequest(make_shared<string>("DeleteLoginBaseConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLoginBaseConfigResponse Alibabacloud_Sas20181203::Client::deleteLoginBaseConfig(shared_ptr<DeleteLoginBaseConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLoginBaseConfigWithOptions(request, runtime);
}

DeleteStrategyResponse Alibabacloud_Sas20181203::Client::deleteStrategyWithOptions(shared_ptr<DeleteStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteStrategyResponse(doRPCRequest(make_shared<string>("DeleteStrategy"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteStrategyResponse Alibabacloud_Sas20181203::Client::deleteStrategy(shared_ptr<DeleteStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStrategyWithOptions(request, runtime);
}

DeleteTagWithUuidResponse Alibabacloud_Sas20181203::Client::deleteTagWithUuidWithOptions(shared_ptr<DeleteTagWithUuidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTagWithUuidResponse(doRPCRequest(make_shared<string>("DeleteTagWithUuid"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTagWithUuidResponse Alibabacloud_Sas20181203::Client::deleteTagWithUuid(shared_ptr<DeleteTagWithUuidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTagWithUuidWithOptions(request, runtime);
}

DeleteUniBackupPolicyResponse Alibabacloud_Sas20181203::Client::deleteUniBackupPolicyWithOptions(shared_ptr<DeleteUniBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteUniBackupPolicyResponse(doRPCRequest(make_shared<string>("DeleteUniBackupPolicy"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUniBackupPolicyResponse Alibabacloud_Sas20181203::Client::deleteUniBackupPolicy(shared_ptr<DeleteUniBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUniBackupPolicyWithOptions(request, runtime);
}

DeleteVpcHoneyPotResponse Alibabacloud_Sas20181203::Client::deleteVpcHoneyPotWithOptions(shared_ptr<DeleteVpcHoneyPotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVpcHoneyPotResponse(doRPCRequest(make_shared<string>("DeleteVpcHoneyPot"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVpcHoneyPotResponse Alibabacloud_Sas20181203::Client::deleteVpcHoneyPot(shared_ptr<DeleteVpcHoneyPotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVpcHoneyPotWithOptions(request, runtime);
}

DescribeAccesskeyLeakListResponse Alibabacloud_Sas20181203::Client::describeAccesskeyLeakListWithOptions(shared_ptr<DescribeAccesskeyLeakListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccesskeyLeakListResponse(doRPCRequest(make_shared<string>("DescribeAccesskeyLeakList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccesskeyLeakListResponse Alibabacloud_Sas20181203::Client::describeAccesskeyLeakList(shared_ptr<DescribeAccesskeyLeakListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccesskeyLeakListWithOptions(request, runtime);
}

DescribeAffectedMaliciousFileImagesResponse Alibabacloud_Sas20181203::Client::describeAffectedMaliciousFileImagesWithOptions(shared_ptr<DescribeAffectedMaliciousFileImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAffectedMaliciousFileImagesResponse(doRPCRequest(make_shared<string>("DescribeAffectedMaliciousFileImages"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAffectedMaliciousFileImagesResponse Alibabacloud_Sas20181203::Client::describeAffectedMaliciousFileImages(shared_ptr<DescribeAffectedMaliciousFileImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAffectedMaliciousFileImagesWithOptions(request, runtime);
}

DescribeAlarmEventDetailResponse Alibabacloud_Sas20181203::Client::describeAlarmEventDetailWithOptions(shared_ptr<DescribeAlarmEventDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAlarmEventDetailResponse(doRPCRequest(make_shared<string>("DescribeAlarmEventDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAlarmEventDetailResponse Alibabacloud_Sas20181203::Client::describeAlarmEventDetail(shared_ptr<DescribeAlarmEventDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlarmEventDetailWithOptions(request, runtime);
}

DescribeAlarmEventListResponse Alibabacloud_Sas20181203::Client::describeAlarmEventListWithOptions(shared_ptr<DescribeAlarmEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAlarmEventListResponse(doRPCRequest(make_shared<string>("DescribeAlarmEventList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAlarmEventListResponse Alibabacloud_Sas20181203::Client::describeAlarmEventList(shared_ptr<DescribeAlarmEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlarmEventListWithOptions(request, runtime);
}

DescribeAlarmEventStackInfoResponse Alibabacloud_Sas20181203::Client::describeAlarmEventStackInfoWithOptions(shared_ptr<DescribeAlarmEventStackInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAlarmEventStackInfoResponse(doRPCRequest(make_shared<string>("DescribeAlarmEventStackInfo"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAlarmEventStackInfoResponse Alibabacloud_Sas20181203::Client::describeAlarmEventStackInfo(shared_ptr<DescribeAlarmEventStackInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlarmEventStackInfoWithOptions(request, runtime);
}

DescribeAllEntityResponse Alibabacloud_Sas20181203::Client::describeAllEntityWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeAllEntityResponse(doRPCRequest(make_shared<string>("DescribeAllEntity"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAllEntityResponse Alibabacloud_Sas20181203::Client::describeAllEntity() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllEntityWithOptions(runtime);
}

DescribeAllGroupsResponse Alibabacloud_Sas20181203::Client::describeAllGroupsWithOptions(shared_ptr<DescribeAllGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAllGroupsResponse(doRPCRequest(make_shared<string>("DescribeAllGroups"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAllGroupsResponse Alibabacloud_Sas20181203::Client::describeAllGroups(shared_ptr<DescribeAllGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllGroupsWithOptions(request, runtime);
}

DescribeAllRegionsStatisticsResponse Alibabacloud_Sas20181203::Client::describeAllRegionsStatisticsWithOptions(shared_ptr<DescribeAllRegionsStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAllRegionsStatisticsResponse(doRPCRequest(make_shared<string>("DescribeAllRegionsStatistics"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAllRegionsStatisticsResponse Alibabacloud_Sas20181203::Client::describeAllRegionsStatistics(shared_ptr<DescribeAllRegionsStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllRegionsStatisticsWithOptions(request, runtime);
}

DescribeAntiBruteForceRulesResponse Alibabacloud_Sas20181203::Client::describeAntiBruteForceRulesWithOptions(shared_ptr<DescribeAntiBruteForceRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAntiBruteForceRulesResponse(doRPCRequest(make_shared<string>("DescribeAntiBruteForceRules"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAntiBruteForceRulesResponse Alibabacloud_Sas20181203::Client::describeAntiBruteForceRules(shared_ptr<DescribeAntiBruteForceRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntiBruteForceRulesWithOptions(request, runtime);
}

DescribeAssetDetailByUuidResponse Alibabacloud_Sas20181203::Client::describeAssetDetailByUuidWithOptions(shared_ptr<DescribeAssetDetailByUuidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAssetDetailByUuidResponse(doRPCRequest(make_shared<string>("DescribeAssetDetailByUuid"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAssetDetailByUuidResponse Alibabacloud_Sas20181203::Client::describeAssetDetailByUuid(shared_ptr<DescribeAssetDetailByUuidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAssetDetailByUuidWithOptions(request, runtime);
}

DescribeAssetDetailByUuidsResponse Alibabacloud_Sas20181203::Client::describeAssetDetailByUuidsWithOptions(shared_ptr<DescribeAssetDetailByUuidsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAssetDetailByUuidsResponse(doRPCRequest(make_shared<string>("DescribeAssetDetailByUuids"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAssetDetailByUuidsResponse Alibabacloud_Sas20181203::Client::describeAssetDetailByUuids(shared_ptr<DescribeAssetDetailByUuidsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAssetDetailByUuidsWithOptions(request, runtime);
}

DescribeAssetSummaryResponse Alibabacloud_Sas20181203::Client::describeAssetSummaryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeAssetSummaryResponse(doRPCRequest(make_shared<string>("DescribeAssetSummary"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAssetSummaryResponse Alibabacloud_Sas20181203::Client::describeAssetSummary() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAssetSummaryWithOptions(runtime);
}

DescribeAutoDelConfigResponse Alibabacloud_Sas20181203::Client::describeAutoDelConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeAutoDelConfigResponse(doRPCRequest(make_shared<string>("DescribeAutoDelConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAutoDelConfigResponse Alibabacloud_Sas20181203::Client::describeAutoDelConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoDelConfigWithOptions(runtime);
}

DescribeBackupClientsResponse Alibabacloud_Sas20181203::Client::describeBackupClientsWithOptions(shared_ptr<DescribeBackupClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupClientsResponse(doRPCRequest(make_shared<string>("DescribeBackupClients"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupClientsResponse Alibabacloud_Sas20181203::Client::describeBackupClients(shared_ptr<DescribeBackupClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupClientsWithOptions(request, runtime);
}

DescribeBackupDirsResponse Alibabacloud_Sas20181203::Client::describeBackupDirsWithOptions(shared_ptr<DescribeBackupDirsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupDirsResponse(doRPCRequest(make_shared<string>("DescribeBackupDirs"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupDirsResponse Alibabacloud_Sas20181203::Client::describeBackupDirs(shared_ptr<DescribeBackupDirsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupDirsWithOptions(request, runtime);
}

DescribeBackupFilesResponse Alibabacloud_Sas20181203::Client::describeBackupFilesWithOptions(shared_ptr<DescribeBackupFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupFilesResponse(doRPCRequest(make_shared<string>("DescribeBackupFiles"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupFilesResponse Alibabacloud_Sas20181203::Client::describeBackupFiles(shared_ptr<DescribeBackupFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupFilesWithOptions(request, runtime);
}

DescribeBackupMachineStatusResponse Alibabacloud_Sas20181203::Client::describeBackupMachineStatusWithOptions(shared_ptr<DescribeBackupMachineStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupMachineStatusResponse(doRPCRequest(make_shared<string>("DescribeBackupMachineStatus"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupMachineStatusResponse Alibabacloud_Sas20181203::Client::describeBackupMachineStatus(shared_ptr<DescribeBackupMachineStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupMachineStatusWithOptions(request, runtime);
}

DescribeBackupPoliciesResponse Alibabacloud_Sas20181203::Client::describeBackupPoliciesWithOptions(shared_ptr<DescribeBackupPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupPoliciesResponse(doRPCRequest(make_shared<string>("DescribeBackupPolicies"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupPoliciesResponse Alibabacloud_Sas20181203::Client::describeBackupPolicies(shared_ptr<DescribeBackupPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPoliciesWithOptions(request, runtime);
}

DescribeBackupPolicyResponse Alibabacloud_Sas20181203::Client::describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupPolicyResponse(doRPCRequest(make_shared<string>("DescribeBackupPolicy"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupPolicyResponse Alibabacloud_Sas20181203::Client::describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupPolicyWithOptions(request, runtime);
}

DescribeBackupRestoreCountResponse Alibabacloud_Sas20181203::Client::describeBackupRestoreCountWithOptions(shared_ptr<DescribeBackupRestoreCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBackupRestoreCountResponse(doRPCRequest(make_shared<string>("DescribeBackupRestoreCount"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBackupRestoreCountResponse Alibabacloud_Sas20181203::Client::describeBackupRestoreCount(shared_ptr<DescribeBackupRestoreCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBackupRestoreCountWithOptions(request, runtime);
}

DescribeBruteForceSummaryResponse Alibabacloud_Sas20181203::Client::describeBruteForceSummaryWithOptions(shared_ptr<DescribeBruteForceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBruteForceSummaryResponse(doRPCRequest(make_shared<string>("DescribeBruteForceSummary"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBruteForceSummaryResponse Alibabacloud_Sas20181203::Client::describeBruteForceSummary(shared_ptr<DescribeBruteForceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBruteForceSummaryWithOptions(request, runtime);
}

DescribeCheckEcsWarningsResponse Alibabacloud_Sas20181203::Client::describeCheckEcsWarningsWithOptions(shared_ptr<DescribeCheckEcsWarningsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCheckEcsWarningsResponse(doRPCRequest(make_shared<string>("DescribeCheckEcsWarnings"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCheckEcsWarningsResponse Alibabacloud_Sas20181203::Client::describeCheckEcsWarnings(shared_ptr<DescribeCheckEcsWarningsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCheckEcsWarningsWithOptions(request, runtime);
}

DescribeCheckWarningDetailResponse Alibabacloud_Sas20181203::Client::describeCheckWarningDetailWithOptions(shared_ptr<DescribeCheckWarningDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCheckWarningDetailResponse(doRPCRequest(make_shared<string>("DescribeCheckWarningDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCheckWarningDetailResponse Alibabacloud_Sas20181203::Client::describeCheckWarningDetail(shared_ptr<DescribeCheckWarningDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCheckWarningDetailWithOptions(request, runtime);
}

DescribeCheckWarningsResponse Alibabacloud_Sas20181203::Client::describeCheckWarningsWithOptions(shared_ptr<DescribeCheckWarningsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCheckWarningsResponse(doRPCRequest(make_shared<string>("DescribeCheckWarnings"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCheckWarningsResponse Alibabacloud_Sas20181203::Client::describeCheckWarnings(shared_ptr<DescribeCheckWarningsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCheckWarningsWithOptions(request, runtime);
}

DescribeCheckWarningSummaryResponse Alibabacloud_Sas20181203::Client::describeCheckWarningSummaryWithOptions(shared_ptr<DescribeCheckWarningSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCheckWarningSummaryResponse(doRPCRequest(make_shared<string>("DescribeCheckWarningSummary"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCheckWarningSummaryResponse Alibabacloud_Sas20181203::Client::describeCheckWarningSummary(shared_ptr<DescribeCheckWarningSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCheckWarningSummaryWithOptions(request, runtime);
}

DescribeCloudCenterInstancesResponse Alibabacloud_Sas20181203::Client::describeCloudCenterInstancesWithOptions(shared_ptr<DescribeCloudCenterInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCloudCenterInstancesResponse(doRPCRequest(make_shared<string>("DescribeCloudCenterInstances"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCloudCenterInstancesResponse Alibabacloud_Sas20181203::Client::describeCloudCenterInstances(shared_ptr<DescribeCloudCenterInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudCenterInstancesWithOptions(request, runtime);
}

DescribeCloudProductFieldStatisticsResponse Alibabacloud_Sas20181203::Client::describeCloudProductFieldStatisticsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeCloudProductFieldStatisticsResponse(doRPCRequest(make_shared<string>("DescribeCloudProductFieldStatistics"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCloudProductFieldStatisticsResponse Alibabacloud_Sas20181203::Client::describeCloudProductFieldStatistics() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudProductFieldStatisticsWithOptions(runtime);
}

DescribeConcernNecessityResponse Alibabacloud_Sas20181203::Client::describeConcernNecessityWithOptions(shared_ptr<DescribeConcernNecessityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeConcernNecessityResponse(doRPCRequest(make_shared<string>("DescribeConcernNecessity"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeConcernNecessityResponse Alibabacloud_Sas20181203::Client::describeConcernNecessity(shared_ptr<DescribeConcernNecessityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConcernNecessityWithOptions(request, runtime);
}

DescribeContainerStatisticsResponse Alibabacloud_Sas20181203::Client::describeContainerStatisticsWithOptions(shared_ptr<DescribeContainerStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeContainerStatisticsResponse(doRPCRequest(make_shared<string>("DescribeContainerStatistics"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeContainerStatisticsResponse Alibabacloud_Sas20181203::Client::describeContainerStatistics(shared_ptr<DescribeContainerStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeContainerStatisticsWithOptions(request, runtime);
}

DescribeCriteriaResponse Alibabacloud_Sas20181203::Client::describeCriteriaWithOptions(shared_ptr<DescribeCriteriaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCriteriaResponse(doRPCRequest(make_shared<string>("DescribeCriteria"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCriteriaResponse Alibabacloud_Sas20181203::Client::describeCriteria(shared_ptr<DescribeCriteriaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCriteriaWithOptions(request, runtime);
}

DescribeDialogMessagesResponse Alibabacloud_Sas20181203::Client::describeDialogMessagesWithOptions(shared_ptr<DescribeDialogMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDialogMessagesResponse(doRPCRequest(make_shared<string>("DescribeDialogMessages"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDialogMessagesResponse Alibabacloud_Sas20181203::Client::describeDialogMessages(shared_ptr<DescribeDialogMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDialogMessagesWithOptions(request, runtime);
}

DescribeDingTalkResponse Alibabacloud_Sas20181203::Client::describeDingTalkWithOptions(shared_ptr<DescribeDingTalkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDingTalkResponse(doRPCRequest(make_shared<string>("DescribeDingTalk"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDingTalkResponse Alibabacloud_Sas20181203::Client::describeDingTalk(shared_ptr<DescribeDingTalkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDingTalkWithOptions(request, runtime);
}

DescribeDomainCountResponse Alibabacloud_Sas20181203::Client::describeDomainCountWithOptions(shared_ptr<DescribeDomainCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainCountResponse(doRPCRequest(make_shared<string>("DescribeDomainCount"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainCountResponse Alibabacloud_Sas20181203::Client::describeDomainCount(shared_ptr<DescribeDomainCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainCountWithOptions(request, runtime);
}

DescribeDomainDetailResponse Alibabacloud_Sas20181203::Client::describeDomainDetailWithOptions(shared_ptr<DescribeDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainDetailResponse(doRPCRequest(make_shared<string>("DescribeDomainDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainDetailResponse Alibabacloud_Sas20181203::Client::describeDomainDetail(shared_ptr<DescribeDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainDetailWithOptions(request, runtime);
}

DescribeDomainListResponse Alibabacloud_Sas20181203::Client::describeDomainListWithOptions(shared_ptr<DescribeDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainListResponse(doRPCRequest(make_shared<string>("DescribeDomainList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainListResponse Alibabacloud_Sas20181203::Client::describeDomainList(shared_ptr<DescribeDomainListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainListWithOptions(request, runtime);
}

DescribeEmgVulItemResponse Alibabacloud_Sas20181203::Client::describeEmgVulItemWithOptions(shared_ptr<DescribeEmgVulItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeEmgVulItemResponse(doRPCRequest(make_shared<string>("DescribeEmgVulItem"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeEmgVulItemResponse Alibabacloud_Sas20181203::Client::describeEmgVulItem(shared_ptr<DescribeEmgVulItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEmgVulItemWithOptions(request, runtime);
}

DescribeExcludeSystemPathResponse Alibabacloud_Sas20181203::Client::describeExcludeSystemPathWithOptions(shared_ptr<DescribeExcludeSystemPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeExcludeSystemPathResponse(doRPCRequest(make_shared<string>("DescribeExcludeSystemPath"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeExcludeSystemPathResponse Alibabacloud_Sas20181203::Client::describeExcludeSystemPath(shared_ptr<DescribeExcludeSystemPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExcludeSystemPathWithOptions(request, runtime);
}

DescribeExportInfoResponse Alibabacloud_Sas20181203::Client::describeExportInfoWithOptions(shared_ptr<DescribeExportInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeExportInfoResponse(doRPCRequest(make_shared<string>("DescribeExportInfo"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeExportInfoResponse Alibabacloud_Sas20181203::Client::describeExportInfo(shared_ptr<DescribeExportInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExportInfoWithOptions(request, runtime);
}

DescribeExposedInstanceCriteriaResponse Alibabacloud_Sas20181203::Client::describeExposedInstanceCriteriaWithOptions(shared_ptr<DescribeExposedInstanceCriteriaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeExposedInstanceCriteriaResponse(doRPCRequest(make_shared<string>("DescribeExposedInstanceCriteria"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeExposedInstanceCriteriaResponse Alibabacloud_Sas20181203::Client::describeExposedInstanceCriteria(shared_ptr<DescribeExposedInstanceCriteriaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExposedInstanceCriteriaWithOptions(request, runtime);
}

DescribeExposedInstanceDetailResponse Alibabacloud_Sas20181203::Client::describeExposedInstanceDetailWithOptions(shared_ptr<DescribeExposedInstanceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeExposedInstanceDetailResponse(doRPCRequest(make_shared<string>("DescribeExposedInstanceDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeExposedInstanceDetailResponse Alibabacloud_Sas20181203::Client::describeExposedInstanceDetail(shared_ptr<DescribeExposedInstanceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExposedInstanceDetailWithOptions(request, runtime);
}

DescribeExposedInstanceListResponse Alibabacloud_Sas20181203::Client::describeExposedInstanceListWithOptions(shared_ptr<DescribeExposedInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeExposedInstanceListResponse(doRPCRequest(make_shared<string>("DescribeExposedInstanceList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeExposedInstanceListResponse Alibabacloud_Sas20181203::Client::describeExposedInstanceList(shared_ptr<DescribeExposedInstanceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExposedInstanceListWithOptions(request, runtime);
}

DescribeExposedRiskNumResponse Alibabacloud_Sas20181203::Client::describeExposedRiskNumWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeExposedRiskNumResponse(doRPCRequest(make_shared<string>("DescribeExposedRiskNum"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeExposedRiskNumResponse Alibabacloud_Sas20181203::Client::describeExposedRiskNum() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExposedRiskNumWithOptions(runtime);
}

DescribeExposedStatisticsResponse Alibabacloud_Sas20181203::Client::describeExposedStatisticsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeExposedStatisticsResponse(doRPCRequest(make_shared<string>("DescribeExposedStatistics"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeExposedStatisticsResponse Alibabacloud_Sas20181203::Client::describeExposedStatistics() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExposedStatisticsWithOptions(runtime);
}

DescribeExposedStatisticsDetailResponse Alibabacloud_Sas20181203::Client::describeExposedStatisticsDetailWithOptions(shared_ptr<DescribeExposedStatisticsDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeExposedStatisticsDetailResponse(doRPCRequest(make_shared<string>("DescribeExposedStatisticsDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeExposedStatisticsDetailResponse Alibabacloud_Sas20181203::Client::describeExposedStatisticsDetail(shared_ptr<DescribeExposedStatisticsDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExposedStatisticsDetailWithOptions(request, runtime);
}

DescribeFieldStatisticsResponse Alibabacloud_Sas20181203::Client::describeFieldStatisticsWithOptions(shared_ptr<DescribeFieldStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFieldStatisticsResponse(doRPCRequest(make_shared<string>("DescribeFieldStatistics"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFieldStatisticsResponse Alibabacloud_Sas20181203::Client::describeFieldStatistics(shared_ptr<DescribeFieldStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFieldStatisticsWithOptions(request, runtime);
}

DescribeFrontVulPatchListResponse Alibabacloud_Sas20181203::Client::describeFrontVulPatchListWithOptions(shared_ptr<DescribeFrontVulPatchListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFrontVulPatchListResponse(doRPCRequest(make_shared<string>("DescribeFrontVulPatchList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFrontVulPatchListResponse Alibabacloud_Sas20181203::Client::describeFrontVulPatchList(shared_ptr<DescribeFrontVulPatchListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFrontVulPatchListWithOptions(request, runtime);
}

DescribeGraph4InvestigationOnlineResponse Alibabacloud_Sas20181203::Client::describeGraph4InvestigationOnlineWithOptions(shared_ptr<DescribeGraph4InvestigationOnlineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGraph4InvestigationOnlineResponse(doRPCRequest(make_shared<string>("DescribeGraph4InvestigationOnline"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGraph4InvestigationOnlineResponse Alibabacloud_Sas20181203::Client::describeGraph4InvestigationOnline(shared_ptr<DescribeGraph4InvestigationOnlineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGraph4InvestigationOnlineWithOptions(request, runtime);
}

DescribeGroupedContainerInstancesResponse Alibabacloud_Sas20181203::Client::describeGroupedContainerInstancesWithOptions(shared_ptr<DescribeGroupedContainerInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupedContainerInstancesResponse(doRPCRequest(make_shared<string>("DescribeGroupedContainerInstances"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupedContainerInstancesResponse Alibabacloud_Sas20181203::Client::describeGroupedContainerInstances(shared_ptr<DescribeGroupedContainerInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupedContainerInstancesWithOptions(request, runtime);
}

DescribeGroupedInstancesResponse Alibabacloud_Sas20181203::Client::describeGroupedInstancesWithOptions(shared_ptr<DescribeGroupedInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupedInstancesResponse(doRPCRequest(make_shared<string>("DescribeGroupedInstances"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupedInstancesResponse Alibabacloud_Sas20181203::Client::describeGroupedInstances(shared_ptr<DescribeGroupedInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupedInstancesWithOptions(request, runtime);
}

DescribeGroupedMaliciousFilesResponse Alibabacloud_Sas20181203::Client::describeGroupedMaliciousFilesWithOptions(shared_ptr<DescribeGroupedMaliciousFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupedMaliciousFilesResponse(doRPCRequest(make_shared<string>("DescribeGroupedMaliciousFiles"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupedMaliciousFilesResponse Alibabacloud_Sas20181203::Client::describeGroupedMaliciousFiles(shared_ptr<DescribeGroupedMaliciousFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupedMaliciousFilesWithOptions(request, runtime);
}

DescribeGroupedTagsResponse Alibabacloud_Sas20181203::Client::describeGroupedTagsWithOptions(shared_ptr<DescribeGroupedTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupedTagsResponse(doRPCRequest(make_shared<string>("DescribeGroupedTags"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupedTagsResponse Alibabacloud_Sas20181203::Client::describeGroupedTags(shared_ptr<DescribeGroupedTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupedTagsWithOptions(request, runtime);
}

DescribeGroupedVulResponse Alibabacloud_Sas20181203::Client::describeGroupedVulWithOptions(shared_ptr<DescribeGroupedVulRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeGroupedVulResponse(doRPCRequest(make_shared<string>("DescribeGroupedVul"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeGroupedVulResponse Alibabacloud_Sas20181203::Client::describeGroupedVul(shared_ptr<DescribeGroupedVulRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupedVulWithOptions(request, runtime);
}

DescribeHoneyPotAuthResponse Alibabacloud_Sas20181203::Client::describeHoneyPotAuthWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeHoneyPotAuthResponse(doRPCRequest(make_shared<string>("DescribeHoneyPotAuth"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHoneyPotAuthResponse Alibabacloud_Sas20181203::Client::describeHoneyPotAuth() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHoneyPotAuthWithOptions(runtime);
}

DescribeHoneyPotSuspStatisticsResponse Alibabacloud_Sas20181203::Client::describeHoneyPotSuspStatisticsWithOptions(shared_ptr<DescribeHoneyPotSuspStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeHoneyPotSuspStatisticsResponse(doRPCRequest(make_shared<string>("DescribeHoneyPotSuspStatistics"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeHoneyPotSuspStatisticsResponse Alibabacloud_Sas20181203::Client::describeHoneyPotSuspStatistics(shared_ptr<DescribeHoneyPotSuspStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHoneyPotSuspStatisticsWithOptions(request, runtime);
}

DescribeImageGroupedVulListResponse Alibabacloud_Sas20181203::Client::describeImageGroupedVulListWithOptions(shared_ptr<DescribeImageGroupedVulListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeImageGroupedVulListResponse(doRPCRequest(make_shared<string>("DescribeImageGroupedVulList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImageGroupedVulListResponse Alibabacloud_Sas20181203::Client::describeImageGroupedVulList(shared_ptr<DescribeImageGroupedVulListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageGroupedVulListWithOptions(request, runtime);
}

DescribeImageScanAuthCountResponse Alibabacloud_Sas20181203::Client::describeImageScanAuthCountWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeImageScanAuthCountResponse(doRPCRequest(make_shared<string>("DescribeImageScanAuthCount"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImageScanAuthCountResponse Alibabacloud_Sas20181203::Client::describeImageScanAuthCount() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageScanAuthCountWithOptions(runtime);
}

DescribeImageStatisticsResponse Alibabacloud_Sas20181203::Client::describeImageStatisticsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeImageStatisticsResponse(doRPCRequest(make_shared<string>("DescribeImageStatistics"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImageStatisticsResponse Alibabacloud_Sas20181203::Client::describeImageStatistics() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageStatisticsWithOptions(runtime);
}

DescribeImageVulListResponse Alibabacloud_Sas20181203::Client::describeImageVulListWithOptions(shared_ptr<DescribeImageVulListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeImageVulListResponse(doRPCRequest(make_shared<string>("DescribeImageVulList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImageVulListResponse Alibabacloud_Sas20181203::Client::describeImageVulList(shared_ptr<DescribeImageVulListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageVulListWithOptions(request, runtime);
}

DescribeInstallCaptchaResponse Alibabacloud_Sas20181203::Client::describeInstallCaptchaWithOptions(shared_ptr<DescribeInstallCaptchaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstallCaptchaResponse(doRPCRequest(make_shared<string>("DescribeInstallCaptcha"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstallCaptchaResponse Alibabacloud_Sas20181203::Client::describeInstallCaptcha(shared_ptr<DescribeInstallCaptchaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstallCaptchaWithOptions(request, runtime);
}

DescribeInstanceAntiBruteForceRulesResponse Alibabacloud_Sas20181203::Client::describeInstanceAntiBruteForceRulesWithOptions(shared_ptr<DescribeInstanceAntiBruteForceRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceAntiBruteForceRulesResponse(doRPCRequest(make_shared<string>("DescribeInstanceAntiBruteForceRules"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceAntiBruteForceRulesResponse Alibabacloud_Sas20181203::Client::describeInstanceAntiBruteForceRules(shared_ptr<DescribeInstanceAntiBruteForceRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAntiBruteForceRulesWithOptions(request, runtime);
}

DescribeInstanceStatisticsResponse Alibabacloud_Sas20181203::Client::describeInstanceStatisticsWithOptions(shared_ptr<DescribeInstanceStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceStatisticsResponse(doRPCRequest(make_shared<string>("DescribeInstanceStatistics"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceStatisticsResponse Alibabacloud_Sas20181203::Client::describeInstanceStatistics(shared_ptr<DescribeInstanceStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceStatisticsWithOptions(request, runtime);
}

DescribeIpInfoResponse Alibabacloud_Sas20181203::Client::describeIpInfoWithOptions(shared_ptr<DescribeIpInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeIpInfoResponse(doRPCRequest(make_shared<string>("DescribeIpInfo"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeIpInfoResponse Alibabacloud_Sas20181203::Client::describeIpInfo(shared_ptr<DescribeIpInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpInfoWithOptions(request, runtime);
}

DescribeLogstoreStorageResponse Alibabacloud_Sas20181203::Client::describeLogstoreStorageWithOptions(shared_ptr<DescribeLogstoreStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLogstoreStorageResponse(doRPCRequest(make_shared<string>("DescribeLogstoreStorage"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLogstoreStorageResponse Alibabacloud_Sas20181203::Client::describeLogstoreStorage(shared_ptr<DescribeLogstoreStorageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogstoreStorageWithOptions(request, runtime);
}

DescribeModuleConfigResponse Alibabacloud_Sas20181203::Client::describeModuleConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeModuleConfigResponse(doRPCRequest(make_shared<string>("DescribeModuleConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeModuleConfigResponse Alibabacloud_Sas20181203::Client::describeModuleConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeModuleConfigWithOptions(runtime);
}

DescribeNoticeConfigResponse Alibabacloud_Sas20181203::Client::describeNoticeConfigWithOptions(shared_ptr<DescribeNoticeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeNoticeConfigResponse(doRPCRequest(make_shared<string>("DescribeNoticeConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeNoticeConfigResponse Alibabacloud_Sas20181203::Client::describeNoticeConfig(shared_ptr<DescribeNoticeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNoticeConfigWithOptions(request, runtime);
}

DescribePropertyCountResponse Alibabacloud_Sas20181203::Client::describePropertyCountWithOptions(shared_ptr<DescribePropertyCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertyCountResponse(doRPCRequest(make_shared<string>("DescribePropertyCount"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertyCountResponse Alibabacloud_Sas20181203::Client::describePropertyCount(shared_ptr<DescribePropertyCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertyCountWithOptions(request, runtime);
}

DescribePropertyCronDetailResponse Alibabacloud_Sas20181203::Client::describePropertyCronDetailWithOptions(shared_ptr<DescribePropertyCronDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertyCronDetailResponse(doRPCRequest(make_shared<string>("DescribePropertyCronDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertyCronDetailResponse Alibabacloud_Sas20181203::Client::describePropertyCronDetail(shared_ptr<DescribePropertyCronDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertyCronDetailWithOptions(request, runtime);
}

DescribePropertyPortDetailResponse Alibabacloud_Sas20181203::Client::describePropertyPortDetailWithOptions(shared_ptr<DescribePropertyPortDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertyPortDetailResponse(doRPCRequest(make_shared<string>("DescribePropertyPortDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertyPortDetailResponse Alibabacloud_Sas20181203::Client::describePropertyPortDetail(shared_ptr<DescribePropertyPortDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertyPortDetailWithOptions(request, runtime);
}

DescribePropertyPortItemResponse Alibabacloud_Sas20181203::Client::describePropertyPortItemWithOptions(shared_ptr<DescribePropertyPortItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertyPortItemResponse(doRPCRequest(make_shared<string>("DescribePropertyPortItem"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertyPortItemResponse Alibabacloud_Sas20181203::Client::describePropertyPortItem(shared_ptr<DescribePropertyPortItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertyPortItemWithOptions(request, runtime);
}

DescribePropertyProcDetailResponse Alibabacloud_Sas20181203::Client::describePropertyProcDetailWithOptions(shared_ptr<DescribePropertyProcDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertyProcDetailResponse(doRPCRequest(make_shared<string>("DescribePropertyProcDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertyProcDetailResponse Alibabacloud_Sas20181203::Client::describePropertyProcDetail(shared_ptr<DescribePropertyProcDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertyProcDetailWithOptions(request, runtime);
}

DescribePropertyProcItemResponse Alibabacloud_Sas20181203::Client::describePropertyProcItemWithOptions(shared_ptr<DescribePropertyProcItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertyProcItemResponse(doRPCRequest(make_shared<string>("DescribePropertyProcItem"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertyProcItemResponse Alibabacloud_Sas20181203::Client::describePropertyProcItem(shared_ptr<DescribePropertyProcItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertyProcItemWithOptions(request, runtime);
}

DescribePropertyScaDetailResponse Alibabacloud_Sas20181203::Client::describePropertyScaDetailWithOptions(shared_ptr<DescribePropertyScaDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertyScaDetailResponse(doRPCRequest(make_shared<string>("DescribePropertyScaDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertyScaDetailResponse Alibabacloud_Sas20181203::Client::describePropertyScaDetail(shared_ptr<DescribePropertyScaDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertyScaDetailWithOptions(request, runtime);
}

DescribePropertySoftwareDetailResponse Alibabacloud_Sas20181203::Client::describePropertySoftwareDetailWithOptions(shared_ptr<DescribePropertySoftwareDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertySoftwareDetailResponse(doRPCRequest(make_shared<string>("DescribePropertySoftwareDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertySoftwareDetailResponse Alibabacloud_Sas20181203::Client::describePropertySoftwareDetail(shared_ptr<DescribePropertySoftwareDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertySoftwareDetailWithOptions(request, runtime);
}

DescribePropertySoftwareItemResponse Alibabacloud_Sas20181203::Client::describePropertySoftwareItemWithOptions(shared_ptr<DescribePropertySoftwareItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertySoftwareItemResponse(doRPCRequest(make_shared<string>("DescribePropertySoftwareItem"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertySoftwareItemResponse Alibabacloud_Sas20181203::Client::describePropertySoftwareItem(shared_ptr<DescribePropertySoftwareItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertySoftwareItemWithOptions(request, runtime);
}

DescribePropertyUsageNewestResponse Alibabacloud_Sas20181203::Client::describePropertyUsageNewestWithOptions(shared_ptr<DescribePropertyUsageNewestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertyUsageNewestResponse(doRPCRequest(make_shared<string>("DescribePropertyUsageNewest"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertyUsageNewestResponse Alibabacloud_Sas20181203::Client::describePropertyUsageNewest(shared_ptr<DescribePropertyUsageNewestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertyUsageNewestWithOptions(request, runtime);
}

DescribePropertyUserDetailResponse Alibabacloud_Sas20181203::Client::describePropertyUserDetailWithOptions(shared_ptr<DescribePropertyUserDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertyUserDetailResponse(doRPCRequest(make_shared<string>("DescribePropertyUserDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertyUserDetailResponse Alibabacloud_Sas20181203::Client::describePropertyUserDetail(shared_ptr<DescribePropertyUserDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertyUserDetailWithOptions(request, runtime);
}

DescribePropertyUserItemResponse Alibabacloud_Sas20181203::Client::describePropertyUserItemWithOptions(shared_ptr<DescribePropertyUserItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePropertyUserItemResponse(doRPCRequest(make_shared<string>("DescribePropertyUserItem"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePropertyUserItemResponse Alibabacloud_Sas20181203::Client::describePropertyUserItem(shared_ptr<DescribePropertyUserItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePropertyUserItemWithOptions(request, runtime);
}

DescribeQuaraFileDownloadInfoResponse Alibabacloud_Sas20181203::Client::describeQuaraFileDownloadInfoWithOptions(shared_ptr<DescribeQuaraFileDownloadInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeQuaraFileDownloadInfoResponse(doRPCRequest(make_shared<string>("DescribeQuaraFileDownloadInfo"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeQuaraFileDownloadInfoResponse Alibabacloud_Sas20181203::Client::describeQuaraFileDownloadInfo(shared_ptr<DescribeQuaraFileDownloadInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQuaraFileDownloadInfoWithOptions(request, runtime);
}

DescribeRestoreJobsResponse Alibabacloud_Sas20181203::Client::describeRestoreJobsWithOptions(shared_ptr<DescribeRestoreJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRestoreJobsResponse(doRPCRequest(make_shared<string>("DescribeRestoreJobs"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRestoreJobsResponse Alibabacloud_Sas20181203::Client::describeRestoreJobs(shared_ptr<DescribeRestoreJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestoreJobsWithOptions(request, runtime);
}

DescribeRestorePlansResponse Alibabacloud_Sas20181203::Client::describeRestorePlansWithOptions(shared_ptr<DescribeRestorePlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRestorePlansResponse(doRPCRequest(make_shared<string>("DescribeRestorePlans"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRestorePlansResponse Alibabacloud_Sas20181203::Client::describeRestorePlans(shared_ptr<DescribeRestorePlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRestorePlansWithOptions(request, runtime);
}

DescribeRiskCheckItemResultResponse Alibabacloud_Sas20181203::Client::describeRiskCheckItemResultWithOptions(shared_ptr<DescribeRiskCheckItemResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRiskCheckItemResultResponse(doRPCRequest(make_shared<string>("DescribeRiskCheckItemResult"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRiskCheckItemResultResponse Alibabacloud_Sas20181203::Client::describeRiskCheckItemResult(shared_ptr<DescribeRiskCheckItemResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskCheckItemResultWithOptions(request, runtime);
}

DescribeRiskCheckResultResponse Alibabacloud_Sas20181203::Client::describeRiskCheckResultWithOptions(shared_ptr<DescribeRiskCheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRiskCheckResultResponse(doRPCRequest(make_shared<string>("DescribeRiskCheckResult"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRiskCheckResultResponse Alibabacloud_Sas20181203::Client::describeRiskCheckResult(shared_ptr<DescribeRiskCheckResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskCheckResultWithOptions(request, runtime);
}

DescribeRiskCheckSummaryResponse Alibabacloud_Sas20181203::Client::describeRiskCheckSummaryWithOptions(shared_ptr<DescribeRiskCheckSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRiskCheckSummaryResponse(doRPCRequest(make_shared<string>("DescribeRiskCheckSummary"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRiskCheckSummaryResponse Alibabacloud_Sas20181203::Client::describeRiskCheckSummary(shared_ptr<DescribeRiskCheckSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskCheckSummaryWithOptions(request, runtime);
}

DescribeRiskItemTypeResponse Alibabacloud_Sas20181203::Client::describeRiskItemTypeWithOptions(shared_ptr<DescribeRiskItemTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRiskItemTypeResponse(doRPCRequest(make_shared<string>("DescribeRiskItemType"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRiskItemTypeResponse Alibabacloud_Sas20181203::Client::describeRiskItemType(shared_ptr<DescribeRiskItemTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskItemTypeWithOptions(request, runtime);
}

DescribeRiskListCheckResultResponse Alibabacloud_Sas20181203::Client::describeRiskListCheckResultWithOptions(shared_ptr<DescribeRiskListCheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRiskListCheckResultResponse(doRPCRequest(make_shared<string>("DescribeRiskListCheckResult"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRiskListCheckResultResponse Alibabacloud_Sas20181203::Client::describeRiskListCheckResult(shared_ptr<DescribeRiskListCheckResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskListCheckResultWithOptions(request, runtime);
}

DescribeScanTaskProgressResponse Alibabacloud_Sas20181203::Client::describeScanTaskProgressWithOptions(shared_ptr<DescribeScanTaskProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScanTaskProgressResponse(doRPCRequest(make_shared<string>("DescribeScanTaskProgress"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScanTaskProgressResponse Alibabacloud_Sas20181203::Client::describeScanTaskProgress(shared_ptr<DescribeScanTaskProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScanTaskProgressWithOptions(request, runtime);
}

DescribeSearchConditionResponse Alibabacloud_Sas20181203::Client::describeSearchConditionWithOptions(shared_ptr<DescribeSearchConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSearchConditionResponse(doRPCRequest(make_shared<string>("DescribeSearchCondition"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSearchConditionResponse Alibabacloud_Sas20181203::Client::describeSearchCondition(shared_ptr<DescribeSearchConditionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSearchConditionWithOptions(request, runtime);
}

DescribeSecureSuggestionResponse Alibabacloud_Sas20181203::Client::describeSecureSuggestionWithOptions(shared_ptr<DescribeSecureSuggestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecureSuggestionResponse(doRPCRequest(make_shared<string>("DescribeSecureSuggestion"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecureSuggestionResponse Alibabacloud_Sas20181203::Client::describeSecureSuggestion(shared_ptr<DescribeSecureSuggestionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecureSuggestionWithOptions(request, runtime);
}

DescribeSecurityCheckScheduleConfigResponse Alibabacloud_Sas20181203::Client::describeSecurityCheckScheduleConfigWithOptions(shared_ptr<DescribeSecurityCheckScheduleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityCheckScheduleConfigResponse(doRPCRequest(make_shared<string>("DescribeSecurityCheckScheduleConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityCheckScheduleConfigResponse Alibabacloud_Sas20181203::Client::describeSecurityCheckScheduleConfig(shared_ptr<DescribeSecurityCheckScheduleConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityCheckScheduleConfigWithOptions(request, runtime);
}

DescribeSecurityEventOperationsResponse Alibabacloud_Sas20181203::Client::describeSecurityEventOperationsWithOptions(shared_ptr<DescribeSecurityEventOperationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityEventOperationsResponse(doRPCRequest(make_shared<string>("DescribeSecurityEventOperations"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityEventOperationsResponse Alibabacloud_Sas20181203::Client::describeSecurityEventOperations(shared_ptr<DescribeSecurityEventOperationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityEventOperationsWithOptions(request, runtime);
}

DescribeSecurityEventOperationStatusResponse Alibabacloud_Sas20181203::Client::describeSecurityEventOperationStatusWithOptions(shared_ptr<DescribeSecurityEventOperationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityEventOperationStatusResponse(doRPCRequest(make_shared<string>("DescribeSecurityEventOperationStatus"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityEventOperationStatusResponse Alibabacloud_Sas20181203::Client::describeSecurityEventOperationStatus(shared_ptr<DescribeSecurityEventOperationStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityEventOperationStatusWithOptions(request, runtime);
}

DescribeSecurityStatInfoResponse Alibabacloud_Sas20181203::Client::describeSecurityStatInfoWithOptions(shared_ptr<DescribeSecurityStatInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecurityStatInfoResponse(doRPCRequest(make_shared<string>("DescribeSecurityStatInfo"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecurityStatInfoResponse Alibabacloud_Sas20181203::Client::describeSecurityStatInfo(shared_ptr<DescribeSecurityStatInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecurityStatInfoWithOptions(request, runtime);
}

DescribeServiceLinkedRoleStatusResponse Alibabacloud_Sas20181203::Client::describeServiceLinkedRoleStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeServiceLinkedRoleStatusResponse(doRPCRequest(make_shared<string>("DescribeServiceLinkedRoleStatus"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeServiceLinkedRoleStatusResponse Alibabacloud_Sas20181203::Client::describeServiceLinkedRoleStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceLinkedRoleStatusWithOptions(runtime);
}

DescribeSimilarEventScenariosResponse Alibabacloud_Sas20181203::Client::describeSimilarEventScenariosWithOptions(shared_ptr<DescribeSimilarEventScenariosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSimilarEventScenariosResponse(doRPCRequest(make_shared<string>("DescribeSimilarEventScenarios"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSimilarEventScenariosResponse Alibabacloud_Sas20181203::Client::describeSimilarEventScenarios(shared_ptr<DescribeSimilarEventScenariosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSimilarEventScenariosWithOptions(request, runtime);
}

DescribeSimilarSecurityEventsResponse Alibabacloud_Sas20181203::Client::describeSimilarSecurityEventsWithOptions(shared_ptr<DescribeSimilarSecurityEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSimilarSecurityEventsResponse(doRPCRequest(make_shared<string>("DescribeSimilarSecurityEvents"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSimilarSecurityEventsResponse Alibabacloud_Sas20181203::Client::describeSimilarSecurityEvents(shared_ptr<DescribeSimilarSecurityEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSimilarSecurityEventsWithOptions(request, runtime);
}

DescribeSnapshotsResponse Alibabacloud_Sas20181203::Client::describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSnapshotsResponse(doRPCRequest(make_shared<string>("DescribeSnapshots"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSnapshotsResponse Alibabacloud_Sas20181203::Client::describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotsWithOptions(request, runtime);
}

DescribeStrategyResponse Alibabacloud_Sas20181203::Client::describeStrategyWithOptions(shared_ptr<DescribeStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStrategyResponse(doRPCRequest(make_shared<string>("DescribeStrategy"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStrategyResponse Alibabacloud_Sas20181203::Client::describeStrategy(shared_ptr<DescribeStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStrategyWithOptions(request, runtime);
}

DescribeStrategyExecDetailResponse Alibabacloud_Sas20181203::Client::describeStrategyExecDetailWithOptions(shared_ptr<DescribeStrategyExecDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStrategyExecDetailResponse(doRPCRequest(make_shared<string>("DescribeStrategyExecDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStrategyExecDetailResponse Alibabacloud_Sas20181203::Client::describeStrategyExecDetail(shared_ptr<DescribeStrategyExecDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStrategyExecDetailWithOptions(request, runtime);
}

DescribeStrategyProcessResponse Alibabacloud_Sas20181203::Client::describeStrategyProcessWithOptions(shared_ptr<DescribeStrategyProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStrategyProcessResponse(doRPCRequest(make_shared<string>("DescribeStrategyProcess"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStrategyProcessResponse Alibabacloud_Sas20181203::Client::describeStrategyProcess(shared_ptr<DescribeStrategyProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStrategyProcessWithOptions(request, runtime);
}

DescribeStrategyTargetResponse Alibabacloud_Sas20181203::Client::describeStrategyTargetWithOptions(shared_ptr<DescribeStrategyTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStrategyTargetResponse(doRPCRequest(make_shared<string>("DescribeStrategyTarget"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStrategyTargetResponse Alibabacloud_Sas20181203::Client::describeStrategyTarget(shared_ptr<DescribeStrategyTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStrategyTargetWithOptions(request, runtime);
}

DescribeSummaryInfoResponse Alibabacloud_Sas20181203::Client::describeSummaryInfoWithOptions(shared_ptr<DescribeSummaryInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSummaryInfoResponse(doRPCRequest(make_shared<string>("DescribeSummaryInfo"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSummaryInfoResponse Alibabacloud_Sas20181203::Client::describeSummaryInfo(shared_ptr<DescribeSummaryInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSummaryInfoWithOptions(request, runtime);
}

DescribeSupportRegionResponse Alibabacloud_Sas20181203::Client::describeSupportRegionWithOptions(shared_ptr<DescribeSupportRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSupportRegionResponse(doRPCRequest(make_shared<string>("DescribeSupportRegion"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSupportRegionResponse Alibabacloud_Sas20181203::Client::describeSupportRegion(shared_ptr<DescribeSupportRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSupportRegionWithOptions(request, runtime);
}

DescribeSuspEventDetailResponse Alibabacloud_Sas20181203::Client::describeSuspEventDetailWithOptions(shared_ptr<DescribeSuspEventDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSuspEventDetailResponse(doRPCRequest(make_shared<string>("DescribeSuspEventDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSuspEventDetailResponse Alibabacloud_Sas20181203::Client::describeSuspEventDetail(shared_ptr<DescribeSuspEventDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSuspEventDetailWithOptions(request, runtime);
}

DescribeSuspEventQuaraFilesResponse Alibabacloud_Sas20181203::Client::describeSuspEventQuaraFilesWithOptions(shared_ptr<DescribeSuspEventQuaraFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSuspEventQuaraFilesResponse(doRPCRequest(make_shared<string>("DescribeSuspEventQuaraFiles"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSuspEventQuaraFilesResponse Alibabacloud_Sas20181203::Client::describeSuspEventQuaraFiles(shared_ptr<DescribeSuspEventQuaraFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSuspEventQuaraFilesWithOptions(request, runtime);
}

DescribeSuspEventsResponse Alibabacloud_Sas20181203::Client::describeSuspEventsWithOptions(shared_ptr<DescribeSuspEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSuspEventsResponse(doRPCRequest(make_shared<string>("DescribeSuspEvents"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSuspEventsResponse Alibabacloud_Sas20181203::Client::describeSuspEvents(shared_ptr<DescribeSuspEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSuspEventsWithOptions(request, runtime);
}

DescribeUniBackupDatabaseResponse Alibabacloud_Sas20181203::Client::describeUniBackupDatabaseWithOptions(shared_ptr<DescribeUniBackupDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUniBackupDatabaseResponse(doRPCRequest(make_shared<string>("DescribeUniBackupDatabase"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUniBackupDatabaseResponse Alibabacloud_Sas20181203::Client::describeUniBackupDatabase(shared_ptr<DescribeUniBackupDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUniBackupDatabaseWithOptions(request, runtime);
}

DescribeUniBackupPoliciesResponse Alibabacloud_Sas20181203::Client::describeUniBackupPoliciesWithOptions(shared_ptr<DescribeUniBackupPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUniBackupPoliciesResponse(doRPCRequest(make_shared<string>("DescribeUniBackupPolicies"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUniBackupPoliciesResponse Alibabacloud_Sas20181203::Client::describeUniBackupPolicies(shared_ptr<DescribeUniBackupPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUniBackupPoliciesWithOptions(request, runtime);
}

DescribeUniBackupPolicyDetailResponse Alibabacloud_Sas20181203::Client::describeUniBackupPolicyDetailWithOptions(shared_ptr<DescribeUniBackupPolicyDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUniBackupPolicyDetailResponse(doRPCRequest(make_shared<string>("DescribeUniBackupPolicyDetail"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUniBackupPolicyDetailResponse Alibabacloud_Sas20181203::Client::describeUniBackupPolicyDetail(shared_ptr<DescribeUniBackupPolicyDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUniBackupPolicyDetailWithOptions(request, runtime);
}

DescribeUniBackupStatisticsResponse Alibabacloud_Sas20181203::Client::describeUniBackupStatisticsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeUniBackupStatisticsResponse(doRPCRequest(make_shared<string>("DescribeUniBackupStatistics"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUniBackupStatisticsResponse Alibabacloud_Sas20181203::Client::describeUniBackupStatistics() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUniBackupStatisticsWithOptions(runtime);
}

DescribeUniRecoverableListResponse Alibabacloud_Sas20181203::Client::describeUniRecoverableListWithOptions(shared_ptr<DescribeUniRecoverableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUniRecoverableListResponse(doRPCRequest(make_shared<string>("DescribeUniRecoverableList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUniRecoverableListResponse Alibabacloud_Sas20181203::Client::describeUniRecoverableList(shared_ptr<DescribeUniRecoverableListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUniRecoverableListWithOptions(request, runtime);
}

DescribeUniSupportRegionResponse Alibabacloud_Sas20181203::Client::describeUniSupportRegionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeUniSupportRegionResponse(doRPCRequest(make_shared<string>("DescribeUniSupportRegion"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUniSupportRegionResponse Alibabacloud_Sas20181203::Client::describeUniSupportRegion() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUniSupportRegionWithOptions(runtime);
}

DescribeUserBackupMachinesResponse Alibabacloud_Sas20181203::Client::describeUserBackupMachinesWithOptions(shared_ptr<DescribeUserBackupMachinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserBackupMachinesResponse(doRPCRequest(make_shared<string>("DescribeUserBackupMachines"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserBackupMachinesResponse Alibabacloud_Sas20181203::Client::describeUserBackupMachines(shared_ptr<DescribeUserBackupMachinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserBackupMachinesWithOptions(request, runtime);
}

DescribeUserBaselineAuthorizationResponse Alibabacloud_Sas20181203::Client::describeUserBaselineAuthorizationWithOptions(shared_ptr<DescribeUserBaselineAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserBaselineAuthorizationResponse(doRPCRequest(make_shared<string>("DescribeUserBaselineAuthorization"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserBaselineAuthorizationResponse Alibabacloud_Sas20181203::Client::describeUserBaselineAuthorization(shared_ptr<DescribeUserBaselineAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserBaselineAuthorizationWithOptions(request, runtime);
}

DescribeUserLayoutAuthorizationResponse Alibabacloud_Sas20181203::Client::describeUserLayoutAuthorizationWithOptions(shared_ptr<DescribeUserLayoutAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserLayoutAuthorizationResponse(doRPCRequest(make_shared<string>("DescribeUserLayoutAuthorization"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserLayoutAuthorizationResponse Alibabacloud_Sas20181203::Client::describeUserLayoutAuthorization(shared_ptr<DescribeUserLayoutAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserLayoutAuthorizationWithOptions(request, runtime);
}

DescribeUuidsByVulNamesResponse Alibabacloud_Sas20181203::Client::describeUuidsByVulNamesWithOptions(shared_ptr<DescribeUuidsByVulNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUuidsByVulNamesResponse(doRPCRequest(make_shared<string>("DescribeUuidsByVulNames"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUuidsByVulNamesResponse Alibabacloud_Sas20181203::Client::describeUuidsByVulNames(shared_ptr<DescribeUuidsByVulNamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUuidsByVulNamesWithOptions(request, runtime);
}

DescribeVersionConfigResponse Alibabacloud_Sas20181203::Client::describeVersionConfigWithOptions(shared_ptr<DescribeVersionConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVersionConfigResponse(doRPCRequest(make_shared<string>("DescribeVersionConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVersionConfigResponse Alibabacloud_Sas20181203::Client::describeVersionConfig(shared_ptr<DescribeVersionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVersionConfigWithOptions(request, runtime);
}

DescribeVolDingdingMessageResponse Alibabacloud_Sas20181203::Client::describeVolDingdingMessageWithOptions(shared_ptr<DescribeVolDingdingMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVolDingdingMessageResponse(doRPCRequest(make_shared<string>("DescribeVolDingdingMessage"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVolDingdingMessageResponse Alibabacloud_Sas20181203::Client::describeVolDingdingMessage(shared_ptr<DescribeVolDingdingMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVolDingdingMessageWithOptions(request, runtime);
}

DescribeVpcHoneyPotCriteriaResponse Alibabacloud_Sas20181203::Client::describeVpcHoneyPotCriteriaWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeVpcHoneyPotCriteriaResponse(doRPCRequest(make_shared<string>("DescribeVpcHoneyPotCriteria"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVpcHoneyPotCriteriaResponse Alibabacloud_Sas20181203::Client::describeVpcHoneyPotCriteria() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcHoneyPotCriteriaWithOptions(runtime);
}

DescribeVpcHoneyPotListResponse Alibabacloud_Sas20181203::Client::describeVpcHoneyPotListWithOptions(shared_ptr<DescribeVpcHoneyPotListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVpcHoneyPotListResponse(doRPCRequest(make_shared<string>("DescribeVpcHoneyPotList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVpcHoneyPotListResponse Alibabacloud_Sas20181203::Client::describeVpcHoneyPotList(shared_ptr<DescribeVpcHoneyPotListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcHoneyPotListWithOptions(request, runtime);
}

DescribeVpcListResponse Alibabacloud_Sas20181203::Client::describeVpcListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeVpcListResponse(doRPCRequest(make_shared<string>("DescribeVpcList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVpcListResponse Alibabacloud_Sas20181203::Client::describeVpcList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcListWithOptions(runtime);
}

DescribeVulDetailsResponse Alibabacloud_Sas20181203::Client::describeVulDetailsWithOptions(shared_ptr<DescribeVulDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVulDetailsResponse(doRPCRequest(make_shared<string>("DescribeVulDetails"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVulDetailsResponse Alibabacloud_Sas20181203::Client::describeVulDetails(shared_ptr<DescribeVulDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVulDetailsWithOptions(request, runtime);
}

DescribeVulListResponse Alibabacloud_Sas20181203::Client::describeVulListWithOptions(shared_ptr<DescribeVulListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVulListResponse(doRPCRequest(make_shared<string>("DescribeVulList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVulListResponse Alibabacloud_Sas20181203::Client::describeVulList(shared_ptr<DescribeVulListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVulListWithOptions(request, runtime);
}

DescribeVulWhitelistResponse Alibabacloud_Sas20181203::Client::describeVulWhitelistWithOptions(shared_ptr<DescribeVulWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVulWhitelistResponse(doRPCRequest(make_shared<string>("DescribeVulWhitelist"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVulWhitelistResponse Alibabacloud_Sas20181203::Client::describeVulWhitelist(shared_ptr<DescribeVulWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVulWhitelistWithOptions(request, runtime);
}

DescribeWarningMachinesResponse Alibabacloud_Sas20181203::Client::describeWarningMachinesWithOptions(shared_ptr<DescribeWarningMachinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeWarningMachinesResponse(doRPCRequest(make_shared<string>("DescribeWarningMachines"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeWarningMachinesResponse Alibabacloud_Sas20181203::Client::describeWarningMachines(shared_ptr<DescribeWarningMachinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWarningMachinesWithOptions(request, runtime);
}

DescribeWebLockBindListResponse Alibabacloud_Sas20181203::Client::describeWebLockBindListWithOptions(shared_ptr<DescribeWebLockBindListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeWebLockBindListResponse(doRPCRequest(make_shared<string>("DescribeWebLockBindList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeWebLockBindListResponse Alibabacloud_Sas20181203::Client::describeWebLockBindList(shared_ptr<DescribeWebLockBindListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWebLockBindListWithOptions(request, runtime);
}

DescribeWebLockConfigListResponse Alibabacloud_Sas20181203::Client::describeWebLockConfigListWithOptions(shared_ptr<DescribeWebLockConfigListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeWebLockConfigListResponse(doRPCRequest(make_shared<string>("DescribeWebLockConfigList"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeWebLockConfigListResponse Alibabacloud_Sas20181203::Client::describeWebLockConfigList(shared_ptr<DescribeWebLockConfigListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWebLockConfigListWithOptions(request, runtime);
}

ExecStrategyResponse Alibabacloud_Sas20181203::Client::execStrategyWithOptions(shared_ptr<ExecStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecStrategyResponse(doRPCRequest(make_shared<string>("ExecStrategy"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecStrategyResponse Alibabacloud_Sas20181203::Client::execStrategy(shared_ptr<ExecStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return execStrategyWithOptions(request, runtime);
}

ExportRecordResponse Alibabacloud_Sas20181203::Client::exportRecordWithOptions(shared_ptr<ExportRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExportRecordResponse(doRPCRequest(make_shared<string>("ExportRecord"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExportRecordResponse Alibabacloud_Sas20181203::Client::exportRecord(shared_ptr<ExportRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportRecordWithOptions(request, runtime);
}

FixCheckWarningsResponse Alibabacloud_Sas20181203::Client::fixCheckWarningsWithOptions(shared_ptr<FixCheckWarningsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FixCheckWarningsResponse(doRPCRequest(make_shared<string>("FixCheckWarnings"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FixCheckWarningsResponse Alibabacloud_Sas20181203::Client::fixCheckWarnings(shared_ptr<FixCheckWarningsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fixCheckWarningsWithOptions(request, runtime);
}

GetBackupStorageCountResponse Alibabacloud_Sas20181203::Client::getBackupStorageCountWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return GetBackupStorageCountResponse(doRPCRequest(make_shared<string>("GetBackupStorageCount"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBackupStorageCountResponse Alibabacloud_Sas20181203::Client::getBackupStorageCount() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBackupStorageCountWithOptions(runtime);
}

GetIncIOCsResponse Alibabacloud_Sas20181203::Client::getIncIOCsWithOptions(shared_ptr<GetIncIOCsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetIncIOCsResponse(doRPCRequest(make_shared<string>("GetIncIOCs"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetIncIOCsResponse Alibabacloud_Sas20181203::Client::getIncIOCs(shared_ptr<GetIncIOCsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIncIOCsWithOptions(request, runtime);
}

GetIOCsResponse Alibabacloud_Sas20181203::Client::getIOCsWithOptions(shared_ptr<GetIOCsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetIOCsResponse(doRPCRequest(make_shared<string>("GetIOCs"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetIOCsResponse Alibabacloud_Sas20181203::Client::getIOCs(shared_ptr<GetIOCsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIOCsWithOptions(request, runtime);
}

GetLocalInstallScriptResponse Alibabacloud_Sas20181203::Client::getLocalInstallScriptWithOptions(shared_ptr<GetLocalInstallScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLocalInstallScriptResponse(doRPCRequest(make_shared<string>("GetLocalInstallScript"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLocalInstallScriptResponse Alibabacloud_Sas20181203::Client::getLocalInstallScript(shared_ptr<GetLocalInstallScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLocalInstallScriptWithOptions(request, runtime);
}

GetLocalUninstallScriptResponse Alibabacloud_Sas20181203::Client::getLocalUninstallScriptWithOptions(shared_ptr<GetLocalUninstallScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLocalUninstallScriptResponse(doRPCRequest(make_shared<string>("GetLocalUninstallScript"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLocalUninstallScriptResponse Alibabacloud_Sas20181203::Client::getLocalUninstallScript(shared_ptr<GetLocalUninstallScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLocalUninstallScriptWithOptions(request, runtime);
}

GetSuspiciousStatisticsResponse Alibabacloud_Sas20181203::Client::getSuspiciousStatisticsWithOptions(shared_ptr<GetSuspiciousStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSuspiciousStatisticsResponse(doRPCRequest(make_shared<string>("GetSuspiciousStatistics"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSuspiciousStatisticsResponse Alibabacloud_Sas20181203::Client::getSuspiciousStatistics(shared_ptr<GetSuspiciousStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSuspiciousStatisticsWithOptions(request, runtime);
}

GetVulStatisticsResponse Alibabacloud_Sas20181203::Client::getVulStatisticsWithOptions(shared_ptr<GetVulStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetVulStatisticsResponse(doRPCRequest(make_shared<string>("GetVulStatistics"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVulStatisticsResponse Alibabacloud_Sas20181203::Client::getVulStatistics(shared_ptr<GetVulStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVulStatisticsWithOptions(request, runtime);
}

HandleSecurityEventsResponse Alibabacloud_Sas20181203::Client::handleSecurityEventsWithOptions(shared_ptr<HandleSecurityEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HandleSecurityEventsResponse(doRPCRequest(make_shared<string>("HandleSecurityEvents"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HandleSecurityEventsResponse Alibabacloud_Sas20181203::Client::handleSecurityEvents(shared_ptr<HandleSecurityEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return handleSecurityEventsWithOptions(request, runtime);
}

HandleSimilarSecurityEventsResponse Alibabacloud_Sas20181203::Client::handleSimilarSecurityEventsWithOptions(shared_ptr<HandleSimilarSecurityEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HandleSimilarSecurityEventsResponse(doRPCRequest(make_shared<string>("HandleSimilarSecurityEvents"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HandleSimilarSecurityEventsResponse Alibabacloud_Sas20181203::Client::handleSimilarSecurityEvents(shared_ptr<HandleSimilarSecurityEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return handleSimilarSecurityEventsWithOptions(request, runtime);
}

IgnoreHcCheckWarningsResponse Alibabacloud_Sas20181203::Client::ignoreHcCheckWarningsWithOptions(shared_ptr<IgnoreHcCheckWarningsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return IgnoreHcCheckWarningsResponse(doRPCRequest(make_shared<string>("IgnoreHcCheckWarnings"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

IgnoreHcCheckWarningsResponse Alibabacloud_Sas20181203::Client::ignoreHcCheckWarnings(shared_ptr<IgnoreHcCheckWarningsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ignoreHcCheckWarningsWithOptions(request, runtime);
}

InstallBackupClientResponse Alibabacloud_Sas20181203::Client::installBackupClientWithOptions(shared_ptr<InstallBackupClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InstallBackupClientResponse(doRPCRequest(make_shared<string>("InstallBackupClient"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InstallBackupClientResponse Alibabacloud_Sas20181203::Client::installBackupClient(shared_ptr<InstallBackupClientRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installBackupClientWithOptions(request, runtime);
}

InstallUniBackupAgentResponse Alibabacloud_Sas20181203::Client::installUniBackupAgentWithOptions(shared_ptr<InstallUniBackupAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InstallUniBackupAgentResponse(doRPCRequest(make_shared<string>("InstallUniBackupAgent"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InstallUniBackupAgentResponse Alibabacloud_Sas20181203::Client::installUniBackupAgent(shared_ptr<InstallUniBackupAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installUniBackupAgentWithOptions(request, runtime);
}

ModifyAntiBruteForceRuleResponse Alibabacloud_Sas20181203::Client::modifyAntiBruteForceRuleWithOptions(shared_ptr<ModifyAntiBruteForceRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAntiBruteForceRuleResponse(doRPCRequest(make_shared<string>("ModifyAntiBruteForceRule"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAntiBruteForceRuleResponse Alibabacloud_Sas20181203::Client::modifyAntiBruteForceRule(shared_ptr<ModifyAntiBruteForceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAntiBruteForceRuleWithOptions(request, runtime);
}

ModifyAssetGroupResponse Alibabacloud_Sas20181203::Client::modifyAssetGroupWithOptions(shared_ptr<ModifyAssetGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAssetGroupResponse(doRPCRequest(make_shared<string>("ModifyAssetGroup"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAssetGroupResponse Alibabacloud_Sas20181203::Client::modifyAssetGroup(shared_ptr<ModifyAssetGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAssetGroupWithOptions(request, runtime);
}

ModifyBackupPolicyResponse Alibabacloud_Sas20181203::Client::modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyBackupPolicyShrinkRequest> request = make_shared<ModifyBackupPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->policy)) {
    request->policyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->policy, make_shared<string>("Policy"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBackupPolicyResponse(doRPCRequest(make_shared<string>("ModifyBackupPolicy"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBackupPolicyResponse Alibabacloud_Sas20181203::Client::modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPolicyWithOptions(request, runtime);
}

ModifyBackupPolicyStatusResponse Alibabacloud_Sas20181203::Client::modifyBackupPolicyStatusWithOptions(shared_ptr<ModifyBackupPolicyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBackupPolicyStatusResponse(doRPCRequest(make_shared<string>("ModifyBackupPolicyStatus"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBackupPolicyStatusResponse Alibabacloud_Sas20181203::Client::modifyBackupPolicyStatus(shared_ptr<ModifyBackupPolicyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBackupPolicyStatusWithOptions(request, runtime);
}

ModifyCreateVulWhitelistResponse Alibabacloud_Sas20181203::Client::modifyCreateVulWhitelistWithOptions(shared_ptr<ModifyCreateVulWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyCreateVulWhitelistResponse(doRPCRequest(make_shared<string>("ModifyCreateVulWhitelist"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyCreateVulWhitelistResponse Alibabacloud_Sas20181203::Client::modifyCreateVulWhitelist(shared_ptr<ModifyCreateVulWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCreateVulWhitelistWithOptions(request, runtime);
}

ModifyEmgVulSubmitResponse Alibabacloud_Sas20181203::Client::modifyEmgVulSubmitWithOptions(shared_ptr<ModifyEmgVulSubmitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyEmgVulSubmitResponse(doRPCRequest(make_shared<string>("ModifyEmgVulSubmit"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyEmgVulSubmitResponse Alibabacloud_Sas20181203::Client::modifyEmgVulSubmit(shared_ptr<ModifyEmgVulSubmitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEmgVulSubmitWithOptions(request, runtime);
}

ModifyGroupPropertyResponse Alibabacloud_Sas20181203::Client::modifyGroupPropertyWithOptions(shared_ptr<ModifyGroupPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyGroupPropertyResponse(doRPCRequest(make_shared<string>("ModifyGroupProperty"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyGroupPropertyResponse Alibabacloud_Sas20181203::Client::modifyGroupProperty(shared_ptr<ModifyGroupPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGroupPropertyWithOptions(request, runtime);
}

ModifyInstanceAntiBruteForceRuleResponse Alibabacloud_Sas20181203::Client::modifyInstanceAntiBruteForceRuleWithOptions(shared_ptr<ModifyInstanceAntiBruteForceRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceAntiBruteForceRuleResponse(doRPCRequest(make_shared<string>("ModifyInstanceAntiBruteForceRule"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceAntiBruteForceRuleResponse Alibabacloud_Sas20181203::Client::modifyInstanceAntiBruteForceRule(shared_ptr<ModifyInstanceAntiBruteForceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAntiBruteForceRuleWithOptions(request, runtime);
}

ModifyLoginBaseConfigResponse Alibabacloud_Sas20181203::Client::modifyLoginBaseConfigWithOptions(shared_ptr<ModifyLoginBaseConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLoginBaseConfigResponse(doRPCRequest(make_shared<string>("ModifyLoginBaseConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLoginBaseConfigResponse Alibabacloud_Sas20181203::Client::modifyLoginBaseConfig(shared_ptr<ModifyLoginBaseConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLoginBaseConfigWithOptions(request, runtime);
}

ModifyLoginSwitchConfigResponse Alibabacloud_Sas20181203::Client::modifyLoginSwitchConfigWithOptions(shared_ptr<ModifyLoginSwitchConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLoginSwitchConfigResponse(doRPCRequest(make_shared<string>("ModifyLoginSwitchConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLoginSwitchConfigResponse Alibabacloud_Sas20181203::Client::modifyLoginSwitchConfig(shared_ptr<ModifyLoginSwitchConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLoginSwitchConfigWithOptions(request, runtime);
}

ModifyNoticeConfigResponse Alibabacloud_Sas20181203::Client::modifyNoticeConfigWithOptions(shared_ptr<ModifyNoticeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyNoticeConfigResponse(doRPCRequest(make_shared<string>("ModifyNoticeConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyNoticeConfigResponse Alibabacloud_Sas20181203::Client::modifyNoticeConfig(shared_ptr<ModifyNoticeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNoticeConfigWithOptions(request, runtime);
}

ModifyOpenLogShipperResponse Alibabacloud_Sas20181203::Client::modifyOpenLogShipperWithOptions(shared_ptr<ModifyOpenLogShipperRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyOpenLogShipperResponse(doRPCRequest(make_shared<string>("ModifyOpenLogShipper"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyOpenLogShipperResponse Alibabacloud_Sas20181203::Client::modifyOpenLogShipper(shared_ptr<ModifyOpenLogShipperRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOpenLogShipperWithOptions(request, runtime);
}

ModifyOperateVulResponse Alibabacloud_Sas20181203::Client::modifyOperateVulWithOptions(shared_ptr<ModifyOperateVulRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyOperateVulResponse(doRPCRequest(make_shared<string>("ModifyOperateVul"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyOperateVulResponse Alibabacloud_Sas20181203::Client::modifyOperateVul(shared_ptr<ModifyOperateVulRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOperateVulWithOptions(request, runtime);
}

ModifyPushAllTaskResponse Alibabacloud_Sas20181203::Client::modifyPushAllTaskWithOptions(shared_ptr<ModifyPushAllTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPushAllTaskResponse(doRPCRequest(make_shared<string>("ModifyPushAllTask"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPushAllTaskResponse Alibabacloud_Sas20181203::Client::modifyPushAllTask(shared_ptr<ModifyPushAllTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPushAllTaskWithOptions(request, runtime);
}

ModifyRiskCheckStatusResponse Alibabacloud_Sas20181203::Client::modifyRiskCheckStatusWithOptions(shared_ptr<ModifyRiskCheckStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyRiskCheckStatusResponse(doRPCRequest(make_shared<string>("ModifyRiskCheckStatus"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyRiskCheckStatusResponse Alibabacloud_Sas20181203::Client::modifyRiskCheckStatus(shared_ptr<ModifyRiskCheckStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRiskCheckStatusWithOptions(request, runtime);
}

ModifyRiskSingleResultStatusResponse Alibabacloud_Sas20181203::Client::modifyRiskSingleResultStatusWithOptions(shared_ptr<ModifyRiskSingleResultStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyRiskSingleResultStatusResponse(doRPCRequest(make_shared<string>("ModifyRiskSingleResultStatus"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyRiskSingleResultStatusResponse Alibabacloud_Sas20181203::Client::modifyRiskSingleResultStatus(shared_ptr<ModifyRiskSingleResultStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRiskSingleResultStatusWithOptions(request, runtime);
}

ModifySecurityCheckScheduleConfigResponse Alibabacloud_Sas20181203::Client::modifySecurityCheckScheduleConfigWithOptions(shared_ptr<ModifySecurityCheckScheduleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySecurityCheckScheduleConfigResponse(doRPCRequest(make_shared<string>("ModifySecurityCheckScheduleConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySecurityCheckScheduleConfigResponse Alibabacloud_Sas20181203::Client::modifySecurityCheckScheduleConfig(shared_ptr<ModifySecurityCheckScheduleConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecurityCheckScheduleConfigWithOptions(request, runtime);
}

ModifyStartVulScanResponse Alibabacloud_Sas20181203::Client::modifyStartVulScanWithOptions(shared_ptr<ModifyStartVulScanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyStartVulScanResponse(doRPCRequest(make_shared<string>("ModifyStartVulScan"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyStartVulScanResponse Alibabacloud_Sas20181203::Client::modifyStartVulScan(shared_ptr<ModifyStartVulScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyStartVulScanWithOptions(request, runtime);
}

ModifyStrategyResponse Alibabacloud_Sas20181203::Client::modifyStrategyWithOptions(shared_ptr<ModifyStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyStrategyResponse(doRPCRequest(make_shared<string>("ModifyStrategy"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyStrategyResponse Alibabacloud_Sas20181203::Client::modifyStrategy(shared_ptr<ModifyStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyStrategyWithOptions(request, runtime);
}

ModifyStrategyTargetResponse Alibabacloud_Sas20181203::Client::modifyStrategyTargetWithOptions(shared_ptr<ModifyStrategyTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyStrategyTargetResponse(doRPCRequest(make_shared<string>("ModifyStrategyTarget"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyStrategyTargetResponse Alibabacloud_Sas20181203::Client::modifyStrategyTarget(shared_ptr<ModifyStrategyTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyStrategyTargetWithOptions(request, runtime);
}

ModifyTagWithUuidResponse Alibabacloud_Sas20181203::Client::modifyTagWithUuidWithOptions(shared_ptr<ModifyTagWithUuidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyTagWithUuidResponse(doRPCRequest(make_shared<string>("ModifyTagWithUuid"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyTagWithUuidResponse Alibabacloud_Sas20181203::Client::modifyTagWithUuid(shared_ptr<ModifyTagWithUuidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTagWithUuidWithOptions(request, runtime);
}

ModifyUniBackupPolicyResponse Alibabacloud_Sas20181203::Client::modifyUniBackupPolicyWithOptions(shared_ptr<ModifyUniBackupPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyUniBackupPolicyShrinkRequest> request = make_shared<ModifyUniBackupPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->fullPlan)) {
    request->fullPlanShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fullPlan, make_shared<string>("FullPlan"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->incPlan)) {
    request->incPlanShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->incPlan, make_shared<string>("IncPlan"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyUniBackupPolicyResponse(doRPCRequest(make_shared<string>("ModifyUniBackupPolicy"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyUniBackupPolicyResponse Alibabacloud_Sas20181203::Client::modifyUniBackupPolicy(shared_ptr<ModifyUniBackupPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUniBackupPolicyWithOptions(request, runtime);
}

ModifyVpcHoneyPotResponse Alibabacloud_Sas20181203::Client::modifyVpcHoneyPotWithOptions(shared_ptr<ModifyVpcHoneyPotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyVpcHoneyPotResponse(doRPCRequest(make_shared<string>("ModifyVpcHoneyPot"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyVpcHoneyPotResponse Alibabacloud_Sas20181203::Client::modifyVpcHoneyPot(shared_ptr<ModifyVpcHoneyPotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVpcHoneyPotWithOptions(request, runtime);
}

ModifyVulTargetConfigResponse Alibabacloud_Sas20181203::Client::modifyVulTargetConfigWithOptions(shared_ptr<ModifyVulTargetConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyVulTargetConfigResponse(doRPCRequest(make_shared<string>("ModifyVulTargetConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyVulTargetConfigResponse Alibabacloud_Sas20181203::Client::modifyVulTargetConfig(shared_ptr<ModifyVulTargetConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVulTargetConfigWithOptions(request, runtime);
}

ModifyWebLockCreateConfigResponse Alibabacloud_Sas20181203::Client::modifyWebLockCreateConfigWithOptions(shared_ptr<ModifyWebLockCreateConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyWebLockCreateConfigResponse(doRPCRequest(make_shared<string>("ModifyWebLockCreateConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyWebLockCreateConfigResponse Alibabacloud_Sas20181203::Client::modifyWebLockCreateConfig(shared_ptr<ModifyWebLockCreateConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyWebLockCreateConfigWithOptions(request, runtime);
}

ModifyWebLockDeleteConfigResponse Alibabacloud_Sas20181203::Client::modifyWebLockDeleteConfigWithOptions(shared_ptr<ModifyWebLockDeleteConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyWebLockDeleteConfigResponse(doRPCRequest(make_shared<string>("ModifyWebLockDeleteConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyWebLockDeleteConfigResponse Alibabacloud_Sas20181203::Client::modifyWebLockDeleteConfig(shared_ptr<ModifyWebLockDeleteConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyWebLockDeleteConfigWithOptions(request, runtime);
}

ModifyWebLockStartResponse Alibabacloud_Sas20181203::Client::modifyWebLockStartWithOptions(shared_ptr<ModifyWebLockStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyWebLockStartResponse(doRPCRequest(make_shared<string>("ModifyWebLockStart"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyWebLockStartResponse Alibabacloud_Sas20181203::Client::modifyWebLockStart(shared_ptr<ModifyWebLockStartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyWebLockStartWithOptions(request, runtime);
}

ModifyWebLockStatusResponse Alibabacloud_Sas20181203::Client::modifyWebLockStatusWithOptions(shared_ptr<ModifyWebLockStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyWebLockStatusResponse(doRPCRequest(make_shared<string>("ModifyWebLockStatus"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyWebLockStatusResponse Alibabacloud_Sas20181203::Client::modifyWebLockStatus(shared_ptr<ModifyWebLockStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyWebLockStatusWithOptions(request, runtime);
}

ModifyWebLockUnbindResponse Alibabacloud_Sas20181203::Client::modifyWebLockUnbindWithOptions(shared_ptr<ModifyWebLockUnbindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyWebLockUnbindResponse(doRPCRequest(make_shared<string>("ModifyWebLockUnbind"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyWebLockUnbindResponse Alibabacloud_Sas20181203::Client::modifyWebLockUnbind(shared_ptr<ModifyWebLockUnbindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyWebLockUnbindWithOptions(request, runtime);
}

ModifyWebLockUpdateConfigResponse Alibabacloud_Sas20181203::Client::modifyWebLockUpdateConfigWithOptions(shared_ptr<ModifyWebLockUpdateConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyWebLockUpdateConfigResponse(doRPCRequest(make_shared<string>("ModifyWebLockUpdateConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyWebLockUpdateConfigResponse Alibabacloud_Sas20181203::Client::modifyWebLockUpdateConfig(shared_ptr<ModifyWebLockUpdateConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyWebLockUpdateConfigWithOptions(request, runtime);
}

OperateSuspiciousTargetConfigResponse Alibabacloud_Sas20181203::Client::operateSuspiciousTargetConfigWithOptions(shared_ptr<OperateSuspiciousTargetConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OperateSuspiciousTargetConfigResponse(doRPCRequest(make_shared<string>("OperateSuspiciousTargetConfig"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OperateSuspiciousTargetConfigResponse Alibabacloud_Sas20181203::Client::operateSuspiciousTargetConfig(shared_ptr<OperateSuspiciousTargetConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateSuspiciousTargetConfigWithOptions(request, runtime);
}

OperateVulsResponse Alibabacloud_Sas20181203::Client::operateVulsWithOptions(shared_ptr<OperateVulsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OperateVulsResponse(doRPCRequest(make_shared<string>("OperateVuls"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OperateVulsResponse Alibabacloud_Sas20181203::Client::operateVuls(shared_ptr<OperateVulsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateVulsWithOptions(request, runtime);
}

OperationSuspEventsResponse Alibabacloud_Sas20181203::Client::operationSuspEventsWithOptions(shared_ptr<OperationSuspEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OperationSuspEventsResponse(doRPCRequest(make_shared<string>("OperationSuspEvents"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OperationSuspEventsResponse Alibabacloud_Sas20181203::Client::operationSuspEvents(shared_ptr<OperationSuspEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operationSuspEventsWithOptions(request, runtime);
}

PauseClientResponse Alibabacloud_Sas20181203::Client::pauseClientWithOptions(shared_ptr<PauseClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PauseClientResponse(doRPCRequest(make_shared<string>("PauseClient"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PauseClientResponse Alibabacloud_Sas20181203::Client::pauseClient(shared_ptr<PauseClientRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pauseClientWithOptions(request, runtime);
}

QueryDiscoverDatabaseResponse Alibabacloud_Sas20181203::Client::queryDiscoverDatabaseWithOptions(shared_ptr<QueryDiscoverDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDiscoverDatabaseResponse(doRPCRequest(make_shared<string>("QueryDiscoverDatabase"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDiscoverDatabaseResponse Alibabacloud_Sas20181203::Client::queryDiscoverDatabase(shared_ptr<QueryDiscoverDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDiscoverDatabaseWithOptions(request, runtime);
}

QueryPreCheckDatabaseResponse Alibabacloud_Sas20181203::Client::queryPreCheckDatabaseWithOptions(shared_ptr<QueryPreCheckDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPreCheckDatabaseResponse(doRPCRequest(make_shared<string>("QueryPreCheckDatabase"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPreCheckDatabaseResponse Alibabacloud_Sas20181203::Client::queryPreCheckDatabase(shared_ptr<QueryPreCheckDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPreCheckDatabaseWithOptions(request, runtime);
}

RefreshAssetsResponse Alibabacloud_Sas20181203::Client::refreshAssetsWithOptions(shared_ptr<RefreshAssetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshAssetsResponse(doRPCRequest(make_shared<string>("RefreshAssets"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshAssetsResponse Alibabacloud_Sas20181203::Client::refreshAssets(shared_ptr<RefreshAssetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshAssetsWithOptions(request, runtime);
}

RefreshContainerAssetsResponse Alibabacloud_Sas20181203::Client::refreshContainerAssetsWithOptions(shared_ptr<RefreshContainerAssetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshContainerAssetsResponse(doRPCRequest(make_shared<string>("RefreshContainerAssets"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshContainerAssetsResponse Alibabacloud_Sas20181203::Client::refreshContainerAssets(shared_ptr<RefreshContainerAssetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshContainerAssetsWithOptions(request, runtime);
}

RollbackSuspEventQuaraFileResponse Alibabacloud_Sas20181203::Client::rollbackSuspEventQuaraFileWithOptions(shared_ptr<RollbackSuspEventQuaraFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RollbackSuspEventQuaraFileResponse(doRPCRequest(make_shared<string>("RollbackSuspEventQuaraFile"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RollbackSuspEventQuaraFileResponse Alibabacloud_Sas20181203::Client::rollbackSuspEventQuaraFile(shared_ptr<RollbackSuspEventQuaraFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackSuspEventQuaraFileWithOptions(request, runtime);
}

SasInstallCodeResponse Alibabacloud_Sas20181203::Client::sasInstallCodeWithOptions(shared_ptr<SasInstallCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SasInstallCodeResponse(doRPCRequest(make_shared<string>("SasInstallCode"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SasInstallCodeResponse Alibabacloud_Sas20181203::Client::sasInstallCode(shared_ptr<SasInstallCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sasInstallCodeWithOptions(request, runtime);
}

StartBaselineSecurityCheckResponse Alibabacloud_Sas20181203::Client::startBaselineSecurityCheckWithOptions(shared_ptr<StartBaselineSecurityCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartBaselineSecurityCheckResponse(doRPCRequest(make_shared<string>("StartBaselineSecurityCheck"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartBaselineSecurityCheckResponse Alibabacloud_Sas20181203::Client::startBaselineSecurityCheck(shared_ptr<StartBaselineSecurityCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startBaselineSecurityCheckWithOptions(request, runtime);
}

StartDiscoverDatabaseTaskResponse Alibabacloud_Sas20181203::Client::startDiscoverDatabaseTaskWithOptions(shared_ptr<StartDiscoverDatabaseTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartDiscoverDatabaseTaskResponse(doRPCRequest(make_shared<string>("StartDiscoverDatabaseTask"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartDiscoverDatabaseTaskResponse Alibabacloud_Sas20181203::Client::startDiscoverDatabaseTask(shared_ptr<StartDiscoverDatabaseTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDiscoverDatabaseTaskWithOptions(request, runtime);
}

StartImageVulScanResponse Alibabacloud_Sas20181203::Client::startImageVulScanWithOptions(shared_ptr<StartImageVulScanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartImageVulScanResponse(doRPCRequest(make_shared<string>("StartImageVulScan"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartImageVulScanResponse Alibabacloud_Sas20181203::Client::startImageVulScan(shared_ptr<StartImageVulScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startImageVulScanWithOptions(request, runtime);
}

StartPreCheckDatabaseResponse Alibabacloud_Sas20181203::Client::startPreCheckDatabaseWithOptions(shared_ptr<StartPreCheckDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartPreCheckDatabaseResponse(doRPCRequest(make_shared<string>("StartPreCheckDatabase"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartPreCheckDatabaseResponse Alibabacloud_Sas20181203::Client::startPreCheckDatabase(shared_ptr<StartPreCheckDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startPreCheckDatabaseWithOptions(request, runtime);
}

StartVirusScanTaskResponse Alibabacloud_Sas20181203::Client::startVirusScanTaskWithOptions(shared_ptr<StartVirusScanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartVirusScanTaskResponse(doRPCRequest(make_shared<string>("StartVirusScanTask"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartVirusScanTaskResponse Alibabacloud_Sas20181203::Client::startVirusScanTask(shared_ptr<StartVirusScanTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startVirusScanTaskWithOptions(request, runtime);
}

UnbindAegisResponse Alibabacloud_Sas20181203::Client::unbindAegisWithOptions(shared_ptr<UnbindAegisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindAegisResponse(doRPCRequest(make_shared<string>("UnbindAegis"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindAegisResponse Alibabacloud_Sas20181203::Client::unbindAegis(shared_ptr<UnbindAegisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindAegisWithOptions(request, runtime);
}

UninstallBackupClientResponse Alibabacloud_Sas20181203::Client::uninstallBackupClientWithOptions(shared_ptr<UninstallBackupClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UninstallBackupClientResponse(doRPCRequest(make_shared<string>("UninstallBackupClient"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UninstallBackupClientResponse Alibabacloud_Sas20181203::Client::uninstallBackupClient(shared_ptr<UninstallBackupClientRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uninstallBackupClientWithOptions(request, runtime);
}

UninstallUniBackupAgentResponse Alibabacloud_Sas20181203::Client::uninstallUniBackupAgentWithOptions(shared_ptr<UninstallUniBackupAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UninstallUniBackupAgentResponse(doRPCRequest(make_shared<string>("UninstallUniBackupAgent"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UninstallUniBackupAgentResponse Alibabacloud_Sas20181203::Client::uninstallUniBackupAgent(shared_ptr<UninstallUniBackupAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uninstallUniBackupAgentWithOptions(request, runtime);
}

ValidateHcWarningsResponse Alibabacloud_Sas20181203::Client::validateHcWarningsWithOptions(shared_ptr<ValidateHcWarningsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ValidateHcWarningsResponse(doRPCRequest(make_shared<string>("ValidateHcWarnings"), make_shared<string>("2018-12-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ValidateHcWarningsResponse Alibabacloud_Sas20181203::Client::validateHcWarnings(shared_ptr<ValidateHcWarningsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateHcWarningsWithOptions(request, runtime);
}

