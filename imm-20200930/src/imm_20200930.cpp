// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/imm_20200930.hpp>
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

using namespace Alibabacloud_Imm20200930;

Alibabacloud_Imm20200930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing-gov-1", "imm-vpc.cn-beijing-gov-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("imm"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Imm20200930::Client::getEndpoint(shared_ptr<string> productId,
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

AttachOSSBucketResponse Alibabacloud_Imm20200930::Client::attachOSSBucketWithOptions(shared_ptr<AttachOSSBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->OSSBucket)) {
    query->insert(pair<string, string>("OSSBucket", *request->OSSBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachOSSBucket"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachOSSBucketResponse(callApi(params, req, runtime));
}

AttachOSSBucketResponse Alibabacloud_Imm20200930::Client::attachOSSBucket(shared_ptr<AttachOSSBucketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachOSSBucketWithOptions(request, runtime);
}

BatchDeleteFileMetaResponse Alibabacloud_Imm20200930::Client::batchDeleteFileMetaWithOptions(shared_ptr<BatchDeleteFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchDeleteFileMetaShrinkRequest> request = make_shared<BatchDeleteFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->URIs)) {
    request->URIsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->URIs, make_shared<string>("URIs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->URIsShrink)) {
    query->insert(pair<string, string>("URIs", *request->URIsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDeleteFileMetaResponse(callApi(params, req, runtime));
}

BatchDeleteFileMetaResponse Alibabacloud_Imm20200930::Client::batchDeleteFileMeta(shared_ptr<BatchDeleteFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteFileMetaWithOptions(request, runtime);
}

BatchGetFileMetaResponse Alibabacloud_Imm20200930::Client::batchGetFileMetaWithOptions(shared_ptr<BatchGetFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchGetFileMetaShrinkRequest> request = make_shared<BatchGetFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->URIs)) {
    request->URIsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->URIs, make_shared<string>("URIs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->URIsShrink)) {
    query->insert(pair<string, string>("URIs", *request->URIsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetFileMetaResponse(callApi(params, req, runtime));
}

BatchGetFileMetaResponse Alibabacloud_Imm20200930::Client::batchGetFileMeta(shared_ptr<BatchGetFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetFileMetaWithOptions(request, runtime);
}

BatchIndexFileMetaResponse Alibabacloud_Imm20200930::Client::batchIndexFileMetaWithOptions(shared_ptr<BatchIndexFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchIndexFileMetaShrinkRequest> request = make_shared<BatchIndexFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<FileForReq>>(tmpReq->files)) {
    request->filesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->files, make_shared<string>("Files"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filesShrink)) {
    query->insert(pair<string, string>("Files", *request->filesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchIndexFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchIndexFileMetaResponse(callApi(params, req, runtime));
}

BatchIndexFileMetaResponse Alibabacloud_Imm20200930::Client::batchIndexFileMeta(shared_ptr<BatchIndexFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchIndexFileMetaWithOptions(request, runtime);
}

BatchUpdateFileMetaResponse Alibabacloud_Imm20200930::Client::batchUpdateFileMetaWithOptions(shared_ptr<BatchUpdateFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchUpdateFileMetaShrinkRequest> request = make_shared<BatchUpdateFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<FileForReq>>(tmpReq->files)) {
    request->filesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->files, make_shared<string>("Files"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filesShrink)) {
    query->insert(pair<string, string>("Files", *request->filesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUpdateFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUpdateFileMetaResponse(callApi(params, req, runtime));
}

BatchUpdateFileMetaResponse Alibabacloud_Imm20200930::Client::batchUpdateFileMeta(shared_ptr<BatchUpdateFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUpdateFileMetaWithOptions(request, runtime);
}

CreateBindingResponse Alibabacloud_Imm20200930::Client::createBindingWithOptions(shared_ptr<CreateBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->URI)) {
    query->insert(pair<string, string>("URI", *request->URI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBinding"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBindingResponse(callApi(params, req, runtime));
}

CreateBindingResponse Alibabacloud_Imm20200930::Client::createBinding(shared_ptr<CreateBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBindingWithOptions(request, runtime);
}

CreateDatasetResponse Alibabacloud_Imm20200930::Client::createDatasetWithOptions(shared_ptr<CreateDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxBindCount)) {
    query->insert(pair<string, long>("DatasetMaxBindCount", *request->datasetMaxBindCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxEntityCount)) {
    query->insert(pair<string, long>("DatasetMaxEntityCount", *request->datasetMaxEntityCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxFileCount)) {
    query->insert(pair<string, long>("DatasetMaxFileCount", *request->datasetMaxFileCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxRelationCount)) {
    query->insert(pair<string, long>("DatasetMaxRelationCount", *request->datasetMaxRelationCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxTotalFileSize)) {
    query->insert(pair<string, long>("DatasetMaxTotalFileSize", *request->datasetMaxTotalFileSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataset"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDatasetResponse(callApi(params, req, runtime));
}

CreateDatasetResponse Alibabacloud_Imm20200930::Client::createDataset(shared_ptr<CreateDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDatasetWithOptions(request, runtime);
}

CreateDetectVideoLabelsTaskResponse Alibabacloud_Imm20200930::Client::createDetectVideoLabelsTaskWithOptions(shared_ptr<CreateDetectVideoLabelsTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDetectVideoLabelsTaskShrinkRequest> request = make_shared<CreateDetectVideoLabelsTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDetectVideoLabelsTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDetectVideoLabelsTaskResponse(callApi(params, req, runtime));
}

CreateDetectVideoLabelsTaskResponse Alibabacloud_Imm20200930::Client::createDetectVideoLabelsTask(shared_ptr<CreateDetectVideoLabelsTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDetectVideoLabelsTaskWithOptions(request, runtime);
}

CreateFigureClusteringTaskResponse Alibabacloud_Imm20200930::Client::createFigureClusteringTaskWithOptions(shared_ptr<CreateFigureClusteringTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateFigureClusteringTaskShrinkRequest> request = make_shared<CreateFigureClusteringTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFigureClusteringTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFigureClusteringTaskResponse(callApi(params, req, runtime));
}

CreateFigureClusteringTaskResponse Alibabacloud_Imm20200930::Client::createFigureClusteringTask(shared_ptr<CreateFigureClusteringTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFigureClusteringTaskWithOptions(request, runtime);
}

CreateFigureClustersMergingTaskResponse Alibabacloud_Imm20200930::Client::createFigureClustersMergingTaskWithOptions(shared_ptr<CreateFigureClustersMergingTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateFigureClustersMergingTaskShrinkRequest> request = make_shared<CreateFigureClustersMergingTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->from)) {
    query->insert(pair<string, string>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->to)) {
    query->insert(pair<string, string>("To", *request->to));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFigureClustersMergingTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFigureClustersMergingTaskResponse(callApi(params, req, runtime));
}

CreateFigureClustersMergingTaskResponse Alibabacloud_Imm20200930::Client::createFigureClustersMergingTask(shared_ptr<CreateFigureClustersMergingTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFigureClustersMergingTaskWithOptions(request, runtime);
}

CreateImageModerationTaskResponse Alibabacloud_Imm20200930::Client::createImageModerationTaskWithOptions(shared_ptr<CreateImageModerationTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateImageModerationTaskShrinkRequest> request = make_shared<CreateImageModerationTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->scenes)) {
    request->scenesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scenes, make_shared<string>("Scenes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxFrames)) {
    query->insert(pair<string, long>("MaxFrames", *request->maxFrames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reviewer)) {
    query->insert(pair<string, string>("Reviewer", *request->reviewer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenesShrink)) {
    query->insert(pair<string, string>("Scenes", *request->scenesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateImageModerationTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateImageModerationTaskResponse(callApi(params, req, runtime));
}

CreateImageModerationTaskResponse Alibabacloud_Imm20200930::Client::createImageModerationTask(shared_ptr<CreateImageModerationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageModerationTaskWithOptions(request, runtime);
}

CreateMediaConvertTaskResponse Alibabacloud_Imm20200930::Client::createMediaConvertTaskWithOptions(shared_ptr<CreateMediaConvertTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateMediaConvertTaskShrinkRequest> request = make_shared<CreateMediaConvertTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateMediaConvertTaskRequestSources>>(tmpReq->sources)) {
    request->sourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sources, make_shared<string>("Sources"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateMediaConvertTaskRequestTargets>>(tmpReq->targets)) {
    request->targetsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->targets, make_shared<string>("Targets"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcesShrink)) {
    query->insert(pair<string, string>("Sources", *request->sourcesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetsShrink)) {
    query->insert(pair<string, string>("Targets", *request->targetsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMediaConvertTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMediaConvertTaskResponse(callApi(params, req, runtime));
}

CreateMediaConvertTaskResponse Alibabacloud_Imm20200930::Client::createMediaConvertTask(shared_ptr<CreateMediaConvertTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMediaConvertTaskWithOptions(request, runtime);
}

CreateOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::createOfficeConversionTaskWithOptions(shared_ptr<CreateOfficeConversionTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateOfficeConversionTaskShrinkRequest> request = make_shared<CreateOfficeConversionTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TrimPolicy>(tmpReq->trimPolicy)) {
    request->trimPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->trimPolicy->toMap()), make_shared<string>("TrimPolicy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endPage)) {
    query->insert(pair<string, long>("EndPage", *request->endPage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->firstPage)) {
    query->insert(pair<string, bool>("FirstPage", *request->firstPage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fitToHeight)) {
    query->insert(pair<string, bool>("FitToHeight", *request->fitToHeight));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fitToWidth)) {
    query->insert(pair<string, bool>("FitToWidth", *request->fitToWidth));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->holdLineFeed)) {
    query->insert(pair<string, bool>("HoldLineFeed", *request->holdLineFeed));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->imageDPI)) {
    query->insert(pair<string, long>("ImageDPI", *request->imageDPI));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->longPicture)) {
    query->insert(pair<string, bool>("LongPicture", *request->longPicture));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->longText)) {
    query->insert(pair<string, bool>("LongText", *request->longText));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSheetColumn)) {
    query->insert(pair<string, long>("MaxSheetColumn", *request->maxSheetColumn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSheetRow)) {
    query->insert(pair<string, long>("MaxSheetRow", *request->maxSheetRow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pages)) {
    query->insert(pair<string, string>("Pages", *request->pages));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->paperHorizontal)) {
    query->insert(pair<string, bool>("PaperHorizontal", *request->paperHorizontal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paperSize)) {
    query->insert(pair<string, string>("PaperSize", *request->paperSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quality)) {
    query->insert(pair<string, long>("Quality", *request->quality));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scalePercentage)) {
    query->insert(pair<string, long>("ScalePercentage", *request->scalePercentage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sheetCount)) {
    query->insert(pair<string, long>("SheetCount", *request->sheetCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sheetIndex)) {
    query->insert(pair<string, long>("SheetIndex", *request->sheetIndex));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showComments)) {
    query->insert(pair<string, bool>("ShowComments", *request->showComments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startPage)) {
    query->insert(pair<string, long>("StartPage", *request->startPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetURI)) {
    query->insert(pair<string, string>("TargetURI", *request->targetURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetURIPrefix)) {
    query->insert(pair<string, string>("TargetURIPrefix", *request->targetURIPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trimPolicyShrink)) {
    query->insert(pair<string, string>("TrimPolicy", *request->trimPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOfficeConversionTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOfficeConversionTaskResponse(callApi(params, req, runtime));
}

CreateOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::createOfficeConversionTask(shared_ptr<CreateOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOfficeConversionTaskWithOptions(request, runtime);
}

CreateProjectResponse Alibabacloud_Imm20200930::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxBindCount)) {
    query->insert(pair<string, long>("DatasetMaxBindCount", *request->datasetMaxBindCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxEntityCount)) {
    query->insert(pair<string, long>("DatasetMaxEntityCount", *request->datasetMaxEntityCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxFileCount)) {
    query->insert(pair<string, long>("DatasetMaxFileCount", *request->datasetMaxFileCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxRelationCount)) {
    query->insert(pair<string, long>("DatasetMaxRelationCount", *request->datasetMaxRelationCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxTotalFileSize)) {
    query->insert(pair<string, long>("DatasetMaxTotalFileSize", *request->datasetMaxTotalFileSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->engineConcurrency)) {
    query->insert(pair<string, long>("EngineConcurrency", *request->engineConcurrency));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectMaxDatasetCount)) {
    query->insert(pair<string, long>("ProjectMaxDatasetCount", *request->projectMaxDatasetCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectQueriesPerSecond)) {
    query->insert(pair<string, long>("ProjectQueriesPerSecond", *request->projectQueriesPerSecond));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRole)) {
    query->insert(pair<string, string>("ServiceRole", *request->serviceRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProject"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectResponse(callApi(params, req, runtime));
}

CreateProjectResponse Alibabacloud_Imm20200930::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectWithOptions(request, runtime);
}

CreateStoryResponse Alibabacloud_Imm20200930::Client::createStoryWithOptions(shared_ptr<CreateStoryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateStoryShrinkRequest> request = make_shared<CreateStoryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->customLabels)) {
    request->customLabelsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customLabels, make_shared<string>("CustomLabels"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customId)) {
    body->insert(pair<string, string>("CustomId", *request->customId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customLabelsShrink)) {
    body->insert(pair<string, string>("CustomLabels", *request->customLabelsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxFileCount)) {
    body->insert(pair<string, long>("MaxFileCount", *request->maxFileCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minFileCount)) {
    body->insert(pair<string, long>("MinFileCount", *request->minFileCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    body->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    body->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    body->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storyEndTime)) {
    body->insert(pair<string, string>("StoryEndTime", *request->storyEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storyName)) {
    body->insert(pair<string, string>("StoryName", *request->storyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storyStartTime)) {
    body->insert(pair<string, string>("StoryStartTime", *request->storyStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storySubType)) {
    body->insert(pair<string, string>("StorySubType", *request->storySubType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storyType)) {
    body->insert(pair<string, string>("StoryType", *request->storyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStory"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStoryResponse(callApi(params, req, runtime));
}

CreateStoryResponse Alibabacloud_Imm20200930::Client::createStory(shared_ptr<CreateStoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStoryWithOptions(request, runtime);
}

CreateVideoModerationTaskResponse Alibabacloud_Imm20200930::Client::createVideoModerationTaskWithOptions(shared_ptr<CreateVideoModerationTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateVideoModerationTaskShrinkRequest> request = make_shared<CreateVideoModerationTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->scenes)) {
    request->scenesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scenes, make_shared<string>("Scenes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxFrames)) {
    query->insert(pair<string, long>("MaxFrames", *request->maxFrames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reviewer)) {
    query->insert(pair<string, string>("Reviewer", *request->reviewer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenesShrink)) {
    query->insert(pair<string, string>("Scenes", *request->scenesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVideoModerationTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVideoModerationTaskResponse(callApi(params, req, runtime));
}

CreateVideoModerationTaskResponse Alibabacloud_Imm20200930::Client::createVideoModerationTask(shared_ptr<CreateVideoModerationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVideoModerationTaskWithOptions(request, runtime);
}

DeleteBindingResponse Alibabacloud_Imm20200930::Client::deleteBindingWithOptions(shared_ptr<DeleteBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->cleanup)) {
    query->insert(pair<string, bool>("Cleanup", *request->cleanup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->URI)) {
    query->insert(pair<string, string>("URI", *request->URI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBinding"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBindingResponse(callApi(params, req, runtime));
}

DeleteBindingResponse Alibabacloud_Imm20200930::Client::deleteBinding(shared_ptr<DeleteBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBindingWithOptions(request, runtime);
}

DeleteDatasetResponse Alibabacloud_Imm20200930::Client::deleteDatasetWithOptions(shared_ptr<DeleteDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataset"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDatasetResponse(callApi(params, req, runtime));
}

DeleteDatasetResponse Alibabacloud_Imm20200930::Client::deleteDataset(shared_ptr<DeleteDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDatasetWithOptions(request, runtime);
}

DeleteFileMetaResponse Alibabacloud_Imm20200930::Client::deleteFileMetaWithOptions(shared_ptr<DeleteFileMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->URI)) {
    query->insert(pair<string, string>("URI", *request->URI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFileMetaResponse(callApi(params, req, runtime));
}

DeleteFileMetaResponse Alibabacloud_Imm20200930::Client::deleteFileMeta(shared_ptr<DeleteFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFileMetaWithOptions(request, runtime);
}

DeleteProjectResponse Alibabacloud_Imm20200930::Client::deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProject"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProjectResponse(callApi(params, req, runtime));
}

DeleteProjectResponse Alibabacloud_Imm20200930::Client::deleteProject(shared_ptr<DeleteProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectWithOptions(request, runtime);
}

DeleteStoryResponse Alibabacloud_Imm20200930::Client::deleteStoryWithOptions(shared_ptr<DeleteStoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    query->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStory"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteStoryResponse(callApi(params, req, runtime));
}

DeleteStoryResponse Alibabacloud_Imm20200930::Client::deleteStory(shared_ptr<DeleteStoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStoryWithOptions(request, runtime);
}

DetachOSSBucketResponse Alibabacloud_Imm20200930::Client::detachOSSBucketWithOptions(shared_ptr<DetachOSSBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->OSSBucket)) {
    query->insert(pair<string, string>("OSSBucket", *request->OSSBucket));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachOSSBucket"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachOSSBucketResponse(callApi(params, req, runtime));
}

DetachOSSBucketResponse Alibabacloud_Imm20200930::Client::detachOSSBucket(shared_ptr<DetachOSSBucketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachOSSBucketWithOptions(request, runtime);
}

DetectImageCroppingResponse Alibabacloud_Imm20200930::Client::detectImageCroppingWithOptions(shared_ptr<DetectImageCroppingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetectImageCroppingShrinkRequest> request = make_shared<DetectImageCroppingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aspectRatios)) {
    query->insert(pair<string, string>("AspectRatios", *request->aspectRatios));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectImageCropping"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageCroppingResponse(callApi(params, req, runtime));
}

DetectImageCroppingResponse Alibabacloud_Imm20200930::Client::detectImageCropping(shared_ptr<DetectImageCroppingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageCroppingWithOptions(request, runtime);
}

DetectImageFacesResponse Alibabacloud_Imm20200930::Client::detectImageFacesWithOptions(shared_ptr<DetectImageFacesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetectImageFacesShrinkRequest> request = make_shared<DetectImageFacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectImageFaces"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageFacesResponse(callApi(params, req, runtime));
}

DetectImageFacesResponse Alibabacloud_Imm20200930::Client::detectImageFaces(shared_ptr<DetectImageFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageFacesWithOptions(request, runtime);
}

DetectImageLabelsResponse Alibabacloud_Imm20200930::Client::detectImageLabelsWithOptions(shared_ptr<DetectImageLabelsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetectImageLabelsShrinkRequest> request = make_shared<DetectImageLabelsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    query->insert(pair<string, double>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectImageLabels"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageLabelsResponse(callApi(params, req, runtime));
}

DetectImageLabelsResponse Alibabacloud_Imm20200930::Client::detectImageLabels(shared_ptr<DetectImageLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageLabelsWithOptions(request, runtime);
}

DetectImageScoreResponse Alibabacloud_Imm20200930::Client::detectImageScoreWithOptions(shared_ptr<DetectImageScoreRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetectImageScoreShrinkRequest> request = make_shared<DetectImageScoreShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectImageScore"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageScoreResponse(callApi(params, req, runtime));
}

DetectImageScoreResponse Alibabacloud_Imm20200930::Client::detectImageScore(shared_ptr<DetectImageScoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageScoreWithOptions(request, runtime);
}

DetectTextAnomalyResponse Alibabacloud_Imm20200930::Client::detectTextAnomalyWithOptions(shared_ptr<DetectTextAnomalyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectTextAnomaly"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectTextAnomalyResponse(callApi(params, req, runtime));
}

DetectTextAnomalyResponse Alibabacloud_Imm20200930::Client::detectTextAnomaly(shared_ptr<DetectTextAnomalyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectTextAnomalyWithOptions(request, runtime);
}

FuzzyQueryResponse Alibabacloud_Imm20200930::Client::fuzzyQueryWithOptions(shared_ptr<FuzzyQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FuzzyQuery"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FuzzyQueryResponse(callApi(params, req, runtime));
}

FuzzyQueryResponse Alibabacloud_Imm20200930::Client::fuzzyQuery(shared_ptr<FuzzyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fuzzyQueryWithOptions(request, runtime);
}

GetBindingResponse Alibabacloud_Imm20200930::Client::getBindingWithOptions(shared_ptr<GetBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->URI)) {
    query->insert(pair<string, string>("URI", *request->URI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBinding"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBindingResponse(callApi(params, req, runtime));
}

GetBindingResponse Alibabacloud_Imm20200930::Client::getBinding(shared_ptr<GetBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBindingWithOptions(request, runtime);
}

GetDatasetResponse Alibabacloud_Imm20200930::Client::getDatasetWithOptions(shared_ptr<GetDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withStatistics)) {
    query->insert(pair<string, bool>("WithStatistics", *request->withStatistics));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataset"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatasetResponse(callApi(params, req, runtime));
}

GetDatasetResponse Alibabacloud_Imm20200930::Client::getDataset(shared_ptr<GetDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDatasetWithOptions(request, runtime);
}

GetDetectVideoLabelsResultResponse Alibabacloud_Imm20200930::Client::getDetectVideoLabelsResultWithOptions(shared_ptr<GetDetectVideoLabelsResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDetectVideoLabelsResult"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDetectVideoLabelsResultResponse(callApi(params, req, runtime));
}

GetDetectVideoLabelsResultResponse Alibabacloud_Imm20200930::Client::getDetectVideoLabelsResult(shared_ptr<GetDetectVideoLabelsResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDetectVideoLabelsResultWithOptions(request, runtime);
}

GetFigureClusterResponse Alibabacloud_Imm20200930::Client::getFigureClusterWithOptions(shared_ptr<GetFigureClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    query->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFigureCluster"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFigureClusterResponse(callApi(params, req, runtime));
}

GetFigureClusterResponse Alibabacloud_Imm20200930::Client::getFigureCluster(shared_ptr<GetFigureClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFigureClusterWithOptions(request, runtime);
}

GetFileMetaResponse Alibabacloud_Imm20200930::Client::getFileMetaWithOptions(shared_ptr<GetFileMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->URI)) {
    query->insert(pair<string, string>("URI", *request->URI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileMetaResponse(callApi(params, req, runtime));
}

GetFileMetaResponse Alibabacloud_Imm20200930::Client::getFileMeta(shared_ptr<GetFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileMetaWithOptions(request, runtime);
}

GetMediaMetaResponse Alibabacloud_Imm20200930::Client::getMediaMetaWithOptions(shared_ptr<GetMediaMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetMediaMetaShrinkRequest> request = make_shared<GetMediaMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaMetaResponse(callApi(params, req, runtime));
}

GetMediaMetaResponse Alibabacloud_Imm20200930::Client::getMediaMeta(shared_ptr<GetMediaMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaMetaWithOptions(request, runtime);
}

GetOSSBucketAttachmentResponse Alibabacloud_Imm20200930::Client::getOSSBucketAttachmentWithOptions(shared_ptr<GetOSSBucketAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->OSSBucket)) {
    query->insert(pair<string, string>("OSSBucket", *request->OSSBucket));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOSSBucketAttachment"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOSSBucketAttachmentResponse(callApi(params, req, runtime));
}

GetOSSBucketAttachmentResponse Alibabacloud_Imm20200930::Client::getOSSBucketAttachment(shared_ptr<GetOSSBucketAttachmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOSSBucketAttachmentWithOptions(request, runtime);
}

GetProjectResponse Alibabacloud_Imm20200930::Client::getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withStatistics)) {
    query->insert(pair<string, bool>("WithStatistics", *request->withStatistics));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProject"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectResponse(callApi(params, req, runtime));
}

GetProjectResponse Alibabacloud_Imm20200930::Client::getProject(shared_ptr<GetProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectWithOptions(request, runtime);
}

GetStoryResponse Alibabacloud_Imm20200930::Client::getStoryWithOptions(shared_ptr<GetStoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    query->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStory"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStoryResponse(callApi(params, req, runtime));
}

GetStoryResponse Alibabacloud_Imm20200930::Client::getStory(shared_ptr<GetStoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStoryWithOptions(request, runtime);
}

GetTaskResponse Alibabacloud_Imm20200930::Client::getTaskWithOptions(shared_ptr<GetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskResponse(callApi(params, req, runtime));
}

GetTaskResponse Alibabacloud_Imm20200930::Client::getTask(shared_ptr<GetTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskWithOptions(request, runtime);
}

GetWebofficeURLResponse Alibabacloud_Imm20200930::Client::getWebofficeURLWithOptions(shared_ptr<GetWebofficeURLRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetWebofficeURLShrinkRequest> request = make_shared<GetWebofficeURLShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<WebofficePermission>(tmpReq->permission)) {
    request->permissionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->permission->toMap()), make_shared<string>("Permission"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<WebofficeUser>(tmpReq->user)) {
    request->userShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->user->toMap()), make_shared<string>("User"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<WebofficeWatermark>(tmpReq->watermark)) {
    request->watermarkShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->watermark->toMap()), make_shared<string>("Watermark"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->cachePreview)) {
    query->insert(pair<string, bool>("CachePreview", *request->cachePreview));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->externalUploaded)) {
    query->insert(pair<string, bool>("ExternalUploaded", *request->externalUploaded));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filename)) {
    query->insert(pair<string, string>("Filename", *request->filename));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hidecmb)) {
    query->insert(pair<string, bool>("Hidecmb", *request->hidecmb));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionShrink)) {
    query->insert(pair<string, string>("Permission", *request->permissionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->previewPages)) {
    query->insert(pair<string, long>("PreviewPages", *request->previewPages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referer)) {
    query->insert(pair<string, string>("Referer", *request->referer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceURI)) {
    query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userShrink)) {
    query->insert(pair<string, string>("User", *request->userShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkShrink)) {
    query->insert(pair<string, string>("Watermark", *request->watermarkShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebofficeURL"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWebofficeURLResponse(callApi(params, req, runtime));
}

GetWebofficeURLResponse Alibabacloud_Imm20200930::Client::getWebofficeURL(shared_ptr<GetWebofficeURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWebofficeURLWithOptions(request, runtime);
}

IndexFileMetaResponse Alibabacloud_Imm20200930::Client::indexFileMetaWithOptions(shared_ptr<IndexFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IndexFileMetaShrinkRequest> request = make_shared<IndexFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<FileForReq>(tmpReq->file)) {
    request->fileShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->file->toMap()), make_shared<string>("File"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileShrink)) {
    query->insert(pair<string, string>("File", *request->fileShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IndexFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IndexFileMetaResponse(callApi(params, req, runtime));
}

IndexFileMetaResponse Alibabacloud_Imm20200930::Client::indexFileMeta(shared_ptr<IndexFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return indexFileMetaWithOptions(request, runtime);
}

ListBindingsResponse Alibabacloud_Imm20200930::Client::listBindingsWithOptions(shared_ptr<ListBindingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBindings"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBindingsResponse(callApi(params, req, runtime));
}

ListBindingsResponse Alibabacloud_Imm20200930::Client::listBindings(shared_ptr<ListBindingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBindingsWithOptions(request, runtime);
}

ListDatasetsResponse Alibabacloud_Imm20200930::Client::listDatasetsWithOptions(shared_ptr<ListDatasetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("Prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatasets"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatasetsResponse(callApi(params, req, runtime));
}

ListDatasetsResponse Alibabacloud_Imm20200930::Client::listDatasets(shared_ptr<ListDatasetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatasetsWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_Imm20200930::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("Prefix", *request->prefix));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectsResponse(callApi(params, req, runtime));
}

ListProjectsResponse Alibabacloud_Imm20200930::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(request, runtime);
}

ListTasksResponse Alibabacloud_Imm20200930::Client::listTasksWithOptions(shared_ptr<ListTasksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTasksShrinkRequest> request = make_shared<ListTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->endTimeRange)) {
    request->endTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->endTimeRange->toMap()), make_shared<string>("EndTimeRange"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->startTimeRange)) {
    request->startTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->startTimeRange->toMap()), make_shared<string>("StartTimeRange"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->taskTypes)) {
    request->taskTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskTypes, make_shared<string>("TaskTypes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimeRangeShrink)) {
    query->insert(pair<string, string>("EndTimeRange", *request->endTimeRangeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimeRangeShrink)) {
    query->insert(pair<string, string>("StartTimeRange", *request->startTimeRangeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagSelector)) {
    query->insert(pair<string, string>("TagSelector", *request->tagSelector));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskTypesShrink)) {
    query->insert(pair<string, string>("TaskTypes", *request->taskTypesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTasks"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTasksResponse(callApi(params, req, runtime));
}

ListTasksResponse Alibabacloud_Imm20200930::Client::listTasks(shared_ptr<ListTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTasksWithOptions(request, runtime);
}

MergeFigureClustersResponse Alibabacloud_Imm20200930::Client::mergeFigureClustersWithOptions(shared_ptr<MergeFigureClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIdFrom)) {
    query->insert(pair<string, string>("ClusterIdFrom", *request->clusterIdFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIdTo)) {
    query->insert(pair<string, string>("ClusterIdTo", *request->clusterIdTo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customMessage)) {
    query->insert(pair<string, string>("CustomMessage", *request->customMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->figureType)) {
    query->insert(pair<string, string>("FigureType", *request->figureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicEndpoint)) {
    query->insert(pair<string, string>("NotifyTopicEndpoint", *request->notifyTopicEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MergeFigureClusters"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MergeFigureClustersResponse(callApi(params, req, runtime));
}

MergeFigureClustersResponse Alibabacloud_Imm20200930::Client::mergeFigureClusters(shared_ptr<MergeFigureClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mergeFigureClustersWithOptions(request, runtime);
}

QueryFigureClustersResponse Alibabacloud_Imm20200930::Client::queryFigureClustersWithOptions(shared_ptr<QueryFigureClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customLabels)) {
    query->insert(pair<string, string>("CustomLabels", *request->customLabels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFigureClusters"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFigureClustersResponse(callApi(params, req, runtime));
}

QueryFigureClustersResponse Alibabacloud_Imm20200930::Client::queryFigureClusters(shared_ptr<QueryFigureClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFigureClustersWithOptions(request, runtime);
}

QueryStoriesResponse Alibabacloud_Imm20200930::Client::queryStoriesWithOptions(shared_ptr<QueryStoriesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryStoriesShrinkRequest> request = make_shared<QueryStoriesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->createTimeRange)) {
    request->createTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->createTimeRange->toMap()), make_shared<string>("CreateTimeRange"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->figureClusterIds)) {
    request->figureClusterIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->figureClusterIds, make_shared<string>("FigureClusterIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->storyEndTimeRange)) {
    request->storyEndTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->storyEndTimeRange->toMap()), make_shared<string>("StoryEndTimeRange"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRange>(tmpReq->storyStartTimeRange)) {
    request->storyStartTimeRangeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->storyStartTimeRange->toMap()), make_shared<string>("StoryStartTimeRange"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeRangeShrink)) {
    query->insert(pair<string, string>("CreateTimeRange", *request->createTimeRangeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customLabels)) {
    query->insert(pair<string, string>("CustomLabels", *request->customLabels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->figureClusterIdsShrink)) {
    query->insert(pair<string, string>("FigureClusterIds", *request->figureClusterIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    query->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storyEndTimeRangeShrink)) {
    query->insert(pair<string, string>("StoryEndTimeRange", *request->storyEndTimeRangeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storyName)) {
    query->insert(pair<string, string>("StoryName", *request->storyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storyStartTimeRangeShrink)) {
    query->insert(pair<string, string>("StoryStartTimeRange", *request->storyStartTimeRangeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storySubType)) {
    query->insert(pair<string, string>("StorySubType", *request->storySubType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storyType)) {
    query->insert(pair<string, string>("StoryType", *request->storyType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withEmptyStories)) {
    query->insert(pair<string, bool>("WithEmptyStories", *request->withEmptyStories));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryStories"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryStoriesResponse(callApi(params, req, runtime));
}

QueryStoriesResponse Alibabacloud_Imm20200930::Client::queryStories(shared_ptr<QueryStoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryStoriesWithOptions(request, runtime);
}

RefreshWebofficeTokenResponse Alibabacloud_Imm20200930::Client::refreshWebofficeTokenWithOptions(shared_ptr<RefreshWebofficeTokenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RefreshWebofficeTokenShrinkRequest> request = make_shared<RefreshWebofficeTokenShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CredentialConfig>(tmpReq->credentialConfig)) {
    request->credentialConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->credentialConfig->toMap()), make_shared<string>("CredentialConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialConfigShrink)) {
    query->insert(pair<string, string>("CredentialConfig", *request->credentialConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refreshToken)) {
    query->insert(pair<string, string>("RefreshToken", *request->refreshToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshWebofficeToken"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshWebofficeTokenResponse(callApi(params, req, runtime));
}

RefreshWebofficeTokenResponse Alibabacloud_Imm20200930::Client::refreshWebofficeToken(shared_ptr<RefreshWebofficeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshWebofficeTokenWithOptions(request, runtime);
}

ResumeBindingResponse Alibabacloud_Imm20200930::Client::resumeBindingWithOptions(shared_ptr<ResumeBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->URI)) {
    query->insert(pair<string, string>("URI", *request->URI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeBinding"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeBindingResponse(callApi(params, req, runtime));
}

ResumeBindingResponse Alibabacloud_Imm20200930::Client::resumeBinding(shared_ptr<ResumeBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeBindingWithOptions(request, runtime);
}

SemanticQueryResponse Alibabacloud_Imm20200930::Client::semanticQueryWithOptions(shared_ptr<SemanticQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SemanticQuery"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SemanticQueryResponse(callApi(params, req, runtime));
}

SemanticQueryResponse Alibabacloud_Imm20200930::Client::semanticQuery(shared_ptr<SemanticQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return semanticQueryWithOptions(request, runtime);
}

SimpleQueryResponse Alibabacloud_Imm20200930::Client::simpleQueryWithOptions(shared_ptr<SimpleQueryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SimpleQueryShrinkRequest> request = make_shared<SimpleQueryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SimpleQueryRequestAggregations>>(tmpReq->aggregations)) {
    request->aggregationsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->aggregations, make_shared<string>("Aggregations"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SimpleQuery>(tmpReq->query)) {
    request->queryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->query->toMap()), make_shared<string>("Query"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->withFields)) {
    request->withFieldsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->withFields, make_shared<string>("WithFields"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aggregationsShrink)) {
    query->insert(pair<string, string>("Aggregations", *request->aggregationsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryShrink)) {
    query->insert(pair<string, string>("Query", *request->queryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->withFieldsShrink)) {
    query->insert(pair<string, string>("WithFields", *request->withFieldsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SimpleQuery"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SimpleQueryResponse(callApi(params, req, runtime));
}

SimpleQueryResponse Alibabacloud_Imm20200930::Client::simpleQuery(shared_ptr<SimpleQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return simpleQueryWithOptions(request, runtime);
}

StopBindingResponse Alibabacloud_Imm20200930::Client::stopBindingWithOptions(shared_ptr<StopBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    query->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->URI)) {
    query->insert(pair<string, string>("URI", *request->URI));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopBinding"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopBindingResponse(callApi(params, req, runtime));
}

StopBindingResponse Alibabacloud_Imm20200930::Client::stopBinding(shared_ptr<StopBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopBindingWithOptions(request, runtime);
}

UpdateDatasetResponse Alibabacloud_Imm20200930::Client::updateDatasetWithOptions(shared_ptr<UpdateDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxBindCount)) {
    query->insert(pair<string, long>("DatasetMaxBindCount", *request->datasetMaxBindCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxEntityCount)) {
    query->insert(pair<string, long>("DatasetMaxEntityCount", *request->datasetMaxEntityCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxFileCount)) {
    query->insert(pair<string, long>("DatasetMaxFileCount", *request->datasetMaxFileCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxRelationCount)) {
    query->insert(pair<string, long>("DatasetMaxRelationCount", *request->datasetMaxRelationCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxTotalFileSize)) {
    query->insert(pair<string, long>("DatasetMaxTotalFileSize", *request->datasetMaxTotalFileSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataset"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDatasetResponse(callApi(params, req, runtime));
}

UpdateDatasetResponse Alibabacloud_Imm20200930::Client::updateDataset(shared_ptr<UpdateDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDatasetWithOptions(request, runtime);
}

UpdateFigureClusterResponse Alibabacloud_Imm20200930::Client::updateFigureClusterWithOptions(shared_ptr<UpdateFigureClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateFigureClusterShrinkRequest> request = make_shared<UpdateFigureClusterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<FigureClusterForReq>(tmpReq->figureCluster)) {
    request->figureClusterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->figureCluster->toMap()), make_shared<string>("FigureCluster"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->figureClusterShrink)) {
    query->insert(pair<string, string>("FigureCluster", *request->figureClusterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFigureCluster"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFigureClusterResponse(callApi(params, req, runtime));
}

UpdateFigureClusterResponse Alibabacloud_Imm20200930::Client::updateFigureCluster(shared_ptr<UpdateFigureClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFigureClusterWithOptions(request, runtime);
}

UpdateFileMetaResponse Alibabacloud_Imm20200930::Client::updateFileMetaWithOptions(shared_ptr<UpdateFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateFileMetaShrinkRequest> request = make_shared<UpdateFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<FileForReq>(tmpReq->file)) {
    request->fileShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->file->toMap()), make_shared<string>("File"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    query->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileShrink)) {
    query->insert(pair<string, string>("File", *request->fileShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFileMetaResponse(callApi(params, req, runtime));
}

UpdateFileMetaResponse Alibabacloud_Imm20200930::Client::updateFileMeta(shared_ptr<UpdateFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFileMetaWithOptions(request, runtime);
}

UpdateProjectResponse Alibabacloud_Imm20200930::Client::updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxBindCount)) {
    query->insert(pair<string, long>("DatasetMaxBindCount", *request->datasetMaxBindCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxEntityCount)) {
    query->insert(pair<string, long>("DatasetMaxEntityCount", *request->datasetMaxEntityCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxFileCount)) {
    query->insert(pair<string, long>("DatasetMaxFileCount", *request->datasetMaxFileCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxRelationCount)) {
    query->insert(pair<string, long>("DatasetMaxRelationCount", *request->datasetMaxRelationCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetMaxTotalFileSize)) {
    query->insert(pair<string, long>("DatasetMaxTotalFileSize", *request->datasetMaxTotalFileSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->engineConcurrency)) {
    query->insert(pair<string, long>("EngineConcurrency", *request->engineConcurrency));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectMaxDatasetCount)) {
    query->insert(pair<string, long>("ProjectMaxDatasetCount", *request->projectMaxDatasetCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectQueriesPerSecond)) {
    query->insert(pair<string, long>("ProjectQueriesPerSecond", *request->projectQueriesPerSecond));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRole)) {
    query->insert(pair<string, string>("ServiceRole", *request->serviceRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProject"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectResponse(callApi(params, req, runtime));
}

UpdateProjectResponse Alibabacloud_Imm20200930::Client::updateProject(shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectWithOptions(request, runtime);
}

UpdateStoryResponse Alibabacloud_Imm20200930::Client::updateStoryWithOptions(shared_ptr<UpdateStoryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateStoryShrinkRequest> request = make_shared<UpdateStoryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->customLabels)) {
    request->customLabelsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customLabels, make_shared<string>("CustomLabels"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customId)) {
    body->insert(pair<string, string>("CustomId", *request->customId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customLabelsShrink)) {
    body->insert(pair<string, string>("CustomLabels", *request->customLabelsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    body->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storyName)) {
    body->insert(pair<string, string>("StoryName", *request->storyName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStory"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStoryResponse(callApi(params, req, runtime));
}

UpdateStoryResponse Alibabacloud_Imm20200930::Client::updateStory(shared_ptr<UpdateStoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStoryWithOptions(request, runtime);
}

