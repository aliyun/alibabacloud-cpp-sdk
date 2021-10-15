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

BatchDeleteFileMetaResponse Alibabacloud_Imm20200930::Client::batchDeleteFileMetaWithOptions(shared_ptr<BatchDeleteFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchDeleteFileMetaShrinkRequest> request = make_shared<BatchDeleteFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->URIs)) {
    request->URIsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->URIs, make_shared<string>("URIs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("URIs", *request->URIsShrink));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("URIs", *request->URIsShrink));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("Files", *request->filesShrink));
  query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchIndexFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("Files", *request->filesShrink));
  query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUpdateFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("URI", *request->URI));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBinding"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, long>("DatasetMaxBindCount", *request->datasetMaxBindCount));
  query->insert(pair<string, long>("DatasetMaxEntityCount", *request->datasetMaxEntityCount));
  query->insert(pair<string, long>("DatasetMaxFileCount", *request->datasetMaxFileCount));
  query->insert(pair<string, long>("DatasetMaxRelationCount", *request->datasetMaxRelationCount));
  query->insert(pair<string, long>("DatasetMaxTotalFileSize", *request->datasetMaxTotalFileSize));
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataset"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDatasetResponse(callApi(params, req, runtime));
}

CreateDatasetResponse Alibabacloud_Imm20200930::Client::createDataset(shared_ptr<CreateDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDatasetWithOptions(request, runtime);
}

CreateOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::createOfficeConversionTaskWithOptions(shared_ptr<CreateOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("EndPage", *request->endPage));
  query->insert(pair<string, bool>("FirstPage", *request->firstPage));
  query->insert(pair<string, bool>("FitToHeight", *request->fitToHeight));
  query->insert(pair<string, bool>("FitToWidth", *request->fitToWidth));
  query->insert(pair<string, bool>("IsHorizontal", *request->isHorizontal));
  query->insert(pair<string, bool>("LongPic", *request->longPic));
  query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  query->insert(pair<string, string>("PaperSize", *request->paperSize));
  query->insert(pair<string, string>("Password", *request->password));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, long>("Quality", *request->quality));
  query->insert(pair<string, long>("Scale", *request->scale));
  query->insert(pair<string, string>("SheetCount", *request->sheetCount));
  query->insert(pair<string, long>("SheetIndex", *request->sheetIndex));
  query->insert(pair<string, bool>("ShowComments", *request->showComments));
  query->insert(pair<string, string>("SourceType", *request->sourceType));
  query->insert(pair<string, string>("SourceUri", *request->sourceUri));
  query->insert(pair<string, string>("StartPage", *request->startPage));
  query->insert(pair<string, string>("TargetType", *request->targetType));
  query->insert(pair<string, string>("TargetUri", *request->targetUri));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOfficeConversionTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, long>("DatasetMaxBindCount", *request->datasetMaxBindCount));
  query->insert(pair<string, long>("DatasetMaxEntityCount", *request->datasetMaxEntityCount));
  query->insert(pair<string, long>("DatasetMaxFileCount", *request->datasetMaxFileCount));
  query->insert(pair<string, long>("DatasetMaxRelationCount", *request->datasetMaxRelationCount));
  query->insert(pair<string, long>("DatasetMaxTotalFileSize", *request->datasetMaxTotalFileSize));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, long>("EngineConcurrency", *request->engineConcurrency));
  query->insert(pair<string, long>("ProjectMaxDatasetCount", *request->projectMaxDatasetCount));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, long>("ProjectQueriesPerSecond", *request->projectQueriesPerSecond));
  query->insert(pair<string, string>("ServiceRole", *request->serviceRole));
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProject"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectResponse(callApi(params, req, runtime));
}

CreateProjectResponse Alibabacloud_Imm20200930::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectWithOptions(request, runtime);
}

DeleteBindingResponse Alibabacloud_Imm20200930::Client::deleteBindingWithOptions(shared_ptr<DeleteBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("URI", *request->URI));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBinding"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataset"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("URI", *request->URI));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProject"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProjectResponse(callApi(params, req, runtime));
}

DeleteProjectResponse Alibabacloud_Imm20200930::Client::deleteProject(shared_ptr<DeleteProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectWithOptions(request, runtime);
}

DetectImageLabelsResponse Alibabacloud_Imm20200930::Client::detectImageLabelsWithOptions(shared_ptr<DetectImageLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  query->insert(pair<string, double>("Threshold", *request->threshold));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectImageLabels"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageLabelsResponse(callApi(params, req, runtime));
}

DetectImageLabelsResponse Alibabacloud_Imm20200930::Client::detectImageLabels(shared_ptr<DetectImageLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageLabelsWithOptions(request, runtime);
}

FuzzyQueryResponse Alibabacloud_Imm20200930::Client::fuzzyQueryWithOptions(shared_ptr<FuzzyQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("Query", *request->query));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FuzzyQuery"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("URI", *request->URI));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBinding"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, bool>("WithStatistics", *request->withStatistics));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataset"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatasetResponse(callApi(params, req, runtime));
}

GetDatasetResponse Alibabacloud_Imm20200930::Client::getDataset(shared_ptr<GetDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDatasetWithOptions(request, runtime);
}

GetFileMetaResponse Alibabacloud_Imm20200930::Client::getFileMetaWithOptions(shared_ptr<GetFileMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("URI", *request->URI));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileMetaResponse(callApi(params, req, runtime));
}

GetFileMetaResponse Alibabacloud_Imm20200930::Client::getFileMeta(shared_ptr<GetFileMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileMetaWithOptions(request, runtime);
}

GetFileSignedURIResponse Alibabacloud_Imm20200930::Client::getFileSignedURIWithOptions(shared_ptr<GetFileSignedURIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("URI", *request->URI));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileSignedURI"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileSignedURIResponse(callApi(params, req, runtime));
}

GetFileSignedURIResponse Alibabacloud_Imm20200930::Client::getFileSignedURI(shared_ptr<GetFileSignedURIRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileSignedURIWithOptions(request, runtime);
}

GetOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::getOfficeConversionTaskWithOptions(shared_ptr<GetOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("TaskId", *request->taskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOfficeConversionTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOfficeConversionTaskResponse(callApi(params, req, runtime));
}

GetOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::getOfficeConversionTask(shared_ptr<GetOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOfficeConversionTaskWithOptions(request, runtime);
}

GetProjectResponse Alibabacloud_Imm20200930::Client::getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, bool>("WithStatistics", *request->withStatistics));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProject"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectResponse(callApi(params, req, runtime));
}

GetProjectResponse Alibabacloud_Imm20200930::Client::getProject(shared_ptr<GetProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectWithOptions(request, runtime);
}

GetWebofficeURLResponse Alibabacloud_Imm20200930::Client::getWebofficeURLWithOptions(shared_ptr<GetWebofficeURLRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetWebofficeURLShrinkRequest> request = make_shared<GetWebofficeURLShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AssumeRoleChain>(tmpReq->assumeRoleChain)) {
    request->assumeRoleChainShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->assumeRoleChain->toMap()), make_shared<string>("AssumeRoleChain"), make_shared<string>("json")));
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
  query->insert(pair<string, string>("AssumeRoleChain", *request->assumeRoleChainShrink));
  query->insert(pair<string, bool>("ExternalUploaded", *request->externalUploaded));
  query->insert(pair<string, string>("Filename", *request->filename));
  query->insert(pair<string, bool>("Hidecmb", *request->hidecmb));
  query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  query->insert(pair<string, string>("Password", *request->password));
  query->insert(pair<string, string>("Permission", *request->permissionShrink));
  query->insert(pair<string, long>("PreviewPages", *request->previewPages));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("Referer", *request->referer));
  query->insert(pair<string, string>("SourceURI", *request->sourceURI));
  query->insert(pair<string, string>("User", *request->userShrink));
  query->insert(pair<string, string>("UserData", *request->userData));
  query->insert(pair<string, string>("Watermark", *request->watermarkShrink));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebofficeURL"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("File", *request->fileShrink));
  query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IndexFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBindings"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("Prefix", *request->prefix));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatasets"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatasetsResponse(callApi(params, req, runtime));
}

ListDatasetsResponse Alibabacloud_Imm20200930::Client::listDatasets(shared_ptr<ListDatasetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatasetsWithOptions(request, runtime);
}

ListOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::listOfficeConversionTaskWithOptions(shared_ptr<ListOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOfficeConversionTask"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOfficeConversionTaskResponse(callApi(params, req, runtime));
}

ListOfficeConversionTaskResponse Alibabacloud_Imm20200930::Client::listOfficeConversionTask(shared_ptr<ListOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOfficeConversionTaskWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_Imm20200930::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("Prefix", *request->prefix));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectsResponse(callApi(params, req, runtime));
}

ListProjectsResponse Alibabacloud_Imm20200930::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(request, runtime);
}

RefreshWebofficeTokenResponse Alibabacloud_Imm20200930::Client::refreshWebofficeTokenWithOptions(shared_ptr<RefreshWebofficeTokenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RefreshWebofficeTokenShrinkRequest> request = make_shared<RefreshWebofficeTokenShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AssumeRoleChain>(tmpReq->assumeRoleChain)) {
    request->assumeRoleChainShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->assumeRoleChain->toMap()), make_shared<string>("AssumeRoleChain"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AccessToken", *request->accessToken));
  query->insert(pair<string, string>("AssumeRoleChain", *request->assumeRoleChainShrink));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("RefreshToken", *request->refreshToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshWebofficeToken"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("URI", *request->URI));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeBinding"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeBindingResponse(callApi(params, req, runtime));
}

ResumeBindingResponse Alibabacloud_Imm20200930::Client::resumeBinding(shared_ptr<ResumeBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeBindingWithOptions(request, runtime);
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
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Aggregations", *request->aggregationsShrink));
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("Order", *request->order));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("Query", *request->queryShrink));
  query->insert(pair<string, string>("Sort", *request->sort));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SimpleQuery"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("Reason", *request->reason));
  query->insert(pair<string, string>("URI", *request->URI));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopBinding"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, long>("DatasetMaxBindCount", *request->datasetMaxBindCount));
  query->insert(pair<string, long>("DatasetMaxEntityCount", *request->datasetMaxEntityCount));
  query->insert(pair<string, long>("DatasetMaxFileCount", *request->datasetMaxFileCount));
  query->insert(pair<string, long>("DatasetMaxRelationCount", *request->datasetMaxRelationCount));
  query->insert(pair<string, long>("DatasetMaxTotalFileSize", *request->datasetMaxTotalFileSize));
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataset"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDatasetResponse(callApi(params, req, runtime));
}

UpdateDatasetResponse Alibabacloud_Imm20200930::Client::updateDataset(shared_ptr<UpdateDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDatasetWithOptions(request, runtime);
}

UpdateFileMetaResponse Alibabacloud_Imm20200930::Client::updateFileMetaWithOptions(shared_ptr<UpdateFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateFileMetaShrinkRequest> request = make_shared<UpdateFileMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<FileForReq>(tmpReq->file)) {
    request->fileShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->file->toMap()), make_shared<string>("File"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DatasetName", *request->datasetName));
  query->insert(pair<string, string>("File", *request->fileShrink));
  query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFileMeta"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
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
  query->insert(pair<string, long>("DatasetMaxBindCount", *request->datasetMaxBindCount));
  query->insert(pair<string, long>("DatasetMaxEntityCount", *request->datasetMaxEntityCount));
  query->insert(pair<string, long>("DatasetMaxFileCount", *request->datasetMaxFileCount));
  query->insert(pair<string, long>("DatasetMaxRelationCount", *request->datasetMaxRelationCount));
  query->insert(pair<string, long>("DatasetMaxTotalFileSize", *request->datasetMaxTotalFileSize));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, long>("EngineConcurrency", *request->engineConcurrency));
  query->insert(pair<string, long>("ProjectMaxDatasetCount", *request->projectMaxDatasetCount));
  query->insert(pair<string, string>("ProjectName", *request->projectName));
  query->insert(pair<string, long>("ProjectQueriesPerSecond", *request->projectQueriesPerSecond));
  query->insert(pair<string, string>("ServiceRole", *request->serviceRole));
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProject"))},
    {"version", boost::any(string("2020-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectResponse(callApi(params, req, runtime));
}

UpdateProjectResponse Alibabacloud_Imm20200930::Client::updateProject(shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectWithOptions(request, runtime);
}

