// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ice20201109.hpp>
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

using namespace Alibabacloud_ICE20201109;

Alibabacloud_ICE20201109::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "ice.aliyuncs.com"},
    {"ap-northeast-2-pop", "ice.aliyuncs.com"},
    {"ap-south-1", "ice.aliyuncs.com"},
    {"ap-southeast-1", "ice.aliyuncs.com"},
    {"ap-southeast-2", "ice.aliyuncs.com"},
    {"ap-southeast-3", "ice.aliyuncs.com"},
    {"ap-southeast-5", "ice.aliyuncs.com"},
    {"cn-beijing", "ice.aliyuncs.com"},
    {"cn-beijing-finance-1", "ice.aliyuncs.com"},
    {"cn-beijing-finance-pop", "ice.aliyuncs.com"},
    {"cn-beijing-gov-1", "ice.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "ice.aliyuncs.com"},
    {"cn-chengdu", "ice.aliyuncs.com"},
    {"cn-edge-1", "ice.aliyuncs.com"},
    {"cn-fujian", "ice.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "ice.aliyuncs.com"},
    {"cn-hangzhou", "ice.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "ice.aliyuncs.com"},
    {"cn-hangzhou-finance", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "ice.aliyuncs.com"},
    {"cn-hangzhou-test-306", "ice.aliyuncs.com"},
    {"cn-hongkong", "ice.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "ice.aliyuncs.com"},
    {"cn-huhehaote", "ice.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "ice.aliyuncs.com"},
    {"cn-north-2-gov-1", "ice.aliyuncs.com"},
    {"cn-qingdao", "ice.aliyuncs.com"},
    {"cn-qingdao-nebula", "ice.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "ice.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "ice.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ice.aliyuncs.com"},
    {"cn-shanghai-inner", "ice.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "ice.aliyuncs.com"},
    {"cn-shenzhen", "ice.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ice.aliyuncs.com"},
    {"cn-shenzhen-inner", "ice.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "ice.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "ice.aliyuncs.com"},
    {"cn-wuhan", "ice.aliyuncs.com"},
    {"cn-wulanchabu", "ice.aliyuncs.com"},
    {"cn-yushanfang", "ice.aliyuncs.com"},
    {"cn-zhangbei", "ice.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "ice.aliyuncs.com"},
    {"cn-zhangjiakou", "ice.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "ice.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "ice.aliyuncs.com"},
    {"eu-central-1", "ice.aliyuncs.com"},
    {"eu-west-1", "ice.aliyuncs.com"},
    {"eu-west-1-oxs", "ice.aliyuncs.com"},
    {"me-east-1", "ice.aliyuncs.com"},
    {"rus-west-1-pop", "ice.aliyuncs.com"},
    {"us-east-1", "ice.aliyuncs.com"},
    {"us-west-1", "ice.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ice"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ICE20201109::Client::getEndpoint(shared_ptr<string> productId,
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

ListSmartJobsResponse Alibabacloud_ICE20201109::Client::listSmartJobsWithOptions(shared_ptr<ListSmartJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListSmartJobsResponse(doRPCRequest(make_shared<string>("ListSmartJobs"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSmartJobsResponse Alibabacloud_ICE20201109::Client::listSmartJobs(shared_ptr<ListSmartJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartJobsWithOptions(request, runtime);
}

GetLiveEditingJobResponse Alibabacloud_ICE20201109::Client::getLiveEditingJobWithOptions(shared_ptr<GetLiveEditingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLiveEditingJobResponse(doRPCRequest(make_shared<string>("GetLiveEditingJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLiveEditingJobResponse Alibabacloud_ICE20201109::Client::getLiveEditingJob(shared_ptr<GetLiveEditingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveEditingJobWithOptions(request, runtime);
}

DescribeRelatedAuthorizationStatusResponse Alibabacloud_ICE20201109::Client::describeRelatedAuthorizationStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeRelatedAuthorizationStatusResponse(doRPCRequest(make_shared<string>("DescribeRelatedAuthorizationStatus"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRelatedAuthorizationStatusResponse Alibabacloud_ICE20201109::Client::describeRelatedAuthorizationStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRelatedAuthorizationStatusWithOptions(runtime);
}

DeleteSmartJobResponse Alibabacloud_ICE20201109::Client::deleteSmartJobWithOptions(shared_ptr<DeleteSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSmartJobResponse(doRPCRequest(make_shared<string>("DeleteSmartJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSmartJobResponse Alibabacloud_ICE20201109::Client::deleteSmartJob(shared_ptr<DeleteSmartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmartJobWithOptions(request, runtime);
}

AddTemplateResponse Alibabacloud_ICE20201109::Client::addTemplateWithOptions(shared_ptr<AddTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddTemplateResponse(doRPCRequest(make_shared<string>("AddTemplate"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddTemplateResponse Alibabacloud_ICE20201109::Client::addTemplate(shared_ptr<AddTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTemplateWithOptions(request, runtime);
}

UpdateEditingProjectResponse Alibabacloud_ICE20201109::Client::updateEditingProjectWithOptions(shared_ptr<UpdateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEditingProjectResponse(doRPCRequest(make_shared<string>("UpdateEditingProject"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEditingProjectResponse Alibabacloud_ICE20201109::Client::updateEditingProject(shared_ptr<UpdateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEditingProjectWithOptions(request, runtime);
}

ListMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listMediaProducingJobsWithOptions(shared_ptr<ListMediaProducingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMediaProducingJobsResponse(doRPCRequest(make_shared<string>("ListMediaProducingJobs"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listMediaProducingJobs(shared_ptr<ListMediaProducingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaProducingJobsWithOptions(request, runtime);
}

GetEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::getEditingProjectMaterialsWithOptions(shared_ptr<GetEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetEditingProjectMaterialsResponse(doRPCRequest(make_shared<string>("GetEditingProjectMaterials"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::getEditingProjectMaterials(shared_ptr<GetEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectMaterialsWithOptions(request, runtime);
}

GetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::getDefaultStorageLocationWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return GetDefaultStorageLocationResponse(doRPCRequest(make_shared<string>("GetDefaultStorageLocation"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::getDefaultStorageLocation() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDefaultStorageLocationWithOptions(runtime);
}

DeleteMediaInfosResponse Alibabacloud_ICE20201109::Client::deleteMediaInfosWithOptions(shared_ptr<DeleteMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMediaInfosResponse(doRPCRequest(make_shared<string>("DeleteMediaInfos"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMediaInfosResponse Alibabacloud_ICE20201109::Client::deleteMediaInfos(shared_ptr<DeleteMediaInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaInfosWithOptions(request, runtime);
}

SetEventCallbackResponse Alibabacloud_ICE20201109::Client::setEventCallbackWithOptions(shared_ptr<SetEventCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetEventCallbackResponse(doRPCRequest(make_shared<string>("SetEventCallback"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetEventCallbackResponse Alibabacloud_ICE20201109::Client::setEventCallback(shared_ptr<SetEventCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setEventCallbackWithOptions(request, runtime);
}

GetTemplateResponse Alibabacloud_ICE20201109::Client::getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetTemplateResponse(doRPCRequest(make_shared<string>("GetTemplate"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTemplateResponse Alibabacloud_ICE20201109::Client::getTemplate(shared_ptr<GetTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateWithOptions(request, runtime);
}

RegisterMediaInfoResponse Alibabacloud_ICE20201109::Client::registerMediaInfoWithOptions(shared_ptr<RegisterMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterMediaInfoResponse(doRPCRequest(make_shared<string>("RegisterMediaInfo"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterMediaInfoResponse Alibabacloud_ICE20201109::Client::registerMediaInfo(shared_ptr<RegisterMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaInfoWithOptions(request, runtime);
}

CreateEditingProjectResponse Alibabacloud_ICE20201109::Client::createEditingProjectWithOptions(shared_ptr<CreateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEditingProjectResponse(doRPCRequest(make_shared<string>("CreateEditingProject"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEditingProjectResponse Alibabacloud_ICE20201109::Client::createEditingProject(shared_ptr<CreateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEditingProjectWithOptions(request, runtime);
}

BatchGetMediaInfosResponse Alibabacloud_ICE20201109::Client::batchGetMediaInfosWithOptions(shared_ptr<BatchGetMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchGetMediaInfosResponse(doRPCRequest(make_shared<string>("BatchGetMediaInfos"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchGetMediaInfosResponse Alibabacloud_ICE20201109::Client::batchGetMediaInfos(shared_ptr<BatchGetMediaInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetMediaInfosWithOptions(request, runtime);
}

SetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::setDefaultStorageLocationWithOptions(shared_ptr<SetDefaultStorageLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDefaultStorageLocationResponse(doRPCRequest(make_shared<string>("SetDefaultStorageLocation"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::setDefaultStorageLocation(shared_ptr<SetDefaultStorageLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultStorageLocationWithOptions(request, runtime);
}

UpdateMediaInfoResponse Alibabacloud_ICE20201109::Client::updateMediaInfoWithOptions(shared_ptr<UpdateMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMediaInfoResponse(doRPCRequest(make_shared<string>("UpdateMediaInfo"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMediaInfoResponse Alibabacloud_ICE20201109::Client::updateMediaInfo(shared_ptr<UpdateMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaInfoWithOptions(request, runtime);
}

GetMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getMediaProducingJobWithOptions(shared_ptr<GetMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetMediaProducingJobResponse(doRPCRequest(make_shared<string>("GetMediaProducingJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getMediaProducingJob(shared_ptr<GetMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaProducingJobWithOptions(request, runtime);
}

DescribeIceProductStatusResponse Alibabacloud_ICE20201109::Client::describeIceProductStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeIceProductStatusResponse(doRPCRequest(make_shared<string>("DescribeIceProductStatus"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeIceProductStatusResponse Alibabacloud_ICE20201109::Client::describeIceProductStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIceProductStatusWithOptions(runtime);
}

GetLiveEditingIndexFileResponse Alibabacloud_ICE20201109::Client::getLiveEditingIndexFileWithOptions(shared_ptr<GetLiveEditingIndexFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetLiveEditingIndexFileResponse(doRPCRequest(make_shared<string>("GetLiveEditingIndexFile"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLiveEditingIndexFileResponse Alibabacloud_ICE20201109::Client::getLiveEditingIndexFile(shared_ptr<GetLiveEditingIndexFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveEditingIndexFileWithOptions(request, runtime);
}

ListMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listMediaBasicInfosWithOptions(shared_ptr<ListMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMediaBasicInfosResponse(doRPCRequest(make_shared<string>("ListMediaBasicInfos"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listMediaBasicInfos(shared_ptr<ListMediaBasicInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaBasicInfosWithOptions(request, runtime);
}

SubmitSubtitleProduceJobResponse Alibabacloud_ICE20201109::Client::submitSubtitleProduceJobWithOptions(shared_ptr<SubmitSubtitleProduceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSubtitleProduceJobResponse(doRPCRequest(make_shared<string>("SubmitSubtitleProduceJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSubtitleProduceJobResponse Alibabacloud_ICE20201109::Client::submitSubtitleProduceJob(shared_ptr<SubmitSubtitleProduceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSubtitleProduceJobWithOptions(request, runtime);
}

SubmitKeyWordCutJobResponse Alibabacloud_ICE20201109::Client::submitKeyWordCutJobWithOptions(shared_ptr<SubmitKeyWordCutJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SubmitKeyWordCutJobResponse(doRPCRequest(make_shared<string>("SubmitKeyWordCutJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitKeyWordCutJobResponse Alibabacloud_ICE20201109::Client::submitKeyWordCutJob(shared_ptr<SubmitKeyWordCutJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitKeyWordCutJobWithOptions(request, runtime);
}

AddEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::addEditingProjectMaterialsWithOptions(shared_ptr<AddEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddEditingProjectMaterialsResponse(doRPCRequest(make_shared<string>("AddEditingProjectMaterials"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::addEditingProjectMaterials(shared_ptr<AddEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEditingProjectMaterialsWithOptions(request, runtime);
}

SubmitASRJobResponse Alibabacloud_ICE20201109::Client::submitASRJobWithOptions(shared_ptr<SubmitASRJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitASRJobResponse(doRPCRequest(make_shared<string>("SubmitASRJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitASRJobResponse Alibabacloud_ICE20201109::Client::submitASRJob(shared_ptr<SubmitASRJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitASRJobWithOptions(request, runtime);
}

GetEditingProjectResponse Alibabacloud_ICE20201109::Client::getEditingProjectWithOptions(shared_ptr<GetEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetEditingProjectResponse(doRPCRequest(make_shared<string>("GetEditingProject"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEditingProjectResponse Alibabacloud_ICE20201109::Client::getEditingProject(shared_ptr<GetEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectWithOptions(request, runtime);
}

ListSysTemplatesResponse Alibabacloud_ICE20201109::Client::listSysTemplatesWithOptions(shared_ptr<ListSysTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListSysTemplatesResponse(doRPCRequest(make_shared<string>("ListSysTemplates"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSysTemplatesResponse Alibabacloud_ICE20201109::Client::listSysTemplates(shared_ptr<ListSysTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSysTemplatesWithOptions(request, runtime);
}

DeleteTemplateResponse Alibabacloud_ICE20201109::Client::deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteTemplateResponse(doRPCRequest(make_shared<string>("DeleteTemplate"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTemplateResponse Alibabacloud_ICE20201109::Client::deleteTemplate(shared_ptr<DeleteTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateWithOptions(request, runtime);
}

SubmitIRJobResponse Alibabacloud_ICE20201109::Client::submitIRJobWithOptions(shared_ptr<SubmitIRJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitIRJobResponse(doRPCRequest(make_shared<string>("SubmitIRJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitIRJobResponse Alibabacloud_ICE20201109::Client::submitIRJob(shared_ptr<SubmitIRJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitIRJobWithOptions(request, runtime);
}

DeleteEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectMaterialsWithOptions(shared_ptr<DeleteEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteEditingProjectMaterialsResponse(doRPCRequest(make_shared<string>("DeleteEditingProjectMaterials"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectMaterials(shared_ptr<DeleteEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEditingProjectMaterialsWithOptions(request, runtime);
}

SearchEditingProjectResponse Alibabacloud_ICE20201109::Client::searchEditingProjectWithOptions(shared_ptr<SearchEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchEditingProjectResponse(doRPCRequest(make_shared<string>("SearchEditingProject"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchEditingProjectResponse Alibabacloud_ICE20201109::Client::searchEditingProject(shared_ptr<SearchEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchEditingProjectWithOptions(request, runtime);
}

ListTemplatesResponse Alibabacloud_ICE20201109::Client::listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTemplatesResponse(doRPCRequest(make_shared<string>("ListTemplates"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTemplatesResponse Alibabacloud_ICE20201109::Client::listTemplates(shared_ptr<ListTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplatesWithOptions(request, runtime);
}

DeleteEditingProjectsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectsWithOptions(shared_ptr<DeleteEditingProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEditingProjectsResponse(doRPCRequest(make_shared<string>("DeleteEditingProjects"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEditingProjectsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjects(shared_ptr<DeleteEditingProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEditingProjectsWithOptions(request, runtime);
}

GetMediaInfoResponse Alibabacloud_ICE20201109::Client::getMediaInfoWithOptions(shared_ptr<GetMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMediaInfoResponse(doRPCRequest(make_shared<string>("GetMediaInfo"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMediaInfoResponse Alibabacloud_ICE20201109::Client::getMediaInfo(shared_ptr<GetMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaInfoWithOptions(request, runtime);
}

SubmitSmartJobResponse Alibabacloud_ICE20201109::Client::submitSmartJobWithOptions(shared_ptr<SubmitSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSmartJobResponse(doRPCRequest(make_shared<string>("SubmitSmartJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSmartJobResponse Alibabacloud_ICE20201109::Client::submitSmartJob(shared_ptr<SubmitSmartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmartJobWithOptions(request, runtime);
}

SubmitDelogoJobResponse Alibabacloud_ICE20201109::Client::submitDelogoJobWithOptions(shared_ptr<SubmitDelogoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitDelogoJobResponse(doRPCRequest(make_shared<string>("SubmitDelogoJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitDelogoJobResponse Alibabacloud_ICE20201109::Client::submitDelogoJob(shared_ptr<SubmitDelogoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDelogoJobWithOptions(request, runtime);
}

UpdateTemplateResponse Alibabacloud_ICE20201109::Client::updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTemplateResponse(doRPCRequest(make_shared<string>("UpdateTemplate"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTemplateResponse Alibabacloud_ICE20201109::Client::updateTemplate(shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTemplateWithOptions(request, runtime);
}

SubmitAudioProduceJobResponse Alibabacloud_ICE20201109::Client::submitAudioProduceJobWithOptions(shared_ptr<SubmitAudioProduceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitAudioProduceJobResponse(doRPCRequest(make_shared<string>("SubmitAudioProduceJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitAudioProduceJobResponse Alibabacloud_ICE20201109::Client::submitAudioProduceJob(shared_ptr<SubmitAudioProduceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAudioProduceJobWithOptions(request, runtime);
}

SubmitMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitMediaProducingJobWithOptions(shared_ptr<SubmitMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitMediaProducingJobResponse(doRPCRequest(make_shared<string>("SubmitMediaProducingJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitMediaProducingJob(shared_ptr<SubmitMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaProducingJobWithOptions(request, runtime);
}

UpdateSmartJobResponse Alibabacloud_ICE20201109::Client::updateSmartJobWithOptions(shared_ptr<UpdateSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSmartJobResponse(doRPCRequest(make_shared<string>("UpdateSmartJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSmartJobResponse Alibabacloud_ICE20201109::Client::updateSmartJob(shared_ptr<UpdateSmartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSmartJobWithOptions(request, runtime);
}

ListAllPublicMediaTagsResponse Alibabacloud_ICE20201109::Client::listAllPublicMediaTagsWithOptions(shared_ptr<ListAllPublicMediaTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAllPublicMediaTagsResponse(doRPCRequest(make_shared<string>("ListAllPublicMediaTags"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAllPublicMediaTagsResponse Alibabacloud_ICE20201109::Client::listAllPublicMediaTags(shared_ptr<ListAllPublicMediaTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAllPublicMediaTagsWithOptions(request, runtime);
}

SubmitMattingJobResponse Alibabacloud_ICE20201109::Client::submitMattingJobWithOptions(shared_ptr<SubmitMattingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitMattingJobResponse(doRPCRequest(make_shared<string>("SubmitMattingJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitMattingJobResponse Alibabacloud_ICE20201109::Client::submitMattingJob(shared_ptr<SubmitMattingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMattingJobWithOptions(request, runtime);
}

GetEventCallbackResponse Alibabacloud_ICE20201109::Client::getEventCallbackWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return GetEventCallbackResponse(doRPCRequest(make_shared<string>("GetEventCallback"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEventCallbackResponse Alibabacloud_ICE20201109::Client::getEventCallback() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventCallbackWithOptions(runtime);
}

ListPublicMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listPublicMediaBasicInfosWithOptions(shared_ptr<ListPublicMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPublicMediaBasicInfosResponse(doRPCRequest(make_shared<string>("ListPublicMediaBasicInfos"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPublicMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listPublicMediaBasicInfos(shared_ptr<ListPublicMediaBasicInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPublicMediaBasicInfosWithOptions(request, runtime);
}

SubmitCoverJobResponse Alibabacloud_ICE20201109::Client::submitCoverJobWithOptions(shared_ptr<SubmitCoverJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitCoverJobResponse(doRPCRequest(make_shared<string>("SubmitCoverJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitCoverJobResponse Alibabacloud_ICE20201109::Client::submitCoverJob(shared_ptr<SubmitCoverJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCoverJobWithOptions(request, runtime);
}

GetSmartHandleJobResponse Alibabacloud_ICE20201109::Client::getSmartHandleJobWithOptions(shared_ptr<GetSmartHandleJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetSmartHandleJobResponse(doRPCRequest(make_shared<string>("GetSmartHandleJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSmartHandleJobResponse Alibabacloud_ICE20201109::Client::getSmartHandleJob(shared_ptr<GetSmartHandleJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSmartHandleJobWithOptions(request, runtime);
}

SubmitH2VJobResponse Alibabacloud_ICE20201109::Client::submitH2VJobWithOptions(shared_ptr<SubmitH2VJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitH2VJobResponse(doRPCRequest(make_shared<string>("SubmitH2VJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitH2VJobResponse Alibabacloud_ICE20201109::Client::submitH2VJob(shared_ptr<SubmitH2VJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitH2VJobWithOptions(request, runtime);
}

SubmitLiveEditingJobResponse Alibabacloud_ICE20201109::Client::submitLiveEditingJobWithOptions(shared_ptr<SubmitLiveEditingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitLiveEditingJobResponse(doRPCRequest(make_shared<string>("SubmitLiveEditingJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitLiveEditingJobResponse Alibabacloud_ICE20201109::Client::submitLiveEditingJob(shared_ptr<SubmitLiveEditingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveEditingJobWithOptions(request, runtime);
}

SubmitPPTCutJobResponse Alibabacloud_ICE20201109::Client::submitPPTCutJobWithOptions(shared_ptr<SubmitPPTCutJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SubmitPPTCutJobResponse(doRPCRequest(make_shared<string>("SubmitPPTCutJob"), make_shared<string>("2020-11-09"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitPPTCutJobResponse Alibabacloud_ICE20201109::Client::submitPPTCutJob(shared_ptr<SubmitPPTCutJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitPPTCutJobWithOptions(request, runtime);
}

