// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/vod_20170321.hpp>
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

using namespace Alibabacloud_Vod20170321;

Alibabacloud_Vod20170321::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "vod.aliyuncs.com"},
    {"ap-southeast-2", "vod.aliyuncs.com"},
    {"ap-southeast-3", "vod.aliyuncs.com"},
    {"cn-beijing-finance-1", "vod.aliyuncs.com"},
    {"cn-beijing-finance-pop", "vod.aliyuncs.com"},
    {"cn-beijing-gov-1", "vod.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "vod.aliyuncs.com"},
    {"cn-chengdu", "vod.aliyuncs.com"},
    {"cn-edge-1", "vod.aliyuncs.com"},
    {"cn-fujian", "vod.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "vod.aliyuncs.com"},
    {"cn-hangzhou", "vod.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "vod.aliyuncs.com"},
    {"cn-hangzhou-finance", "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "vod.aliyuncs.com"},
    {"cn-hangzhou-test-306", "vod.aliyuncs.com"},
    {"cn-hongkong", "vod.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "vod.aliyuncs.com"},
    {"cn-huhehaote", "vod.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "vod.aliyuncs.com"},
    {"cn-qingdao", "vod.aliyuncs.com"},
    {"cn-qingdao-nebula", "vod.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "vod.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "vod.aliyuncs.com"},
    {"cn-shanghai-finance-1", "vod.aliyuncs.com"},
    {"cn-shanghai-inner", "vod.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "vod.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "vod.aliyuncs.com"},
    {"cn-shenzhen-inner", "vod.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "vod.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "vod.aliyuncs.com"},
    {"cn-wuhan", "vod.aliyuncs.com"},
    {"cn-wulanchabu", "vod.aliyuncs.com"},
    {"cn-yushanfang", "vod.aliyuncs.com"},
    {"cn-zhangbei", "vod.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "vod.aliyuncs.com"},
    {"cn-zhangjiakou", "vod.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "vod.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "vod.aliyuncs.com"},
    {"eu-west-1", "vod.aliyuncs.com"},
    {"eu-west-1-oxs", "vod.aliyuncs.com"},
    {"me-east-1", "vod.aliyuncs.com"},
    {"rus-west-1-pop", "vod.aliyuncs.com"},
    {"us-east-1", "vod.aliyuncs.com"},
    {"us-west-1", "vod.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("vod"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Vod20170321::Client::getEndpoint(shared_ptr<string> productId,
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

AddAITemplateResponse Alibabacloud_Vod20170321::Client::addAITemplateWithOptions(shared_ptr<AddAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddAITemplateResponse(doRPCRequest(make_shared<string>("AddAITemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddAITemplateResponse Alibabacloud_Vod20170321::Client::addAITemplate(shared_ptr<AddAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAITemplateWithOptions(request, runtime);
}

AddCategoryResponse Alibabacloud_Vod20170321::Client::addCategoryWithOptions(shared_ptr<AddCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddCategoryResponse(doRPCRequest(make_shared<string>("AddCategory"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddCategoryResponse Alibabacloud_Vod20170321::Client::addCategory(shared_ptr<AddCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCategoryWithOptions(request, runtime);
}

AddEditingProjectResponse Alibabacloud_Vod20170321::Client::addEditingProjectWithOptions(shared_ptr<AddEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddEditingProjectResponse(doRPCRequest(make_shared<string>("AddEditingProject"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddEditingProjectResponse Alibabacloud_Vod20170321::Client::addEditingProject(shared_ptr<AddEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEditingProjectWithOptions(request, runtime);
}

AddTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::addTranscodeTemplateGroupWithOptions(shared_ptr<AddTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddTranscodeTemplateGroupResponse(doRPCRequest(make_shared<string>("AddTranscodeTemplateGroup"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::addTranscodeTemplateGroup(shared_ptr<AddTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTranscodeTemplateGroupWithOptions(request, runtime);
}

AddVodDomainResponse Alibabacloud_Vod20170321::Client::addVodDomainWithOptions(shared_ptr<AddVodDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVodDomainResponse(doRPCRequest(make_shared<string>("AddVodDomain"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVodDomainResponse Alibabacloud_Vod20170321::Client::addVodDomain(shared_ptr<AddVodDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVodDomainWithOptions(request, runtime);
}

AddVodTemplateResponse Alibabacloud_Vod20170321::Client::addVodTemplateWithOptions(shared_ptr<AddVodTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddVodTemplateResponse(doRPCRequest(make_shared<string>("AddVodTemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddVodTemplateResponse Alibabacloud_Vod20170321::Client::addVodTemplate(shared_ptr<AddVodTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addVodTemplateWithOptions(request, runtime);
}

AddWatermarkResponse Alibabacloud_Vod20170321::Client::addWatermarkWithOptions(shared_ptr<AddWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddWatermarkResponse(doRPCRequest(make_shared<string>("AddWatermark"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddWatermarkResponse Alibabacloud_Vod20170321::Client::addWatermark(shared_ptr<AddWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addWatermarkWithOptions(request, runtime);
}

AttachAppPolicyToIdentityResponse Alibabacloud_Vod20170321::Client::attachAppPolicyToIdentityWithOptions(shared_ptr<AttachAppPolicyToIdentityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachAppPolicyToIdentityResponse(doRPCRequest(make_shared<string>("AttachAppPolicyToIdentity"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachAppPolicyToIdentityResponse Alibabacloud_Vod20170321::Client::attachAppPolicyToIdentity(shared_ptr<AttachAppPolicyToIdentityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachAppPolicyToIdentityWithOptions(request, runtime);
}

BatchSetVodDomainConfigsResponse Alibabacloud_Vod20170321::Client::batchSetVodDomainConfigsWithOptions(shared_ptr<BatchSetVodDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchSetVodDomainConfigsResponse(doRPCRequest(make_shared<string>("BatchSetVodDomainConfigs"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchSetVodDomainConfigsResponse Alibabacloud_Vod20170321::Client::batchSetVodDomainConfigs(shared_ptr<BatchSetVodDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetVodDomainConfigsWithOptions(request, runtime);
}

BatchStartVodDomainResponse Alibabacloud_Vod20170321::Client::batchStartVodDomainWithOptions(shared_ptr<BatchStartVodDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchStartVodDomainResponse(doRPCRequest(make_shared<string>("BatchStartVodDomain"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchStartVodDomainResponse Alibabacloud_Vod20170321::Client::batchStartVodDomain(shared_ptr<BatchStartVodDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchStartVodDomainWithOptions(request, runtime);
}

BatchStopVodDomainResponse Alibabacloud_Vod20170321::Client::batchStopVodDomainWithOptions(shared_ptr<BatchStopVodDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchStopVodDomainResponse(doRPCRequest(make_shared<string>("BatchStopVodDomain"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchStopVodDomainResponse Alibabacloud_Vod20170321::Client::batchStopVodDomain(shared_ptr<BatchStopVodDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchStopVodDomainWithOptions(request, runtime);
}

CancelUrlUploadJobsResponse Alibabacloud_Vod20170321::Client::cancelUrlUploadJobsWithOptions(shared_ptr<CancelUrlUploadJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelUrlUploadJobsResponse(doRPCRequest(make_shared<string>("CancelUrlUploadJobs"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelUrlUploadJobsResponse Alibabacloud_Vod20170321::Client::cancelUrlUploadJobs(shared_ptr<CancelUrlUploadJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelUrlUploadJobsWithOptions(request, runtime);
}

CreateAppInfoResponse Alibabacloud_Vod20170321::Client::createAppInfoWithOptions(shared_ptr<CreateAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAppInfoResponse(doRPCRequest(make_shared<string>("CreateAppInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAppInfoResponse Alibabacloud_Vod20170321::Client::createAppInfo(shared_ptr<CreateAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppInfoWithOptions(request, runtime);
}

CreateAuditResponse Alibabacloud_Vod20170321::Client::createAuditWithOptions(shared_ptr<CreateAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAuditResponse(doRPCRequest(make_shared<string>("CreateAudit"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAuditResponse Alibabacloud_Vod20170321::Client::createAudit(shared_ptr<CreateAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuditWithOptions(request, runtime);
}

CreateDetectionTemplateResponse Alibabacloud_Vod20170321::Client::createDetectionTemplateWithOptions(shared_ptr<CreateDetectionTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDetectionTemplateResponse(doRPCRequest(make_shared<string>("CreateDetectionTemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDetectionTemplateResponse Alibabacloud_Vod20170321::Client::createDetectionTemplate(shared_ptr<CreateDetectionTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDetectionTemplateWithOptions(request, runtime);
}

CreateUploadAttachedMediaResponse Alibabacloud_Vod20170321::Client::createUploadAttachedMediaWithOptions(shared_ptr<CreateUploadAttachedMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUploadAttachedMediaResponse(doRPCRequest(make_shared<string>("CreateUploadAttachedMedia"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUploadAttachedMediaResponse Alibabacloud_Vod20170321::Client::createUploadAttachedMedia(shared_ptr<CreateUploadAttachedMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadAttachedMediaWithOptions(request, runtime);
}

CreateUploadImageResponse Alibabacloud_Vod20170321::Client::createUploadImageWithOptions(shared_ptr<CreateUploadImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUploadImageResponse(doRPCRequest(make_shared<string>("CreateUploadImage"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUploadImageResponse Alibabacloud_Vod20170321::Client::createUploadImage(shared_ptr<CreateUploadImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadImageWithOptions(request, runtime);
}

CreateUploadVideoResponse Alibabacloud_Vod20170321::Client::createUploadVideoWithOptions(shared_ptr<CreateUploadVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUploadVideoResponse(doRPCRequest(make_shared<string>("CreateUploadVideo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUploadVideoResponse Alibabacloud_Vod20170321::Client::createUploadVideo(shared_ptr<CreateUploadVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadVideoWithOptions(request, runtime);
}

CreateVodRealTimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::createVodRealTimeLogDeliveryWithOptions(shared_ptr<CreateVodRealTimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CreateVodRealTimeLogDeliveryResponse(doRPCRequest(make_shared<string>("CreateVodRealTimeLogDelivery"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVodRealTimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::createVodRealTimeLogDelivery(shared_ptr<CreateVodRealTimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVodRealTimeLogDeliveryWithOptions(request, runtime);
}

DeleteAIImageInfosResponse Alibabacloud_Vod20170321::Client::deleteAIImageInfosWithOptions(shared_ptr<DeleteAIImageInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAIImageInfosResponse(doRPCRequest(make_shared<string>("DeleteAIImageInfos"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAIImageInfosResponse Alibabacloud_Vod20170321::Client::deleteAIImageInfos(shared_ptr<DeleteAIImageInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAIImageInfosWithOptions(request, runtime);
}

DeleteAITemplateResponse Alibabacloud_Vod20170321::Client::deleteAITemplateWithOptions(shared_ptr<DeleteAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAITemplateResponse(doRPCRequest(make_shared<string>("DeleteAITemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAITemplateResponse Alibabacloud_Vod20170321::Client::deleteAITemplate(shared_ptr<DeleteAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAITemplateWithOptions(request, runtime);
}

DeleteAppInfoResponse Alibabacloud_Vod20170321::Client::deleteAppInfoWithOptions(shared_ptr<DeleteAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAppInfoResponse(doRPCRequest(make_shared<string>("DeleteAppInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAppInfoResponse Alibabacloud_Vod20170321::Client::deleteAppInfo(shared_ptr<DeleteAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppInfoWithOptions(request, runtime);
}

DeleteAttachedMediaResponse Alibabacloud_Vod20170321::Client::deleteAttachedMediaWithOptions(shared_ptr<DeleteAttachedMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAttachedMediaResponse(doRPCRequest(make_shared<string>("DeleteAttachedMedia"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAttachedMediaResponse Alibabacloud_Vod20170321::Client::deleteAttachedMedia(shared_ptr<DeleteAttachedMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAttachedMediaWithOptions(request, runtime);
}

DeleteCategoryResponse Alibabacloud_Vod20170321::Client::deleteCategoryWithOptions(shared_ptr<DeleteCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCategoryResponse(doRPCRequest(make_shared<string>("DeleteCategory"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCategoryResponse Alibabacloud_Vod20170321::Client::deleteCategory(shared_ptr<DeleteCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCategoryWithOptions(request, runtime);
}

DeleteDetectionTemplateResponse Alibabacloud_Vod20170321::Client::deleteDetectionTemplateWithOptions(shared_ptr<DeleteDetectionTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDetectionTemplateResponse(doRPCRequest(make_shared<string>("DeleteDetectionTemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDetectionTemplateResponse Alibabacloud_Vod20170321::Client::deleteDetectionTemplate(shared_ptr<DeleteDetectionTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDetectionTemplateWithOptions(request, runtime);
}

DeleteDynamicImageResponse Alibabacloud_Vod20170321::Client::deleteDynamicImageWithOptions(shared_ptr<DeleteDynamicImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDynamicImageResponse(doRPCRequest(make_shared<string>("DeleteDynamicImage"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDynamicImageResponse Alibabacloud_Vod20170321::Client::deleteDynamicImage(shared_ptr<DeleteDynamicImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDynamicImageWithOptions(request, runtime);
}

DeleteEditingProjectResponse Alibabacloud_Vod20170321::Client::deleteEditingProjectWithOptions(shared_ptr<DeleteEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEditingProjectResponse(doRPCRequest(make_shared<string>("DeleteEditingProject"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEditingProjectResponse Alibabacloud_Vod20170321::Client::deleteEditingProject(shared_ptr<DeleteEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEditingProjectWithOptions(request, runtime);
}

DeleteImageResponse Alibabacloud_Vod20170321::Client::deleteImageWithOptions(shared_ptr<DeleteImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteImageResponse(doRPCRequest(make_shared<string>("DeleteImage"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteImageResponse Alibabacloud_Vod20170321::Client::deleteImage(shared_ptr<DeleteImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImageWithOptions(request, runtime);
}

DeleteMessageCallbackResponse Alibabacloud_Vod20170321::Client::deleteMessageCallbackWithOptions(shared_ptr<DeleteMessageCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMessageCallbackResponse(doRPCRequest(make_shared<string>("DeleteMessageCallback"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMessageCallbackResponse Alibabacloud_Vod20170321::Client::deleteMessageCallback(shared_ptr<DeleteMessageCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMessageCallbackWithOptions(request, runtime);
}

DeleteMezzaninesResponse Alibabacloud_Vod20170321::Client::deleteMezzaninesWithOptions(shared_ptr<DeleteMezzaninesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMezzaninesResponse(doRPCRequest(make_shared<string>("DeleteMezzanines"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMezzaninesResponse Alibabacloud_Vod20170321::Client::deleteMezzanines(shared_ptr<DeleteMezzaninesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMezzaninesWithOptions(request, runtime);
}

DeleteMultipartUploadResponse Alibabacloud_Vod20170321::Client::deleteMultipartUploadWithOptions(shared_ptr<DeleteMultipartUploadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMultipartUploadResponse(doRPCRequest(make_shared<string>("DeleteMultipartUpload"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMultipartUploadResponse Alibabacloud_Vod20170321::Client::deleteMultipartUpload(shared_ptr<DeleteMultipartUploadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMultipartUploadWithOptions(request, runtime);
}

DeleteStreamResponse Alibabacloud_Vod20170321::Client::deleteStreamWithOptions(shared_ptr<DeleteStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteStreamResponse(doRPCRequest(make_shared<string>("DeleteStream"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteStreamResponse Alibabacloud_Vod20170321::Client::deleteStream(shared_ptr<DeleteStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStreamWithOptions(request, runtime);
}

DeleteTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::deleteTranscodeTemplateGroupWithOptions(shared_ptr<DeleteTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTranscodeTemplateGroupResponse(doRPCRequest(make_shared<string>("DeleteTranscodeTemplateGroup"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::deleteTranscodeTemplateGroup(shared_ptr<DeleteTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTranscodeTemplateGroupWithOptions(request, runtime);
}

DeleteVideoResponse Alibabacloud_Vod20170321::Client::deleteVideoWithOptions(shared_ptr<DeleteVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVideoResponse(doRPCRequest(make_shared<string>("DeleteVideo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVideoResponse Alibabacloud_Vod20170321::Client::deleteVideo(shared_ptr<DeleteVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVideoWithOptions(request, runtime);
}

DeleteVodDomainResponse Alibabacloud_Vod20170321::Client::deleteVodDomainWithOptions(shared_ptr<DeleteVodDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVodDomainResponse(doRPCRequest(make_shared<string>("DeleteVodDomain"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVodDomainResponse Alibabacloud_Vod20170321::Client::deleteVodDomain(shared_ptr<DeleteVodDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVodDomainWithOptions(request, runtime);
}

DeleteVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::deleteVodRealtimeLogDeliveryWithOptions(shared_ptr<DeleteVodRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteVodRealtimeLogDeliveryResponse(doRPCRequest(make_shared<string>("DeleteVodRealtimeLogDelivery"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::deleteVodRealtimeLogDelivery(shared_ptr<DeleteVodRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVodRealtimeLogDeliveryWithOptions(request, runtime);
}

DeleteVodSpecificConfigResponse Alibabacloud_Vod20170321::Client::deleteVodSpecificConfigWithOptions(shared_ptr<DeleteVodSpecificConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVodSpecificConfigResponse(doRPCRequest(make_shared<string>("DeleteVodSpecificConfig"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVodSpecificConfigResponse Alibabacloud_Vod20170321::Client::deleteVodSpecificConfig(shared_ptr<DeleteVodSpecificConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVodSpecificConfigWithOptions(request, runtime);
}

DeleteVodTemplateResponse Alibabacloud_Vod20170321::Client::deleteVodTemplateWithOptions(shared_ptr<DeleteVodTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVodTemplateResponse(doRPCRequest(make_shared<string>("DeleteVodTemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVodTemplateResponse Alibabacloud_Vod20170321::Client::deleteVodTemplate(shared_ptr<DeleteVodTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVodTemplateWithOptions(request, runtime);
}

DeleteWatermarkResponse Alibabacloud_Vod20170321::Client::deleteWatermarkWithOptions(shared_ptr<DeleteWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteWatermarkResponse(doRPCRequest(make_shared<string>("DeleteWatermark"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteWatermarkResponse Alibabacloud_Vod20170321::Client::deleteWatermark(shared_ptr<DeleteWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWatermarkWithOptions(request, runtime);
}

DescribePlayTopVideosResponse Alibabacloud_Vod20170321::Client::describePlayTopVideosWithOptions(shared_ptr<DescribePlayTopVideosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePlayTopVideosResponse(doRPCRequest(make_shared<string>("DescribePlayTopVideos"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePlayTopVideosResponse Alibabacloud_Vod20170321::Client::describePlayTopVideos(shared_ptr<DescribePlayTopVideosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayTopVideosWithOptions(request, runtime);
}

DescribePlayUserAvgResponse Alibabacloud_Vod20170321::Client::describePlayUserAvgWithOptions(shared_ptr<DescribePlayUserAvgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePlayUserAvgResponse(doRPCRequest(make_shared<string>("DescribePlayUserAvg"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePlayUserAvgResponse Alibabacloud_Vod20170321::Client::describePlayUserAvg(shared_ptr<DescribePlayUserAvgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayUserAvgWithOptions(request, runtime);
}

DescribePlayUserTotalResponse Alibabacloud_Vod20170321::Client::describePlayUserTotalWithOptions(shared_ptr<DescribePlayUserTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePlayUserTotalResponse(doRPCRequest(make_shared<string>("DescribePlayUserTotal"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePlayUserTotalResponse Alibabacloud_Vod20170321::Client::describePlayUserTotal(shared_ptr<DescribePlayUserTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayUserTotalWithOptions(request, runtime);
}

DescribePlayVideoStatisResponse Alibabacloud_Vod20170321::Client::describePlayVideoStatisWithOptions(shared_ptr<DescribePlayVideoStatisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePlayVideoStatisResponse(doRPCRequest(make_shared<string>("DescribePlayVideoStatis"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePlayVideoStatisResponse Alibabacloud_Vod20170321::Client::describePlayVideoStatis(shared_ptr<DescribePlayVideoStatisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayVideoStatisWithOptions(request, runtime);
}

DescribeVodAIDataResponse Alibabacloud_Vod20170321::Client::describeVodAIDataWithOptions(shared_ptr<DescribeVodAIDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodAIDataResponse(doRPCRequest(make_shared<string>("DescribeVodAIData"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodAIDataResponse Alibabacloud_Vod20170321::Client::describeVodAIData(shared_ptr<DescribeVodAIDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodAIDataWithOptions(request, runtime);
}

DescribeVodCertificateListResponse Alibabacloud_Vod20170321::Client::describeVodCertificateListWithOptions(shared_ptr<DescribeVodCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodCertificateListResponse(doRPCRequest(make_shared<string>("DescribeVodCertificateList"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodCertificateListResponse Alibabacloud_Vod20170321::Client::describeVodCertificateList(shared_ptr<DescribeVodCertificateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodCertificateListWithOptions(request, runtime);
}

DescribeVodDomainBpsDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainBpsDataWithOptions(shared_ptr<DescribeVodDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodDomainBpsDataResponse(doRPCRequest(make_shared<string>("DescribeVodDomainBpsData"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodDomainBpsDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainBpsData(shared_ptr<DescribeVodDomainBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainBpsDataWithOptions(request, runtime);
}

DescribeVodDomainCertificateInfoResponse Alibabacloud_Vod20170321::Client::describeVodDomainCertificateInfoWithOptions(shared_ptr<DescribeVodDomainCertificateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodDomainCertificateInfoResponse(doRPCRequest(make_shared<string>("DescribeVodDomainCertificateInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodDomainCertificateInfoResponse Alibabacloud_Vod20170321::Client::describeVodDomainCertificateInfo(shared_ptr<DescribeVodDomainCertificateInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainCertificateInfoWithOptions(request, runtime);
}

DescribeVodDomainConfigsResponse Alibabacloud_Vod20170321::Client::describeVodDomainConfigsWithOptions(shared_ptr<DescribeVodDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodDomainConfigsResponse(doRPCRequest(make_shared<string>("DescribeVodDomainConfigs"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodDomainConfigsResponse Alibabacloud_Vod20170321::Client::describeVodDomainConfigs(shared_ptr<DescribeVodDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainConfigsWithOptions(request, runtime);
}

DescribeVodDomainDetailResponse Alibabacloud_Vod20170321::Client::describeVodDomainDetailWithOptions(shared_ptr<DescribeVodDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodDomainDetailResponse(doRPCRequest(make_shared<string>("DescribeVodDomainDetail"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodDomainDetailResponse Alibabacloud_Vod20170321::Client::describeVodDomainDetail(shared_ptr<DescribeVodDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainDetailWithOptions(request, runtime);
}

DescribeVodDomainLogResponse Alibabacloud_Vod20170321::Client::describeVodDomainLogWithOptions(shared_ptr<DescribeVodDomainLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodDomainLogResponse(doRPCRequest(make_shared<string>("DescribeVodDomainLog"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodDomainLogResponse Alibabacloud_Vod20170321::Client::describeVodDomainLog(shared_ptr<DescribeVodDomainLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainLogWithOptions(request, runtime);
}

DescribeVodDomainRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::describeVodDomainRealtimeLogDeliveryWithOptions(shared_ptr<DescribeVodDomainRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeVodDomainRealtimeLogDeliveryResponse(doRPCRequest(make_shared<string>("DescribeVodDomainRealtimeLogDelivery"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodDomainRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::describeVodDomainRealtimeLogDelivery(shared_ptr<DescribeVodDomainRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainRealtimeLogDeliveryWithOptions(request, runtime);
}

DescribeVodDomainTrafficDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainTrafficDataWithOptions(shared_ptr<DescribeVodDomainTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodDomainTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeVodDomainTrafficData"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodDomainTrafficDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainTrafficData(shared_ptr<DescribeVodDomainTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainTrafficDataWithOptions(request, runtime);
}

DescribeVodDomainUsageDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainUsageDataWithOptions(shared_ptr<DescribeVodDomainUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodDomainUsageDataResponse(doRPCRequest(make_shared<string>("DescribeVodDomainUsageData"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodDomainUsageDataResponse Alibabacloud_Vod20170321::Client::describeVodDomainUsageData(shared_ptr<DescribeVodDomainUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodDomainUsageDataWithOptions(request, runtime);
}

DescribeVodRefreshQuotaResponse Alibabacloud_Vod20170321::Client::describeVodRefreshQuotaWithOptions(shared_ptr<DescribeVodRefreshQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodRefreshQuotaResponse(doRPCRequest(make_shared<string>("DescribeVodRefreshQuota"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodRefreshQuotaResponse Alibabacloud_Vod20170321::Client::describeVodRefreshQuota(shared_ptr<DescribeVodRefreshQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodRefreshQuotaWithOptions(request, runtime);
}

DescribeVodRefreshTasksResponse Alibabacloud_Vod20170321::Client::describeVodRefreshTasksWithOptions(shared_ptr<DescribeVodRefreshTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodRefreshTasksResponse(doRPCRequest(make_shared<string>("DescribeVodRefreshTasks"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodRefreshTasksResponse Alibabacloud_Vod20170321::Client::describeVodRefreshTasks(shared_ptr<DescribeVodRefreshTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodRefreshTasksWithOptions(request, runtime);
}

DescribeVodStorageDataResponse Alibabacloud_Vod20170321::Client::describeVodStorageDataWithOptions(shared_ptr<DescribeVodStorageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodStorageDataResponse(doRPCRequest(make_shared<string>("DescribeVodStorageData"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodStorageDataResponse Alibabacloud_Vod20170321::Client::describeVodStorageData(shared_ptr<DescribeVodStorageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodStorageDataWithOptions(request, runtime);
}

DescribeVodTagResourcesResponse Alibabacloud_Vod20170321::Client::describeVodTagResourcesWithOptions(shared_ptr<DescribeVodTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodTagResourcesResponse(doRPCRequest(make_shared<string>("DescribeVodTagResources"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodTagResourcesResponse Alibabacloud_Vod20170321::Client::describeVodTagResources(shared_ptr<DescribeVodTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodTagResourcesWithOptions(request, runtime);
}

DescribeVodTranscodeDataResponse Alibabacloud_Vod20170321::Client::describeVodTranscodeDataWithOptions(shared_ptr<DescribeVodTranscodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodTranscodeDataResponse(doRPCRequest(make_shared<string>("DescribeVodTranscodeData"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodTranscodeDataResponse Alibabacloud_Vod20170321::Client::describeVodTranscodeData(shared_ptr<DescribeVodTranscodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodTranscodeDataWithOptions(request, runtime);
}

DescribeVodUserDomainsResponse Alibabacloud_Vod20170321::Client::describeVodUserDomainsWithOptions(shared_ptr<DescribeVodUserDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodUserDomainsResponse(doRPCRequest(make_shared<string>("DescribeVodUserDomains"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodUserDomainsResponse Alibabacloud_Vod20170321::Client::describeVodUserDomains(shared_ptr<DescribeVodUserDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodUserDomainsWithOptions(request, runtime);
}

DescribeVodUserTagsResponse Alibabacloud_Vod20170321::Client::describeVodUserTagsWithOptions(shared_ptr<DescribeVodUserTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodUserTagsResponse(doRPCRequest(make_shared<string>("DescribeVodUserTags"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodUserTagsResponse Alibabacloud_Vod20170321::Client::describeVodUserTags(shared_ptr<DescribeVodUserTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodUserTagsWithOptions(request, runtime);
}

DescribeVodVerifyContentResponse Alibabacloud_Vod20170321::Client::describeVodVerifyContentWithOptions(shared_ptr<DescribeVodVerifyContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVodVerifyContentResponse(doRPCRequest(make_shared<string>("DescribeVodVerifyContent"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVodVerifyContentResponse Alibabacloud_Vod20170321::Client::describeVodVerifyContent(shared_ptr<DescribeVodVerifyContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVodVerifyContentWithOptions(request, runtime);
}

DetachAppPolicyFromIdentityResponse Alibabacloud_Vod20170321::Client::detachAppPolicyFromIdentityWithOptions(shared_ptr<DetachAppPolicyFromIdentityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachAppPolicyFromIdentityResponse(doRPCRequest(make_shared<string>("DetachAppPolicyFromIdentity"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachAppPolicyFromIdentityResponse Alibabacloud_Vod20170321::Client::detachAppPolicyFromIdentity(shared_ptr<DetachAppPolicyFromIdentityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachAppPolicyFromIdentityWithOptions(request, runtime);
}

DisableVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::disableVodRealtimeLogDeliveryWithOptions(shared_ptr<DisableVodRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DisableVodRealtimeLogDeliveryResponse(doRPCRequest(make_shared<string>("DisableVodRealtimeLogDelivery"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::disableVodRealtimeLogDelivery(shared_ptr<DisableVodRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableVodRealtimeLogDeliveryWithOptions(request, runtime);
}

EnableVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::enableVodRealtimeLogDeliveryWithOptions(shared_ptr<EnableVodRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return EnableVodRealtimeLogDeliveryResponse(doRPCRequest(make_shared<string>("EnableVodRealtimeLogDelivery"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableVodRealtimeLogDeliveryResponse Alibabacloud_Vod20170321::Client::enableVodRealtimeLogDelivery(shared_ptr<EnableVodRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableVodRealtimeLogDeliveryWithOptions(request, runtime);
}

GetAICaptionExtractionJobsResponse Alibabacloud_Vod20170321::Client::getAICaptionExtractionJobsWithOptions(shared_ptr<GetAICaptionExtractionJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAICaptionExtractionJobsResponse(doRPCRequest(make_shared<string>("GetAICaptionExtractionJobs"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAICaptionExtractionJobsResponse Alibabacloud_Vod20170321::Client::getAICaptionExtractionJobs(shared_ptr<GetAICaptionExtractionJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAICaptionExtractionJobsWithOptions(request, runtime);
}

GetAIImageJobsResponse Alibabacloud_Vod20170321::Client::getAIImageJobsWithOptions(shared_ptr<GetAIImageJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAIImageJobsResponse(doRPCRequest(make_shared<string>("GetAIImageJobs"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAIImageJobsResponse Alibabacloud_Vod20170321::Client::getAIImageJobs(shared_ptr<GetAIImageJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAIImageJobsWithOptions(request, runtime);
}

GetAIMediaAuditJobResponse Alibabacloud_Vod20170321::Client::getAIMediaAuditJobWithOptions(shared_ptr<GetAIMediaAuditJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAIMediaAuditJobResponse(doRPCRequest(make_shared<string>("GetAIMediaAuditJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAIMediaAuditJobResponse Alibabacloud_Vod20170321::Client::getAIMediaAuditJob(shared_ptr<GetAIMediaAuditJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAIMediaAuditJobWithOptions(request, runtime);
}

GetAITemplateResponse Alibabacloud_Vod20170321::Client::getAITemplateWithOptions(shared_ptr<GetAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAITemplateResponse(doRPCRequest(make_shared<string>("GetAITemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAITemplateResponse Alibabacloud_Vod20170321::Client::getAITemplate(shared_ptr<GetAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAITemplateWithOptions(request, runtime);
}

GetAIVideoTagResultResponse Alibabacloud_Vod20170321::Client::getAIVideoTagResultWithOptions(shared_ptr<GetAIVideoTagResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAIVideoTagResultResponse(doRPCRequest(make_shared<string>("GetAIVideoTagResult"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAIVideoTagResultResponse Alibabacloud_Vod20170321::Client::getAIVideoTagResult(shared_ptr<GetAIVideoTagResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAIVideoTagResultWithOptions(request, runtime);
}

GetAppInfosResponse Alibabacloud_Vod20170321::Client::getAppInfosWithOptions(shared_ptr<GetAppInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAppInfosResponse(doRPCRequest(make_shared<string>("GetAppInfos"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAppInfosResponse Alibabacloud_Vod20170321::Client::getAppInfos(shared_ptr<GetAppInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppInfosWithOptions(request, runtime);
}

GetAttachedMediaInfoResponse Alibabacloud_Vod20170321::Client::getAttachedMediaInfoWithOptions(shared_ptr<GetAttachedMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAttachedMediaInfoResponse(doRPCRequest(make_shared<string>("GetAttachedMediaInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAttachedMediaInfoResponse Alibabacloud_Vod20170321::Client::getAttachedMediaInfo(shared_ptr<GetAttachedMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAttachedMediaInfoWithOptions(request, runtime);
}

GetAuditHistoryResponse Alibabacloud_Vod20170321::Client::getAuditHistoryWithOptions(shared_ptr<GetAuditHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAuditHistoryResponse(doRPCRequest(make_shared<string>("GetAuditHistory"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAuditHistoryResponse Alibabacloud_Vod20170321::Client::getAuditHistory(shared_ptr<GetAuditHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuditHistoryWithOptions(request, runtime);
}

GetCategoriesResponse Alibabacloud_Vod20170321::Client::getCategoriesWithOptions(shared_ptr<GetCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCategoriesResponse(doRPCRequest(make_shared<string>("GetCategories"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCategoriesResponse Alibabacloud_Vod20170321::Client::getCategories(shared_ptr<GetCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCategoriesWithOptions(request, runtime);
}

GetDefaultAITemplateResponse Alibabacloud_Vod20170321::Client::getDefaultAITemplateWithOptions(shared_ptr<GetDefaultAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDefaultAITemplateResponse(doRPCRequest(make_shared<string>("GetDefaultAITemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDefaultAITemplateResponse Alibabacloud_Vod20170321::Client::getDefaultAITemplate(shared_ptr<GetDefaultAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDefaultAITemplateWithOptions(request, runtime);
}

GetDetectionJobResponse Alibabacloud_Vod20170321::Client::getDetectionJobWithOptions(shared_ptr<GetDetectionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetDetectionJobResponse(doRPCRequest(make_shared<string>("GetDetectionJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDetectionJobResponse Alibabacloud_Vod20170321::Client::getDetectionJob(shared_ptr<GetDetectionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDetectionJobWithOptions(request, runtime);
}

GetDetectionResultResponse Alibabacloud_Vod20170321::Client::getDetectionResultWithOptions(shared_ptr<GetDetectionResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetDetectionResultResponse(doRPCRequest(make_shared<string>("GetDetectionResult"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDetectionResultResponse Alibabacloud_Vod20170321::Client::getDetectionResult(shared_ptr<GetDetectionResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDetectionResultWithOptions(request, runtime);
}

GetDetectionTemplateResponse Alibabacloud_Vod20170321::Client::getDetectionTemplateWithOptions(shared_ptr<GetDetectionTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetDetectionTemplateResponse(doRPCRequest(make_shared<string>("GetDetectionTemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDetectionTemplateResponse Alibabacloud_Vod20170321::Client::getDetectionTemplate(shared_ptr<GetDetectionTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDetectionTemplateWithOptions(request, runtime);
}

GetEditingProjectResponse Alibabacloud_Vod20170321::Client::getEditingProjectWithOptions(shared_ptr<GetEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetEditingProjectResponse(doRPCRequest(make_shared<string>("GetEditingProject"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEditingProjectResponse Alibabacloud_Vod20170321::Client::getEditingProject(shared_ptr<GetEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectWithOptions(request, runtime);
}

GetEditingProjectMaterialsResponse Alibabacloud_Vod20170321::Client::getEditingProjectMaterialsWithOptions(shared_ptr<GetEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetEditingProjectMaterialsResponse(doRPCRequest(make_shared<string>("GetEditingProjectMaterials"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEditingProjectMaterialsResponse Alibabacloud_Vod20170321::Client::getEditingProjectMaterials(shared_ptr<GetEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectMaterialsWithOptions(request, runtime);
}

GetImageInfoResponse Alibabacloud_Vod20170321::Client::getImageInfoWithOptions(shared_ptr<GetImageInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetImageInfoResponse(doRPCRequest(make_shared<string>("GetImageInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetImageInfoResponse Alibabacloud_Vod20170321::Client::getImageInfo(shared_ptr<GetImageInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageInfoWithOptions(request, runtime);
}

GetMediaAuditAudioResultDetailResponse Alibabacloud_Vod20170321::Client::getMediaAuditAudioResultDetailWithOptions(shared_ptr<GetMediaAuditAudioResultDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMediaAuditAudioResultDetailResponse(doRPCRequest(make_shared<string>("GetMediaAuditAudioResultDetail"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMediaAuditAudioResultDetailResponse Alibabacloud_Vod20170321::Client::getMediaAuditAudioResultDetail(shared_ptr<GetMediaAuditAudioResultDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaAuditAudioResultDetailWithOptions(request, runtime);
}

GetMediaAuditResultResponse Alibabacloud_Vod20170321::Client::getMediaAuditResultWithOptions(shared_ptr<GetMediaAuditResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMediaAuditResultResponse(doRPCRequest(make_shared<string>("GetMediaAuditResult"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMediaAuditResultResponse Alibabacloud_Vod20170321::Client::getMediaAuditResult(shared_ptr<GetMediaAuditResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaAuditResultWithOptions(request, runtime);
}

GetMediaAuditResultDetailResponse Alibabacloud_Vod20170321::Client::getMediaAuditResultDetailWithOptions(shared_ptr<GetMediaAuditResultDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMediaAuditResultDetailResponse(doRPCRequest(make_shared<string>("GetMediaAuditResultDetail"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMediaAuditResultDetailResponse Alibabacloud_Vod20170321::Client::getMediaAuditResultDetail(shared_ptr<GetMediaAuditResultDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaAuditResultDetailWithOptions(request, runtime);
}

GetMediaAuditResultTimelineResponse Alibabacloud_Vod20170321::Client::getMediaAuditResultTimelineWithOptions(shared_ptr<GetMediaAuditResultTimelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMediaAuditResultTimelineResponse(doRPCRequest(make_shared<string>("GetMediaAuditResultTimeline"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMediaAuditResultTimelineResponse Alibabacloud_Vod20170321::Client::getMediaAuditResultTimeline(shared_ptr<GetMediaAuditResultTimelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaAuditResultTimelineWithOptions(request, runtime);
}

GetMediaDNAResultResponse Alibabacloud_Vod20170321::Client::getMediaDNAResultWithOptions(shared_ptr<GetMediaDNAResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMediaDNAResultResponse(doRPCRequest(make_shared<string>("GetMediaDNAResult"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMediaDNAResultResponse Alibabacloud_Vod20170321::Client::getMediaDNAResult(shared_ptr<GetMediaDNAResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaDNAResultWithOptions(request, runtime);
}

GetMessageCallbackResponse Alibabacloud_Vod20170321::Client::getMessageCallbackWithOptions(shared_ptr<GetMessageCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMessageCallbackResponse(doRPCRequest(make_shared<string>("GetMessageCallback"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMessageCallbackResponse Alibabacloud_Vod20170321::Client::getMessageCallback(shared_ptr<GetMessageCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMessageCallbackWithOptions(request, runtime);
}

GetMezzanineInfoResponse Alibabacloud_Vod20170321::Client::getMezzanineInfoWithOptions(shared_ptr<GetMezzanineInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMezzanineInfoResponse(doRPCRequest(make_shared<string>("GetMezzanineInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMezzanineInfoResponse Alibabacloud_Vod20170321::Client::getMezzanineInfo(shared_ptr<GetMezzanineInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMezzanineInfoWithOptions(request, runtime);
}

GetPlayInfoResponse Alibabacloud_Vod20170321::Client::getPlayInfoWithOptions(shared_ptr<GetPlayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPlayInfoResponse(doRPCRequest(make_shared<string>("GetPlayInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPlayInfoResponse Alibabacloud_Vod20170321::Client::getPlayInfo(shared_ptr<GetPlayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPlayInfoWithOptions(request, runtime);
}

GetTranscodeSummaryResponse Alibabacloud_Vod20170321::Client::getTranscodeSummaryWithOptions(shared_ptr<GetTranscodeSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTranscodeSummaryResponse(doRPCRequest(make_shared<string>("GetTranscodeSummary"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTranscodeSummaryResponse Alibabacloud_Vod20170321::Client::getTranscodeSummary(shared_ptr<GetTranscodeSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTranscodeSummaryWithOptions(request, runtime);
}

GetTranscodeTaskResponse Alibabacloud_Vod20170321::Client::getTranscodeTaskWithOptions(shared_ptr<GetTranscodeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTranscodeTaskResponse(doRPCRequest(make_shared<string>("GetTranscodeTask"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTranscodeTaskResponse Alibabacloud_Vod20170321::Client::getTranscodeTask(shared_ptr<GetTranscodeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTranscodeTaskWithOptions(request, runtime);
}

GetTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::getTranscodeTemplateGroupWithOptions(shared_ptr<GetTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTranscodeTemplateGroupResponse(doRPCRequest(make_shared<string>("GetTranscodeTemplateGroup"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::getTranscodeTemplateGroup(shared_ptr<GetTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTranscodeTemplateGroupWithOptions(request, runtime);
}

GetURLUploadInfosResponse Alibabacloud_Vod20170321::Client::getURLUploadInfosWithOptions(shared_ptr<GetURLUploadInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetURLUploadInfosResponse(doRPCRequest(make_shared<string>("GetURLUploadInfos"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetURLUploadInfosResponse Alibabacloud_Vod20170321::Client::getURLUploadInfos(shared_ptr<GetURLUploadInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getURLUploadInfosWithOptions(request, runtime);
}

GetUploadDetailsResponse Alibabacloud_Vod20170321::Client::getUploadDetailsWithOptions(shared_ptr<GetUploadDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUploadDetailsResponse(doRPCRequest(make_shared<string>("GetUploadDetails"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUploadDetailsResponse Alibabacloud_Vod20170321::Client::getUploadDetails(shared_ptr<GetUploadDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUploadDetailsWithOptions(request, runtime);
}

GetVideoInfoResponse Alibabacloud_Vod20170321::Client::getVideoInfoWithOptions(shared_ptr<GetVideoInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetVideoInfoResponse(doRPCRequest(make_shared<string>("GetVideoInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVideoInfoResponse Alibabacloud_Vod20170321::Client::getVideoInfo(shared_ptr<GetVideoInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoInfoWithOptions(request, runtime);
}

GetVideoInfosResponse Alibabacloud_Vod20170321::Client::getVideoInfosWithOptions(shared_ptr<GetVideoInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetVideoInfosResponse(doRPCRequest(make_shared<string>("GetVideoInfos"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVideoInfosResponse Alibabacloud_Vod20170321::Client::getVideoInfos(shared_ptr<GetVideoInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoInfosWithOptions(request, runtime);
}

GetVideoListResponse Alibabacloud_Vod20170321::Client::getVideoListWithOptions(shared_ptr<GetVideoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetVideoListResponse(doRPCRequest(make_shared<string>("GetVideoList"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVideoListResponse Alibabacloud_Vod20170321::Client::getVideoList(shared_ptr<GetVideoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoListWithOptions(request, runtime);
}

GetVideoPlayAuthResponse Alibabacloud_Vod20170321::Client::getVideoPlayAuthWithOptions(shared_ptr<GetVideoPlayAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetVideoPlayAuthResponse(doRPCRequest(make_shared<string>("GetVideoPlayAuth"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVideoPlayAuthResponse Alibabacloud_Vod20170321::Client::getVideoPlayAuth(shared_ptr<GetVideoPlayAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoPlayAuthWithOptions(request, runtime);
}

GetVodTemplateResponse Alibabacloud_Vod20170321::Client::getVodTemplateWithOptions(shared_ptr<GetVodTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetVodTemplateResponse(doRPCRequest(make_shared<string>("GetVodTemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVodTemplateResponse Alibabacloud_Vod20170321::Client::getVodTemplate(shared_ptr<GetVodTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVodTemplateWithOptions(request, runtime);
}

GetWatermarkResponse Alibabacloud_Vod20170321::Client::getWatermarkWithOptions(shared_ptr<GetWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetWatermarkResponse(doRPCRequest(make_shared<string>("GetWatermark"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetWatermarkResponse Alibabacloud_Vod20170321::Client::getWatermark(shared_ptr<GetWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWatermarkWithOptions(request, runtime);
}

ListAIImageInfoResponse Alibabacloud_Vod20170321::Client::listAIImageInfoWithOptions(shared_ptr<ListAIImageInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAIImageInfoResponse(doRPCRequest(make_shared<string>("ListAIImageInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAIImageInfoResponse Alibabacloud_Vod20170321::Client::listAIImageInfo(shared_ptr<ListAIImageInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAIImageInfoWithOptions(request, runtime);
}

ListAIJobResponse Alibabacloud_Vod20170321::Client::listAIJobWithOptions(shared_ptr<ListAIJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAIJobResponse(doRPCRequest(make_shared<string>("ListAIJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAIJobResponse Alibabacloud_Vod20170321::Client::listAIJob(shared_ptr<ListAIJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAIJobWithOptions(request, runtime);
}

ListAITemplateResponse Alibabacloud_Vod20170321::Client::listAITemplateWithOptions(shared_ptr<ListAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAITemplateResponse(doRPCRequest(make_shared<string>("ListAITemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAITemplateResponse Alibabacloud_Vod20170321::Client::listAITemplate(shared_ptr<ListAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAITemplateWithOptions(request, runtime);
}

ListAppInfoResponse Alibabacloud_Vod20170321::Client::listAppInfoWithOptions(shared_ptr<ListAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAppInfoResponse(doRPCRequest(make_shared<string>("ListAppInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAppInfoResponse Alibabacloud_Vod20170321::Client::listAppInfo(shared_ptr<ListAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppInfoWithOptions(request, runtime);
}

ListAppPoliciesForIdentityResponse Alibabacloud_Vod20170321::Client::listAppPoliciesForIdentityWithOptions(shared_ptr<ListAppPoliciesForIdentityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAppPoliciesForIdentityResponse(doRPCRequest(make_shared<string>("ListAppPoliciesForIdentity"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAppPoliciesForIdentityResponse Alibabacloud_Vod20170321::Client::listAppPoliciesForIdentity(shared_ptr<ListAppPoliciesForIdentityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppPoliciesForIdentityWithOptions(request, runtime);
}

ListAuditSecurityIpResponse Alibabacloud_Vod20170321::Client::listAuditSecurityIpWithOptions(shared_ptr<ListAuditSecurityIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAuditSecurityIpResponse(doRPCRequest(make_shared<string>("ListAuditSecurityIp"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAuditSecurityIpResponse Alibabacloud_Vod20170321::Client::listAuditSecurityIp(shared_ptr<ListAuditSecurityIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuditSecurityIpWithOptions(request, runtime);
}

ListDetectionJobResponse Alibabacloud_Vod20170321::Client::listDetectionJobWithOptions(shared_ptr<ListDetectionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListDetectionJobResponse(doRPCRequest(make_shared<string>("ListDetectionJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDetectionJobResponse Alibabacloud_Vod20170321::Client::listDetectionJob(shared_ptr<ListDetectionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDetectionJobWithOptions(request, runtime);
}

ListDetectionTemplateResponse Alibabacloud_Vod20170321::Client::listDetectionTemplateWithOptions(shared_ptr<ListDetectionTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListDetectionTemplateResponse(doRPCRequest(make_shared<string>("ListDetectionTemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDetectionTemplateResponse Alibabacloud_Vod20170321::Client::listDetectionTemplate(shared_ptr<ListDetectionTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDetectionTemplateWithOptions(request, runtime);
}

ListDynamicImageResponse Alibabacloud_Vod20170321::Client::listDynamicImageWithOptions(shared_ptr<ListDynamicImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDynamicImageResponse(doRPCRequest(make_shared<string>("ListDynamicImage"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDynamicImageResponse Alibabacloud_Vod20170321::Client::listDynamicImage(shared_ptr<ListDynamicImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDynamicImageWithOptions(request, runtime);
}

ListLetterSendJobResponse Alibabacloud_Vod20170321::Client::listLetterSendJobWithOptions(shared_ptr<ListLetterSendJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListLetterSendJobResponse(doRPCRequest(make_shared<string>("ListLetterSendJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLetterSendJobResponse Alibabacloud_Vod20170321::Client::listLetterSendJob(shared_ptr<ListLetterSendJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLetterSendJobWithOptions(request, runtime);
}

ListLiveRecordVideoResponse Alibabacloud_Vod20170321::Client::listLiveRecordVideoWithOptions(shared_ptr<ListLiveRecordVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListLiveRecordVideoResponse(doRPCRequest(make_shared<string>("ListLiveRecordVideo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLiveRecordVideoResponse Alibabacloud_Vod20170321::Client::listLiveRecordVideo(shared_ptr<ListLiveRecordVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRecordVideoWithOptions(request, runtime);
}

ListMediaDNADeleteJobResponse Alibabacloud_Vod20170321::Client::listMediaDNADeleteJobWithOptions(shared_ptr<ListMediaDNADeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMediaDNADeleteJobResponse(doRPCRequest(make_shared<string>("ListMediaDNADeleteJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMediaDNADeleteJobResponse Alibabacloud_Vod20170321::Client::listMediaDNADeleteJob(shared_ptr<ListMediaDNADeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaDNADeleteJobWithOptions(request, runtime);
}

ListSnapshotsResponse Alibabacloud_Vod20170321::Client::listSnapshotsWithOptions(shared_ptr<ListSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSnapshotsResponse(doRPCRequest(make_shared<string>("ListSnapshots"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSnapshotsResponse Alibabacloud_Vod20170321::Client::listSnapshots(shared_ptr<ListSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSnapshotsWithOptions(request, runtime);
}

ListTranscodeTaskResponse Alibabacloud_Vod20170321::Client::listTranscodeTaskWithOptions(shared_ptr<ListTranscodeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTranscodeTaskResponse(doRPCRequest(make_shared<string>("ListTranscodeTask"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTranscodeTaskResponse Alibabacloud_Vod20170321::Client::listTranscodeTask(shared_ptr<ListTranscodeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTranscodeTaskWithOptions(request, runtime);
}

ListTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::listTranscodeTemplateGroupWithOptions(shared_ptr<ListTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTranscodeTemplateGroupResponse(doRPCRequest(make_shared<string>("ListTranscodeTemplateGroup"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::listTranscodeTemplateGroup(shared_ptr<ListTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTranscodeTemplateGroupWithOptions(request, runtime);
}

ListVodRealtimeLogDeliveryDomainsResponse Alibabacloud_Vod20170321::Client::listVodRealtimeLogDeliveryDomainsWithOptions(shared_ptr<ListVodRealtimeLogDeliveryDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListVodRealtimeLogDeliveryDomainsResponse(doRPCRequest(make_shared<string>("ListVodRealtimeLogDeliveryDomains"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVodRealtimeLogDeliveryDomainsResponse Alibabacloud_Vod20170321::Client::listVodRealtimeLogDeliveryDomains(shared_ptr<ListVodRealtimeLogDeliveryDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVodRealtimeLogDeliveryDomainsWithOptions(request, runtime);
}

ListVodRealtimeLogDeliveryInfosResponse Alibabacloud_Vod20170321::Client::listVodRealtimeLogDeliveryInfosWithOptions(shared_ptr<ListVodRealtimeLogDeliveryInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListVodRealtimeLogDeliveryInfosResponse(doRPCRequest(make_shared<string>("ListVodRealtimeLogDeliveryInfos"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVodRealtimeLogDeliveryInfosResponse Alibabacloud_Vod20170321::Client::listVodRealtimeLogDeliveryInfos(shared_ptr<ListVodRealtimeLogDeliveryInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVodRealtimeLogDeliveryInfosWithOptions(request, runtime);
}

ListVodTemplateResponse Alibabacloud_Vod20170321::Client::listVodTemplateWithOptions(shared_ptr<ListVodTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVodTemplateResponse(doRPCRequest(make_shared<string>("ListVodTemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVodTemplateResponse Alibabacloud_Vod20170321::Client::listVodTemplate(shared_ptr<ListVodTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVodTemplateWithOptions(request, runtime);
}

ListWatermarkResponse Alibabacloud_Vod20170321::Client::listWatermarkWithOptions(shared_ptr<ListWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListWatermarkResponse(doRPCRequest(make_shared<string>("ListWatermark"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListWatermarkResponse Alibabacloud_Vod20170321::Client::listWatermark(shared_ptr<ListWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWatermarkWithOptions(request, runtime);
}

MoveAppResourceResponse Alibabacloud_Vod20170321::Client::moveAppResourceWithOptions(shared_ptr<MoveAppResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MoveAppResourceResponse(doRPCRequest(make_shared<string>("MoveAppResource"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MoveAppResourceResponse Alibabacloud_Vod20170321::Client::moveAppResource(shared_ptr<MoveAppResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveAppResourceWithOptions(request, runtime);
}

PreloadVodObjectCachesResponse Alibabacloud_Vod20170321::Client::preloadVodObjectCachesWithOptions(shared_ptr<PreloadVodObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PreloadVodObjectCachesResponse(doRPCRequest(make_shared<string>("PreloadVodObjectCaches"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PreloadVodObjectCachesResponse Alibabacloud_Vod20170321::Client::preloadVodObjectCaches(shared_ptr<PreloadVodObjectCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preloadVodObjectCachesWithOptions(request, runtime);
}

ProduceEditingProjectVideoResponse Alibabacloud_Vod20170321::Client::produceEditingProjectVideoWithOptions(shared_ptr<ProduceEditingProjectVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ProduceEditingProjectVideoResponse(doRPCRequest(make_shared<string>("ProduceEditingProjectVideo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ProduceEditingProjectVideoResponse Alibabacloud_Vod20170321::Client::produceEditingProjectVideo(shared_ptr<ProduceEditingProjectVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return produceEditingProjectVideoWithOptions(request, runtime);
}

RefreshUploadVideoResponse Alibabacloud_Vod20170321::Client::refreshUploadVideoWithOptions(shared_ptr<RefreshUploadVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshUploadVideoResponse(doRPCRequest(make_shared<string>("RefreshUploadVideo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshUploadVideoResponse Alibabacloud_Vod20170321::Client::refreshUploadVideo(shared_ptr<RefreshUploadVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshUploadVideoWithOptions(request, runtime);
}

RefreshVodObjectCachesResponse Alibabacloud_Vod20170321::Client::refreshVodObjectCachesWithOptions(shared_ptr<RefreshVodObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshVodObjectCachesResponse(doRPCRequest(make_shared<string>("RefreshVodObjectCaches"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshVodObjectCachesResponse Alibabacloud_Vod20170321::Client::refreshVodObjectCaches(shared_ptr<RefreshVodObjectCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshVodObjectCachesWithOptions(request, runtime);
}

RegisterMediaResponse Alibabacloud_Vod20170321::Client::registerMediaWithOptions(shared_ptr<RegisterMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterMediaResponse(doRPCRequest(make_shared<string>("RegisterMedia"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterMediaResponse Alibabacloud_Vod20170321::Client::registerMedia(shared_ptr<RegisterMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaWithOptions(request, runtime);
}

SearchEditingProjectResponse Alibabacloud_Vod20170321::Client::searchEditingProjectWithOptions(shared_ptr<SearchEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchEditingProjectResponse(doRPCRequest(make_shared<string>("SearchEditingProject"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchEditingProjectResponse Alibabacloud_Vod20170321::Client::searchEditingProject(shared_ptr<SearchEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchEditingProjectWithOptions(request, runtime);
}

SearchMediaResponse Alibabacloud_Vod20170321::Client::searchMediaWithOptions(shared_ptr<SearchMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchMediaResponse(doRPCRequest(make_shared<string>("SearchMedia"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchMediaResponse Alibabacloud_Vod20170321::Client::searchMedia(shared_ptr<SearchMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaWithOptions(request, runtime);
}

SetAuditSecurityIpResponse Alibabacloud_Vod20170321::Client::setAuditSecurityIpWithOptions(shared_ptr<SetAuditSecurityIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetAuditSecurityIpResponse(doRPCRequest(make_shared<string>("SetAuditSecurityIp"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetAuditSecurityIpResponse Alibabacloud_Vod20170321::Client::setAuditSecurityIp(shared_ptr<SetAuditSecurityIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAuditSecurityIpWithOptions(request, runtime);
}

SetCrossdomainContentResponse Alibabacloud_Vod20170321::Client::setCrossdomainContentWithOptions(shared_ptr<SetCrossdomainContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetCrossdomainContentResponse(doRPCRequest(make_shared<string>("SetCrossdomainContent"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetCrossdomainContentResponse Alibabacloud_Vod20170321::Client::setCrossdomainContent(shared_ptr<SetCrossdomainContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCrossdomainContentWithOptions(request, runtime);
}

SetDefaultAITemplateResponse Alibabacloud_Vod20170321::Client::setDefaultAITemplateWithOptions(shared_ptr<SetDefaultAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDefaultAITemplateResponse(doRPCRequest(make_shared<string>("SetDefaultAITemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDefaultAITemplateResponse Alibabacloud_Vod20170321::Client::setDefaultAITemplate(shared_ptr<SetDefaultAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultAITemplateWithOptions(request, runtime);
}

SetDefaultTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::setDefaultTranscodeTemplateGroupWithOptions(shared_ptr<SetDefaultTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDefaultTranscodeTemplateGroupResponse(doRPCRequest(make_shared<string>("SetDefaultTranscodeTemplateGroup"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDefaultTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::setDefaultTranscodeTemplateGroup(shared_ptr<SetDefaultTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultTranscodeTemplateGroupWithOptions(request, runtime);
}

SetDefaultWatermarkResponse Alibabacloud_Vod20170321::Client::setDefaultWatermarkWithOptions(shared_ptr<SetDefaultWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDefaultWatermarkResponse(doRPCRequest(make_shared<string>("SetDefaultWatermark"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDefaultWatermarkResponse Alibabacloud_Vod20170321::Client::setDefaultWatermark(shared_ptr<SetDefaultWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultWatermarkWithOptions(request, runtime);
}

SetEditingProjectMaterialsResponse Alibabacloud_Vod20170321::Client::setEditingProjectMaterialsWithOptions(shared_ptr<SetEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetEditingProjectMaterialsResponse(doRPCRequest(make_shared<string>("SetEditingProjectMaterials"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetEditingProjectMaterialsResponse Alibabacloud_Vod20170321::Client::setEditingProjectMaterials(shared_ptr<SetEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setEditingProjectMaterialsWithOptions(request, runtime);
}

SetMessageCallbackResponse Alibabacloud_Vod20170321::Client::setMessageCallbackWithOptions(shared_ptr<SetMessageCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetMessageCallbackResponse(doRPCRequest(make_shared<string>("SetMessageCallback"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetMessageCallbackResponse Alibabacloud_Vod20170321::Client::setMessageCallback(shared_ptr<SetMessageCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setMessageCallbackWithOptions(request, runtime);
}

SetVodDomainCertificateResponse Alibabacloud_Vod20170321::Client::setVodDomainCertificateWithOptions(shared_ptr<SetVodDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetVodDomainCertificateResponse(doRPCRequest(make_shared<string>("SetVodDomainCertificate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetVodDomainCertificateResponse Alibabacloud_Vod20170321::Client::setVodDomainCertificate(shared_ptr<SetVodDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setVodDomainCertificateWithOptions(request, runtime);
}

SubmitAICaptionExtractionJobResponse Alibabacloud_Vod20170321::Client::submitAICaptionExtractionJobWithOptions(shared_ptr<SubmitAICaptionExtractionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitAICaptionExtractionJobResponse(doRPCRequest(make_shared<string>("SubmitAICaptionExtractionJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitAICaptionExtractionJobResponse Alibabacloud_Vod20170321::Client::submitAICaptionExtractionJob(shared_ptr<SubmitAICaptionExtractionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAICaptionExtractionJobWithOptions(request, runtime);
}

SubmitAIImageAuditJobResponse Alibabacloud_Vod20170321::Client::submitAIImageAuditJobWithOptions(shared_ptr<SubmitAIImageAuditJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitAIImageAuditJobResponse(doRPCRequest(make_shared<string>("SubmitAIImageAuditJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitAIImageAuditJobResponse Alibabacloud_Vod20170321::Client::submitAIImageAuditJob(shared_ptr<SubmitAIImageAuditJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAIImageAuditJobWithOptions(request, runtime);
}

SubmitAIImageJobResponse Alibabacloud_Vod20170321::Client::submitAIImageJobWithOptions(shared_ptr<SubmitAIImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitAIImageJobResponse(doRPCRequest(make_shared<string>("SubmitAIImageJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitAIImageJobResponse Alibabacloud_Vod20170321::Client::submitAIImageJob(shared_ptr<SubmitAIImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAIImageJobWithOptions(request, runtime);
}

SubmitAIJobResponse Alibabacloud_Vod20170321::Client::submitAIJobWithOptions(shared_ptr<SubmitAIJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitAIJobResponse(doRPCRequest(make_shared<string>("SubmitAIJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitAIJobResponse Alibabacloud_Vod20170321::Client::submitAIJob(shared_ptr<SubmitAIJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAIJobWithOptions(request, runtime);
}

SubmitAIMediaAuditJobResponse Alibabacloud_Vod20170321::Client::submitAIMediaAuditJobWithOptions(shared_ptr<SubmitAIMediaAuditJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitAIMediaAuditJobResponse(doRPCRequest(make_shared<string>("SubmitAIMediaAuditJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitAIMediaAuditJobResponse Alibabacloud_Vod20170321::Client::submitAIMediaAuditJob(shared_ptr<SubmitAIMediaAuditJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAIMediaAuditJobWithOptions(request, runtime);
}

SubmitDetectionJobResponse Alibabacloud_Vod20170321::Client::submitDetectionJobWithOptions(shared_ptr<SubmitDetectionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitDetectionJobResponse(doRPCRequest(make_shared<string>("SubmitDetectionJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitDetectionJobResponse Alibabacloud_Vod20170321::Client::submitDetectionJob(shared_ptr<SubmitDetectionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDetectionJobWithOptions(request, runtime);
}

SubmitDynamicImageJobResponse Alibabacloud_Vod20170321::Client::submitDynamicImageJobWithOptions(shared_ptr<SubmitDynamicImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitDynamicImageJobResponse(doRPCRequest(make_shared<string>("SubmitDynamicImageJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitDynamicImageJobResponse Alibabacloud_Vod20170321::Client::submitDynamicImageJob(shared_ptr<SubmitDynamicImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDynamicImageJobWithOptions(request, runtime);
}

SubmitLiveEditingResponse Alibabacloud_Vod20170321::Client::submitLiveEditingWithOptions(shared_ptr<SubmitLiveEditingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitLiveEditingResponse(doRPCRequest(make_shared<string>("SubmitLiveEditing"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitLiveEditingResponse Alibabacloud_Vod20170321::Client::submitLiveEditing(shared_ptr<SubmitLiveEditingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveEditingWithOptions(request, runtime);
}

SubmitMediaDNADeleteJobResponse Alibabacloud_Vod20170321::Client::submitMediaDNADeleteJobWithOptions(shared_ptr<SubmitMediaDNADeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitMediaDNADeleteJobResponse(doRPCRequest(make_shared<string>("SubmitMediaDNADeleteJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitMediaDNADeleteJobResponse Alibabacloud_Vod20170321::Client::submitMediaDNADeleteJob(shared_ptr<SubmitMediaDNADeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaDNADeleteJobWithOptions(request, runtime);
}

SubmitPreprocessJobsResponse Alibabacloud_Vod20170321::Client::submitPreprocessJobsWithOptions(shared_ptr<SubmitPreprocessJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitPreprocessJobsResponse(doRPCRequest(make_shared<string>("SubmitPreprocessJobs"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitPreprocessJobsResponse Alibabacloud_Vod20170321::Client::submitPreprocessJobs(shared_ptr<SubmitPreprocessJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitPreprocessJobsWithOptions(request, runtime);
}

SubmitSnapshotJobResponse Alibabacloud_Vod20170321::Client::submitSnapshotJobWithOptions(shared_ptr<SubmitSnapshotJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSnapshotJobResponse(doRPCRequest(make_shared<string>("SubmitSnapshotJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSnapshotJobResponse Alibabacloud_Vod20170321::Client::submitSnapshotJob(shared_ptr<SubmitSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSnapshotJobWithOptions(request, runtime);
}

SubmitTranscodeJobsResponse Alibabacloud_Vod20170321::Client::submitTranscodeJobsWithOptions(shared_ptr<SubmitTranscodeJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitTranscodeJobsResponse(doRPCRequest(make_shared<string>("SubmitTranscodeJobs"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitTranscodeJobsResponse Alibabacloud_Vod20170321::Client::submitTranscodeJobs(shared_ptr<SubmitTranscodeJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTranscodeJobsWithOptions(request, runtime);
}

SubmitWorkflowJobResponse Alibabacloud_Vod20170321::Client::submitWorkflowJobWithOptions(shared_ptr<SubmitWorkflowJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitWorkflowJobResponse(doRPCRequest(make_shared<string>("SubmitWorkflowJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitWorkflowJobResponse Alibabacloud_Vod20170321::Client::submitWorkflowJob(shared_ptr<SubmitWorkflowJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitWorkflowJobWithOptions(request, runtime);
}

TagVodResourcesResponse Alibabacloud_Vod20170321::Client::tagVodResourcesWithOptions(shared_ptr<TagVodResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagVodResourcesResponse(doRPCRequest(make_shared<string>("TagVodResources"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagVodResourcesResponse Alibabacloud_Vod20170321::Client::tagVodResources(shared_ptr<TagVodResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagVodResourcesWithOptions(request, runtime);
}

UnTagVodResourcesResponse Alibabacloud_Vod20170321::Client::unTagVodResourcesWithOptions(shared_ptr<UnTagVodResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnTagVodResourcesResponse(doRPCRequest(make_shared<string>("UnTagVodResources"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnTagVodResourcesResponse Alibabacloud_Vod20170321::Client::unTagVodResources(shared_ptr<UnTagVodResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unTagVodResourcesWithOptions(request, runtime);
}

UpdateAITemplateResponse Alibabacloud_Vod20170321::Client::updateAITemplateWithOptions(shared_ptr<UpdateAITemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAITemplateResponse(doRPCRequest(make_shared<string>("UpdateAITemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAITemplateResponse Alibabacloud_Vod20170321::Client::updateAITemplate(shared_ptr<UpdateAITemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAITemplateWithOptions(request, runtime);
}

UpdateAppInfoResponse Alibabacloud_Vod20170321::Client::updateAppInfoWithOptions(shared_ptr<UpdateAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppInfoResponse(doRPCRequest(make_shared<string>("UpdateAppInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppInfoResponse Alibabacloud_Vod20170321::Client::updateAppInfo(shared_ptr<UpdateAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppInfoWithOptions(request, runtime);
}

UpdateAttachedMediaInfosResponse Alibabacloud_Vod20170321::Client::updateAttachedMediaInfosWithOptions(shared_ptr<UpdateAttachedMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAttachedMediaInfosResponse(doRPCRequest(make_shared<string>("UpdateAttachedMediaInfos"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAttachedMediaInfosResponse Alibabacloud_Vod20170321::Client::updateAttachedMediaInfos(shared_ptr<UpdateAttachedMediaInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAttachedMediaInfosWithOptions(request, runtime);
}

UpdateCategoryResponse Alibabacloud_Vod20170321::Client::updateCategoryWithOptions(shared_ptr<UpdateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCategoryResponse(doRPCRequest(make_shared<string>("UpdateCategory"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCategoryResponse Alibabacloud_Vod20170321::Client::updateCategory(shared_ptr<UpdateCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCategoryWithOptions(request, runtime);
}

UpdateDetectionJobResponse Alibabacloud_Vod20170321::Client::updateDetectionJobWithOptions(shared_ptr<UpdateDetectionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDetectionJobResponse(doRPCRequest(make_shared<string>("UpdateDetectionJob"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDetectionJobResponse Alibabacloud_Vod20170321::Client::updateDetectionJob(shared_ptr<UpdateDetectionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDetectionJobWithOptions(request, runtime);
}

UpdateDetectionTemplateResponse Alibabacloud_Vod20170321::Client::updateDetectionTemplateWithOptions(shared_ptr<UpdateDetectionTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDetectionTemplateResponse(doRPCRequest(make_shared<string>("UpdateDetectionTemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDetectionTemplateResponse Alibabacloud_Vod20170321::Client::updateDetectionTemplate(shared_ptr<UpdateDetectionTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDetectionTemplateWithOptions(request, runtime);
}

UpdateEditingProjectResponse Alibabacloud_Vod20170321::Client::updateEditingProjectWithOptions(shared_ptr<UpdateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEditingProjectResponse(doRPCRequest(make_shared<string>("UpdateEditingProject"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEditingProjectResponse Alibabacloud_Vod20170321::Client::updateEditingProject(shared_ptr<UpdateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEditingProjectWithOptions(request, runtime);
}

UpdateImageInfosResponse Alibabacloud_Vod20170321::Client::updateImageInfosWithOptions(shared_ptr<UpdateImageInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateImageInfosResponse(doRPCRequest(make_shared<string>("UpdateImageInfos"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateImageInfosResponse Alibabacloud_Vod20170321::Client::updateImageInfos(shared_ptr<UpdateImageInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateImageInfosWithOptions(request, runtime);
}

UpdateStreamInfoResponse Alibabacloud_Vod20170321::Client::updateStreamInfoWithOptions(shared_ptr<UpdateStreamInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateStreamInfoResponse(doRPCRequest(make_shared<string>("UpdateStreamInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateStreamInfoResponse Alibabacloud_Vod20170321::Client::updateStreamInfo(shared_ptr<UpdateStreamInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStreamInfoWithOptions(request, runtime);
}

UpdateTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::updateTranscodeTemplateGroupWithOptions(shared_ptr<UpdateTranscodeTemplateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTranscodeTemplateGroupResponse(doRPCRequest(make_shared<string>("UpdateTranscodeTemplateGroup"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTranscodeTemplateGroupResponse Alibabacloud_Vod20170321::Client::updateTranscodeTemplateGroup(shared_ptr<UpdateTranscodeTemplateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTranscodeTemplateGroupWithOptions(request, runtime);
}

UpdateVideoInfoResponse Alibabacloud_Vod20170321::Client::updateVideoInfoWithOptions(shared_ptr<UpdateVideoInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateVideoInfoResponse(doRPCRequest(make_shared<string>("UpdateVideoInfo"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateVideoInfoResponse Alibabacloud_Vod20170321::Client::updateVideoInfo(shared_ptr<UpdateVideoInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVideoInfoWithOptions(request, runtime);
}

UpdateVideoInfosResponse Alibabacloud_Vod20170321::Client::updateVideoInfosWithOptions(shared_ptr<UpdateVideoInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateVideoInfosResponse(doRPCRequest(make_shared<string>("UpdateVideoInfos"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateVideoInfosResponse Alibabacloud_Vod20170321::Client::updateVideoInfos(shared_ptr<UpdateVideoInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVideoInfosWithOptions(request, runtime);
}

UpdateVodDomainResponse Alibabacloud_Vod20170321::Client::updateVodDomainWithOptions(shared_ptr<UpdateVodDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateVodDomainResponse(doRPCRequest(make_shared<string>("UpdateVodDomain"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateVodDomainResponse Alibabacloud_Vod20170321::Client::updateVodDomain(shared_ptr<UpdateVodDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVodDomainWithOptions(request, runtime);
}

UpdateVodTemplateResponse Alibabacloud_Vod20170321::Client::updateVodTemplateWithOptions(shared_ptr<UpdateVodTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateVodTemplateResponse(doRPCRequest(make_shared<string>("UpdateVodTemplate"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateVodTemplateResponse Alibabacloud_Vod20170321::Client::updateVodTemplate(shared_ptr<UpdateVodTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVodTemplateWithOptions(request, runtime);
}

UpdateWatermarkResponse Alibabacloud_Vod20170321::Client::updateWatermarkWithOptions(shared_ptr<UpdateWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateWatermarkResponse(doRPCRequest(make_shared<string>("UpdateWatermark"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateWatermarkResponse Alibabacloud_Vod20170321::Client::updateWatermark(shared_ptr<UpdateWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWatermarkWithOptions(request, runtime);
}

UploadMediaByURLResponse Alibabacloud_Vod20170321::Client::uploadMediaByURLWithOptions(shared_ptr<UploadMediaByURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadMediaByURLResponse(doRPCRequest(make_shared<string>("UploadMediaByURL"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadMediaByURLResponse Alibabacloud_Vod20170321::Client::uploadMediaByURL(shared_ptr<UploadMediaByURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadMediaByURLWithOptions(request, runtime);
}

UploadStreamByURLResponse Alibabacloud_Vod20170321::Client::uploadStreamByURLWithOptions(shared_ptr<UploadStreamByURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadStreamByURLResponse(doRPCRequest(make_shared<string>("UploadStreamByURL"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadStreamByURLResponse Alibabacloud_Vod20170321::Client::uploadStreamByURL(shared_ptr<UploadStreamByURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadStreamByURLWithOptions(request, runtime);
}

VerifyVodDomainOwnerResponse Alibabacloud_Vod20170321::Client::verifyVodDomainOwnerWithOptions(shared_ptr<VerifyVodDomainOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifyVodDomainOwnerResponse(doRPCRequest(make_shared<string>("VerifyVodDomainOwner"), make_shared<string>("2017-03-21"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VerifyVodDomainOwnerResponse Alibabacloud_Vod20170321::Client::verifyVodDomainOwner(shared_ptr<VerifyVodDomainOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyVodDomainOwnerWithOptions(request, runtime);
}

