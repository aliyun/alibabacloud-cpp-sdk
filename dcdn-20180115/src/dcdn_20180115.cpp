// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dcdn_20180115.hpp>
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

using namespace Alibabacloud_Dcdn20180115;

Alibabacloud_Dcdn20180115::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "dcdn.aliyuncs.com"},
    {"ap-northeast-2-pop", "dcdn.aliyuncs.com"},
    {"ap-south-1", "dcdn.aliyuncs.com"},
    {"ap-southeast-1", "dcdn.aliyuncs.com"},
    {"ap-southeast-2", "dcdn.aliyuncs.com"},
    {"ap-southeast-3", "dcdn.aliyuncs.com"},
    {"ap-southeast-5", "dcdn.aliyuncs.com"},
    {"cn-beijing", "dcdn.aliyuncs.com"},
    {"cn-beijing-finance-1", "dcdn.aliyuncs.com"},
    {"cn-beijing-finance-pop", "dcdn.aliyuncs.com"},
    {"cn-beijing-gov-1", "dcdn.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "dcdn.aliyuncs.com"},
    {"cn-chengdu", "dcdn.aliyuncs.com"},
    {"cn-edge-1", "dcdn.aliyuncs.com"},
    {"cn-fujian", "dcdn.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "dcdn.aliyuncs.com"},
    {"cn-hangzhou", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-finance", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "dcdn.aliyuncs.com"},
    {"cn-hangzhou-test-306", "dcdn.aliyuncs.com"},
    {"cn-hongkong", "dcdn.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "dcdn.aliyuncs.com"},
    {"cn-huhehaote", "dcdn.aliyuncs.com"},
    {"cn-north-2-gov-1", "dcdn.aliyuncs.com"},
    {"cn-qingdao", "dcdn.aliyuncs.com"},
    {"cn-qingdao-nebula", "dcdn.aliyuncs.com"},
    {"cn-shanghai", "dcdn.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "dcdn.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "dcdn.aliyuncs.com"},
    {"cn-shanghai-finance-1", "dcdn.aliyuncs.com"},
    {"cn-shanghai-inner", "dcdn.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "dcdn.aliyuncs.com"},
    {"cn-shenzhen", "dcdn.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "dcdn.aliyuncs.com"},
    {"cn-shenzhen-inner", "dcdn.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "dcdn.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "dcdn.aliyuncs.com"},
    {"cn-wuhan", "dcdn.aliyuncs.com"},
    {"cn-yushanfang", "dcdn.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "dcdn.aliyuncs.com"},
    {"cn-zhangjiakou", "dcdn.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "dcdn.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "dcdn.aliyuncs.com"},
    {"eu-central-1", "dcdn.aliyuncs.com"},
    {"eu-west-1", "dcdn.aliyuncs.com"},
    {"eu-west-1-oxs", "dcdn.aliyuncs.com"},
    {"me-east-1", "dcdn.aliyuncs.com"},
    {"rus-west-1-pop", "dcdn.aliyuncs.com"},
    {"us-east-1", "dcdn.aliyuncs.com"},
    {"us-west-1", "dcdn.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dcdn"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dcdn20180115::Client::getEndpoint(shared_ptr<string> productId,
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

AddDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::addDcdnDomainWithOptions(shared_ptr<AddDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddDcdnDomainResponse(doRPCRequest(make_shared<string>("AddDcdnDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::addDcdnDomain(shared_ptr<AddDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDcdnDomainWithOptions(request, runtime);
}

AddDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::addDcdnIpaDomainWithOptions(shared_ptr<AddDcdnIpaDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddDcdnIpaDomainResponse(doRPCRequest(make_shared<string>("AddDcdnIpaDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::addDcdnIpaDomain(shared_ptr<AddDcdnIpaDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDcdnIpaDomainWithOptions(request, runtime);
}

BatchAddDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::batchAddDcdnDomainWithOptions(shared_ptr<BatchAddDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchAddDcdnDomainResponse(doRPCRequest(make_shared<string>("BatchAddDcdnDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchAddDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::batchAddDcdnDomain(shared_ptr<BatchAddDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddDcdnDomainWithOptions(request, runtime);
}

BatchDeleteDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchDeleteDcdnDomainConfigsWithOptions(shared_ptr<BatchDeleteDcdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchDeleteDcdnDomainConfigsResponse(doRPCRequest(make_shared<string>("BatchDeleteDcdnDomainConfigs"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchDeleteDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchDeleteDcdnDomainConfigs(shared_ptr<BatchDeleteDcdnDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteDcdnDomainConfigsWithOptions(request, runtime);
}

BatchSetDcdnDomainCertificateResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnDomainCertificateWithOptions(shared_ptr<BatchSetDcdnDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchSetDcdnDomainCertificateResponse(doRPCRequest(make_shared<string>("BatchSetDcdnDomainCertificate"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchSetDcdnDomainCertificateResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnDomainCertificate(shared_ptr<BatchSetDcdnDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetDcdnDomainCertificateWithOptions(request, runtime);
}

BatchSetDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnDomainConfigsWithOptions(shared_ptr<BatchSetDcdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchSetDcdnDomainConfigsResponse(doRPCRequest(make_shared<string>("BatchSetDcdnDomainConfigs"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchSetDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnDomainConfigs(shared_ptr<BatchSetDcdnDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetDcdnDomainConfigsWithOptions(request, runtime);
}

BatchSetDcdnIpaDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnIpaDomainConfigsWithOptions(shared_ptr<BatchSetDcdnIpaDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchSetDcdnIpaDomainConfigsResponse(doRPCRequest(make_shared<string>("BatchSetDcdnIpaDomainConfigs"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchSetDcdnIpaDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::batchSetDcdnIpaDomainConfigs(shared_ptr<BatchSetDcdnIpaDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetDcdnIpaDomainConfigsWithOptions(request, runtime);
}

BatchStartDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::batchStartDcdnDomainWithOptions(shared_ptr<BatchStartDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchStartDcdnDomainResponse(doRPCRequest(make_shared<string>("BatchStartDcdnDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchStartDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::batchStartDcdnDomain(shared_ptr<BatchStartDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchStartDcdnDomainWithOptions(request, runtime);
}

BatchStopDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::batchStopDcdnDomainWithOptions(shared_ptr<BatchStopDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchStopDcdnDomainResponse(doRPCRequest(make_shared<string>("BatchStopDcdnDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchStopDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::batchStopDcdnDomain(shared_ptr<BatchStopDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchStopDcdnDomainWithOptions(request, runtime);
}

CommitStagingRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::commitStagingRoutineCodeWithOptions(shared_ptr<CommitStagingRoutineCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CommitStagingRoutineCodeResponse(doRPCRequest(make_shared<string>("CommitStagingRoutineCode"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CommitStagingRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::commitStagingRoutineCode(shared_ptr<CommitStagingRoutineCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return commitStagingRoutineCodeWithOptions(request, runtime);
}

CreateDcdnCertificateSigningRequestResponse Alibabacloud_Dcdn20180115::Client::createDcdnCertificateSigningRequestWithOptions(shared_ptr<CreateDcdnCertificateSigningRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDcdnCertificateSigningRequestResponse(doRPCRequest(make_shared<string>("CreateDcdnCertificateSigningRequest"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDcdnCertificateSigningRequestResponse Alibabacloud_Dcdn20180115::Client::createDcdnCertificateSigningRequest(shared_ptr<CreateDcdnCertificateSigningRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDcdnCertificateSigningRequestWithOptions(request, runtime);
}

CreateDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::createDcdnDeliverTaskWithOptions(shared_ptr<CreateDcdnDeliverTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDcdnDeliverTaskShrinkRequest> request = make_shared<CreateDcdnDeliverTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->deliver)) {
    request->deliverShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deliver, make_shared<string>("Deliver"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->schedule)) {
    request->scheduleShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->schedule, make_shared<string>("Schedule"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDcdnDeliverTaskResponse(doRPCRequest(make_shared<string>("CreateDcdnDeliverTask"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::createDcdnDeliverTask(shared_ptr<CreateDcdnDeliverTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDcdnDeliverTaskWithOptions(request, runtime);
}

CreateDcdnDomainOfflineLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::createDcdnDomainOfflineLogDeliveryWithOptions(shared_ptr<CreateDcdnDomainOfflineLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDcdnDomainOfflineLogDeliveryResponse(doRPCRequest(make_shared<string>("CreateDcdnDomainOfflineLogDelivery"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDcdnDomainOfflineLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::createDcdnDomainOfflineLogDelivery(shared_ptr<CreateDcdnDomainOfflineLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDcdnDomainOfflineLogDeliveryWithOptions(request, runtime);
}

CreateDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::createDcdnSubTaskWithOptions(shared_ptr<CreateDcdnSubTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDcdnSubTaskResponse(doRPCRequest(make_shared<string>("CreateDcdnSubTask"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::createDcdnSubTask(shared_ptr<CreateDcdnSubTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDcdnSubTaskWithOptions(request, runtime);
}

CreateRoutineResponse Alibabacloud_Dcdn20180115::Client::createRoutineWithOptions(shared_ptr<CreateRoutineRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRoutineShrinkRequest> request = make_shared<CreateRoutineShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->envConf)) {
    request->envConfShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->envConf, make_shared<string>("EnvConf"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRoutineResponse(doRPCRequest(make_shared<string>("CreateRoutine"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRoutineResponse Alibabacloud_Dcdn20180115::Client::createRoutine(shared_ptr<CreateRoutineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRoutineWithOptions(request, runtime);
}

DeleteDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnDeliverTaskWithOptions(shared_ptr<DeleteDcdnDeliverTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDcdnDeliverTaskResponse(doRPCRequest(make_shared<string>("DeleteDcdnDeliverTask"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnDeliverTask(shared_ptr<DeleteDcdnDeliverTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnDeliverTaskWithOptions(request, runtime);
}

DeleteDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnDomainWithOptions(shared_ptr<DeleteDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDcdnDomainResponse(doRPCRequest(make_shared<string>("DeleteDcdnDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnDomain(shared_ptr<DeleteDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnDomainWithOptions(request, runtime);
}

DeleteDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnIpaDomainWithOptions(shared_ptr<DeleteDcdnIpaDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDcdnIpaDomainResponse(doRPCRequest(make_shared<string>("DeleteDcdnIpaDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnIpaDomain(shared_ptr<DeleteDcdnIpaDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnIpaDomainWithOptions(request, runtime);
}

DeleteDcdnIpaSpecificConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnIpaSpecificConfigWithOptions(shared_ptr<DeleteDcdnIpaSpecificConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDcdnIpaSpecificConfigResponse(doRPCRequest(make_shared<string>("DeleteDcdnIpaSpecificConfig"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDcdnIpaSpecificConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnIpaSpecificConfig(shared_ptr<DeleteDcdnIpaSpecificConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnIpaSpecificConfigWithOptions(request, runtime);
}

DeleteDcdnSpecificConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSpecificConfigWithOptions(shared_ptr<DeleteDcdnSpecificConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDcdnSpecificConfigResponse(doRPCRequest(make_shared<string>("DeleteDcdnSpecificConfig"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDcdnSpecificConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSpecificConfig(shared_ptr<DeleteDcdnSpecificConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnSpecificConfigWithOptions(request, runtime);
}

DeleteDcdnSpecificStagingConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSpecificStagingConfigWithOptions(shared_ptr<DeleteDcdnSpecificStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDcdnSpecificStagingConfigResponse(doRPCRequest(make_shared<string>("DeleteDcdnSpecificStagingConfig"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDcdnSpecificStagingConfigResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSpecificStagingConfig(shared_ptr<DeleteDcdnSpecificStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnSpecificStagingConfigWithOptions(request, runtime);
}

DeleteDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSubTaskWithOptions(shared_ptr<DeleteDcdnSubTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDcdnSubTaskResponse(doRPCRequest(make_shared<string>("DeleteDcdnSubTask"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::deleteDcdnSubTask(shared_ptr<DeleteDcdnSubTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDcdnSubTaskWithOptions(request, runtime);
}

DeleteRoutineResponse Alibabacloud_Dcdn20180115::Client::deleteRoutineWithOptions(shared_ptr<DeleteRoutineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRoutineResponse(doRPCRequest(make_shared<string>("DeleteRoutine"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRoutineResponse Alibabacloud_Dcdn20180115::Client::deleteRoutine(shared_ptr<DeleteRoutineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoutineWithOptions(request, runtime);
}

DeleteRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::deleteRoutineCodeRevisionWithOptions(shared_ptr<DeleteRoutineCodeRevisionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRoutineCodeRevisionResponse(doRPCRequest(make_shared<string>("DeleteRoutineCodeRevision"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::deleteRoutineCodeRevision(shared_ptr<DeleteRoutineCodeRevisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoutineCodeRevisionWithOptions(request, runtime);
}

DeleteRoutineConfEnvsResponse Alibabacloud_Dcdn20180115::Client::deleteRoutineConfEnvsWithOptions(shared_ptr<DeleteRoutineConfEnvsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteRoutineConfEnvsShrinkRequest> request = make_shared<DeleteRoutineConfEnvsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->envs)) {
    request->envsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->envs, make_shared<string>("Envs"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRoutineConfEnvsResponse(doRPCRequest(make_shared<string>("DeleteRoutineConfEnvs"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRoutineConfEnvsResponse Alibabacloud_Dcdn20180115::Client::deleteRoutineConfEnvs(shared_ptr<DeleteRoutineConfEnvsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoutineConfEnvsWithOptions(request, runtime);
}

DescribeDcdnBgpBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBgpBpsDataWithOptions(shared_ptr<DescribeDcdnBgpBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnBgpBpsDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnBgpBpsData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnBgpBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBgpBpsData(shared_ptr<DescribeDcdnBgpBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnBgpBpsDataWithOptions(request, runtime);
}

DescribeDcdnBgpTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBgpTrafficDataWithOptions(shared_ptr<DescribeDcdnBgpTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnBgpTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnBgpTrafficData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnBgpTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBgpTrafficData(shared_ptr<DescribeDcdnBgpTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnBgpTrafficDataWithOptions(request, runtime);
}

DescribeDcdnBlockedRegionsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBlockedRegionsWithOptions(shared_ptr<DescribeDcdnBlockedRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDcdnBlockedRegionsResponse(doRPCRequest(make_shared<string>("DescribeDcdnBlockedRegions"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnBlockedRegionsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnBlockedRegions(shared_ptr<DescribeDcdnBlockedRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnBlockedRegionsWithOptions(request, runtime);
}

DescribeDcdnCertificateDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnCertificateDetailWithOptions(shared_ptr<DescribeDcdnCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnCertificateDetailResponse(doRPCRequest(make_shared<string>("DescribeDcdnCertificateDetail"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnCertificateDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnCertificateDetail(shared_ptr<DescribeDcdnCertificateDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnCertificateDetailWithOptions(request, runtime);
}

DescribeDcdnCertificateListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnCertificateListWithOptions(shared_ptr<DescribeDcdnCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnCertificateListResponse(doRPCRequest(make_shared<string>("DescribeDcdnCertificateList"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnCertificateListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnCertificateList(shared_ptr<DescribeDcdnCertificateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnCertificateListWithOptions(request, runtime);
}

DescribeDcdnConfigOfVersionResponse Alibabacloud_Dcdn20180115::Client::describeDcdnConfigOfVersionWithOptions(shared_ptr<DescribeDcdnConfigOfVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnConfigOfVersionResponse(doRPCRequest(make_shared<string>("DescribeDcdnConfigOfVersion"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnConfigOfVersionResponse Alibabacloud_Dcdn20180115::Client::describeDcdnConfigOfVersion(shared_ptr<DescribeDcdnConfigOfVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnConfigOfVersionWithOptions(request, runtime);
}

DescribeDcdnDeliverListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDeliverListWithOptions(shared_ptr<DescribeDcdnDeliverListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDeliverListResponse(doRPCRequest(make_shared<string>("DescribeDcdnDeliverList"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDeliverListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDeliverList(shared_ptr<DescribeDcdnDeliverListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDeliverListWithOptions(request, runtime);
}

DescribeDcdnDomainBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainBpsDataWithOptions(shared_ptr<DescribeDcdnDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainBpsDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainBpsData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainBpsData(shared_ptr<DescribeDcdnDomainBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainByCertificateResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainByCertificateWithOptions(shared_ptr<DescribeDcdnDomainByCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainByCertificateResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainByCertificate"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainByCertificateResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainByCertificate(shared_ptr<DescribeDcdnDomainByCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainByCertificateWithOptions(request, runtime);
}

DescribeDcdnDomainCertificateInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainCertificateInfoWithOptions(shared_ptr<DescribeDcdnDomainCertificateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainCertificateInfoResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainCertificateInfo"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainCertificateInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainCertificateInfo(shared_ptr<DescribeDcdnDomainCertificateInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainCertificateInfoWithOptions(request, runtime);
}

DescribeDcdnDomainCnameResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainCnameWithOptions(shared_ptr<DescribeDcdnDomainCnameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDcdnDomainCnameResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainCname"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainCnameResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainCname(shared_ptr<DescribeDcdnDomainCnameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainCnameWithOptions(request, runtime);
}

DescribeDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainConfigsWithOptions(shared_ptr<DescribeDcdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainConfigsResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainConfigs"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainConfigs(shared_ptr<DescribeDcdnDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainConfigsWithOptions(request, runtime);
}

DescribeDcdnDomainDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainDetailWithOptions(shared_ptr<DescribeDcdnDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainDetailResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainDetail"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainDetail(shared_ptr<DescribeDcdnDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainDetailWithOptions(request, runtime);
}

DescribeDcdnDomainHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainHitRateDataWithOptions(shared_ptr<DescribeDcdnDomainHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainHitRateDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainHitRateData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainHitRateData(shared_ptr<DescribeDcdnDomainHitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainHitRateDataWithOptions(request, runtime);
}

DescribeDcdnDomainHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainHttpCodeDataWithOptions(shared_ptr<DescribeDcdnDomainHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainHttpCodeDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainHttpCodeData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainHttpCodeData(shared_ptr<DescribeDcdnDomainHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainHttpCodeDataWithOptions(request, runtime);
}

DescribeDcdnDomainIpaBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIpaBpsDataWithOptions(shared_ptr<DescribeDcdnDomainIpaBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainIpaBpsDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainIpaBpsData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainIpaBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIpaBpsData(shared_ptr<DescribeDcdnDomainIpaBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainIpaBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainIpaTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIpaTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainIpaTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainIpaTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainIpaTrafficData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainIpaTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIpaTrafficData(shared_ptr<DescribeDcdnDomainIpaTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainIpaTrafficDataWithOptions(request, runtime);
}

DescribeDcdnDomainIspDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIspDataWithOptions(shared_ptr<DescribeDcdnDomainIspDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainIspDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainIspData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainIspDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainIspData(shared_ptr<DescribeDcdnDomainIspDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainIspDataWithOptions(request, runtime);
}

DescribeDcdnDomainLogResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainLogWithOptions(shared_ptr<DescribeDcdnDomainLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainLogResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainLog"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainLogResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainLog(shared_ptr<DescribeDcdnDomainLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainLogWithOptions(request, runtime);
}

DescribeDcdnDomainMultiUsageDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainMultiUsageDataWithOptions(shared_ptr<DescribeDcdnDomainMultiUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainMultiUsageDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainMultiUsageData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainMultiUsageDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainMultiUsageData(shared_ptr<DescribeDcdnDomainMultiUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainMultiUsageDataWithOptions(request, runtime);
}

DescribeDcdnDomainOriginBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainOriginBpsDataWithOptions(shared_ptr<DescribeDcdnDomainOriginBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainOriginBpsDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainOriginBpsData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainOriginBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainOriginBpsData(shared_ptr<DescribeDcdnDomainOriginBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainOriginBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainOriginTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainOriginTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainOriginTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainOriginTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainOriginTrafficData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainOriginTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainOriginTrafficData(shared_ptr<DescribeDcdnDomainOriginTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainOriginTrafficDataWithOptions(request, runtime);
}

DescribeDcdnDomainPropertyResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainPropertyWithOptions(shared_ptr<DescribeDcdnDomainPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainPropertyResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainProperty"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainPropertyResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainProperty(shared_ptr<DescribeDcdnDomainPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainPropertyWithOptions(request, runtime);
}

DescribeDcdnDomainPvDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainPvDataWithOptions(shared_ptr<DescribeDcdnDomainPvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainPvDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainPvData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainPvDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainPvData(shared_ptr<DescribeDcdnDomainPvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainPvDataWithOptions(request, runtime);
}

DescribeDcdnDomainQpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainQpsDataWithOptions(shared_ptr<DescribeDcdnDomainQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainQpsDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainQpsData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainQpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainQpsData(shared_ptr<DescribeDcdnDomainQpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainQpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeBpsDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDcdnDomainRealTimeBpsDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainRealTimeBpsData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainRealTimeBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeBpsData(shared_ptr<DescribeDcdnDomainRealTimeBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeByteHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeByteHitRateDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeByteHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDcdnDomainRealTimeByteHitRateDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainRealTimeByteHitRateData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainRealTimeByteHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeByteHitRateData(shared_ptr<DescribeDcdnDomainRealTimeByteHitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeByteHitRateDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeDetailDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeDetailDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeDetailDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDcdnDomainRealTimeDetailDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainRealTimeDetailData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainRealTimeDetailDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeDetailData(shared_ptr<DescribeDcdnDomainRealTimeDetailDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeDetailDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeHttpCodeDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainRealTimeHttpCodeDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainRealTimeHttpCodeData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainRealTimeHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeHttpCodeData(shared_ptr<DescribeDcdnDomainRealTimeHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeHttpCodeDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeQpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeQpsDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDcdnDomainRealTimeQpsDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainRealTimeQpsData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainRealTimeQpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeQpsData(shared_ptr<DescribeDcdnDomainRealTimeQpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeQpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeReqHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeReqHitRateDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeReqHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeDcdnDomainRealTimeReqHitRateDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainRealTimeReqHitRateData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainRealTimeReqHitRateDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeReqHitRateData(shared_ptr<DescribeDcdnDomainRealTimeReqHitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeReqHitRateDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeSrcBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcBpsDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeSrcBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainRealTimeSrcBpsDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainRealTimeSrcBpsData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainRealTimeSrcBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcBpsData(shared_ptr<DescribeDcdnDomainRealTimeSrcBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeSrcBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcHttpCodeDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainRealTimeSrcHttpCodeData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcHttpCodeData(shared_ptr<DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeSrcHttpCodeDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeSrcTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeSrcTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainRealTimeSrcTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainRealTimeSrcTrafficData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainRealTimeSrcTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeSrcTrafficData(shared_ptr<DescribeDcdnDomainRealTimeSrcTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeSrcTrafficDataWithOptions(request, runtime);
}

DescribeDcdnDomainRealTimeTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainRealTimeTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainRealTimeTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainRealTimeTrafficData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainRealTimeTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRealTimeTrafficData(shared_ptr<DescribeDcdnDomainRealTimeTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRealTimeTrafficDataWithOptions(request, runtime);
}

DescribeDcdnDomainRegionDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRegionDataWithOptions(shared_ptr<DescribeDcdnDomainRegionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainRegionDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainRegionData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainRegionDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainRegionData(shared_ptr<DescribeDcdnDomainRegionDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainRegionDataWithOptions(request, runtime);
}

DescribeDcdnDomainStagingConfigResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainStagingConfigWithOptions(shared_ptr<DescribeDcdnDomainStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainStagingConfigResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainStagingConfig"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainStagingConfigResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainStagingConfig(shared_ptr<DescribeDcdnDomainStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainStagingConfigWithOptions(request, runtime);
}

DescribeDcdnDomainTopReferVisitResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTopReferVisitWithOptions(shared_ptr<DescribeDcdnDomainTopReferVisitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainTopReferVisitResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainTopReferVisit"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainTopReferVisitResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTopReferVisit(shared_ptr<DescribeDcdnDomainTopReferVisitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainTopReferVisitWithOptions(request, runtime);
}

DescribeDcdnDomainTopUrlVisitResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTopUrlVisitWithOptions(shared_ptr<DescribeDcdnDomainTopUrlVisitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainTopUrlVisitResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainTopUrlVisit"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainTopUrlVisitResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTopUrlVisit(shared_ptr<DescribeDcdnDomainTopUrlVisitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainTopUrlVisitWithOptions(request, runtime);
}

DescribeDcdnDomainTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainTrafficData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainTrafficData(shared_ptr<DescribeDcdnDomainTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainTrafficDataWithOptions(request, runtime);
}

DescribeDcdnDomainUvDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainUvDataWithOptions(shared_ptr<DescribeDcdnDomainUvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainUvDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainUvData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainUvDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainUvData(shared_ptr<DescribeDcdnDomainUvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainUvDataWithOptions(request, runtime);
}

DescribeDcdnDomainWebsocketBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketBpsDataWithOptions(shared_ptr<DescribeDcdnDomainWebsocketBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainWebsocketBpsDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainWebsocketBpsData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainWebsocketBpsDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketBpsData(shared_ptr<DescribeDcdnDomainWebsocketBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainWebsocketBpsDataWithOptions(request, runtime);
}

DescribeDcdnDomainWebsocketHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketHttpCodeDataWithOptions(shared_ptr<DescribeDcdnDomainWebsocketHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainWebsocketHttpCodeDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainWebsocketHttpCodeData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainWebsocketHttpCodeDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketHttpCodeData(shared_ptr<DescribeDcdnDomainWebsocketHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainWebsocketHttpCodeDataWithOptions(request, runtime);
}

DescribeDcdnDomainWebsocketTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketTrafficDataWithOptions(shared_ptr<DescribeDcdnDomainWebsocketTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnDomainWebsocketTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeDcdnDomainWebsocketTrafficData"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnDomainWebsocketTrafficDataResponse Alibabacloud_Dcdn20180115::Client::describeDcdnDomainWebsocketTrafficData(shared_ptr<DescribeDcdnDomainWebsocketTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnDomainWebsocketTrafficDataWithOptions(request, runtime);
}

DescribeDcdnHttpsDomainListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnHttpsDomainListWithOptions(shared_ptr<DescribeDcdnHttpsDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnHttpsDomainListResponse(doRPCRequest(make_shared<string>("DescribeDcdnHttpsDomainList"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnHttpsDomainListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnHttpsDomainList(shared_ptr<DescribeDcdnHttpsDomainListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnHttpsDomainListWithOptions(request, runtime);
}

DescribeDcdnIpaDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaDomainConfigsWithOptions(shared_ptr<DescribeDcdnIpaDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnIpaDomainConfigsResponse(doRPCRequest(make_shared<string>("DescribeDcdnIpaDomainConfigs"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnIpaDomainConfigsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaDomainConfigs(shared_ptr<DescribeDcdnIpaDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnIpaDomainConfigsWithOptions(request, runtime);
}

DescribeDcdnIpaDomainDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaDomainDetailWithOptions(shared_ptr<DescribeDcdnIpaDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnIpaDomainDetailResponse(doRPCRequest(make_shared<string>("DescribeDcdnIpaDomainDetail"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnIpaDomainDetailResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaDomainDetail(shared_ptr<DescribeDcdnIpaDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnIpaDomainDetailWithOptions(request, runtime);
}

DescribeDcdnIpaServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaServiceWithOptions(shared_ptr<DescribeDcdnIpaServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnIpaServiceResponse(doRPCRequest(make_shared<string>("DescribeDcdnIpaService"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnIpaServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaService(shared_ptr<DescribeDcdnIpaServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnIpaServiceWithOptions(request, runtime);
}

DescribeDcdnIpaUserDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaUserDomainsWithOptions(shared_ptr<DescribeDcdnIpaUserDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnIpaUserDomainsResponse(doRPCRequest(make_shared<string>("DescribeDcdnIpaUserDomains"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnIpaUserDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpaUserDomains(shared_ptr<DescribeDcdnIpaUserDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnIpaUserDomainsWithOptions(request, runtime);
}

DescribeDcdnIpInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpInfoWithOptions(shared_ptr<DescribeDcdnIpInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnIpInfoResponse(doRPCRequest(make_shared<string>("DescribeDcdnIpInfo"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnIpInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnIpInfo(shared_ptr<DescribeDcdnIpInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnIpInfoWithOptions(request, runtime);
}

DescribeDcdnOfflineLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::describeDcdnOfflineLogDeliveryWithOptions(shared_ptr<DescribeDcdnOfflineLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnOfflineLogDeliveryResponse(doRPCRequest(make_shared<string>("DescribeDcdnOfflineLogDelivery"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnOfflineLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::describeDcdnOfflineLogDelivery(shared_ptr<DescribeDcdnOfflineLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnOfflineLogDeliveryWithOptions(request, runtime);
}

DescribeDcdnOfflineLogDeliveryFieldResponse Alibabacloud_Dcdn20180115::Client::describeDcdnOfflineLogDeliveryFieldWithOptions(shared_ptr<DescribeDcdnOfflineLogDeliveryFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnOfflineLogDeliveryFieldResponse(doRPCRequest(make_shared<string>("DescribeDcdnOfflineLogDeliveryField"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnOfflineLogDeliveryFieldResponse Alibabacloud_Dcdn20180115::Client::describeDcdnOfflineLogDeliveryField(shared_ptr<DescribeDcdnOfflineLogDeliveryFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnOfflineLogDeliveryFieldWithOptions(request, runtime);
}

DescribeDcdnOfflineLogDeliveryRegionsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnOfflineLogDeliveryRegionsWithOptions(shared_ptr<DescribeDcdnOfflineLogDeliveryRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnOfflineLogDeliveryRegionsResponse(doRPCRequest(make_shared<string>("DescribeDcdnOfflineLogDeliveryRegions"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnOfflineLogDeliveryRegionsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnOfflineLogDeliveryRegions(shared_ptr<DescribeDcdnOfflineLogDeliveryRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnOfflineLogDeliveryRegionsWithOptions(request, runtime);
}

DescribeDcdnOfflineLogDeliveryStatusResponse Alibabacloud_Dcdn20180115::Client::describeDcdnOfflineLogDeliveryStatusWithOptions(shared_ptr<DescribeDcdnOfflineLogDeliveryStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnOfflineLogDeliveryStatusResponse(doRPCRequest(make_shared<string>("DescribeDcdnOfflineLogDeliveryStatus"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnOfflineLogDeliveryStatusResponse Alibabacloud_Dcdn20180115::Client::describeDcdnOfflineLogDeliveryStatus(shared_ptr<DescribeDcdnOfflineLogDeliveryStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnOfflineLogDeliveryStatusWithOptions(request, runtime);
}

DescribeDcdnRefreshQuotaResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshQuotaWithOptions(shared_ptr<DescribeDcdnRefreshQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnRefreshQuotaResponse(doRPCRequest(make_shared<string>("DescribeDcdnRefreshQuota"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnRefreshQuotaResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshQuota(shared_ptr<DescribeDcdnRefreshQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnRefreshQuotaWithOptions(request, runtime);
}

DescribeDcdnRefreshTaskByIdResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshTaskByIdWithOptions(shared_ptr<DescribeDcdnRefreshTaskByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnRefreshTaskByIdResponse(doRPCRequest(make_shared<string>("DescribeDcdnRefreshTaskById"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnRefreshTaskByIdResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshTaskById(shared_ptr<DescribeDcdnRefreshTaskByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnRefreshTaskByIdWithOptions(request, runtime);
}

DescribeDcdnRefreshTasksResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshTasksWithOptions(shared_ptr<DescribeDcdnRefreshTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnRefreshTasksResponse(doRPCRequest(make_shared<string>("DescribeDcdnRefreshTasks"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnRefreshTasksResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRefreshTasks(shared_ptr<DescribeDcdnRefreshTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnRefreshTasksWithOptions(request, runtime);
}

DescribeDcdnRegionAndIspResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRegionAndIspWithOptions(shared_ptr<DescribeDcdnRegionAndIspRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnRegionAndIspResponse(doRPCRequest(make_shared<string>("DescribeDcdnRegionAndIsp"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnRegionAndIspResponse Alibabacloud_Dcdn20180115::Client::describeDcdnRegionAndIsp(shared_ptr<DescribeDcdnRegionAndIspRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnRegionAndIspWithOptions(request, runtime);
}

DescribeDcdnReportResponse Alibabacloud_Dcdn20180115::Client::describeDcdnReportWithOptions(shared_ptr<DescribeDcdnReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnReportResponse(doRPCRequest(make_shared<string>("DescribeDcdnReport"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnReportResponse Alibabacloud_Dcdn20180115::Client::describeDcdnReport(shared_ptr<DescribeDcdnReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnReportWithOptions(request, runtime);
}

DescribeDcdnReportListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnReportListWithOptions(shared_ptr<DescribeDcdnReportListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnReportListResponse(doRPCRequest(make_shared<string>("DescribeDcdnReportList"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnReportListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnReportList(shared_ptr<DescribeDcdnReportListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnReportListWithOptions(request, runtime);
}

DescribeDcdnSecFuncInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSecFuncInfoWithOptions(shared_ptr<DescribeDcdnSecFuncInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnSecFuncInfoResponse(doRPCRequest(make_shared<string>("DescribeDcdnSecFuncInfo"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnSecFuncInfoResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSecFuncInfo(shared_ptr<DescribeDcdnSecFuncInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnSecFuncInfoWithOptions(request, runtime);
}

DescribeDcdnServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnServiceWithOptions(shared_ptr<DescribeDcdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnServiceResponse(doRPCRequest(make_shared<string>("DescribeDcdnService"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnServiceResponse Alibabacloud_Dcdn20180115::Client::describeDcdnService(shared_ptr<DescribeDcdnServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnServiceWithOptions(request, runtime);
}

DescribeDcdnStagingIpResponse Alibabacloud_Dcdn20180115::Client::describeDcdnStagingIpWithOptions(shared_ptr<DescribeDcdnStagingIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnStagingIpResponse(doRPCRequest(make_shared<string>("DescribeDcdnStagingIp"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnStagingIpResponse Alibabacloud_Dcdn20180115::Client::describeDcdnStagingIp(shared_ptr<DescribeDcdnStagingIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnStagingIpWithOptions(request, runtime);
}

DescribeDcdnSubListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSubListWithOptions(shared_ptr<DescribeDcdnSubListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnSubListResponse(doRPCRequest(make_shared<string>("DescribeDcdnSubList"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnSubListResponse Alibabacloud_Dcdn20180115::Client::describeDcdnSubList(shared_ptr<DescribeDcdnSubListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnSubListWithOptions(request, runtime);
}

DescribeDcdnTagResourcesResponse Alibabacloud_Dcdn20180115::Client::describeDcdnTagResourcesWithOptions(shared_ptr<DescribeDcdnTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnTagResourcesResponse(doRPCRequest(make_shared<string>("DescribeDcdnTagResources"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnTagResourcesResponse Alibabacloud_Dcdn20180115::Client::describeDcdnTagResources(shared_ptr<DescribeDcdnTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnTagResourcesWithOptions(request, runtime);
}

DescribeDcdnTopDomainsByFlowResponse Alibabacloud_Dcdn20180115::Client::describeDcdnTopDomainsByFlowWithOptions(shared_ptr<DescribeDcdnTopDomainsByFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnTopDomainsByFlowResponse(doRPCRequest(make_shared<string>("DescribeDcdnTopDomainsByFlow"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnTopDomainsByFlowResponse Alibabacloud_Dcdn20180115::Client::describeDcdnTopDomainsByFlow(shared_ptr<DescribeDcdnTopDomainsByFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnTopDomainsByFlowWithOptions(request, runtime);
}

DescribeDcdnUserBillHistoryResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserBillHistoryWithOptions(shared_ptr<DescribeDcdnUserBillHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnUserBillHistoryResponse(doRPCRequest(make_shared<string>("DescribeDcdnUserBillHistory"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnUserBillHistoryResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserBillHistory(shared_ptr<DescribeDcdnUserBillHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserBillHistoryWithOptions(request, runtime);
}

DescribeDcdnUserBillTypeResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserBillTypeWithOptions(shared_ptr<DescribeDcdnUserBillTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnUserBillTypeResponse(doRPCRequest(make_shared<string>("DescribeDcdnUserBillType"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnUserBillTypeResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserBillType(shared_ptr<DescribeDcdnUserBillTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserBillTypeWithOptions(request, runtime);
}

DescribeDcdnUserDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserDomainsWithOptions(shared_ptr<DescribeDcdnUserDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnUserDomainsResponse(doRPCRequest(make_shared<string>("DescribeDcdnUserDomains"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnUserDomainsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserDomains(shared_ptr<DescribeDcdnUserDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserDomainsWithOptions(request, runtime);
}

DescribeDcdnUserDomainsByFuncResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserDomainsByFuncWithOptions(shared_ptr<DescribeDcdnUserDomainsByFuncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnUserDomainsByFuncResponse(doRPCRequest(make_shared<string>("DescribeDcdnUserDomainsByFunc"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnUserDomainsByFuncResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserDomainsByFunc(shared_ptr<DescribeDcdnUserDomainsByFuncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserDomainsByFuncWithOptions(request, runtime);
}

DescribeDcdnUserQuotaResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserQuotaWithOptions(shared_ptr<DescribeDcdnUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnUserQuotaResponse(doRPCRequest(make_shared<string>("DescribeDcdnUserQuota"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnUserQuotaResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserQuota(shared_ptr<DescribeDcdnUserQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserQuotaWithOptions(request, runtime);
}

DescribeDcdnUserResourcePackageResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserResourcePackageWithOptions(shared_ptr<DescribeDcdnUserResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnUserResourcePackageResponse(doRPCRequest(make_shared<string>("DescribeDcdnUserResourcePackage"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnUserResourcePackageResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserResourcePackage(shared_ptr<DescribeDcdnUserResourcePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserResourcePackageWithOptions(request, runtime);
}

DescribeDcdnUserSecDropResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserSecDropWithOptions(shared_ptr<DescribeDcdnUserSecDropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnUserSecDropResponse(doRPCRequest(make_shared<string>("DescribeDcdnUserSecDrop"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnUserSecDropResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserSecDrop(shared_ptr<DescribeDcdnUserSecDropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserSecDropWithOptions(request, runtime);
}

DescribeDcdnUserSecDropByMinuteResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserSecDropByMinuteWithOptions(shared_ptr<DescribeDcdnUserSecDropByMinuteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnUserSecDropByMinuteResponse(doRPCRequest(make_shared<string>("DescribeDcdnUserSecDropByMinute"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnUserSecDropByMinuteResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserSecDropByMinute(shared_ptr<DescribeDcdnUserSecDropByMinuteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserSecDropByMinuteWithOptions(request, runtime);
}

DescribeDcdnUserTagsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserTagsWithOptions(shared_ptr<DescribeDcdnUserTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnUserTagsResponse(doRPCRequest(make_shared<string>("DescribeDcdnUserTags"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnUserTagsResponse Alibabacloud_Dcdn20180115::Client::describeDcdnUserTags(shared_ptr<DescribeDcdnUserTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnUserTagsWithOptions(request, runtime);
}

DescribeDcdnVerifyContentResponse Alibabacloud_Dcdn20180115::Client::describeDcdnVerifyContentWithOptions(shared_ptr<DescribeDcdnVerifyContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnVerifyContentResponse(doRPCRequest(make_shared<string>("DescribeDcdnVerifyContent"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnVerifyContentResponse Alibabacloud_Dcdn20180115::Client::describeDcdnVerifyContent(shared_ptr<DescribeDcdnVerifyContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnVerifyContentWithOptions(request, runtime);
}

DescribeDcdnWafDomainResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafDomainWithOptions(shared_ptr<DescribeDcdnWafDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDcdnWafDomainResponse(doRPCRequest(make_shared<string>("DescribeDcdnWafDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDcdnWafDomainResponse Alibabacloud_Dcdn20180115::Client::describeDcdnWafDomain(shared_ptr<DescribeDcdnWafDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDcdnWafDomainWithOptions(request, runtime);
}

DescribeRoutineResponse Alibabacloud_Dcdn20180115::Client::describeRoutineWithOptions(shared_ptr<DescribeRoutineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRoutineResponse(doRPCRequest(make_shared<string>("DescribeRoutine"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRoutineResponse Alibabacloud_Dcdn20180115::Client::describeRoutine(shared_ptr<DescribeRoutineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoutineWithOptions(request, runtime);
}

DescribeRoutineCanaryEnvsResponse Alibabacloud_Dcdn20180115::Client::describeRoutineCanaryEnvsWithOptions(shared_ptr<DescribeRoutineCanaryEnvsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRoutineCanaryEnvsResponse(doRPCRequest(make_shared<string>("DescribeRoutineCanaryEnvs"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRoutineCanaryEnvsResponse Alibabacloud_Dcdn20180115::Client::describeRoutineCanaryEnvs(shared_ptr<DescribeRoutineCanaryEnvsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoutineCanaryEnvsWithOptions(request, runtime);
}

DescribeRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::describeRoutineCodeRevisionWithOptions(shared_ptr<DescribeRoutineCodeRevisionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRoutineCodeRevisionResponse(doRPCRequest(make_shared<string>("DescribeRoutineCodeRevision"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::describeRoutineCodeRevision(shared_ptr<DescribeRoutineCodeRevisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoutineCodeRevisionWithOptions(request, runtime);
}

DescribeRoutineSpecResponse Alibabacloud_Dcdn20180115::Client::describeRoutineSpecWithOptions(shared_ptr<DescribeRoutineSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRoutineSpecResponse(doRPCRequest(make_shared<string>("DescribeRoutineSpec"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRoutineSpecResponse Alibabacloud_Dcdn20180115::Client::describeRoutineSpec(shared_ptr<DescribeRoutineSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoutineSpecWithOptions(request, runtime);
}

DescribeRoutineUserInfoResponse Alibabacloud_Dcdn20180115::Client::describeRoutineUserInfoWithOptions(shared_ptr<DescribeRoutineUserInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRoutineUserInfoResponse(doRPCRequest(make_shared<string>("DescribeRoutineUserInfo"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRoutineUserInfoResponse Alibabacloud_Dcdn20180115::Client::describeRoutineUserInfo(shared_ptr<DescribeRoutineUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoutineUserInfoWithOptions(request, runtime);
}

DescribeUserDcdnIpaStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserDcdnIpaStatusWithOptions(shared_ptr<DescribeUserDcdnIpaStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserDcdnIpaStatusResponse(doRPCRequest(make_shared<string>("DescribeUserDcdnIpaStatus"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserDcdnIpaStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserDcdnIpaStatus(shared_ptr<DescribeUserDcdnIpaStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserDcdnIpaStatusWithOptions(request, runtime);
}

DescribeUserDcdnStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserDcdnStatusWithOptions(shared_ptr<DescribeUserDcdnStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserDcdnStatusResponse(doRPCRequest(make_shared<string>("DescribeUserDcdnStatus"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserDcdnStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserDcdnStatus(shared_ptr<DescribeUserDcdnStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserDcdnStatusWithOptions(request, runtime);
}

DescribeUserErStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserErStatusWithOptions(shared_ptr<DescribeUserErStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserErStatusResponse(doRPCRequest(make_shared<string>("DescribeUserErStatus"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserErStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserErStatus(shared_ptr<DescribeUserErStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserErStatusWithOptions(request, runtime);
}

DescribeUserLogserviceStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserLogserviceStatusWithOptions(shared_ptr<DescribeUserLogserviceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUserLogserviceStatusResponse(doRPCRequest(make_shared<string>("DescribeUserLogserviceStatus"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserLogserviceStatusResponse Alibabacloud_Dcdn20180115::Client::describeUserLogserviceStatus(shared_ptr<DescribeUserLogserviceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserLogserviceStatusWithOptions(request, runtime);
}

DisableDcdnDomainOfflineLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::disableDcdnDomainOfflineLogDeliveryWithOptions(shared_ptr<DisableDcdnDomainOfflineLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableDcdnDomainOfflineLogDeliveryResponse(doRPCRequest(make_shared<string>("DisableDcdnDomainOfflineLogDelivery"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableDcdnDomainOfflineLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::disableDcdnDomainOfflineLogDelivery(shared_ptr<DisableDcdnDomainOfflineLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDcdnDomainOfflineLogDeliveryWithOptions(request, runtime);
}

DisableDcdnOfflineLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::disableDcdnOfflineLogDeliveryWithOptions(shared_ptr<DisableDcdnOfflineLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableDcdnOfflineLogDeliveryResponse(doRPCRequest(make_shared<string>("DisableDcdnOfflineLogDelivery"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableDcdnOfflineLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::disableDcdnOfflineLogDelivery(shared_ptr<DisableDcdnOfflineLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDcdnOfflineLogDeliveryWithOptions(request, runtime);
}

EditRoutineConfResponse Alibabacloud_Dcdn20180115::Client::editRoutineConfWithOptions(shared_ptr<EditRoutineConfRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EditRoutineConfShrinkRequest> request = make_shared<EditRoutineConfShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->envConf)) {
    request->envConfShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->envConf, make_shared<string>("EnvConf"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EditRoutineConfResponse(doRPCRequest(make_shared<string>("EditRoutineConf"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EditRoutineConfResponse Alibabacloud_Dcdn20180115::Client::editRoutineConf(shared_ptr<EditRoutineConfRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editRoutineConfWithOptions(request, runtime);
}

EnableDcdnDomainOfflineLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::enableDcdnDomainOfflineLogDeliveryWithOptions(shared_ptr<EnableDcdnDomainOfflineLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableDcdnDomainOfflineLogDeliveryResponse(doRPCRequest(make_shared<string>("EnableDcdnDomainOfflineLogDelivery"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableDcdnDomainOfflineLogDeliveryResponse Alibabacloud_Dcdn20180115::Client::enableDcdnDomainOfflineLogDelivery(shared_ptr<EnableDcdnDomainOfflineLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableDcdnDomainOfflineLogDeliveryWithOptions(request, runtime);
}

ModifyDCdnDomainSchdmByPropertyResponse Alibabacloud_Dcdn20180115::Client::modifyDCdnDomainSchdmByPropertyWithOptions(shared_ptr<ModifyDCdnDomainSchdmByPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDCdnDomainSchdmByPropertyResponse(doRPCRequest(make_shared<string>("ModifyDCdnDomainSchdmByProperty"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDCdnDomainSchdmByPropertyResponse Alibabacloud_Dcdn20180115::Client::modifyDCdnDomainSchdmByProperty(shared_ptr<ModifyDCdnDomainSchdmByPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDCdnDomainSchdmByPropertyWithOptions(request, runtime);
}

OpenDcdnServiceResponse Alibabacloud_Dcdn20180115::Client::openDcdnServiceWithOptions(shared_ptr<OpenDcdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OpenDcdnServiceResponse(doRPCRequest(make_shared<string>("OpenDcdnService"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenDcdnServiceResponse Alibabacloud_Dcdn20180115::Client::openDcdnService(shared_ptr<OpenDcdnServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openDcdnServiceWithOptions(request, runtime);
}

PreloadDcdnObjectCachesResponse Alibabacloud_Dcdn20180115::Client::preloadDcdnObjectCachesWithOptions(shared_ptr<PreloadDcdnObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PreloadDcdnObjectCachesResponse(doRPCRequest(make_shared<string>("PreloadDcdnObjectCaches"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PreloadDcdnObjectCachesResponse Alibabacloud_Dcdn20180115::Client::preloadDcdnObjectCaches(shared_ptr<PreloadDcdnObjectCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preloadDcdnObjectCachesWithOptions(request, runtime);
}

PublishDcdnStagingConfigToProductionResponse Alibabacloud_Dcdn20180115::Client::publishDcdnStagingConfigToProductionWithOptions(shared_ptr<PublishDcdnStagingConfigToProductionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishDcdnStagingConfigToProductionResponse(doRPCRequest(make_shared<string>("PublishDcdnStagingConfigToProduction"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishDcdnStagingConfigToProductionResponse Alibabacloud_Dcdn20180115::Client::publishDcdnStagingConfigToProduction(shared_ptr<PublishDcdnStagingConfigToProductionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishDcdnStagingConfigToProductionWithOptions(request, runtime);
}

PublishRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::publishRoutineCodeRevisionWithOptions(shared_ptr<PublishRoutineCodeRevisionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PublishRoutineCodeRevisionShrinkRequest> request = make_shared<PublishRoutineCodeRevisionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->envs)) {
    request->envsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->envs, make_shared<string>("Envs"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishRoutineCodeRevisionResponse(doRPCRequest(make_shared<string>("PublishRoutineCodeRevision"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishRoutineCodeRevisionResponse Alibabacloud_Dcdn20180115::Client::publishRoutineCodeRevision(shared_ptr<PublishRoutineCodeRevisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishRoutineCodeRevisionWithOptions(request, runtime);
}

RefreshDcdnObjectCachesResponse Alibabacloud_Dcdn20180115::Client::refreshDcdnObjectCachesWithOptions(shared_ptr<RefreshDcdnObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshDcdnObjectCachesResponse(doRPCRequest(make_shared<string>("RefreshDcdnObjectCaches"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshDcdnObjectCachesResponse Alibabacloud_Dcdn20180115::Client::refreshDcdnObjectCaches(shared_ptr<RefreshDcdnObjectCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshDcdnObjectCachesWithOptions(request, runtime);
}

RollbackDcdnStagingConfigResponse Alibabacloud_Dcdn20180115::Client::rollbackDcdnStagingConfigWithOptions(shared_ptr<RollbackDcdnStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RollbackDcdnStagingConfigResponse(doRPCRequest(make_shared<string>("RollbackDcdnStagingConfig"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RollbackDcdnStagingConfigResponse Alibabacloud_Dcdn20180115::Client::rollbackDcdnStagingConfig(shared_ptr<RollbackDcdnStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackDcdnStagingConfigWithOptions(request, runtime);
}

SetDcdnConfigOfVersionResponse Alibabacloud_Dcdn20180115::Client::setDcdnConfigOfVersionWithOptions(shared_ptr<SetDcdnConfigOfVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDcdnConfigOfVersionResponse(doRPCRequest(make_shared<string>("SetDcdnConfigOfVersion"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDcdnConfigOfVersionResponse Alibabacloud_Dcdn20180115::Client::setDcdnConfigOfVersion(shared_ptr<SetDcdnConfigOfVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDcdnConfigOfVersionWithOptions(request, runtime);
}

SetDcdnDomainCertificateResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainCertificateWithOptions(shared_ptr<SetDcdnDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDcdnDomainCertificateResponse(doRPCRequest(make_shared<string>("SetDcdnDomainCertificate"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDcdnDomainCertificateResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainCertificate(shared_ptr<SetDcdnDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDcdnDomainCertificateWithOptions(request, runtime);
}

SetDcdnDomainCSRCertificateResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainCSRCertificateWithOptions(shared_ptr<SetDcdnDomainCSRCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDcdnDomainCSRCertificateResponse(doRPCRequest(make_shared<string>("SetDcdnDomainCSRCertificate"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDcdnDomainCSRCertificateResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainCSRCertificate(shared_ptr<SetDcdnDomainCSRCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDcdnDomainCSRCertificateWithOptions(request, runtime);
}

SetDcdnDomainStagingConfigResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainStagingConfigWithOptions(shared_ptr<SetDcdnDomainStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDcdnDomainStagingConfigResponse(doRPCRequest(make_shared<string>("SetDcdnDomainStagingConfig"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDcdnDomainStagingConfigResponse Alibabacloud_Dcdn20180115::Client::setDcdnDomainStagingConfig(shared_ptr<SetDcdnDomainStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDcdnDomainStagingConfigWithOptions(request, runtime);
}

SetRoutineSubdomainResponse Alibabacloud_Dcdn20180115::Client::setRoutineSubdomainWithOptions(shared_ptr<SetRoutineSubdomainRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetRoutineSubdomainShrinkRequest> request = make_shared<SetRoutineSubdomainShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->subdomains)) {
    request->subdomainsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subdomains, make_shared<string>("Subdomains"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetRoutineSubdomainResponse(doRPCRequest(make_shared<string>("SetRoutineSubdomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetRoutineSubdomainResponse Alibabacloud_Dcdn20180115::Client::setRoutineSubdomain(shared_ptr<SetRoutineSubdomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setRoutineSubdomainWithOptions(request, runtime);
}

StartDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::startDcdnDomainWithOptions(shared_ptr<StartDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartDcdnDomainResponse(doRPCRequest(make_shared<string>("StartDcdnDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::startDcdnDomain(shared_ptr<StartDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDcdnDomainWithOptions(request, runtime);
}

StartDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::startDcdnIpaDomainWithOptions(shared_ptr<StartDcdnIpaDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartDcdnIpaDomainResponse(doRPCRequest(make_shared<string>("StartDcdnIpaDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::startDcdnIpaDomain(shared_ptr<StartDcdnIpaDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDcdnIpaDomainWithOptions(request, runtime);
}

StopDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::stopDcdnDomainWithOptions(shared_ptr<StopDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDcdnDomainResponse(doRPCRequest(make_shared<string>("StopDcdnDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::stopDcdnDomain(shared_ptr<StopDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDcdnDomainWithOptions(request, runtime);
}

StopDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::stopDcdnIpaDomainWithOptions(shared_ptr<StopDcdnIpaDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDcdnIpaDomainResponse(doRPCRequest(make_shared<string>("StopDcdnIpaDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::stopDcdnIpaDomain(shared_ptr<StopDcdnIpaDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDcdnIpaDomainWithOptions(request, runtime);
}

TagDcdnResourcesResponse Alibabacloud_Dcdn20180115::Client::tagDcdnResourcesWithOptions(shared_ptr<TagDcdnResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagDcdnResourcesResponse(doRPCRequest(make_shared<string>("TagDcdnResources"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagDcdnResourcesResponse Alibabacloud_Dcdn20180115::Client::tagDcdnResources(shared_ptr<TagDcdnResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagDcdnResourcesWithOptions(request, runtime);
}

UntagDcdnResourcesResponse Alibabacloud_Dcdn20180115::Client::untagDcdnResourcesWithOptions(shared_ptr<UntagDcdnResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagDcdnResourcesResponse(doRPCRequest(make_shared<string>("UntagDcdnResources"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagDcdnResourcesResponse Alibabacloud_Dcdn20180115::Client::untagDcdnResources(shared_ptr<UntagDcdnResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagDcdnResourcesWithOptions(request, runtime);
}

UpdateDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::updateDcdnDeliverTaskWithOptions(shared_ptr<UpdateDcdnDeliverTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDcdnDeliverTaskShrinkRequest> request = make_shared<UpdateDcdnDeliverTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->deliver)) {
    request->deliverShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deliver, make_shared<string>("Deliver"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->schedule)) {
    request->scheduleShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->schedule, make_shared<string>("Schedule"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDcdnDeliverTaskResponse(doRPCRequest(make_shared<string>("UpdateDcdnDeliverTask"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDcdnDeliverTaskResponse Alibabacloud_Dcdn20180115::Client::updateDcdnDeliverTask(shared_ptr<UpdateDcdnDeliverTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDcdnDeliverTaskWithOptions(request, runtime);
}

UpdateDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::updateDcdnDomainWithOptions(shared_ptr<UpdateDcdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDcdnDomainResponse(doRPCRequest(make_shared<string>("UpdateDcdnDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDcdnDomainResponse Alibabacloud_Dcdn20180115::Client::updateDcdnDomain(shared_ptr<UpdateDcdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDcdnDomainWithOptions(request, runtime);
}

UpdateDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::updateDcdnIpaDomainWithOptions(shared_ptr<UpdateDcdnIpaDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDcdnIpaDomainResponse(doRPCRequest(make_shared<string>("UpdateDcdnIpaDomain"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDcdnIpaDomainResponse Alibabacloud_Dcdn20180115::Client::updateDcdnIpaDomain(shared_ptr<UpdateDcdnIpaDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDcdnIpaDomainWithOptions(request, runtime);
}

UpdateDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::updateDcdnSubTaskWithOptions(shared_ptr<UpdateDcdnSubTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDcdnSubTaskResponse(doRPCRequest(make_shared<string>("UpdateDcdnSubTask"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDcdnSubTaskResponse Alibabacloud_Dcdn20180115::Client::updateDcdnSubTask(shared_ptr<UpdateDcdnSubTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDcdnSubTaskWithOptions(request, runtime);
}

UploadRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::uploadRoutineCodeWithOptions(shared_ptr<UploadRoutineCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadRoutineCodeResponse(doRPCRequest(make_shared<string>("UploadRoutineCode"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::uploadRoutineCode(shared_ptr<UploadRoutineCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadRoutineCodeWithOptions(request, runtime);
}

UploadStagingRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::uploadStagingRoutineCodeWithOptions(shared_ptr<UploadStagingRoutineCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadStagingRoutineCodeResponse(doRPCRequest(make_shared<string>("UploadStagingRoutineCode"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadStagingRoutineCodeResponse Alibabacloud_Dcdn20180115::Client::uploadStagingRoutineCode(shared_ptr<UploadStagingRoutineCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadStagingRoutineCodeWithOptions(request, runtime);
}

VerifyDcdnDomainOwnerResponse Alibabacloud_Dcdn20180115::Client::verifyDcdnDomainOwnerWithOptions(shared_ptr<VerifyDcdnDomainOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifyDcdnDomainOwnerResponse(doRPCRequest(make_shared<string>("VerifyDcdnDomainOwner"), make_shared<string>("2018-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VerifyDcdnDomainOwnerResponse Alibabacloud_Dcdn20180115::Client::verifyDcdnDomainOwner(shared_ptr<VerifyDcdnDomainOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyDcdnDomainOwnerWithOptions(request, runtime);
}

