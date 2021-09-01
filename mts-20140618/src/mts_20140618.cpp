// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/mts_20140618.hpp>
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

using namespace Alibabacloud_Mts20140618;

Alibabacloud_Mts20140618::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "mts.aliyuncs.com"},
    {"ap-southeast-2", "mts.aliyuncs.com"},
    {"ap-southeast-3", "mts.aliyuncs.com"},
    {"cn-beijing-finance-1", "mts.aliyuncs.com"},
    {"cn-beijing-finance-pop", "mts.aliyuncs.com"},
    {"cn-beijing-gov-1", "mts.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "mts.aliyuncs.com"},
    {"cn-chengdu", "mts.aliyuncs.com"},
    {"cn-edge-1", "mts.aliyuncs.com"},
    {"cn-fujian", "mts.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "mts.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "mts.aliyuncs.com"},
    {"cn-hangzhou-finance", "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "mts.aliyuncs.com"},
    {"cn-hangzhou-test-306", "mts.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "mts.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "mts.aliyuncs.com"},
    {"cn-north-2-gov-1", "mts.aliyuncs.com"},
    {"cn-qingdao-nebula", "mts.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "mts.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "mts.aliyuncs.com"},
    {"cn-shanghai-finance-1", "mts.aliyuncs.com"},
    {"cn-shanghai-inner", "mts.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "mts.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "mts.aliyuncs.com"},
    {"cn-shenzhen-inner", "mts.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "mts.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "mts.aliyuncs.com"},
    {"cn-wuhan", "mts.aliyuncs.com"},
    {"cn-wulanchabu", "mts.aliyuncs.com"},
    {"cn-yushanfang", "mts.aliyuncs.com"},
    {"cn-zhangbei", "mts.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "mts.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "mts.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "mts.aliyuncs.com"},
    {"eu-west-1-oxs", "mts.aliyuncs.com"},
    {"me-east-1", "mts.aliyuncs.com"},
    {"rus-west-1-pop", "mts.aliyuncs.com"},
    {"us-east-1", "mts.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("mts"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Mts20140618::Client::getEndpoint(shared_ptr<string> productId,
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

QueryAuthConfigResponse Alibabacloud_Mts20140618::Client::queryAuthConfigWithOptions(shared_ptr<QueryAuthConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAuthConfigResponse(doRPCRequest(make_shared<string>("QueryAuthConfig"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAuthConfigResponse Alibabacloud_Mts20140618::Client::queryAuthConfig(shared_ptr<QueryAuthConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAuthConfigWithOptions(request, runtime);
}

QueryAsrPipelineListResponse Alibabacloud_Mts20140618::Client::queryAsrPipelineListWithOptions(shared_ptr<QueryAsrPipelineListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAsrPipelineListResponse(doRPCRequest(make_shared<string>("QueryAsrPipelineList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAsrPipelineListResponse Alibabacloud_Mts20140618::Client::queryAsrPipelineList(shared_ptr<QueryAsrPipelineListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAsrPipelineListWithOptions(request, runtime);
}

SubmitMediaCensorJobResponse Alibabacloud_Mts20140618::Client::submitMediaCensorJobWithOptions(shared_ptr<SubmitMediaCensorJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitMediaCensorJobResponse(doRPCRequest(make_shared<string>("SubmitMediaCensorJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitMediaCensorJobResponse Alibabacloud_Mts20140618::Client::submitMediaCensorJob(shared_ptr<SubmitMediaCensorJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaCensorJobWithOptions(request, runtime);
}

CreateSessionResponse Alibabacloud_Mts20140618::Client::createSessionWithOptions(shared_ptr<CreateSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSessionResponse(doRPCRequest(make_shared<string>("CreateSession"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSessionResponse Alibabacloud_Mts20140618::Client::createSession(shared_ptr<CreateSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSessionWithOptions(request, runtime);
}

ListAsrPipelineResponse Alibabacloud_Mts20140618::Client::listAsrPipelineWithOptions(shared_ptr<ListAsrPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAsrPipelineResponse(doRPCRequest(make_shared<string>("ListAsrPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAsrPipelineResponse Alibabacloud_Mts20140618::Client::listAsrPipeline(shared_ptr<ListAsrPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAsrPipelineWithOptions(request, runtime);
}

ListJobResponse Alibabacloud_Mts20140618::Client::listJobWithOptions(shared_ptr<ListJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListJobResponse(doRPCRequest(make_shared<string>("ListJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListJobResponse Alibabacloud_Mts20140618::Client::listJob(shared_ptr<ListJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobWithOptions(request, runtime);
}

QueryIProductionJobListResponse Alibabacloud_Mts20140618::Client::queryIProductionJobListWithOptions(shared_ptr<QueryIProductionJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryIProductionJobListResponse(doRPCRequest(make_shared<string>("QueryIProductionJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryIProductionJobListResponse Alibabacloud_Mts20140618::Client::queryIProductionJobList(shared_ptr<QueryIProductionJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryIProductionJobListWithOptions(request, runtime);
}

UpdateMediaPublishStateResponse Alibabacloud_Mts20140618::Client::updateMediaPublishStateWithOptions(shared_ptr<UpdateMediaPublishStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMediaPublishStateResponse(doRPCRequest(make_shared<string>("UpdateMediaPublishState"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMediaPublishStateResponse Alibabacloud_Mts20140618::Client::updateMediaPublishState(shared_ptr<UpdateMediaPublishStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaPublishStateWithOptions(request, runtime);
}

SubmitFpFileDeleteJobResponse Alibabacloud_Mts20140618::Client::submitFpFileDeleteJobWithOptions(shared_ptr<SubmitFpFileDeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitFpFileDeleteJobResponse(doRPCRequest(make_shared<string>("SubmitFpFileDeleteJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitFpFileDeleteJobResponse Alibabacloud_Mts20140618::Client::submitFpFileDeleteJob(shared_ptr<SubmitFpFileDeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFpFileDeleteJobWithOptions(request, runtime);
}

QueryAnalysisJobListResponse Alibabacloud_Mts20140618::Client::queryAnalysisJobListWithOptions(shared_ptr<QueryAnalysisJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAnalysisJobListResponse(doRPCRequest(make_shared<string>("QueryAnalysisJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAnalysisJobListResponse Alibabacloud_Mts20140618::Client::queryAnalysisJobList(shared_ptr<QueryAnalysisJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAnalysisJobListWithOptions(request, runtime);
}

SubmitInferenceJobResponse Alibabacloud_Mts20140618::Client::submitInferenceJobWithOptions(shared_ptr<SubmitInferenceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitInferenceJobResponse(doRPCRequest(make_shared<string>("SubmitInferenceJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitInferenceJobResponse Alibabacloud_Mts20140618::Client::submitInferenceJob(shared_ptr<SubmitInferenceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitInferenceJobWithOptions(request, runtime);
}

ReportCensorJobResultResponse Alibabacloud_Mts20140618::Client::reportCensorJobResultWithOptions(shared_ptr<ReportCensorJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportCensorJobResultResponse(doRPCRequest(make_shared<string>("ReportCensorJobResult"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportCensorJobResultResponse Alibabacloud_Mts20140618::Client::reportCensorJobResult(shared_ptr<ReportCensorJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportCensorJobResultWithOptions(request, runtime);
}

DeleteMcuJobResponse Alibabacloud_Mts20140618::Client::deleteMcuJobWithOptions(shared_ptr<DeleteMcuJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMcuJobResponse(doRPCRequest(make_shared<string>("DeleteMcuJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMcuJobResponse Alibabacloud_Mts20140618::Client::deleteMcuJob(shared_ptr<DeleteMcuJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcuJobWithOptions(request, runtime);
}

QueryInferenceServerResponse Alibabacloud_Mts20140618::Client::queryInferenceServerWithOptions(shared_ptr<QueryInferenceServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryInferenceServerResponse(doRPCRequest(make_shared<string>("QueryInferenceServer"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryInferenceServerResponse Alibabacloud_Mts20140618::Client::queryInferenceServer(shared_ptr<QueryInferenceServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInferenceServerWithOptions(request, runtime);
}

CheckResourceResponse Alibabacloud_Mts20140618::Client::checkResourceWithOptions(shared_ptr<CheckResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckResourceResponse(doRPCRequest(make_shared<string>("CheckResource"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckResourceResponse Alibabacloud_Mts20140618::Client::checkResource(shared_ptr<CheckResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkResourceWithOptions(request, runtime);
}

ListTerrorismPipelineResponse Alibabacloud_Mts20140618::Client::listTerrorismPipelineWithOptions(shared_ptr<ListTerrorismPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTerrorismPipelineResponse(doRPCRequest(make_shared<string>("ListTerrorismPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTerrorismPipelineResponse Alibabacloud_Mts20140618::Client::listTerrorismPipeline(shared_ptr<ListTerrorismPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTerrorismPipelineWithOptions(request, runtime);
}

ReportTerrorismJobResultResponse Alibabacloud_Mts20140618::Client::reportTerrorismJobResultWithOptions(shared_ptr<ReportTerrorismJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportTerrorismJobResultResponse(doRPCRequest(make_shared<string>("ReportTerrorismJobResult"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportTerrorismJobResultResponse Alibabacloud_Mts20140618::Client::reportTerrorismJobResult(shared_ptr<ReportTerrorismJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportTerrorismJobResultWithOptions(request, runtime);
}

ListAllMediaBucketResponse Alibabacloud_Mts20140618::Client::listAllMediaBucketWithOptions(shared_ptr<ListAllMediaBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAllMediaBucketResponse(doRPCRequest(make_shared<string>("ListAllMediaBucket"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAllMediaBucketResponse Alibabacloud_Mts20140618::Client::listAllMediaBucket(shared_ptr<ListAllMediaBucketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAllMediaBucketWithOptions(request, runtime);
}

SearchPipelineResponse Alibabacloud_Mts20140618::Client::searchPipelineWithOptions(shared_ptr<SearchPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchPipelineResponse(doRPCRequest(make_shared<string>("SearchPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchPipelineResponse Alibabacloud_Mts20140618::Client::searchPipeline(shared_ptr<SearchPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchPipelineWithOptions(request, runtime);
}

UnbindOutputBucketResponse Alibabacloud_Mts20140618::Client::unbindOutputBucketWithOptions(shared_ptr<UnbindOutputBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindOutputBucketResponse(doRPCRequest(make_shared<string>("UnbindOutputBucket"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindOutputBucketResponse Alibabacloud_Mts20140618::Client::unbindOutputBucket(shared_ptr<UnbindOutputBucketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindOutputBucketWithOptions(request, runtime);
}

UpdateMediaCategoryResponse Alibabacloud_Mts20140618::Client::updateMediaCategoryWithOptions(shared_ptr<UpdateMediaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMediaCategoryResponse(doRPCRequest(make_shared<string>("UpdateMediaCategory"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMediaCategoryResponse Alibabacloud_Mts20140618::Client::updateMediaCategory(shared_ptr<UpdateMediaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaCategoryWithOptions(request, runtime);
}

QueryComplexJobListResponse Alibabacloud_Mts20140618::Client::queryComplexJobListWithOptions(shared_ptr<QueryComplexJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryComplexJobListResponse(doRPCRequest(make_shared<string>("QueryComplexJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryComplexJobListResponse Alibabacloud_Mts20140618::Client::queryComplexJobList(shared_ptr<QueryComplexJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryComplexJobListWithOptions(request, runtime);
}

ListInferenceJobResponse Alibabacloud_Mts20140618::Client::listInferenceJobWithOptions(shared_ptr<ListInferenceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListInferenceJobResponse(doRPCRequest(make_shared<string>("ListInferenceJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInferenceJobResponse Alibabacloud_Mts20140618::Client::listInferenceJob(shared_ptr<ListInferenceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInferenceJobWithOptions(request, runtime);
}

QueryJobListResponse Alibabacloud_Mts20140618::Client::queryJobListWithOptions(shared_ptr<QueryJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryJobListResponse(doRPCRequest(make_shared<string>("QueryJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryJobListResponse Alibabacloud_Mts20140618::Client::queryJobList(shared_ptr<QueryJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryJobListWithOptions(request, runtime);
}

SearchMediaWorkflowResponse Alibabacloud_Mts20140618::Client::searchMediaWorkflowWithOptions(shared_ptr<SearchMediaWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchMediaWorkflowResponse(doRPCRequest(make_shared<string>("SearchMediaWorkflow"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchMediaWorkflowResponse Alibabacloud_Mts20140618::Client::searchMediaWorkflow(shared_ptr<SearchMediaWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaWorkflowWithOptions(request, runtime);
}

QueryCoverPipelineListResponse Alibabacloud_Mts20140618::Client::queryCoverPipelineListWithOptions(shared_ptr<QueryCoverPipelineListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCoverPipelineListResponse(doRPCRequest(make_shared<string>("QueryCoverPipelineList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCoverPipelineListResponse Alibabacloud_Mts20140618::Client::queryCoverPipelineList(shared_ptr<QueryCoverPipelineListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCoverPipelineListWithOptions(request, runtime);
}

QueryFpShotJobListResponse Alibabacloud_Mts20140618::Client::queryFpShotJobListWithOptions(shared_ptr<QueryFpShotJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryFpShotJobListResponse(doRPCRequest(make_shared<string>("QueryFpShotJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryFpShotJobListResponse Alibabacloud_Mts20140618::Client::queryFpShotJobList(shared_ptr<QueryFpShotJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFpShotJobListWithOptions(request, runtime);
}

DeleteMediaTagResponse Alibabacloud_Mts20140618::Client::deleteMediaTagWithOptions(shared_ptr<DeleteMediaTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMediaTagResponse(doRPCRequest(make_shared<string>("DeleteMediaTag"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMediaTagResponse Alibabacloud_Mts20140618::Client::deleteMediaTag(shared_ptr<DeleteMediaTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaTagWithOptions(request, runtime);
}

DeletePipelineResponse Alibabacloud_Mts20140618::Client::deletePipelineWithOptions(shared_ptr<DeletePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePipelineResponse(doRPCRequest(make_shared<string>("DeletePipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePipelineResponse Alibabacloud_Mts20140618::Client::deletePipeline(shared_ptr<DeletePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePipelineWithOptions(request, runtime);
}

UpdateSmarttagTemplateResponse Alibabacloud_Mts20140618::Client::updateSmarttagTemplateWithOptions(shared_ptr<UpdateSmarttagTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSmarttagTemplateResponse(doRPCRequest(make_shared<string>("UpdateSmarttagTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSmarttagTemplateResponse Alibabacloud_Mts20140618::Client::updateSmarttagTemplate(shared_ptr<UpdateSmarttagTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSmarttagTemplateWithOptions(request, runtime);
}

UpdateAsrPipelineResponse Alibabacloud_Mts20140618::Client::updateAsrPipelineWithOptions(shared_ptr<UpdateAsrPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAsrPipelineResponse(doRPCRequest(make_shared<string>("UpdateAsrPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAsrPipelineResponse Alibabacloud_Mts20140618::Client::updateAsrPipeline(shared_ptr<UpdateAsrPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAsrPipelineWithOptions(request, runtime);
}

QueryVideoQualityJobResponse Alibabacloud_Mts20140618::Client::queryVideoQualityJobWithOptions(shared_ptr<QueryVideoQualityJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryVideoQualityJobResponse(doRPCRequest(make_shared<string>("QueryVideoQualityJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryVideoQualityJobResponse Alibabacloud_Mts20140618::Client::queryVideoQualityJob(shared_ptr<QueryVideoQualityJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVideoQualityJobWithOptions(request, runtime);
}

DecryptKeyResponse Alibabacloud_Mts20140618::Client::decryptKeyWithOptions(shared_ptr<DecryptKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DecryptKeyResponse(doRPCRequest(make_shared<string>("DecryptKey"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DecryptKeyResponse Alibabacloud_Mts20140618::Client::decryptKey(shared_ptr<DecryptKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return decryptKeyWithOptions(request, runtime);
}

DeleteTemplateResponse Alibabacloud_Mts20140618::Client::deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTemplateResponse(doRPCRequest(make_shared<string>("DeleteTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTemplateResponse Alibabacloud_Mts20140618::Client::deleteTemplate(shared_ptr<DeleteTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateWithOptions(request, runtime);
}

QueryTemplateListResponse Alibabacloud_Mts20140618::Client::queryTemplateListWithOptions(shared_ptr<QueryTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTemplateListResponse(doRPCRequest(make_shared<string>("QueryTemplateList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTemplateListResponse Alibabacloud_Mts20140618::Client::queryTemplateList(shared_ptr<QueryTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTemplateListWithOptions(request, runtime);
}

ReportFacerecogJobResultResponse Alibabacloud_Mts20140618::Client::reportFacerecogJobResultWithOptions(shared_ptr<ReportFacerecogJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportFacerecogJobResultResponse(doRPCRequest(make_shared<string>("ReportFacerecogJobResult"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportFacerecogJobResultResponse Alibabacloud_Mts20140618::Client::reportFacerecogJobResult(shared_ptr<ReportFacerecogJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportFacerecogJobResultWithOptions(request, runtime);
}

QueryMCTemplateListResponse Alibabacloud_Mts20140618::Client::queryMCTemplateListWithOptions(shared_ptr<QueryMCTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMCTemplateListResponse(doRPCRequest(make_shared<string>("QueryMCTemplateList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMCTemplateListResponse Alibabacloud_Mts20140618::Client::queryMCTemplateList(shared_ptr<QueryMCTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMCTemplateListWithOptions(request, runtime);
}

UpdateMediaResponse Alibabacloud_Mts20140618::Client::updateMediaWithOptions(shared_ptr<UpdateMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMediaResponse(doRPCRequest(make_shared<string>("UpdateMedia"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMediaResponse Alibabacloud_Mts20140618::Client::updateMedia(shared_ptr<UpdateMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaWithOptions(request, runtime);
}

ListCensorPipelineResponse Alibabacloud_Mts20140618::Client::listCensorPipelineWithOptions(shared_ptr<ListCensorPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCensorPipelineResponse(doRPCRequest(make_shared<string>("ListCensorPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCensorPipelineResponse Alibabacloud_Mts20140618::Client::listCensorPipeline(shared_ptr<ListCensorPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCensorPipelineWithOptions(request, runtime);
}

QuerySubtitleJobListResponse Alibabacloud_Mts20140618::Client::querySubtitleJobListWithOptions(shared_ptr<QuerySubtitleJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySubtitleJobListResponse(doRPCRequest(make_shared<string>("QuerySubtitleJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySubtitleJobListResponse Alibabacloud_Mts20140618::Client::querySubtitleJobList(shared_ptr<QuerySubtitleJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySubtitleJobListWithOptions(request, runtime);
}

QueryVideoGifJobListResponse Alibabacloud_Mts20140618::Client::queryVideoGifJobListWithOptions(shared_ptr<QueryVideoGifJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryVideoGifJobListResponse(doRPCRequest(make_shared<string>("QueryVideoGifJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryVideoGifJobListResponse Alibabacloud_Mts20140618::Client::queryVideoGifJobList(shared_ptr<QueryVideoGifJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVideoGifJobListWithOptions(request, runtime);
}

QueryEditingJobListResponse Alibabacloud_Mts20140618::Client::queryEditingJobListWithOptions(shared_ptr<QueryEditingJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEditingJobListResponse(doRPCRequest(make_shared<string>("QueryEditingJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEditingJobListResponse Alibabacloud_Mts20140618::Client::queryEditingJobList(shared_ptr<QueryEditingJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEditingJobListWithOptions(request, runtime);
}

UpdateMCTemplateResponse Alibabacloud_Mts20140618::Client::updateMCTemplateWithOptions(shared_ptr<UpdateMCTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMCTemplateResponse(doRPCRequest(make_shared<string>("UpdateMCTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMCTemplateResponse Alibabacloud_Mts20140618::Client::updateMCTemplate(shared_ptr<UpdateMCTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMCTemplateWithOptions(request, runtime);
}

ReportCoverJobResultResponse Alibabacloud_Mts20140618::Client::reportCoverJobResultWithOptions(shared_ptr<ReportCoverJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportCoverJobResultResponse(doRPCRequest(make_shared<string>("ReportCoverJobResult"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportCoverJobResultResponse Alibabacloud_Mts20140618::Client::reportCoverJobResult(shared_ptr<ReportCoverJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportCoverJobResultWithOptions(request, runtime);
}

SubmitImageQualityJobResponse Alibabacloud_Mts20140618::Client::submitImageQualityJobWithOptions(shared_ptr<SubmitImageQualityJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitImageQualityJobResponse(doRPCRequest(make_shared<string>("SubmitImageQualityJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitImageQualityJobResponse Alibabacloud_Mts20140618::Client::submitImageQualityJob(shared_ptr<SubmitImageQualityJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitImageQualityJobWithOptions(request, runtime);
}

AddMCTemplateResponse Alibabacloud_Mts20140618::Client::addMCTemplateWithOptions(shared_ptr<AddMCTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddMCTemplateResponse(doRPCRequest(make_shared<string>("AddMCTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddMCTemplateResponse Alibabacloud_Mts20140618::Client::addMCTemplate(shared_ptr<AddMCTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMCTemplateWithOptions(request, runtime);
}

SearchTemplateResponse Alibabacloud_Mts20140618::Client::searchTemplateWithOptions(shared_ptr<SearchTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchTemplateResponse(doRPCRequest(make_shared<string>("SearchTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchTemplateResponse Alibabacloud_Mts20140618::Client::searchTemplate(shared_ptr<SearchTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTemplateWithOptions(request, runtime);
}

UpdateMcuTemplateResponse Alibabacloud_Mts20140618::Client::updateMcuTemplateWithOptions(shared_ptr<UpdateMcuTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMcuTemplateResponse(doRPCRequest(make_shared<string>("UpdateMcuTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMcuTemplateResponse Alibabacloud_Mts20140618::Client::updateMcuTemplate(shared_ptr<UpdateMcuTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMcuTemplateWithOptions(request, runtime);
}

SubmitFacerecogJobResponse Alibabacloud_Mts20140618::Client::submitFacerecogJobWithOptions(shared_ptr<SubmitFacerecogJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitFacerecogJobResponse(doRPCRequest(make_shared<string>("SubmitFacerecogJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitFacerecogJobResponse Alibabacloud_Mts20140618::Client::submitFacerecogJob(shared_ptr<SubmitFacerecogJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFacerecogJobWithOptions(request, runtime);
}

SubmitEditingJobsResponse Alibabacloud_Mts20140618::Client::submitEditingJobsWithOptions(shared_ptr<SubmitEditingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitEditingJobsResponse(doRPCRequest(make_shared<string>("SubmitEditingJobs"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitEditingJobsResponse Alibabacloud_Mts20140618::Client::submitEditingJobs(shared_ptr<SubmitEditingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitEditingJobsWithOptions(request, runtime);
}

ReportVideoSplitJobResultResponse Alibabacloud_Mts20140618::Client::reportVideoSplitJobResultWithOptions(shared_ptr<ReportVideoSplitJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportVideoSplitJobResultResponse(doRPCRequest(make_shared<string>("ReportVideoSplitJobResult"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportVideoSplitJobResultResponse Alibabacloud_Mts20140618::Client::reportVideoSplitJobResult(shared_ptr<ReportVideoSplitJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportVideoSplitJobResultWithOptions(request, runtime);
}

QueryMediaCensorJobDetailResponse Alibabacloud_Mts20140618::Client::queryMediaCensorJobDetailWithOptions(shared_ptr<QueryMediaCensorJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMediaCensorJobDetailResponse(doRPCRequest(make_shared<string>("QueryMediaCensorJobDetail"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMediaCensorJobDetailResponse Alibabacloud_Mts20140618::Client::queryMediaCensorJobDetail(shared_ptr<QueryMediaCensorJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaCensorJobDetailWithOptions(request, runtime);
}

TagCustomPersonResponse Alibabacloud_Mts20140618::Client::tagCustomPersonWithOptions(shared_ptr<TagCustomPersonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagCustomPersonResponse(doRPCRequest(make_shared<string>("TagCustomPerson"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagCustomPersonResponse Alibabacloud_Mts20140618::Client::tagCustomPerson(shared_ptr<TagCustomPersonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagCustomPersonWithOptions(request, runtime);
}

CreateMcuTemplateResponse Alibabacloud_Mts20140618::Client::createMcuTemplateWithOptions(shared_ptr<CreateMcuTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMcuTemplateResponse(doRPCRequest(make_shared<string>("CreateMcuTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMcuTemplateResponse Alibabacloud_Mts20140618::Client::createMcuTemplate(shared_ptr<CreateMcuTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMcuTemplateWithOptions(request, runtime);
}

ListFpShotNotaryResponse Alibabacloud_Mts20140618::Client::listFpShotNotaryWithOptions(shared_ptr<ListFpShotNotaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFpShotNotaryResponse(doRPCRequest(make_shared<string>("ListFpShotNotary"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFpShotNotaryResponse Alibabacloud_Mts20140618::Client::listFpShotNotary(shared_ptr<ListFpShotNotaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFpShotNotaryWithOptions(request, runtime);
}

ReportFpShotJobResultResponse Alibabacloud_Mts20140618::Client::reportFpShotJobResultWithOptions(shared_ptr<ReportFpShotJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportFpShotJobResultResponse(doRPCRequest(make_shared<string>("ReportFpShotJobResult"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportFpShotJobResultResponse Alibabacloud_Mts20140618::Client::reportFpShotJobResult(shared_ptr<ReportFpShotJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportFpShotJobResultWithOptions(request, runtime);
}

SubmitVideoGifJobResponse Alibabacloud_Mts20140618::Client::submitVideoGifJobWithOptions(shared_ptr<SubmitVideoGifJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitVideoGifJobResponse(doRPCRequest(make_shared<string>("SubmitVideoGifJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitVideoGifJobResponse Alibabacloud_Mts20140618::Client::submitVideoGifJob(shared_ptr<SubmitVideoGifJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitVideoGifJobWithOptions(request, runtime);
}

QueryAnnotationJobListResponse Alibabacloud_Mts20140618::Client::queryAnnotationJobListWithOptions(shared_ptr<QueryAnnotationJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAnnotationJobListResponse(doRPCRequest(make_shared<string>("QueryAnnotationJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAnnotationJobListResponse Alibabacloud_Mts20140618::Client::queryAnnotationJobList(shared_ptr<QueryAnnotationJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAnnotationJobListWithOptions(request, runtime);
}

SubmitPornJobResponse Alibabacloud_Mts20140618::Client::submitPornJobWithOptions(shared_ptr<SubmitPornJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitPornJobResponse(doRPCRequest(make_shared<string>("SubmitPornJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitPornJobResponse Alibabacloud_Mts20140618::Client::submitPornJob(shared_ptr<SubmitPornJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitPornJobWithOptions(request, runtime);
}

DescribeMtsUserResourcePackageResponse Alibabacloud_Mts20140618::Client::describeMtsUserResourcePackageWithOptions(shared_ptr<DescribeMtsUserResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMtsUserResourcePackageResponse(doRPCRequest(make_shared<string>("DescribeMtsUserResourcePackage"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMtsUserResourcePackageResponse Alibabacloud_Mts20140618::Client::describeMtsUserResourcePackage(shared_ptr<DescribeMtsUserResourcePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMtsUserResourcePackageWithOptions(request, runtime);
}

AddTemplateResponse Alibabacloud_Mts20140618::Client::addTemplateWithOptions(shared_ptr<AddTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddTemplateResponse(doRPCRequest(make_shared<string>("AddTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddTemplateResponse Alibabacloud_Mts20140618::Client::addTemplate(shared_ptr<AddTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTemplateWithOptions(request, runtime);
}

SubmitMCJobResponse Alibabacloud_Mts20140618::Client::submitMCJobWithOptions(shared_ptr<SubmitMCJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitMCJobResponse(doRPCRequest(make_shared<string>("SubmitMCJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitMCJobResponse Alibabacloud_Mts20140618::Client::submitMCJob(shared_ptr<SubmitMCJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMCJobWithOptions(request, runtime);
}

ReportPornJobResultResponse Alibabacloud_Mts20140618::Client::reportPornJobResultWithOptions(shared_ptr<ReportPornJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportPornJobResultResponse(doRPCRequest(make_shared<string>("ReportPornJobResult"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportPornJobResultResponse Alibabacloud_Mts20140618::Client::reportPornJobResult(shared_ptr<ReportPornJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportPornJobResultWithOptions(request, runtime);
}

UpdateMediaWorkflowResponse Alibabacloud_Mts20140618::Client::updateMediaWorkflowWithOptions(shared_ptr<UpdateMediaWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMediaWorkflowResponse(doRPCRequest(make_shared<string>("UpdateMediaWorkflow"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMediaWorkflowResponse Alibabacloud_Mts20140618::Client::updateMediaWorkflow(shared_ptr<UpdateMediaWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaWorkflowWithOptions(request, runtime);
}

DeleteSmarttagTemplateResponse Alibabacloud_Mts20140618::Client::deleteSmarttagTemplateWithOptions(shared_ptr<DeleteSmarttagTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSmarttagTemplateResponse(doRPCRequest(make_shared<string>("DeleteSmarttagTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSmarttagTemplateResponse Alibabacloud_Mts20140618::Client::deleteSmarttagTemplate(shared_ptr<DeleteSmarttagTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmarttagTemplateWithOptions(request, runtime);
}

QueryMediaWorkflowListResponse Alibabacloud_Mts20140618::Client::queryMediaWorkflowListWithOptions(shared_ptr<QueryMediaWorkflowListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMediaWorkflowListResponse(doRPCRequest(make_shared<string>("QueryMediaWorkflowList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMediaWorkflowListResponse Alibabacloud_Mts20140618::Client::queryMediaWorkflowList(shared_ptr<QueryMediaWorkflowListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaWorkflowListWithOptions(request, runtime);
}

SubmitIProductionJobResponse Alibabacloud_Mts20140618::Client::submitIProductionJobWithOptions(shared_ptr<SubmitIProductionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitIProductionJobResponse(doRPCRequest(make_shared<string>("SubmitIProductionJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitIProductionJobResponse Alibabacloud_Mts20140618::Client::submitIProductionJob(shared_ptr<SubmitIProductionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitIProductionJobWithOptions(request, runtime);
}

GetLicenseResponse Alibabacloud_Mts20140618::Client::getLicenseWithOptions(shared_ptr<GetLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLicenseResponse(doRPCRequest(make_shared<string>("GetLicense"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLicenseResponse Alibabacloud_Mts20140618::Client::getLicense(shared_ptr<GetLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLicenseWithOptions(request, runtime);
}

QueryVideoSummaryJobListResponse Alibabacloud_Mts20140618::Client::queryVideoSummaryJobListWithOptions(shared_ptr<QueryVideoSummaryJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryVideoSummaryJobListResponse(doRPCRequest(make_shared<string>("QueryVideoSummaryJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryVideoSummaryJobListResponse Alibabacloud_Mts20140618::Client::queryVideoSummaryJobList(shared_ptr<QueryVideoSummaryJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVideoSummaryJobListWithOptions(request, runtime);
}

SubmitSmarttagJobResponse Alibabacloud_Mts20140618::Client::submitSmarttagJobWithOptions(shared_ptr<SubmitSmarttagJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSmarttagJobResponse(doRPCRequest(make_shared<string>("SubmitSmarttagJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSmarttagJobResponse Alibabacloud_Mts20140618::Client::submitSmarttagJob(shared_ptr<SubmitSmarttagJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmarttagJobWithOptions(request, runtime);
}

QuerySmarttagJobResponse Alibabacloud_Mts20140618::Client::querySmarttagJobWithOptions(shared_ptr<QuerySmarttagJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySmarttagJobResponse(doRPCRequest(make_shared<string>("QuerySmarttagJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySmarttagJobResponse Alibabacloud_Mts20140618::Client::querySmarttagJob(shared_ptr<QuerySmarttagJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmarttagJobWithOptions(request, runtime);
}

UpdateMediaCoverResponse Alibabacloud_Mts20140618::Client::updateMediaCoverWithOptions(shared_ptr<UpdateMediaCoverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMediaCoverResponse(doRPCRequest(make_shared<string>("UpdateMediaCover"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMediaCoverResponse Alibabacloud_Mts20140618::Client::updateMediaCover(shared_ptr<UpdateMediaCoverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaCoverWithOptions(request, runtime);
}

QueryIProductionJobResponse Alibabacloud_Mts20140618::Client::queryIProductionJobWithOptions(shared_ptr<QueryIProductionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryIProductionJobResponse(doRPCRequest(make_shared<string>("QueryIProductionJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryIProductionJobResponse Alibabacloud_Mts20140618::Client::queryIProductionJob(shared_ptr<QueryIProductionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryIProductionJobWithOptions(request, runtime);
}

ListMediaResponse Alibabacloud_Mts20140618::Client::listMediaWithOptions(shared_ptr<ListMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMediaResponse(doRPCRequest(make_shared<string>("ListMedia"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMediaResponse Alibabacloud_Mts20140618::Client::listMedia(shared_ptr<ListMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaWithOptions(request, runtime);
}

GetPackageResponse Alibabacloud_Mts20140618::Client::getPackageWithOptions(shared_ptr<GetPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPackageResponse(doRPCRequest(make_shared<string>("GetPackage"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPackageResponse Alibabacloud_Mts20140618::Client::getPackage(shared_ptr<GetPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPackageWithOptions(request, runtime);
}

UpdateWaterMarkTemplateResponse Alibabacloud_Mts20140618::Client::updateWaterMarkTemplateWithOptions(shared_ptr<UpdateWaterMarkTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateWaterMarkTemplateResponse(doRPCRequest(make_shared<string>("UpdateWaterMarkTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateWaterMarkTemplateResponse Alibabacloud_Mts20140618::Client::updateWaterMarkTemplate(shared_ptr<UpdateWaterMarkTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWaterMarkTemplateWithOptions(request, runtime);
}

QueryMcuTemplateResponse Alibabacloud_Mts20140618::Client::queryMcuTemplateWithOptions(shared_ptr<QueryMcuTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMcuTemplateResponse(doRPCRequest(make_shared<string>("QueryMcuTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMcuTemplateResponse Alibabacloud_Mts20140618::Client::queryMcuTemplate(shared_ptr<QueryMcuTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMcuTemplateWithOptions(request, runtime);
}

ActivateMediaWorkflowResponse Alibabacloud_Mts20140618::Client::activateMediaWorkflowWithOptions(shared_ptr<ActivateMediaWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ActivateMediaWorkflowResponse(doRPCRequest(make_shared<string>("ActivateMediaWorkflow"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ActivateMediaWorkflowResponse Alibabacloud_Mts20140618::Client::activateMediaWorkflow(shared_ptr<ActivateMediaWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateMediaWorkflowWithOptions(request, runtime);
}

SearchMediaResponse Alibabacloud_Mts20140618::Client::searchMediaWithOptions(shared_ptr<SearchMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchMediaResponse(doRPCRequest(make_shared<string>("SearchMedia"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchMediaResponse Alibabacloud_Mts20140618::Client::searchMedia(shared_ptr<SearchMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaWithOptions(request, runtime);
}

SubmitTerrorismJobResponse Alibabacloud_Mts20140618::Client::submitTerrorismJobWithOptions(shared_ptr<SubmitTerrorismJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitTerrorismJobResponse(doRPCRequest(make_shared<string>("SubmitTerrorismJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitTerrorismJobResponse Alibabacloud_Mts20140618::Client::submitTerrorismJob(shared_ptr<SubmitTerrorismJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTerrorismJobWithOptions(request, runtime);
}

AddCategoryResponse Alibabacloud_Mts20140618::Client::addCategoryWithOptions(shared_ptr<AddCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddCategoryResponse(doRPCRequest(make_shared<string>("AddCategory"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddCategoryResponse Alibabacloud_Mts20140618::Client::addCategory(shared_ptr<AddCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCategoryWithOptions(request, runtime);
}

QueryInnerJobResponse Alibabacloud_Mts20140618::Client::queryInnerJobWithOptions(shared_ptr<QueryInnerJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryInnerJobResponse(doRPCRequest(make_shared<string>("QueryInnerJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryInnerJobResponse Alibabacloud_Mts20140618::Client::queryInnerJob(shared_ptr<QueryInnerJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInnerJobWithOptions(request, runtime);
}

ListFpShotFilesResponse Alibabacloud_Mts20140618::Client::listFpShotFilesWithOptions(shared_ptr<ListFpShotFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFpShotFilesResponse(doRPCRequest(make_shared<string>("ListFpShotFiles"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFpShotFilesResponse Alibabacloud_Mts20140618::Client::listFpShotFiles(shared_ptr<ListFpShotFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFpShotFilesWithOptions(request, runtime);
}

QueryTerrorismPipelineListResponse Alibabacloud_Mts20140618::Client::queryTerrorismPipelineListWithOptions(shared_ptr<QueryTerrorismPipelineListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTerrorismPipelineListResponse(doRPCRequest(make_shared<string>("QueryTerrorismPipelineList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTerrorismPipelineListResponse Alibabacloud_Mts20140618::Client::queryTerrorismPipelineList(shared_ptr<QueryTerrorismPipelineListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTerrorismPipelineListWithOptions(request, runtime);
}

AddMediaResponse Alibabacloud_Mts20140618::Client::addMediaWithOptions(shared_ptr<AddMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddMediaResponse(doRPCRequest(make_shared<string>("AddMedia"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddMediaResponse Alibabacloud_Mts20140618::Client::addMedia(shared_ptr<AddMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMediaWithOptions(request, runtime);
}

StopIProductionJobResponse Alibabacloud_Mts20140618::Client::stopIProductionJobWithOptions(shared_ptr<StopIProductionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopIProductionJobResponse(doRPCRequest(make_shared<string>("StopIProductionJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopIProductionJobResponse Alibabacloud_Mts20140618::Client::stopIProductionJob(shared_ptr<StopIProductionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopIProductionJobWithOptions(request, runtime);
}

DeleteMcuTemplateResponse Alibabacloud_Mts20140618::Client::deleteMcuTemplateWithOptions(shared_ptr<DeleteMcuTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMcuTemplateResponse(doRPCRequest(make_shared<string>("DeleteMcuTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMcuTemplateResponse Alibabacloud_Mts20140618::Client::deleteMcuTemplate(shared_ptr<DeleteMcuTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMcuTemplateWithOptions(request, runtime);
}

QueryMediaCensorJobListResponse Alibabacloud_Mts20140618::Client::queryMediaCensorJobListWithOptions(shared_ptr<QueryMediaCensorJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMediaCensorJobListResponse(doRPCRequest(make_shared<string>("QueryMediaCensorJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMediaCensorJobListResponse Alibabacloud_Mts20140618::Client::queryMediaCensorJobList(shared_ptr<QueryMediaCensorJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaCensorJobListWithOptions(request, runtime);
}

ListPornPipelineResponse Alibabacloud_Mts20140618::Client::listPornPipelineWithOptions(shared_ptr<ListPornPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPornPipelineResponse(doRPCRequest(make_shared<string>("ListPornPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPornPipelineResponse Alibabacloud_Mts20140618::Client::listPornPipeline(shared_ptr<ListPornPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPornPipelineWithOptions(request, runtime);
}

AddTerrorismPipelineResponse Alibabacloud_Mts20140618::Client::addTerrorismPipelineWithOptions(shared_ptr<AddTerrorismPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddTerrorismPipelineResponse(doRPCRequest(make_shared<string>("AddTerrorismPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddTerrorismPipelineResponse Alibabacloud_Mts20140618::Client::addTerrorismPipeline(shared_ptr<AddTerrorismPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTerrorismPipelineWithOptions(request, runtime);
}

CreateFpShotDBResponse Alibabacloud_Mts20140618::Client::createFpShotDBWithOptions(shared_ptr<CreateFpShotDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFpShotDBResponse(doRPCRequest(make_shared<string>("CreateFpShotDB"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFpShotDBResponse Alibabacloud_Mts20140618::Client::createFpShotDB(shared_ptr<CreateFpShotDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFpShotDBWithOptions(request, runtime);
}

UnregisterCustomFaceResponse Alibabacloud_Mts20140618::Client::unregisterCustomFaceWithOptions(shared_ptr<UnregisterCustomFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnregisterCustomFaceResponse(doRPCRequest(make_shared<string>("UnregisterCustomFace"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnregisterCustomFaceResponse Alibabacloud_Mts20140618::Client::unregisterCustomFace(shared_ptr<UnregisterCustomFaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unregisterCustomFaceWithOptions(request, runtime);
}

QuerySmarttagTemplateListResponse Alibabacloud_Mts20140618::Client::querySmarttagTemplateListWithOptions(shared_ptr<QuerySmarttagTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySmarttagTemplateListResponse(doRPCRequest(make_shared<string>("QuerySmarttagTemplateList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySmarttagTemplateListResponse Alibabacloud_Mts20140618::Client::querySmarttagTemplateList(shared_ptr<QuerySmarttagTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmarttagTemplateListWithOptions(request, runtime);
}

SubmitFpShotJobResponse Alibabacloud_Mts20140618::Client::submitFpShotJobWithOptions(shared_ptr<SubmitFpShotJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitFpShotJobResponse(doRPCRequest(make_shared<string>("SubmitFpShotJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitFpShotJobResponse Alibabacloud_Mts20140618::Client::submitFpShotJob(shared_ptr<SubmitFpShotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFpShotJobWithOptions(request, runtime);
}

QueryCensorPipelineListResponse Alibabacloud_Mts20140618::Client::queryCensorPipelineListWithOptions(shared_ptr<QueryCensorPipelineListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCensorPipelineListResponse(doRPCRequest(make_shared<string>("QueryCensorPipelineList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCensorPipelineListResponse Alibabacloud_Mts20140618::Client::queryCensorPipelineList(shared_ptr<QueryCensorPipelineListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCensorPipelineListWithOptions(request, runtime);
}

SubmitMcuJobResponse Alibabacloud_Mts20140618::Client::submitMcuJobWithOptions(shared_ptr<SubmitMcuJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitMcuJobResponse(doRPCRequest(make_shared<string>("SubmitMcuJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitMcuJobResponse Alibabacloud_Mts20140618::Client::submitMcuJob(shared_ptr<SubmitMcuJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMcuJobWithOptions(request, runtime);
}

CategoryTreeResponse Alibabacloud_Mts20140618::Client::categoryTreeWithOptions(shared_ptr<CategoryTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CategoryTreeResponse(doRPCRequest(make_shared<string>("CategoryTree"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CategoryTreeResponse Alibabacloud_Mts20140618::Client::categoryTree(shared_ptr<CategoryTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return categoryTreeWithOptions(request, runtime);
}

SubmitTagJobResponse Alibabacloud_Mts20140618::Client::submitTagJobWithOptions(shared_ptr<SubmitTagJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitTagJobResponse(doRPCRequest(make_shared<string>("SubmitTagJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitTagJobResponse Alibabacloud_Mts20140618::Client::submitTagJob(shared_ptr<SubmitTagJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTagJobWithOptions(request, runtime);
}

SubmitCoverJobResponse Alibabacloud_Mts20140618::Client::submitCoverJobWithOptions(shared_ptr<SubmitCoverJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitCoverJobResponse(doRPCRequest(make_shared<string>("SubmitCoverJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitCoverJobResponse Alibabacloud_Mts20140618::Client::submitCoverJob(shared_ptr<SubmitCoverJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCoverJobWithOptions(request, runtime);
}

AddCensorPipelineResponse Alibabacloud_Mts20140618::Client::addCensorPipelineWithOptions(shared_ptr<AddCensorPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddCensorPipelineResponse(doRPCRequest(make_shared<string>("AddCensorPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddCensorPipelineResponse Alibabacloud_Mts20140618::Client::addCensorPipeline(shared_ptr<AddCensorPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCensorPipelineWithOptions(request, runtime);
}

SearchWaterMarkTemplateResponse Alibabacloud_Mts20140618::Client::searchWaterMarkTemplateWithOptions(shared_ptr<SearchWaterMarkTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SearchWaterMarkTemplateResponse(doRPCRequest(make_shared<string>("SearchWaterMarkTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchWaterMarkTemplateResponse Alibabacloud_Mts20140618::Client::searchWaterMarkTemplate(shared_ptr<SearchWaterMarkTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchWaterMarkTemplateWithOptions(request, runtime);
}

SubmitAsrJobResponse Alibabacloud_Mts20140618::Client::submitAsrJobWithOptions(shared_ptr<SubmitAsrJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitAsrJobResponse(doRPCRequest(make_shared<string>("SubmitAsrJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitAsrJobResponse Alibabacloud_Mts20140618::Client::submitAsrJob(shared_ptr<SubmitAsrJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAsrJobWithOptions(request, runtime);
}

AddMediaWorkflowResponse Alibabacloud_Mts20140618::Client::addMediaWorkflowWithOptions(shared_ptr<AddMediaWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddMediaWorkflowResponse(doRPCRequest(make_shared<string>("AddMediaWorkflow"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddMediaWorkflowResponse Alibabacloud_Mts20140618::Client::addMediaWorkflow(shared_ptr<AddMediaWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMediaWorkflowWithOptions(request, runtime);
}

QueryAsrJobListResponse Alibabacloud_Mts20140618::Client::queryAsrJobListWithOptions(shared_ptr<QueryAsrJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAsrJobListResponse(doRPCRequest(make_shared<string>("QueryAsrJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAsrJobListResponse Alibabacloud_Mts20140618::Client::queryAsrJobList(shared_ptr<QueryAsrJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAsrJobListWithOptions(request, runtime);
}

SubmitVideoPoseJobResponse Alibabacloud_Mts20140618::Client::submitVideoPoseJobWithOptions(shared_ptr<SubmitVideoPoseJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitVideoPoseJobResponse(doRPCRequest(make_shared<string>("SubmitVideoPoseJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitVideoPoseJobResponse Alibabacloud_Mts20140618::Client::submitVideoPoseJob(shared_ptr<SubmitVideoPoseJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitVideoPoseJobWithOptions(request, runtime);
}

RegisterMediaDetailPersonResponse Alibabacloud_Mts20140618::Client::registerMediaDetailPersonWithOptions(shared_ptr<RegisterMediaDetailPersonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterMediaDetailPersonResponse(doRPCRequest(make_shared<string>("RegisterMediaDetailPerson"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterMediaDetailPersonResponse Alibabacloud_Mts20140618::Client::registerMediaDetailPerson(shared_ptr<RegisterMediaDetailPersonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaDetailPersonWithOptions(request, runtime);
}

QueryCensorJobListResponse Alibabacloud_Mts20140618::Client::queryCensorJobListWithOptions(shared_ptr<QueryCensorJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCensorJobListResponse(doRPCRequest(make_shared<string>("QueryCensorJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCensorJobListResponse Alibabacloud_Mts20140618::Client::queryCensorJobList(shared_ptr<QueryCensorJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCensorJobListWithOptions(request, runtime);
}

SubmitFpCompareJobResponse Alibabacloud_Mts20140618::Client::submitFpCompareJobWithOptions(shared_ptr<SubmitFpCompareJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitFpCompareJobResponse(doRPCRequest(make_shared<string>("SubmitFpCompareJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitFpCompareJobResponse Alibabacloud_Mts20140618::Client::submitFpCompareJob(shared_ptr<SubmitFpCompareJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFpCompareJobWithOptions(request, runtime);
}

DeleteCategoryResponse Alibabacloud_Mts20140618::Client::deleteCategoryWithOptions(shared_ptr<DeleteCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCategoryResponse(doRPCRequest(make_shared<string>("DeleteCategory"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCategoryResponse Alibabacloud_Mts20140618::Client::deleteCategory(shared_ptr<DeleteCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCategoryWithOptions(request, runtime);
}

QuerySnapshotJobListResponse Alibabacloud_Mts20140618::Client::querySnapshotJobListWithOptions(shared_ptr<QuerySnapshotJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySnapshotJobListResponse(doRPCRequest(make_shared<string>("QuerySnapshotJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySnapshotJobListResponse Alibabacloud_Mts20140618::Client::querySnapshotJobList(shared_ptr<QuerySnapshotJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySnapshotJobListWithOptions(request, runtime);
}

DetectImageSyncResponse Alibabacloud_Mts20140618::Client::detectImageSyncWithOptions(shared_ptr<DetectImageSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectImageSyncResponse(doRPCRequest(make_shared<string>("DetectImageSync"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectImageSyncResponse Alibabacloud_Mts20140618::Client::detectImageSync(shared_ptr<DetectImageSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageSyncWithOptions(request, runtime);
}

QueryTagJobListResponse Alibabacloud_Mts20140618::Client::queryTagJobListWithOptions(shared_ptr<QueryTagJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTagJobListResponse(doRPCRequest(make_shared<string>("QueryTagJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTagJobListResponse Alibabacloud_Mts20140618::Client::queryTagJobList(shared_ptr<QueryTagJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTagJobListWithOptions(request, runtime);
}

SubmitFpDBDeleteJobResponse Alibabacloud_Mts20140618::Client::submitFpDBDeleteJobWithOptions(shared_ptr<SubmitFpDBDeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitFpDBDeleteJobResponse(doRPCRequest(make_shared<string>("SubmitFpDBDeleteJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitFpDBDeleteJobResponse Alibabacloud_Mts20140618::Client::submitFpDBDeleteJob(shared_ptr<SubmitFpDBDeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFpDBDeleteJobWithOptions(request, runtime);
}

GetJobInfoResponse Alibabacloud_Mts20140618::Client::getJobInfoWithOptions(shared_ptr<GetJobInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetJobInfoResponse(doRPCRequest(make_shared<string>("GetJobInfo"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetJobInfoResponse Alibabacloud_Mts20140618::Client::getJobInfo(shared_ptr<GetJobInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobInfoWithOptions(request, runtime);
}

AddMediaTagResponse Alibabacloud_Mts20140618::Client::addMediaTagWithOptions(shared_ptr<AddMediaTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddMediaTagResponse(doRPCRequest(make_shared<string>("AddMediaTag"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddMediaTagResponse Alibabacloud_Mts20140618::Client::addMediaTag(shared_ptr<AddMediaTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMediaTagWithOptions(request, runtime);
}

UnbindInputBucketResponse Alibabacloud_Mts20140618::Client::unbindInputBucketWithOptions(shared_ptr<UnbindInputBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindInputBucketResponse(doRPCRequest(make_shared<string>("UnbindInputBucket"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindInputBucketResponse Alibabacloud_Mts20140618::Client::unbindInputBucket(shared_ptr<UnbindInputBucketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindInputBucketWithOptions(request, runtime);
}

QueryMediaWorkflowExecutionListResponse Alibabacloud_Mts20140618::Client::queryMediaWorkflowExecutionListWithOptions(shared_ptr<QueryMediaWorkflowExecutionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMediaWorkflowExecutionListResponse(doRPCRequest(make_shared<string>("QueryMediaWorkflowExecutionList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMediaWorkflowExecutionListResponse Alibabacloud_Mts20140618::Client::queryMediaWorkflowExecutionList(shared_ptr<QueryMediaWorkflowExecutionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaWorkflowExecutionListWithOptions(request, runtime);
}

SubmitComplexJobResponse Alibabacloud_Mts20140618::Client::submitComplexJobWithOptions(shared_ptr<SubmitComplexJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitComplexJobResponse(doRPCRequest(make_shared<string>("SubmitComplexJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitComplexJobResponse Alibabacloud_Mts20140618::Client::submitComplexJob(shared_ptr<SubmitComplexJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitComplexJobWithOptions(request, runtime);
}

AddAsrPipelineResponse Alibabacloud_Mts20140618::Client::addAsrPipelineWithOptions(shared_ptr<AddAsrPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddAsrPipelineResponse(doRPCRequest(make_shared<string>("AddAsrPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddAsrPipelineResponse Alibabacloud_Mts20140618::Client::addAsrPipeline(shared_ptr<AddAsrPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAsrPipelineWithOptions(request, runtime);
}

CancelJobResponse Alibabacloud_Mts20140618::Client::cancelJobWithOptions(shared_ptr<CancelJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelJobResponse(doRPCRequest(make_shared<string>("CancelJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelJobResponse Alibabacloud_Mts20140618::Client::cancelJob(shared_ptr<CancelJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelJobWithOptions(request, runtime);
}

ListAllCategoryResponse Alibabacloud_Mts20140618::Client::listAllCategoryWithOptions(shared_ptr<ListAllCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAllCategoryResponse(doRPCRequest(make_shared<string>("ListAllCategory"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAllCategoryResponse Alibabacloud_Mts20140618::Client::listAllCategory(shared_ptr<ListAllCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAllCategoryWithOptions(request, runtime);
}

ListFpShotDBResponse Alibabacloud_Mts20140618::Client::listFpShotDBWithOptions(shared_ptr<ListFpShotDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFpShotDBResponse(doRPCRequest(make_shared<string>("ListFpShotDB"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFpShotDBResponse Alibabacloud_Mts20140618::Client::listFpShotDB(shared_ptr<ListFpShotDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFpShotDBWithOptions(request, runtime);
}

AddSmarttagTemplateResponse Alibabacloud_Mts20140618::Client::addSmarttagTemplateWithOptions(shared_ptr<AddSmarttagTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddSmarttagTemplateResponse(doRPCRequest(make_shared<string>("AddSmarttagTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddSmarttagTemplateResponse Alibabacloud_Mts20140618::Client::addSmarttagTemplate(shared_ptr<AddSmarttagTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSmarttagTemplateWithOptions(request, runtime);
}

LogicalDeleteResourceResponse Alibabacloud_Mts20140618::Client::logicalDeleteResourceWithOptions(shared_ptr<LogicalDeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LogicalDeleteResourceResponse(doRPCRequest(make_shared<string>("LogicalDeleteResource"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LogicalDeleteResourceResponse Alibabacloud_Mts20140618::Client::logicalDeleteResource(shared_ptr<LogicalDeleteResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return logicalDeleteResourceWithOptions(request, runtime);
}

ListMediaWorkflowExecutionsResponse Alibabacloud_Mts20140618::Client::listMediaWorkflowExecutionsWithOptions(shared_ptr<ListMediaWorkflowExecutionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListMediaWorkflowExecutionsResponse(doRPCRequest(make_shared<string>("ListMediaWorkflowExecutions"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListMediaWorkflowExecutionsResponse Alibabacloud_Mts20140618::Client::listMediaWorkflowExecutions(shared_ptr<ListMediaWorkflowExecutionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaWorkflowExecutionsWithOptions(request, runtime);
}

SubmitInnerJobResponse Alibabacloud_Mts20140618::Client::submitInnerJobWithOptions(shared_ptr<SubmitInnerJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitInnerJobResponse(doRPCRequest(make_shared<string>("SubmitInnerJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitInnerJobResponse Alibabacloud_Mts20140618::Client::submitInnerJob(shared_ptr<SubmitInnerJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitInnerJobWithOptions(request, runtime);
}

QueryMediaDetailJobListResponse Alibabacloud_Mts20140618::Client::queryMediaDetailJobListWithOptions(shared_ptr<QueryMediaDetailJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMediaDetailJobListResponse(doRPCRequest(make_shared<string>("QueryMediaDetailJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMediaDetailJobListResponse Alibabacloud_Mts20140618::Client::queryMediaDetailJobList(shared_ptr<QueryMediaDetailJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaDetailJobListWithOptions(request, runtime);
}

UpdatePornPipelineResponse Alibabacloud_Mts20140618::Client::updatePornPipelineWithOptions(shared_ptr<UpdatePornPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdatePornPipelineResponse(doRPCRequest(make_shared<string>("UpdatePornPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdatePornPipelineResponse Alibabacloud_Mts20140618::Client::updatePornPipeline(shared_ptr<UpdatePornPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePornPipelineWithOptions(request, runtime);
}

DeleteWaterMarkTemplateResponse Alibabacloud_Mts20140618::Client::deleteWaterMarkTemplateWithOptions(shared_ptr<DeleteWaterMarkTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteWaterMarkTemplateResponse(doRPCRequest(make_shared<string>("DeleteWaterMarkTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteWaterMarkTemplateResponse Alibabacloud_Mts20140618::Client::deleteWaterMarkTemplate(shared_ptr<DeleteWaterMarkTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWaterMarkTemplateWithOptions(request, runtime);
}

SubmitVideoQualityJobResponse Alibabacloud_Mts20140618::Client::submitVideoQualityJobWithOptions(shared_ptr<SubmitVideoQualityJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitVideoQualityJobResponse(doRPCRequest(make_shared<string>("SubmitVideoQualityJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitVideoQualityJobResponse Alibabacloud_Mts20140618::Client::submitVideoQualityJob(shared_ptr<SubmitVideoQualityJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitVideoQualityJobWithOptions(request, runtime);
}

AddCoverPipelineResponse Alibabacloud_Mts20140618::Client::addCoverPipelineWithOptions(shared_ptr<AddCoverPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddCoverPipelineResponse(doRPCRequest(make_shared<string>("AddCoverPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddCoverPipelineResponse Alibabacloud_Mts20140618::Client::addCoverPipeline(shared_ptr<AddCoverPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCoverPipelineWithOptions(request, runtime);
}

SubmitURLUploadJobResponse Alibabacloud_Mts20140618::Client::submitURLUploadJobWithOptions(shared_ptr<SubmitURLUploadJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitURLUploadJobShrinkRequest> request = make_shared<SubmitURLUploadJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitURLUploadJobRequestTargetStorage>(tmpReq->targetStorage)) {
    request->targetStorageShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->targetStorage->toMap()), make_shared<string>("TargetStorage"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitURLUploadJobResponse(doRPCRequest(make_shared<string>("SubmitURLUploadJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitURLUploadJobResponse Alibabacloud_Mts20140618::Client::submitURLUploadJob(shared_ptr<SubmitURLUploadJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitURLUploadJobWithOptions(request, runtime);
}

QueryMediaListByURLResponse Alibabacloud_Mts20140618::Client::queryMediaListByURLWithOptions(shared_ptr<QueryMediaListByURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMediaListByURLResponse(doRPCRequest(make_shared<string>("QueryMediaListByURL"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMediaListByURLResponse Alibabacloud_Mts20140618::Client::queryMediaListByURL(shared_ptr<QueryMediaListByURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaListByURLWithOptions(request, runtime);
}

SubmitMediaFpDeleteJobResponse Alibabacloud_Mts20140618::Client::submitMediaFpDeleteJobWithOptions(shared_ptr<SubmitMediaFpDeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitMediaFpDeleteJobResponse(doRPCRequest(make_shared<string>("SubmitMediaFpDeleteJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitMediaFpDeleteJobResponse Alibabacloud_Mts20140618::Client::submitMediaFpDeleteJob(shared_ptr<SubmitMediaFpDeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaFpDeleteJobWithOptions(request, runtime);
}

DeactivateMediaWorkflowResponse Alibabacloud_Mts20140618::Client::deactivateMediaWorkflowWithOptions(shared_ptr<DeactivateMediaWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeactivateMediaWorkflowResponse(doRPCRequest(make_shared<string>("DeactivateMediaWorkflow"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeactivateMediaWorkflowResponse Alibabacloud_Mts20140618::Client::deactivateMediaWorkflow(shared_ptr<DeactivateMediaWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deactivateMediaWorkflowWithOptions(request, runtime);
}

PhysicalDeleteResourceResponse Alibabacloud_Mts20140618::Client::physicalDeleteResourceWithOptions(shared_ptr<PhysicalDeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PhysicalDeleteResourceResponse(doRPCRequest(make_shared<string>("PhysicalDeleteResource"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PhysicalDeleteResourceResponse Alibabacloud_Mts20140618::Client::physicalDeleteResource(shared_ptr<PhysicalDeleteResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return physicalDeleteResourceWithOptions(request, runtime);
}

DeleteMCTemplateResponse Alibabacloud_Mts20140618::Client::deleteMCTemplateWithOptions(shared_ptr<DeleteMCTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMCTemplateResponse(doRPCRequest(make_shared<string>("DeleteMCTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMCTemplateResponse Alibabacloud_Mts20140618::Client::deleteMCTemplate(shared_ptr<DeleteMCTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMCTemplateWithOptions(request, runtime);
}

UpdatePipelineResponse Alibabacloud_Mts20140618::Client::updatePipelineWithOptions(shared_ptr<UpdatePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdatePipelineResponse(doRPCRequest(make_shared<string>("UpdatePipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdatePipelineResponse Alibabacloud_Mts20140618::Client::updatePipeline(shared_ptr<UpdatePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePipelineWithOptions(request, runtime);
}

DeleteMediaResponse Alibabacloud_Mts20140618::Client::deleteMediaWithOptions(shared_ptr<DeleteMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMediaResponse(doRPCRequest(make_shared<string>("DeleteMedia"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMediaResponse Alibabacloud_Mts20140618::Client::deleteMedia(shared_ptr<DeleteMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaWithOptions(request, runtime);
}

QueryFpCompareJobListResponse Alibabacloud_Mts20140618::Client::queryFpCompareJobListWithOptions(shared_ptr<QueryFpCompareJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryFpCompareJobListResponse(doRPCRequest(make_shared<string>("QueryFpCompareJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryFpCompareJobListResponse Alibabacloud_Mts20140618::Client::queryFpCompareJobList(shared_ptr<QueryFpCompareJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFpCompareJobListWithOptions(request, runtime);
}

BindOutputBucketResponse Alibabacloud_Mts20140618::Client::bindOutputBucketWithOptions(shared_ptr<BindOutputBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindOutputBucketResponse(doRPCRequest(make_shared<string>("BindOutputBucket"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindOutputBucketResponse Alibabacloud_Mts20140618::Client::bindOutputBucket(shared_ptr<BindOutputBucketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindOutputBucketWithOptions(request, runtime);
}

AddPipelineResponse Alibabacloud_Mts20140618::Client::addPipelineWithOptions(shared_ptr<AddPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddPipelineResponse(doRPCRequest(make_shared<string>("AddPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddPipelineResponse Alibabacloud_Mts20140618::Client::addPipeline(shared_ptr<AddPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPipelineWithOptions(request, runtime);
}

QueryMCJobListResponse Alibabacloud_Mts20140618::Client::queryMCJobListWithOptions(shared_ptr<QueryMCJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMCJobListResponse(doRPCRequest(make_shared<string>("QueryMCJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMCJobListResponse Alibabacloud_Mts20140618::Client::queryMCJobList(shared_ptr<QueryMCJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMCJobListWithOptions(request, runtime);
}

QueryMediaListResponse Alibabacloud_Mts20140618::Client::queryMediaListWithOptions(shared_ptr<QueryMediaListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMediaListResponse(doRPCRequest(make_shared<string>("QueryMediaList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMediaListResponse Alibabacloud_Mts20140618::Client::queryMediaList(shared_ptr<QueryMediaListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaListWithOptions(request, runtime);
}

QueryFpDBDeleteJobListResponse Alibabacloud_Mts20140618::Client::queryFpDBDeleteJobListWithOptions(shared_ptr<QueryFpDBDeleteJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryFpDBDeleteJobListResponse(doRPCRequest(make_shared<string>("QueryFpDBDeleteJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryFpDBDeleteJobListResponse Alibabacloud_Mts20140618::Client::queryFpDBDeleteJobList(shared_ptr<QueryFpDBDeleteJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFpDBDeleteJobListWithOptions(request, runtime);
}

RegisterCustomFaceResponse Alibabacloud_Mts20140618::Client::registerCustomFaceWithOptions(shared_ptr<RegisterCustomFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterCustomFaceResponse(doRPCRequest(make_shared<string>("RegisterCustomFace"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterCustomFaceResponse Alibabacloud_Mts20140618::Client::registerCustomFace(shared_ptr<RegisterCustomFaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerCustomFaceWithOptions(request, runtime);
}

SubmitMediaInfoJobResponse Alibabacloud_Mts20140618::Client::submitMediaInfoJobWithOptions(shared_ptr<SubmitMediaInfoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitMediaInfoJobResponse(doRPCRequest(make_shared<string>("SubmitMediaInfoJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitMediaInfoJobResponse Alibabacloud_Mts20140618::Client::submitMediaInfoJob(shared_ptr<SubmitMediaInfoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaInfoJobWithOptions(request, runtime);
}

QueryPornJobListResponse Alibabacloud_Mts20140618::Client::queryPornJobListWithOptions(shared_ptr<QueryPornJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPornJobListResponse(doRPCRequest(make_shared<string>("QueryPornJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPornJobListResponse Alibabacloud_Mts20140618::Client::queryPornJobList(shared_ptr<QueryPornJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPornJobListWithOptions(request, runtime);
}

UpdateCategoryNameResponse Alibabacloud_Mts20140618::Client::updateCategoryNameWithOptions(shared_ptr<UpdateCategoryNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCategoryNameResponse(doRPCRequest(make_shared<string>("UpdateCategoryName"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCategoryNameResponse Alibabacloud_Mts20140618::Client::updateCategoryName(shared_ptr<UpdateCategoryNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCategoryNameWithOptions(request, runtime);
}

DeleteMediaWorkflowResponse Alibabacloud_Mts20140618::Client::deleteMediaWorkflowWithOptions(shared_ptr<DeleteMediaWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMediaWorkflowResponse(doRPCRequest(make_shared<string>("DeleteMediaWorkflow"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMediaWorkflowResponse Alibabacloud_Mts20140618::Client::deleteMediaWorkflow(shared_ptr<DeleteMediaWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaWorkflowWithOptions(request, runtime);
}

QueryMcuJobResponse Alibabacloud_Mts20140618::Client::queryMcuJobWithOptions(shared_ptr<QueryMcuJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMcuJobResponse(doRPCRequest(make_shared<string>("QueryMcuJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMcuJobResponse Alibabacloud_Mts20140618::Client::queryMcuJob(shared_ptr<QueryMcuJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMcuJobWithOptions(request, runtime);
}

ListCoverPipelineResponse Alibabacloud_Mts20140618::Client::listCoverPipelineWithOptions(shared_ptr<ListCoverPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCoverPipelineResponse(doRPCRequest(make_shared<string>("ListCoverPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCoverPipelineResponse Alibabacloud_Mts20140618::Client::listCoverPipeline(shared_ptr<ListCoverPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCoverPipelineWithOptions(request, runtime);
}

SubmitBeautifyJobsResponse Alibabacloud_Mts20140618::Client::submitBeautifyJobsWithOptions(shared_ptr<SubmitBeautifyJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitBeautifyJobsResponse(doRPCRequest(make_shared<string>("SubmitBeautifyJobs"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitBeautifyJobsResponse Alibabacloud_Mts20140618::Client::submitBeautifyJobs(shared_ptr<SubmitBeautifyJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitBeautifyJobsWithOptions(request, runtime);
}

QueryImageSearchJobListResponse Alibabacloud_Mts20140618::Client::queryImageSearchJobListWithOptions(shared_ptr<QueryImageSearchJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryImageSearchJobListResponse(doRPCRequest(make_shared<string>("QueryImageSearchJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryImageSearchJobListResponse Alibabacloud_Mts20140618::Client::queryImageSearchJobList(shared_ptr<QueryImageSearchJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryImageSearchJobListWithOptions(request, runtime);
}

SubmitVideoSummaryJobResponse Alibabacloud_Mts20140618::Client::submitVideoSummaryJobWithOptions(shared_ptr<SubmitVideoSummaryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitVideoSummaryJobResponse(doRPCRequest(make_shared<string>("SubmitVideoSummaryJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitVideoSummaryJobResponse Alibabacloud_Mts20140618::Client::submitVideoSummaryJob(shared_ptr<SubmitVideoSummaryJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitVideoSummaryJobWithOptions(request, runtime);
}

SubmitMediaDetailJobResponse Alibabacloud_Mts20140618::Client::submitMediaDetailJobWithOptions(shared_ptr<SubmitMediaDetailJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitMediaDetailJobResponse(doRPCRequest(make_shared<string>("SubmitMediaDetailJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitMediaDetailJobResponse Alibabacloud_Mts20140618::Client::submitMediaDetailJob(shared_ptr<SubmitMediaDetailJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaDetailJobWithOptions(request, runtime);
}

QueryFpImportResultResponse Alibabacloud_Mts20140618::Client::queryFpImportResultWithOptions(shared_ptr<QueryFpImportResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryFpImportResultResponse(doRPCRequest(make_shared<string>("QueryFpImportResult"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryFpImportResultResponse Alibabacloud_Mts20140618::Client::queryFpImportResult(shared_ptr<QueryFpImportResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFpImportResultWithOptions(request, runtime);
}

QueryWaterMarkTemplateListResponse Alibabacloud_Mts20140618::Client::queryWaterMarkTemplateListWithOptions(shared_ptr<QueryWaterMarkTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryWaterMarkTemplateListResponse(doRPCRequest(make_shared<string>("QueryWaterMarkTemplateList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryWaterMarkTemplateListResponse Alibabacloud_Mts20140618::Client::queryWaterMarkTemplateList(shared_ptr<QueryWaterMarkTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWaterMarkTemplateListWithOptions(request, runtime);
}

QueryMediaInfoJobListResponse Alibabacloud_Mts20140618::Client::queryMediaInfoJobListWithOptions(shared_ptr<QueryMediaInfoJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMediaInfoJobListResponse(doRPCRequest(make_shared<string>("QueryMediaInfoJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMediaInfoJobListResponse Alibabacloud_Mts20140618::Client::queryMediaInfoJobList(shared_ptr<QueryMediaInfoJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaInfoJobListWithOptions(request, runtime);
}

QueryMediaFpDeleteJobListResponse Alibabacloud_Mts20140618::Client::queryMediaFpDeleteJobListWithOptions(shared_ptr<QueryMediaFpDeleteJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMediaFpDeleteJobListResponse(doRPCRequest(make_shared<string>("QueryMediaFpDeleteJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMediaFpDeleteJobListResponse Alibabacloud_Mts20140618::Client::queryMediaFpDeleteJobList(shared_ptr<QueryMediaFpDeleteJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaFpDeleteJobListWithOptions(request, runtime);
}

ReportTagJobResultResponse Alibabacloud_Mts20140618::Client::reportTagJobResultWithOptions(shared_ptr<ReportTagJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportTagJobResultResponse(doRPCRequest(make_shared<string>("ReportTagJobResult"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportTagJobResultResponse Alibabacloud_Mts20140618::Client::reportTagJobResult(shared_ptr<ReportTagJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportTagJobResultWithOptions(request, runtime);
}

AddPornPipelineResponse Alibabacloud_Mts20140618::Client::addPornPipelineWithOptions(shared_ptr<AddPornPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddPornPipelineResponse(doRPCRequest(make_shared<string>("AddPornPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddPornPipelineResponse Alibabacloud_Mts20140618::Client::addPornPipeline(shared_ptr<AddPornPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPornPipelineWithOptions(request, runtime);
}

QueryPornPipelineListResponse Alibabacloud_Mts20140618::Client::queryPornPipelineListWithOptions(shared_ptr<QueryPornPipelineListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPornPipelineListResponse(doRPCRequest(make_shared<string>("QueryPornPipelineList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPornPipelineListResponse Alibabacloud_Mts20140618::Client::queryPornPipelineList(shared_ptr<QueryPornPipelineListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPornPipelineListWithOptions(request, runtime);
}

QueryTerrorismJobListResponse Alibabacloud_Mts20140618::Client::queryTerrorismJobListWithOptions(shared_ptr<QueryTerrorismJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTerrorismJobListResponse(doRPCRequest(make_shared<string>("QueryTerrorismJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTerrorismJobListResponse Alibabacloud_Mts20140618::Client::queryTerrorismJobList(shared_ptr<QueryTerrorismJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTerrorismJobListWithOptions(request, runtime);
}

SubmitJobsResponse Alibabacloud_Mts20140618::Client::submitJobsWithOptions(shared_ptr<SubmitJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitJobsResponse(doRPCRequest(make_shared<string>("SubmitJobs"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitJobsResponse Alibabacloud_Mts20140618::Client::submitJobs(shared_ptr<SubmitJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitJobsWithOptions(request, runtime);
}

RefreshCdnDomainConfigsCacheResponse Alibabacloud_Mts20140618::Client::refreshCdnDomainConfigsCacheWithOptions(shared_ptr<RefreshCdnDomainConfigsCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshCdnDomainConfigsCacheResponse(doRPCRequest(make_shared<string>("RefreshCdnDomainConfigsCache"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshCdnDomainConfigsCacheResponse Alibabacloud_Mts20140618::Client::refreshCdnDomainConfigsCache(shared_ptr<RefreshCdnDomainConfigsCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshCdnDomainConfigsCacheWithOptions(request, runtime);
}

QueryFpFileDeleteJobListResponse Alibabacloud_Mts20140618::Client::queryFpFileDeleteJobListWithOptions(shared_ptr<QueryFpFileDeleteJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryFpFileDeleteJobListResponse(doRPCRequest(make_shared<string>("QueryFpFileDeleteJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryFpFileDeleteJobListResponse Alibabacloud_Mts20140618::Client::queryFpFileDeleteJobList(shared_ptr<QueryFpFileDeleteJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFpFileDeleteJobListWithOptions(request, runtime);
}

SubmitImageSearchJobResponse Alibabacloud_Mts20140618::Client::submitImageSearchJobWithOptions(shared_ptr<SubmitImageSearchJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitImageSearchJobResponse(doRPCRequest(make_shared<string>("SubmitImageSearchJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitImageSearchJobResponse Alibabacloud_Mts20140618::Client::submitImageSearchJob(shared_ptr<SubmitImageSearchJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitImageSearchJobWithOptions(request, runtime);
}

UpdateMediaWorkflowTriggerModeResponse Alibabacloud_Mts20140618::Client::updateMediaWorkflowTriggerModeWithOptions(shared_ptr<UpdateMediaWorkflowTriggerModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMediaWorkflowTriggerModeResponse(doRPCRequest(make_shared<string>("UpdateMediaWorkflowTriggerMode"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMediaWorkflowTriggerModeResponse Alibabacloud_Mts20140618::Client::updateMediaWorkflowTriggerMode(shared_ptr<UpdateMediaWorkflowTriggerModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaWorkflowTriggerModeWithOptions(request, runtime);
}

SetAuthConfigResponse Alibabacloud_Mts20140618::Client::setAuthConfigWithOptions(shared_ptr<SetAuthConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetAuthConfigResponse(doRPCRequest(make_shared<string>("SetAuthConfig"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetAuthConfigResponse Alibabacloud_Mts20140618::Client::setAuthConfig(shared_ptr<SetAuthConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAuthConfigWithOptions(request, runtime);
}

UpdateCensorPipelineResponse Alibabacloud_Mts20140618::Client::updateCensorPipelineWithOptions(shared_ptr<UpdateCensorPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCensorPipelineResponse(doRPCRequest(make_shared<string>("UpdateCensorPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCensorPipelineResponse Alibabacloud_Mts20140618::Client::updateCensorPipeline(shared_ptr<UpdateCensorPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCensorPipelineWithOptions(request, runtime);
}

SubmitSnapshotJobResponse Alibabacloud_Mts20140618::Client::submitSnapshotJobWithOptions(shared_ptr<SubmitSnapshotJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSnapshotJobResponse(doRPCRequest(make_shared<string>("SubmitSnapshotJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSnapshotJobResponse Alibabacloud_Mts20140618::Client::submitSnapshotJob(shared_ptr<SubmitSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSnapshotJobWithOptions(request, runtime);
}

ListCustomPersonsResponse Alibabacloud_Mts20140618::Client::listCustomPersonsWithOptions(shared_ptr<ListCustomPersonsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCustomPersonsResponse(doRPCRequest(make_shared<string>("ListCustomPersons"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCustomPersonsResponse Alibabacloud_Mts20140618::Client::listCustomPersons(shared_ptr<ListCustomPersonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomPersonsWithOptions(request, runtime);
}

QueryFacerecogJobListResponse Alibabacloud_Mts20140618::Client::queryFacerecogJobListWithOptions(shared_ptr<QueryFacerecogJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryFacerecogJobListResponse(doRPCRequest(make_shared<string>("QueryFacerecogJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryFacerecogJobListResponse Alibabacloud_Mts20140618::Client::queryFacerecogJobList(shared_ptr<QueryFacerecogJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFacerecogJobListWithOptions(request, runtime);
}

CreateInferenceServerResponse Alibabacloud_Mts20140618::Client::createInferenceServerWithOptions(shared_ptr<CreateInferenceServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateInferenceServerResponse(doRPCRequest(make_shared<string>("CreateInferenceServer"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateInferenceServerResponse Alibabacloud_Mts20140618::Client::createInferenceServer(shared_ptr<CreateInferenceServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInferenceServerWithOptions(request, runtime);
}

ReportMediaDetailJobResultResponse Alibabacloud_Mts20140618::Client::reportMediaDetailJobResultWithOptions(shared_ptr<ReportMediaDetailJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportMediaDetailJobResultResponse(doRPCRequest(make_shared<string>("ReportMediaDetailJobResult"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportMediaDetailJobResultResponse Alibabacloud_Mts20140618::Client::reportMediaDetailJobResult(shared_ptr<ReportMediaDetailJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportMediaDetailJobResultWithOptions(request, runtime);
}

SubmitAnnotationJobResponse Alibabacloud_Mts20140618::Client::submitAnnotationJobWithOptions(shared_ptr<SubmitAnnotationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitAnnotationJobResponse(doRPCRequest(make_shared<string>("SubmitAnnotationJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitAnnotationJobResponse Alibabacloud_Mts20140618::Client::submitAnnotationJob(shared_ptr<SubmitAnnotationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAnnotationJobWithOptions(request, runtime);
}

RegisterMediaDetailScenarioResponse Alibabacloud_Mts20140618::Client::registerMediaDetailScenarioWithOptions(shared_ptr<RegisterMediaDetailScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterMediaDetailScenarioResponse(doRPCRequest(make_shared<string>("RegisterMediaDetailScenario"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterMediaDetailScenarioResponse Alibabacloud_Mts20140618::Client::registerMediaDetailScenario(shared_ptr<RegisterMediaDetailScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaDetailScenarioWithOptions(request, runtime);
}

QueryVideoSplitJobListResponse Alibabacloud_Mts20140618::Client::queryVideoSplitJobListWithOptions(shared_ptr<QueryVideoSplitJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryVideoSplitJobListResponse(doRPCRequest(make_shared<string>("QueryVideoSplitJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryVideoSplitJobListResponse Alibabacloud_Mts20140618::Client::queryVideoSplitJobList(shared_ptr<QueryVideoSplitJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVideoSplitJobListWithOptions(request, runtime);
}

ReportAnnotationJobResultResponse Alibabacloud_Mts20140618::Client::reportAnnotationJobResultWithOptions(shared_ptr<ReportAnnotationJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReportAnnotationJobResultResponse(doRPCRequest(make_shared<string>("ReportAnnotationJobResult"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReportAnnotationJobResultResponse Alibabacloud_Mts20140618::Client::reportAnnotationJobResult(shared_ptr<ReportAnnotationJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportAnnotationJobResultWithOptions(request, runtime);
}

BindInputBucketResponse Alibabacloud_Mts20140618::Client::bindInputBucketWithOptions(shared_ptr<BindInputBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindInputBucketResponse(doRPCRequest(make_shared<string>("BindInputBucket"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindInputBucketResponse Alibabacloud_Mts20140618::Client::bindInputBucket(shared_ptr<BindInputBucketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindInputBucketWithOptions(request, runtime);
}

QueryPipelineListResponse Alibabacloud_Mts20140618::Client::queryPipelineListWithOptions(shared_ptr<QueryPipelineListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPipelineListResponse(doRPCRequest(make_shared<string>("QueryPipelineList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPipelineListResponse Alibabacloud_Mts20140618::Client::queryPipelineList(shared_ptr<QueryPipelineListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPipelineListWithOptions(request, runtime);
}

UpdateTemplateResponse Alibabacloud_Mts20140618::Client::updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTemplateResponse(doRPCRequest(make_shared<string>("UpdateTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTemplateResponse Alibabacloud_Mts20140618::Client::updateTemplate(shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTemplateWithOptions(request, runtime);
}

UpdateCoverPipelineResponse Alibabacloud_Mts20140618::Client::updateCoverPipelineWithOptions(shared_ptr<UpdateCoverPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCoverPipelineResponse(doRPCRequest(make_shared<string>("UpdateCoverPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCoverPipelineResponse Alibabacloud_Mts20140618::Client::updateCoverPipeline(shared_ptr<UpdateCoverPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCoverPipelineWithOptions(request, runtime);
}

UpdateTerrorismPipelineResponse Alibabacloud_Mts20140618::Client::updateTerrorismPipelineWithOptions(shared_ptr<UpdateTerrorismPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTerrorismPipelineResponse(doRPCRequest(make_shared<string>("UpdateTerrorismPipeline"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTerrorismPipelineResponse Alibabacloud_Mts20140618::Client::updateTerrorismPipeline(shared_ptr<UpdateTerrorismPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTerrorismPipelineWithOptions(request, runtime);
}

QueryInferenceJobResponse Alibabacloud_Mts20140618::Client::queryInferenceJobWithOptions(shared_ptr<QueryInferenceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryInferenceJobResponse(doRPCRequest(make_shared<string>("QueryInferenceJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryInferenceJobResponse Alibabacloud_Mts20140618::Client::queryInferenceJob(shared_ptr<QueryInferenceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInferenceJobWithOptions(request, runtime);
}

QueryVideoPoseJobListResponse Alibabacloud_Mts20140618::Client::queryVideoPoseJobListWithOptions(shared_ptr<QueryVideoPoseJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryVideoPoseJobListResponse(doRPCRequest(make_shared<string>("QueryVideoPoseJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryVideoPoseJobListResponse Alibabacloud_Mts20140618::Client::queryVideoPoseJobList(shared_ptr<QueryVideoPoseJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVideoPoseJobListWithOptions(request, runtime);
}

SubmitAnalysisJobResponse Alibabacloud_Mts20140618::Client::submitAnalysisJobWithOptions(shared_ptr<SubmitAnalysisJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitAnalysisJobResponse(doRPCRequest(make_shared<string>("SubmitAnalysisJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitAnalysisJobResponse Alibabacloud_Mts20140618::Client::submitAnalysisJob(shared_ptr<SubmitAnalysisJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAnalysisJobWithOptions(request, runtime);
}

SubmitVideoSplitJobResponse Alibabacloud_Mts20140618::Client::submitVideoSplitJobWithOptions(shared_ptr<SubmitVideoSplitJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitVideoSplitJobResponse(doRPCRequest(make_shared<string>("SubmitVideoSplitJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitVideoSplitJobResponse Alibabacloud_Mts20140618::Client::submitVideoSplitJob(shared_ptr<SubmitVideoSplitJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitVideoSplitJobWithOptions(request, runtime);
}

PlayInfoResponse Alibabacloud_Mts20140618::Client::playInfoWithOptions(shared_ptr<PlayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PlayInfoResponse(doRPCRequest(make_shared<string>("PlayInfo"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PlayInfoResponse Alibabacloud_Mts20140618::Client::playInfo(shared_ptr<PlayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return playInfoWithOptions(request, runtime);
}

SubmitSubtitleJobResponse Alibabacloud_Mts20140618::Client::submitSubtitleJobWithOptions(shared_ptr<SubmitSubtitleJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitSubtitleJobResponse(doRPCRequest(make_shared<string>("SubmitSubtitleJob"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitSubtitleJobResponse Alibabacloud_Mts20140618::Client::submitSubtitleJob(shared_ptr<SubmitSubtitleJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSubtitleJobWithOptions(request, runtime);
}

QueryCoverJobListResponse Alibabacloud_Mts20140618::Client::queryCoverJobListWithOptions(shared_ptr<QueryCoverJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCoverJobListResponse(doRPCRequest(make_shared<string>("QueryCoverJobList"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCoverJobListResponse Alibabacloud_Mts20140618::Client::queryCoverJobList(shared_ptr<QueryCoverJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCoverJobListWithOptions(request, runtime);
}

AddWaterMarkTemplateResponse Alibabacloud_Mts20140618::Client::addWaterMarkTemplateWithOptions(shared_ptr<AddWaterMarkTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddWaterMarkTemplateResponse(doRPCRequest(make_shared<string>("AddWaterMarkTemplate"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddWaterMarkTemplateResponse Alibabacloud_Mts20140618::Client::addWaterMarkTemplate(shared_ptr<AddWaterMarkTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addWaterMarkTemplateWithOptions(request, runtime);
}

PlayerAuthResponse Alibabacloud_Mts20140618::Client::playerAuthWithOptions(shared_ptr<PlayerAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PlayerAuthResponse(doRPCRequest(make_shared<string>("PlayerAuth"), make_shared<string>("2014-06-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PlayerAuthResponse Alibabacloud_Mts20140618::Client::playerAuth(shared_ptr<PlayerAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return playerAuthWithOptions(request, runtime);
}

