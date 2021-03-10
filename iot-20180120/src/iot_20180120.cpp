// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/iot_20180120.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/rpc.hpp>
#include <alibabacloud/rpcutil.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Iot20180120;

Alibabacloud_Iot20180120::Client::Client(const shared_ptr<Alibabacloud_RPC::Config>& config) : Alibabacloud_RPC::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "iot.ap-northeast-1.aliyuncs.com"},
    {"ap-south-1", "iot.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-2", "iot.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-3", "iot.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-5", "iot.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing", "iot.aliyuncs.com"},
    {"cn-beijing-finance-1", "iot.aliyuncs.com"},
    {"cn-beijing-finance-pop", "iot.aliyuncs.com"},
    {"cn-beijing-gov-1", "iot.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "iot.aliyuncs.com"},
    {"cn-chengdu", "iot.aliyuncs.com"},
    {"cn-edge-1", "iot.aliyuncs.com"},
    {"cn-fujian", "iot.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "iot.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "iot.aliyuncs.com"},
    {"cn-hangzhou-finance", "iot.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "iot.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "iot.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "iot.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "iot.aliyuncs.com"},
    {"cn-hangzhou-test-306", "iot.aliyuncs.com"},
    {"cn-hongkong", "iot.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "iot.aliyuncs.com"},
    {"cn-huhehaote", "iot.aliyuncs.com"},
    {"cn-north-2-gov-1", "iot.aliyuncs.com"},
    {"cn-qingdao", "iot.aliyuncs.com"},
    {"cn-qingdao-nebula", "iot.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "iot.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "iot.aliyuncs.com"},
    {"cn-shanghai-finance-1", "iot.aliyuncs.com"},
    {"cn-shanghai-inner", "iot.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "iot.aliyuncs.com"},
    {"cn-shenzhen", "iot.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "iot.aliyuncs.com"},
    {"cn-shenzhen-inner", "iot.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "iot.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "iot.aliyuncs.com"},
    {"cn-wuhan", "iot.aliyuncs.com"},
    {"cn-yushanfang", "iot.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "iot.aliyuncs.com"},
    {"cn-zhangjiakou", "iot.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "iot.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "iot.aliyuncs.com"},
    {"eu-west-1", "iot.ap-northeast-1.aliyuncs.com"},
    {"eu-west-1-oxs", "iot.ap-northeast-1.aliyuncs.com"},
    {"me-east-1", "iot.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop", "iot.ap-northeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("iot"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

ListAnalyticsDataResponse Alibabacloud_Iot20180120::Client::listAnalyticsDataWithOptions(shared_ptr<ListAnalyticsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListAnalyticsDataResponse(doRequest(make_shared<string>("ListAnalyticsData"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListAnalyticsDataResponse Alibabacloud_Iot20180120::Client::listAnalyticsData(shared_ptr<ListAnalyticsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAnalyticsDataWithOptions(request, runtime);
}

BatchBindDevicesIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindDevicesIntoProjectWithOptions(shared_ptr<BatchBindDevicesIntoProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchBindDevicesIntoProjectResponse(doRequest(make_shared<string>("BatchBindDevicesIntoProject"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchBindDevicesIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindDevicesIntoProject(shared_ptr<BatchBindDevicesIntoProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindDevicesIntoProjectWithOptions(request, runtime);
}

BatchBindProductsIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindProductsIntoProjectWithOptions(shared_ptr<BatchBindProductsIntoProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchBindProductsIntoProjectResponse(doRequest(make_shared<string>("BatchBindProductsIntoProject"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchBindProductsIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindProductsIntoProject(shared_ptr<BatchBindProductsIntoProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindProductsIntoProjectWithOptions(request, runtime);
}

BatchUnbindProjectDevicesResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectDevicesWithOptions(shared_ptr<BatchUnbindProjectDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchUnbindProjectDevicesResponse(doRequest(make_shared<string>("BatchUnbindProjectDevices"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchUnbindProjectDevicesResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectDevices(shared_ptr<BatchUnbindProjectDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindProjectDevicesWithOptions(request, runtime);
}

BatchUnbindProjectProductsResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectProductsWithOptions(shared_ptr<BatchUnbindProjectProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchUnbindProjectProductsResponse(doRequest(make_shared<string>("BatchUnbindProjectProducts"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchUnbindProjectProductsResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectProducts(shared_ptr<BatchUnbindProjectProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindProjectProductsWithOptions(request, runtime);
}

SyncSpeechByCombinationResponse Alibabacloud_Iot20180120::Client::syncSpeechByCombinationWithOptions(shared_ptr<SyncSpeechByCombinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SyncSpeechByCombinationResponse(doRequest(make_shared<string>("SyncSpeechByCombination"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SyncSpeechByCombinationResponse Alibabacloud_Iot20180120::Client::syncSpeechByCombination(shared_ptr<SyncSpeechByCombinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncSpeechByCombinationWithOptions(request, runtime);
}

OpenIotServiceResponse Alibabacloud_Iot20180120::Client::openIotServiceWithOptions(shared_ptr<OpenIotServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return OpenIotServiceResponse(doRequest(make_shared<string>("OpenIotService"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK,APP,PrivateKey,BearerToken"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

OpenIotServiceResponse Alibabacloud_Iot20180120::Client::openIotService(shared_ptr<OpenIotServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openIotServiceWithOptions(request, runtime);
}

CreateRulengDistributeJobResponse Alibabacloud_Iot20180120::Client::createRulengDistributeJobWithOptions(shared_ptr<CreateRulengDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateRulengDistributeJobResponse(doRequest(make_shared<string>("CreateRulengDistributeJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateRulengDistributeJobResponse Alibabacloud_Iot20180120::Client::createRulengDistributeJob(shared_ptr<CreateRulengDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRulengDistributeJobWithOptions(request, runtime);
}

ListTaskByPageResponse Alibabacloud_Iot20180120::Client::listTaskByPageWithOptions(shared_ptr<ListTaskByPageRequest> tmp, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmp);
  shared_ptr<ListTaskByPageShrinkRequest> request = make_shared<ListTaskByPageShrinkRequest>();
  Alibabacloud_RPCUtil::Client::convert(tmp, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmp->device)) {
    request->deviceShrink = make_shared<string>(Darabonba_Util::Client::toJSONString(tmp->device));
  }
  return ListTaskByPageResponse(doRequest(make_shared<string>("ListTaskByPage"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListTaskByPageResponse Alibabacloud_Iot20180120::Client::listTaskByPage(shared_ptr<ListTaskByPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskByPageWithOptions(request, runtime);
}

ListTaskResponse Alibabacloud_Iot20180120::Client::listTaskWithOptions(shared_ptr<ListTaskRequest> tmp, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmp);
  shared_ptr<ListTaskShrinkRequest> request = make_shared<ListTaskShrinkRequest>();
  Alibabacloud_RPCUtil::Client::convert(tmp, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmp->device)) {
    request->deviceShrink = make_shared<string>(Darabonba_Util::Client::toJSONString(tmp->device));
  }
  return ListTaskResponse(doRequest(make_shared<string>("ListTask"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListTaskResponse Alibabacloud_Iot20180120::Client::listTask(shared_ptr<ListTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskWithOptions(request, runtime);
}

QueryJobStatisticsResponse Alibabacloud_Iot20180120::Client::queryJobStatisticsWithOptions(shared_ptr<QueryJobStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryJobStatisticsResponse(doRequest(make_shared<string>("QueryJobStatistics"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

QueryJobStatisticsResponse Alibabacloud_Iot20180120::Client::queryJobStatistics(shared_ptr<QueryJobStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryJobStatisticsWithOptions(request, runtime);
}

DeleteJobResponse Alibabacloud_Iot20180120::Client::deleteJobWithOptions(shared_ptr<DeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteJobResponse(doRequest(make_shared<string>("DeleteJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteJobResponse Alibabacloud_Iot20180120::Client::deleteJob(shared_ptr<DeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteJobWithOptions(request, runtime);
}

CancelJobResponse Alibabacloud_Iot20180120::Client::cancelJobWithOptions(shared_ptr<CancelJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CancelJobResponse(doRequest(make_shared<string>("CancelJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CancelJobResponse Alibabacloud_Iot20180120::Client::cancelJob(shared_ptr<CancelJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelJobWithOptions(request, runtime);
}

ListJobResponse Alibabacloud_Iot20180120::Client::listJobWithOptions(shared_ptr<ListJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListJobResponse(doRequest(make_shared<string>("ListJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListJobResponse Alibabacloud_Iot20180120::Client::listJob(shared_ptr<ListJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobWithOptions(request, runtime);
}

QueryJobResponse Alibabacloud_Iot20180120::Client::queryJobWithOptions(shared_ptr<QueryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryJobResponse(doRequest(make_shared<string>("QueryJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryJobResponse Alibabacloud_Iot20180120::Client::queryJob(shared_ptr<QueryJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryJobWithOptions(request, runtime);
}

UpdateJobResponse Alibabacloud_Iot20180120::Client::updateJobWithOptions(shared_ptr<UpdateJobRequest> tmp, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmp);
  shared_ptr<UpdateJobShrinkRequest> request = make_shared<UpdateJobShrinkRequest>();
  Alibabacloud_RPCUtil::Client::convert(tmp, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmp->timeoutConfig)) {
    request->timeoutConfigShrink = make_shared<string>(Darabonba_Util::Client::toJSONString(tmp->timeoutConfig));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmp->rolloutConfig)) {
    request->rolloutConfigShrink = make_shared<string>(Darabonba_Util::Client::toJSONString(tmp->rolloutConfig));
  }
  return UpdateJobResponse(doRequest(make_shared<string>("UpdateJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateJobResponse Alibabacloud_Iot20180120::Client::updateJob(shared_ptr<UpdateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateJobWithOptions(request, runtime);
}

CreateJobResponse Alibabacloud_Iot20180120::Client::createJobWithOptions(shared_ptr<CreateJobRequest> tmp, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmp);
  shared_ptr<CreateJobShrinkRequest> request = make_shared<CreateJobShrinkRequest>();
  Alibabacloud_RPCUtil::Client::convert(tmp, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmp->jobFile)) {
    request->jobFileShrink = make_shared<string>(Darabonba_Util::Client::toJSONString(tmp->jobFile));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmp->timeoutConfig)) {
    request->timeoutConfigShrink = make_shared<string>(Darabonba_Util::Client::toJSONString(tmp->timeoutConfig));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmp->rolloutConfig)) {
    request->rolloutConfigShrink = make_shared<string>(Darabonba_Util::Client::toJSONString(tmp->rolloutConfig));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmp->targetConfig)) {
    request->targetConfigShrink = make_shared<string>(Darabonba_Util::Client::toJSONString(tmp->targetConfig));
  }
  return CreateJobResponse(doRequest(make_shared<string>("CreateJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateJobResponse Alibabacloud_Iot20180120::Client::createJob(shared_ptr<CreateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobWithOptions(request, runtime);
}

GenerateFileUploadURLResponse Alibabacloud_Iot20180120::Client::generateFileUploadURLWithOptions(shared_ptr<GenerateFileUploadURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GenerateFileUploadURLResponse(doRequest(make_shared<string>("GenerateFileUploadURL"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GenerateFileUploadURLResponse Alibabacloud_Iot20180120::Client::generateFileUploadURL(shared_ptr<GenerateFileUploadURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateFileUploadURLWithOptions(request, runtime);
}

CreateProductDistributeJobResponse Alibabacloud_Iot20180120::Client::createProductDistributeJobWithOptions(shared_ptr<CreateProductDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateProductDistributeJobResponse(doRequest(make_shared<string>("CreateProductDistributeJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateProductDistributeJobResponse Alibabacloud_Iot20180120::Client::createProductDistributeJob(shared_ptr<CreateProductDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductDistributeJobWithOptions(request, runtime);
}

QueryDeviceOriginalPropertyDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyDataWithOptions(shared_ptr<QueryDeviceOriginalPropertyDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceOriginalPropertyDataResponse(doRequest(make_shared<string>("QueryDeviceOriginalPropertyData"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceOriginalPropertyDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyData(shared_ptr<QueryDeviceOriginalPropertyDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalPropertyDataWithOptions(request, runtime);
}

QueryDeviceOriginalEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalEventDataWithOptions(shared_ptr<QueryDeviceOriginalEventDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceOriginalEventDataResponse(doRequest(make_shared<string>("QueryDeviceOriginalEventData"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceOriginalEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalEventData(shared_ptr<QueryDeviceOriginalEventDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalEventDataWithOptions(request, runtime);
}

QueryDeviceOriginalPropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyStatusWithOptions(shared_ptr<QueryDeviceOriginalPropertyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceOriginalPropertyStatusResponse(doRequest(make_shared<string>("QueryDeviceOriginalPropertyStatus"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceOriginalPropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyStatus(shared_ptr<QueryDeviceOriginalPropertyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalPropertyStatusWithOptions(request, runtime);
}

QueryDeviceOriginalServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalServiceDataWithOptions(shared_ptr<QueryDeviceOriginalServiceDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceOriginalServiceDataResponse(doRequest(make_shared<string>("QueryDeviceOriginalServiceData"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceOriginalServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalServiceData(shared_ptr<QueryDeviceOriginalServiceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalServiceDataWithOptions(request, runtime);
}

CreateThingScriptResponse Alibabacloud_Iot20180120::Client::createThingScriptWithOptions(shared_ptr<CreateThingScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateThingScriptResponse(doRequest(make_shared<string>("CreateThingScript"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateThingScriptResponse Alibabacloud_Iot20180120::Client::createThingScript(shared_ptr<CreateThingScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createThingScriptWithOptions(request, runtime);
}

UpdateThingScriptResponse Alibabacloud_Iot20180120::Client::updateThingScriptWithOptions(shared_ptr<UpdateThingScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateThingScriptResponse(doRequest(make_shared<string>("UpdateThingScript"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateThingScriptResponse Alibabacloud_Iot20180120::Client::updateThingScript(shared_ptr<UpdateThingScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateThingScriptWithOptions(request, runtime);
}

GetThingScriptResponse Alibabacloud_Iot20180120::Client::getThingScriptWithOptions(shared_ptr<GetThingScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetThingScriptResponse(doRequest(make_shared<string>("GetThingScript"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetThingScriptResponse Alibabacloud_Iot20180120::Client::getThingScript(shared_ptr<GetThingScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingScriptWithOptions(request, runtime);
}

ListOTAModuleVersionsByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAModuleVersionsByDeviceWithOptions(shared_ptr<ListOTAModuleVersionsByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListOTAModuleVersionsByDeviceResponse(doRequest(make_shared<string>("ListOTAModuleVersionsByDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListOTAModuleVersionsByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAModuleVersionsByDevice(shared_ptr<ListOTAModuleVersionsByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAModuleVersionsByDeviceWithOptions(request, runtime);
}

BatchPubResponse Alibabacloud_Iot20180120::Client::batchPubWithOptions(shared_ptr<BatchPubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchPubResponse(doRequest(make_shared<string>("BatchPub"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchPubResponse Alibabacloud_Iot20180120::Client::batchPub(shared_ptr<BatchPubRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchPubWithOptions(request, runtime);
}

SpeechByCombinationResponse Alibabacloud_Iot20180120::Client::speechByCombinationWithOptions(shared_ptr<SpeechByCombinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SpeechByCombinationResponse(doRequest(make_shared<string>("SpeechByCombination"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SpeechByCombinationResponse Alibabacloud_Iot20180120::Client::speechByCombination(shared_ptr<SpeechByCombinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return speechByCombinationWithOptions(request, runtime);
}

UpdateThingModelValidationConfigResponse Alibabacloud_Iot20180120::Client::updateThingModelValidationConfigWithOptions(shared_ptr<UpdateThingModelValidationConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateThingModelValidationConfigResponse(doRequest(make_shared<string>("UpdateThingModelValidationConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateThingModelValidationConfigResponse Alibabacloud_Iot20180120::Client::updateThingModelValidationConfig(shared_ptr<UpdateThingModelValidationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateThingModelValidationConfigWithOptions(request, runtime);
}

QueryDeviceBySQLResponse Alibabacloud_Iot20180120::Client::queryDeviceBySQLWithOptions(shared_ptr<QueryDeviceBySQLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceBySQLResponse(doRequest(make_shared<string>("QueryDeviceBySQL"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceBySQLResponse Alibabacloud_Iot20180120::Client::queryDeviceBySQL(shared_ptr<QueryDeviceBySQLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceBySQLWithOptions(request, runtime);
}

ListOTAModuleByProductResponse Alibabacloud_Iot20180120::Client::listOTAModuleByProductWithOptions(shared_ptr<ListOTAModuleByProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListOTAModuleByProductResponse(doRequest(make_shared<string>("ListOTAModuleByProduct"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

ListOTAModuleByProductResponse Alibabacloud_Iot20180120::Client::listOTAModuleByProduct(shared_ptr<ListOTAModuleByProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAModuleByProductWithOptions(request, runtime);
}

DeleteOTAModuleResponse Alibabacloud_Iot20180120::Client::deleteOTAModuleWithOptions(shared_ptr<DeleteOTAModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteOTAModuleResponse(doRequest(make_shared<string>("DeleteOTAModule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteOTAModuleResponse Alibabacloud_Iot20180120::Client::deleteOTAModule(shared_ptr<DeleteOTAModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOTAModuleWithOptions(request, runtime);
}

GenerateDeviceNameListURLResponse Alibabacloud_Iot20180120::Client::generateDeviceNameListURLWithOptions(shared_ptr<GenerateDeviceNameListURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GenerateDeviceNameListURLResponse(doRequest(make_shared<string>("GenerateDeviceNameListURL"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GenerateDeviceNameListURLResponse Alibabacloud_Iot20180120::Client::generateDeviceNameListURL(shared_ptr<GenerateDeviceNameListURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDeviceNameListURLWithOptions(request, runtime);
}

UpdateOTAModuleResponse Alibabacloud_Iot20180120::Client::updateOTAModuleWithOptions(shared_ptr<UpdateOTAModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateOTAModuleResponse(doRequest(make_shared<string>("UpdateOTAModule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateOTAModuleResponse Alibabacloud_Iot20180120::Client::updateOTAModule(shared_ptr<UpdateOTAModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOTAModuleWithOptions(request, runtime);
}

CreateOTAModuleResponse Alibabacloud_Iot20180120::Client::createOTAModuleWithOptions(shared_ptr<CreateOTAModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateOTAModuleResponse(doRequest(make_shared<string>("CreateOTAModule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateOTAModuleResponse Alibabacloud_Iot20180120::Client::createOTAModule(shared_ptr<CreateOTAModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAModuleWithOptions(request, runtime);
}

QueryThingModelExtendConfigPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfigPublishedWithOptions(shared_ptr<QueryThingModelExtendConfigPublishedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryThingModelExtendConfigPublishedResponse(doRequest(make_shared<string>("QueryThingModelExtendConfigPublished"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryThingModelExtendConfigPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfigPublished(shared_ptr<QueryThingModelExtendConfigPublishedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelExtendConfigPublishedWithOptions(request, runtime);
}

GetThingModelTslPublishedResponse Alibabacloud_Iot20180120::Client::getThingModelTslPublishedWithOptions(shared_ptr<GetThingModelTslPublishedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetThingModelTslPublishedResponse(doRequest(make_shared<string>("GetThingModelTslPublished"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetThingModelTslPublishedResponse Alibabacloud_Iot20180120::Client::getThingModelTslPublished(shared_ptr<GetThingModelTslPublishedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingModelTslPublishedWithOptions(request, runtime);
}

QueryThingModelPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelPublishedWithOptions(shared_ptr<QueryThingModelPublishedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryThingModelPublishedResponse(doRequest(make_shared<string>("QueryThingModelPublished"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryThingModelPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelPublished(shared_ptr<QueryThingModelPublishedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelPublishedWithOptions(request, runtime);
}

QueryThingModelExtendConfigResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfigWithOptions(shared_ptr<QueryThingModelExtendConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryThingModelExtendConfigResponse(doRequest(make_shared<string>("QueryThingModelExtendConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryThingModelExtendConfigResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfig(shared_ptr<QueryThingModelExtendConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelExtendConfigWithOptions(request, runtime);
}

ListDistributedDeviceResponse Alibabacloud_Iot20180120::Client::listDistributedDeviceWithOptions(shared_ptr<ListDistributedDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDistributedDeviceResponse(doRequest(make_shared<string>("ListDistributedDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDistributedDeviceResponse Alibabacloud_Iot20180120::Client::listDistributedDevice(shared_ptr<ListDistributedDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDistributedDeviceWithOptions(request, runtime);
}

ListDistributedProductResponse Alibabacloud_Iot20180120::Client::listDistributedProductWithOptions(shared_ptr<ListDistributedProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDistributedProductResponse(doRequest(make_shared<string>("ListDistributedProduct"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDistributedProductResponse Alibabacloud_Iot20180120::Client::listDistributedProduct(shared_ptr<ListDistributedProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDistributedProductWithOptions(request, runtime);
}

QuerySubscribeRelationResponse Alibabacloud_Iot20180120::Client::querySubscribeRelationWithOptions(shared_ptr<QuerySubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QuerySubscribeRelationResponse(doRequest(make_shared<string>("QuerySubscribeRelation"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QuerySubscribeRelationResponse Alibabacloud_Iot20180120::Client::querySubscribeRelation(shared_ptr<QuerySubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySubscribeRelationWithOptions(request, runtime);
}

CreateConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createConsumerGroupSubscribeRelationWithOptions(shared_ptr<CreateConsumerGroupSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateConsumerGroupSubscribeRelationResponse(doRequest(make_shared<string>("CreateConsumerGroupSubscribeRelation"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createConsumerGroupSubscribeRelation(shared_ptr<CreateConsumerGroupSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsumerGroupSubscribeRelationWithOptions(request, runtime);
}

UpdateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::updateSubscribeRelationWithOptions(shared_ptr<UpdateSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateSubscribeRelationResponse(doRequest(make_shared<string>("UpdateSubscribeRelation"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::updateSubscribeRelation(shared_ptr<UpdateSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSubscribeRelationWithOptions(request, runtime);
}

DeleteConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroupSubscribeRelationWithOptions(shared_ptr<DeleteConsumerGroupSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteConsumerGroupSubscribeRelationResponse(doRequest(make_shared<string>("DeleteConsumerGroupSubscribeRelation"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroupSubscribeRelation(shared_ptr<DeleteConsumerGroupSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConsumerGroupSubscribeRelationWithOptions(request, runtime);
}

ResetConsumerGroupPositionResponse Alibabacloud_Iot20180120::Client::resetConsumerGroupPositionWithOptions(shared_ptr<ResetConsumerGroupPositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ResetConsumerGroupPositionResponse(doRequest(make_shared<string>("ResetConsumerGroupPosition"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ResetConsumerGroupPositionResponse Alibabacloud_Iot20180120::Client::resetConsumerGroupPosition(shared_ptr<ResetConsumerGroupPositionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetConsumerGroupPositionWithOptions(request, runtime);
}

UpdateConsumerGroupResponse Alibabacloud_Iot20180120::Client::updateConsumerGroupWithOptions(shared_ptr<UpdateConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateConsumerGroupResponse(doRequest(make_shared<string>("UpdateConsumerGroup"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateConsumerGroupResponse Alibabacloud_Iot20180120::Client::updateConsumerGroup(shared_ptr<UpdateConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConsumerGroupWithOptions(request, runtime);
}

BatchDeleteEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchDeleteEdgeInstanceChannelWithOptions(shared_ptr<BatchDeleteEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchDeleteEdgeInstanceChannelResponse(doRequest(make_shared<string>("BatchDeleteEdgeInstanceChannel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchDeleteEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchDeleteEdgeInstanceChannel(shared_ptr<BatchDeleteEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteEdgeInstanceChannelWithOptions(request, runtime);
}

BatchSetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceChannelWithOptions(shared_ptr<BatchSetEdgeInstanceDeviceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchSetEdgeInstanceDeviceChannelResponse(doRequest(make_shared<string>("BatchSetEdgeInstanceDeviceChannel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchSetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceChannel(shared_ptr<BatchSetEdgeInstanceDeviceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetEdgeInstanceDeviceChannelWithOptions(request, runtime);
}

BatchGetEdgeInstanceDeviceDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceDriverWithOptions(shared_ptr<BatchGetEdgeInstanceDeviceDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchGetEdgeInstanceDeviceDriverResponse(doRequest(make_shared<string>("BatchGetEdgeInstanceDeviceDriver"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchGetEdgeInstanceDeviceDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceDriver(shared_ptr<BatchGetEdgeInstanceDeviceDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDeviceDriverWithOptions(request, runtime);
}

BatchGetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceChannelWithOptions(shared_ptr<BatchGetEdgeInstanceDeviceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchGetEdgeInstanceDeviceChannelResponse(doRequest(make_shared<string>("BatchGetEdgeInstanceDeviceChannel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchGetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceChannel(shared_ptr<BatchGetEdgeInstanceDeviceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDeviceChannelWithOptions(request, runtime);
}

ReleaseEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::releaseEdgeDriverVersionWithOptions(shared_ptr<ReleaseEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ReleaseEdgeDriverVersionResponse(doRequest(make_shared<string>("ReleaseEdgeDriverVersion"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ReleaseEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::releaseEdgeDriverVersion(shared_ptr<ReleaseEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseEdgeDriverVersionWithOptions(request, runtime);
}

QueryEdgeInstanceDeviceByDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDeviceByDriverWithOptions(shared_ptr<QueryEdgeInstanceDeviceByDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryEdgeInstanceDeviceByDriverResponse(doRequest(make_shared<string>("QueryEdgeInstanceDeviceByDriver"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryEdgeInstanceDeviceByDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDeviceByDriver(shared_ptr<QueryEdgeInstanceDeviceByDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceDeviceByDriverWithOptions(request, runtime);
}

DisableSceneRuleResponse Alibabacloud_Iot20180120::Client::disableSceneRuleWithOptions(shared_ptr<DisableSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DisableSceneRuleResponse(doRequest(make_shared<string>("DisableSceneRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DisableSceneRuleResponse Alibabacloud_Iot20180120::Client::disableSceneRule(shared_ptr<DisableSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableSceneRuleWithOptions(request, runtime);
}

TriggerSceneRuleResponse Alibabacloud_Iot20180120::Client::triggerSceneRuleWithOptions(shared_ptr<TriggerSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return TriggerSceneRuleResponse(doRequest(make_shared<string>("TriggerSceneRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

TriggerSceneRuleResponse Alibabacloud_Iot20180120::Client::triggerSceneRule(shared_ptr<TriggerSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerSceneRuleWithOptions(request, runtime);
}

UnbindSceneRuleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindSceneRuleFromEdgeInstanceWithOptions(shared_ptr<UnbindSceneRuleFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UnbindSceneRuleFromEdgeInstanceResponse(doRequest(make_shared<string>("UnbindSceneRuleFromEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UnbindSceneRuleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindSceneRuleFromEdgeInstance(shared_ptr<UnbindSceneRuleFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindSceneRuleFromEdgeInstanceWithOptions(request, runtime);
}

QueryEdgeInstanceSceneRuleResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceSceneRuleWithOptions(shared_ptr<QueryEdgeInstanceSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryEdgeInstanceSceneRuleResponse(doRequest(make_shared<string>("QueryEdgeInstanceSceneRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryEdgeInstanceSceneRuleResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceSceneRule(shared_ptr<QueryEdgeInstanceSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceSceneRuleWithOptions(request, runtime);
}

CreateSceneRuleResponse Alibabacloud_Iot20180120::Client::createSceneRuleWithOptions(shared_ptr<CreateSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateSceneRuleResponse(doRequest(make_shared<string>("CreateSceneRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateSceneRuleResponse Alibabacloud_Iot20180120::Client::createSceneRule(shared_ptr<CreateSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSceneRuleWithOptions(request, runtime);
}

QueryDetailSceneRuleLogResponse Alibabacloud_Iot20180120::Client::queryDetailSceneRuleLogWithOptions(shared_ptr<QueryDetailSceneRuleLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDetailSceneRuleLogResponse(doRequest(make_shared<string>("QueryDetailSceneRuleLog"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDetailSceneRuleLogResponse Alibabacloud_Iot20180120::Client::queryDetailSceneRuleLog(shared_ptr<QueryDetailSceneRuleLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDetailSceneRuleLogWithOptions(request, runtime);
}

EnableSceneRuleResponse Alibabacloud_Iot20180120::Client::enableSceneRuleWithOptions(shared_ptr<EnableSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return EnableSceneRuleResponse(doRequest(make_shared<string>("EnableSceneRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

EnableSceneRuleResponse Alibabacloud_Iot20180120::Client::enableSceneRule(shared_ptr<EnableSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSceneRuleWithOptions(request, runtime);
}

UpdateSceneRuleResponse Alibabacloud_Iot20180120::Client::updateSceneRuleWithOptions(shared_ptr<UpdateSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateSceneRuleResponse(doRequest(make_shared<string>("UpdateSceneRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateSceneRuleResponse Alibabacloud_Iot20180120::Client::updateSceneRule(shared_ptr<UpdateSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSceneRuleWithOptions(request, runtime);
}

QuerySceneRuleResponse Alibabacloud_Iot20180120::Client::querySceneRuleWithOptions(shared_ptr<QuerySceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QuerySceneRuleResponse(doRequest(make_shared<string>("QuerySceneRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QuerySceneRuleResponse Alibabacloud_Iot20180120::Client::querySceneRule(shared_ptr<QuerySceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySceneRuleWithOptions(request, runtime);
}

QuerySummarySceneRuleLogResponse Alibabacloud_Iot20180120::Client::querySummarySceneRuleLogWithOptions(shared_ptr<QuerySummarySceneRuleLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QuerySummarySceneRuleLogResponse(doRequest(make_shared<string>("QuerySummarySceneRuleLog"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QuerySummarySceneRuleLogResponse Alibabacloud_Iot20180120::Client::querySummarySceneRuleLog(shared_ptr<QuerySummarySceneRuleLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySummarySceneRuleLogWithOptions(request, runtime);
}

GetSceneRuleResponse Alibabacloud_Iot20180120::Client::getSceneRuleWithOptions(shared_ptr<GetSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetSceneRuleResponse(doRequest(make_shared<string>("GetSceneRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetSceneRuleResponse Alibabacloud_Iot20180120::Client::getSceneRule(shared_ptr<GetSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSceneRuleWithOptions(request, runtime);
}

DeleteSceneRuleResponse Alibabacloud_Iot20180120::Client::deleteSceneRuleWithOptions(shared_ptr<DeleteSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteSceneRuleResponse(doRequest(make_shared<string>("DeleteSceneRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteSceneRuleResponse Alibabacloud_Iot20180120::Client::deleteSceneRule(shared_ptr<DeleteSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSceneRuleWithOptions(request, runtime);
}

BindSceneRuleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindSceneRuleToEdgeInstanceWithOptions(shared_ptr<BindSceneRuleToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BindSceneRuleToEdgeInstanceResponse(doRequest(make_shared<string>("BindSceneRuleToEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BindSceneRuleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindSceneRuleToEdgeInstance(shared_ptr<BindSceneRuleToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindSceneRuleToEdgeInstanceWithOptions(request, runtime);
}

CreateEdgeOssPreSignedAddressResponse Alibabacloud_Iot20180120::Client::createEdgeOssPreSignedAddressWithOptions(shared_ptr<CreateEdgeOssPreSignedAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateEdgeOssPreSignedAddressResponse(doRequest(make_shared<string>("CreateEdgeOssPreSignedAddress"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateEdgeOssPreSignedAddressResponse Alibabacloud_Iot20180120::Client::createEdgeOssPreSignedAddress(shared_ptr<CreateEdgeOssPreSignedAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeOssPreSignedAddressWithOptions(request, runtime);
}

UpdateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::updateEdgeDriverVersionWithOptions(shared_ptr<UpdateEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateEdgeDriverVersionResponse(doRequest(make_shared<string>("UpdateEdgeDriverVersion"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::updateEdgeDriverVersion(shared_ptr<UpdateEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeDriverVersionWithOptions(request, runtime);
}

DeleteEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriverVersionWithOptions(shared_ptr<DeleteEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteEdgeDriverVersionResponse(doRequest(make_shared<string>("DeleteEdgeDriverVersion"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriverVersion(shared_ptr<DeleteEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeDriverVersionWithOptions(request, runtime);
}

CreateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::createEdgeDriverVersionWithOptions(shared_ptr<CreateEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateEdgeDriverVersionResponse(doRequest(make_shared<string>("CreateEdgeDriverVersion"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::createEdgeDriverVersion(shared_ptr<CreateEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeDriverVersionWithOptions(request, runtime);
}

DeleteEdgeDriverResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriverWithOptions(shared_ptr<DeleteEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteEdgeDriverResponse(doRequest(make_shared<string>("DeleteEdgeDriver"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteEdgeDriverResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriver(shared_ptr<DeleteEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeDriverWithOptions(request, runtime);
}

QueryEdgeDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeDriverWithOptions(shared_ptr<QueryEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryEdgeDriverResponse(doRequest(make_shared<string>("QueryEdgeDriver"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryEdgeDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeDriver(shared_ptr<QueryEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeDriverWithOptions(request, runtime);
}

BatchGetEdgeDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeDriverWithOptions(shared_ptr<BatchGetEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchGetEdgeDriverResponse(doRequest(make_shared<string>("BatchGetEdgeDriver"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchGetEdgeDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeDriver(shared_ptr<BatchGetEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeDriverWithOptions(request, runtime);
}

CreateEdgeDriverResponse Alibabacloud_Iot20180120::Client::createEdgeDriverWithOptions(shared_ptr<CreateEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateEdgeDriverResponse(doRequest(make_shared<string>("CreateEdgeDriver"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateEdgeDriverResponse Alibabacloud_Iot20180120::Client::createEdgeDriver(shared_ptr<CreateEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeDriverWithOptions(request, runtime);
}

GetEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::getEdgeDriverVersionWithOptions(shared_ptr<GetEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetEdgeDriverVersionResponse(doRequest(make_shared<string>("GetEdgeDriverVersion"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::getEdgeDriverVersion(shared_ptr<GetEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeDriverVersionWithOptions(request, runtime);
}

QueryEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::queryEdgeDriverVersionWithOptions(shared_ptr<QueryEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryEdgeDriverVersionResponse(doRequest(make_shared<string>("QueryEdgeDriverVersion"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::queryEdgeDriverVersion(shared_ptr<QueryEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeDriverVersionWithOptions(request, runtime);
}

BatchGetDeviceBindStatusResponse Alibabacloud_Iot20180120::Client::batchGetDeviceBindStatusWithOptions(shared_ptr<BatchGetDeviceBindStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchGetDeviceBindStatusResponse(doRequest(make_shared<string>("BatchGetDeviceBindStatus"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchGetDeviceBindStatusResponse Alibabacloud_Iot20180120::Client::batchGetDeviceBindStatus(shared_ptr<BatchGetDeviceBindStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetDeviceBindStatusWithOptions(request, runtime);
}

ListOTAJobByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAJobByDeviceWithOptions(shared_ptr<ListOTAJobByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListOTAJobByDeviceResponse(doRequest(make_shared<string>("ListOTAJobByDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListOTAJobByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAJobByDevice(shared_ptr<ListOTAJobByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAJobByDeviceWithOptions(request, runtime);
}

UpdateThingModelResponse Alibabacloud_Iot20180120::Client::updateThingModelWithOptions(shared_ptr<UpdateThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateThingModelResponse(doRequest(make_shared<string>("UpdateThingModel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateThingModelResponse Alibabacloud_Iot20180120::Client::updateThingModel(shared_ptr<UpdateThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateThingModelWithOptions(request, runtime);
}

CreateThingModelResponse Alibabacloud_Iot20180120::Client::createThingModelWithOptions(shared_ptr<CreateThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateThingModelResponse(doRequest(make_shared<string>("CreateThingModel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateThingModelResponse Alibabacloud_Iot20180120::Client::createThingModel(shared_ptr<CreateThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createThingModelWithOptions(request, runtime);
}

ListOTATaskByJobResponse Alibabacloud_Iot20180120::Client::listOTATaskByJobWithOptions(shared_ptr<ListOTATaskByJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListOTATaskByJobResponse(doRequest(make_shared<string>("ListOTATaskByJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListOTATaskByJobResponse Alibabacloud_Iot20180120::Client::listOTATaskByJob(shared_ptr<ListOTATaskByJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTATaskByJobWithOptions(request, runtime);
}

ListThingTemplatesResponse Alibabacloud_Iot20180120::Client::listThingTemplatesWithOptions(shared_ptr<ListThingTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListThingTemplatesResponse(doRequest(make_shared<string>("ListThingTemplates"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListThingTemplatesResponse Alibabacloud_Iot20180120::Client::listThingTemplates(shared_ptr<ListThingTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listThingTemplatesWithOptions(request, runtime);
}

GetThingTemplateResponse Alibabacloud_Iot20180120::Client::getThingTemplateWithOptions(shared_ptr<GetThingTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetThingTemplateResponse(doRequest(make_shared<string>("GetThingTemplate"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetThingTemplateResponse Alibabacloud_Iot20180120::Client::getThingTemplate(shared_ptr<GetThingTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingTemplateWithOptions(request, runtime);
}

ListThingModelVersionResponse Alibabacloud_Iot20180120::Client::listThingModelVersionWithOptions(shared_ptr<ListThingModelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListThingModelVersionResponse(doRequest(make_shared<string>("ListThingModelVersion"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListThingModelVersionResponse Alibabacloud_Iot20180120::Client::listThingModelVersion(shared_ptr<ListThingModelVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listThingModelVersionWithOptions(request, runtime);
}

ImportThingModelTslResponse Alibabacloud_Iot20180120::Client::importThingModelTslWithOptions(shared_ptr<ImportThingModelTslRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ImportThingModelTslResponse(doRequest(make_shared<string>("ImportThingModelTsl"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ImportThingModelTslResponse Alibabacloud_Iot20180120::Client::importThingModelTsl(shared_ptr<ImportThingModelTslRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importThingModelTslWithOptions(request, runtime);
}

PublishThingModelResponse Alibabacloud_Iot20180120::Client::publishThingModelWithOptions(shared_ptr<PublishThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return PublishThingModelResponse(doRequest(make_shared<string>("PublishThingModel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

PublishThingModelResponse Alibabacloud_Iot20180120::Client::publishThingModel(shared_ptr<PublishThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishThingModelWithOptions(request, runtime);
}

CopyThingModelResponse Alibabacloud_Iot20180120::Client::copyThingModelWithOptions(shared_ptr<CopyThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CopyThingModelResponse(doRequest(make_shared<string>("CopyThingModel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CopyThingModelResponse Alibabacloud_Iot20180120::Client::copyThingModel(shared_ptr<CopyThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyThingModelWithOptions(request, runtime);
}

GetThingModelTslResponse Alibabacloud_Iot20180120::Client::getThingModelTslWithOptions(shared_ptr<GetThingModelTslRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetThingModelTslResponse(doRequest(make_shared<string>("GetThingModelTsl"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetThingModelTslResponse Alibabacloud_Iot20180120::Client::getThingModelTsl(shared_ptr<GetThingModelTslRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingModelTslWithOptions(request, runtime);
}

QueryThingModelResponse Alibabacloud_Iot20180120::Client::queryThingModelWithOptions(shared_ptr<QueryThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryThingModelResponse(doRequest(make_shared<string>("QueryThingModel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryThingModelResponse Alibabacloud_Iot20180120::Client::queryThingModel(shared_ptr<QueryThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelWithOptions(request, runtime);
}

DeleteThingModelResponse Alibabacloud_Iot20180120::Client::deleteThingModelWithOptions(shared_ptr<DeleteThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteThingModelResponse(doRequest(make_shared<string>("DeleteThingModel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteThingModelResponse Alibabacloud_Iot20180120::Client::deleteThingModel(shared_ptr<DeleteThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteThingModelWithOptions(request, runtime);
}

UpdateProductFilterConfigResponse Alibabacloud_Iot20180120::Client::updateProductFilterConfigWithOptions(shared_ptr<UpdateProductFilterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateProductFilterConfigResponse(doRequest(make_shared<string>("UpdateProductFilterConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateProductFilterConfigResponse Alibabacloud_Iot20180120::Client::updateProductFilterConfig(shared_ptr<UpdateProductFilterConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductFilterConfigWithOptions(request, runtime);
}

CancelOTAStrategyByJobResponse Alibabacloud_Iot20180120::Client::cancelOTAStrategyByJobWithOptions(shared_ptr<CancelOTAStrategyByJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CancelOTAStrategyByJobResponse(doRequest(make_shared<string>("CancelOTAStrategyByJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CancelOTAStrategyByJobResponse Alibabacloud_Iot20180120::Client::cancelOTAStrategyByJob(shared_ptr<CancelOTAStrategyByJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOTAStrategyByJobWithOptions(request, runtime);
}

ListOTAJobByFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAJobByFirmwareWithOptions(shared_ptr<ListOTAJobByFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListOTAJobByFirmwareResponse(doRequest(make_shared<string>("ListOTAJobByFirmware"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListOTAJobByFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAJobByFirmware(shared_ptr<ListOTAJobByFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAJobByFirmwareWithOptions(request, runtime);
}

ListOTAFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAFirmwareWithOptions(shared_ptr<ListOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListOTAFirmwareResponse(doRequest(make_shared<string>("ListOTAFirmware"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListOTAFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAFirmware(shared_ptr<ListOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAFirmwareWithOptions(request, runtime);
}

CancelOTATaskByJobResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByJobWithOptions(shared_ptr<CancelOTATaskByJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CancelOTATaskByJobResponse(doRequest(make_shared<string>("CancelOTATaskByJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CancelOTATaskByJobResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByJob(shared_ptr<CancelOTATaskByJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOTATaskByJobWithOptions(request, runtime);
}

CreateDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::createDeviceDistributeJobWithOptions(shared_ptr<CreateDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateDeviceDistributeJobResponse(doRequest(make_shared<string>("CreateDeviceDistributeJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::createDeviceDistributeJob(shared_ptr<CreateDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceDistributeJobWithOptions(request, runtime);
}

QueryDeviceDistributeDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeDetailWithOptions(shared_ptr<QueryDeviceDistributeDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceDistributeDetailResponse(doRequest(make_shared<string>("QueryDeviceDistributeDetail"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceDistributeDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeDetail(shared_ptr<QueryDeviceDistributeDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDistributeDetailWithOptions(request, runtime);
}

ListDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::listDeviceDistributeJobWithOptions(shared_ptr<ListDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDeviceDistributeJobResponse(doRequest(make_shared<string>("ListDeviceDistributeJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::listDeviceDistributeJob(shared_ptr<ListDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceDistributeJobWithOptions(request, runtime);
}

QueryDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeJobWithOptions(shared_ptr<QueryDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceDistributeJobResponse(doRequest(make_shared<string>("QueryDeviceDistributeJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeJob(shared_ptr<QueryDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDistributeJobWithOptions(request, runtime);
}

DeleteDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::deleteDeviceDistributeJobWithOptions(shared_ptr<DeleteDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteDeviceDistributeJobResponse(doRequest(make_shared<string>("DeleteDeviceDistributeJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::deleteDeviceDistributeJob(shared_ptr<DeleteDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceDistributeJobWithOptions(request, runtime);
}

QueryDeviceByStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceByStatusWithOptions(shared_ptr<QueryDeviceByStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceByStatusResponse(doRequest(make_shared<string>("QueryDeviceByStatus"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceByStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceByStatus(shared_ptr<QueryDeviceByStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceByStatusWithOptions(request, runtime);
}

GenerateOTAUploadURLResponse Alibabacloud_Iot20180120::Client::generateOTAUploadURLWithOptions(shared_ptr<GenerateOTAUploadURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GenerateOTAUploadURLResponse(doRequest(make_shared<string>("GenerateOTAUploadURL"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GenerateOTAUploadURLResponse Alibabacloud_Iot20180120::Client::generateOTAUploadURL(shared_ptr<GenerateOTAUploadURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateOTAUploadURLWithOptions(request, runtime);
}

QueryProductCertInfoResponse Alibabacloud_Iot20180120::Client::queryProductCertInfoWithOptions(shared_ptr<QueryProductCertInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryProductCertInfoResponse(doRequest(make_shared<string>("QueryProductCertInfo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryProductCertInfoResponse Alibabacloud_Iot20180120::Client::queryProductCertInfo(shared_ptr<QueryProductCertInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductCertInfoWithOptions(request, runtime);
}

SetProductCertInfoResponse Alibabacloud_Iot20180120::Client::setProductCertInfoWithOptions(shared_ptr<SetProductCertInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SetProductCertInfoResponse(doRequest(make_shared<string>("SetProductCertInfo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SetProductCertInfoResponse Alibabacloud_Iot20180120::Client::setProductCertInfo(shared_ptr<SetProductCertInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setProductCertInfoWithOptions(request, runtime);
}

CreateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createSubscribeRelationWithOptions(shared_ptr<CreateSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateSubscribeRelationResponse(doRequest(make_shared<string>("CreateSubscribeRelation"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createSubscribeRelation(shared_ptr<CreateSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubscribeRelationWithOptions(request, runtime);
}

DeleteSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteSubscribeRelationWithOptions(shared_ptr<DeleteSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteSubscribeRelationResponse(doRequest(make_shared<string>("DeleteSubscribeRelation"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteSubscribeRelation(shared_ptr<DeleteSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSubscribeRelationWithOptions(request, runtime);
}

QueryConsumerGroupStatusResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupStatusWithOptions(shared_ptr<QueryConsumerGroupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryConsumerGroupStatusResponse(doRequest(make_shared<string>("QueryConsumerGroupStatus"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryConsumerGroupStatusResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupStatus(shared_ptr<QueryConsumerGroupStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryConsumerGroupStatusWithOptions(request, runtime);
}

DeleteConsumerGroupResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroupWithOptions(shared_ptr<DeleteConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteConsumerGroupResponse(doRequest(make_shared<string>("DeleteConsumerGroup"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteConsumerGroupResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroup(shared_ptr<DeleteConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConsumerGroupWithOptions(request, runtime);
}

QueryConsumerGroupListResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupListWithOptions(shared_ptr<QueryConsumerGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryConsumerGroupListResponse(doRequest(make_shared<string>("QueryConsumerGroupList"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryConsumerGroupListResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupList(shared_ptr<QueryConsumerGroupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryConsumerGroupListWithOptions(request, runtime);
}

QueryConsumerGroupByGroupIdResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupByGroupIdWithOptions(shared_ptr<QueryConsumerGroupByGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryConsumerGroupByGroupIdResponse(doRequest(make_shared<string>("QueryConsumerGroupByGroupId"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryConsumerGroupByGroupIdResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupByGroupId(shared_ptr<QueryConsumerGroupByGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryConsumerGroupByGroupIdWithOptions(request, runtime);
}

CreateConsumerGroupResponse Alibabacloud_Iot20180120::Client::createConsumerGroupWithOptions(shared_ptr<CreateConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateConsumerGroupResponse(doRequest(make_shared<string>("CreateConsumerGroup"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateConsumerGroupResponse Alibabacloud_Iot20180120::Client::createConsumerGroup(shared_ptr<CreateConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsumerGroupWithOptions(request, runtime);
}

CreateOTADynamicUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTADynamicUpgradeJobWithOptions(shared_ptr<CreateOTADynamicUpgradeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateOTADynamicUpgradeJobResponse(doRequest(make_shared<string>("CreateOTADynamicUpgradeJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateOTADynamicUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTADynamicUpgradeJob(shared_ptr<CreateOTADynamicUpgradeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTADynamicUpgradeJobWithOptions(request, runtime);
}

CreateOTAStaticUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTAStaticUpgradeJobWithOptions(shared_ptr<CreateOTAStaticUpgradeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateOTAStaticUpgradeJobResponse(doRequest(make_shared<string>("CreateOTAStaticUpgradeJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateOTAStaticUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTAStaticUpgradeJob(shared_ptr<CreateOTAStaticUpgradeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAStaticUpgradeJobWithOptions(request, runtime);
}

CreateOTAFirmwareResponse Alibabacloud_Iot20180120::Client::createOTAFirmwareWithOptions(shared_ptr<CreateOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateOTAFirmwareResponse(doRequest(make_shared<string>("CreateOTAFirmware"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateOTAFirmwareResponse Alibabacloud_Iot20180120::Client::createOTAFirmware(shared_ptr<CreateOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAFirmwareWithOptions(request, runtime);
}

CreateOTAVerifyJobResponse Alibabacloud_Iot20180120::Client::createOTAVerifyJobWithOptions(shared_ptr<CreateOTAVerifyJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateOTAVerifyJobResponse(doRequest(make_shared<string>("CreateOTAVerifyJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateOTAVerifyJobResponse Alibabacloud_Iot20180120::Client::createOTAVerifyJob(shared_ptr<CreateOTAVerifyJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAVerifyJobWithOptions(request, runtime);
}

QueryOTAJobResponse Alibabacloud_Iot20180120::Client::queryOTAJobWithOptions(shared_ptr<QueryOTAJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryOTAJobResponse(doRequest(make_shared<string>("QueryOTAJob"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryOTAJobResponse Alibabacloud_Iot20180120::Client::queryOTAJob(shared_ptr<QueryOTAJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOTAJobWithOptions(request, runtime);
}

CancelOTATaskByDeviceResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByDeviceWithOptions(shared_ptr<CancelOTATaskByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CancelOTATaskByDeviceResponse(doRequest(make_shared<string>("CancelOTATaskByDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CancelOTATaskByDeviceResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByDevice(shared_ptr<CancelOTATaskByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOTATaskByDeviceWithOptions(request, runtime);
}

DeleteOTAFirmwareResponse Alibabacloud_Iot20180120::Client::deleteOTAFirmwareWithOptions(shared_ptr<DeleteOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteOTAFirmwareResponse(doRequest(make_shared<string>("DeleteOTAFirmware"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteOTAFirmwareResponse Alibabacloud_Iot20180120::Client::deleteOTAFirmware(shared_ptr<DeleteOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOTAFirmwareWithOptions(request, runtime);
}

QueryOTAFirmwareResponse Alibabacloud_Iot20180120::Client::queryOTAFirmwareWithOptions(shared_ptr<QueryOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryOTAFirmwareResponse(doRequest(make_shared<string>("QueryOTAFirmware"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryOTAFirmwareResponse Alibabacloud_Iot20180120::Client::queryOTAFirmware(shared_ptr<QueryOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOTAFirmwareWithOptions(request, runtime);
}

UnbindApplicationFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindApplicationFromEdgeInstanceWithOptions(shared_ptr<UnbindApplicationFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UnbindApplicationFromEdgeInstanceResponse(doRequest(make_shared<string>("UnbindApplicationFromEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UnbindApplicationFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindApplicationFromEdgeInstance(shared_ptr<UnbindApplicationFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindApplicationFromEdgeInstanceWithOptions(request, runtime);
}

BindApplicationToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindApplicationToEdgeInstanceWithOptions(shared_ptr<BindApplicationToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BindApplicationToEdgeInstanceResponse(doRequest(make_shared<string>("BindApplicationToEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BindApplicationToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindApplicationToEdgeInstance(shared_ptr<BindApplicationToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindApplicationToEdgeInstanceWithOptions(request, runtime);
}

QueryCertUrlByApplyIdResponse Alibabacloud_Iot20180120::Client::queryCertUrlByApplyIdWithOptions(shared_ptr<QueryCertUrlByApplyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryCertUrlByApplyIdResponse(doRequest(make_shared<string>("QueryCertUrlByApplyId"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryCertUrlByApplyIdResponse Alibabacloud_Iot20180120::Client::queryCertUrlByApplyId(shared_ptr<QueryCertUrlByApplyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCertUrlByApplyIdWithOptions(request, runtime);
}

QueryDeviceCertResponse Alibabacloud_Iot20180120::Client::queryDeviceCertWithOptions(shared_ptr<QueryDeviceCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceCertResponse(doRequest(make_shared<string>("QueryDeviceCert"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceCertResponse Alibabacloud_Iot20180120::Client::queryDeviceCert(shared_ptr<QueryDeviceCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceCertWithOptions(request, runtime);
}

CloseEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::closeEdgeInstanceDeploymentWithOptions(shared_ptr<CloseEdgeInstanceDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CloseEdgeInstanceDeploymentResponse(doRequest(make_shared<string>("CloseEdgeInstanceDeployment"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CloseEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::closeEdgeInstanceDeployment(shared_ptr<CloseEdgeInstanceDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeEdgeInstanceDeploymentWithOptions(request, runtime);
}

UnbindDriverFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindDriverFromEdgeInstanceWithOptions(shared_ptr<UnbindDriverFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UnbindDriverFromEdgeInstanceResponse(doRequest(make_shared<string>("UnbindDriverFromEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UnbindDriverFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindDriverFromEdgeInstance(shared_ptr<UnbindDriverFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindDriverFromEdgeInstanceWithOptions(request, runtime);
}

ReplaceEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::replaceEdgeInstanceGatewayWithOptions(shared_ptr<ReplaceEdgeInstanceGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ReplaceEdgeInstanceGatewayResponse(doRequest(make_shared<string>("ReplaceEdgeInstanceGateway"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ReplaceEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::replaceEdgeInstanceGateway(shared_ptr<ReplaceEdgeInstanceGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceEdgeInstanceGatewayWithOptions(request, runtime);
}

BindDriverToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindDriverToEdgeInstanceWithOptions(shared_ptr<BindDriverToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BindDriverToEdgeInstanceResponse(doRequest(make_shared<string>("BindDriverToEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BindDriverToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindDriverToEdgeInstance(shared_ptr<BindDriverToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindDriverToEdgeInstanceWithOptions(request, runtime);
}

BatchQueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::batchQueryDeviceDetailWithOptions(shared_ptr<BatchQueryDeviceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchQueryDeviceDetailResponse(doRequest(make_shared<string>("BatchQueryDeviceDetail"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchQueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::batchQueryDeviceDetail(shared_ptr<BatchQueryDeviceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchQueryDeviceDetailWithOptions(request, runtime);
}

GetEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceDeploymentWithOptions(shared_ptr<GetEdgeInstanceDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetEdgeInstanceDeploymentResponse(doRequest(make_shared<string>("GetEdgeInstanceDeployment"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceDeployment(shared_ptr<GetEdgeInstanceDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeInstanceDeploymentWithOptions(request, runtime);
}

QueryTaskResponse Alibabacloud_Iot20180120::Client::queryTaskWithOptions(shared_ptr<QueryTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryTaskResponse(doRequest(make_shared<string>("QueryTask"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryTaskResponse Alibabacloud_Iot20180120::Client::queryTask(shared_ptr<QueryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskWithOptions(request, runtime);
}

CreateDataAPIServiceResponse Alibabacloud_Iot20180120::Client::createDataAPIServiceWithOptions(shared_ptr<CreateDataAPIServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateDataAPIServiceResponse(doRequest(make_shared<string>("CreateDataAPIService"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateDataAPIServiceResponse Alibabacloud_Iot20180120::Client::createDataAPIService(shared_ptr<CreateDataAPIServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataAPIServiceWithOptions(request, runtime);
}

GetDataAPIServiceDetailResponse Alibabacloud_Iot20180120::Client::getDataAPIServiceDetailWithOptions(shared_ptr<GetDataAPIServiceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDataAPIServiceDetailResponse(doRequest(make_shared<string>("GetDataAPIServiceDetail"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDataAPIServiceDetailResponse Alibabacloud_Iot20180120::Client::getDataAPIServiceDetail(shared_ptr<GetDataAPIServiceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataAPIServiceDetailWithOptions(request, runtime);
}

InvokeDataAPIServiceResponse Alibabacloud_Iot20180120::Client::invokeDataAPIServiceWithOptions(shared_ptr<InvokeDataAPIServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return InvokeDataAPIServiceResponse(doRequest(make_shared<string>("InvokeDataAPIService"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

InvokeDataAPIServiceResponse Alibabacloud_Iot20180120::Client::invokeDataAPIService(shared_ptr<InvokeDataAPIServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeDataAPIServiceWithOptions(request, runtime);
}

UpdateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceChannelWithOptions(shared_ptr<UpdateEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateEdgeInstanceChannelResponse(doRequest(make_shared<string>("UpdateEdgeInstanceChannel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceChannel(shared_ptr<UpdateEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeInstanceChannelWithOptions(request, runtime);
}

QueryEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceChannelWithOptions(shared_ptr<QueryEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryEdgeInstanceChannelResponse(doRequest(make_shared<string>("QueryEdgeInstanceChannel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceChannel(shared_ptr<QueryEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceChannelWithOptions(request, runtime);
}

BatchUnbindDeviceFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::batchUnbindDeviceFromEdgeInstanceWithOptions(shared_ptr<BatchUnbindDeviceFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchUnbindDeviceFromEdgeInstanceResponse(doRequest(make_shared<string>("BatchUnbindDeviceFromEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchUnbindDeviceFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::batchUnbindDeviceFromEdgeInstance(shared_ptr<BatchUnbindDeviceFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindDeviceFromEdgeInstanceWithOptions(request, runtime);
}

SetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::setEdgeInstanceDriverConfigsWithOptions(shared_ptr<SetEdgeInstanceDriverConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SetEdgeInstanceDriverConfigsResponse(doRequest(make_shared<string>("SetEdgeInstanceDriverConfigs"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::setEdgeInstanceDriverConfigs(shared_ptr<SetEdgeInstanceDriverConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setEdgeInstanceDriverConfigsWithOptions(request, runtime);
}

CreateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceChannelWithOptions(shared_ptr<CreateEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateEdgeInstanceChannelResponse(doRequest(make_shared<string>("CreateEdgeInstanceChannel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceChannel(shared_ptr<CreateEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeInstanceChannelWithOptions(request, runtime);
}

BatchBindDeviceToEdgeInstanceWithDriverResponse Alibabacloud_Iot20180120::Client::batchBindDeviceToEdgeInstanceWithDriverWithOptions(shared_ptr<BatchBindDeviceToEdgeInstanceWithDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchBindDeviceToEdgeInstanceWithDriverResponse(doRequest(make_shared<string>("BatchBindDeviceToEdgeInstanceWithDriver"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchBindDeviceToEdgeInstanceWithDriverResponse Alibabacloud_Iot20180120::Client::batchBindDeviceToEdgeInstanceWithDriver(shared_ptr<BatchBindDeviceToEdgeInstanceWithDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindDeviceToEdgeInstanceWithDriverWithOptions(request, runtime);
}

BatchGetEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceChannelWithOptions(shared_ptr<BatchGetEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchGetEdgeInstanceChannelResponse(doRequest(make_shared<string>("BatchGetEdgeInstanceChannel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchGetEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceChannel(shared_ptr<BatchGetEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceChannelWithOptions(request, runtime);
}

BatchSetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceConfigWithOptions(shared_ptr<BatchSetEdgeInstanceDeviceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchSetEdgeInstanceDeviceConfigResponse(doRequest(make_shared<string>("BatchSetEdgeInstanceDeviceConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchSetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceConfig(shared_ptr<BatchSetEdgeInstanceDeviceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetEdgeInstanceDeviceConfigWithOptions(request, runtime);
}

BatchClearEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchClearEdgeInstanceDeviceConfigWithOptions(shared_ptr<BatchClearEdgeInstanceDeviceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchClearEdgeInstanceDeviceConfigResponse(doRequest(make_shared<string>("BatchClearEdgeInstanceDeviceConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchClearEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchClearEdgeInstanceDeviceConfig(shared_ptr<BatchClearEdgeInstanceDeviceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchClearEdgeInstanceDeviceConfigWithOptions(request, runtime);
}

BatchGetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceConfigWithOptions(shared_ptr<BatchGetEdgeInstanceDeviceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchGetEdgeInstanceDeviceConfigResponse(doRequest(make_shared<string>("BatchGetEdgeInstanceDeviceConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchGetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceConfig(shared_ptr<BatchGetEdgeInstanceDeviceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDeviceConfigWithOptions(request, runtime);
}

BatchGetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDriverConfigsWithOptions(shared_ptr<BatchGetEdgeInstanceDriverConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchGetEdgeInstanceDriverConfigsResponse(doRequest(make_shared<string>("BatchGetEdgeInstanceDriverConfigs"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchGetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDriverConfigs(shared_ptr<BatchGetEdgeInstanceDriverConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDriverConfigsWithOptions(request, runtime);
}

ClearEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::clearEdgeInstanceDriverConfigsWithOptions(shared_ptr<ClearEdgeInstanceDriverConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ClearEdgeInstanceDriverConfigsResponse(doRequest(make_shared<string>("ClearEdgeInstanceDriverConfigs"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ClearEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::clearEdgeInstanceDriverConfigs(shared_ptr<ClearEdgeInstanceDriverConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearEdgeInstanceDriverConfigsWithOptions(request, runtime);
}

CreateLoRaNodesTaskResponse Alibabacloud_Iot20180120::Client::createLoRaNodesTaskWithOptions(shared_ptr<CreateLoRaNodesTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateLoRaNodesTaskResponse(doRequest(make_shared<string>("CreateLoRaNodesTask"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateLoRaNodesTaskResponse Alibabacloud_Iot20180120::Client::createLoRaNodesTask(shared_ptr<CreateLoRaNodesTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoRaNodesTaskWithOptions(request, runtime);
}

GetLoraNodesTaskResponse Alibabacloud_Iot20180120::Client::getLoraNodesTaskWithOptions(shared_ptr<GetLoraNodesTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetLoraNodesTaskResponse(doRequest(make_shared<string>("GetLoraNodesTask"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetLoraNodesTaskResponse Alibabacloud_Iot20180120::Client::getLoraNodesTask(shared_ptr<GetLoraNodesTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoraNodesTaskWithOptions(request, runtime);
}

QueryLoRaJoinPermissionsResponse Alibabacloud_Iot20180120::Client::queryLoRaJoinPermissionsWithOptions(shared_ptr<QueryLoRaJoinPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryLoRaJoinPermissionsResponse(doRequest(make_shared<string>("QueryLoRaJoinPermissions"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryLoRaJoinPermissionsResponse Alibabacloud_Iot20180120::Client::queryLoRaJoinPermissions(shared_ptr<QueryLoRaJoinPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLoRaJoinPermissionsWithOptions(request, runtime);
}

QueryEdgeInstanceDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDriverWithOptions(shared_ptr<QueryEdgeInstanceDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryEdgeInstanceDriverResponse(doRequest(make_shared<string>("QueryEdgeInstanceDriver"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryEdgeInstanceDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDriver(shared_ptr<QueryEdgeInstanceDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceDriverWithOptions(request, runtime);
}

BatchUpdateDeviceNicknameResponse Alibabacloud_Iot20180120::Client::batchUpdateDeviceNicknameWithOptions(shared_ptr<BatchUpdateDeviceNicknameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchUpdateDeviceNicknameResponse(doRequest(make_shared<string>("BatchUpdateDeviceNickname"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchUpdateDeviceNicknameResponse Alibabacloud_Iot20180120::Client::batchUpdateDeviceNickname(shared_ptr<BatchUpdateDeviceNicknameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUpdateDeviceNicknameWithOptions(request, runtime);
}

QueryDeviceFileResponse Alibabacloud_Iot20180120::Client::queryDeviceFileWithOptions(shared_ptr<QueryDeviceFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceFileResponse(doRequest(make_shared<string>("QueryDeviceFile"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceFileResponse Alibabacloud_Iot20180120::Client::queryDeviceFile(shared_ptr<QueryDeviceFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceFileWithOptions(request, runtime);
}

QueryDeviceFileListResponse Alibabacloud_Iot20180120::Client::queryDeviceFileListWithOptions(shared_ptr<QueryDeviceFileListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceFileListResponse(doRequest(make_shared<string>("QueryDeviceFileList"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceFileListResponse Alibabacloud_Iot20180120::Client::queryDeviceFileList(shared_ptr<QueryDeviceFileListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceFileListWithOptions(request, runtime);
}

DeleteDeviceFileResponse Alibabacloud_Iot20180120::Client::deleteDeviceFileWithOptions(shared_ptr<DeleteDeviceFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteDeviceFileResponse(doRequest(make_shared<string>("DeleteDeviceFile"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteDeviceFileResponse Alibabacloud_Iot20180120::Client::deleteDeviceFile(shared_ptr<DeleteDeviceFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceFileWithOptions(request, runtime);
}

GetNodesAddingTaskResponse Alibabacloud_Iot20180120::Client::getNodesAddingTaskWithOptions(shared_ptr<GetNodesAddingTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetNodesAddingTaskResponse(doRequest(make_shared<string>("GetNodesAddingTask"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetNodesAddingTaskResponse Alibabacloud_Iot20180120::Client::getNodesAddingTask(shared_ptr<GetNodesAddingTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodesAddingTaskWithOptions(request, runtime);
}

SetDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::setDeviceDesiredPropertyWithOptions(shared_ptr<SetDeviceDesiredPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SetDeviceDesiredPropertyResponse(doRequest(make_shared<string>("SetDeviceDesiredProperty"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SetDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::setDeviceDesiredProperty(shared_ptr<SetDeviceDesiredPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeviceDesiredPropertyWithOptions(request, runtime);
}

QueryDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::queryDeviceDesiredPropertyWithOptions(shared_ptr<QueryDeviceDesiredPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceDesiredPropertyResponse(doRequest(make_shared<string>("QueryDeviceDesiredProperty"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::queryDeviceDesiredProperty(shared_ptr<QueryDeviceDesiredPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDesiredPropertyWithOptions(request, runtime);
}

QueryEdgeInstanceHistoricDeploymentResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceHistoricDeploymentWithOptions(shared_ptr<QueryEdgeInstanceHistoricDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryEdgeInstanceHistoricDeploymentResponse(doRequest(make_shared<string>("QueryEdgeInstanceHistoricDeployment"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryEdgeInstanceHistoricDeploymentResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceHistoricDeployment(shared_ptr<QueryEdgeInstanceHistoricDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceHistoricDeploymentWithOptions(request, runtime);
}

CreateProductTagsResponse Alibabacloud_Iot20180120::Client::createProductTagsWithOptions(shared_ptr<CreateProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateProductTagsResponse(doRequest(make_shared<string>("CreateProductTags"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateProductTagsResponse Alibabacloud_Iot20180120::Client::createProductTags(shared_ptr<CreateProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductTagsWithOptions(request, runtime);
}

UpdateProductTagsResponse Alibabacloud_Iot20180120::Client::updateProductTagsWithOptions(shared_ptr<UpdateProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateProductTagsResponse(doRequest(make_shared<string>("UpdateProductTags"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateProductTagsResponse Alibabacloud_Iot20180120::Client::updateProductTags(shared_ptr<UpdateProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductTagsWithOptions(request, runtime);
}

DeleteProductTagsResponse Alibabacloud_Iot20180120::Client::deleteProductTagsWithOptions(shared_ptr<DeleteProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteProductTagsResponse(doRequest(make_shared<string>("DeleteProductTags"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteProductTagsResponse Alibabacloud_Iot20180120::Client::deleteProductTags(shared_ptr<DeleteProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductTagsWithOptions(request, runtime);
}

ListProductTagsResponse Alibabacloud_Iot20180120::Client::listProductTagsWithOptions(shared_ptr<ListProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListProductTagsResponse(doRequest(make_shared<string>("ListProductTags"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListProductTagsResponse Alibabacloud_Iot20180120::Client::listProductTags(shared_ptr<ListProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductTagsWithOptions(request, runtime);
}

ListProductByTagsResponse Alibabacloud_Iot20180120::Client::listProductByTagsWithOptions(shared_ptr<ListProductByTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListProductByTagsResponse(doRequest(make_shared<string>("ListProductByTags"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListProductByTagsResponse Alibabacloud_Iot20180120::Client::listProductByTags(shared_ptr<ListProductByTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductByTagsWithOptions(request, runtime);
}

QueryDeviceGroupByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByTagsWithOptions(shared_ptr<QueryDeviceGroupByTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceGroupByTagsResponse(doRequest(make_shared<string>("QueryDeviceGroupByTags"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceGroupByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByTags(shared_ptr<QueryDeviceGroupByTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupByTagsWithOptions(request, runtime);
}

BatchAddThingTopoResponse Alibabacloud_Iot20180120::Client::batchAddThingTopoWithOptions(shared_ptr<BatchAddThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchAddThingTopoResponse(doRequest(make_shared<string>("BatchAddThingTopo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchAddThingTopoResponse Alibabacloud_Iot20180120::Client::batchAddThingTopo(shared_ptr<BatchAddThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddThingTopoWithOptions(request, runtime);
}

QueryDeviceListByDeviceGroupResponse Alibabacloud_Iot20180120::Client::queryDeviceListByDeviceGroupWithOptions(shared_ptr<QueryDeviceListByDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceListByDeviceGroupResponse(doRequest(make_shared<string>("QueryDeviceListByDeviceGroup"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceListByDeviceGroupResponse Alibabacloud_Iot20180120::Client::queryDeviceListByDeviceGroup(shared_ptr<QueryDeviceListByDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceListByDeviceGroupWithOptions(request, runtime);
}

QueryDevicePropertiesDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertiesDataWithOptions(shared_ptr<QueryDevicePropertiesDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDevicePropertiesDataResponse(doRequest(make_shared<string>("QueryDevicePropertiesData"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDevicePropertiesDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertiesData(shared_ptr<QueryDevicePropertiesDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropertiesDataWithOptions(request, runtime);
}

UnbindRoleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindRoleFromEdgeInstanceWithOptions(shared_ptr<UnbindRoleFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UnbindRoleFromEdgeInstanceResponse(doRequest(make_shared<string>("UnbindRoleFromEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UnbindRoleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindRoleFromEdgeInstance(shared_ptr<UnbindRoleFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindRoleFromEdgeInstanceWithOptions(request, runtime);
}

UpdateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceWithOptions(shared_ptr<UpdateEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateEdgeInstanceResponse(doRequest(make_shared<string>("UpdateEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::updateEdgeInstance(shared_ptr<UpdateEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeInstanceWithOptions(request, runtime);
}

GetEdgeInstanceResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceWithOptions(shared_ptr<GetEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetEdgeInstanceResponse(doRequest(make_shared<string>("GetEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetEdgeInstanceResponse Alibabacloud_Iot20180120::Client::getEdgeInstance(shared_ptr<GetEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeInstanceWithOptions(request, runtime);
}

DeleteEdgeInstanceResponse Alibabacloud_Iot20180120::Client::deleteEdgeInstanceWithOptions(shared_ptr<DeleteEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteEdgeInstanceResponse(doRequest(make_shared<string>("DeleteEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteEdgeInstanceResponse Alibabacloud_Iot20180120::Client::deleteEdgeInstance(shared_ptr<DeleteEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeInstanceWithOptions(request, runtime);
}

CreateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceWithOptions(shared_ptr<CreateEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateEdgeInstanceResponse(doRequest(make_shared<string>("CreateEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::createEdgeInstance(shared_ptr<CreateEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeInstanceWithOptions(request, runtime);
}

QueryEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceGatewayWithOptions(shared_ptr<QueryEdgeInstanceGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryEdgeInstanceGatewayResponse(doRequest(make_shared<string>("QueryEdgeInstanceGateway"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceGateway(shared_ptr<QueryEdgeInstanceGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceGatewayWithOptions(request, runtime);
}

QueryEdgeInstanceDeviceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDeviceWithOptions(shared_ptr<QueryEdgeInstanceDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryEdgeInstanceDeviceResponse(doRequest(make_shared<string>("QueryEdgeInstanceDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryEdgeInstanceDeviceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDevice(shared_ptr<QueryEdgeInstanceDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceDeviceWithOptions(request, runtime);
}

BindGatewayToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindGatewayToEdgeInstanceWithOptions(shared_ptr<BindGatewayToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BindGatewayToEdgeInstanceResponse(doRequest(make_shared<string>("BindGatewayToEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BindGatewayToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindGatewayToEdgeInstance(shared_ptr<BindGatewayToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindGatewayToEdgeInstanceWithOptions(request, runtime);
}

QueryEdgeInstanceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceWithOptions(shared_ptr<QueryEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryEdgeInstanceResponse(doRequest(make_shared<string>("QueryEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryEdgeInstanceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstance(shared_ptr<QueryEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceWithOptions(request, runtime);
}

CreateEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceDeploymentWithOptions(shared_ptr<CreateEdgeInstanceDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateEdgeInstanceDeploymentResponse(doRequest(make_shared<string>("CreateEdgeInstanceDeployment"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceDeployment(shared_ptr<CreateEdgeInstanceDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeInstanceDeploymentWithOptions(request, runtime);
}

BindRoleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindRoleToEdgeInstanceWithOptions(shared_ptr<BindRoleToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BindRoleToEdgeInstanceResponse(doRequest(make_shared<string>("BindRoleToEdgeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BindRoleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindRoleToEdgeInstance(shared_ptr<BindRoleToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindRoleToEdgeInstanceWithOptions(request, runtime);
}

QuerySuperDeviceGroupResponse Alibabacloud_Iot20180120::Client::querySuperDeviceGroupWithOptions(shared_ptr<QuerySuperDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QuerySuperDeviceGroupResponse(doRequest(make_shared<string>("QuerySuperDeviceGroup"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QuerySuperDeviceGroupResponse Alibabacloud_Iot20180120::Client::querySuperDeviceGroup(shared_ptr<QuerySuperDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySuperDeviceGroupWithOptions(request, runtime);
}

QueryDeviceByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceByTagsWithOptions(shared_ptr<QueryDeviceByTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceByTagsResponse(doRequest(make_shared<string>("QueryDeviceByTags"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceByTags(shared_ptr<QueryDeviceByTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceByTagsWithOptions(request, runtime);
}

SetDevicesPropertyResponse Alibabacloud_Iot20180120::Client::setDevicesPropertyWithOptions(shared_ptr<SetDevicesPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SetDevicesPropertyResponse(doRequest(make_shared<string>("SetDevicesProperty"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SetDevicesPropertyResponse Alibabacloud_Iot20180120::Client::setDevicesProperty(shared_ptr<SetDevicesPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDevicesPropertyWithOptions(request, runtime);
}

InvokeThingsServiceResponse Alibabacloud_Iot20180120::Client::invokeThingsServiceWithOptions(shared_ptr<InvokeThingsServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return InvokeThingsServiceResponse(doRequest(make_shared<string>("InvokeThingsService"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

InvokeThingsServiceResponse Alibabacloud_Iot20180120::Client::invokeThingsService(shared_ptr<InvokeThingsServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeThingsServiceWithOptions(request, runtime);
}

SetDeviceGroupTagsResponse Alibabacloud_Iot20180120::Client::setDeviceGroupTagsWithOptions(shared_ptr<SetDeviceGroupTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SetDeviceGroupTagsResponse(doRequest(make_shared<string>("SetDeviceGroupTags"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SetDeviceGroupTagsResponse Alibabacloud_Iot20180120::Client::setDeviceGroupTags(shared_ptr<SetDeviceGroupTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeviceGroupTagsWithOptions(request, runtime);
}

QueryAppDeviceListResponse Alibabacloud_Iot20180120::Client::queryAppDeviceListWithOptions(shared_ptr<QueryAppDeviceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryAppDeviceListResponse(doRequest(make_shared<string>("QueryAppDeviceList"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryAppDeviceListResponse Alibabacloud_Iot20180120::Client::queryAppDeviceList(shared_ptr<QueryAppDeviceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAppDeviceListWithOptions(request, runtime);
}

UpdateDeviceGroupResponse Alibabacloud_Iot20180120::Client::updateDeviceGroupWithOptions(shared_ptr<UpdateDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateDeviceGroupResponse(doRequest(make_shared<string>("UpdateDeviceGroup"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateDeviceGroupResponse Alibabacloud_Iot20180120::Client::updateDeviceGroup(shared_ptr<UpdateDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeviceGroupWithOptions(request, runtime);
}

QueryDeviceGroupTagListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupTagListWithOptions(shared_ptr<QueryDeviceGroupTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceGroupTagListResponse(doRequest(make_shared<string>("QueryDeviceGroupTagList"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceGroupTagListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupTagList(shared_ptr<QueryDeviceGroupTagListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupTagListWithOptions(request, runtime);
}

QueryDeviceGroupListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupListWithOptions(shared_ptr<QueryDeviceGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceGroupListResponse(doRequest(make_shared<string>("QueryDeviceGroupList"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceGroupListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupList(shared_ptr<QueryDeviceGroupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupListWithOptions(request, runtime);
}

QueryDeviceGroupInfoResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupInfoWithOptions(shared_ptr<QueryDeviceGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceGroupInfoResponse(doRequest(make_shared<string>("QueryDeviceGroupInfo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceGroupInfoResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupInfo(shared_ptr<QueryDeviceGroupInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupInfoWithOptions(request, runtime);
}

QueryDeviceGroupByDeviceResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByDeviceWithOptions(shared_ptr<QueryDeviceGroupByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceGroupByDeviceResponse(doRequest(make_shared<string>("QueryDeviceGroupByDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceGroupByDeviceResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByDevice(shared_ptr<QueryDeviceGroupByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupByDeviceWithOptions(request, runtime);
}

DeleteDeviceGroupResponse Alibabacloud_Iot20180120::Client::deleteDeviceGroupWithOptions(shared_ptr<DeleteDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteDeviceGroupResponse(doRequest(make_shared<string>("DeleteDeviceGroup"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteDeviceGroupResponse Alibabacloud_Iot20180120::Client::deleteDeviceGroup(shared_ptr<DeleteDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceGroupWithOptions(request, runtime);
}

CreateDeviceGroupResponse Alibabacloud_Iot20180120::Client::createDeviceGroupWithOptions(shared_ptr<CreateDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateDeviceGroupResponse(doRequest(make_shared<string>("CreateDeviceGroup"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateDeviceGroupResponse Alibabacloud_Iot20180120::Client::createDeviceGroup(shared_ptr<CreateDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceGroupWithOptions(request, runtime);
}

BatchDeleteDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchDeleteDeviceGroupRelationsWithOptions(shared_ptr<BatchDeleteDeviceGroupRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchDeleteDeviceGroupRelationsResponse(doRequest(make_shared<string>("BatchDeleteDeviceGroupRelations"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchDeleteDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchDeleteDeviceGroupRelations(shared_ptr<BatchDeleteDeviceGroupRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteDeviceGroupRelationsWithOptions(request, runtime);
}

BatchAddDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchAddDeviceGroupRelationsWithOptions(shared_ptr<BatchAddDeviceGroupRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchAddDeviceGroupRelationsResponse(doRequest(make_shared<string>("BatchAddDeviceGroupRelations"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchAddDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchAddDeviceGroupRelations(shared_ptr<BatchAddDeviceGroupRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddDeviceGroupRelationsWithOptions(request, runtime);
}

RRpcResponse Alibabacloud_Iot20180120::Client::RRpcWithOptions(shared_ptr<RRpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return RRpcResponse(doRequest(make_shared<string>("RRpc"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

RRpcResponse Alibabacloud_Iot20180120::Client::RRpc(shared_ptr<RRpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return RRpcWithOptions(request, runtime);
}

QueryPageByApplyIdResponse Alibabacloud_Iot20180120::Client::queryPageByApplyIdWithOptions(shared_ptr<QueryPageByApplyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryPageByApplyIdResponse(doRequest(make_shared<string>("QueryPageByApplyId"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryPageByApplyIdResponse Alibabacloud_Iot20180120::Client::queryPageByApplyId(shared_ptr<QueryPageByApplyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPageByApplyIdWithOptions(request, runtime);
}

QueryDeviceResponse Alibabacloud_Iot20180120::Client::queryDeviceWithOptions(shared_ptr<QueryDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceResponse(doRequest(make_shared<string>("QueryDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceResponse Alibabacloud_Iot20180120::Client::queryDevice(shared_ptr<QueryDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceWithOptions(request, runtime);
}

SaveDevicePropResponse Alibabacloud_Iot20180120::Client::saveDevicePropWithOptions(shared_ptr<SaveDevicePropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SaveDevicePropResponse(doRequest(make_shared<string>("SaveDeviceProp"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SaveDevicePropResponse Alibabacloud_Iot20180120::Client::saveDeviceProp(shared_ptr<SaveDevicePropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveDevicePropWithOptions(request, runtime);
}

QueryTopicRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicRouteTableWithOptions(shared_ptr<QueryTopicRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryTopicRouteTableResponse(doRequest(make_shared<string>("QueryTopicRouteTable"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryTopicRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicRouteTable(shared_ptr<QueryTopicRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTopicRouteTableWithOptions(request, runtime);
}

QueryTopicReverseRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicReverseRouteTableWithOptions(shared_ptr<QueryTopicReverseRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryTopicReverseRouteTableResponse(doRequest(make_shared<string>("QueryTopicReverseRouteTable"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryTopicReverseRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicReverseRouteTable(shared_ptr<QueryTopicReverseRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTopicReverseRouteTableWithOptions(request, runtime);
}

PubBroadcastResponse Alibabacloud_Iot20180120::Client::pubBroadcastWithOptions(shared_ptr<PubBroadcastRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return PubBroadcastResponse(doRequest(make_shared<string>("PubBroadcast"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

PubBroadcastResponse Alibabacloud_Iot20180120::Client::pubBroadcast(shared_ptr<PubBroadcastRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pubBroadcastWithOptions(request, runtime);
}

DeleteTopicRouteTableResponse Alibabacloud_Iot20180120::Client::deleteTopicRouteTableWithOptions(shared_ptr<DeleteTopicRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteTopicRouteTableResponse(doRequest(make_shared<string>("DeleteTopicRouteTable"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteTopicRouteTableResponse Alibabacloud_Iot20180120::Client::deleteTopicRouteTable(shared_ptr<DeleteTopicRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTopicRouteTableWithOptions(request, runtime);
}

DeleteDevicePropResponse Alibabacloud_Iot20180120::Client::deleteDevicePropWithOptions(shared_ptr<DeleteDevicePropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteDevicePropResponse(doRequest(make_shared<string>("DeleteDeviceProp"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteDevicePropResponse Alibabacloud_Iot20180120::Client::deleteDeviceProp(shared_ptr<DeleteDevicePropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevicePropWithOptions(request, runtime);
}

CreateTopicRouteTableResponse Alibabacloud_Iot20180120::Client::createTopicRouteTableWithOptions(shared_ptr<CreateTopicRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateTopicRouteTableResponse(doRequest(make_shared<string>("CreateTopicRouteTable"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateTopicRouteTableResponse Alibabacloud_Iot20180120::Client::createTopicRouteTable(shared_ptr<CreateTopicRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTopicRouteTableWithOptions(request, runtime);
}

BatchGetDeviceStateResponse Alibabacloud_Iot20180120::Client::batchGetDeviceStateWithOptions(shared_ptr<BatchGetDeviceStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchGetDeviceStateResponse(doRequest(make_shared<string>("BatchGetDeviceState"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchGetDeviceStateResponse Alibabacloud_Iot20180120::Client::batchGetDeviceState(shared_ptr<BatchGetDeviceStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetDeviceStateWithOptions(request, runtime);
}

UpdateRuleActionResponse Alibabacloud_Iot20180120::Client::updateRuleActionWithOptions(shared_ptr<UpdateRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateRuleActionResponse(doRequest(make_shared<string>("UpdateRuleAction"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateRuleActionResponse Alibabacloud_Iot20180120::Client::updateRuleAction(shared_ptr<UpdateRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleActionWithOptions(request, runtime);
}

UpdateRuleResponse Alibabacloud_Iot20180120::Client::updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateRuleResponse(doRequest(make_shared<string>("UpdateRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateRuleResponse Alibabacloud_Iot20180120::Client::updateRule(shared_ptr<UpdateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleWithOptions(request, runtime);
}

UpdateProductTopicResponse Alibabacloud_Iot20180120::Client::updateProductTopicWithOptions(shared_ptr<UpdateProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateProductTopicResponse(doRequest(make_shared<string>("UpdateProductTopic"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateProductTopicResponse Alibabacloud_Iot20180120::Client::updateProductTopic(shared_ptr<UpdateProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductTopicWithOptions(request, runtime);
}

UpdateDeviceShadowResponse Alibabacloud_Iot20180120::Client::updateDeviceShadowWithOptions(shared_ptr<UpdateDeviceShadowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateDeviceShadowResponse(doRequest(make_shared<string>("UpdateDeviceShadow"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateDeviceShadowResponse Alibabacloud_Iot20180120::Client::updateDeviceShadow(shared_ptr<UpdateDeviceShadowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeviceShadowWithOptions(request, runtime);
}

StopRuleResponse Alibabacloud_Iot20180120::Client::stopRuleWithOptions(shared_ptr<StopRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return StopRuleResponse(doRequest(make_shared<string>("StopRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

StopRuleResponse Alibabacloud_Iot20180120::Client::stopRule(shared_ptr<StopRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopRuleWithOptions(request, runtime);
}

StartRuleResponse Alibabacloud_Iot20180120::Client::startRuleWithOptions(shared_ptr<StartRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return StartRuleResponse(doRequest(make_shared<string>("StartRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

StartRuleResponse Alibabacloud_Iot20180120::Client::startRule(shared_ptr<StartRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRuleWithOptions(request, runtime);
}

QueryProductTopicResponse Alibabacloud_Iot20180120::Client::queryProductTopicWithOptions(shared_ptr<QueryProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryProductTopicResponse(doRequest(make_shared<string>("QueryProductTopic"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryProductTopicResponse Alibabacloud_Iot20180120::Client::queryProductTopic(shared_ptr<QueryProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductTopicWithOptions(request, runtime);
}

QueryDevicePropResponse Alibabacloud_Iot20180120::Client::queryDevicePropWithOptions(shared_ptr<QueryDevicePropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDevicePropResponse(doRequest(make_shared<string>("QueryDeviceProp"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDevicePropResponse Alibabacloud_Iot20180120::Client::queryDeviceProp(shared_ptr<QueryDevicePropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropWithOptions(request, runtime);
}

PubResponse Alibabacloud_Iot20180120::Client::pubWithOptions(shared_ptr<PubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return PubResponse(doRequest(make_shared<string>("Pub"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

PubResponse Alibabacloud_Iot20180120::Client::pub(shared_ptr<PubRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pubWithOptions(request, runtime);
}

ListRuleActionsResponse Alibabacloud_Iot20180120::Client::listRuleActionsWithOptions(shared_ptr<ListRuleActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListRuleActionsResponse(doRequest(make_shared<string>("ListRuleActions"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListRuleActionsResponse Alibabacloud_Iot20180120::Client::listRuleActions(shared_ptr<ListRuleActionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRuleActionsWithOptions(request, runtime);
}

ListRuleResponse Alibabacloud_Iot20180120::Client::listRuleWithOptions(shared_ptr<ListRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListRuleResponse(doRequest(make_shared<string>("ListRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListRuleResponse Alibabacloud_Iot20180120::Client::listRule(shared_ptr<ListRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRuleWithOptions(request, runtime);
}

GetRuleActionResponse Alibabacloud_Iot20180120::Client::getRuleActionWithOptions(shared_ptr<GetRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetRuleActionResponse(doRequest(make_shared<string>("GetRuleAction"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetRuleActionResponse Alibabacloud_Iot20180120::Client::getRuleAction(shared_ptr<GetRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleActionWithOptions(request, runtime);
}

GetRuleResponse Alibabacloud_Iot20180120::Client::getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetRuleResponse(doRequest(make_shared<string>("GetRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetRuleResponse Alibabacloud_Iot20180120::Client::getRule(shared_ptr<GetRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleWithOptions(request, runtime);
}

GetDeviceShadowResponse Alibabacloud_Iot20180120::Client::getDeviceShadowWithOptions(shared_ptr<GetDeviceShadowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDeviceShadowResponse(doRequest(make_shared<string>("GetDeviceShadow"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDeviceShadowResponse Alibabacloud_Iot20180120::Client::getDeviceShadow(shared_ptr<GetDeviceShadowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceShadowWithOptions(request, runtime);
}

DeleteRuleActionResponse Alibabacloud_Iot20180120::Client::deleteRuleActionWithOptions(shared_ptr<DeleteRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteRuleActionResponse(doRequest(make_shared<string>("DeleteRuleAction"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteRuleActionResponse Alibabacloud_Iot20180120::Client::deleteRuleAction(shared_ptr<DeleteRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleActionWithOptions(request, runtime);
}

DeleteRuleResponse Alibabacloud_Iot20180120::Client::deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteRuleResponse(doRequest(make_shared<string>("DeleteRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteRuleResponse Alibabacloud_Iot20180120::Client::deleteRule(shared_ptr<DeleteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleWithOptions(request, runtime);
}

DeleteProductTopicResponse Alibabacloud_Iot20180120::Client::deleteProductTopicWithOptions(shared_ptr<DeleteProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteProductTopicResponse(doRequest(make_shared<string>("DeleteProductTopic"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteProductTopicResponse Alibabacloud_Iot20180120::Client::deleteProductTopic(shared_ptr<DeleteProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductTopicWithOptions(request, runtime);
}

CreateRuleActionResponse Alibabacloud_Iot20180120::Client::createRuleActionWithOptions(shared_ptr<CreateRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateRuleActionResponse(doRequest(make_shared<string>("CreateRuleAction"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateRuleActionResponse Alibabacloud_Iot20180120::Client::createRuleAction(shared_ptr<CreateRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleActionWithOptions(request, runtime);
}

CreateRuleResponse Alibabacloud_Iot20180120::Client::createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateRuleResponse(doRequest(make_shared<string>("CreateRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateRuleResponse Alibabacloud_Iot20180120::Client::createRule(shared_ptr<CreateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleWithOptions(request, runtime);
}

CreateProductTopicResponse Alibabacloud_Iot20180120::Client::createProductTopicWithOptions(shared_ptr<CreateProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateProductTopicResponse(doRequest(make_shared<string>("CreateProductTopic"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateProductTopicResponse Alibabacloud_Iot20180120::Client::createProductTopic(shared_ptr<CreateProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductTopicWithOptions(request, runtime);
}

QueryBatchRegisterDeviceStatusResponse Alibabacloud_Iot20180120::Client::queryBatchRegisterDeviceStatusWithOptions(shared_ptr<QueryBatchRegisterDeviceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryBatchRegisterDeviceStatusResponse(doRequest(make_shared<string>("QueryBatchRegisterDeviceStatus"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryBatchRegisterDeviceStatusResponse Alibabacloud_Iot20180120::Client::queryBatchRegisterDeviceStatus(shared_ptr<QueryBatchRegisterDeviceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBatchRegisterDeviceStatusWithOptions(request, runtime);
}

GetGatewayBySubDeviceResponse Alibabacloud_Iot20180120::Client::getGatewayBySubDeviceWithOptions(shared_ptr<GetGatewayBySubDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetGatewayBySubDeviceResponse(doRequest(make_shared<string>("GetGatewayBySubDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetGatewayBySubDeviceResponse Alibabacloud_Iot20180120::Client::getGatewayBySubDevice(shared_ptr<GetGatewayBySubDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGatewayBySubDeviceWithOptions(request, runtime);
}

ResetThingResponse Alibabacloud_Iot20180120::Client::resetThingWithOptions(shared_ptr<ResetThingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ResetThingResponse(doRequest(make_shared<string>("ResetThing"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ResetThingResponse Alibabacloud_Iot20180120::Client::resetThing(shared_ptr<ResetThingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetThingWithOptions(request, runtime);
}

RemoveThingTopoResponse Alibabacloud_Iot20180120::Client::removeThingTopoWithOptions(shared_ptr<RemoveThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return RemoveThingTopoResponse(doRequest(make_shared<string>("RemoveThingTopo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

RemoveThingTopoResponse Alibabacloud_Iot20180120::Client::removeThingTopo(shared_ptr<RemoveThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeThingTopoWithOptions(request, runtime);
}

NotifyAddThingTopoResponse Alibabacloud_Iot20180120::Client::notifyAddThingTopoWithOptions(shared_ptr<NotifyAddThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return NotifyAddThingTopoResponse(doRequest(make_shared<string>("NotifyAddThingTopo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

NotifyAddThingTopoResponse Alibabacloud_Iot20180120::Client::notifyAddThingTopo(shared_ptr<NotifyAddThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return notifyAddThingTopoWithOptions(request, runtime);
}

GetThingTopoResponse Alibabacloud_Iot20180120::Client::getThingTopoWithOptions(shared_ptr<GetThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetThingTopoResponse(doRequest(make_shared<string>("GetThingTopo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetThingTopoResponse Alibabacloud_Iot20180120::Client::getThingTopo(shared_ptr<GetThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingTopoWithOptions(request, runtime);
}

QueryDevicePropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyStatusWithOptions(shared_ptr<QueryDevicePropertyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDevicePropertyStatusResponse(doRequest(make_shared<string>("QueryDevicePropertyStatus"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDevicePropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyStatus(shared_ptr<QueryDevicePropertyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropertyStatusWithOptions(request, runtime);
}

QueryDevicePropertyDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyDataWithOptions(shared_ptr<QueryDevicePropertyDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDevicePropertyDataResponse(doRequest(make_shared<string>("QueryDevicePropertyData"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDevicePropertyDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyData(shared_ptr<QueryDevicePropertyDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropertyDataWithOptions(request, runtime);
}

BatchRegisterDeviceWithApplyIdResponse Alibabacloud_Iot20180120::Client::batchRegisterDeviceWithApplyIdWithOptions(shared_ptr<BatchRegisterDeviceWithApplyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchRegisterDeviceWithApplyIdResponse(doRequest(make_shared<string>("BatchRegisterDeviceWithApplyId"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchRegisterDeviceWithApplyIdResponse Alibabacloud_Iot20180120::Client::batchRegisterDeviceWithApplyId(shared_ptr<BatchRegisterDeviceWithApplyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchRegisterDeviceWithApplyIdWithOptions(request, runtime);
}

BatchRegisterDeviceResponse Alibabacloud_Iot20180120::Client::batchRegisterDeviceWithOptions(shared_ptr<BatchRegisterDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchRegisterDeviceResponse(doRequest(make_shared<string>("BatchRegisterDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchRegisterDeviceResponse Alibabacloud_Iot20180120::Client::batchRegisterDevice(shared_ptr<BatchRegisterDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchRegisterDeviceWithOptions(request, runtime);
}

BatchCheckDeviceNamesResponse Alibabacloud_Iot20180120::Client::batchCheckDeviceNamesWithOptions(shared_ptr<BatchCheckDeviceNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return BatchCheckDeviceNamesResponse(doRequest(make_shared<string>("BatchCheckDeviceNames"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

BatchCheckDeviceNamesResponse Alibabacloud_Iot20180120::Client::batchCheckDeviceNames(shared_ptr<BatchCheckDeviceNamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCheckDeviceNamesWithOptions(request, runtime);
}

UpdateProductResponse Alibabacloud_Iot20180120::Client::updateProductWithOptions(shared_ptr<UpdateProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateProductResponse(doRequest(make_shared<string>("UpdateProduct"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateProductResponse Alibabacloud_Iot20180120::Client::updateProduct(shared_ptr<UpdateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductWithOptions(request, runtime);
}

SetDevicePropertyResponse Alibabacloud_Iot20180120::Client::setDevicePropertyWithOptions(shared_ptr<SetDevicePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SetDevicePropertyResponse(doRequest(make_shared<string>("SetDeviceProperty"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SetDevicePropertyResponse Alibabacloud_Iot20180120::Client::setDeviceProperty(shared_ptr<SetDevicePropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDevicePropertyWithOptions(request, runtime);
}

RegisterDeviceResponse Alibabacloud_Iot20180120::Client::registerDeviceWithOptions(shared_ptr<RegisterDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return RegisterDeviceResponse(doRequest(make_shared<string>("RegisterDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

RegisterDeviceResponse Alibabacloud_Iot20180120::Client::registerDevice(shared_ptr<RegisterDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerDeviceWithOptions(request, runtime);
}

QueryProductListResponse Alibabacloud_Iot20180120::Client::queryProductListWithOptions(shared_ptr<QueryProductListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryProductListResponse(doRequest(make_shared<string>("QueryProductList"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryProductListResponse Alibabacloud_Iot20180120::Client::queryProductList(shared_ptr<QueryProductListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductListWithOptions(request, runtime);
}

QueryProductResponse Alibabacloud_Iot20180120::Client::queryProductWithOptions(shared_ptr<QueryProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryProductResponse(doRequest(make_shared<string>("QueryProduct"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryProductResponse Alibabacloud_Iot20180120::Client::queryProduct(shared_ptr<QueryProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductWithOptions(request, runtime);
}

QueryDeviceStatisticsResponse Alibabacloud_Iot20180120::Client::queryDeviceStatisticsWithOptions(shared_ptr<QueryDeviceStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceStatisticsResponse(doRequest(make_shared<string>("QueryDeviceStatistics"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceStatisticsResponse Alibabacloud_Iot20180120::Client::queryDeviceStatistics(shared_ptr<QueryDeviceStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceStatisticsWithOptions(request, runtime);
}

QueryDeviceServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceServiceDataWithOptions(shared_ptr<QueryDeviceServiceDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceServiceDataResponse(doRequest(make_shared<string>("QueryDeviceServiceData"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceServiceData(shared_ptr<QueryDeviceServiceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceServiceDataWithOptions(request, runtime);
}

QueryDeviceEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceEventDataWithOptions(shared_ptr<QueryDeviceEventDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceEventDataResponse(doRequest(make_shared<string>("QueryDeviceEventData"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceEventData(shared_ptr<QueryDeviceEventDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceEventDataWithOptions(request, runtime);
}

QueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDetailWithOptions(shared_ptr<QueryDeviceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDeviceDetailResponse(doRequest(make_shared<string>("QueryDeviceDetail"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDetail(shared_ptr<QueryDeviceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDetailWithOptions(request, runtime);
}

InvokeThingServiceResponse Alibabacloud_Iot20180120::Client::invokeThingServiceWithOptions(shared_ptr<InvokeThingServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return InvokeThingServiceResponse(doRequest(make_shared<string>("InvokeThingService"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

InvokeThingServiceResponse Alibabacloud_Iot20180120::Client::invokeThingService(shared_ptr<InvokeThingServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeThingServiceWithOptions(request, runtime);
}

GetDeviceStatusResponse Alibabacloud_Iot20180120::Client::getDeviceStatusWithOptions(shared_ptr<GetDeviceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDeviceStatusResponse(doRequest(make_shared<string>("GetDeviceStatus"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDeviceStatusResponse Alibabacloud_Iot20180120::Client::getDeviceStatus(shared_ptr<GetDeviceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceStatusWithOptions(request, runtime);
}

EnableThingResponse Alibabacloud_Iot20180120::Client::enableThingWithOptions(shared_ptr<EnableThingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return EnableThingResponse(doRequest(make_shared<string>("EnableThing"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

EnableThingResponse Alibabacloud_Iot20180120::Client::enableThing(shared_ptr<EnableThingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableThingWithOptions(request, runtime);
}

DisableThingResponse Alibabacloud_Iot20180120::Client::disableThingWithOptions(shared_ptr<DisableThingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DisableThingResponse(doRequest(make_shared<string>("DisableThing"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DisableThingResponse Alibabacloud_Iot20180120::Client::disableThing(shared_ptr<DisableThingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableThingWithOptions(request, runtime);
}

DeleteProductResponse Alibabacloud_Iot20180120::Client::deleteProductWithOptions(shared_ptr<DeleteProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteProductResponse(doRequest(make_shared<string>("DeleteProduct"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteProductResponse Alibabacloud_Iot20180120::Client::deleteProduct(shared_ptr<DeleteProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductWithOptions(request, runtime);
}

DeleteDeviceResponse Alibabacloud_Iot20180120::Client::deleteDeviceWithOptions(shared_ptr<DeleteDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteDeviceResponse(doRequest(make_shared<string>("DeleteDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteDeviceResponse Alibabacloud_Iot20180120::Client::deleteDevice(shared_ptr<DeleteDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceWithOptions(request, runtime);
}

CreateProductResponse Alibabacloud_Iot20180120::Client::createProductWithOptions(shared_ptr<CreateProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateProductResponse(doRequest(make_shared<string>("CreateProduct"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2018-01-20"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateProductResponse Alibabacloud_Iot20180120::Client::createProduct(shared_ptr<CreateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductWithOptions(request, runtime);
}

string Alibabacloud_Iot20180120::Client::getEndpoint(shared_ptr<string> productId,
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

